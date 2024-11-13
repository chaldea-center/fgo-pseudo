void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19483 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__,
      method,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
      v5,
      v6);
    byte_4B19483 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v7,
    (const MethodInfo_32B1FD8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
        PlayerServantNoblePhantasmUsageData_o *this,
        int32_t svtId,
        int32_t seqId,
        int32_t followerType,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  unsigned __int64 v16; // x22
  int32_t v17; // w20
  __int64 v18; // x2
  __int64 v19; // x3
  Il2CppObject *v20; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v22; // 0:x1.12
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // 0:x1.12

  if ( (byte_4B19481 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&seqId);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v11,
      v12);
    sub_1BCA7E0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v13, v14);
    byte_4B19481 = 1;
  }
  value = 0LL;
  if ( !isEnemy )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    v16 = (unsigned int)svtId | ((unsigned __int64)(unsigned int)followerType << 32);
    v17 = seqId;
    *(_QWORD *)&v22.fields.servantId = v16;
    v22.fields.seqId = seqId;
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v22, &value, (const MethodInfo_32B41B8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v20 = (Il2CppObject *)sub_1BCAA2C(
                              PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo,
                              *(_QWORD *)&svtId,
                              v18,
                              v19);
      System_Object___ctor(v20, 0LL);
      value = v20;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      *(_QWORD *)&v23.fields.servantId = v16;
      v23.fields.seqId = v17;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary,
        v23,
        v20,
        (const MethodInfo_32B29B8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_1BCAA3C(usageDictionary, *(_QWORD *)&svtId);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_4B19480 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      method,
      v2);
    byte_4B19480 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_32B2B7C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *__fastcall PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v32; // x0
  __int64 v33; // x1
  unsigned int *v34; // x20
  unsigned __int64 v35; // x21
  __int64 v36; // x28
  PartyOrganizationUtility_o *v37; // x22
  __int64 v38; // x26
  int32_t seqId; // w25
  Il2CppObject *value; // x24
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_Dictionary_object__object__o *v44; // x23
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v57; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v59; // [xsp+10h] [xbp-80h] BYREF
  int v60; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v61; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4B19482 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v12,
      v13);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    sub_1BCA7E0(&JsonManager_TypeInfo, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v20,
      v21);
    sub_1BCA7E0(&StringLiteral_23955/*"svtId"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_23347/*"seqId"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_19712/*"followerType"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_16832/*"addCount"*/, v28, v29);
    byte_4B19482 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_32B2668 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v32 = sub_1BCA888(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v34 = (unsigned int *)v32;
  if ( Count >= 1 )
  {
    v35 = 0LL;
    v36 = (unsigned int)Count;
    v37 = (PartyOrganizationUtility_o *)(v32 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v61,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v35,
        (const MethodInfo_2F30A58 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v38 = *(_QWORD *)&v61.fields.key.fields.servantId;
      seqId = v61.fields.key.fields.seqId;
      value = v61.fields.value;
      v44 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                         v41,
                                                                         v42,
                                                                         v43);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v44,
        (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v61.fields.key.fields.servantId = v38;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)j_il2cpp_value_box_0(
                                                                                   int_TypeInfo,
                                                                                   &v61);
      if ( !v44 )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v44,
        (Il2CppObject *)StringLiteral_23955/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v60 = HIDWORD(v38);
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v44,
        (Il2CppObject *)StringLiteral_19712/*"followerType"*/,
        v45,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v59 = seqId;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v44,
        (Il2CppObject *)StringLiteral_23347/*"seqId"*/,
        v46,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v44,
        (Il2CppObject *)StringLiteral_16832/*"addCount"*/,
        v47,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v34 )
        break;
      v48 = sub_1BCA91C(v44, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
      if ( !v48 )
      {
        v57 = sub_1BCAA60(0LL);
        sub_1BCA908(v57, 0LL);
      }
      if ( v35 >= v34[6] )
        sub_1BCAA44(v48, v49);
      v37->klass = (PartyOrganizationUtility_c *)v44;
      sub_1BCA784(v37, (int64_t)v44, v50, v51, v52, v53, v54, v55);
      ++v35;
      v37 = (PartyOrganizationUtility_o *)((char *)v37 + 8);
      if ( v36 == v35 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1BCAA3C(usageDictionary, method);
  }
LABEL_12:
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v33);
  return JsonManager__toJson((Il2CppObject *)v34, 0, 0, 0LL);
}


PlayerServantNoblePhantasmUsageData_SaveData_o *__fastcall PlayerServantNoblePhantasmUsageData__GetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 v3; // x23
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v21; // x20
  unsigned __int64 v22; // x21
  __int64 v23; // x26
  PartyOrganizationUtility_o *v24; // x22
  const MethodInfo *v25; // x3
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v33; // x19
  const MethodInfo *v34; // x2
  __int64 v36; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v38; // 0:x0.12

  if ( (byte_4B1947E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v9,
      v10);
    sub_1BCA7E0(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, v11, v12);
    sub_1BCA7E0(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo, v13, v14);
    byte_4B1947E = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_32B2668 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v17 = sub_1BCA888(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v21 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v17;
  if ( Count >= 1 )
  {
    v22 = 0LL;
    v23 = (unsigned int)Count;
    v24 = (PartyOrganizationUtility_o *)(v17 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v22,
        (const MethodInfo_2F30A58 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v38.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v3 = v3 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v38.fields.seqId = v3;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   v38,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v25);
      if ( !v21 )
        break;
      v32 = (int64_t)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCA91C(
                                                                                     usageDictionary,
                                                                                     v21->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v36 = sub_1BCAA60(0LL);
          sub_1BCA908(v36, 0LL);
        }
      }
      if ( v22 >= v21->max_length )
        sub_1BCAA44(usageDictionary, method);
      v24->klass = (PartyOrganizationUtility_c *)v32;
      sub_1BCA784(v24, v32, v26, v27, v28, v29, v30, v31);
      ++v22;
      v24 = (PartyOrganizationUtility_o *)((char *)v24 + 8);
      if ( v23 == v22 )
        goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(usageDictionary, method);
  }
LABEL_11:
  v33 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_1BCAA2C(
                                                            PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo,
                                                            v18,
                                                            v19,
                                                            v20);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_44986328(v33, v21, v34);
  return v33;
}


void __fastcall PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x24
  int max_length; // w8
  unsigned int v14; // w25
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v15; // x8
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int32_t servantId; // w21
  int32_t followerType; // w28
  int32_t seqId; // w22
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x29
  __int64 v22; // x23
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // 0:x1.12

  if ( (byte_4B1947F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      saveData,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v5,
      v6);
    sub_1BCA7E0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v7, v8);
    byte_4B1947F = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_32B2B7C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_15;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1BCAA44(usageDictionary, saveData);
        v15 = saveDataEntities->m_Items[v14];
        if ( !v15 )
          break;
        usageDictionaryKeySaveData = v15->fields.usageDictionaryKeySaveData;
        if ( !usageDictionaryKeySaveData )
          break;
        v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
        servantId = usageDictionaryKeySaveData->fields.servantId;
        followerType = usageDictionaryKeySaveData->fields.followerType;
        seqId = usageDictionaryKeySaveData->fields.seqId;
        usageDictionaryValueSaveData = v15->fields.usageDictionaryValueSaveData;
        v22 = sub_1BCAA2C(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, saveData, v10, v11);
        System_Object___ctor((Il2CppObject *)v22, 0LL);
        if ( !usageDictionaryValueSaveData )
          break;
        *(_DWORD *)(v22 + 16) = usageDictionaryValueSaveData->fields.useCount;
        if ( !v17 )
          break;
        v23.fields.servantId = servantId;
        v23.fields.followerType = followerType;
        v23.fields.seqId = seqId;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
          v17,
          v23,
          (Il2CppObject *)v22,
          (const MethodInfo_32B29B8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
LABEL_15:
      sub_1BCAA3C(usageDictionary, saveData);
    }
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v14; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v15; // x1

  if ( (byte_4B19489 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, method, v2);
    byte_4B19489 = 1;
  }
  v10 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v11 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v11 )
  {
    sub_1C1C718(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, method);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(inited);
  v14 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.saveDataEntities = *v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v15, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_44986328(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v15; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B1948A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___,
      inputSaveDataEntities,
      method);
    byte_4B1948A = 1;
  }
  v11 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v12 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v12 )
  {
    sub_1C1C718(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, inputSaveDataEntities);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13, inputSaveDataEntities);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(inited);
  v15 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.saveDataEntities = *v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v16, (int64_t)method, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields,
      (int64_t)inputSaveDataEntities,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveDataEntity___ctor(
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *__fastcall PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o usageDictionaryKey,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *usageDictionaryValue,
        const MethodInfo *method)
{
  __int64 v4; // x20
  const MethodInfo *v5; // x2
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *SaveData; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v22; // [xsp+0h] [xbp-30h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // 0:x0.12

  v22 = usageDictionaryKey;
  if ( (byte_4B19488 & 1) == 0 )
  {
    sub_1BCA7E0(
      &PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
      *(_QWORD *)&usageDictionaryKey.fields.seqId,
      usageDictionaryValue);
    byte_4B19488 = 1;
  }
  v4 = sub_1BCAA2C(
         PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
         *(_QWORD *)&usageDictionaryKey.fields.seqId,
         usageDictionaryValue,
         method);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)&v23.fields.servantId = &v22;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v23, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_1BCA784((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)SaveData, v8, v9, v10, v11, v12, v13),
        !usageDictionaryValue) )
  {
    sub_1BCAA3C(SaveData, v7);
  }
  v14 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  *(_QWORD *)(v4 + 24) = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)v14, v15, v16, v17, v18, v19, v20);
  return (PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *)v4;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        int32_t servantId,
        int32_t followerType,
        int32_t seqId,
        const MethodInfo *method)
{
  **(_DWORD **)&this.fields.servantId = this.fields.seqId;
  *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 4LL) = servantId;
  *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 8LL) = followerType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_44986860(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_1BCAA3C(*(_QWORD *)&this.fields.servantId, 0LL);
  **(_QWORD **)&this.fields.servantId = *(_QWORD *)(*(_QWORD *)&this.fields.seqId + 16LL);
  *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 8LL) = *(_DWORD *)(*(_QWORD *)&this.fields.seqId + 24LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_c **v3; // x20
  __int64 v4; // x19
  __int64 v5; // x0
  bool result; // w0

  v3 = *(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_c ***)&this.fields.seqId;
  v4 = *(_QWORD *)&this.fields.servantId;
  if ( (byte_4B19485 & 1) == 0 )
  {
    sub_1BCA7E0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.seqId, obj);
    byte_4B19485 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj, method), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_44988536(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o other,
        const MethodInfo *method)
{
  int v3; // x1^4

  return **(_DWORD **)&this.fields.servantId == this.fields.seqId
      && *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 4LL) == v3
      && *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 8LL) == other.fields.servantId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetHashCode(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  int32_t *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  System_ValueTuple_T1__T2__T3__o v9; // [xsp+0h] [xbp-50h] BYREF
  int Item2; // [xsp+18h] [xbp-38h]

  v2 = *(int32_t **)&this.fields.servantId;
  if ( (byte_4B19486 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__, *(_QWORD *)&this.fields.seqId, method);
    sub_1BCA7E0(&Method_System_ValueTuple_int__Follower_Type__int___ctor__, v3, v4);
    byte_4B19486 = 1;
  }
  Item2 = 0;
  v9.fields.Item3 = 0LL;
  v5 = *v2;
  v6 = v2[1];
  v7 = v2[2];
  LODWORD(v9.fields.Item2) = 0;
  v9.fields.Item1 = 0LL;
  System_ValueTuple_int__Int32Enum__int____ctor(
    &v9,
    v5,
    v6,
    v7,
    (const MethodInfo_38FC5EC *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v9.fields.Item3 = v9.fields.Item1;
  Item2 = (int)v9.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v9.fields.Item3,
           (const MethodInfo_38FD16C *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


// local variable allocation has failed, the output may be wrong!
PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  __int64 *v3; // x19
  __int64 v4; // d8
  int v5; // w21
  __int64 v6; // x19

  v3 = *(__int64 **)&this.fields.servantId;
  if ( (byte_4B19484 & 1) == 0 )
  {
    sub_1BCA7E0(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
      *(_QWORD *)&this.fields.seqId,
      method);
    byte_4B19484 = 1;
  }
  v4 = *v3;
  v5 = *((_DWORD *)v3 + 2);
  v6 = sub_1BCAA2C(
         PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
         *(_QWORD *)&this.fields.seqId,
         method,
         v2);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 16) = v4;
  *(_DWORD *)(v6 + 24) = v5;
  return (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)v6;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_44988324(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        int32_t servantId,
        int32_t followerType,
        int32_t seqId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantId = servantId;
  this->fields.followerType = followerType;
  this->fields.seqId = seqId;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_44986896(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1BCAA3C(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t useCount; // w21
  __int64 v6; // x19

  if ( (byte_4B19487 & 1) == 0 )
  {
    sub_1BCA7E0(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo,
      method,
      v2);
    byte_4B19487 = 1;
  }
  useCount = this->fields.useCount;
  v6 = sub_1BCAA2C(
         PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo,
         method,
         v2,
         v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = useCount;
  return (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)v6;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__IncreaseCount(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  ++this->fields.useCount;
}


int32_t __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_UseCount(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  return this->fields.useCount;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_44988864(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}