void __fastcall MainBgmPlayer___ctor(MainBgmPlayer_o *this, const MethodInfo *method)
{
  GeneralBgmPlayer___ctor((GeneralBgmPlayer_o *)this, 0LL);
}


BgmPlayArgs_o *__fastcall MainBgmPlayer__ExportPlayArgs(MainBgmPlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  int32_t PlayTime; // w21
  BgmPlayArgs_o *v11; // x0
  BgmPlayArgs_o *v12; // x20
  System_Nullable_float__o volume; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v16; // 0:x2.8

  if ( (byte_42E726B & 1) == 0 )
  {
    sub_B5D5C4(&MainBgmPlayArgs_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v5, v6, v7);
    byte_42E726B = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, 0LL);
  v11 = (BgmPlayArgs_o *)sub_B5D694(MainBgmPlayArgs_TypeInfo);
  v16 = volume;
  v12 = v11;
  BgmPlayArgs___ctor(v11, bgmName, v16, 0.0, PlayTime, 0LL);
  return v12;
}