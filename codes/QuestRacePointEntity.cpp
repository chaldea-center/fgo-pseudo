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
  __int64 v9; // x2

  if ( (byte_4B16762 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRacePointEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24840/*"voice"*/, v8, v9);
    byte_4B16762 = 1;
  }
  QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY = (struct System_String_o *)StringLiteral_24840/*"voice"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestRacePointEntity_TypeInfo->static_fields,
    StringLiteral_24840/*"voice"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16761 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16761 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4B1675C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&itemId, method);
    byte_4B1675C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRacePointEntity__CreatePrimaryKey(
        QuestRacePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_4B1675B & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRacePointEntity_TypeInfo, method, v2);
    byte_4B1675B = 1;
  }
  questId = this->fields.questId;
  itemId = this->fields.itemId;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, method);
  return QuestRacePointEntity__CreatePK(questId, itemId, v2);
}


int32_t __fastcall QuestRacePointEntity__GetBoostTypeColor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1675D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&StringLiteral_19104/*"effectColor"*/, v4, v5);
    byte_4B1675D = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19104/*"effectColor"*/,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1BCAA3C(0LL, v7);
      v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                value,
                                value->klass->vtable[4].methodPtr);
      LODWORD(script) = System_Int32__Parse(v8, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v13; // x1
  System_Array_o *Values; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int v17; // w19
  intptr_t v18; // w20
  __int64 v19; // x1
  System_Type_o *TypeFromHandle; // x20
  int32_t result; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v23; // 0:w0.4

  if ( (byte_4B1675E & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaceBoostEffect_BoostGrade_var, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    sub_1BCA7E0(&System_Enum_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Type_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_20042/*"grade"*/, v10, v11);
    byte_4B1675E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_20042/*"grade"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  Values = (System_Array_o *)value;
  if ( !value )
    goto LABEL_16;
  v15 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                             value,
                             value->klass->vtable[4].methodPtr);
  v17 = System_Int32__Parse(v15, 0LL);
  v18 = (int)EventRaceBoostEffect_BoostGrade_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v16);
  v23.fields.value = v18;
  TypeFromHandle = System_Type__GetTypeFromHandle(v23, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v19);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  if ( !Values )
LABEL_16:
    sub_1BCAA3C(Values, v13);
  result = System_Array__get_Length(Values, 0LL);
  if ( v17 < 1 )
    return 1;
  if ( v17 <= result )
    return v17;
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
      v5 = UnityEngine_Random__Range_70113984(0, (int32_t)klass, 0LL);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
        sub_1BCAA44(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1675F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_23298/*"se"*/, v6, v7);
    byte_4B1675F = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23298/*"se"*/,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1BCACFC(value);
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestRacePointEntity__GetVoices(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  QuestRacePointEntity_c *v21; // x0
  System_Collections_Generic_List_object__c *v22; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v24; // x19
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  QuestRacePointEntity___c_c *v28; // x8
  System_Converter_TInput__TOutput__o *_9__10_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v31; // x21
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  QuestRacePointEntity_o *v40; // x0
  const MethodInfo *v41; // x1

  if ( (byte_4B16760 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v12, v13);
    sub_1BCA7E0(&QuestRacePointEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__, v16, v17);
    sub_1BCA7E0(&QuestRacePointEntity___c_TypeInfo, v18, v19);
    byte_4B16760 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v21 = QuestRacePointEntity_TypeInfo;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, method);
    v21 = QuestRacePointEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v21->static_fields->VOICE_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  Item = (System_Collections_Generic_List_object__o *)QuestRacePointEntity_TypeInfo;
  v24 = this->fields.script;
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, v22);
  if ( !v24 )
    goto LABEL_23;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)v24,
                                                        (Il2CppObject *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
                                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = Item;
  v28 = QuestRacePointEntity___c_TypeInfo;
  if ( !QuestRacePointEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo, v22);
    v28 = QuestRacePointEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Converter_TInput__TOutput__o *)v28->static_fields->__9__10_0;
  if ( !v27
    || (v22 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__10_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28, v22);
        v28 = QuestRacePointEntity___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_object__string__TypeInfo,
                                                          v22,
                                                          v25,
                                                          v26);
      System_Converter_object__object____ctor(_9__10_0, v31, Method_QuestRacePointEntity___c__GetVoices_b__10_0__, 0LL);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( v27 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                            v27,
                                                            (System_Converter_T__TOutput__o *)_9__10_0,
                                                            (const MethodInfo_2E42C60 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
      if ( Item )
        return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        Item,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    }
LABEL_23:
    sub_1BCAA3C(Item, v22);
  }
  sub_1BCACFC(v27);
  return (System_String_array *)QuestRacePointEntity__GetRandVoice(v40, v41);
}


void __fastcall QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16763 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRacePointEntity___c_TypeInfo, v1, v2);
    byte_4B16763 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestRacePointEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestRacePointEntity___c_TypeInfo->static_fields->__9 = (struct QuestRacePointEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestRacePointEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}