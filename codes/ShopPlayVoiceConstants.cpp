int32_t ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D586CC[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4E00BF0 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_12275/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_1CE6700(&StringLiteral_12276/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E00BF0 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_4804358 + state - 2);
  return *v3;
}


int32_t ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D58720[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4E00BEF & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_12287/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_1CE6700(&StringLiteral_12291/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_1CE6700(&StringLiteral_12289/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_1CE6700(&StringLiteral_12280/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_1CE6700(&StringLiteral_12283/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_1CE6700(&StringLiteral_12284/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_1CE6700(&StringLiteral_12288/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_1CE6700(&StringLiteral_12281/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_1CE6700(&StringLiteral_12292/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_1CE6700(&StringLiteral_12282/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_1CE6700(&StringLiteral_12290/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_1CE6700(&StringLiteral_12293/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_1CE6700(&StringLiteral_12274/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_1CE6700(&StringLiteral_12286/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_1CE6700(&StringLiteral_12278/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_12279/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_1CE6700(&StringLiteral_12285/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_4E00BEF = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_4804400 + state - 2);
  return *v3;
}