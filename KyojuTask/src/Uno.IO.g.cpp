// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.FormatException.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.CppXliStream.h>
#include <Uno.IO.CppXliStreamHandle.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.EndOfStreamException.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.FileSystemImpl.h>
#include <Uno.IO.IOException.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.String.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno/XliInterop.h>
#include <Xli/Array.h>
#include <Xli/Disk.h>
#include <Xli/Text.h>
static uString* STRINGS[4];
static uType* TYPES[11];

namespace g{
namespace Uno{
namespace IO{

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(8)
// ------------------------------------------------------------------------------

// public sealed class BinaryReader :8
// {
BinaryReader_type* BinaryReader_typeof()
{
    static uSStrong<BinaryReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryReader);
    options.TypeSize = sizeof(BinaryReader_type);
    type = (BinaryReader_type*)uClassType::New("Uno.IO.BinaryReader", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryReader__Dispose_fn;
    ::STRINGS[0] = uString::Const("byteCount");
    ::STRINGS[1] = uString::Const("Invalid 7 bit encoded int");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::BinaryReader, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryReader, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryReader, _LittleEndian), 0);
    return type;
}

// public BinaryReader(Uno.IO.Stream stream) :15
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :33
void BinaryReader__Dispose_fn(BinaryReader* __this)
{
    __this->Dispose();
}

// private void FillBuffer(int byteCount) :38
void BinaryReader__FillBuffer_fn(BinaryReader* __this, int* byteCount)
{
    __this->FillBuffer(*byteCount);
}

// public generated bool get_LittleEndian() :29
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :30
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryReader New(Uno.IO.Stream stream) :15
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval)
{
    *__retval = BinaryReader::New1(stream);
}

// protected internal int Read7BitEncodedInt() :333
void BinaryReader__Read7BitEncodedInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->Read7BitEncodedInt();
}

// public byte ReadByte() :103
void BinaryReader__ReadByte_fn(BinaryReader* __this, uint8_t* __retval)
{
    *__retval = __this->ReadByte();
}

// public byte[] ReadBytes(int byteCount) :57
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int* byteCount, uArray** __retval)
{
    *__retval = __this->ReadBytes(*byteCount);
}

// public int ReadInt() :134
void BinaryReader__ReadInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->ReadInt();
}

// public string ReadString() :351
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval)
{
    *__retval = __this->ReadString();
}

// public BinaryReader(Uno.IO.Stream stream) [instance] :15
void BinaryReader::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :33
void BinaryReader::Dispose()
{
    uPtr(_stream)->Dispose();
}

// private void FillBuffer(int byteCount) [instance] :38
void BinaryReader::FillBuffer(int byteCount)
{
    if ((byteCount < 0) || (byteCount > 64))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(_buffer, offset, byteCount - offset);

        if (read == 0)
            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

        offset = offset + read;
    }
    while (offset < byteCount);
}

// public generated bool get_LittleEndian() [instance] :29
bool BinaryReader::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :30
void BinaryReader::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// protected internal int Read7BitEncodedInt() [instance] :333
int BinaryReader::Read7BitEncodedInt()
{
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        uint8_t b = ReadByte();
        count = count | ((int)(b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
            return count;
    }

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Invalid 7 b...*/]));
}

// public byte ReadByte() [instance] :103
uint8_t BinaryReader::ReadByte()
{
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0);
}

// public byte[] ReadBytes(int byteCount) [instance] :57
uArray* BinaryReader::ReadBytes(int byteCount)
{
    if (byteCount < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    uArray* buffer = uArray::New(::TYPES[0/*byte[]*/], byteCount);
    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
            break;
    }
    while (offset < byteCount);

    if (offset == byteCount)
        return buffer;

    uArray* result = uArray::New(::TYPES[0/*byte[]*/], offset);

    for (int i = 0; i < offset; i++)
        uPtr(result)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return result;
}

// public int ReadInt() [instance] :134
int BinaryReader::ReadInt()
{
    FillBuffer(4);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetInt(_buffer, 0, LittleEndian());
}

// public string ReadString() [instance] :351
uString* BinaryReader::ReadString()
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadBytes(Read7BitEncodedInt()));
}

