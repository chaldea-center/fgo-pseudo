void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AF819 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
    byte_42AF819 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B52A54(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____ctor(
    v3,
    (const MethodInfo_19BE400 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
        PlayerServantNoblePhantasmUsageData_o *this,
        int32_t svtId,
        int32_t seqId,
        int32_t followerType,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v13; // x20
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // [xsp+8h] [xbp-48h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+10h] [xbp-40h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v16; // 0:x0.12

  if ( (byte_42AF817 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_B52984(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_42AF817 = 1;
  }
  key.fields.seqId = 0;
  value = 0LL;
  *(_QWORD *)&key.fields.servantId = 0LL;
  if ( !isEnemy )
  {
    *(_QWORD *)&v16.fields.servantId = &key;
    v16.fields.seqId = svtId;
    PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor(v16, followerType, seqId, 0, method);
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___TryGetValue(
            usageDictionary,
            key,
            &value,
            (const MethodInfo_19C0D70 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__) )
    {
      v13 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B52A54(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor(v13, 0LL);
      value = v13;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
        usageDictionary,
        key,
        v13,
        (const MethodInfo_19BEFBC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)value;
    if ( value )
    {
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__IncreaseCount(value, 0LL);
      return;
    }
LABEL_11:
    sub_B52A5C(usageDictionary, v11);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0

  if ( (byte_42AF816 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    byte_42AF816 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
    usageDictionary,
    (const MethodInfo_19BF1E0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *__fastcall PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v4; // x0
  unsigned int *v5; // x20
  unsigned __int64 v6; // x21
  signed __int64 v7; // x24
  BattleServantConfConponent_o *v8; // x22
  __int64 v9; // x19
  int32_t seqId; // w27
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // x25
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v12; // x23
  System_Xml_Schema_XmlSchemaObject_o *v13; // x0
  System_Xml_Schema_XmlSchemaObject_o *v14; // x0
  System_Xml_Schema_XmlSchemaObject_o *v15; // x0
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v24; // x0
  __int64 v25; // x0
  int32_t useCount; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v28; // [xsp+10h] [xbp-70h] BYREF
  int v29; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o v30; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_42AF818 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_B52984(&StringLiteral_22657/*"svtId"*/);
    sub_B52984(&StringLiteral_22153/*"seqId"*/);
    sub_B52984(&StringLiteral_18934/*"followerType"*/);
    sub_B52984(&StringLiteral_16361/*"addCount"*/);
    byte_42AF818 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_16;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_19BEBDC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v4 = sub_B5299C(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v5 = (unsigned int *)v4;
  if ( Count >= 1 )
  {
    v6 = 0LL;
    v7 = Count;
    v8 = (BattleServantConfConponent_o *)(v4 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &v30,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v6,
        (const MethodInfo_1B606B4 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v9 = *(_QWORD *)&v30.fields.key.fields.servantId;
      seqId = v30.fields.key.fields.seqId;
      value = v30.fields.value;
      v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v12,
        (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v30.fields.key.fields.servantId = v9;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      if ( !v12 )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22657/*"svtId"*/,
        (System_Xml_Schema_XmlSchemaObject_o *)usageDictionary,
        (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v29 = HIDWORD(v9);
      v13 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_18934/*"followerType"*/,
        v13,
        (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v28 = seqId;
      v14 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22153/*"seqId"*/,
        v14,
        (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      useCount = value->fields.useCount;
      v15 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_16361/*"addCount"*/,
        v15,
        (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v5 )
        break;
      v16 = sub_B52A44(v12, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
      if ( !v16 )
      {
        v24 = sub_B52A7C(0LL);
        sub_B52A28(v24, 0LL);
      }
      if ( v6 >= v5[6] )
      {
        v25 = sub_B52A88(v16);
        sub_B52A28(v25, 0LL);
      }
      v8->klass = (BattleServantConfConponent_c *)v12;
      sub_B52920(v8, (System_Int32_array **)v12, v17, v18, v19, v20, v21, v22);
      ++v6;
      v8 = (BattleServantConfConponent_o *)((char *)v8 + 8);
      if ( (__int64)v6 >= v7 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B52A5C(usageDictionary, method);
  }
LABEL_12:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0LL);
}


PlayerServantNoblePhantasmUsageData_SaveData_o *__fastcall PlayerServantNoblePhantasmUsageData__GetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // x23
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v6; // x0
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v7; // x20
  unsigned __int64 v8; // x21
  signed __int64 v9; // x25
  BattleServantConfConponent_o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v18; // x19
  __int64 v20; // x0
  __int64 v21; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // 0:x0.12

  if ( (byte_42AF814 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_B52984(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_B52984(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo);
    sub_B52984(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
    byte_42AF814 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_19BEBDC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v6 = sub_B5299C(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v7 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v6;
  if ( Count >= 1 )
  {
    v8 = 0LL;
    v9 = Count;
    v10 = (BattleServantConfConponent_o *)(v6 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v8,
        (const MethodInfo_1B606B4 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v23.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v23.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(v23, usageDictionaryKey.fields.value, 0LL);
      if ( !v7 )
        break;
      v17 = (System_Int32_array **)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B52A44(usageDictionary, v7->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v21 = sub_B52A7C(0LL);
          sub_B52A28(v21, 0LL);
        }
      }
      if ( v8 >= v7->max_length )
      {
        v20 = sub_B52A88(usageDictionary);
        sub_B52A28(v20, 0LL);
      }
      v10->klass = (BattleServantConfConponent_c *)v17;
      sub_B52920(v10, v17, v11, v12, v13, v14, v15, v16);
      ++v8;
      v10 = (BattleServantConfConponent_o *)((char *)v10 + 8);
      if ( (__int64)v8 >= v9 )
        goto LABEL_11;
    }
LABEL_12:
    sub_B52A5C(usageDictionary, method);
  }
LABEL_11:
  v18 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_B52A54(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_19862148(v18, v7, 0LL);
  return v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  const MethodInfo *v6; // x3
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x23
  int max_length; // w8
  unsigned int v9; // w24
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v10; // x21
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x1 OVERLAPPED
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v12; // x20
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *p_key; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x22
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v15; // x21
  __int64 v16; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_42AF815 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_B52984(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_42AF815 = 1;
  }
  if ( saveData )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
      usageDictionary,
      (const MethodInfo_19BF1E0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_13;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
        {
          v16 = sub_B52A88(usageDictionary);
          sub_B52A28(v16, 0LL);
        }
        v10 = saveDataEntities->m_Items[v9];
        if ( !v10 )
          break;
        usageDictionaryKeySaveData = v10->fields.usageDictionaryKeySaveData;
        v12 = this->fields.usageDictionary;
        p_key = &key;
        key.fields.seqId = 0;
        *(_QWORD *)&key.fields.servantId = 0LL;
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_19862828(
          *(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *)(&usageDictionaryKeySaveData - 1),
          0LL,
          v6);
        usageDictionaryValueSaveData = v10->fields.usageDictionaryValueSaveData;
        v15 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B52A54(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_19863264(v15, usageDictionaryValueSaveData, 0LL);
        if ( !v12 )
          break;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
          v12,
          key,
          v15,
          (const MethodInfo_19BEFBC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_B52A5C(usageDictionary, saveData);
    }
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  _QWORD **v3; // x21
  __int64 v4; // x20
  __int16 v5; // w8
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x20

  if ( (byte_42AD437 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_42AD437 = 1;
  }
  v3 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v4 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_AEB684(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AEB684(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AEB684(*v3[6]);
  this->fields.saveDataEntities = **(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v8 + 184);
  sub_B52920(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_19862148(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  _QWORD **v5; // x22
  __int64 v6; // x21
  __int16 v7; // w8
  __int64 v8; // x21
  __int64 v9; // x21
  __int64 v10; // x21
  PlayerServantNoblePhantasmUsageData_SaveData_Fields *p_fields; // x21

  if ( (byte_42AD438 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_42AD438 = 1;
  }
  v5 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v6 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v7 = *(_WORD *)(v6 + 306);
  if ( (v7 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v7 = *(_WORD *)(v6 + 306);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v8 = *v5[6];
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AEB684(*v5[6]);
    if ( !*(_DWORD *)(v8 + 224) )
    {
      v9 = *v5[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AEB684(*v5[6]);
      j_il2cpp_runtime_class_init_0(v9);
    }
  }
  v10 = *v5[6];
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AEB684(*v5[6]);
  this->fields.saveDataEntities = **(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v10 + 184);
  p_fields = &this->fields;
  sub_B52920(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    p_fields->saveDataEntities = inputSaveDataEntities;
    sub_B52920(p_fields);
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
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x2
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *SaveData; // x0
  const MethodInfo *v7; // x1
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v9; // [xsp+0h] [xbp-20h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v10; // 0:x0.12

  v9 = usageDictionaryKey;
  if ( (byte_42AD439 & 1) == 0 )
  {
    sub_B52984(&PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
    byte_42AD439 = 1;
  }
  v4 = (Il2CppObject *)sub_B52A54(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor(v4, 0LL);
  *(_QWORD *)&v10.fields.servantId = &v9;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v10, v5);
  if ( !v4 || (v4[1].klass = (Il2CppClass *)SaveData, sub_B52920(&v4[1]), !usageDictionaryValue) )
    sub_B52A5C(SaveData, v7);
  v4[1].monitor = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  sub_B52920(&v4[1].monitor);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_19862828(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_B52A5C(*(_QWORD *)&this.fields.servantId, 0LL);
  **(_DWORD **)&this.fields.servantId = *(_DWORD *)(*(_QWORD *)&this.fields.seqId + 16LL);
  *(_DWORD *)(*(_QWORD *)&this.fields.servantId + 4LL) = *(_DWORD *)(*(_QWORD *)&this.fields.seqId + 20LL);
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
  if ( (byte_42AD43B & 1) == 0 )
  {
    sub_B52984(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo);
    byte_42AD43B = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_19863036(
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
  System_ValueTuple_T1__T2__T3__o v7; // [xsp+0h] [xbp-30h] BYREF
  int Item2; // [xsp+18h] [xbp-18h]

  v2 = *(int32_t **)&this.fields.servantId;
  if ( (byte_42AD43C & 1) == 0 )
  {
    sub_B52984(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
    sub_B52984(&Method_System_ValueTuple_int__Follower_Type__int___ctor__);
    byte_42AD43C = 1;
  }
  Item2 = 0;
  v7.fields.Item3 = 0LL;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  LODWORD(v7.fields.Item2) = 0;
  v7.fields.Item1 = 0LL;
  System_ValueTuple_int__Follower_Type__int____ctor(
    &v7,
    v3,
    v4,
    v5,
    (const MethodInfo_2C10AFC *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  Item2 = (int)v7.fields.Item2;
  v7.fields.Item3 = v7.fields.Item1;
  return System_ValueTuple_int__Follower_Type__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v7.fields.Item3,
           (const MethodInfo_2C1193C *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  int32_t *v2; // x19
  int32_t v3; // w20
  int32_t v4; // w21
  int32_t v5; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *v6; // x22

  v2 = *(int32_t **)&this.fields.servantId;
  if ( (byte_42AD43A & 1) == 0 )
  {
    sub_B52984(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
    byte_42AD43A = 1;
  }
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)sub_B52A54(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20373684(v6, v3, v4, v5, 0LL);
  return v6;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20373684(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_19863264(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_B52A5C(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v4; // x20

  if ( (byte_42AD43D & 1) == 0 )
  {
    sub_B52984(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
    byte_42AD43D = 1;
  }
  useCount = this->fields.useCount;
  v4 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)sub_B52A54(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20373756(
    v4,
    useCount,
    0LL);
  return v4;
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20373756(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}