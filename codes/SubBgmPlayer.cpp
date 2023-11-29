void __fastcall SubBgmPlayer___ctor(SubBgmPlayer_o *this, const MethodInfo *method)
{
  GeneralBgmPlayer___ctor((GeneralBgmPlayer_o *)this, 0LL);
}


BgmPlayArgs_o *__fastcall SubBgmPlayer__ExportPlayArgs(SubBgmPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  int32_t PlayTime; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BgmPlayArgs_o *v11; // x0
  BgmPlayArgs_o *v12; // x20
  System_Nullable_float__o volume; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v16; // 0:x2.8

  if ( (byte_40F7C1E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_float___ctor__, method);
    sub_B16FFC(&SubBgmPlayArgs_TypeInfo, v3);
    byte_40F7C1E = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, 0LL);
  v11 = (BgmPlayArgs_o *)sub_B170CC(SubBgmPlayArgs_TypeInfo, v7, v8, v9, v10);
  v16 = volume;
  v12 = v11;
  BgmPlayArgs___ctor(v11, bgmName, v16, 0.0, PlayTime, 0LL);
  return v12;
}