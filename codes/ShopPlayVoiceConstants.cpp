int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C381E8[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4BD8A33 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12310/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_1C21E38(&StringLiteral_12311/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A33 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_4609E00 + state - 2);
  return *v3;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C38238[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4BD8A32 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12322/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_1C21E38(&StringLiteral_12326/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_1C21E38(&StringLiteral_12324/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_1C21E38(&StringLiteral_12315/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_1C21E38(&StringLiteral_12318/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_1C21E38(&StringLiteral_12319/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_1C21E38(&StringLiteral_12323/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_1C21E38(&StringLiteral_12316/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_1C21E38(&StringLiteral_12327/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_1C21E38(&StringLiteral_12317/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_1C21E38(&StringLiteral_12325/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_1C21E38(&StringLiteral_12328/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_1C21E38(&StringLiteral_12309/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_1C21E38(&StringLiteral_12321/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_1C21E38(&StringLiteral_12313/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_12314/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_1C21E38(&StringLiteral_12320/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_4BD8A32 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_4609EA0 + state - 2);
  return *v3;
}