// public BinaryReader New(Uno.IO.Stream stream) [static] :15
BinaryReader* BinaryReader::New1(::g::Uno::IO::Stream* stream)
{
    BinaryReader* obj1 = (BinaryReader*)uNew(BinaryReader_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(365)
// --------------------------------------------------------------------------------

// public sealed class BinaryWriter :365
// {
BinaryWriter_type* BinaryWriter_typeof()
{
    static uSStrong<BinaryWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryWriter);
    options.TypeSize = sizeof(BinaryWriter_type);
    type = (BinaryWriter_type*)uClassType::New("Uno.IO.BinaryWriter", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryWriter__Dispose_fn;
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Uno::UInt_typeof();
    ::TYPES[3] = ::g::Uno::Byte_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::BinaryWriter, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _LittleEndian), 0);
    return type;
}

// public BinaryWriter(Uno.IO.Stream stream) :372
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :390
void BinaryWriter__Dispose_fn(BinaryWriter* __this)
{
    __this->Dispose();
}

// public generated bool get_LittleEndian() :386
void BinaryWriter__get_LittleEndian_fn(BinaryWriter* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :387
void BinaryWriter__set_LittleEndian_fn(BinaryWriter* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryWriter New(Uno.IO.Stream stream) :372
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval)
{
    *__retval = BinaryWriter::New1(stream);
}

// public void Write(byte value) :412
void BinaryWriter__Write1_fn(BinaryWriter* __this, uint8_t* value)
{
    __this->Write1(*value);
}

// public void Write(byte[] value) :401
void BinaryWriter__Write2_fn(BinaryWriter* __this, uArray* value)
{
    __this->Write2(value);
}

// public void Write(int value) :435
void BinaryWriter__Write13_fn(BinaryWriter* __this, int* value)
{
    __this->Write13(*value);
}

// public void Write(string value) :592
void BinaryWriter__Write24_fn(BinaryWriter* __this, uString* value)
{
    __this->Write24(value);
}

// protected internal void Write7BitEncodedInt(int value) :581
void BinaryWriter__Write7BitEncodedInt_fn(BinaryWriter* __this, int* value)
{
    __this->Write7BitEncodedInt(*value);
}

// public BinaryWriter(Uno.IO.Stream stream) [instance] :372
void BinaryWriter::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :390
void BinaryWriter::Dispose()
{
    uPtr(_stream)->Dispose();
}

// public generated bool get_LittleEndian() [instance] :386
bool BinaryWriter::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :387
void BinaryWriter::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// public void Write(byte value) [instance] :412
void BinaryWriter::Write1(uint8_t value)
{
    uPtr(_buffer)->Item<uint8_t>(0) = value;
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte[] value) [instance] :401
void BinaryWriter::Write2(uArray* value)
{
    uPtr(_stream)->Write(value, 0, uPtr(value)->Length());
}

// public void Write(int value) [instance] :435
void BinaryWriter::Write13(int value)
{
    ::g::Uno::Runtime::Implementation::BufferImpl::SetInt(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 4);
}

// public void Write(string value) [instance] :592
void BinaryWriter::Write24(uString* value)
{
    uArray* bytes = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    Write7BitEncodedInt(uPtr(bytes)->Length());
    Write2(bytes);
}

// protected internal void Write7BitEncodedInt(int value) [instance] :581
void BinaryWriter::Write7BitEncodedInt(int value)
{
    uint32_t v = (uint32_t)value;

    while (v >= 128U)
    {
        Write1((uint8_t)(v | 128U));
        v = v >> 7;
    }

    Write1((uint8_t)v);
}

// public BinaryWriter New(Uno.IO.Stream stream) [static] :372
BinaryWriter* BinaryWriter::New1(::g::Uno::IO::Stream* stream)
{
    BinaryWriter* obj1 = (BinaryWriter*)uNew(BinaryWriter_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(614)
// --------------------------------------------------------------------------------

// internal sealed extern class CppXliStream :614
// {
::g::Uno::IO::Stream_type* CppXliStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppXliStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.CppXliStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))CppXliStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))CppXliStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))CppXliStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::CppXliStreamHandle_typeof(), offsetof(::g::Uno::IO::CppXliStream, _handle), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::CppXliStream, _Position), 0);
    return type;
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) :618
void CppXliStream__ctor_1_fn(CppXliStream* __this, ::Xli::Stream** handle)
{
    __this->ctor_1(*handle);
}

