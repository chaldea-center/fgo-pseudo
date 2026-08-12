void MainBgmPlayer___ctor(MainBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgmPlayArgs_o *MainBgmPlayer__ExportPlayArgs(MainBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  const MethodInfo *v5; // x1
  int32_t PlayTime; // w20
  BgmPlayArgs_o *v7; // x0
  int64_t v8; // x3
  BgmPlayArgs_o *v9; // x20
  const MethodInfo *v10; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596FE1D & 1) == 0 )
  {
    sub_2213A60(&MainBgmPlayArgs_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    byte_596FE1D = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0;
  bgmVolume = this->fields.bgmVolume;
  volume = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volume,
    bgmVolume,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v5);
  v7 = (BgmPlayArgs_o *)sub_2213CCC(MainBgmPlayArgs_TypeInfo);
  v8 = PlayTime;
  v9 = v7;
  BgmPlayArgs___ctor(v7, bgmName, volume, 0.0, v8, v10);
  return v9;
}