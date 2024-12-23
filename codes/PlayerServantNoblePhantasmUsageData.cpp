void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B69EF5 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__,
      method);
    sub_1BE4ACC(
      &System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
      v3);
    byte_4B69EF5 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v4,
    (const MethodInfo_32FCF9C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  unsigned __int64 v14; // x22
  int32_t v15; // w20
  Il2CppObject *v16; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v18; // 0:x1.12
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v19; // 0:x1.12

  if ( (byte_4B69EF3 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__,
      *(_QWORD *)&svtId);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v11);
    sub_1BE4ACC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v12);
    byte_4B69EF3 = 1;
  }
  value = 0LL;
  if ( !isEnemy )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    v14 = (unsigned int)svtId | ((unsigned __int64)(unsigned int)followerType << 32);
    v15 = seqId;
    *(_QWORD *)&v18.fields.servantId = v14;
    v18.fields.seqId = seqId;
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v18, &value, (const MethodInfo_32FF17C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v16 = (Il2CppObject *)sub_1BE4D18(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      System_Object___ctor(v16, 0LL);
      value = v16;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      *(_QWORD *)&v19.fields.servantId = v14;
      v19.fields.seqId = v15;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary,
        v19,
        v16,
        (const MethodInfo_32FD97C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_1BE4D28(usageDictionary, *(_QWORD *)&svtId);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_4B69EF2 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      method);
    byte_4B69EF2 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_1BE4D28(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_32FDB40 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *__fastcall PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v18; // x0
  unsigned int *v19; // x20
  unsigned __int64 v20; // x21
  __int64 v21; // x28
  PartyOrganizationUtility_o *v22; // x22
  __int64 v23; // x26
  int32_t seqId; // w25
  Il2CppObject *value; // x24
  System_Collections_Generic_Dictionary_object__object__o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v51; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v53; // [xsp+10h] [xbp-80h] BYREF
  int v54; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v55; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4B69EF4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v7);
    sub_1BE4ACC(&int_TypeInfo, v8);
    sub_1BE4ACC(&JsonManager_TypeInfo, v9);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v10);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v11);
    sub_1BE4ACC(&StringLiteral_24042/*"svtId"*/, v12);
    sub_1BE4ACC(&StringLiteral_23432/*"seqId"*/, v13);
    sub_1BE4ACC(&StringLiteral_19771/*"followerType"*/, v14);
    sub_1BE4ACC(&StringLiteral_16874/*"addCount"*/, v15);
    byte_4B69EF4 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_32FD62C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v18 = sub_1BE4B74(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v19 = (unsigned int *)v18;
  if ( Count >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)Count;
    v22 = (PartyOrganizationUtility_o *)(v18 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v55,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v20,
        (const MethodInfo_2F76ED8 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v23 = *(_QWORD *)&v55.fields.key.fields.servantId;
      seqId = v55.fields.key.fields.seqId;
      value = v55.fields.value;
      v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v26,
        (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v55.fields.key.fields.servantId = v23;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)j_il2cpp_value_box_0(
                                                                                   int_TypeInfo,
                                                                                   &v55,
                                                                                   v27,
                                                                                   v28,
                                                                                   v29);
      if ( !v26 )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_24042/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v54 = HIDWORD(v23);
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v30, v31, v32);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_19771/*"followerType"*/,
        v33,
        (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v53 = seqId;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v34, v35, v36);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_23432/*"seqId"*/,
        v37,
        (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v38, v39, v40);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_16874/*"addCount"*/,
        v41,
        (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v19 )
        break;
      v42 = sub_1BE4C08(v26, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
      if ( !v42 )
      {
        v51 = sub_1BE4D4C(0LL);
        sub_1BE4BF4(v51, 0LL);
      }
      if ( v20 >= v19[6] )
        sub_1BE4D30(v42, v43);
      v22->klass = (PartyOrganizationUtility_c *)v26;
      sub_1BE4A70(v22, (int64_t)v26, v44, v45, v46, v47, v48, v49);
      ++v20;
      v22 = (PartyOrganizationUtility_o *)((char *)v22 + 8);
      if ( v21 == v20 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1BE4D28(usageDictionary, method);
  }
LABEL_12:
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)v19, 0, 0, 0LL);
}


PlayerServantNoblePhantasmUsageData_SaveData_o *__fastcall PlayerServantNoblePhantasmUsageData__GetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // x23
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v11; // x0
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v12; // x20
  unsigned __int64 v13; // x21
  __int64 v14; // x26
  PartyOrganizationUtility_o *v15; // x22
  const MethodInfo *v16; // x3
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v24; // x19
  const MethodInfo *v25; // x2
  __int64 v27; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v29; // 0:x0.12

  if ( (byte_4B69EF0 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      method);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v4);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v5);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v6);
    sub_1BE4ACC(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, v7);
    sub_1BE4ACC(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo, v8);
    byte_4B69EF0 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_32FD62C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v11 = sub_1BE4B74(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v12 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v11;
  if ( Count >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)Count;
    v15 = (PartyOrganizationUtility_o *)(v11 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v13,
        (const MethodInfo_2F76ED8 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v29.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v29.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   v29,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v16);
      if ( !v12 )
        break;
      v23 = (int64_t)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4C08(
                                                                                     usageDictionary,
                                                                                     v12->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v27 = sub_1BE4D4C(0LL);
          sub_1BE4BF4(v27, 0LL);
        }
      }
      if ( v13 >= v12->max_length )
        sub_1BE4D30(usageDictionary, method);
      v15->klass = (PartyOrganizationUtility_c *)v23;
      sub_1BE4A70(v15, v23, v17, v18, v19, v20, v21, v22);
      ++v13;
      v15 = (PartyOrganizationUtility_o *)((char *)v15 + 8);
      if ( v14 == v13 )
        goto LABEL_11;
    }
