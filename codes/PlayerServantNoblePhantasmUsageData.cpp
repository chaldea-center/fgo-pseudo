void PlayerServantNoblePhantasmUsageData___ctor(PlayerServantNoblePhantasmUsageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593C1C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
    byte_593C1C4 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v3,
    (const MethodInfo_403F1FC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  __int64 v7; // x21
  struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  unsigned __int64 v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v15; // 0:x1.12
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v16; // 0:x1.12

  v7 = (unsigned int)followerType;
  if ( (byte_593C1C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_593C1C2 = 1;
  }
  value = 0;
  if ( !isEnemy )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    v12 = (unsigned int)svtId | (unsigned __int64)(v7 << 32);
    v15.fields.seqId = seqId;
    *(_QWORD *)&v15.fields.servantId = v12;
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v15, &value, (const MethodInfo_4041724 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v13 = (Il2CppObject *)sub_21FFEBC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      System_Object___ctor(v13, 0);
      usageDictionary = this->fields.usageDictionary;
      value = v13;
      if ( !usageDictionary )
        goto LABEL_11;
      *(_QWORD *)&v16.fields.servantId = v12;
      v16.fields.seqId = seqId;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary,
        v16,
        v13,
        (const MethodInfo_403FBB4 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_21FFECC(usageDictionary, *(_QWORD *)&svtId);
  }
}


void PlayerServantNoblePhantasmUsageData__Clear(PlayerServantNoblePhantasmUsageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_593C1C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    byte_593C1C1 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_21FFECC(0, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_403FD78 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w23
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int *v7; // x20
  unsigned __int64 v8; // x21
  MissionNaviTransitionBoardItem_o *v9; // x22
  __int64 v10; // x27
  __int64 v11; // x25
  int32_t seqId; // w24
  Il2CppObject *value; // x29
  System_Collections_Generic_Dictionary_object__object__o *v14; // x23
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v27; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v29; // [xsp+10h] [xbp-80h] BYREF
  int v30; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v31; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_593C1C3 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_21FFC50(&StringLiteral_25091/*"svtId"*/);
    sub_21FFC50(&StringLiteral_24462/*"seqId"*/);
    sub_21FFC50(&StringLiteral_20421/*"followerType"*/);
    sub_21FFC50(&StringLiteral_17315/*"addCount"*/);
    byte_593C1C3 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_403F84C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v5 = sub_21FFD10(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v7 = (unsigned int *)v5;
  if ( Count >= 1 )
  {
    v8 = 0;
    v9 = (MissionNaviTransitionBoardItem_o *)(v5 + 32);
    v10 = (unsigned int)Count;
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v31,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v8,
        (const MethodInfo_3849AF8 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v11 = *(_QWORD *)&v31.fields.key.fields.servantId;
      seqId = v31.fields.key.fields.seqId;
      value = v31.fields.value;
      v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v14,
        (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v31.fields.key.fields.servantId = v11;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)j_il2cpp_value_box_0(
                                                                                   qword_594C070,
                                                                                   &v31);
      if ( !v14 )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v14,
        (Il2CppObject *)StringLiteral_25091/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v30 = HIDWORD(v11);
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v30);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v14,
        (Il2CppObject *)StringLiteral_20421/*"followerType"*/,
        v15,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v29 = seqId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v29);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v14,
        (Il2CppObject *)StringLiteral_24462/*"seqId"*/,
        v16,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &klass);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v14,
        (Il2CppObject *)StringLiteral_17315/*"addCount"*/,
        v17,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v7 )
        break;
      v18 = sub_21FFDA4(v14, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v18 )
      {
        v27 = sub_21FFEF0(0, v19);
        sub_21FFD90(v27, 0);
      }
      if ( v8 >= v7[6] )
        sub_21FFED4(v18);
      v9->klass = (MissionNaviTransitionBoardItem_c *)v14;
      sub_21FFBF4(v9, (int32_t)v14, v20, v21, v22, v23, v24, v25);
      ++v8;
      v9 = (MissionNaviTransitionBoardItem_o *)((char *)v9 + 8);
      if ( v10 == v8 )
        goto LABEL_12;
    }
LABEL_15:
    sub_21FFECC(usageDictionary, method);
  }
LABEL_12:
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
  return JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0);
}


PlayerServantNoblePhantasmUsageData_SaveData_o *PlayerServantNoblePhantasmUsageData__GetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w23
  __int64 v5; // x0
  unsigned int *v6; // x20
  unsigned __int64 v7; // x21
  MissionNaviTransitionBoardItem_o *v8; // x22
  __int64 v9; // x25
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_c *v17; // x23
  __int64 v18; // x1
  PlayerServantNoblePhantasmUsageData_SaveData_o *v19; // x19
  const MethodInfo *v20; // x2
  __int64 v22; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_593C1BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo);
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
    byte_593C1BF = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_403F84C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v5 = sub_21FFD10(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v6 = (unsigned int *)v5;
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = (MissionNaviTransitionBoardItem_o *)(v5 + 32);
    v9 = (unsigned int)Count;
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v7,
        (const MethodInfo_3849AF8 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   usageDictionaryKey.fields.key,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v10);
      if ( !v6 )
        break;
      v17 = (MissionNaviTransitionBoardItem_c *)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFDA4(
                                                                                     usageDictionary,
                                                                                     *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !usageDictionary )
        {
          v22 = sub_21FFEF0(0, v18);
          sub_21FFD90(v22, 0);
        }
      }
      if ( v7 >= v6[6] )
        sub_21FFED4(usageDictionary);
      v8->klass = v17;
      sub_21FFBF4(v8, (int32_t)v17, v11, v12, v13, v14, v15, v16);
      ++v7;
      v8 = (MissionNaviTransitionBoardItem_o *)((char *)v8 + 8);
      if ( v9 == v7 )
        goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(usageDictionary, method);
  }
