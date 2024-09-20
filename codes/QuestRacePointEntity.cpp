void __fastcall QuestRacePointEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5B6B1 & 1) == 0 )
  {
    sub_1B885B0(&QuestRacePointEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_24586/*"voice"*/);
    byte_4A5B6B1 = 1;
  }
  QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY = (struct System_String_o *)StringLiteral_24586/*"voice"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestRacePointEntity_TypeInfo->static_fields,
    StringLiteral_24586/*"voice"*/,
    v1,
    v2);
}


void __fastcall QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B6B0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4A5B6AB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B6AB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePrimaryKey(
        QuestRacePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_4A5B6AA & 1) == 0 )
  {
    sub_1B885B0(&QuestRacePointEntity_TypeInfo);
    byte_4A5B6AA = 1;
  }
  questId = this->fields.questId;
  itemId = this->fields.itemId;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  return QuestRacePointEntity__CreatePK(questId, itemId, v2);
}


int32_t __fastcall QuestRacePointEntity__GetBoostTypeColor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5B6AC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_18910/*"effectColor"*/);
    byte_4A5B6AC = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18910/*"effectColor"*/,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1B8880C(0LL, v4);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Array_o *Values; // x0
  System_String_o *v6; // x0
  int v7; // w19
  intptr_t v8; // w20
  System_Type_o *TypeFromHandle; // x20
  int32_t result; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_4A5B6AD & 1) == 0 )
  {
    sub_1B885B0(&EventRaceBoostEffect_BoostGrade_var);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_19834/*"grade"*/);
    byte_4A5B6AD = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19834/*"grade"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  Values = (System_Array_o *)value;
  if ( !value )
    goto LABEL_16;
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
  v7 = System_Int32__Parse(v6, 0LL);
  v8 = (int)EventRaceBoostEffect_BoostGrade_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  if ( !Values )
LABEL_16:
    sub_1B8880C(Values, v4);
  result = System_Array__get_Length(Values, 0LL);
  if ( v7 < 1 )
    return 1;
  if ( v7 <= result )
    return v7;
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
      v5 = UnityEngine_Random__Range_69419120(0, (int32_t)klass, 0LL);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
        sub_1B88814(v5, v6);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5B6AE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_23053/*"se"*/);
    byte_4A5B6AE = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23053/*"se"*/,
            &value,
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1B88ACC(value);
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
  System_Collections_Generic_List_object__o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  System_Collections_Generic_List_object__o *v8; // x19
  QuestRacePointEntity___c_c *v9; // x8
  System_Converter_TInput__TOutput__o *_9__10_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v12; // x21
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  QuestRacePointEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4A5B6AF & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&QuestRacePointEntity_TypeInfo);
    sub_1B885B0(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__);
    sub_1B885B0(&QuestRacePointEntity___c_TypeInfo);
    byte_4A5B6AF = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v4 = QuestRacePointEntity_TypeInfo;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
    v4 = QuestRacePointEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->VOICE_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  Item = (System_Collections_Generic_List_object__o *)QuestRacePointEntity_TypeInfo;
  v7 = this->fields.script;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  if ( !v7 )
    goto LABEL_23;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                        (Il2CppObject *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
                                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v8 = Item;
  v9 = QuestRacePointEntity___c_TypeInfo;
  if ( !QuestRacePointEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo);
    v9 = QuestRacePointEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Converter_TInput__TOutput__o *)v9->static_fields->__9__10_0;
  if ( !v8
    || (v5 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v8->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__10_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = QuestRacePointEntity___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_object__string__TypeInfo);
      System_Converter_object__object____ctor(_9__10_0, v12, Method_QuestRacePointEntity___c__GetVoices_b__10_0__, 0LL);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v14, v15);
    }
    if ( v8 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                            v8,
                                                            (System_Converter_T__TOutput__o *)_9__10_0,
                                                            (const MethodInfo_2DB32F8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
      if ( Item )
        return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        Item,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
    }
LABEL_23:
    sub_1B8880C(Item, v5);
  }
  sub_1B88ACC(v8);
  return (System_String_array *)QuestRacePointEntity__GetRandVoice(v17, v18);
}


void __fastcall QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B6B2 & 1) == 0 )
  {
    sub_1B885B0(&QuestRacePointEntity___c_TypeInfo);
    byte_4A5B6B2 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestRacePointEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestRacePointEntity___c_TypeInfo->static_fields->__9 = (struct QuestRacePointEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestRacePointEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}