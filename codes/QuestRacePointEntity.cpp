void __fastcall QuestRacePointEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FD554 & 1) == 0 )
  {
    sub_B16FFC(&QuestRacePointEntity_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_23083/*"voice"*/, v8);
    byte_40FD554 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestRacePointEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_23083/*"voice"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23083/*"voice"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD553 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FD553 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_40FD54E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&itemId);
    byte_40FD54E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePrimaryKey(
        QuestRacePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_40FD54D & 1) == 0 )
  {
    sub_B16FFC(&QuestRacePointEntity_TypeInfo, method);
    byte_40FD54D = 1;
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
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v5; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD54F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&StringLiteral_18196/*"effectColor"*/, v3);
    byte_40FD54F = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18196/*"effectColor"*/,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v8; // x0
  int32_t v9; // w19
  intptr_t v10; // w20
  System_Type_o *TypeFromHandle; // x20
  System_Array_o *Values; // x0
  int32_t Length; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_40FD550 & 1) == 0 )
  {
    sub_B16FFC(&EventRaceBoostEffect_BoostGrade_var, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B16FFC(&System_Enum_TypeInfo, v4);
    sub_B16FFC(&System_Type_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18997/*"grade"*/, v6);
    byte_40FD550 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18997/*"grade"*/,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  if ( !value )
    goto LABEL_16;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v9 = System_Int32__Parse(v8, 0LL);
  v10 = (int)EventRaceBoostEffect_BoostGrade_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  if ( !Values )
LABEL_16:
    sub_B170D4();
  Length = System_Array__get_Length(Values, 0LL);
  return UnityEngine_Mathf__Clamp_40670656(v9, 1, Length, 0LL);
}


System_String_o *__fastcall QuestRacePointEntity__GetRandVoice(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x1
  System_String_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  result = (System_String_o *)QuestRacePointEntity__GetVoices(this, method);
  if ( result )
  {
    klass = result[1].klass;
    v4 = result;
    if ( klass )
    {
      v5 = UnityEngine_Random__Range_34843248(0, (int32_t)klass, 0LL);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
      {
        sub_B17100(v5, v6, v7);
        sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD551 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&string_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_21838/*"se"*/, v4);
    byte_40FD551 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_21838/*"se"*/,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B173C8(value);
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestRacePointEntity__GetVoices(QuestRacePointEntity_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  QuestRacePointEntity_c *v13; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x19
  QuestRacePointEntity___c_c *v19; // x8
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x9
  System_Converter_string__string__o *_9__10_0; // x20
  System_Collections_Generic_List_object__c *v22; // x1
  __int64 v23; // x11
  __int64 v24; // x9
  Il2CppObject *v26; // x21
  struct QuestRacePointEntity___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v34; // x0

  if ( (byte_40FD552 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__string___ctor__, method);
    sub_B16FFC(&System_Converter_object__string__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B16FFC(&QuestRacePointEntity_TypeInfo, v9);
    sub_B16FFC(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__, v10);
    sub_B16FFC(&QuestRacePointEntity___c_TypeInfo, v11);
    byte_40FD552 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v13 = QuestRacePointEntity_TypeInfo;
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
    v13 = QuestRacePointEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v13->static_fields->VOICE_KEY,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  v14 = this->fields.script;
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  }
  if ( !v14 )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
           (System_Type_o *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v19 = QuestRacePointEntity___c_TypeInfo;
  if ( (BYTE3(QuestRacePointEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo);
    v19 = QuestRacePointEntity___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__10_0 = (System_Converter_string__string__o *)static_fields->__9__10_0;
  v22 = System_Collections_Generic_List_object__TypeInfo;
  if ( Item )
  {
    v23 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_22;
    }
  }
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                       System_Converter_object__string__TypeInfo,
                                                       v22,
                                                       v15,
                                                       v16,
                                                       v17);
    System_Converter_string__string____ctor(
      _9__10_0,
      v26,
      Method_QuestRacePointEntity___c__GetVoices_b__10_0__,
      (const MethodInfo_266B904 *)Method_System_Converter_object__string___ctor__);
    v27 = QuestRacePointEntity___c_TypeInfo->static_fields;
    v27->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( Item )
      goto LABEL_28;
LABEL_30:
    sub_B170D4();
  }
  if ( !Item )
    goto LABEL_30;
  v24 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v24
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_22:
    sub_B173C8(Item);
    return 0LL;
  }
LABEL_28:
  v34 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        (System_Collections_Generic_List_string__o *)Item,
                                                                        (System_Converter_T__TOutput__o *)_9__10_0,
                                                                        (const MethodInfo_18FDDD8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v34 )
    goto LABEL_30;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v34,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA313 & 1) == 0 )
  {
    sub_B16FFC(&QuestRacePointEntity___c_TypeInfo, v1);
    byte_40FA313 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestRacePointEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRacePointEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}