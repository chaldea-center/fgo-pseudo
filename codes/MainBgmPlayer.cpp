void __fastcall MainBgmPlayer___ctor(MainBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall MainBgmPlayer__ExportPlayArgs(MainBgmPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  const MethodInfo *v6; // x1
  int32_t PlayTime; // w21
  BgmPlayArgs_o *v8; // x0
  BgmPlayArgs_o *v9; // x20
  const MethodInfo *v10; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v14; // 0:x2.8

  if ( (byte_4B367C5 & 1) == 0 )
  {
    sub_1BD3458(&MainBgmPlayArgs_TypeInfo, method);
    sub_1BD3458(&Method_System_Nullable_float___ctor__, v3);
    byte_4B367C5 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_36DFDF8 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v6);
  v8 = (BgmPlayArgs_o *)sub_1BD36A4(MainBgmPlayArgs_TypeInfo);
  v14 = volume;
  v9 = v8;
  BgmPlayArgs___ctor(v8, bgmName, v14, 0.0, PlayTime, v10);
  return v9;
}