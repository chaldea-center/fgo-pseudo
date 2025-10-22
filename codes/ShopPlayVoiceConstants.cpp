int32_t ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C4AD3C[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4C5300D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_12155/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_1C3E564(&StringLiteral_12156/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5300D = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_467CB00 + state - 2);
  return *v3;
}


int32_t ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C4AD90[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4C5300C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_12167/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_1C3E564(&StringLiteral_12171/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_1C3E564(&StringLiteral_12169/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_1C3E564(&StringLiteral_12160/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_1C3E564(&StringLiteral_12163/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_1C3E564(&StringLiteral_12164/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_1C3E564(&StringLiteral_12168/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_1C3E564(&StringLiteral_12161/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_1C3E564(&StringLiteral_12172/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_1C3E564(&StringLiteral_12162/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_1C3E564(&StringLiteral_12170/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_1C3E564(&StringLiteral_12173/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_1C3E564(&StringLiteral_12154/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_1C3E564(&StringLiteral_12166/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_1C3E564(&StringLiteral_12158/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_12159/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_1C3E564(&StringLiteral_12165/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_4C5300C = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_467CBA8 + state - 2);
  return *v3;
}