int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_331FE40[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_438CFA5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_12410/*"SHOP_SCENE_VOICE_BACK1"*/);
    sub_B775C4(&StringLiteral_12411/*"SHOP_SCENE_VOICE_BACK2"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CFA5 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_3FDA760 + state - 2);
  return *v3;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_331FE90[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_438CFA4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_12422/*"SHOP_SCENE_VOICE_SELL"*/);
    sub_B775C4(&StringLiteral_12426/*"SHOP_SCENE_VOICE_STONE"*/);
    sub_B775C4(&StringLiteral_12424/*"SHOP_SCENE_VOICE_SPECIAL"*/);
    sub_B775C4(&StringLiteral_12415/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/);
    sub_B775C4(&StringLiteral_12418/*"SHOP_SCENE_VOICE_MANA"*/);
    sub_B775C4(&StringLiteral_12419/*"SHOP_SCENE_VOICE_PURE_PRI"*/);
    sub_B775C4(&StringLiteral_12423/*"SHOP_SCENE_VOICE_SHOP04"*/);
    sub_B775C4(&StringLiteral_12416/*"SHOP_SCENE_VOICE_FRAGMENT"*/);
    sub_B775C4(&StringLiteral_12427/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/);
    sub_B775C4(&StringLiteral_12417/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/);
    sub_B775C4(&StringLiteral_12425/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/);
    sub_B775C4(&StringLiteral_12428/*"SHOP_SCENE_VOICE_TRADE_AP"*/);
    sub_B775C4(&StringLiteral_12409/*"SHOP_SCENE_VOICE_ANONYMOUS"*/);
    sub_B775C4(&StringLiteral_12421/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/);
    sub_B775C4(&StringLiteral_12413/*"SHOP_SCENE_VOICE_EQSTORAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_12414/*"SHOP_SCENE_VOICE_EVENT"*/);
    sub_B775C4(&StringLiteral_12420/*"SHOP_SCENE_VOICE_RARE_PRI"*/);
    byte_438CFA4 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)*(&off_3FDA800 + state - 2);
  return *v3;
}