// public override sealed extern void Dispose(bool disposing) :656
void CppXliStream__Dispose1_fn(CppXliStream* __this, bool* disposing_)
{
    bool disposing__ = *disposing_;
    if (__this->_handle != NULL)
        {
            __this->_handle->Release();
            __this->_handle = NULL;
        }
}

// public override sealed extern void Flush() :653
void CppXliStream__Flush_fn(CppXliStream* __this)
{
    try
        {
            __this->_handle->Flush();
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public override sealed extern long get_Length() :633
void CppXliStream__get_Length_fn(CppXliStream* __this, int64_t* __retval)
{
    try
        {
            return *__retval = __this->_handle->GetLength(), void();
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) :618
void CppXliStream__New1_fn(::Xli::Stream** handle, CppXliStream** __retval)
{
    *__retval = CppXliStream::New1(*handle);
}

// public generated override sealed extern long get_Position() :636
void CppXliStream__get_Position_fn(CppXliStream* __this, int64_t* __retval)
{
    try
        {
            return *__retval = __this->_handle->GetPosition(), void();
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public generated override sealed extern void set_Position(long value) :636
void CppXliStream__set_Position_fn(CppXliStream* __this, int64_t* value_)
{
    int64_t value__ = *value_;
    try
        {
            __this->_handle->Seek((int)value__, Xli::SeekOriginBegin);
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public override sealed extern int Read(byte[] dst, int byteOffset, int byteCount) :644
void CppXliStream__Read_fn(CppXliStream* __this, uArray* dst_, int* byteOffset_, int* byteCount_, int* __retval)
{
    int byteOffset__ = *byteOffset_;
    int byteCount__ = *byteCount_;
    try
        {
            // TODO: Bounds check
            return *__retval = __this->_handle->Read((uint8_t*)dst_->Ptr() + byteOffset__, 1, byteCount__), void();
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public override sealed extern void Write(byte[] src, int byteOffset, int byteCount) :647
void CppXliStream__Write_fn(CppXliStream* __this, uArray* src_, int* byteOffset_, int* byteCount_)
{
    int byteOffset__ = *byteOffset_;
    int byteCount__ = *byteCount_;
    try
        {
            // TODO: Bounds check
            __this->_handle->Write((const uint8_t*)src_->Ptr() + byteOffset__, 1, byteCount__);
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) [instance] :618
void CppXliStream::ctor_1(::Xli::Stream* handle)
{
    ctor_();
    _handle = handle;
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) [static] :618
CppXliStream* CppXliStream::New1(::Xli::Stream* handle)
{
    CppXliStream* obj1 = (CppXliStream*)uNew(CppXliStream_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(609)
// --------------------------------------------------------------------------------

// internal extern struct CppXliStreamHandle :609
// {
uStructType* CppXliStreamHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::Xli::Stream*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.CppXliStreamHandle", options);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(668)
// --------------------------------------------------------------------------------

// public static class Directory :668
// {
uClassType* Directory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Directory", options);
    return type;
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :670
void Directory__GetUserDirectory_fn(int* dir, uString** __retval)
{
    *__retval = Directory::GetUserDirectory(*dir);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :670
uString* Directory::GetUserDirectory(int dir)
{
    return ::g::Uno::IO::FileSystemImpl::GetUserDirectory(dir);
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1260)
// ---------------------------------------------------------------------------------

// public sealed class EndOfStreamException :1260
// {
::g::Uno::Exception_type* EndOfStreamException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(EndOfStreamException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.EndOfStreamException", options);
    type->SetBase(::g::Uno::IO::IOException_typeof());
    type->fp_ctor_ = (void*)EndOfStreamException__New5_fn;
    ::STRINGS[2] = uString::Const("Reached end of stream");
    type->SetFields(3);
    return type;
}

// public EndOfStreamException() :1262
void EndOfStreamException__ctor_4_fn(EndOfStreamException* __this)
{
    __this->ctor_4();
}

// public EndOfStreamException New() :1262
void EndOfStreamException__New5_fn(EndOfStreamException** __retval)
{
    *__retval = EndOfStreamException::New5();
}

// public EndOfStreamException() [instance] :1262
void EndOfStreamException::ctor_4()
{
    ctor_3(::STRINGS[2/*"Reached end...*/]);
}

// public EndOfStreamException New() [static] :1262
EndOfStreamException* EndOfStreamException::New5()
{
    EndOfStreamException* obj1 = (EndOfStreamException*)uNew(EndOfStreamException_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(809)
// --------------------------------------------------------------------------------

// public static class File :809
// {
uClassType* File_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.File", options);
    ::TYPES[4] = ::g::Uno::IO::Stream_typeof();
    return type;
}

// public static void Delete(string filename) :841
void File__Delete_fn(uString* filename)
{
    File::Delete(filename);
}

// public static bool Exists(string filename) :873
void File__Exists_fn(uString* filename, bool* __retval)
{
    *__retval = File::Exists(filename);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) :831
void File__Open_fn(uString* filename, int* filemode, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::Open(filename, *filemode);
}

// public static Uno.IO.Stream OpenRead(string filename) :811
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::OpenRead(filename);
}

// public static byte[] ReadAllBytes(string filename) :920
void File__ReadAllBytes_fn(uString* filename, uArray** __retval)
{
    *__retval = File::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) :904
void File__ReadAllText_fn(uString* filename, uString** __retval)
{
    *__retval = File::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :936
void File__WriteAllBytes_fn(uString* filename, uArray* bytes)
{
    File::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) :928
void File__WriteAllText_fn(uString* filename, uString* text)
{
    File::WriteAllText(filename, text);
}

// public static void Delete(string filename) [static] :841
void File::Delete(uString* filename)
{
    ::g::Uno::IO::FileSystemImpl::DeleteFile(filename);
}

// public static bool Exists(string filename) [static] :873
bool File::Exists(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::IsFile(filename);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) [static] :831
::g::Uno::IO::Stream* File::Open(uString* filename, int filemode)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpen(filename, filemode));
}

// public static Uno.IO.Stream OpenRead(string filename) [static] :811
::g::Uno::IO::Stream* File::OpenRead(uString* filename)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpenRead(filename));
}

// public static byte[] ReadAllBytes(string filename) [static] :920
uArray* File::ReadAllBytes(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) [static] :904
uString* File::ReadAllText(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :936
void File::WriteAllBytes(uString* filename, uArray* bytes)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) [static] :928
void File::WriteAllText(uString* filename, uString* text)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllText(filename, text);
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(962)
// --------------------------------------------------------------------------------

// public enum FileMode :962
uEnumType* FileMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "CreateNew", 1LL,
        "Create", 2LL,
        "Open", 3LL,
        "OpenOrCreate", 4LL,
        "Truncate", 5LL,
        "Append", 6LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1110)
// ---------------------------------------------------------------------------------

// internal static extern class FileSystemImpl :1110
// {
uClassType* FileSystemImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.FileSystemImpl", options);
    return type;
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) :1119
void FileSystemImpl__CppXliOpen_fn(uString* filename_, int* filemode_, ::Xli::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpen(filename_, *filemode_);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) :1113
void FileSystemImpl__CppXliOpenRead_fn(uString* filename_, ::Xli::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpenRead(filename_);
}

// public static void DeleteFile(string filename) :1158
void FileSystemImpl__DeleteFile_fn(uString* filename_)
{
    FileSystemImpl::DeleteFile(filename_);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :1122
void FileSystemImpl__GetUserDirectory_fn(int* dir_, uString** __retval)
{
    *__retval = FileSystemImpl::GetUserDirectory(*dir_);
}

// public static bool IsFile(string filename) :1182
void FileSystemImpl__IsFile_fn(uString* filename_, bool* __retval)
{
    *__retval = FileSystemImpl::IsFile(filename_);
}

// public static byte[] ReadAllBytes(string filename) :1206
void FileSystemImpl__ReadAllBytes_fn(uString* filename_, uArray** __retval)
{
    *__retval = FileSystemImpl::ReadAllBytes(filename_);
}

// public static string ReadAllText(string filename) :1200
void FileSystemImpl__ReadAllText_fn(uString* filename_, uString** __retval)
{
    *__retval = FileSystemImpl::ReadAllText(filename_);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :1224
void FileSystemImpl__WriteAllBytes_fn(uString* filename_, uArray* bytes_)
{
    FileSystemImpl::WriteAllBytes(filename_, bytes_);
}

// public static void WriteAllText(string filename, string text) :1218
void FileSystemImpl__WriteAllText_fn(uString* filename_, uString* text_)
{
    FileSystemImpl::WriteAllText(filename_, text_);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) [static] :1119
::Xli::Stream* FileSystemImpl::CppXliOpen(uString* filename_, int filemode_)
{
    try
        {
            Xli::FileMode xliFileMode = Xli::FileModeRead;
            switch(filemode_)
            {
                case 5:
                    if (!Xli::Disk->IsFile(uStringToXliString(filename_)))
                    {
                        XLI_THROW("File not found");
                    }
                case 2:
                    {
                        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeWrite);
                        f->Close();
                        xliFileMode = Xli::FileModeReadWrite;
                        break;
                    }
    
                case 1:
                    if (Xli::Disk->IsFile(uStringToXliString(filename_)))
                    {
                        XLI_THROW("File already exists.");
                    }
                    xliFileMode = Xli::FileModeWrite;
                    break;
    
                case 4:
                    if (!Xli::Disk->IsFile(uStringToXliString(filename_)))
                    {
                        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeWrite);
                        f->Close();
                    }
                case 3:
                    xliFileMode = Xli::FileModeReadWrite;   
                    break;
    
                case 6:
                    xliFileMode = Xli::FileModeAppend;
                    break;
            }
            return Xli::Disk->OpenFile(uStringToXliString(filename_), xliFileMode);
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) [static] :1113
::Xli::Stream* FileSystemImpl::CppXliOpenRead(uString* filename_)
{
    try
        {
            return Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeRead);
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static void DeleteFile(string filename) [static] :1158
void FileSystemImpl::DeleteFile(uString* filename_)
{
    try
        {
            Xli::Disk->DeleteFile(uStringToXliString(filename_));
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :1122
uString* FileSystemImpl::GetUserDirectory(int dir_)
{
    try
        {
            return uStringFromXliString(Xli::Disk->GetSystemDirectory((Xli::SystemDirectory)dir_));
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static bool IsFile(string filename) [static] :1182
bool FileSystemImpl::IsFile(uString* filename_)
{
    try
        {
            return Xli::Disk->IsFile(uStringToXliString(filename_));
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static byte[] ReadAllBytes(string filename) [static] :1206
uArray* FileSystemImpl::ReadAllBytes(uString* filename_)
{
    try
        {
            Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeRead);
            uArray* result = uArray::New(::g::Uno::Byte_typeof()->Array(), f->GetLength());
            f->ReadSafe(result->Ptr(), 1, result->Length());
            return result;
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static string ReadAllText(string filename) [static] :1200
uString* FileSystemImpl::ReadAllText(uString* filename_)
{
    try
        {
            return uStringFromXliString(Xli::Text::Load(uStringToXliString(filename_)));
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :1224
void FileSystemImpl::WriteAllBytes(uString* filename_, uArray* bytes_)
{
    try
        {
            Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeWrite);
            f->Write(bytes_->Ptr(), 1, bytes_->Length());
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}

// public static void WriteAllText(string filename, string text) [static] :1218
void FileSystemImpl::WriteAllText(uString* filename_, uString* text_)
{
    try
        {
            Xli::Text::Save(uStringToXliString(filename_), uStringToXliString(text_));
        }
        catch (const Xli::Exception& e)
        {
            throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1251)
// ---------------------------------------------------------------------------------

// public class IOException :1251
// {
::g::Uno::Exception_type* IOException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IOException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.IOException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    return type;
}

// public IOException(string message) :1253
void IOException__ctor_3_fn(IOException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public IOException New(string message) :1253
void IOException__New4_fn(uString* message, IOException** __retval)
{
    *__retval = IOException::New4(message);
}

// public IOException(string message) [instance] :1253
void IOException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public IOException New(string message) [static] :1253
IOException* IOException::New4(uString* message)
{
    IOException* obj1 = (IOException*)uNew(IOException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1278)
// ---------------------------------------------------------------------------------

// public sealed class MemoryStream :1278
// {
::g::Uno::IO::Stream_type* MemoryStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MemoryStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.MemoryStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_ctor_ = (void*)MemoryStream__New1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))MemoryStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))MemoryStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))MemoryStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Long_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[6] = ::g::Uno::Array_typeof()->MakeMethod(1, ::g::Uno::Byte_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::MemoryStream, _buffer), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _length), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::MemoryStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _Position), 0);
    return type;
}

// public generated MemoryStream() :1278
void MemoryStream__ctor_1_fn(MemoryStream* __this)
{
    __this->ctor_1();
}

// public int get_Capacity() :1310
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :1365
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :1399
void MemoryStream__Flush_fn(MemoryStream* __this)
{
}

// public byte[] GetBuffer() :1389
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :1302
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public generated MemoryStream New() :1278
void MemoryStream__New1_fn(MemoryStream** __retval)
{
    *__retval = MemoryStream::New1();
}

// public generated override sealed long get_Position() :1317
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :1317
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :1337
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    int i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :1381
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :1323
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    __this->EnsureCapacity(byteCount_);

    for (int i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public generated MemoryStream() [instance] :1278
void MemoryStream::ctor_1()
{
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
}

// public int get_Capacity() [instance] :1310
int MemoryStream::Capacity()
{
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :1365
void MemoryStream::EnsureCapacity(int byteCount)
{
    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :1389
uArray* MemoryStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :1381
void MemoryStream::ResizeTo(int newSize)
{
    uArray* newBuffer = uArray::New(::TYPES[0/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[6/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public generated MemoryStream New() [static] :1278
MemoryStream* MemoryStream::New1()
{
    MemoryStream* obj1 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1410)
// ---------------------------------------------------------------------------------

// public static class Path :1410
// {
uClassType* Path_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Path", options);
    ::TYPES[7] = ::g::Uno::String_typeof();
    ::TYPES[8] = uObject_typeof();
    return type;
}

// public static string Combine(string a, string b) :1423
void Path__Combine_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = Path::Combine(a, b);
}

// public static char get_DirectorySeparatorChar() :1414
void Path__get_DirectorySeparatorChar_fn(uChar* __retval)
{
    *__retval = Path::DirectorySeparatorChar();
}

// public static string GetFileName(string filename) :1526
void Path__GetFileName_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetFileName(filename);
}

// public static bool IsPathRooted(string filename) :1614
void Path__IsPathRooted_fn(uString* filename, bool* __retval)
{
    *__retval = Path::IsPathRooted(filename);
}

// public static string Combine(string a, string b) [static] :1423
uString* Path::Combine(uString* a, uString* b)
{
    if (Path::IsPathRooted(b))
        return b;

    if ((::g::Uno::String::IsNullOrEmpty(a) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '\\')) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '/'))
        return ::g::Uno::String::op_Addition2(a, b);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(a, uBox<uChar>(::g::Uno::Char_typeof(), Path::DirectorySeparatorChar())), b);
}

// public static string GetFileName(string filename) [static] :1526
uString* Path::GetFileName(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        return NULL;

    for (int i = uPtr(filename)->Length() - 1; i >= 0; i--)

        switch (filename->Item(i))
        {
            case '\\':
            case '/':
                return ::g::Uno::String::Substring(uPtr(filename), i + 1);
        }

    return filename;
}

// public static bool IsPathRooted(string filename) [static] :1614
bool Path::IsPathRooted(uString* filename)
{
    return ((uPtr(filename)->Length() > 0) && ((uPtr(filename)->Item(0) == '\\') || (uPtr(filename)->Item(0) == '/'))) || ((uPtr(filename)->Length() > 1) && (uPtr(filename)->Item(1) == ':'));
}

// public static char get_DirectorySeparatorChar() [static] :1414
uChar Path::DirectorySeparatorChar()
{
    return '/';
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1651)
// ---------------------------------------------------------------------------------

// public abstract class Stream :1651
// {
Stream_type* Stream_typeof()
{
    static uSStrong<Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stream);
    options.TypeSize = sizeof(Stream_type);
    type = (Stream_type*)uClassType::New("Uno.IO.Stream", options);
    type->fp_Close = Stream__Close_fn;
    type->fp_Dispose1 = Stream__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Stream__Dispose_fn;
    ::TYPES[8] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Stream_type, interface0));
    return type;
}

// protected generated Stream() :1651
void Stream__ctor__fn(Stream* __this)
{
    __this->ctor_();
}

// public virtual void Close() :1707
void Stream__Close_fn(Stream* __this)
{
    __this->Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(__this);
}

// public void Dispose() :1713
void Stream__Dispose_fn(Stream* __this)
{
    __this->Dispose();
}

// public virtual void Dispose(bool disposing) :1703
void Stream__Dispose1_fn(Stream* __this, bool* disposing)
{
}

// protected generated Stream() [instance] :1651
void Stream::ctor_()
{
}

// public void Dispose() [instance] :1713
void Stream::Dispose()
{
    Close();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1729)
// ---------------------------------------------------------------------------------

// public sealed class StreamReader :1729
// {
::g::Uno::IO::TextReader_type* StreamReader_typeof()
{
    static uSStrong< ::g::Uno::IO::TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamReader);
    options.TypeSize = sizeof(::g::Uno::IO::TextReader_type);
    type = (::g::Uno::IO::TextReader_type*)uClassType::New("Uno.IO.StreamReader", options);
    type->SetBase(::g::Uno::IO::TextReader_typeof());
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextReader*, bool*))StreamReader__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextReader__Dispose_fn;
    ::TYPES[9] = ::g::Uno::Text::Encoding_typeof();
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Char_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::StreamReader, _byteBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _byteLen), 0,
        ::g::Uno::Char_typeof()->Array(), offsetof(::g::Uno::IO::StreamReader, _charBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charLen), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charPos), 0,
        ::g::Uno::Text::Decoder_typeof(), offsetof(::g::Uno::IO::StreamReader, _decoder), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamReader, _stream), 0);
    return type;
}

// public StreamReader(Uno.IO.Stream stream) :1763
void StreamReader__ctor_1_fn(StreamReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :1781
void StreamReader__Dispose1_fn(StreamReader* __this, bool* disposing)
{
    bool disposing_ = *disposing;

    if (disposing_ && (__this->_stream != NULL))
    {
        uPtr(__this->_stream)->Close();
        __this->_stream = NULL;
    }

    ::g::Uno::IO::TextReader__Dispose1_fn(__this, uCRef(disposing_));
}

// public StreamReader New(Uno.IO.Stream stream) :1763
void StreamReader__New1_fn(::g::Uno::IO::Stream* stream, StreamReader** __retval)
{
    *__retval = StreamReader::New1(stream);
}

// private void ReadBuffer() :1866
void StreamReader__ReadBuffer_fn(StreamReader* __this)
{
    __this->ReadBuffer();
}

// public string ReadToEnd() :1849
void StreamReader__ReadToEnd_fn(StreamReader* __this, uString** __retval)
{
    *__retval = __this->ReadToEnd();
}

// public StreamReader(Uno.IO.Stream stream) [instance] :1763
void StreamReader::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _decoder = uPtr(::g::Uno::Text::Encoding::UTF8())->GetDecoder();
    _byteBuffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _byteLen = 0;
    _charBuffer = uArray::New(::TYPES[10/*char[]*/], 256);
    _charPos = 0;
    _charLen = 0;
}

// private void ReadBuffer() [instance] :1866
void StreamReader::ReadBuffer()
{
    _charPos = 0;
    _charLen = 0;

    do
    {
        _byteLen = uPtr(_stream)->Read(_byteBuffer, 0, uPtr(_byteBuffer)->Length());

        if (_byteLen == 0)
            return;

        _charLen = (_charLen + uPtr(_decoder)->GetChars(_byteBuffer, 0, _byteLen, _charBuffer, _charLen));
    }
    while (_charLen == 0);
}

// public string ReadToEnd() [instance] :1849
uString* StreamReader::ReadToEnd()
{
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (_charLen == 0)
        ReadBuffer();

    while (_charLen != 0)
    {
        int count = _charLen - _charPos;
        uArray* array = uArray::New(::TYPES[10/*char[]*/], count);

        for (int i = 0; i < count; i++)
            array->Item<uChar>(i) = uPtr(_charBuffer)->Item<uChar>(_charPos + i);

        uPtr(stringBuilder)->Append(array);
        ReadBuffer();
    }

    return stringBuilder->ToString();
}

// public StreamReader New(Uno.IO.Stream stream) [static] :1763
StreamReader* StreamReader::New1(::g::Uno::IO::Stream* stream)
{
    StreamReader* obj1 = (StreamReader*)uNew(StreamReader_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(1892)
// ---------------------------------------------------------------------------------

// public sealed class StreamWriter :1892
// {
::g::Uno::IO::TextWriter_type* StreamWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StreamWriter", options);
    type->SetBase(::g::Uno::IO::TextWriter_typeof());
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StreamWriter__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::StreamWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamWriter, _index), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamWriter, _stream), 0);
    return type;
}

