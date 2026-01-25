void PlayerServantNoblePhantasmUsageData___ctor(PlayerServantNoblePhantasmUsageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF1EE3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
    byte_4CF1EE3 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v3,
    (const MethodInfo_353F13C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
        PlayerServantNoblePhantasmUsageData_o *this,
        int32_t svtId,
        int32_t seqId,
        int32_t followerType,
        bool isEnemy,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  unsigned __int64 v12; // x22
  int32_t v13; // w20
  Il2CppObject *v14; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v16; // 0:x1.12
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v17; // 0:x1.12

  if ( (byte_4CF1EE1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4CF1EE1 = 1;
  }
  value = 0;
  if ( !isEnemy )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    v12 = (unsigned int)svtId | ((unsigned __int64)(unsigned int)followerType << 32);
    v13 = seqId;
    *(_QWORD *)&v16.fields.servantId = v12;
    v16.fields.seqId = seqId;
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v16, &value, (const MethodInfo_354131C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v14 = (Il2CppObject *)sub_1C7BD34(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      System_Object___ctor(v14, 0);
      value = v14;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      *(_QWORD *)&v17.fields.servantId = v12;
      v17.fields.seqId = v13;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary,
        v17,
        v14,
        (const MethodInfo_353FB1C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_1C7BD40(usageDictionary, *(_QWORD *)&svtId);
  }
}


void PlayerServantNoblePhantasmUsageData__Clear(PlayerServantNoblePhantasmUsageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_4CF1EE0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    byte_4CF1EE0 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_1C7BD40(0, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_353FCE0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v5; // x0
  unsigned int *v6; // x20
  unsigned __int64 v7; // x21
  __int64 v8; // x28
  GrandQuestFolderBoardItem_o *v9; // x22
  __int64 v10; // x26
  int32_t seqId; // w25
  Il2CppObject *value; // x24
  System_Collections_Generic_Dictionary_object__object__o *v13; // x23
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v25; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v27; // [xsp+10h] [xbp-80h] BYREF
  int v28; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v29; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4CF1EE2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_1C7BAE8(&StringLiteral_24099/*"svtId"*/);
    sub_1C7BAE8(&StringLiteral_23504/*"seqId"*/);
    sub_1C7BAE8(&StringLiteral_19689/*"followerType"*/);
    sub_1C7BAE8(&StringLiteral_16737/*"addCount"*/);
    byte_4CF1EE2 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_353F7CC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v5 = sub_1C7BB90(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v6 = (unsigned int *)v5;
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)Count;
    v9 = (GrandQuestFolderBoardItem_o *)(v5 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v29,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v7,
        (const MethodInfo_3193314 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v10 = *(_QWORD *)&v29.fields.key.fields.servantId;
      seqId = v29.fields.key.fields.seqId;
      value = v29.fields.value;
      v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v13,
        (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v29.fields.key.fields.servantId = v10;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)j_il2cpp_value_box_0(
                                                                                   int_TypeInfo,
                                                                                   &v29);
      if ( !v13 )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_24099/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v28 = HIDWORD(v10);
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_19689/*"followerType"*/,
        v14,
        (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v27 = seqId;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_23504/*"seqId"*/,
        v15,
        (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_16737/*"addCount"*/,
        v16,
        (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v6 )
        break;
      v17 = sub_1C7BC24(v13, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
      if ( !v17 )
      {
        v25 = sub_1C7BD64(0);
        sub_1C7BC10(v25, 0);
      }
      if ( v7 >= v6[6] )
        sub_1C7BD48(v17);
      v9->klass = (GrandQuestFolderBoardItem_c *)v13;
      sub_1C7BA8C(v9, (int32_t)v13, v18, v19, v20, v21, v22, v23);
      ++v7;
      v9 = (GrandQuestFolderBoardItem_o *)((char *)v9 + 8);
      if ( v8 == v7 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1C7BD40(usageDictionary, method);
  }
LABEL_12:
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)v6, 0, 0, 0);
}


PlayerServantNoblePhantasmUsageData_SaveData_o *PlayerServantNoblePhantasmUsageData__GetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v6; // x0
  unsigned int *v7; // x20
  unsigned __int64 v8; // x21
  __int64 v9; // x26
  GrandQuestFolderBoardItem_o *v10; // x22
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  GrandQuestFolderBoardItem_c *v18; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v19; // x19
  const MethodInfo *v20; // x2
  __int64 v22; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v24; // 0:x0.12

  if ( (byte_4CF1EDE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo);
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
    byte_4CF1EDE = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_353F7CC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v6 = sub_1C7BB90(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v7 = (unsigned int *)v6;
  if ( Count >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)Count;
    v10 = (GrandQuestFolderBoardItem_o *)(v6 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v8,
        (const MethodInfo_3193314 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v24.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v24.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   v24,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v11);
      if ( !v7 )
        break;
      v18 = (GrandQuestFolderBoardItem_c *)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BC24(
                                                                                     usageDictionary,
                                                                                     *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !usageDictionary )
        {
          v22 = sub_1C7BD64(0);
          sub_1C7BC10(v22, 0);
        }
      }
      if ( v8 >= v7[6] )
        sub_1C7BD48(usageDictionary);
      v10->klass = v18;
      sub_1C7BA8C(v10, (int32_t)v18, v12, v13, v14, v15, v16, v17);
      ++v8;
      v10 = (GrandQuestFolderBoardItem_o *)((char *)v10 + 8);
      if ( v9 == v8 )
        goto LABEL_11;
    }
LABEL_12:
    sub_1C7BD40(usageDictionary, method);
  }
LABEL_11:
  v19 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_1C7BD34(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_48260816(
    v19,
    (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v7,
    v20);
  return v19;
}


void PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x24
  int max_length; // w8
  unsigned int v8; // w25
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v9; // x8
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x20
  int32_t servantId; // w21
  int32_t followerType; // w28
  int32_t seqId; // w22
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x29
  __int64 v16; // x23
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v17; // 0:x1.12

  if ( (byte_4CF1EDF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4CF1EDF = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_353FCE0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_15;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_1C7BD48(usageDictionary);
        v9 = saveDataEntities->m_Items[v8];
        if ( !v9 )
          break;
        usageDictionaryKeySaveData = v9->fields.usageDictionaryKeySaveData;
        if ( !usageDictionaryKeySaveData )
          break;
        v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
        servantId = usageDictionaryKeySaveData->fields.servantId;
        followerType = usageDictionaryKeySaveData->fields.followerType;
        seqId = usageDictionaryKeySaveData->fields.seqId;
        usageDictionaryValueSaveData = v9->fields.usageDictionaryValueSaveData;
        v16 = sub_1C7BD34(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        System_Object___ctor((Il2CppObject *)v16, 0);
        if ( !usageDictionaryValueSaveData )
          break;
        *(_DWORD *)(v16 + 16) = usageDictionaryValueSaveData->fields.useCount;
        if ( !v11 )
          break;
        v17.fields.servantId = servantId;
        v17.fields.followerType = followerType;
        v17.fields.seqId = seqId;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
          v11,
          v17,
          (Il2CppObject *)v16,
          (const MethodInfo_353FB1C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
LABEL_15:
      sub_1C7BD40(usageDictionary, saveData);
    }
  }
}


void PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v14; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v15; // x1

  if ( (byte_4CF1EE9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4CF1EE9 = 1;
  }
  v10 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v11 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v11 )
  {
    sub_1C51BD8(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C51B7C(inited);
  v14 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.saveDataEntities = *v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v15, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlayerServantNoblePhantasmUsageData_SaveData___ctor_48260816(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v15; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CF1EEA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4CF1EEA = 1;
  }
  v11 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v12 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v12 )
  {
    sub_1C51BD8(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C51B7C(inited);
  v15 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.saveDataEntities = *v15;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v16, (int32_t)method, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields,
      (int32_t)inputSaveDataEntities,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


void PlayerServantNoblePhantasmUsageData_SaveDataEntity___ctor(
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o usageDictionaryKey,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *usageDictionaryValue,
        const MethodInfo *method)
{
  __int64 v4; // x20
  const MethodInfo *v5; // x2
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *SaveData; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v22; // [xsp+0h] [xbp-30h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // 0:x0.12

  v22 = usageDictionaryKey;
  if ( (byte_4CF1EE8 & 1) == 0 )
  {
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
    byte_4CF1EE8 = 1;
  }
  v4 = sub_1C7BD34(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_QWORD *)&v23.fields.servantId = &v22;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v23, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)SaveData, v8, v9, v10, v11, v12, v13),
        !usageDictionaryValue) )
  {
    sub_1C7BD40(SaveData, v7);
  }
  v14 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  *(_QWORD *)(v4 + 24) = v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return (PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *)v4;
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor(
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
void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_48261348(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_1C7BD40(*(_QWORD *)&this.fields.servantId, 0);
  **(_QWORD **)&this.fields.servantId = *(_QWORD *)(*(_QWORD *)&this.fields.seqId + 16LL);
  *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 8LL) = *(_DWORD *)(*(_QWORD *)&this.fields.seqId + 24LL);
}


// local variable allocation has failed, the output may be wrong!
bool PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals(
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
  if ( (byte_4CF1EE5 & 1) == 0 )
  {
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo);
    byte_4CF1EE5 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj, method), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_48263024(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o other,
        const MethodInfo *method)
{
  int v3; // x1^4

  return **(_DWORD **)&this.fields.servantId == this.fields.seqId
      && *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 4LL) == v3
      && *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 8LL) == other.fields.servantId;
}


int32_t PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetHashCode(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  int32_t *v2; // x19
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_ValueTuple_T1__T2__T3__o v7; // [xsp+0h] [xbp-50h] BYREF
  int Item2; // [xsp+18h] [xbp-38h]

  v2 = *(int32_t **)&this.fields.servantId;
  if ( (byte_4CF1EE6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
    sub_1C7BAE8(&Method_System_ValueTuple_int__Follower_Type__int___ctor__);
    byte_4CF1EE6 = 1;
  }
  Item2 = 0;
  v7.fields.Item3 = 0;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  LODWORD(v7.fields.Item2) = 0;
  v7.fields.Item1 = 0;
  System_ValueTuple_int__Int32Enum__int____ctor(
    &v7,
    v3,
    v4,
    v5,
    (const MethodInfo_3BAC2EC *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v7.fields.Item3 = v7.fields.Item1;
  Item2 = (int)v7.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v7.fields.Item3,
           (const MethodInfo_3BACE6C *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 *v2; // x19
  __int64 v3; // d8
  int v4; // w21
  __int64 v5; // x19

  v2 = *(__int64 **)&this.fields.servantId;
  if ( (byte_4CF1EE4 & 1) == 0 )
  {
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
    byte_4CF1EE4 = 1;
  }
  v3 = *v2;
  v4 = *((_DWORD *)v2 + 2);
  v5 = sub_1C7BD34(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = v4;
  return (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)v5;
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_48262812(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        int32_t servantId,
        int32_t followerType,
        int32_t seqId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.servantId = servantId;
  this->fields.followerType = followerType;
  this->fields.seqId = seqId;
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_48261384(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveData )
    sub_1C7BD40(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w21
  __int64 v4; // x19

  if ( (byte_4CF1EE7 & 1) == 0 )
  {
    sub_1C7BAE8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
    byte_4CF1EE7 = 1;
  }
  useCount = this->fields.useCount;
  v4 = sub_1C7BD34(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = useCount;
  return (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)v4;
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__IncreaseCount(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  ++this->fields.useCount;
}


int32_t PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_UseCount(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  return this->fields.useCount;
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_48263352(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.useCount = useCount;
}