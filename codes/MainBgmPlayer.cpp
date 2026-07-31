void MainBgmPlayer___ctor(MainBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgmPlayArgs_o *MainBgmPlayer__ExportPlayArgs(MainBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x19
  System_Nullable_float__o p_volume; // x0
  float bgmVolume; // s0
  const MethodInfo *v6; // x1
  int32_t PlayTime; // w20
  BgmPlayArgs_o *v8; // x0
  System_Nullable_float__o v9; // x2
  int64_t v10; // x3
  BgmPlayArgs_o *v11; // x20
  const MethodInfo *v12; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937CB0 & 1) == 0 )
  {
    sub_21FFC50(&MainBgmPlayArgs_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    byte_5937CB0 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0;
  p_volume = (System_Nullable_float__o)&volume;
  bgmVolume = this->fields.bgmVolume;
  volume = 0;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v6);
  v8 = (BgmPlayArgs_o *)sub_21FFEBC(MainBgmPlayArgs_TypeInfo);
  v9 = volume;
  v10 = PlayTime;
  v11 = v8;
  BgmPlayArgs___ctor(v8, bgmName, v9, 0.0, v10, v12);
  return v11;
}