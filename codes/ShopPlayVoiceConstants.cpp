int32_t ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D6926C[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4E73818 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12324/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_1D0F0B4(&StringLiteral_12325/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E73818 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_486FDB8 + state - 2);
  return *v3;
}


int32_t ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D692C0[state - 2];
}


System_String_o *ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4E73817 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12336/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_1D0F0B4(&StringLiteral_12340/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_1D0F0B4(&StringLiteral_12338/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_1D0F0B4(&StringLiteral_12329/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_1D0F0B4(&StringLiteral_12332/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_1D0F0B4(&StringLiteral_12333/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_1D0F0B4(&StringLiteral_12337/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_1D0F0B4(&StringLiteral_12330/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_1D0F0B4(&StringLiteral_12341/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_1D0F0B4(&StringLiteral_12331/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_1D0F0B4(&StringLiteral_12339/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_1D0F0B4(&StringLiteral_12342/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_1D0F0B4(&StringLiteral_12323/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_1D0F0B4(&StringLiteral_12335/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_1D0F0B4(&StringLiteral_12327/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_12328/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_1D0F0B4(&StringLiteral_12334/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_4E73817 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x14 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_486FE60 + state - 2);
  return *v3;
}