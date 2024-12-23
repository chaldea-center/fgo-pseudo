void __fastcall QuestRacePointEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4B67143 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestRacePointEntity_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_24928/*"voice"*/, v8);
    byte_4B67143 = 1;
  }
  QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY = (struct System_String_o *)StringLiteral_24928/*"voice"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestRacePointEntity_TypeInfo->static_fields,
    StringLiteral_24928/*"voice"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67142 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67142 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4B6713D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&itemId);
    byte_4B6713D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePrimaryKey(
        QuestRacePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_4B6713C & 1) == 0 )
  {
    sub_1BE4ACC(&QuestRacePointEntity_TypeInfo, method);
    byte_4B6713C = 1;
  }
  questId = this->fields.questId;
  itemId = this->fields.itemId;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  return QuestRacePointEntity__CreatePK(questId, itemId, v2);
}


int32_t __fastcall QuestRacePointEntity__GetBoostTypeColor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B6713E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1BE4ACC(&StringLiteral_19161/*"effectColor"*/, v3);
    byte_4B6713E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19161/*"effectColor"*/,
           &value,
           (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1BE4D28(0LL, v5);
      v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                value,
                                value->klass->vtable[4].methodPtr);
      LODWORD(script) = System_Int32__Parse(v6, 0LL);
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
  __int64 v8; // x1
  System_Array_o *Values; // x0
  System_String_o *v10; // x0
  int v11; // w19
  intptr_t v12; // w20
  System_Type_o *TypeFromHandle; // x20
  int32_t result; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_4B6713F & 1) == 0 )
  {
    sub_1BE4ACC(&EventRaceBoostEffect_BoostGrade_var, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1BE4ACC(&System_Enum_TypeInfo, v4);
    sub_1BE4ACC(&System_Type_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_20110/*"grade"*/, v6);
    byte_4B6713F = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_20110/*"grade"*/,
          &value,
          (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  Values = (System_Array_o *)value;
  if ( !value )
    goto LABEL_16;
  v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                             value,
                             value->klass->vtable[4].methodPtr);
  v11 = System_Int32__Parse(v10, 0LL);
  v12 = (int)EventRaceBoostEffect_BoostGrade_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = v12;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  if ( !Values )
LABEL_16:
    sub_1BE4D28(Values, v8);
  result = System_Array__get_Length(Values, 0LL);
  if ( v11 < 1 )
    return 1;
  if ( v11 <= result )
    return v11;
  return result;
}


System_String_o *__fastcall QuestRacePointEntity__GetRandVoice(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x1
  System_String_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  result = (System_String_o *)QuestRacePointEntity__GetVoices(this, method);
  if ( result )
  {
    klass = result[1].klass;
    v4 = result;
    if ( klass )
    {
      v5 = UnityEngine_Random__Range_70411740(0, (int32_t)klass, 0LL);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
        sub_1BE4D30(v5, v6);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B67140 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1BE4ACC(&string_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_23383/*"se"*/, v4);
    byte_4B67140 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23383/*"se"*/,
            &value,
            (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1BE4FE8(value);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  QuestRacePointEntity_c *v12; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x19
  System_Collections_Generic_List_object__o *v16; // x19
  QuestRacePointEntity___c_c *v17; // x8
  System_Converter_TInput__TOutput__o *_9__10_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x21
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  QuestRacePointEntity_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4B67141 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__string__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1BE4ACC(&QuestRacePointEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__, v9);
    sub_1BE4ACC(&QuestRacePointEntity___c_TypeInfo, v10);
    byte_4B67141 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v12 = QuestRacePointEntity_TypeInfo;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
    v12 = QuestRacePointEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v12->static_fields->VOICE_KEY,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  Item = (System_Collections_Generic_List_object__o *)QuestRacePointEntity_TypeInfo;
  v15 = this->fields.script;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  if ( !v15 )
    goto LABEL_23;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                                        (Il2CppObject *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
                                                        (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = Item;
  v17 = QuestRacePointEntity___c_TypeInfo;
  if ( !QuestRacePointEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo);
    v17 = QuestRacePointEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Converter_TInput__TOutput__o *)v17->static_fields->__9__10_0;
  if ( !v16
    || (v13 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__10_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = QuestRacePointEntity___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_1BE4D18(System_Converter_object__string__TypeInfo);
      System_Converter_object__object____ctor(_9__10_0, v20, Method_QuestRacePointEntity___c__GetVoices_b__10_0__, 0LL);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                            v16,
                                                            (System_Converter_T__TOutput__o *)_9__10_0,
                                                            (const MethodInfo_2E88FF4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
      if ( Item )
        return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        Item,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
    }
LABEL_23:
    sub_1BE4D28(Item, v13);
  }
  sub_1BE4FE8(v16);
  return (System_String_array *)QuestRacePointEntity__GetRandVoice(v29, v30);
}


void __fastcall QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67144 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestRacePointEntity___c_TypeInfo, v1);
    byte_4B67144 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(QuestRacePointEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRacePointEntity___c_TypeInfo->static_fields->__9 = (struct QuestRacePointEntity___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestRacePointEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}