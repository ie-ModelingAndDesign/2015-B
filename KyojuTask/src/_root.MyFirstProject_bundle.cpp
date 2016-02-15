// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/MyFirstProject.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[17];

namespace g{

// public static generated class MyFirstProject_bundle :0
// {
// static MyFirstProject_bundle() :0
static void MyFirstProject_bundle__cctor__fn(uType* __type)
{
    MyFirstProject_bundle::add1x08b1ec65_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"add_1x-ca45...*/]);
    MyFirstProject_bundle::add2x0a66c504_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"add_2x-cbf9...*/]);
    MyFirstProject_bundle::background11f14d0fcd_ = ::g::Uno::BundleFile::New1(::STRINGS[2/*"background1...*/]);
    MyFirstProject_bundle::backgroundde83c32d_ = ::g::Uno::BundleFile::New1(::STRINGS[3/*"background-...*/]);
    MyFirstProject_bundle::gradientcff7ea2f_ = ::g::Uno::BundleFile::New1(::STRINGS[4/*"gradient-d6...*/]);
    MyFirstProject_bundle::konoba7ceea4_ = ::g::Uno::BundleFile::New1(::STRINGS[5/*"kono-ff523b...*/]);
    MyFirstProject_bundle::konoIcon922a243d_ = ::g::Uno::BundleFile::New1(::STRINGS[6/*"konoicon-98...*/]);
    MyFirstProject_bundle::MainView1df5d1f1_ = ::g::Uno::BundleFile::New1(::STRINGS[7/*"mainview-49...*/]);
    MyFirstProject_bundle::nakamurae464ba9f_ = ::g::Uno::BundleFile::New1(::STRINGS[8/*"nakamura-ea...*/]);
    MyFirstProject_bundle::okazaki517d0799_ = ::g::Uno::BundleFile::New1(::STRINGS[9/*"okazaki-f53...*/]);
    MyFirstProject_bundle::penna3aef1788_ = ::g::Uno::BundleFile::New1(::STRINGS[10/*"penna-82395...*/]);
    MyFirstProject_bundle::profile1x88b8f65d_ = ::g::Uno::BundleFile::New1(::STRINGS[11/*"profile_1x-...*/]);
    MyFirstProject_bundle::profile2x8a6dcefc_ = ::g::Uno::BundleFile::New1(::STRINGS[12/*"profile_2x-...*/]);
    MyFirstProject_bundle::stickers1xd80cc5e0_ = ::g::Uno::BundleFile::New1(::STRINGS[13/*"stickers_1x...*/]);
    MyFirstProject_bundle::stickers2xd9c19e7f_ = ::g::Uno::BundleFile::New1(::STRINGS[14/*"stickers_2x...*/]);
    MyFirstProject_bundle::toma5eed60ce_ = ::g::Uno::BundleFile::New1(::STRINGS[15/*"toma-a3c2ad...*/]);
    MyFirstProject_bundle::wadaa29e0c46_ = ::g::Uno::BundleFile::New1(::STRINGS[16/*"wada-e77359...*/]);
}

uClassType* MyFirstProject_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("MyFirstProject_bundle", options);
    type->fp_cctor_ = MyFirstProject_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("add_1x-ca45048d.png");
    ::STRINGS[1] = uString::Const("add_2x-cbf9dd2c.png");
    ::STRINGS[2] = uString::Const("background11-c63108f5.png");
    ::STRINGS[3] = uString::Const("background-e76e3155.png");
    ::STRINGS[4] = uString::Const("gradient-d6020d57.png");
    ::STRINGS[5] = uString::Const("kono-ff523bcc.png");
    ::STRINGS[6] = uString::Const("konoicon-98344765.png");
    ::STRINGS[7] = uString::Const("mainview-49bb4919.js");
    ::STRINGS[8] = uString::Const("nakamura-ea6eddc7.png");
    ::STRINGS[9] = uString::Const("okazaki-f533d819.png");
    ::STRINGS[10] = uString::Const("penna-82395208.otf");
    ::STRINGS[11] = uString::Const("profile_1x-91a36485.png");
    ::STRINGS[12] = uString::Const("profile_2x-93583d24.png");
    ::STRINGS[13] = uString::Const("stickers_1x-1f570060.png");
    ::STRINGS[14] = uString::Const("stickers_2x-210bd8ff.png");
    ::STRINGS[15] = uString::Const("toma-a3c2adf6.png");
    ::STRINGS[16] = uString::Const("wada-e773596e.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::add1x08b1ec65_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::add2x0a66c504_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::background11f14d0fcd_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::backgroundde83c32d_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::gradientcff7ea2f_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::konoba7ceea4_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::konoIcon922a243d_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::MainView1df5d1f1_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::nakamurae464ba9f_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::okazaki517d0799_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::penna3aef1788_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::profile1x88b8f65d_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::profile2x8a6dcefc_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::stickers1xd80cc5e0_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::stickers2xd9c19e7f_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::toma5eed60ce_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::MyFirstProject_bundle::wadaa29e0c46_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::add1x08b1ec65_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::add2x0a66c504_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::background11f14d0fcd_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::backgroundde83c32d_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::gradientcff7ea2f_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::konoba7ceea4_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::konoIcon922a243d_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::MainView1df5d1f1_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::nakamurae464ba9f_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::okazaki517d0799_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::penna3aef1788_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::profile1x88b8f65d_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::profile2x8a6dcefc_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::stickers1xd80cc5e0_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::stickers2xd9c19e7f_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::toma5eed60ce_;
uSStrong< ::g::Uno::BundleFile*> MyFirstProject_bundle::wadaa29e0c46_;
// }

} // ::g
