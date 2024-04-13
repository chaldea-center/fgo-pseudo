int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_32A4E80[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o **v11; // x8

  if ( (byte_42EA69A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12325/*"SHOP_SCENE_VOICE_BACK1"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12326/*"SHOP_SCENE_VOICE_BACK2"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EA69A = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v11 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v11 = (System_String_o **)*(&off_3F3FB90 + state - 2);
  return *v11;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_32A4ED0[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_String_o **v56; // x8

  if ( (byte_42EA699 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12337/*"SHOP_SCENE_VOICE_SELL"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12341/*"SHOP_SCENE_VOICE_STONE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12339/*"SHOP_SCENE_VOICE_SPECIAL"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12330/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12333/*"SHOP_SCENE_VOICE_MANA"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12334/*"SHOP_SCENE_VOICE_PURE_PRI"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12338/*"SHOP_SCENE_VOICE_SHOP04"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12331/*"SHOP_SCENE_VOICE_FRAGMENT"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12342/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12332/*"SHOP_SCENE_VOICE_GRAIL_FRAGMENTS"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12340/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12343/*"SHOP_SCENE_VOICE_TRADE_AP"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12324/*"SHOP_SCENE_VOICE_ANONYMOUS"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_12336/*"SHOP_SCENE_VOICE_REVIVAL_ITEM"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12328/*"SHOP_SCENE_VOICE_EQSTORAGE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12329/*"SHOP_SCENE_VOICE_EVENT"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12335/*"SHOP_SCENE_VOICE_RARE_PRI"*/, v53, v54, v55);
    byte_42EA699 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v56 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v56 = (System_String_o **)*(&off_3F3FC30 + state - 2);
  return *v56;
}