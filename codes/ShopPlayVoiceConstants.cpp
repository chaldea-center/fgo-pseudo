int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_327DAB0[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_42B1AA1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12267/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_B52984(&StringLiteral_12268/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1AA1 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_3F0AFC0 + state - 2);
  return *v3;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_327DB00[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_42B1AA0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12279/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_B52984(&StringLiteral_12283/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_B52984(&StringLiteral_12281/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_B52984(&StringLiteral_12272/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_B52984(&StringLiteral_12275/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_B52984(&StringLiteral_12276/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_B52984(&StringLiteral_12280/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_B52984(&StringLiteral_12273/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_B52984(&StringLiteral_12284/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_B52984(&StringLiteral_12274/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_B52984(&StringLiteral_12282/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_B52984(&StringLiteral_12285/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_B52984(&StringLiteral_12266/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_B52984(&StringLiteral_12278/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_B52984(&StringLiteral_12270/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_12271/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_B52984(&StringLiteral_12277/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_42B1AA0 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_3F0B060 + state - 2);
  return *v3;
}