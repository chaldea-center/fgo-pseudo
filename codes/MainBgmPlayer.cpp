void __fastcall MainBgmPlayer___ctor(MainBgmPlayer_o *this, const MethodInfo *method)
{
  GeneralBgmPlayer___ctor((GeneralBgmPlayer_o *)this, 0LL);
}


BgmPlayArgs_o *__fastcall MainBgmPlayer__ExportPlayArgs(MainBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  int32_t PlayTime; // w21
  BgmPlayArgs_o *v6; // x0
  BgmPlayArgs_o *v7; // x20
  System_Nullable_float__o volume; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v11; // 0:x2.8

  if ( (byte_4389E5B & 1) == 0 )
  {
    sub_B775C4(&MainBgmPlayArgs_TypeInfo);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    byte_4389E5B = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, 0LL);
  v6 = (BgmPlayArgs_o *)sub_B77694(MainBgmPlayArgs_TypeInfo);
  v11 = volume;
  v7 = v6;
  BgmPlayArgs___ctor(v6, bgmName, v11, 0.0, PlayTime, 0LL);
  return v7;
}