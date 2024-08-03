void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF4AE & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__,
      method);
    sub_1B640C8(
      &System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
      v4);
    byte_49FF4AE = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v5,
    (const MethodInfo_31C6170 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v20; // 0:x1.12
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v21; // 0:x1.12

  if ( (byte_49FF4AC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__,
      *(_QWORD *)&svtId);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v11);
    sub_1B640C8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v12);
    byte_49FF4AC = 1;
  }
  value = 0LL;
  if ( !isEnemy )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    v14 = (unsigned int)svtId | ((unsigned __int64)(unsigned int)followerType << 32);
    v15 = seqId;
    *(_QWORD *)&v20.fields.servantId = v14;
    v20.fields.seqId = seqId;
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v20, &value, (const MethodInfo_31C8350 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v18 = (Il2CppObject *)sub_1B64314(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v16, v17);
      System_Object___ctor(v18, 0LL);
      value = v18;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      *(_QWORD *)&v21.fields.servantId = v14;
      v21.fields.seqId = v15;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary,
        v21,
        v18,
        (const MethodInfo_31C6B50 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_1B64324(usageDictionary);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_49FF4AB & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      method);
    byte_49FF4AB = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_31C6D14 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_object__object__o *v28; // x23
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v37; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v39; // [xsp+10h] [xbp-80h] BYREF
  int v40; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v41; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_49FF4AD & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&JsonManager_TypeInfo, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v11);
    sub_1B640C8(&StringLiteral_23610/*"svtId"*/, v12);
    sub_1B640C8(&StringLiteral_23007/*"seqId"*/, v13);
    sub_1B640C8(&StringLiteral_19432/*"followerType"*/, v14);
    sub_1B640C8(&StringLiteral_16594/*"addCount"*/, v15);
    byte_49FF4AD = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_31C6800 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v18 = sub_1B64170(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v19 = (unsigned int *)v18;
  if ( Count >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)Count;
    v22 = (ServantStatusBattleListViewItem_o *)(v18 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v41,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v20,
        (const MethodInfo_2E58784 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v23 = *(_QWORD *)&v41.fields.key.fields.servantId;
      seqId = v41.fields.key.fields.seqId;
      value = v41.fields.value;
      v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                         v26,
                                                                         v27);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v28,
        (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v41.fields.key.fields.servantId = v23;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)j_il2cpp_value_box_0(
                                                                                   int_TypeInfo,
                                                                                   &v41);
      if ( !v28 )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v28,
        (Il2CppObject *)StringLiteral_23610/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v40 = HIDWORD(v23);
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v28,
        (Il2CppObject *)StringLiteral_19432/*"followerType"*/,
        v29,
        (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v39 = seqId;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v28,
        (Il2CppObject *)StringLiteral_23007/*"seqId"*/,
        v30,
        (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v28,
        (Il2CppObject *)StringLiteral_16594/*"addCount"*/,
        v31,
        (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v19 )
        break;
      v32 = sub_1B64204(v28, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
      if ( !v32 )
      {
        v37 = sub_1B64348(0LL);
        sub_1B641F0(v37, 0LL);
      }
      if ( v20 >= v19[6] )
        sub_1B6432C(v32, v33);
      v22->klass = (ServantStatusBattleListViewItem_c *)v28;
      sub_1B6406C(v22, (int32_t)v28, v34, v35);
      ++v20;
      v22 = (ServantStatusBattleListViewItem_o *)((char *)v22 + 8);
      if ( v21 == v20 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1B64324(usageDictionary);
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
  __int64 v12; // x1
  __int64 v13; // x2
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v14; // x20
  unsigned __int64 v15; // x21
  __int64 v16; // x26
  ServantStatusBattleListViewItem_o *v17; // x22
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  ServantStatusBattleListViewItem_c *v22; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v23; // x19
  const MethodInfo *v24; // x2
  __int64 v26; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v28; // 0:x0.12

  if ( (byte_49FF4A9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      method);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v6);
    sub_1B640C8(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, v7);
    sub_1B640C8(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo, v8);
    byte_49FF4A9 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_31C6800 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v11 = sub_1B64170(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v14 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v11;
  if ( Count >= 1 )
  {
    v15 = 0LL;
    v16 = (unsigned int)Count;
    v17 = (ServantStatusBattleListViewItem_o *)(v11 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v15,
        (const MethodInfo_2E58784 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v28.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v28.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   v28,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v18);
      if ( !v14 )
        break;
      v22 = (ServantStatusBattleListViewItem_c *)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64204(
                                                                                     usageDictionary,
                                                                                     v14->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v26 = sub_1B64348(0LL);
          sub_1B641F0(v26, 0LL);
        }
      }
      if ( v15 >= v14->max_length )
        sub_1B6432C(usageDictionary, v19);
      v17->klass = v22;
      sub_1B6406C(v17, (int32_t)v22, v20, v21);
      ++v15;
      v17 = (ServantStatusBattleListViewItem_o *)((char *)v17 + 8);
      if ( v16 == v15 )
        goto LABEL_11;
    }
LABEL_12:
    sub_1B64324(usageDictionary);
  }
LABEL_11:
  v23 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_1B64314(
                                                            PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo,
                                                            v12,
                                                            v13);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_43741216(v23, v14, v24);
  return v23;
}


void __fastcall PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x24
  int max_length; // w8
  unsigned int v12; // w25
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v13; // x8
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t servantId; // w21
  int32_t followerType; // w28
  int32_t seqId; // w22
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x29
  __int64 v20; // x23
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v21; // 0:x1.12

  if ( (byte_49FF4AA & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      saveData);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v5);
    sub_1B640C8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v6);
    byte_49FF4AA = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_31C6D14 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_15;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1B6432C(usageDictionary, v8);
        v13 = saveDataEntities->m_Items[v12];
        if ( !v13 )
          break;
        usageDictionaryKeySaveData = v13->fields.usageDictionaryKeySaveData;
        if ( !usageDictionaryKeySaveData )
          break;
        v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
        servantId = usageDictionaryKeySaveData->fields.servantId;
        followerType = usageDictionaryKeySaveData->fields.followerType;
        seqId = usageDictionaryKeySaveData->fields.seqId;
        usageDictionaryValueSaveData = v13->fields.usageDictionaryValueSaveData;
        v20 = sub_1B64314(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v8, v9);
        System_Object___ctor((Il2CppObject *)v20, 0LL);
        if ( !usageDictionaryValueSaveData )
          break;
        *(_DWORD *)(v20 + 16) = usageDictionaryValueSaveData->fields.useCount;
        if ( !v15 )
          break;
        v21.fields.servantId = servantId;
        v21.fields.followerType = followerType;
        v21.fields.seqId = seqId;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
          v15,
          v21,
          (Il2CppObject *)v20,
          (const MethodInfo_31C6B50 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v12 >= max_length )
          return;
      }
LABEL_15:
      sub_1B64324(usageDictionary);
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

  if ( (byte_49FF4B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, method);
    byte_49FF4B4 = 1;
  }
  v5 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v6 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v6 )
  {
    sub_1BB6000(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  v9 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v8 + 184);
  v10 = *v9;
  this->fields.saveDataEntities = *v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_43741216(
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

  if ( (byte_49FF4B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, inputSaveDataEntities);
    byte_49FF4B5 = 1;
  }
  v6 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v7 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v7 )
  {
    sub_1BB6000(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(v9);
  v10 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.saveDataEntities = *v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, (int32_t)method, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)inputSaveDataEntities, v12, v13);
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
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v14; // [xsp+0h] [xbp-30h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v15; // 0:x0.12

  v14 = usageDictionaryKey;
  if ( (byte_49FF4B3 & 1) == 0 )
  {
    sub_1B640C8(
      &PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
      *(_QWORD *)&usageDictionaryKey.fields.seqId);
    byte_49FF4B3 = 1;
  }
  v4 = sub_1B64314(
         PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
         *(_QWORD *)&usageDictionaryKey.fields.seqId,
         usageDictionaryValue);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)&v15.fields.servantId = &v14;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v15, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)SaveData, v7, v8),
        !usageDictionaryValue) )
  {
    sub_1B64324(SaveData);
  }
  v10 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v9);
  *(_QWORD *)(v4 + 24) = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)v10, v11, v12);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_43741748(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_1B64324(*(_QWORD *)&this.fields.servantId);
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
  if ( (byte_49FF4B0 & 1) == 0 )
  {
    sub_1B640C8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.seqId);
    byte_49FF4B0 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj, method), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_43743424(
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
  if ( (byte_49FF4B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__, *(_QWORD *)&this.fields.seqId);
    sub_1B640C8(&Method_System_ValueTuple_int__Follower_Type__int___ctor__, v3);
    byte_49FF4B1 = 1;
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
    (const MethodInfo_3803594 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v8.fields.Item3 = v8.fields.Item1;
  Item2 = (int)v8.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v8.fields.Item3,
           (const MethodInfo_3804114 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
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
  if ( (byte_49FF4AF & 1) == 0 )
  {
    sub_1B640C8(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
      *(_QWORD *)&this.fields.seqId);
    byte_49FF4AF = 1;
  }
  v3 = *v2;
  v4 = *((_DWORD *)v2 + 2);
  v5 = sub_1B64314(
         PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
         *(_QWORD *)&this.fields.seqId,
         method);
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_43743212(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_43741784(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1B64324(v5);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t useCount; // w21
  __int64 v5; // x19

  if ( (byte_49FF4B2 & 1) == 0 )
  {
    sub_1B640C8(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo, method);
    byte_49FF4B2 = 1;
  }
  useCount = this->fields.useCount;
  v5 = sub_1B64314(
         PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo,
         method,
         v2);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = useCount;
  return (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)v5;
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_43743752(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}