// public StreamWriter(Uno.IO.Stream stream) :1908
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :1916
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    __this->Flush();

    if (disposing_ && (__this->_stream != NULL))
        uPtr(__this->_stream)->Close();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public void Flush() :1982
void StreamWriter__Flush_fn(StreamWriter* __this)
{
    __this->Flush();
}

// public StreamWriter New(Uno.IO.Stream stream) :1908
void StreamWriter__New1_fn(::g::Uno::IO::Stream* stream, StreamWriter** __retval)
{
    *__retval = StreamWriter::New1(stream);
}

// private void Write(byte[] array, int index, int count) :1964
void StreamWriter__Write13_fn(StreamWriter* __this, uArray* array, int* index, int* count)
{
    __this->Write13(array, *index, *count);
}

// public void Write(string value) :1958
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value)
{
    __this->Write9(value);
}

// public StreamWriter(Uno.IO.Stream stream) [instance] :1908
void StreamWriter::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _index = 0;
}

// public void Flush() [instance] :1982
void StreamWriter::Flush()
{
    if (_index != 0)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    uPtr(_stream)->Flush();
}

// private void Write(byte[] array, int index, int count) [instance] :1964
void StreamWriter::Write13(uArray* array, int index, int count)
{
    if ((_index + count) >= 256)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    if (count >= 256)
    {
        uPtr(_stream)->Write(array, index, count);
        return;
    }

    for (int i = 0; i < count; i++)
        uPtr(_buffer)->Item<uint8_t>(_index++) = uPtr(array)->Item<uint8_t>(index + i);
}

