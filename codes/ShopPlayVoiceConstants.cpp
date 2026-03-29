int32_t ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D34560[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4D2CB8D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12240/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_1C93AD4(&StringLiteral_12241/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CB8D = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_4741778 + state - 2);
  return *v3;
}


int32_t ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D345B4[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4D2CB8C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12252/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_1C93AD4(&StringLiteral_12256/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_1C93AD4(&StringLiteral_12254/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_1C93AD4(&StringLiteral_12245/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_12248/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_1C93AD4(&StringLiteral_12249/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_1C93AD4(&StringLiteral_12253/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_1C93AD4(&StringLiteral_12246/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_1C93AD4(&StringLiteral_12257/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_1C93AD4(&StringLiteral_12247/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_1C93AD4(&StringLiteral_12255/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_1C93AD4(&StringLiteral_12258/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_1C93AD4(&StringLiteral_12239/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_1C93AD4(&StringLiteral_12251/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_1C93AD4(&StringLiteral_12243/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_12244/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_1C93AD4(&StringLiteral_12250/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_4D2CB8C = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_4741820 + state - 2);
  return *v3;
}