int32_t ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D324C8[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4D28A3B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_12200/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_1C94098(&StringLiteral_12201/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28A3B = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_473F008 + state - 2);
  return *v3;
}


int32_t ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D3251C[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4D28A3A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_12212/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_1C94098(&StringLiteral_12216/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_1C94098(&StringLiteral_12214/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_1C94098(&StringLiteral_12205/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_1C94098(&StringLiteral_12208/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_1C94098(&StringLiteral_12209/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_1C94098(&StringLiteral_12213/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_1C94098(&StringLiteral_12206/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_1C94098(&StringLiteral_12217/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_1C94098(&StringLiteral_12207/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_1C94098(&StringLiteral_12215/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_1C94098(&StringLiteral_12218/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_1C94098(&StringLiteral_12199/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_1C94098(&StringLiteral_12211/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_1C94098(&StringLiteral_12203/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_12204/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_1C94098(&StringLiteral_12210/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_4D28A3A = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_473F0B0 + state - 2);
  return *v3;
}