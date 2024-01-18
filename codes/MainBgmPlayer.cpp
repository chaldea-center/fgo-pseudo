void __fastcall MainBgmPlayer___ctor(MainBgmPlayer_o *this, const MethodInfo *method)
{
  GeneralBgmPlayer___ctor((GeneralBgmPlayer_o *)this, 0LL);
}


BgmPlayArgs_o *__fastcall MainBgmPlayer__ExportPlayArgs(MainBgmPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  int32_t PlayTime; // w21
  BgmPlayArgs_o *v7; // x0
  BgmPlayArgs_o *v8; // x20
  System_Nullable_float__o volume; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v12; // 0:x2.8

  if ( (byte_41862BB & 1) == 0 )
  {
    sub_B2C35C(&MainBgmPlayArgs_TypeInfo, method);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v3);
    byte_41862BB = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, 0LL);
  v7 = (BgmPlayArgs_o *)sub_B2C42C(MainBgmPlayArgs_TypeInfo);
  v12 = volume;
  v8 = v7;
  BgmPlayArgs___ctor(v7, bgmName, v12, 0.0, PlayTime, 0LL);
  return v8;
}