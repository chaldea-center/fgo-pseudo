int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C11758[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_4B33701 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_12248/*"SHOP_SCENE_VOICE_BACK1"*/, method);
    sub_1BD3458(&StringLiteral_12249/*"SHOP_SCENE_VOICE_BACK2"*/, v3);
    sub_1BD3458(&StringLiteral_1/*""*/, v4);
    byte_4B33701 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v5 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v5 = (System_String_o **)*(&off_45791C0 + state - 2);
  return *v5;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C117A8[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o **v20; // x8

  if ( (byte_4B33700 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_12260/*"SHOP_SCENE_VOICE_SELL"*/, method);
    sub_1BD3458(&StringLiteral_12264/*"SHOP_SCENE_VOICE_STONE"*/, v3);
    sub_1BD3458(&StringLiteral_12262/*"SHOP_SCENE_VOICE_SPECIAL"*/, v4);
    sub_1BD3458(&StringLiteral_12253/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/, v5);
    sub_1BD3458(&StringLiteral_12256/*"SHOP_SCENE_VOICE_MANA"*/, v6);
    sub_1BD3458(&StringLiteral_12257/*"SHOP_SCENE_VOICE_PURE_PRI"*/, v7);
    sub_1BD3458(&StringLiteral_12261/*"SHOP_SCENE_VOICE_SHOP04"*/, v8);
    sub_1BD3458(&StringLiteral_12254/*"SHOP_SCENE_VOICE_FRAGMENT"*/, v9);
    sub_1BD3458(&StringLiteral_12265/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/, v10);
    sub_1BD3458(&StringLiteral_12255/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/, v11);
    sub_1BD3458(&StringLiteral_12263/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v12);
    sub_1BD3458(&StringLiteral_12266/*"SHOP_SCENE_VOICE_TRADE_AP"*/, v13);
    sub_1BD3458(&StringLiteral_12247/*"SHOP_SCENE_VOICE_ANONYMOUS"*/, v14);
    sub_1BD3458(&StringLiteral_12259/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/, v15);
    sub_1BD3458(&StringLiteral_12251/*"SHOP_SCENE_VOICE_EQSTORAGE"*/, v16);
    sub_1BD3458(&StringLiteral_1/*""*/, v17);
    sub_1BD3458(&StringLiteral_12252/*"SHOP_SCENE_VOICE_EVENT"*/, v18);
    sub_1BD3458(&StringLiteral_12258/*"SHOP_SCENE_VOICE_RARE_PRI"*/, v19);
    byte_4B33700 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v20 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v20 = (System_String_o **)*(&off_4579260 + state - 2);
  return *v20;
}