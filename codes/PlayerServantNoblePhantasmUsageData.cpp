void __fastcall PlayerServantNoblePhantasmUsageData___ctor(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8FB8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__,
      method);
    sub_B16FFC(
      &System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo,
      v6);
    byte_40F8FB8 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *)sub_B170CC(System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TypeInfo, method, v2, v3, v4);
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____ctor(
    v7,
    (const MethodInfo_2D7820C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor__);
  this->fields.usageDictionary = v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v18; // x20
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v19; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // [xsp+8h] [xbp-48h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+10h] [xbp-40h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v22; // 0:x0.12

  if ( (byte_40F8FB6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__,
      *(_QWORD *)&svtId);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v11);
    sub_B16FFC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v12);
    byte_40F8FB6 = 1;
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
            (const MethodInfo_2D7AB7C *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__TryGetValue__) )
    {
      v18 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B170CC(
                                                                            PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo,
                                                                            v14,
                                                                            v15,
                                                                            v16,
                                                                            v17);
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor(v18, 0LL);
      value = v18;
      v19 = this->fields.usageDictionary;
      if ( !v19 )
        goto LABEL_11;
      System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
        v19,
        key,
        v18,
        (const MethodInfo_2D78DC8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
    }
    if ( value )
    {
      PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__IncreaseCount(value, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall PlayerServantNoblePhantasmUsageData__Clear(
        PlayerServantNoblePhantasmUsageData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0

  if ( (byte_40F8FB5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      method);
    byte_40F8FB5 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    sub_B170D4();
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
    usageDictionary,
    (const MethodInfo_2D78FEC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
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
  __int64 v17; // x2
  __int64 v18; // x0
  unsigned int *v19; // x20
  unsigned __int64 v20; // x21
  signed __int64 v21; // x24
  BattleServantConfConponent_o *v22; // x22
  __int64 v23; // x19
  int32_t seqId; // w27
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *value; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v30; // x23
  System_Xml_Schema_XmlSchemaObject_o *v31; // x0
  System_Xml_Schema_XmlSchemaObject_o *v32; // x0
  System_Xml_Schema_XmlSchemaObject_o *v33; // x0
  System_Xml_Schema_XmlSchemaObject_o *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t useCount; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v46; // [xsp+10h] [xbp-70h] BYREF
  int v47; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o v48; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_40F8FB7 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v4);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v10);
    sub_B16FFC(&StringLiteral_22376/*"svtId"*/, v11);
    sub_B16FFC(&StringLiteral_21876/*"seqId"*/, v12);
    sub_B16FFC(&StringLiteral_18721/*"followerType"*/, v13);
    sub_B16FFC(&StringLiteral_16185/*"addCount"*/, v14);
    byte_40F8FB7 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_16;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_2D789E8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v18 = sub_B17014(System_Collections_Generic_Dictionary_string__object____TypeInfo, (unsigned int)Count, v17);
  v19 = (unsigned int *)v18;
  if ( Count >= 1 )
  {
    v20 = 0LL;
    v21 = Count;
    v22 = (BattleServantConfConponent_o *)(v18 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &v48,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v20,
        (const MethodInfo_18D55C0 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      v23 = *(_QWORD *)&v48.fields.key.fields.servantId;
      seqId = v48.fields.key.fields.seqId;
      value = v48.fields.value;
      v30 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                            System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                            v26,
                                                                                            v27,
                                                                                            v28,
                                                                                            v29);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v30,
        (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v48.fields.key.fields.servantId = v23;
      v31 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
      if ( !v30 )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v30,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_22376/*"svtId"*/,
        v31,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v47 = HIDWORD(v23);
      v32 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v30,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_18721/*"followerType"*/,
        v32,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      v46 = seqId;
      v33 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v30,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_21876/*"seqId"*/,
        v33,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !value )
        break;
      useCount = value->fields.useCount;
      v34 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v30,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_16185/*"addCount"*/,
        v34,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      if ( !v19 )
        break;
      v35 = sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
      if ( !v35 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( v20 >= v19[6] )
      {
        sub_B17100(v35, v36, v37);
        sub_B170A0();
      }
      v22->klass = (BattleServantConfConponent_c *)v30;
      sub_B16F98(v22, (System_Int32_array **)v30, v37, v38, v39, v40, v41, v42);
      ++v20;
      v22 = (BattleServantConfConponent_o *)((char *)v22 + 8);
      if ( (__int64)v20 >= v21 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *usageDictionary; // x0
  int32_t Count; // w22
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *v17; // x20
  unsigned __int64 v18; // x21
  signed __int64 v19; // x25
  BattleServantConfConponent_o *v20; // x22
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x24
  PlayerServantNoblePhantasmUsageData_SaveData_o *v30; // x19
  System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o usageDictionaryKey; // [xsp+8h] [xbp-68h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v33; // 0:x0.12

  if ( (byte_40F8FB3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__,
      method);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Key__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Value__,
      v6);
    sub_B16FFC(&PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, v7);
    sub_B16FFC(&PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo, v8);
    byte_40F8FB3 = 1;
  }
  usageDictionary = this->fields.usageDictionary;
  if ( !usageDictionary )
    goto LABEL_12;
  Count = System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___get_Count(
            usageDictionary,
            (const MethodInfo_2D789E8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__get_Count__);
  v12 = sub_B17014(PlayerServantNoblePhantasmUsageData_SaveDataEntity___TypeInfo, (unsigned int)Count, v11);
  v17 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *)v12;
  if ( Count >= 1 )
  {
    v18 = 0LL;
    v19 = Count;
    v20 = (BattleServantConfConponent_o *)(v12 + 32);
    while ( 1 )
    {
      System_Linq_Enumerable__ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__(
        &usageDictionaryKey,
        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.usageDictionary,
        v18,
        (const MethodInfo_18D55C0 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue____);
      *(_QWORD *)&v33.fields.servantId = *(_QWORD *)&usageDictionaryKey.fields.key.fields.servantId;
      v2 = v2 & 0xFFFFFFFF00000000LL | (unsigned int)usageDictionaryKey.fields.key.fields.seqId;
      v33.fields.seqId = v2;
      v21 = PlayerServantNoblePhantasmUsageData_SaveDataEntity__Create(v33, usageDictionaryKey.fields.value, 0LL);
      if ( !v17 )
        break;
      v29 = (System_Int32_array **)v21;
      if ( v21 )
      {
        v21 = (PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *)sub_B170BC(v21, v17->obj.klass->_1.element_class);
        if ( !v21 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v18 >= v17->max_length )
      {
        sub_B17100(v21, v22, v23);
        sub_B170A0();
      }
      v20->klass = (BattleServantConfConponent_c *)v29;
      sub_B16F98(v20, v29, v23, v24, v25, v26, v27, v28);
      ++v18;
      v20 = (BattleServantConfConponent_o *)((char *)v20 + 8);
      if ( (__int64)v18 >= v19 )
        goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
LABEL_11:
  v30 = (PlayerServantNoblePhantasmUsageData_SaveData_o *)sub_B170CC(
                                                            PlayerServantNoblePhantasmUsageData_SaveData_TypeInfo,
                                                            v13,
                                                            v14,
                                                            v15,
                                                            v16);
  PlayerServantNoblePhantasmUsageData_SaveData___ctor_21900168(v30, v17, 0LL);
  return v30;
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
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array *saveDataEntities; // x23
  int max_length; // w8
  unsigned int v14; // w24
  PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *v15; // x21
  struct PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *usageDictionaryKeySaveData; // x1 OVERLAPPED
  System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__o *v17; // x20
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *p_key; // x0
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *usageDictionaryValueSaveData; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *v24; // x21
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o key; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_40F8FB4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__,
      saveData);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__,
      v5);
    sub_B16FFC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo, v6);
    byte_40F8FB4 = 1;
  }
  if ( saveData )
  {
    usageDictionary = this->fields.usageDictionary;
    if ( !usageDictionary )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___Clear(
      usageDictionary,
      (const MethodInfo_2D78FEC *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__Clear__);
    saveDataEntities = saveData->fields.saveDataEntities;
    if ( !saveDataEntities )
      goto LABEL_13;
    max_length = saveDataEntities->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
        {
          sub_B17100(v8, v9, v10);
          sub_B170A0();
        }
        v15 = saveDataEntities->m_Items[v14];
        if ( !v15 )
          break;
        usageDictionaryKeySaveData = v15->fields.usageDictionaryKeySaveData;
        v17 = this->fields.usageDictionary;
        p_key = &key;
        key.fields.seqId = 0;
        *(_QWORD *)&key.fields.servantId = 0LL;
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_21900848(
          *(PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o *)(&usageDictionaryKeySaveData - 1),
          0LL,
          v11);
        usageDictionaryValueSaveData = v15->fields.usageDictionaryValueSaveData;
        v24 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *)sub_B170CC(
                                                                              PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_TypeInfo,
                                                                              v20,
                                                                              v21,
                                                                              v22,
                                                                              v23);
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_21901284(v24, usageDictionaryValueSaveData, 0LL);
        if ( !v17 )
          break;
        System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___set_Item(
          v17,
          key,
          v24,
          (const MethodInfo_2D78DC8 *)Method_System_Collections_Generic_Dictionary_PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__set_Item__);
        max_length = saveDataEntities->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
LABEL_13:
      sub_B170D4();
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

  if ( (byte_40F8397 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, method);
    byte_40F8397 = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v10 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AAFCFC(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AAFCFC(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(*v9[6]);
  v15 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.saveDataEntities = *v15;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_SaveData___ctor_21900168(
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

  if ( (byte_40F8398 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___, inputSaveDataEntities);
    byte_40F8398 = 1;
  }
  v10 = (_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___;
  v11 = **((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_PlayerServantNoblePhantasmUsageData_SaveDataEntity___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AAFCFC(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AAFCFC(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AAFCFC(*v10[6]);
  v16 = *(struct PlayerServantNoblePhantasmUsageData_SaveDataEntity_array ***)(v15 + 184);
  v17 = *v16;
  this->fields.saveDataEntities = *v16;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B16F98(
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
    sub_B16F98(p_fields, (System_Int32_array **)inputSaveDataEntities, v19, v20, v21, v22, v23, v24);
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
  __int64 v3; // x4
  __int64 v5; // x20
  const MethodInfo *v6; // x2
  System_Int32_array **SaveData; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v23; // [xsp+0h] [xbp-20h] BYREF
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o v24; // 0:x0.12

  v23 = usageDictionaryKey;
  if ( (byte_40F8399 & 1) == 0 )
  {
    sub_B16FFC(
      &PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
      *(_QWORD *)&usageDictionaryKey.fields.seqId);
    byte_40F8399 = 1;
  }
  v5 = sub_B170CC(
         PlayerServantNoblePhantasmUsageData_SaveDataEntity_TypeInfo,
         *(_QWORD *)&usageDictionaryKey.fields.seqId,
         usageDictionaryValue,
         method,
         v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_QWORD *)&v24.fields.servantId = &v23;
  SaveData = (System_Int32_array **)PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(v24, v6);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = SaveData,
        sub_B16F98((BattleServantConfConponent_o *)(v5 + 16), SaveData, v8, v9, v10, v11, v12, v13),
        !usageDictionaryValue) )
  {
    sub_B170D4();
  }
  v15 = (System_Int32_array **)PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
                                 usageDictionaryValue,
                                 v14);
  *(_QWORD *)(v5 + 24) = v15;
  sub_B16F98((BattleServantConfConponent_o *)(v5 + 24), v15, v16, v17, v18, v19, v20, v21);
  return (PlayerServantNoblePhantasmUsageData_SaveDataEntity_o *)v5;
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
void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey___ctor_21900848(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this.fields.seqId )
    sub_B170D4();
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
  if ( (byte_40F839B & 1) == 0 )
  {
    sub_B16FFC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.seqId);
    byte_40F839B = 1;
  }
  result = v3
        && *v3 == PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_TypeInfo
        && (v5 = j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *(_QWORD *)v5)
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)(v5 + 8);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__Equals_21901056(
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
  if ( (byte_40F839C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__, *(_QWORD *)&this.fields.seqId);
    sub_B16FFC(&Method_System_ValueTuple_int__Follower_Type__int___ctor__, v3);
    byte_40F839C = 1;
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
    (const MethodInfo_2AD17C0 *)Method_System_ValueTuple_int__Follower_Type__int___ctor__);
  Item2 = (int)v8.fields.Item2;
  v8.fields.Item3 = v8.fields.Item1;
  return System_ValueTuple_int__Follower_Type__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__o *)&v8.fields.Item3,
           (const MethodInfo_2AD2600 *)Method_System_ValueTuple_int__Follower_Type__int__GetHashCode__);
}


// local variable allocation has failed, the output may be wrong!
PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  __int64 v3; // x4
  int32_t *v4; // x19
  int32_t v5; // w20
  int32_t v6; // w21
  int32_t v7; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *v8; // x22

  v4 = *(int32_t **)&this.fields.servantId;
  if ( (byte_40F839A & 1) == 0 )
  {
    sub_B16FFC(
      &PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
      *(_QWORD *)&this.fields.seqId);
    byte_40F839A = 1;
  }
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *)sub_B170CC(
                                                                                                PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_TypeInfo,
                                                                                                *(_QWORD *)&this.fields.seqId,
                                                                                                method,
                                                                                                v2,
                                                                                                v3);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20498240(v8, v5, v6, v7, 0LL);
  return v8;
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryKey_UsageDictionaryKeySaveData___ctor_20498240(
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue___ctor_21901284(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *saveData,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_B170D4();
  this->fields.useCount = saveData->fields.useCount;
}


PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *__fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue__GetSaveData(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t useCount; // w19
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *v7; // x20

  if ( (byte_40F839D & 1) == 0 )
  {
    sub_B16FFC(&PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo, method);
    byte_40F839D = 1;
  }
  useCount = this->fields.useCount;
  v7 = (PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *)sub_B170CC(
                                                                                                    PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
  PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20498312(
    v7,
    useCount,
    0LL);
  return v7;
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


void __fastcall PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData___ctor_20498312(
        PlayerServantNoblePhantasmUsageData_UsageDictionaryValue_UsageDictionaryValueSaveData_o *this,
        int32_t useCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.useCount = useCount;
}