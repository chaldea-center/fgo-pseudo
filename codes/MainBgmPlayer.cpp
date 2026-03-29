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
  int32_t PlayTime; // w21
  BgmPlayArgs_o *v7; // x20
  const MethodInfo *v8; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3004D & 1) == 0 )
  {
    sub_1C93AD4(&MainBgmPlayArgs_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    byte_4D3004D = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0;
  bgmVolume = this->fields.bgmVolume;
  volume = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volume,
    bgmVolume,
    (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v5);
  v7 = (BgmPlayArgs_o *)sub_1C93D20(MainBgmPlayArgs_TypeInfo);
  BgmPlayArgs___ctor(v7, bgmName, volume, 0.0, PlayTime, v8);
  return v7;
}