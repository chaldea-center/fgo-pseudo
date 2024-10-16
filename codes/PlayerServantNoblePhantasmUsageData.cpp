void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB8F92 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__,
      method);
    sub_1BAB41C(
      &System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
      v3);
    byte_4AB8F92 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BAB668(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v4,
    (const MethodInfo_3260394 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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

  if ( (byte_4AB8F90 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__,
      *(_QWORD *)&svtId);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v11);
    sub_1BAB41C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v12);
    byte_4AB8F90 = 1;
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
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v18, &value, (const MethodInfo_3262574 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v16 = (Il2CppObject *)sub_1BAB668(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
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
        (const MethodInfo_3260D74 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_1BAB678(usageDictionary, *(_QWORD *)&svtId);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_4AB8F8F & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      method);
    byte_4AB8F8F = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_1BAB678(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_3260F38 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
  ServantStatusBattleListViewItem_o *v22; // x22
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
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v47; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v49; // [xsp+10h] [xbp-80h] BYREF
  int v50; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v51; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4AB8F91 & 1) == 0 )
  {
    sub_1BAB41C(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      v4);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BAB41C(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v7);
    sub_1BAB41C(&int_TypeInfo, v8);
    sub_1BAB41C(&JsonManager_TypeInfo, v9);
    sub_1BAB41C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v10);
    sub_1BAB41C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v11);
    sub_1BAB41C(&StringLiteral_23746/*"svtId"*/, v12);
    sub_1BAB41C(&StringLiteral_23140/*"seqId"*/, v13);
    sub_1BAB41C(&StringLiteral_19540/*"followerType"*/, v14);
    sub_1BAB41C(&StringLiteral_16694/*"addCount"*/, v15);
    byte_4AB8F91 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_3260A24 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v18 = sub_1BAB4C4(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v19 = (unsigned int *)v18;
  if ( Count >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)Count;
    v22 = (ServantStatusBattleListViewItem_o *)(v18 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v51,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v20,
        (const MethodInfo_2EE3390 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v23 = *(_QWORD *)&v51.fields.key.fields.servantId;
      seqId = v51.fields.key.fields.seqId;
      value = v51.fields.value;
      v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v26,
        (const MethodInfo_3212B9C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v51.fields.key.fields.servantId = v23;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)j_il2cpp_value_box_0(
                                                                                   int_TypeInfo,
                                                                                   &v51,
                                                                                   v27,
                                                                                   v28,
                                                                                   v29);
      if ( !v26 )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_23746/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_3213538 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v50 = HIDWORD(v23);
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v30, v31, v32);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_19540/*"followerType"*/,
        v33,
        (const MethodInfo_3213538 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v49 = seqId;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v34, v35, v36);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_23140/*"seqId"*/,
        v37,
        (const MethodInfo_3213538 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v38, v39, v40);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v26,
        (Il2CppObject *)StringLiteral_16694/*"addCount"*/,
        v41,
        (const MethodInfo_3213538 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v19 )
        break;
      v42 = sub_1BAB558(v26, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
      if ( !v42 )
      {
        v47 = sub_1BAB69C(0LL);
        sub_1BAB544(v47, 0LL);
      }
      if ( v20 >= v19[6] )
        sub_1BAB680(v42, v43);
      v22->klass = (ServantStatusBattleListViewItem_c *)v26;
      sub_1BAB3C0(v22, (int32_t)v26, v44, v45);
      ++v20;
      v22 = (ServantStatusBattleListViewItem_o *)((char *)v22 + 8);
      if ( v21 == v20 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1BAB678(usageDictionary, method);
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
  ServantStatusBattleListViewItem_o *v15; // x22
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_c *v19; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v20; // x19
  const MethodInfo *v21; // x2
  __int64 v23; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v25; // 0:x0.12

  if ( (byte_4AB8F8D & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      method);
    sub_1BAB41C(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v4);
    sub_1BAB41C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v5);
    sub_1BAB41C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v6);
    sub_1BAB41C(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, v7);
    sub_1BAB41C(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo, v8);
    byte_4AB8F8D = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_3260A24 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v11 = sub_1BAB4C4(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v12 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v11;
  if ( Count >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)Count;
    v15 = (ServantStatusBattleListViewItem_o *)(v11 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v13,
        (const MethodInfo_2EE3390 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v25.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v25.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   v25,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v16);
      if ( !v12 )
        break;
      v19 = (ServantStatusBattleListViewItem_c *)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BAB558(
                                                                                     usageDictionary,
                                                                                     v12->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v23 = sub_1BAB69C(0LL);
          sub_1BAB544(v23, 0LL);
        }
      }
      if ( v13 >= v12->max_length )
        sub_1BAB680(usageDictionary, method);
      v15->klass = v19;
      sub_1BAB3C0(v15, (int32_t)v19, v17, v18);
      ++v13;
      v15 = (ServantStatusBattleListViewItem_o *)((char *)v15 + 8);
      if ( v14 == v13 )
        goto LABEL_11;
    }
LABEL_12:
    sub_1BAB678(usageDictionary, method);
  }
LABEL_11:
  v20 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_1BAB668(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_44627468(v20, v12, v21);
  return v20;
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

  if ( (byte_4AB8F8E & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      saveData);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v5);
    sub_1BAB41C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v6);
    byte_4AB8F8E = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_3260F38 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
          sub_1BAB680(usageDictionary, saveData);
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
        v18 = sub_1BAB668(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
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
          (const MethodInfo_3260D74 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_15:
      sub_1BAB678(usageDictionary, saveData);
    }
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  long double v4; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v10; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v11; // x1

  if ( (byte_4AB8F98 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, method);
    byte_4AB8F98 = 1;
  }
  v6 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v7 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v7 )
  {
    sub_1BFD354(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BFD2F8(v4);
  if ( !*(_DWORD *)(v8 + 224) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BFD2F8(v4);
  v10 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.saveDataEntities = *v10;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_44627468(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  int32_t v3; // w3
  long double v4; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v11; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4AB8F99 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, inputSaveDataEntities);
    byte_4AB8F99 = 1;
  }
  v7 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v8 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v8 )
  {
    sub_1BFD354(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BFD2F8(v4);
  if ( !*(_DWORD *)(v9 + 224) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BFD2F8(v4);
  v11 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v10 + 184);
  v12 = *v11;
  this->fields.saveDataEntities = *v11;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v12, (int32_t)method, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)inputSaveDataEntities, v13, v14);
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
  int32_t v8; // w2
  int32_t v9; // w3
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v14; // [xsp+0h] [xbp-30h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v15; // 0:x0.12

  v14 = usageDictionaryKey;
  if ( (byte_4AB8F97 & 1) == 0 )
  {
    sub_1BAB41C(
      &PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
      *(_QWORD *)&usageDictionaryKey.fields.seqId);
    byte_4AB8F97 = 1;
  }
  v4 = sub_1BAB668(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)&v15.fields.servantId = &v14;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v15, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)SaveData, v8, v9),
        !usageDictionaryValue) )
  {
    sub_1BAB678(SaveData, v7);
  }
  v10 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  *(_QWORD *)(v4 + 24) = v10;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)v10, v11, v12);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_44628000(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_1BAB678(*(_QWORD *)&this.fields.servantId, 0LL);
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
  if ( (byte_4AB8F94 & 1) == 0 )
  {
    sub_1BAB41C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.seqId);
    byte_4AB8F94 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj, method), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_44629676(
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
  if ( (byte_4AB8F95 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__, *(_QWORD *)&this.fields.seqId);
    sub_1BAB41C(&Method_System_ValueTuple_int__Follower_Type__int___ctor__, v3);
    byte_4AB8F95 = 1;
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
    (const MethodInfo_38A51A8 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v8.fields.Item3 = v8.fields.Item1;
  Item2 = (int)v8.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v8.fields.Item3,
           (const MethodInfo_38A5D28 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
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
  if ( (byte_4AB8F93 & 1) == 0 )
  {
    sub_1BAB41C(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
      *(_QWORD *)&this.fields.seqId);
    byte_4AB8F93 = 1;
  }
  v3 = *v2;
  v4 = *((_DWORD *)v2 + 2);
  v5 = sub_1BAB668(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_44629464(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_44628036(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1BAB678(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w21
  __int64 v4; // x19

  if ( (byte_4AB8F96 & 1) == 0 )
  {
    sub_1BAB41C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo, method);
    byte_4AB8F96 = 1;
  }
  useCount = this->fields.useCount;
  v4 = sub_1BAB668(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_44630004(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}