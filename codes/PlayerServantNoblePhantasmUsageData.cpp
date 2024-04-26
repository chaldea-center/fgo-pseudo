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

  if ( (byte_4351BF5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
    byte_4351BF5 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B70764(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____ctor(
    v3,
    (const MethodInfo_230B210 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4351BF3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_B70694(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4351BF3 = 1;
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
            (const MethodInfo_230DB80 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__) )
    {
      v13 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B70764(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor(v13, 0LL);
      value = v13;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
        usageDictionary,
        key,
        v13,
        (const MethodInfo_230BDCC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)value;
    if ( value )
    {
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__IncreaseCount(value, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(usageDictionary, v11);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0

  if ( (byte_4351BF2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    byte_4351BF2 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_B7076C(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
    usageDictionary,
    (const MethodInfo_230BFF0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
  __int64 v13; // x2
  __int64 v14; // x2
  System_Xml_Schema_XmlSchemaObject_o *v15; // x0
  __int64 v16; // x2
  System_Xml_Schema_XmlSchemaObject_o *v17; // x0
  __int64 v18; // x2
  System_Xml_Schema_XmlSchemaObject_o *v19; // x0
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v28; // x0
  __int64 v29; // x0
  int32_t useCount; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v32; // [xsp+10h] [xbp-70h] BYREF
  int v33; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o v34; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4351BF4 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_B70694(&StringLiteral_22843/*"svtId"*/);
    sub_B70694(&StringLiteral_22335/*"seqId"*/);
    sub_B70694(&StringLiteral_19081/*"followerType"*/);
    sub_B70694(&StringLiteral_16490/*"addCount"*/);
    byte_4351BF4 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_16;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_230B9EC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v4 = sub_B706AC(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v5 = (unsigned int *)v4;
  if ( Count >= 1 )
  {
    v6 = 0LL;
    v7 = Count;
    v8 = (BattleServantConfConponent_o *)(v4 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &v34,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v6,
        (const MethodInfo_1CB9ED0 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v9 = *(_QWORD *)&v34.fields.key.fields.servantId;
      seqId = v34.fields.key.fields.seqId;
      value = v34.fields.value;
      v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v12,
        (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v34.fields.key.fields.servantId = v9;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v13);
      if ( !v12 )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22843/*"svtId"*/,
        (System_Xml_Schema_XmlSchemaObject_o *)usageDictionary,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v33 = HIDWORD(v9);
      v15 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v14);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_19081/*"followerType"*/,
        v15,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v32 = seqId;
      v17 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v16);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22335/*"seqId"*/,
        v17,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      useCount = value->fields.useCount;
      v19 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount, v18);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v12,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_16490/*"addCount"*/,
        v19,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v5 )
        break;
      v20 = sub_B70754(v12, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
      if ( !v20 )
      {
        v28 = sub_B7078C(0LL);
        sub_B70738(v28, 0LL);
      }
      if ( v6 >= v5[6] )
      {
        v29 = sub_B70798(v20);
        sub_B70738(v29, 0LL);
      }
      v8->klass = (BattleServantConfConponent_c *)v12;
      sub_B70630(v8, (System_Int32_array **)v12, v21, v22, v23, v24, v25, v26);
      ++v6;
      v8 = (BattleServantConfConponent_o *)((char *)v8 + 8);
      if ( (__int64)v6 >= v7 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B7076C(usageDictionary, method);
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

  if ( (byte_4351BF0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
    sub_B70694(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__);
    sub_B70694(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo);
    sub_B70694(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
    byte_4351BF0 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_230B9EC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v6 = sub_B706AC(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
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
        (const MethodInfo_1CB9ED0 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v23.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v23.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(v23, usageDictionaryKey.fields.value, 0LL);
      if ( !v7 )
        break;
      v17 = (System_Int32_array **)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B70754(usageDictionary, v7->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v21 = sub_B7078C(0LL);
          sub_B70738(v21, 0LL);
        }
      }
      if ( v8 >= v7->max_length )
      {
        v20 = sub_B70798(usageDictionary);
        sub_B70738(v20, 0LL);
      }
      v10->klass = (BattleServantConfConponent_c *)v17;
      sub_B70630(v10, v17, v11, v12, v13, v14, v15, v16);
      ++v8;
      v10 = (BattleServantConfConponent_o *)((char *)v10 + 8);
      if ( (__int64)v8 >= v9 )
        goto LABEL_11;
    }
LABEL_12:
    sub_B7076C(usageDictionary, method);
  }
LABEL_11:
  v18 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_B70764(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_23664480(v18, v7, 0LL);
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

  if ( (byte_4351BF1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    sub_B70694(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
    byte_4351BF1 = 1;
  }
  if ( saveData )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
      usageDictionary,
      (const MethodInfo_230BFF0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
          v16 = sub_B70798(usageDictionary);
          sub_B70738(v16, 0LL);
        }
        v10 = saveDataEntities->m_Items[v9];
        if ( !v10 )
          break;
        usageDictionaryKeySaveData = v10->fields.usageDictionaryKeySaveData;
        v12 = this->fields.usageDictionary;
        p_key = &key;
        key.fields.seqId = 0;
        *(_QWORD *)&key.fields.servantId = 0LL;
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_24970380(
          *(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *)(&usageDictionaryKeySaveData - 1),
          0LL,
          v6);
        usageDictionaryValueSaveData = v10->fields.usageDictionaryValueSaveData;
        v15 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B70764(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_24970816(v15, usageDictionaryValueSaveData, 0LL);
        if ( !v12 )
          break;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
          v12,
          key,
          v15,
          (const MethodInfo_230BDCC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_B7076C(usageDictionary, saveData);
    }
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _QWORD **v9; // x21
  __int64 v10; // x20
  __int16 v11; // w8
  __int64 v12; // x20
  __int64 v13; // x20
  __int64 v14; // x20
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v15; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v16; // x1

  if ( (byte_4350F4D & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4350F4D = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v10 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_B08394(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_B08394(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_B08394(*v9[6]);
  v15 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.saveDataEntities = *v15;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_23664480(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _QWORD **v10; // x22
  __int64 v11; // x21
  __int16 v12; // w8
  __int64 v13; // x21
  __int64 v14; // x21
  __int64 v15; // x21
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v16; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v17; // x1
  BattleServantConfConponent_o *p_fields; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4350F4E & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___);
    byte_4350F4E = 1;
  }
  v10 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v11 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_B08394(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_B08394(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_B08394(*v10[6]);
  v16 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v15 + 184);
  v17 = *v16;
  this->fields.saveDataEntities = *v16;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)v17,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    p_fields->klass = (BattleServantConfConponent_c *)inputSaveDataEntities;
    sub_B70630(p_fields, (System_Int32_array **)inputSaveDataEntities, v19, v20, v21, v22, v23, v24);
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
  System_Int32_array **SaveData; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v22; // [xsp+0h] [xbp-20h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // 0:x0.12

  v22 = usageDictionaryKey;
  if ( (byte_4351AA8 & 1) == 0 )
  {
    sub_B70694(&PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
    byte_4351AA8 = 1;
  }
  v4 = sub_B70764(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)&v23.fields.servantId = &v22;
  SaveData = (System_Int32_array **)PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v23, v5);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = SaveData,
        sub_B70630((BattleServantConfConponent_o *)(v4 + 16), SaveData, v8, v9, v10, v11, v12, v13),
        !usageDictionaryValue) )
  {
    sub_B7076C(SaveData, v7);
  }
  v14 = (System_Int32_array **)PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
                                 usageDictionaryValue,
                                 v7);
  *(_QWORD *)(v4 + 24) = v14;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 24), v14, v15, v16, v17, v18, v19, v20);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_24970380(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_B7076C(*(_QWORD *)&this.fields.servantId, 0LL);
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
  if ( (byte_4351AAA & 1) == 0 )
  {
    sub_B70694(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo);
    byte_4351AAA = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_24970588(
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
  if ( (byte_4351AAB & 1) == 0 )
  {
    sub_B70694(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
    sub_B70694(&Method_System_ValueTuple_int__Follower_Type__int___ctor__);
    byte_4351AAB = 1;
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
    (const MethodInfo_267DF78 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  Item2 = (int)v7.fields.Item2;
  v7.fields.Item3 = v7.fields.Item1;
  return System_ValueTuple_int__Follower_Type__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v7.fields.Item3,
           (const MethodInfo_267EDB8 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
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
  if ( (byte_4351AA9 & 1) == 0 )
  {
    sub_B70694(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
    byte_4351AA9 = 1;
  }
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)sub_B70764(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_24392504(v6, v3, v4, v5, 0LL);
  return v6;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_24392504(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_24970816(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_B7076C(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v4; // x20

  if ( (byte_4351AAC & 1) == 0 )
  {
    sub_B70694(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
    byte_4351AAC = 1;
  }
  useCount = this->fields.useCount;
  v4 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)sub_B70764(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_24392576(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_24392576(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}