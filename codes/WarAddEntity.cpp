void WarAddEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WarAddEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct WarAddEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5939829 & 1) == 0 )
  {
    sub_21FFC50(&WarAddEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_17837/*"bgChangeEffectTime"*/);
    sub_21FFC50(&StringLiteral_17838/*"bgChangeEffectType"*/);
    sub_21FFC50(&StringLiteral_20006/*"eventTowerId"*/);
    byte_5939829 = 1;
  }
  v7 = StringLiteral_17838/*"bgChangeEffectType"*/;
  WarAddEntity_TypeInfo->static_fields->BG_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_17838/*"bgChangeEffectType"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)WarAddEntity_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_17837/*"bgChangeEffectTime"*/;
  static_fields = WarAddEntity_TypeInfo->static_fields;
  static_fields->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_17837/*"bgChangeEffectTime"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->BG_CHANGE_TIME_KEY, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_20006/*"eventTowerId"*/;
  v17 = WarAddEntity_TypeInfo->static_fields;
  v17->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_20006/*"eventTowerId"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->EVENT_TOWER_ID, v16, v18, v19, v20, v21, v22, v23);
}


void WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939828 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939828 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarAddEntity__CreatePK(int32_t warId, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_5939822 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5939822 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t warId; // w20
  int32_t type; // w21
  int32_t priority; // w19

  if ( (byte_5939821 & 1) == 0 )
  {
    sub_21FFC50(&WarAddEntity_TypeInfo);
    byte_5939821 = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( !*(&WarAddEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, method);
  return WarAddEntity__CreatePK(warId, type, priority, v2);
}


System_String_o *WarAddEntity__GetBoardEffectName(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939825 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17712/*"bannerEffectName"*/);
    byte_5939825 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17712/*"bannerEffectName"*/, 0, 0);
}


int32_t WarAddEntity__GetClearedReturnFolderWarId(WarAddEntity_o *this, const MethodInfo *method)
{
  WarAddEntity___c_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  struct WarAddEntity___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__21_0; // x21
  System_String_o *v7; // x20
  Il2CppObject *v8; // x22
  struct WarAddEntity___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5939826 & 1) == 0 )
  {
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_object__int___);
    sub_21FFC50(&System_Func_object__int__TypeInfo);
    sub_21FFC50(&Method_WarAddEntity___c__GetClearedReturnFolderWarId_b__21_0__);
    sub_21FFC50(&WarAddEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_18763/*"clearedReturnFolderWarId"*/);
    byte_5939826 = 1;
  }
  v3 = WarAddEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !*(&WarAddEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity___c_TypeInfo, method);
    v3 = WarAddEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__21_0 = static_fields->__9__21_0;
  v7 = (System_String_o *)StringLiteral_18763/*"clearedReturnFolderWarId"*/;
  if ( !_9__21_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = WarAddEntity___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_object__int__TypeInfo);
    System_Func_object__int____ctor(_9__21_0, v8, Method_WarAddEntity___c__GetClearedReturnFolderWarId_b__21_0__, 0);
    v9 = WarAddEntity___c_TypeInfo->static_fields;
    v9->__9__21_0 = _9__21_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__21_0, (int32_t)_9__21_0, v10, v11, v12, v13, v14, v15);
  }
  return EntityScriptUtil__GetScriptValue_object__int_(
           script,
           v7,
           (System_Func_TSource__TDestination__o *)_9__21_0,
           0,
           (const MethodInfo_382DB1C *)Method_EntityScriptUtil_GetScriptValue_object__int___);
}


int32_t WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v4; // x0

  if ( (byte_5939823 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&WarAddEntity_TypeInfo);
    byte_5939823 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = WarAddEntity_TypeInfo;
  if ( !*(&WarAddEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, method);
    v4 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)v4->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


bool WarAddEntity__IsExecuteFirstFade(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939827 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20177/*"executeFirstFade"*/);
    byte_5939827 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20177/*"executeFirstFade"*/, 0, 0) > 0;
}


int32_t WarAddEntity__getScript(WarAddEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  WarAddEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939824 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5939824 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_21FFECC(0, v8);
  if ( value->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, qword_594C090, v9);
  sub_220024C(value, qword_594C090, v9);
  return (unsigned int)WarAddEntity__GetBoardEffectName(v11, v12);
}


void WarAddEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593982A & 1) == 0 )
  {
    sub_21FFC50(&WarAddEntity___c_TypeInfo);
    byte_593982A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarAddEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarAddEntity___c_TypeInfo->static_fields->__9 = (struct WarAddEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarAddEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarAddEntity___c___ctor(WarAddEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarAddEntity___c___GetClearedReturnFolderWarId_b__21_0(
        WarAddEntity___c_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  WarAddMaster_o *v4; // x0
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x4

  if ( !val )
    sub_21FFECC(this, 0);
  if ( val->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(val, val, method);
  sub_220024C(val, qword_594C090, method);
  return (unsigned int)WarAddMaster__GetEntity(v4, v5, v6, v7, v8);
}