void __fastcall QuestRacePointEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FC950 & 1) == 0 )
  {
    sub_1B640C8(&QuestRacePointEntity_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_24487/*"voice"*/, v4);
    byte_49FC950 = 1;
  }
  QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY = (struct System_String_o *)StringLiteral_24487/*"voice"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestRacePointEntity_TypeInfo->static_fields,
    StringLiteral_24487/*"voice"*/,
    v2,
    v3);
}


void __fastcall QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC94F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC94F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_49FC94A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&itemId);
    byte_49FC94A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePrimaryKey(
        QuestRacePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_49FC949 & 1) == 0 )
  {
    sub_1B640C8(&QuestRacePointEntity_TypeInfo, method);
    byte_49FC949 = 1;
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
  System_String_o *v5; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FC94B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&StringLiteral_18837/*"effectColor"*/, v3);
    byte_49FC94B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18837/*"effectColor"*/,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1B64324(0LL);
      v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                value,
                                value->klass->vtable[4].methodPtr);
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
  System_Array_o *Values; // x0
  System_String_o *v9; // x0
  int v10; // w19
  intptr_t v11; // w20
  System_Type_o *TypeFromHandle; // x20
  int32_t result; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v15; // 0:w0.4

  if ( (byte_49FC94C & 1) == 0 )
  {
    sub_1B640C8(&EventRaceBoostEffect_BoostGrade_var, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1B640C8(&System_Enum_TypeInfo, v4);
    sub_1B640C8(&System_Type_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_19755/*"grade"*/, v6);
    byte_49FC94C = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19755/*"grade"*/,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  Values = (System_Array_o *)value;
  if ( !value )
    goto LABEL_16;
  v9 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
  v10 = System_Int32__Parse(v9, 0LL);
  v11 = (int)EventRaceBoostEffect_BoostGrade_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v15.fields.value = v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  if ( !Values )
LABEL_16:
    sub_1B64324(Values);
  result = System_Array__get_Length(Values, 0LL);
  if ( v10 < 1 )
    return 1;
  if ( v10 <= result )
    return v10;
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
      v5 = UnityEngine_Random__Range_69087476(0, (int32_t)klass, 0LL);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
        sub_1B6432C(v5, v6);
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

  if ( (byte_49FC94D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&string_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_22958/*"se"*/, v4);
    byte_49FC94D = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_22958/*"se"*/,
            &value,
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1B645E4(value);
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
  System_Collections_Generic_List_object__o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x19
  System_Collections_Generic_List_object__c *v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x19
  QuestRacePointEntity___c_c *v18; // x8
  System_Converter_TInput__TOutput__o *_9__10_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v21; // x21
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  QuestRacePointEntity_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_49FC94E & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__string__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1B640C8(&QuestRacePointEntity_TypeInfo, v8);
    sub_1B640C8(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__, v9);
    sub_1B640C8(&QuestRacePointEntity___c_TypeInfo, v10);
    byte_49FC94E = 1;
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
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  Item = (System_Collections_Generic_List_object__o *)QuestRacePointEntity_TypeInfo;
  v14 = this->fields.script;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  if ( !v14 )
    goto LABEL_23;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)v14,
                                                        (Il2CppObject *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
                                                        (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v17 = Item;
  v18 = QuestRacePointEntity___c_TypeInfo;
  if ( !QuestRacePointEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo);
    v18 = QuestRacePointEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Converter_TInput__TOutput__o *)v18->static_fields->__9__10_0;
  if ( !v17
    || (v15 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v17->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__10_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = QuestRacePointEntity___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_object__string__TypeInfo, v15, v16);
      System_Converter_object__object____ctor(_9__10_0, v21, Method_QuestRacePointEntity___c__GetVoices_b__10_0__, 0LL);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v23, v24);
    }
    if ( v17 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                            v17,
                                                            (System_Converter_T__TOutput__o *)_9__10_0,
                                                            (const MethodInfo_2D6F2A4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
      if ( Item )
        return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        Item,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    }
LABEL_23:
    sub_1B64324(Item);
  }
  sub_1B645E4(v17);
  return (System_String_array *)QuestRacePointEntity__GetRandVoice(v26, v27);
}


void __fastcall QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC951 & 1) == 0 )
  {
    sub_1B640C8(&QuestRacePointEntity___c_TypeInfo, v1);
    byte_49FC951 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestRacePointEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestRacePointEntity___c_TypeInfo->static_fields->__9 = (struct QuestRacePointEntity___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestRacePointEntity___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}