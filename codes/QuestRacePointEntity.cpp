void QuestRacePointEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5970FE2 & 1) == 0 )
  {
    sub_2213A60(&QuestRacePointEntity_TypeInfo);
    sub_2213A60(&StringLiteral_26075/*"voice"*/);
    byte_5970FE2 = 1;
  }
  v7 = StringLiteral_26075/*"voice"*/;
  QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY = (struct System_String_o *)StringLiteral_26075/*"voice"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestRacePointEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void QuestRacePointEntity___ctor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970FE1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970FE1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRacePointEntity__CreatePK(int32_t questId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_5970FDC & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970FDC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           itemId,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestRacePointEntity__CreatePrimaryKey(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t itemId; // w19
  int32_t questId; // w20

  if ( (byte_5970FDB & 1) == 0 )
  {
    sub_2213A60(&QuestRacePointEntity_TypeInfo);
    byte_5970FDB = 1;
  }
  questId = this->fields.questId;
  itemId = this->fields.itemId;
  if ( !*(&QuestRacePointEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, method);
  return QuestRacePointEntity__CreatePK(questId, itemId, v2);
}


int32_t QuestRacePointEntity__GetBoostTypeColor(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970FDD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_19785/*"effectColor"*/);
    byte_5970FDD = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19785/*"effectColor"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_2213CDC(0, v4);
      v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                value,
                                value->klass->vtable[3].method);
      LODWORD(script) = System_Int32__Parse(v5, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t QuestRacePointEntity__GetEffectGrade(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Array_o *Values; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w19
  Il2CppType *v9; // x20
  __int64 v10; // x1
  System_Type_o *TypeFromHandle; // x20
  int32_t Length; // w0
  int32_t v13; // w8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970FDE & 1) == 0 )
  {
    sub_2213A60(&EventRaceBoostEffect_BoostGrade_var);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_20824/*"grade"*/);
    byte_5970FDE = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_20824/*"grade"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return 1;
  }
  Values = (System_Array_o *)value;
  if ( !value )
    goto LABEL_19;
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  v8 = System_Int32__Parse(v6, 0);
  v9 = EventRaceBoostEffect_BoostGrade_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v7);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v9, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v10);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  if ( !Values )
LABEL_19:
    sub_2213CDC(Values, v4);
  Length = System_Array__get_Length(Values, 0);
  if ( v8 >= Length )
    v13 = Length;
  else
    v13 = v8;
  if ( v8 < 1 )
    return 1;
  else
    return v13;
}


System_String_o *QuestRacePointEntity__GetRandVoice(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x1
  System_String_o *v4; // x19
  __int64 v5; // x0

  result = (System_String_o *)QuestRacePointEntity__GetVoices(this, method);
  if ( result )
  {
    klass = result[1].klass;
    v4 = result;
    if ( klass )
    {
      v5 = UnityEngine_Random__Range_83400680(0, (int32_t)klass, 0);
      if ( (unsigned int)v5 >= LODWORD(v4[1].klass) )
        sub_2213CE4(v5);
      return (System_String_o *)*((_QWORD *)&v4[1].monitor + (int)v5);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *QuestRacePointEntity__GetSe(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970FDF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_24442/*"se"*/);
    byte_5970FDF = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_24442/*"se"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_5984390 )
    {
      sub_221405C(value, qword_5984390, v4);
      return 0;
    }
  }
  return result;
}


System_String_array *QuestRacePointEntity__GetVoices(QuestRacePointEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  QuestRacePointEntity_c *v4; // x0
  System_Collections_Generic_List_object__c *v5; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x19
  QuestRacePointEntity___c_c *v11; // x8
  struct QuestRacePointEntity___c_StaticFields *static_fields; // x9
  System_Converter_TInput__TOutput__o *_9__10_0; // x20
  __int64 v14; // x9
  __int64 naturalAligment; // x11
  Il2CppObject *v17; // x21
  struct QuestRacePointEntity___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  QuestRacePointEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_5970FE0 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&QuestRacePointEntity_TypeInfo);
    sub_2213A60(&Method_QuestRacePointEntity___c__GetVoices_b__10_0__);
    sub_2213A60(&QuestRacePointEntity___c_TypeInfo);
    byte_5970FE0 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = QuestRacePointEntity_TypeInfo;
  if ( !*(&QuestRacePointEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, method);
    v4 = QuestRacePointEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->VOICE_KEY,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = (System_Collections_Generic_List_object__o *)QuestRacePointEntity_TypeInfo;
  v7 = this->fields.script;
  if ( !*(&QuestRacePointEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, v5);
  if ( !v7 )
    goto LABEL_26;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                        (Il2CppObject *)QuestRacePointEntity_TypeInfo->static_fields->VOICE_KEY,
                                                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = Item;
  v11 = QuestRacePointEntity___c_TypeInfo;
  if ( !*(&QuestRacePointEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity___c_TypeInfo, v8);
    v11 = QuestRacePointEntity___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__10_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__10_0;
  v5 = System_Collections_Generic_List_object__TypeInfo;
  if ( !_9__10_0 )
  {
    if ( v10 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v10->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_27;
      }
    }
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, System_Collections_Generic_List_object__TypeInfo);
      static_fields = QuestRacePointEntity___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(_9__10_0, v17, Method_QuestRacePointEntity___c__GetVoices_b__10_0__, 0);
    v18 = QuestRacePointEntity___c_TypeInfo->static_fields;
    v18->__9__10_0 = (struct System_Converter_object__string__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__10_0, (int32_t)_9__10_0, v19, v20, v21, v22, v23, v24);
    if ( !v10 )
LABEL_26:
      sub_2213CDC(Item, v5);
LABEL_24:
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                          v10,
                                                          (System_Converter_T__TOutput__o *)_9__10_0,
                                                          (const MethodInfo_36D77D0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
    if ( Item )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      Item,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_26;
  }
  if ( !v10 )
    goto LABEL_26;
  v14 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( v10->klass->_2.naturalAligment >= (unsigned int)v14
    && (System_Collections_Generic_List_object__c *)v10->klass->_2.typeHierarchy[v14 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_24;
  }
LABEL_27:
  sub_221405C(v10, System_Collections_Generic_List_object__TypeInfo, v9);
  return (System_String_array *)QuestRacePointEntity__GetRandVoice(v25, v26);
}


void QuestRacePointEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970FE3 & 1) == 0 )
  {
    sub_2213A60(&QuestRacePointEntity___c_TypeInfo);
    byte_5970FE3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestRacePointEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRacePointEntity___c_TypeInfo->static_fields->__9 = (struct QuestRacePointEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestRacePointEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestRacePointEntity___c___ctor(QuestRacePointEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *QuestRacePointEntity___c___GetVoices_b__10_0(
        QuestRacePointEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((System_String_o *(__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
           x,
           x->klass->vtable[3].method);
}