void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E27F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
    byte_4A5E27F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v3,
    (const MethodInfo_3213DA0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
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
  struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  unsigned __int64 v12; // x22
  int32_t v13; // w20
  Il2CppObject *v14; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v16; // 0:x1.12
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v17; // 0:x1.12

  if ( (byte_4A5E27D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4A5E27D = 1;
  }
  value = 0LL;
  if ( !isEnemy )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    v12 = (unsigned int)svtId | ((unsigned __int64)(unsigned int)followerType << 32);
    v13 = seqId;
    *(_QWORD *)&v16.fields.servantId = v12;
    v16.fields.seqId = seqId;
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v16, &value, (const MethodInfo_3215F80 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v14 = (Il2CppObject *)sub_1B887FC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      System_Object___ctor(v14, 0LL);
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
        (const MethodInfo_3214780 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_1B8880C(usageDictionary, *(_QWORD *)&svtId);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_4A5E27C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    byte_4A5E27C = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_3214944 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *__fastcall PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v5; // x0
  unsigned int *v6; // x20
  unsigned __int64 v7; // x21
  __int64 v8; // x28
  ServantStatusBattleListViewItem_o *v9; // x22
  __int64 v10; // x26
  int32_t seqId; // w25
  Il2CppObject *value; // x24
  System_Collections_Generic_Dictionary_object__object__o *v13; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v34; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v36; // [xsp+10h] [xbp-80h] BYREF
  int v37; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v38; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4A5E27E & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_23103/*"seqId"*/);
    sub_1B885B0(&StringLiteral_19510/*"followerType"*/);
    sub_1B885B0(&StringLiteral_16663/*"addCount"*/);
    byte_4A5E27E = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_3214430 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v5 = sub_1B88658(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v6 = (unsigned int *)v5;
  if ( Count >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)Count;
    v9 = (ServantStatusBattleListViewItem_o *)(v5 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v38,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v7,
        (const MethodInfo_2E9F4F0 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v10 = *(_QWORD *)&v38.fields.key.fields.servantId;
      seqId = v38.fields.key.fields.seqId;
      value = v38.fields.value;
      v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v13,
        (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v38.fields.key.fields.servantId = v10;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)j_il2cpp_value_box_0(
                                                                                   int_TypeInfo,
                                                                                   &v38,
                                                                                   v14,
                                                                                   v15,
                                                                                   v16);
      if ( !v13 )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_23707/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v37 = HIDWORD(v10);
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v17, v18, v19);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_19510/*"followerType"*/,
        v20,
        (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v36 = seqId;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v21, v22, v23);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_23103/*"seqId"*/,
        v24,
        (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v25, v26, v27);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_16663/*"addCount"*/,
        v28,
        (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v6 )
        break;
      v29 = sub_1B886EC(v13, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
      if ( !v29 )
      {
        v34 = sub_1B88830(0LL);
        sub_1B886D8(v34, 0LL);
      }
      if ( v7 >= v6[6] )
        sub_1B88814(v29, v30);
      v9->klass = (ServantStatusBattleListViewItem_c *)v13;
      sub_1B88554(v9, (int32_t)v13, v31, v32);
      ++v7;
      v9 = (ServantStatusBattleListViewItem_o *)((char *)v9 + 8);
      if ( v8 == v7 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1B8880C(usageDictionary, method);
  }
LABEL_12:
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)v6, 0, 0, 0LL);
}


PlayerServantNoblePhantasmUsageData_SaveData_o *__fastcall PlayerServantNoblePhantasmUsageData__GetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v6; // x0
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v7; // x20
  unsigned __int64 v8; // x21
  __int64 v9; // x26
  ServantStatusBattleListViewItem_o *v10; // x22
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  int32_t v13; // w3
  ServantStatusBattleListViewItem_c *v14; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v15; // x19
  const MethodInfo *v16; // x2
  __int64 v18; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v20; // 0:x0.12

  if ( (byte_4A5E27A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo);
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
    byte_4A5E27A = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_3214430 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v6 = sub_1B88658(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v7 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v6;
  if ( Count >= 1 )
  {
    v8 = 0LL;
    v9 = (unsigned int)Count;
    v10 = (ServantStatusBattleListViewItem_o *)(v6 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v8,
        (const MethodInfo_2E9F4F0 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v20.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v20.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   v20,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v11);
      if ( !v7 )
        break;
      v14 = (ServantStatusBattleListViewItem_c *)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B886EC(
                                                                                     usageDictionary,
                                                                                     v7->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v18 = sub_1B88830(0LL);
          sub_1B886D8(v18, 0LL);
        }
      }
      if ( v8 >= v7->max_length )
        sub_1B88814(usageDictionary, method);
      v10->klass = v14;
      sub_1B88554(v10, (int32_t)v14, v12, v13);
      ++v8;
      v10 = (ServantStatusBattleListViewItem_o *)((char *)v10 + 8);
      if ( v9 == v8 )
        goto LABEL_11;
    }
LABEL_12:
    sub_1B8880C(usageDictionary, method);
  }
LABEL_11:
  v15 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_1B887FC(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_44109348(v15, v7, v16);
  return v15;
}


void __fastcall PlayerServantNoblePhantasmUsageData__SetSaveData(
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

  if ( (byte_4A5E27B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4A5E27B = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_3214944 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
          sub_1B88814(usageDictionary, saveData);
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
        v16 = sub_1B887FC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        System_Object___ctor((Il2CppObject *)v16, 0LL);
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
          (const MethodInfo_3214780 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
LABEL_15:
      sub_1B8880C(usageDictionary, saveData);
    }
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v9; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v10; // x1

  if ( (byte_4A5E285 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4A5E285 = 1;
  }
  v5 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v6 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v6 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v8 + 184);
  v10 = *v9;
  this->fields.saveDataEntities = *v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_44109348(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  int32_t v3; // w3
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v10; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5E286 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4A5E286 = 1;
  }
  v6 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v7 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v7 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v10 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.saveDataEntities = *v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, (int32_t)method, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)inputSaveDataEntities, v12, v13);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveDataEntity___ctor(
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *__fastcall PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
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
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v14; // [xsp+0h] [xbp-30h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v15; // 0:x0.12

  v14 = usageDictionaryKey;
  if ( (byte_4A5E284 & 1) == 0 )
  {
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
    byte_4A5E284 = 1;
  }
  v4 = sub_1B887FC(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)&v15.fields.servantId = &v14;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v15, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)SaveData, v8, v9),
        !usageDictionaryValue) )
  {
    sub_1B8880C(SaveData, v7);
  }
  v10 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  *(_QWORD *)(v4 + 24) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)v10, v11, v12);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_44109880(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_1B8880C(*(_QWORD *)&this.fields.servantId, 0LL);
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
  if ( (byte_4A5E281 & 1) == 0 )
  {
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo);
    byte_4A5E281 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj, method), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_44111556(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o other,
        const MethodInfo *method)
{
  int v3; // x1^4

  return **(_DWORD **)&this.fields.servantId == this.fields.seqId
      && *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 4LL) == v3
      && *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 8LL) == other.fields.servantId;
}


