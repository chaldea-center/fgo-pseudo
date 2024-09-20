int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BEDB3C[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4A577FA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12073/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_1B885B0(&StringLiteral_12074/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A577FA = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_44AEA38 + state - 2);
  return *v3;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BEDB8C[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4A577F9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12085/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_1B885B0(&StringLiteral_12089/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_1B885B0(&StringLiteral_12087/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_1B885B0(&StringLiteral_12078/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_12081/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_1B885B0(&StringLiteral_12082/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_1B885B0(&StringLiteral_12086/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_1B885B0(&StringLiteral_12079/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_1B885B0(&StringLiteral_12090/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_1B885B0(&StringLiteral_12080/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_1B885B0(&StringLiteral_12088/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_1B885B0(&StringLiteral_12091/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_1B885B0(&StringLiteral_12072/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_1B885B0(&StringLiteral_12084/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_1B885B0(&StringLiteral_12076/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_12077/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_1B885B0(&StringLiteral_12083/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_4A577F9 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_44AEAD8 + state - 2);
  return *v3;
}