LABEL_11:
  v19 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_21FFEBC(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_54908144(
    v19,
    (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v6,
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
  __int64 v8; // x25
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v9; // x8
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x20
  __int64 v12; // x22
  int32_t seqId; // w21
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x29
  __int64 v15; // x23
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v16; // 0:x1.12

  if ( (byte_593C1C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_593C1C0 = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_403FD78 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_15;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_21FFED4(usageDictionary);
        v9 = saveDataEntities->m_Items[v8];
        if ( !v9 )
          break;
        usageDictionaryKeySaveData = v9->fields.usageDictionaryKeySaveData;
        if ( !usageDictionaryKeySaveData )
          break;
        v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
        v12 = *(_QWORD *)&usageDictionaryKeySaveData->fields.servantId;
        seqId = usageDictionaryKeySaveData->fields.seqId;
        usageDictionaryValueSaveData = v9->fields.usageDictionaryValueSaveData;
        v15 = sub_21FFEBC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        System_Object___ctor((Il2CppObject *)v15, 0);
        if ( !usageDictionaryValueSaveData )
          break;
        *(_DWORD *)(v15 + 16) = usageDictionaryValueSaveData->fields.useCount;
        if ( !v11 )
          break;
        *(_QWORD *)&v16.fields.servantId = v12;
        v16.fields.seqId = seqId;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
          v11,
          v16,
          (Il2CppObject *)v15,
          (const MethodInfo_403FBB4 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
LABEL_15:
      sub_21FFECC(usageDictionary, saveData);
    }
  }
}


void PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v14; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v15; // x1

  if ( (byte_593C1CA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_593C1CA = 1;
  }
  v10 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v11 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v11 )
  {
    sub_2237B54(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8(v8);
  v14 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.saveDataEntities = *v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v15, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlayerServantNoblePhantasmUsageData_SaveData___ctor_54908144(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v15; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_593C1CB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_593C1CB = 1;
  }
  v11 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v12 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v12 )
  {
    sub_2237B54(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, inputSaveDataEntities);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_2237AF8(v8);
  v15 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.saveDataEntities = *v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)v16,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v22; // [xsp+0h] [xbp-30h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // 0:x0.12

  v22 = usageDictionaryKey;
  if ( (byte_593C1C9 & 1) == 0 )
  {
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
    byte_593C1C9 = 1;
  }
  v4 = sub_21FFEBC(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_QWORD *)&v23.fields.servantId = &v22;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v23, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)SaveData, v8, v9, v10, v11, v12, v13),
        !usageDictionaryValue) )
  {
    sub_21FFECC(SaveData, v7);
  }
  v14 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  *(_QWORD *)(v4 + 24) = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)v14, v15, v16, v17, v18, v19, v20);
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
void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_54908680(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_21FFECC(*(_QWORD *)&this.fields.servantId, 0);
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
  if ( (byte_593C1C6 & 1) == 0 )
  {
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo);
    byte_593C1C6 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_54910340(
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
  if ( (byte_593C1C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
    sub_21FFC50(&Method_System_ValueTuple_int__Follower_Type__int___ctor__);
    byte_593C1C7 = 1;
  }
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  Item2 = 0;
  v7.fields.Item3 = 0;
  LODWORD(v7.fields.Item2) = 0;
  v7.fields.Item1 = 0;
  System_ValueTuple_int__Int32Enum__int____ctor(
    &v7,
    v3,
    v4,
    v5,
    (const MethodInfo_3CCF784 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v7.fields.Item3 = v7.fields.Item1;
  Item2 = (int)v7.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v7.fields.Item3,
           (const MethodInfo_3CD036C *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 *v2; // x19
  int v3; // w21
  __int64 v4; // d8
  __int64 v5; // x19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *result; // x0

  v2 = *(__int64 **)&this.fields.servantId;
  if ( (byte_593C1C5 & 1) == 0 )
  {
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
    byte_593C1C5 = 1;
  }
  v3 = *((_DWORD *)v2 + 2);
  v4 = *v2;
  v5 = sub_21FFEBC(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v4;
  result = (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)v5;
  *(_DWORD *)(v5 + 24) = v3;
  return result;
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_54910128(
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


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_54908712(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveData )
    sub_21FFECC(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w21
  __int64 v4; // x19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *result; // x0

  if ( (byte_593C1C8 & 1) == 0 )
  {
    sub_21FFC50(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
    byte_593C1C8 = 1;
  }
  useCount = this->fields.useCount;
  v4 = sub_21FFEBC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  result = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)v4;
  *(_DWORD *)(v4 + 16) = useCount;
  return result;
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


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_54910668(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.useCount = useCount;
}