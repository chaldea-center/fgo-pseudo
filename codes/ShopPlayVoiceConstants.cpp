int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_32ECAB0[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_43536E7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12346/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_B70694(&StringLiteral_12347/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43536E7 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_3FA2F40 + state - 2);
  return *v3;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_32ECB00[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_43536E6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12358/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_B70694(&StringLiteral_12362/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_B70694(&StringLiteral_12360/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_B70694(&StringLiteral_12351/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_B70694(&StringLiteral_12354/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_B70694(&StringLiteral_12355/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_B70694(&StringLiteral_12359/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_B70694(&StringLiteral_12352/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_B70694(&StringLiteral_12363/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_B70694(&StringLiteral_12353/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_B70694(&StringLiteral_12361/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_B70694(&StringLiteral_12364/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_B70694(&StringLiteral_12345/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_B70694(&StringLiteral_12357/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_B70694(&StringLiteral_12349/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_12350/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_B70694(&StringLiteral_12356/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_43536E6 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_3FA2FE0 + state - 2);
  return *v3;
}