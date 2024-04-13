void __fastcall QuestRacePointEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42ED262 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRacePointEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23485/*"voice"*/, v8, v9, v10);
    byte_42ED262 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestRacePointEntity_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_23485/*"voice"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23485/*"voice"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED261 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42ED261 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42ED25C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, itemId, (_DWORD)method, v3);
    byte_42ED25C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePrimaryKey(
        QuestRacePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_42ED25B & 1) == 0 )
  {
    sub_B5D5C4(&QuestRacePointEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ED25B = 1;
  }
  questId = this->fields.questId;
  itemId = this->fields.itemId;
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  }
  return QuestRacePointEntity__CreatePK(questId, itemId, v2);
}


int32_t __fastcall QuestRacePointEntity__GetBoostTypeColor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  System_String_o *v10; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ED25D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18492/*"effectColor"*/, v5, v6, v7);
    byte_42ED25D = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18492/*"effectColor"*/,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B5D69C(0LL, v9);
      v10 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                 value,
                                 value->klass->vtable._4_OnAdd.methodPtr);
      LODWORD(script) = System_Int32__Parse(v10, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t __fastcall QuestRacePointEntity__GetEffectGrade(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v18; // x1
  System_Array_o *Values; // x0
  System_String_o *v20; // x0
  int32_t v21; // w19
  intptr_t v22; // w20
  System_Type_o *TypeFromHandle; // x20
  int32_t Length; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v27; // 0:w0.4

  if ( (byte_42ED25E & 1) == 0 )
  {
    sub_B5D5C4(&EventRaceBoostEffect_BoostGrade_var, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6, v7);
    sub_B5D5C4(&System_Enum_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Type_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19309/*"grade"*/, v14, v15, v16);
    byte_42ED25E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19309/*"grade"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  Values = (System_Array_o *)value;
  if ( !value )
    goto LABEL_16;
  v20 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                             value,
                             value->klass->vtable._4_OnAdd.methodPtr);
  v21 = System_Int32__Parse(v20, 0LL);
  v22 = (int)EventRaceBoostEffect_BoostGrade_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v27.fields.value = v22;
  TypeFromHandle = System_Type__GetTypeFromHandle(v27, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  if ( !Values )
LABEL_16:
    sub_B5D69C(Values, v18);
  Length = System_Array__get_Length(Values, 0LL);
  return UnityEngine_Mathf__Clamp_41572460(v21, 1, Length, 0LL);
}


System_String_o *__fastcall QuestRacePointEntity__GetRandVoice(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x1
  System_String_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x0

  result = (System_String_o *)QuestRacePointEntity__GetVoices(this, method);
  if ( result )
  {
    klass = result[1].klass;
    v4 = result;
    if ( klass )
    {
      v5 = UnityEngine_Random__Range_35654020(0, (int32_t)klass, 0LL);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
      {
        v6 = sub_B5D6C8(v5);
        sub_B5D668(v6, 0LL);
      }
      return (System_String_o *)*((_QWORD *)&v4[1].monitor + (int)v5);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall QuestRacePointEntity__GetSe(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ED25F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22229/*"se"*/, v8, v9, v10);
    byte_42ED25F = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22229/*"se"*/,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B5D990(value);
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestRacePointEntity__GetVoices(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  QuestRacePointEntity_c *v33; // x0
  System_Collections_Generic_List_object__c *v34; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v36; // x19
  System_Collections_Generic_List_string__o *v37; // x19
  QuestRacePointEntity___c_c *v38; // x8
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x9
  System_Converter_string__string__o *_9__10_0; // x20
  __int64 v41; // x11
  __int64 v42; // x9
  Il2CppObject *v44; // x21
  struct QuestRacePointEntity___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_42ED260 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Converter_object__string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&QuestRacePointEntity_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__, v26, v27, v28);
    sub_B5D5C4(&QuestRacePointEntity___c_TypeInfo, v29, v30, v31);
    byte_42ED260 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v33 = QuestRacePointEntity_TypeInfo;
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
    v33 = QuestRacePointEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v33->static_fields->VOICE_KEY,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  Item = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestRacePointEntity_TypeInfo;
  v36 = this->fields.script;
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  }
  if ( !v36 )
    goto LABEL_30;
  Item = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                         (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v36,
                                                                         (System_Type_o *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
                                                                         (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v37 = (System_Collections_Generic_List_string__o *)Item;
  v38 = QuestRacePointEntity___c_TypeInfo;
  if ( (BYTE3(QuestRacePointEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo);
    v38 = QuestRacePointEntity___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  _9__10_0 = (System_Converter_string__string__o *)static_fields->__9__10_0;
  v34 = System_Collections_Generic_List_object__TypeInfo;
  if ( v37 )
  {
    v41 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v41
      || (System_Collections_Generic_List_object__c *)v37->klass->_2.typeHierarchy[v41 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_22;
    }
  }
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_object__string__TypeInfo);
    System_Converter_string__string____ctor(
      _9__10_0,
      v44,
      Method_QuestRacePointEntity___c__GetVoices_b__10_0__,
      (const MethodInfo_23F738C *)Method_System_Converter_object__string___ctor__);
    v45 = QuestRacePointEntity___c_TypeInfo->static_fields;
    v45->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v45->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    if ( v37 )
      goto LABEL_28;
LABEL_30:
    sub_B5D69C(Item, v34);
  }
  if ( !v37 )
    goto LABEL_30;
  v42 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v42
    || (System_Collections_Generic_List_object__c *)v37->klass->_2.typeHierarchy[v42 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_22:
    sub_B5D990(v37);
    return 0LL;
  }
LABEL_28:
  Item = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                         v37,
                                                                         (System_Converter_T__TOutput__o *)_9__10_0,
                                                                         (const MethodInfo_192E1C0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !Item )
    goto LABEL_30;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  Item,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F02 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRacePointEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7F02 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestRacePointEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRacePointEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall QuestRacePointEntity___c___ctor(QuestRacePointEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall QuestRacePointEntity___c___GetVoices_b__10_0(
        QuestRacePointEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}