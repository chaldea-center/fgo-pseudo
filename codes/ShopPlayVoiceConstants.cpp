int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_3205480[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_42160EF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12216/*"SHOP_SCENE_VOICE_BACK1"*/, method);
    sub_B0D8A4(&StringLiteral_12217/*"SHOP_SCENE_VOICE_BACK2"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42160EF = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v5 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v5 = (System_String_o **)*(&off_3E6ECC0 + state - 2);
  return *v5;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_32054D0[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o **v20; // x8

  if ( (byte_42160EE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12228/*"SHOP_SCENE_VOICE_SELL"*/, method);
    sub_B0D8A4(&StringLiteral_12232/*"SHOP_SCENE_VOICE_STONE"*/, v3);
    sub_B0D8A4(&StringLiteral_12230/*"SHOP_SCENE_VOICE_SPECIAL"*/, v4);
    sub_B0D8A4(&StringLiteral_12221/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/, v5);
    sub_B0D8A4(&StringLiteral_12224/*"SHOP_SCENE_VOICE_MANA"*/, v6);
    sub_B0D8A4(&StringLiteral_12225/*"SHOP_SCENE_VOICE_PURE_PRI"*/, v7);
    sub_B0D8A4(&StringLiteral_12229/*"SHOP_SCENE_VOICE_SHOP04"*/, v8);
    sub_B0D8A4(&StringLiteral_12222/*"SHOP_SCENE_VOICE_FRAGMENT"*/, v9);
    sub_B0D8A4(&StringLiteral_12233/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/, v10);
    sub_B0D8A4(&StringLiteral_12223/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/, v11);
    sub_B0D8A4(&StringLiteral_12231/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v12);
    sub_B0D8A4(&StringLiteral_12234/*"SHOP_SCENE_VOICE_TRADE_AP"*/, v13);
    sub_B0D8A4(&StringLiteral_12215/*"SHOP_SCENE_VOICE_ANONYMOUS"*/, v14);
    sub_B0D8A4(&StringLiteral_12227/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/, v15);
    sub_B0D8A4(&StringLiteral_12219/*"SHOP_SCENE_VOICE_EQSTORAGE"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    sub_B0D8A4(&StringLiteral_12220/*"SHOP_SCENE_VOICE_EVENT"*/, v18);
    sub_B0D8A4(&StringLiteral_12226/*"SHOP_SCENE_VOICE_RARE_PRI"*/, v19);
    byte_42160EE = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v20 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v20 = (System_String_o **)*(&off_3E6ED60 + state - 2);
  return *v20;
}