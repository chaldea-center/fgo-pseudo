void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4186B53 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__,
      method);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
      v3);
    byte_4186B53 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B2C42C(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____ctor(
    v4,
    (const MethodInfo_15B3A48 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v15; // x20
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // [xsp+8h] [xbp-48h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+10h] [xbp-40h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v18; // 0:x0.12

  if ( (byte_4186B51 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__,
      *(_QWORD *)&svtId);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v11);
    sub_B2C35C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v12);
    byte_4186B51 = 1;
  }
  key.fields.seqId = 0;
  value = 0LL;
  *(_QWORD *)&key.fields.servantId = 0LL;
  if ( !isEnemy )
  {
    *(_QWORD *)&v18.fields.servantId = &key;
    v18.fields.seqId = svtId;
    PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor(v18, followerType, seqId, 0, method);
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___TryGetValue(
            usageDictionary,
            key,
            &value,
            (const MethodInfo_15B63B8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__) )
    {
      v15 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B2C42C(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor(v15, 0LL);
      value = v15;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
        usageDictionary,
        key,
        v15,
        (const MethodInfo_15B4604 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)value;
    if ( value )
    {
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__IncreaseCount(value, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(usageDictionary, v13);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0

  if ( (byte_4186B50 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      method);
    byte_4186B50 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
    usageDictionary,
    (const MethodInfo_15B4828 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *__fastcall PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
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
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v17; // x0
  unsigned int *v18; // x20
  unsigned __int64 v19; // x21
  signed __int64 v20; // x24
  BattleServantConfConponent_o *v21; // x22
  __int64 v22; // x19
  int32_t seqId; // w27
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // x25
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v25; // x23
  System_Xml_Schema_XmlSchemaObject_o *v26; // x0
  System_Xml_Schema_XmlSchemaObject_o *v27; // x0
  System_Xml_Schema_XmlSchemaObject_o *v28; // x0
  __int64 v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v37; // x0
  __int64 v38; // x0
  int32_t useCount; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v41; // [xsp+10h] [xbp-70h] BYREF
  int v42; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o v43; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4186B52 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v2);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&JsonManager_TypeInfo, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v10);
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, v11);
    sub_B2C35C(&StringLiteral_21968/*"seqId"*/, v12);
    sub_B2C35C(&StringLiteral_18793/*"followerType"*/, v13);
    sub_B2C35C(&StringLiteral_16250/*"addCount"*/, v14);
    byte_4186B52 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_16;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_15B4224 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v17 = sub_B2C374(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v18 = (unsigned int *)v17;
  if ( Count >= 1 )
  {
    v19 = 0LL;
    v20 = Count;
    v21 = (BattleServantConfConponent_o *)(v17 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &v43,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v19,
        (const MethodInfo_1A8DE78 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v22 = *(_QWORD *)&v43.fields.key.fields.servantId;
      seqId = v43.fields.key.fields.seqId;
      value = v43.fields.value;
      v25 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v25,
        (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v43.fields.key.fields.servantId = v22;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      if ( !v25 )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v25,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22468/*"svtId"*/,
        (System_Xml_Schema_XmlSchemaObject_o *)usageDictionary,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v42 = HIDWORD(v22);
      v26 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v25,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_18793/*"followerType"*/,
        v26,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v41 = seqId;
      v27 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v25,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_21968/*"seqId"*/,
        v27,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      useCount = value->fields.useCount;
      v28 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v25,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_16250/*"addCount"*/,
        v28,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v18 )
        break;
      v29 = sub_B2C41C(v25, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
      if ( !v29 )
      {
        v37 = sub_B2C454();
        sub_B2C400(v37, 0LL);
      }
      if ( v19 >= v18[6] )
      {
        v38 = sub_B2C460(v29);
        sub_B2C400(v38, 0LL);
      }
      v21->klass = (BattleServantConfConponent_c *)v25;
      sub_B2C2F8(v21, (System_Int32_array **)v25, v30, v31, v32, v33, v34, v35);
      ++v19;
      v21 = (BattleServantConfConponent_o *)((char *)v21 + 8);
      if ( (__int64)v19 >= v20 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(usageDictionary, method);
  }
LABEL_12:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)v18, 0, 0, 0LL);
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
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v11; // x0
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v12; // x20
  unsigned __int64 v13; // x21
  signed __int64 v14; // x25
  BattleServantConfConponent_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v23; // x19
  __int64 v25; // x0
  __int64 v26; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v28; // 0:x0.12

  if ( (byte_4186B4E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      method);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v6);
    sub_B2C35C(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, v7);
    sub_B2C35C(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo, v8);
    byte_4186B4E = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_15B4224 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v11 = sub_B2C374(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v12 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v11;
  if ( Count >= 1 )
  {
    v13 = 0LL;
    v14 = Count;
    v15 = (BattleServantConfConponent_o *)(v11 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v13,
        (const MethodInfo_1A8DE78 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v28.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v28.fields.seqId = v2;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(v28, usageDictionaryKey.fields.value, 0LL);
      if ( !v12 )
        break;
      v22 = (System_Int32_array **)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B2C41C(usageDictionary, v12->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v26 = sub_B2C454();
          sub_B2C400(v26, 0LL);
        }
      }
      if ( v13 >= v12->max_length )
      {
        v25 = sub_B2C460(usageDictionary);
        sub_B2C400(v25, 0LL);
      }
      v15->klass = (BattleServantConfConponent_c *)v22;
      sub_B2C2F8(v15, v22, v16, v17, v18, v19, v20, v21);
      ++v13;
      v15 = (BattleServantConfConponent_o *)((char *)v15 + 8);
      if ( (__int64)v13 >= v14 )
        goto LABEL_11;
    }
LABEL_12:
    sub_B2C434(usageDictionary, method);
  }
LABEL_11:
  v23 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_B2C42C(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_20271152(v23, v12, 0LL);
  return v23;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  const MethodInfo *v8; // x3
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x23
  int max_length; // w8
  unsigned int v11; // w24
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v12; // x21
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x1 OVERLAPPED
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v14; // x20
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *p_key; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x22
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v17; // x21
  __int64 v18; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4186B4F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      saveData);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v5);
    sub_B2C35C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v6);
    byte_4186B4F = 1;
  }
  if ( saveData )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
      usageDictionary,
      (const MethodInfo_15B4828 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_13;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
        {
          v18 = sub_B2C460(usageDictionary);
          sub_B2C400(v18, 0LL);
        }
        v12 = saveDataEntities->m_Items[v11];
        if ( !v12 )
          break;
        usageDictionaryKeySaveData = v12->fields.usageDictionaryKeySaveData;
        v14 = this->fields.usageDictionary;
        p_key = &key;
        key.fields.seqId = 0;
        *(_QWORD *)&key.fields.servantId = 0LL;
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_20271832(
          *(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *)(&usageDictionaryKeySaveData - 1),
          0LL,
          v8);
        usageDictionaryValueSaveData = v12->fields.usageDictionaryValueSaveData;
        v17 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B2C42C(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_20272268(v17, usageDictionaryValueSaveData, 0LL);
        if ( !v14 )
          break;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
          v14,
          key,
          v17,
          (const MethodInfo_15B4604 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_13:
      sub_B2C434(usageDictionary, saveData);
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
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v9; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v10; // x1

  if ( (byte_41852AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, method);
    byte_41852AD = 1;
  }
  v3 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v4 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_AC505C(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AC505C(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(*v3[6]);
  v9 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v8 + 184);
  v10 = *v9;
  this->fields.saveDataEntities = *v9;
  sub_B2C2F8(&this->fields, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_20271152(
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
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array **v11; // x8
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v12; // x1
  PlayerServantNoblePhantasmUsageData_SaveData_Fields *p_fields; // x21

  if ( (byte_41852AE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, inputSaveDataEntities);
    byte_41852AE = 1;
  }
  v5 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v6 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v7 = *(_WORD *)(v6 + 306);
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v7 = *(_WORD *)(v6 + 306);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v8 = *v5[6];
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AC505C(*v5[6]);
    if ( !*(_DWORD *)(v8 + 224) )
    {
      v9 = *v5[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AC505C(*v5[6]);
      j_il2cpp_runtime_class_init_0(v9);
    }
  }
  v10 = *v5[6];
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AC505C(*v5[6]);
  v11 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v10 + 184);
  v12 = *v11;
  this->fields.saveDataEntities = *v11;
  p_fields = &this->fields;
  sub_B2C2F8(&this->fields, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    p_fields->saveDataEntities = inputSaveDataEntities;
    sub_B2C2F8(p_fields, inputSaveDataEntities);
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
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x2
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *SaveData; // x0
  const MethodInfo *v7; // x1
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v8; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v10; // [xsp+0h] [xbp-20h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v11; // 0:x0.12

  v10 = usageDictionaryKey;
  if ( (byte_41852AF & 1) == 0 )
  {
    sub_B2C35C(
      &PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
      *(_QWORD *)&usageDictionaryKey.fields.seqId);
    byte_41852AF = 1;
  }
  v4 = (Il2CppObject *)sub_B2C42C(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor(v4, 0LL);
  *(_QWORD *)&v11.fields.servantId = &v10;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v11, v5);
  if ( !v4 || (v4[1].klass = (Il2CppClass *)SaveData, sub_B2C2F8(&v4[1], SaveData), !usageDictionaryValue) )
    sub_B2C434(SaveData, v7);
  v8 = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  v4[1].monitor = v8;
  sub_B2C2F8(&v4[1].monitor, v8);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_20271832(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_B2C434(*(_QWORD *)&this.fields.servantId, 0LL);
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
  if ( (byte_41852B1 & 1) == 0 )
  {
    sub_B2C35C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.seqId);
    byte_41852B1 = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_20272040(
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
  System_ValueTuple_T1__T2__T3__o v8; // [xsp+0h] [xbp-30h] BYREF
  int Item2; // [xsp+18h] [xbp-18h]

  v2 = *(int32_t **)&this.fields.servantId;
  if ( (byte_41852B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__, *(_QWORD *)&this.fields.seqId);
    sub_B2C35C(&Method_System_ValueTuple_int__Follower_Type__int___ctor__, v3);
    byte_41852B2 = 1;
  }
  Item2 = 0;
  v8.fields.Item3 = 0LL;
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  LODWORD(v8.fields.Item2) = 0;
  v8.fields.Item1 = 0LL;
  System_ValueTuple_int__Follower_Type__int____ctor(
    &v8,
    v4,
    v5,
    v6,
    (const MethodInfo_29D8664 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  Item2 = (int)v8.fields.Item2;
  v8.fields.Item3 = v8.fields.Item1;
  return System_ValueTuple_int__Follower_Type__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v8.fields.Item3,
           (const MethodInfo_29D94A4 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41852B0 & 1) == 0 )
  {
    sub_B2C35C(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
      *(_QWORD *)&this.fields.seqId);
    byte_41852B0 = 1;
  }
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)sub_B2C42C(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20675232(v6, v3, v4, v5, 0LL);
  return v6;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20675232(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_20272268(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_B2C434(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int32_t useCount; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v4; // x20

  if ( (byte_41852B3 & 1) == 0 )
  {
    sub_B2C35C(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo, method);
    byte_41852B3 = 1;
  }
  useCount = this->fields.useCount;
  v4 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)sub_B2C42C(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20675304(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20675304(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}