// public void Write(string value) [instance] :1958
void StreamWriter::Write9(uString* value)
{
    uArray* array = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    Write13(array, 0, uPtr(array)->Length());
}

// public StreamWriter New(Uno.IO.Stream stream) [static] :1908
StreamWriter* StreamWriter::New1(::g::Uno::IO::Stream* stream)
{
    StreamWriter* obj1 = (StreamWriter*)uNew(StreamWriter_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(2225)
// ---------------------------------------------------------------------------------

// public abstract class TextReader :2225
// {
TextReader_type* TextReader_typeof()
{
    static uSStrong<TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextReader);
    options.TypeSize = sizeof(TextReader_type);
    type = (TextReader_type*)uClassType::New("Uno.IO.TextReader", options);
    type->fp_Dispose1 = TextReader__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextReader__Dispose_fn;
    ::TYPES[8] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextReader_type, interface0));
    return type;
}

// protected generated TextReader() :2225
void TextReader__ctor__fn(TextReader* __this)
{
    __this->ctor_();
}

// public void Dispose() :2229
void TextReader__Dispose_fn(TextReader* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :2235
void TextReader__Dispose1_fn(TextReader* __this, bool* disposing)
{
}

// protected generated TextReader() [instance] :2225
void TextReader::ctor_()
{
}

// public void Dispose() [instance] :2229
void TextReader::Dispose()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(2343)
// ---------------------------------------------------------------------------------

// public abstract class TextWriter :2343
// {
TextWriter_type* TextWriter_typeof()
{
    static uSStrong<TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextWriter);
    options.TypeSize = sizeof(TextWriter_type);
    type = (TextWriter_type*)uClassType::New("Uno.IO.TextWriter", options);
    type->fp_Dispose1 = TextWriter__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextWriter__Dispose_fn;
    ::STRINGS[3] = uString::Const("\r\n"
        "");
    ::TYPES[8] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextWriter_type, interface0));
    return type;
}

// protected generated TextWriter() :2343
void TextWriter__ctor__fn(TextWriter* __this)
{
    __this->ctor_();
}

// public void Dispose() :2347
void TextWriter__Dispose_fn(TextWriter* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :2353
void TextWriter__Dispose1_fn(TextWriter* __this, bool* disposing)
{
}

// protected generated TextWriter() [instance] :2343
void TextWriter::ctor_()
{
}

// public void Dispose() [instance] :2347
void TextWriter::Dispose()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/IO/$.uno(795)
// --------------------------------------------------------------------------------

// public enum UserDirectory :795
uEnumType* UserDirectory_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.UserDirectory", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Config", 0LL,
        "Data", 1LL,
        "Desktop", 2LL,
        "Downloads", 3LL,
        "Templates", 4LL,
        "Public", 5LL,
        "Documents", 6LL,
        "Music", 7LL,
        "Pictures", 8LL,
        "Videos", 9LL);
    return type;
}

}}} // ::g::Uno::IO