int32_t __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetHashCode(
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
  if ( (byte_4A5E282 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
    sub_1B885B0(&Method_System_ValueTuple_int__Follower_Type__int___ctor__);
    byte_4A5E282 = 1;
  }
  Item2 = 0;
  v7.fields.Item3 = 0LL;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  LODWORD(v7.fields.Item2) = 0;
  v7.fields.Item1 = 0LL;
  System_ValueTuple_int__Int32Enum__int____ctor(
    &v7,
    v3,
    v4,
    v5,
    (const MethodInfo_3852E40 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v7.fields.Item3 = v7.fields.Item1;
  Item2 = (int)v7.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v7.fields.Item3,
           (const MethodInfo_38539C0 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 *v2; // x19
  __int64 v3; // d8
  int v4; // w21
  __int64 v5; // x19

  v2 = *(__int64 **)&this.fields.servantId;
  if ( (byte_4A5E280 & 1) == 0 )
  {
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
    byte_4A5E280 = 1;
  }
  v3 = *v2;
  v4 = *((_DWORD *)v2 + 2);
  v5 = sub_1B887FC(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_44111344(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_44109916(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1B8880C(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w21
  __int64 v4; // x19

  if ( (byte_4A5E283 & 1) == 0 )
  {
    sub_1B885B0(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
    byte_4A5E283 = 1;
  }
  useCount = this->fields.useCount;
  v4 = sub_1B887FC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_44111884(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}