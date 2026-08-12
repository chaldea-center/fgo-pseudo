int32_t ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_ED94E0[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_596C89C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12669/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_2213A60(&StringLiteral_12670/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C89C = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_52CA4B0 + (unsigned int)(state - 2));
  return *v3;
}


int32_t ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_ED9534[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_596C89B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12681/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_2213A60(&StringLiteral_12685/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_2213A60(&StringLiteral_12683/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_2213A60(&StringLiteral_12674/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_2213A60(&StringLiteral_12677/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_2213A60(&StringLiteral_12678/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_2213A60(&StringLiteral_12682/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_2213A60(&StringLiteral_12675/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_2213A60(&StringLiteral_12686/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_2213A60(&StringLiteral_12676/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_2213A60(&StringLiteral_12684/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_2213A60(&StringLiteral_12687/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_2213A60(&StringLiteral_12668/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_2213A60(&StringLiteral_12680/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_2213A60(&StringLiteral_12672/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12673/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_2213A60(&StringLiteral_12679/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_596C89B = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_52CA558 + (unsigned int)(state - 2));
  return *v3;
}