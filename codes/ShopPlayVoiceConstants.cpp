int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C0C348[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o **v8; // x8

  if ( (byte_4B12777 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12229/*"SHOP_SCENE_VOICE_BACK1"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_12230/*"SHOP_SCENE_VOICE_BACK2"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B12777 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v8 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v8 = (System_String_o **)*(&off_455AD20 + state - 2);
  return *v8;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C0C398[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o **v38; // x8

  if ( (byte_4B12776 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12241/*"SHOP_SCENE_VOICE_SELL"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_12245/*"SHOP_SCENE_VOICE_STONE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_12243/*"SHOP_SCENE_VOICE_SPECIAL"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12234/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12237/*"SHOP_SCENE_VOICE_MANA"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12238/*"SHOP_SCENE_VOICE_PURE_PRI"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_12242/*"SHOP_SCENE_VOICE_SHOP04"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12235/*"SHOP_SCENE_VOICE_FRAGMENT"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_12246/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12236/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12244/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_12247/*"SHOP_SCENE_VOICE_TRADE_AP"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12228/*"SHOP_SCENE_VOICE_ANONYMOUS"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12240/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_12232/*"SHOP_SCENE_VOICE_EQSTORAGE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_12233/*"SHOP_SCENE_VOICE_EVENT"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_12239/*"SHOP_SCENE_VOICE_RARE_PRI"*/, v36, v37);
    byte_4B12776 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v38 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v38 = (System_String_o **)*(&off_455ADC0 + state - 2);
  return *v38;
}