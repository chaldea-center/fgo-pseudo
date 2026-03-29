void WarAddEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WarAddEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct WarAddEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D31AF3 & 1) == 0 )
  {
    sub_1C93AD4(&WarAddEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_17267/*"bgChangeEffectTime"*/);
    sub_1C93AD4(&StringLiteral_17268/*"bgChangeEffectType"*/);
    sub_1C93AD4(&StringLiteral_19350/*"eventTowerId"*/);
    byte_4D31AF3 = 1;
  }
  WarAddEntity_TypeInfo->static_fields->BG_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_17268/*"bgChangeEffectType"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarAddEntity_TypeInfo->static_fields,
    StringLiteral_17268/*"bgChangeEffectType"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17267/*"bgChangeEffectTime"*/;
  static_fields = WarAddEntity_TypeInfo->static_fields;
  static_fields->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_17267/*"bgChangeEffectTime"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->BG_CHANGE_TIME_KEY, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_19350/*"eventTowerId"*/;
  v16 = WarAddEntity_TypeInfo->static_fields;
  v16->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_19350/*"eventTowerId"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->EVENT_TOWER_ID, v15, v17, v18, v19, v20, v21, v22);
}


void WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31AF2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31AF2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarAddEntity__CreatePK(int32_t warId, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4D31AED & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D31AED = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t type; // w20
  int32_t warId; // w21
  int32_t priority; // w19

  if ( (byte_4D31AEC & 1) == 0 )
  {
    sub_1C93AD4(&WarAddEntity_TypeInfo);
    byte_4D31AEC = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  return WarAddEntity__CreatePK(warId, type, priority, v2);
}


System_String_o *WarAddEntity__GetBoardEffectName(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31AF0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17147/*"bannerEffectName"*/);
    byte_4D31AF0 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17147/*"bannerEffectName"*/, 0, 0);
}


int32_t WarAddEntity__GetClearedReturnFolderWarId(WarAddEntity_o *this, const MethodInfo *method)
{
  WarAddEntity___c_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v5; // x20
  System_Func_object__int__o *_9__21_0; // x21
  Il2CppObject *v7; // x22
  struct WarAddEntity___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D31AF1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EntityScriptUtil_GetScriptValue_object__int___);
    sub_1C93AD4(&System_Func_object__int__TypeInfo);
    sub_1C93AD4(&Method_WarAddEntity___c__GetClearedReturnFolderWarId_b__21_0__);
    sub_1C93AD4(&WarAddEntity___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_18148/*"clearedReturnFolderWarId"*/);
    byte_4D31AF1 = 1;
  }
  v3 = WarAddEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !WarAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity___c_TypeInfo);
    v3 = WarAddEntity___c_TypeInfo;
  }
  v5 = (System_String_o *)StringLiteral_18148/*"clearedReturnFolderWarId"*/;
  _9__21_0 = v3->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarAddEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_object__int__TypeInfo);
    System_Func_object__int____ctor(_9__21_0, v7, Method_WarAddEntity___c__GetClearedReturnFolderWarId_b__21_0__, 0);
    static_fields = WarAddEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = _9__21_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0,
      (int32_t)_9__21_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return EntityScriptUtil__GetScriptValue_object__int_(
           script,
           v5,
           (System_Func_TSource__TDestination__o *)_9__21_0,
           0,
           (const MethodInfo_31AB1D4 *)Method_EntityScriptUtil_GetScriptValue_object__int___);
}


int32_t WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v4; // x0

  if ( (byte_4D31AEE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&WarAddEntity_TypeInfo);
    byte_4D31AEE = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = WarAddEntity_TypeInfo;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
    v4 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)v4->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


int32_t WarAddEntity__getScript(WarAddEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  WarAddEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31AEF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&long_TypeInfo);
    byte_4D31AEF = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C93D2C(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1C940C8(value);
  return (unsigned int)WarAddEntity__GetBoardEffectName(v12, v13);
}


void WarAddEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31AF4 & 1) == 0 )
  {
    sub_1C93AD4(&WarAddEntity___c_TypeInfo);
    byte_4D31AF4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarAddEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarAddEntity___c_TypeInfo->static_fields->__9 = (struct WarAddEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarAddEntity___c_TypeInfo->static_fields,
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
  __int64 v3; // x3
  WarAddMaster_o *v6; // x0
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x4

  if ( (byte_4D31AF5 & 1) == 0 )
  {
    this = (WarAddEntity___c_o *)sub_1C93AD4(&long_TypeInfo);
    byte_4D31AF5 = 1;
  }
  if ( !val )
    sub_1C93D2C(this, val);
  if ( val->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(val, long_TypeInfo, method, v3);
  sub_1C940C8(val);
  return (unsigned int)WarAddMaster__GetEntity(v6, v7, v8, v9, v10);
}