void __fastcall QuestRacePointEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B48D4 & 1) == 0 )
  {
    sub_B52984(&QuestRacePointEntity_TypeInfo);
    sub_B52984(&StringLiteral_23368/*"voice"*/);
    byte_42B48D4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestRacePointEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23368/*"voice"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23368/*"voice"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B48D3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B48D3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_42B48CE & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B48CE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePrimaryKey(
        QuestRacePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_42B48CD & 1) == 0 )
  {
    sub_B52984(&QuestRacePointEntity_TypeInfo);
    byte_42B48CD = 1;
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B48CF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&StringLiteral_18398/*"effectColor"*/);
    byte_42B48CF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18398/*"effectColor"*/,
           &value,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B52A5C(0LL, v4);
      v5 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                value,
                                value->klass->vtable._4_OnAdd.methodPtr);
      LODWORD(script) = System_Int32__Parse(v5, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Array_o *Values; // x0
  System_String_o *v6; // x0
  int32_t v7; // w19
  intptr_t v8; // w20
  System_Type_o *TypeFromHandle; // x20
  int32_t Length; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v13; // 0:w0.4

  if ( (byte_42B48D0 & 1) == 0 )
  {
    sub_B52984(&EventRaceBoostEffect_BoostGrade_var);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&System_Enum_TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    sub_B52984(&StringLiteral_19212/*"grade"*/);
    byte_42B48D0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19212/*"grade"*/,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  Values = (System_Array_o *)value;
  if ( !value )
    goto LABEL_16;
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v7 = System_Int32__Parse(v6, 0LL);
  v8 = (int)EventRaceBoostEffect_BoostGrade_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v13.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v13, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  if ( !Values )
LABEL_16:
    sub_B52A5C(Values, v4);
  Length = System_Array__get_Length(Values, 0LL);
  return UnityEngine_Mathf__Clamp_41468312(v7, 1, Length, 0LL);
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
      v5 = UnityEngine_Random__Range_35650740(0, (int32_t)klass, 0LL);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
      {
        v6 = sub_B52A88(v5);
        sub_B52A28(v6, 0LL);
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
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B48D1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_22115/*"se"*/);
    byte_42B48D1 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22115/*"se"*/,
            &value,
            (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B52D50(value);
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestRacePointEntity__GetVoices(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  QuestRacePointEntity_c *v4; // x0
  System_Collections_Generic_List_object__c *v5; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  System_Collections_Generic_List_string__o *v8; // x19
  QuestRacePointEntity___c_c *v9; // x8
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x9
  System_Converter_string__string__o *_9__10_0; // x20
  __int64 v12; // x11
  __int64 v13; // x9
  Il2CppObject *v15; // x21
  struct QuestRacePointEntity___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42B48D2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_object__string___ctor__);
    sub_B52984(&System_Converter_object__string__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    sub_B52984(&QuestRacePointEntity_TypeInfo);
    sub_B52984(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__);
    sub_B52984(&QuestRacePointEntity___c_TypeInfo);
    byte_42B48D2 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v4 = QuestRacePointEntity_TypeInfo;
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
    v4 = QuestRacePointEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v4->static_fields->VOICE_KEY,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  Item = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestRacePointEntity_TypeInfo;
  v7 = this->fields.script;
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  }
  if ( !v7 )
    goto LABEL_30;
  Item = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                         (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                                                                         (System_Type_o *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
                                                                         (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v8 = (System_Collections_Generic_List_string__o *)Item;
  v9 = QuestRacePointEntity___c_TypeInfo;
  if ( (BYTE3(QuestRacePointEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo);
    v9 = QuestRacePointEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__10_0 = (System_Converter_string__string__o *)static_fields->__9__10_0;
  v5 = System_Collections_Generic_List_object__TypeInfo;
  if ( v8 )
  {
    v12 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_22;
    }
  }
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_string__string__o *)sub_B52A54(System_Converter_object__string__TypeInfo);
    System_Converter_string__string____ctor(
      _9__10_0,
      v15,
      Method_QuestRacePointEntity___c__GetVoices_b__10_0__,
      (const MethodInfo_23DE854 *)Method_System_Converter_object__string___ctor__);
    v16 = QuestRacePointEntity___c_TypeInfo->static_fields;
    v16->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    if ( v8 )
      goto LABEL_28;
LABEL_30:
    sub_B52A5C(Item, v5);
  }
  if ( !v8 )
    goto LABEL_30;
  v13 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_22:
    sub_B52D50(v8);
    return 0LL;
  }
LABEL_28:
  Item = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                         v8,
                                                                         (System_Converter_T__TOutput__o *)_9__10_0,
                                                                         (const MethodInfo_1913A48 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !Item )
    goto LABEL_30;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  Item,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF25E & 1) == 0 )
  {
    sub_B52984(&QuestRacePointEntity___c_TypeInfo);
    byte_42AF25E = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestRacePointEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRacePointEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}