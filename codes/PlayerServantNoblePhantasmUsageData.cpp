void PlayerServantNoblePhantasmUsageData___ctor(PlayerServantNoblePhantasmUsageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2AA42 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
    byte_4C2AA42 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object____ctor(
    v3,
    (const MethodInfo_3496FD8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
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

  if ( (byte_4C2AA40 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4C2AA40 = 1;
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
    usageDictionary = (struct System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)usageDictionary, v16, &value, (const MethodInfo_34991B8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    if ( ((unsigned __int8)usageDictionary & 1) == 0 )
    {
      v14 = (Il2CppObject *)sub_1C2D6DC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
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
        (const MethodInfo_34979B8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      ++LODWORD(value[1].klass);
      return;
    }
LABEL_11:
    sub_1C2D6EC(usageDictionary, *(_QWORD *)&svtId);
  }
}


void PlayerServantNoblePhantasmUsageData__Clear(PlayerServantNoblePhantasmUsageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0

  if ( (byte_4C2AA3F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    byte_4C2AA3F = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
    usageDictionary,
    (const MethodInfo_3497B7C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
  CGThumbnailListItem_o *v9; // x22
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
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  __int64 v34; // x0
  int klass; // [xsp+Ch] [xbp-84h] BYREF
  int32_t v36; // [xsp+10h] [xbp-80h] BYREF
  int v37; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o v38; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C2AA41 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_1C2D490(&StringLiteral_23846/*"svtId"*/);
    sub_1C2D490(&StringLiteral_23250/*"seqId"*/);
    sub_1C2D490(&StringLiteral_19518/*"followerType"*/);
    sub_1C2D490(&StringLiteral_16665/*"addCount"*/);
    byte_4C2AA41 = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_15;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_3497668 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v5 = sub_1C2D538(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v6 = (unsigned int *)v5;
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)Count;
    v9 = (CGThumbnailListItem_o *)(v5 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &v38,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v7,
        (const MethodInfo_30F2520 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v10 = *(_QWORD *)&v38.fields.key.fields.servantId;
      seqId = v38.fields.key.fields.seqId;
      value = v38.fields.value;
      v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v13,
        (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
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
        (Il2CppObject *)StringLiteral_23846/*"svtId"*/,
        (Il2CppObject *)usageDictionary,
        (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v37 = HIDWORD(v10);
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v17, v18, v19);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_19518/*"followerType"*/,
        v20,
        (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v36 = seqId;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v21, v22, v23);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_23250/*"seqId"*/,
        v24,
        (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      klass = (int)value[1].klass;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v25, v26, v27);
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v13,
        (Il2CppObject *)StringLiteral_16665/*"addCount"*/,
        v28,
        (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v6 )
        break;
      v29 = sub_1C2D5CC(v13, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
      if ( !v29 )
      {
        v34 = sub_1C2D710(0);
        sub_1C2D5B8(v34, 0);
      }
      if ( v7 >= v6[6] )
        sub_1C2D6F4(v29, v30, v31);
      v9->klass = (CGThumbnailListItem_c *)v13;
      sub_1C2D434(v9, (int32_t)v13, v31, v32);
      ++v7;
      v9 = (CGThumbnailListItem_o *)((char *)v9 + 8);
      if ( v8 == v7 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1C2D6EC(usageDictionary, method);
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
  CGThumbnailListItem_o *v10; // x22
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_c *v14; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v15; // x19
  const MethodInfo *v16; // x2
  __int64 v18; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v20; // 0:x0.12

  if ( (byte_4C2AA3D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo);
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
    byte_4C2AA3D = 1;
  }
  usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___get_Count(
            usageDictionary,
            (const MethodInfo_3497668 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v6 = sub_1C2D538(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v7 = (unsigned int *)v6;
  if ( Count >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)Count;
    v10 = (CGThumbnailListItem_o *)(v6 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v8,
        (const MethodInfo_30F2520 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v20.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v20.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(
                                                                                   v20,
                                                                                   (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)usageDictionaryKey.fields.value,
                                                                                   v11);
      if ( !v7 )
        break;
      v14 = (CGThumbnailListItem_c *)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D5CC(
                                                                                     usageDictionary,
                                                                                     *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !usageDictionary )
        {
          v18 = sub_1C2D710(0);
          sub_1C2D5B8(v18, 0);
        }
      }
      if ( v8 >= v7[6] )
        sub_1C2D6F4(usageDictionary, method, v12);
      v10->klass = v14;
      sub_1C2D434(v10, (int32_t)v14, v12, v13);
      ++v8;
      v10 = (CGThumbnailListItem_o *)((char *)v10 + 8);
      if ( v9 == v8 )
        goto LABEL_11;
    }
LABEL_12:
    sub_1C2D6EC(usageDictionary, method);
  }
LABEL_11:
  v15 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_1C2D6DC(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_47365652(
    v15,
    (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v7,
    v16);
  return v15;
}


void PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *usageDictionary; // x0
  __int64 v6; // x2
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x24
  int max_length; // w8
  unsigned int v9; // w25
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v10; // x8
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  int32_t servantId; // w21
  int32_t followerType; // w28
  int32_t seqId; // w22
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x29
  __int64 v17; // x23
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v18; // 0:x1.12

  if ( (byte_4C2AA3E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4C2AA3E = 1;
  }
  if ( saveData )
  {
    usageDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___Clear(
      usageDictionary,
      (const MethodInfo_3497B7C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_15;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C2D6F4(usageDictionary, saveData, v6);
        v10 = saveDataEntities->m_Items[v9];
        if ( !v10 )
          break;
        usageDictionaryKeySaveData = v10->fields.usageDictionaryKeySaveData;
        if ( !usageDictionaryKeySaveData )
          break;
        v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.usageDictionary;
        servantId = usageDictionaryKeySaveData->fields.servantId;
        followerType = usageDictionaryKeySaveData->fields.followerType;
        seqId = usageDictionaryKeySaveData->fields.seqId;
        usageDictionaryValueSaveData = v10->fields.usageDictionaryValueSaveData;
        v17 = sub_1C2D6DC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        System_Object___ctor((Il2CppObject *)v17, 0);
        if ( !usageDictionaryValueSaveData )
          break;
        *(_DWORD *)(v17 + 16) = usageDictionaryValueSaveData->fields.useCount;
        if ( !v12 )
          break;
        v18.fields.servantId = servantId;
        v18.fields.followerType = followerType;
        v18.fields.seqId = seqId;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__object___set_Item(
          v12,
          v18,
          (Il2CppObject *)v17,
          (const MethodInfo_34979B8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_15:
      sub_1C2D6EC(usageDictionary, saveData);
    }
  }
}


void PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v10; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v11; // x1

  if ( (byte_4C2AA48 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4C2AA48 = 1;
  }
  v6 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v7 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v7 )
  {
    sub_1C7DC00(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(inited);
  v10 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.saveDataEntities = *v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlayerServantNoblePhantasmUsageData_SaveData___ctor_47365652(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v11; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2AA49 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4C2AA49 = 1;
  }
  v7 = Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v8 = *((_QWORD *)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 7);
  if ( !v8 )
  {
    sub_1C7DC00(Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(inited);
  v11 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v10 + 184);
  v12 = *v11;
  this->fields.saveDataEntities = *v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v12, (int32_t)method, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( inputSaveDataEntities )
  {
    this->fields.saveDataEntities = inputSaveDataEntities;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)inputSaveDataEntities, v13, v14);
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
  const MethodInfo *v9; // x3
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v14; // [xsp+0h] [xbp-30h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v15; // 0:x0.12

  v14 = usageDictionaryKey;
  if ( (byte_4C2AA47 & 1) == 0 )
  {
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
    byte_4C2AA47 = 1;
  }
  v4 = sub_1C2D6DC(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_QWORD *)&v15.fields.servantId = &v14;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v15, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)SaveData, v8, v9),
        !usageDictionaryValue) )
  {
    sub_1C2D6EC(SaveData, v7);
  }
  v10 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  *(_QWORD *)(v4 + 24) = v10;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 24), (int32_t)v10, v11, v12);
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
void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_47366184(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_1C2D6EC(*(_QWORD *)&this.fields.servantId, 0);
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
  if ( (byte_4C2AA44 & 1) == 0 )
  {
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo);
    byte_4C2AA44 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.seqId, obj, method), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_47367860(
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
  if ( (byte_4C2AA45 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
    sub_1C2D490(&Method_System_ValueTuple_int__Follower_Type__int___ctor__);
    byte_4C2AA45 = 1;
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
    (const MethodInfo_3AEF414 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  v7.fields.Item3 = v7.fields.Item1;
  Item2 = (int)v7.fields.Item2;
  return System_ValueTuple_int__Int32Enum__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v7.fields.Item3,
           (const MethodInfo_3AEFF94 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
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
  if ( (byte_4C2AA43 & 1) == 0 )
  {
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
    byte_4C2AA43 = 1;
  }
  v3 = *v2;
  v4 = *((_DWORD *)v2 + 2);
  v5 = sub_1C2D6DC(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
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


void PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_47367648(
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


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_47366220(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveData )
    sub_1C2D6EC(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w21
  __int64 v4; // x19

  if ( (byte_4C2AA46 & 1) == 0 )
  {
    sub_1C2D490(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
    byte_4C2AA46 = 1;
  }
  useCount = this->fields.useCount;
  v4 = sub_1C2D6DC(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
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


void PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_47368188(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.useCount = useCount;
}