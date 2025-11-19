void MainBgmPlayer___ctor(MainBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgmPlayArgs_o *MainBgmPlayer__ExportPlayArgs(MainBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  System_Nullable_float__o p_volume; // x0
  const MethodInfo *v6; // x1
  int32_t PlayTime; // w21
  BgmPlayArgs_o *v8; // x0
  System_Nullable_float__o v9; // x2
  BgmPlayArgs_o *v10; // x20
  const MethodInfo *v11; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5912 & 1) == 0 )
  {
    sub_1C6BA08(&MainBgmPlayArgs_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_float___ctor__);
    byte_4CB5912 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_392B698 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v6);
  v8 = (BgmPlayArgs_o *)sub_1C6BC54(MainBgmPlayArgs_TypeInfo);
  v9 = volume;
  v10 = v8;
  BgmPlayArgs___ctor(v8, bgmName, v9, 0.0, PlayTime, v11);
  return v10;
}