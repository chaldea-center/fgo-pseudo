void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8430 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
      v5,
      v6,
      v7);
    byte_42E8430 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B5D694(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____ctor(
    v8,
    (const MethodInfo_1A0A9D4 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v19; // x20
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // [xsp+8h] [xbp-48h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+10h] [xbp-40h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v22; // 0:x0.12

  if ( (byte_42E842E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__,
      svtId,
      seqId,
      *(_QWORD *)&followerType);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v14, v15, v16);
    byte_42E842E = 1;
  }
  key.fields.seqId = 0;
  value = 0LL;
  *(_QWORD *)&key.fields.servantId = 0LL;
  if ( !isEnemy )
  {
    *(_QWORD *)&v22.fields.servantId = &key;
    v22.fields.seqId = svtId;
    PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor(v22, followerType, seqId, 0, method);
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___TryGetValue(
            usageDictionary,
            key,
            &value,
            (const MethodInfo_1A0D344 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__) )
    {
      v19 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B5D694(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor(v19, 0LL);
      value = v19;
      usageDictionary = this->fields.usageDictionary;
      if ( !usageDictionary )
        goto LABEL_11;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
        usageDictionary,
        key,
        v19,
        (const MethodInfo_1A0B590 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)value;
    if ( value )
    {
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__IncreaseCount(value, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(usageDictionary, v17);
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0

  if ( (byte_42E842D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E842D = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
    usageDictionary,
    (const MethodInfo_1A0B7B4 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
}


System_String_o *__fastcall PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v45; // x0
  unsigned int *v46; // x20
  unsigned __int64 v47; // x21
  signed __int64 v48; // x24
  BattleServantConfConponent_o *v49; // x22
  __int64 v50; // x19
  int32_t seqId; // w27
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // x25
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v53; // x23
  System_Xml_Schema_XmlSchemaObject_o *v54; // x0
  System_Xml_Schema_XmlSchemaObject_o *v55; // x0
  System_Xml_Schema_XmlSchemaObject_o *v56; // x0
  __int64 v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v65; // x0
  __int64 v66; // x0
  int32_t useCount; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v69; // [xsp+10h] [xbp-70h] BYREF
  int v70; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o v71; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_42E842F & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object____TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v16,
      v17,
      v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&JsonManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&StringLiteral_22772/*"svtId"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_22267/*"seqId"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_19029/*"followerType"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_16446/*"addCount"*/, v40, v41, v42);
    byte_42E842F = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_16;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_1A0B1B0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v45 = sub_B5D5DC(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count);
  v46 = (unsigned int *)v45;
  if ( Count >= 1 )
  {
    v47 = 0LL;
    v48 = Count;
    v49 = (BattleServantConfConponent_o *)(v45 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &v71,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v47,
        (const MethodInfo_1CA958C *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v50 = *(_QWORD *)&v71.fields.key.fields.servantId;
      seqId = v71.fields.key.fields.seqId;
      value = v71.fields.value;
      v53 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v53,
        (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v71.fields.key.fields.servantId = v50;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
      if ( !v53 )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v53,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22772/*"svtId"*/,
        (System_Xml_Schema_XmlSchemaObject_o *)usageDictionary,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v70 = HIDWORD(v50);
      v54 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v53,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_19029/*"followerType"*/,
        v54,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v69 = seqId;
      v55 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v53,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22267/*"seqId"*/,
        v55,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      useCount = value->fields.useCount;
      v56 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v53,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_16446/*"addCount"*/,
        v56,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v46 )
        break;
      v57 = sub_B5D684(v53, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
      if ( !v57 )
      {
        v65 = sub_B5D6BC(0LL);
        sub_B5D668(v65, 0LL);
      }
      if ( v47 >= v46[6] )
      {
        v66 = sub_B5D6C8(v57);
        sub_B5D668(v66, 0LL);
      }
      v49->klass = (BattleServantConfConponent_c *)v53;
      sub_B5D560(v49, (System_Int32_array **)v53, v58, v59, v60, v61, v62, v63);
      ++v47;
      v49 = (BattleServantConfConponent_o *)((char *)v49 + 8);
      if ( (__int64)v47 >= v48 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(usageDictionary, method);
  }
LABEL_12:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)v46, 0, 0, 0LL);
}


PlayerServantNoblePhantasmUsageData_SaveData_o *__fastcall PlayerServantNoblePhantasmUsageData__GetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  unsigned __int64 v4; // x23
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v23; // x0
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v24; // x20
  unsigned __int64 v25; // x21
  signed __int64 v26; // x25
  BattleServantConfConponent_o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v35; // x19
  __int64 v37; // x0
  __int64 v38; // x0
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v40; // 0:x0.12

  if ( (byte_42E842B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo, v18, v19, v20);
    byte_42E842B = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_1A0B1B0 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v23 = sub_B5D5DC(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count);
  v24 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v23;
  if ( Count >= 1 )
  {
    v25 = 0LL;
    v26 = Count;
    v27 = (BattleServantConfConponent_o *)(v23 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v25,
        (const MethodInfo_1CA958C *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v40.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v4 = v4 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v40.fields.seqId = v4;
      usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(v40, usageDictionaryKey.fields.value, 0LL);
      if ( !v24 )
        break;
      v34 = (System_Int32_array **)usageDictionary;
      if ( usageDictionary )
      {
        usageDictionary = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B5D684(usageDictionary, v24->obj.klass->_1.element_class);
        if ( !usageDictionary )
        {
          v38 = sub_B5D6BC(0LL);
          sub_B5D668(v38, 0LL);
        }
      }
      if ( v25 >= v24->max_length )
      {
        v37 = sub_B5D6C8(usageDictionary);
        sub_B5D668(v37, 0LL);
      }
      v27->klass = (BattleServantConfConponent_c *)v34;
      sub_B5D560(v27, v34, v28, v29, v30, v31, v32, v33);
      ++v25;
      v27 = (BattleServantConfConponent_o *)((char *)v27 + 8);
      if ( (__int64)v25 >= v26 )
        goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(usageDictionary, method);
  }
LABEL_11:
  v35 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_B5D694(PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_19850228(v35, v24, 0LL);
  return v35;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerServantNoblePhantasmUsageData__SetSaveData(
        PlayerServantNoblePhantasmUsageData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  const MethodInfo *v13; // x3
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x23
  int max_length; // w8
  unsigned int v16; // w24
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v17; // x21
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x1 OVERLAPPED
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v19; // x20
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *p_key; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x22
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v22; // x21
  __int64 v23; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_42E842C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      (_DWORD)saveData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v9, v10, v11);
    byte_42E842C = 1;
  }
  if ( saveData )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
      usageDictionary,
      (const MethodInfo_1A0B7B4 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_13;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
        {
          v23 = sub_B5D6C8(usageDictionary);
          sub_B5D668(v23, 0LL);
        }
        v17 = saveDataEntities->m_Items[v16];
        if ( !v17 )
          break;
        usageDictionaryKeySaveData = v17->fields.usageDictionaryKeySaveData;
        v19 = this->fields.usageDictionary;
        p_key = &key;
        key.fields.seqId = 0;
        *(_QWORD *)&key.fields.servantId = 0LL;
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_19850908(
          *(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *)(&usageDictionaryKeySaveData - 1),
          0LL,
          v13);
        usageDictionaryValueSaveData = v17->fields.usageDictionaryValueSaveData;
        v22 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B5D694(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo);
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_19851344(v22, usageDictionaryValueSaveData, 0LL);
        if ( !v19 )
          break;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
          v19,
          key,
          v22,
          (const MethodInfo_1A0B590 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v16 >= max_length )
          return;
      }
LABEL_13:
      sub_B5D69C(usageDictionary, saveData);
    }
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD **v5; // x21
  __int64 v6; // x20
  __int16 v7; // w8
  __int64 v8; // x20
  __int64 v9; // x20
  __int64 v10; // x20

  if ( (byte_42E5AAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, (_DWORD)method, v2, v3);
    byte_42E5AAB = 1;
  }
  v5 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v6 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v7 = *(_WORD *)(v6 + 306);
  if ( (v7 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v7 = *(_WORD *)(v6 + 306);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v8 = *v5[6];
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AF52C4(*v5[6]);
    if ( !*(_DWORD *)(v8 + 224) )
    {
      v9 = *v5[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AF52C4(*v5[6]);
      j_il2cpp_runtime_class_init_0(v9);
    }
  }
  v10 = *v5[6];
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AF52C4(*v5[6]);
  this->fields.saveDataEntities = **(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v10 + 184);
  sub_B5D560(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_19850228(
        PlayerServantNoblePhantasmUsageData_SaveData_o *this,
        PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *inputSaveDataEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD **v6; // x22
  __int64 v7; // x21
  __int16 v8; // w8
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x21
  PlayerServantNoblePhantasmUsageData_SaveData_Fields *p_fields; // x21

  if ( (byte_42E5AAC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___,
      (_DWORD)inputSaveDataEntities,
      (_DWORD)method,
      v3);
    byte_42E5AAC = 1;
  }
  v6 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v7 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AF52C4(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AF52C4(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*v6[6]);
  this->fields.saveDataEntities = **(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v11 + 184);
  p_fields = &this->fields;
  sub_B5D560(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( inputSaveDataEntities )
  {
    p_fields->saveDataEntities = inputSaveDataEntities;
    sub_B5D560(p_fields);
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
  if ( (byte_42E5AAD & 1) == 0 )
  {
    sub_B5D5C4(
      &PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
      usageDictionaryKey.fields.seqId,
      (_DWORD)usageDictionaryValue,
      method);
    byte_42E5AAD = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo);
  System_Object___ctor(v4, 0LL);
  *(_QWORD *)&v10.fields.servantId = &v9;
  SaveData = PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v10, v5);
  if ( !v4 || (v4[1].klass = (Il2CppClass *)SaveData, sub_B5D560(&v4[1]), !usageDictionaryValue) )
    sub_B5D69C(SaveData, v7);
  v4[1].monitor = PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(usageDictionaryValue, v7);
  sub_B5D560(&v4[1].monitor);
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_19850908(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_B5D69C(*(_QWORD *)&this.fields.servantId, 0LL);
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
  if ( (byte_42E5AAF & 1) == 0 )
  {
    sub_B5D5C4(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo, this.fields.seqId, (_DWORD)obj, method);
    byte_42E5AAF = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_19851116(
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
  __int64 v2; // x3
  int32_t *v3; // x19
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  System_ValueTuple_T1__T2__T3__o v11; // [xsp+0h] [xbp-30h] BYREF
  int Item2; // [xsp+18h] [xbp-18h]

  v3 = *(int32_t **)&this.fields.servantId;
  if ( (byte_42E5AB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__, this.fields.seqId, (_DWORD)method, v2);
    sub_B5D5C4(&Method_System_ValueTuple_int__Follower_Type__int___ctor__, v4, v5, v6);
    byte_42E5AB0 = 1;
  }
  Item2 = 0;
  v11.fields.Item3 = 0LL;
  v7 = *v3;
  v8 = v3[1];
  v9 = v3[2];
  LODWORD(v11.fields.Item2) = 0;
  v11.fields.Item1 = 0LL;
  System_ValueTuple_int__Follower_Type__int____ctor(
    &v11,
    v7,
    v8,
    v9,
    (const MethodInfo_2BEE164 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  Item2 = (int)v11.fields.Item2;
  v11.fields.Item3 = v11.fields.Item1;
  return System_ValueTuple_int__Follower_Type__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v11.fields.Item3,
           (const MethodInfo_2BEEFA4 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  int32_t *v3; // x19
  int32_t v4; // w20
  int32_t v5; // w21
  int32_t v6; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *v7; // x22

  v3 = *(int32_t **)&this.fields.servantId;
  if ( (byte_42E5AAE & 1) == 0 )
  {
    sub_B5D5C4(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
      this.fields.seqId,
      (_DWORD)method,
      v2);
    byte_42E5AAE = 1;
  }
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)sub_B5D694(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20422816(v7, v4, v5, v6, 0LL);
  return v7;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20422816(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_19851344(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_B5D69C(v5, v6);
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t useCount; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v6; // x20

  if ( (byte_42E5AB1 & 1) == 0 )
  {
    sub_B5D5C4(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo,
      (_DWORD)method,
      v2,
      v3);
    byte_42E5AB1 = 1;
  }
  useCount = this->fields.useCount;
  v6 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)sub_B5D694(PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20422888(
    v6,
    useCount,
    0LL);
  return v6;
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20422888(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}