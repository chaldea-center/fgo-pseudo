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
  __int64 v7; // x1
  __int64 v8; // x2
  BgmPlayArgs_o *v9; // x0
  BgmPlayArgs_o *v10; // x20
  System_Nullable_float__o volume; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v14; // 0:x2.8

  if ( (byte_4212F9D & 1) == 0 )
  {
    sub_B0D8A4(&MainBgmPlayArgs_TypeInfo, method);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v3);
    byte_4212F9D = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, 0LL);
  v9 = (BgmPlayArgs_o *)sub_B0D974(MainBgmPlayArgs_TypeInfo, v7, v8);
  v14 = volume;
  v10 = v9;
  BgmPlayArgs___ctor(v9, bgmName, v14, 0.0, PlayTime, 0LL);
  return v10;
}