LABEL_12:
    sub_1BE4D28(usageDictionary, method);
  }
LABEL_11:
  v24 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_1BE4D18(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_45257108(v24, v12, v25);
  return v24;
}


void __fastcall PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x24
  int max_length; // w8
  unsigned int v10; // w25
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v11; // x8
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x20
  int32_t servantId; // w21
  int32_t followerType; // w28
  int32_t seqId; // w22
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x29
  __int64 v18; // x23
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v19; // 0:x1.12

  if ( (byte_4B69EF1 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      saveData);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v5);
    sub_1BE4ACC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v6);
    byte_4B69EF1 = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_32FDB40 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_15;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_1BE4D30(usageDictionary, saveData);
        v11 = saveDataEntities->m_Items[v10];
        if ( !v11 )
          break;
        usageDictionaryKeySaveData = v11->fields.usageDictionaryKeySaveData;
        if ( !usageDictionaryKeySaveData )
          break;
        v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
        servantId = usageDictionaryKeySaveData->fields.servantId;
        followerType = usageDictionaryKeySaveData->fields.followerType;
        seqId = usageDictionaryKeySaveData->fields.seqId;
        usageDictionaryValueSaveData = v11->fields.usageDictionaryValueSaveData;
        v18 = sub_1BE4D18(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( !usageDictionaryValueSaveData )
          break;
        *(_DWORD *)(v18 + 16) = usageDictionaryValueSaveData->fields.useCount;
        if ( !v13 )
          break;
        v19.fields.servantId = servantId;
        v19.fields.followerType = followerType;
        v19.fields.seqId = seqId;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
          v13,
          v19,
          (Il2CppObject *)v18,
          (const MethodInfo_32FD97C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_15:
      sub_1BE4D28(usageDictionary, saveData);
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

  if ( (byte_4B69EFB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, method);
    byte_4B69EFB = 1;
  }
  v10 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v11 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v11 )
  {
    sub_1C36A04(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C369A8(inited);
  v14 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.saveDataEntities = *v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v15, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_45257108(
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

  if ( (byte_4B69EFC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, inputSaveDataEntities);
    byte_4B69EFC = 1;
  }
  v11 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v12 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v12 )
  {
    sub_1C36A04(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C369A8(inited);
  v15 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.saveDataEntities = *v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v16, (int64_t)method, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_1BE4A70(
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
  if ( (byte_4B69EFA & 1) == 0 )
  {
    sub_1BE4ACC(
      &PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
      *(_QWORD *)&usageDictionaryKey.fields.seqId);
    byte_4B69EFA = 1;
  }
  v4 = sub_1BE4D18(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)&v23.fields.servantId = &v22;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v23, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)SaveData, v8, v9, v10, v11, v12, v13),
        !usageDictionaryValue) )
  {
    sub_1BE4D28(SaveData, v7);
  }
  v14 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  *(_QWORD *)(v4 + 24) = v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_45257640(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_1BE4D28(*(_QWORD *)&this.fields.servantId, 0LL);
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
  if ( (byte_4B69EF7 & 1) == 0 )
  {
    sub_1BE4ACC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.seqId);
    byte_4B69EF7 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj, method), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_45259316(
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
  int32_t v4; // w1
  int32_t v5; // w2
  int32_t v6; // w3
  System_ValueTuple_T1__T2__T3__o v8; // [xsp+0h] [xbp-50h] BYREF
  int Item2; // [xsp+18h] [xbp-38h]

  v2 = *(int32_t **)&this.fields.servantId;
  if ( (byte_4B69EF8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__, *(_QWORD *)&this.fields.seqId);
    sub_1BE4ACC(&Method_System_ValueTuple_int__Follower_Type__int___ctor__, v3);
    byte_4B69EF8 = 1;
  }
  Item2 = 0;
  v8.fields.Item3 = 0LL;
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  LODWORD(v8.fields.Item2) = 0;
  v8.fields.Item1 = 0LL;
  System_ValueTuple_int__Int32Enum__int____ctor(
    &v8,
    v4,
    v5,
    v6,
    (const MethodInfo_3945E5C *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v8.fields.Item3 = v8.fields.Item1;
  Item2 = (int)v8.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v8.fields.Item3,
           (const MethodInfo_39469DC *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


// local variable allocation has failed, the output may be wrong!
PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 *v2; // x19
  __int64 v3; // d8
  int v4; // w21
  __int64 v5; // x19

  v2 = *(__int64 **)&this.fields.servantId;
  if ( (byte_4B69EF6 & 1) == 0 )
  {
    sub_1BE4ACC(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
      *(_QWORD *)&this.fields.seqId);
    byte_4B69EF6 = 1;
  }
  v3 = *v2;
  v4 = *((_DWORD *)v2 + 2);
  v5 = sub_1BE4D18(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = v4;
  return (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)v5;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_45259104(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_45257676(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1BE4D28(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w21
  __int64 v4; // x19

  if ( (byte_4B69EF9 & 1) == 0 )
  {
    sub_1BE4ACC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo, method);
    byte_4B69EF9 = 1;
  }
  useCount = this->fields.useCount;
  v4 = sub_1BE4D18(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = useCount;
  return (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)v4;
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_45259644(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}