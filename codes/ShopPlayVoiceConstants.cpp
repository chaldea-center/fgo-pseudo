int32_t ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_ED03AC[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_593476D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12643/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_21FFC50(&StringLiteral_12644/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593476D = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_5296340 + (unsigned int)(state - 2));
  return *v3;
}


int32_t ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_ED0400[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_593476C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12655/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_21FFC50(&StringLiteral_12659/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_21FFC50(&StringLiteral_12657/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_21FFC50(&StringLiteral_12648/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_21FFC50(&StringLiteral_12651/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_21FFC50(&StringLiteral_12652/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_21FFC50(&StringLiteral_12656/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_21FFC50(&StringLiteral_12649/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_21FFC50(&StringLiteral_12660/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_21FFC50(&StringLiteral_12650/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_21FFC50(&StringLiteral_12658/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_21FFC50(&StringLiteral_12661/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_21FFC50(&StringLiteral_12642/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_21FFC50(&StringLiteral_12654/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_21FFC50(&StringLiteral_12646/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_12647/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_21FFC50(&StringLiteral_12653/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_593476C = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_52963E8 + (unsigned int)(state - 2));
  return *v3;
}