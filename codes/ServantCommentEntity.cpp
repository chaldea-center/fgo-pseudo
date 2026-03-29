void ServantCommentEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ServantCommentEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ServantCommentEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct ServantCommentEntity_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct ServantCommentEntity_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D31293 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_23256/*"readJudgeKey"*/);
    sub_1C93AD4(&StringLiteral_18358/*"condTitle"*/);
    sub_1C93AD4(&StringLiteral_23627/*"setLabel"*/);
    sub_1C93AD4(&StringLiteral_20515/*"imageLimit"*/);
    sub_1C93AD4(&StringLiteral_21166/*"isHideUntilCond"*/);
    byte_4D31293 = 1;
  }
  ServantCommentEntity_TypeInfo->static_fields->SCRIPT_IMAGE_LIMIT = (struct System_String_o *)StringLiteral_20515/*"imageLimit"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantCommentEntity_TypeInfo->static_fields,
    StringLiteral_20515/*"imageLimit"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_18358/*"condTitle"*/;
  static_fields = ServantCommentEntity_TypeInfo->static_fields;
  static_fields->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_18358/*"condTitle"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->SCRIPT_COND_TITLE, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_23627/*"setLabel"*/;
  v16 = ServantCommentEntity_TypeInfo->static_fields;
  v16->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_23627/*"setLabel"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->SCRIPT_LABEL_TYPE, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_23256/*"readJudgeKey"*/;
  v24 = ServantCommentEntity_TypeInfo->static_fields;
  v24->SCRIPT_READ_JUDGE = (struct System_String_o *)StringLiteral_23256/*"readJudgeKey"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->SCRIPT_READ_JUDGE, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_21166/*"isHideUntilCond"*/;
  v32 = ServantCommentEntity_TypeInfo->static_fields;
  v32->SCRIPT_HIDE_UNTIL_COND = (struct System_String_o *)StringLiteral_21166/*"isHideUntilCond"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->SCRIPT_HIDE_UNTIL_COND, v31, v33, v34, v35, v36, v37, v38);
}


void ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31292 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31292 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCommentEntity__CreatePK(int32_t svtId, int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4D31280 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D31280 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantCommentEntity__CreatePrimaryKey(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4D3127F & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    byte_4D3127F = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  return ServantCommentEntity__CreatePK(svtId, id, priority, v2);
}


System_String_o *ServantCommentEntity__GetComment(ServantCommentEntity_o *this, const MethodInfo *method)
{
  System_String_o *comment; // x19

  if ( (byte_4D31289 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D31289 = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0);
}


System_String_o *ServantCommentEntity__GetCondTitle(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_4D3128F & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3128F = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptString(
           this,
           v4->static_fields->SCRIPT_COND_TITLE,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *ServantCommentEntity__GetConditionText(
        System_String_o *textType,
        int32_t condType,
        int32_t condValue,
        System_Int32_array *condValues,
        int32_t condValue2,
        const MethodInfo *method)
{
  System_String_o *v10; // x20
  il2cpp_array_size_t max_length; // x8

  v10 = textType;
  if ( (byte_4D31288 & 1) == 0 )
  {
    textType = (System_String_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D31288 = 1;
  }
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C93D34(textType);
      condValue = condValues->m_Items[0];
    }
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( condType == 1 )
    return CondType__OpenConditionTextQuestPhaseClear(condValue, condValue2, v10, 1, 0);
  else
    return CondType__OpenConditionText(condType, condValue, v10, 0);
}


System_String_o *ServantCommentEntity__GetConditiontext(
        ServantCommentEntity_o *this,
        System_String_o *textType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int32_t condValue; // w22
  int32_t condType; // w23
  System_Int32_array *condValues; // x21
  int32_t condValue2; // w20

  if ( (byte_4D31287 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    byte_4D31287 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condMessage, 0) )
    return this->fields.condMessage;
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  condValues = this->fields.condValues;
  condValue2 = this->fields.condValue2;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  return ServantCommentEntity__GetConditionText(textType, condType, condValue, condValues, condValue2, v5);
}


System_Int32_array *ServantCommentEntity__GetImageLimit(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_4D3128E & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    byte_4D3128E = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptIntArray(this, v4->static_fields->SCRIPT_IMAGE_LIMIT, 0, v2);
}


int32_t ServantCommentEntity__GetReadJudgeKey(ServantCommentEntity_o *this, const MethodInfo *method)
{
  ServantCommentEntity_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_4D31290 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    byte_4D31290 = 1;
  }
  v3 = ServantCommentEntity_TypeInfo;
  script = this->fields.script;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v3 = ServantCommentEntity_TypeInfo;
  }
  return EntityScriptUtil__GetIntValue(script, v3->static_fields->SCRIPT_READ_JUDGE, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantCommentEntity__GetScriptInt(
        ServantCommentEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  ServantCommentEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_4D3128B & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    byte_4D3128B = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C940C8(ScriptObj);
  return ServantCommentEntity__IsProfileLabel(v11, v12);
}


System_Int32_array *ServantCommentEntity__GetScriptIntArray(
        ServantCommentEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_String_o *ScriptString; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  ServantCommentEntity___c_c *v12; // x8
  System_Func_object__int__o *_9__30_0; // x20
  Il2CppObject *v14; // x21
  struct ServantCommentEntity___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4D3128D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&System_Func_string__int__TypeInfo);
    sub_1C93AD4(&Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__);
    sub_1C93AD4(&ServantCommentEntity___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D3128D = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString
    || (IsNullOrEmpty = System_String__Replace_64472288(
                          ScriptString,
                          (System_String_o *)StringLiteral_15904/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0
    || (IsNullOrEmpty = System_String__Replace_64472288(
                          IsNullOrEmpty,
                          (System_String_o *)StringLiteral_16156/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0 )
  {
    sub_1C93D2C(IsNullOrEmpty, v9);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0);
  v12 = ServantCommentEntity___c_TypeInfo;
  if ( !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo);
    v12 = ServantCommentEntity___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__int__o *)v12->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ServantCommentEntity___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__30_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_0, v14, Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, 0);
    static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_string__int__o *)_9__30_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_0,
      (int32_t)_9__30_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__30_0,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v22,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3128A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D3128A = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *ServantCommentEntity__GetScriptString(
        ServantCommentEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  Il2CppObject *ScriptObj; // x0
  ServantCommentEntity_o *v9; // x0
  System_String_o *v10; // x1
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x3

  v4 = defVal;
  if ( (byte_4D3128C & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    byte_4D3128C = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  sub_1C940C8(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_4D31281 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D31281 = 1;
  }
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsConst(condType, 0);
}


bool ServantCommentEntity__IsDetailLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  int32_t ScriptInt; // w0
  const MethodInfo *v6; // x3
  ServantCommentEntity_c *v7; // x0

  if ( (byte_4D31285 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    byte_4D31285 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  ScriptInt = ServantCommentEntity__GetScriptInt(this, v4->static_fields->SCRIPT_LABEL_TYPE, 0, v2);
  if ( ScriptInt != 1 )
  {
    if ( this->fields.id != 1 )
      goto LABEL_10;
    v7 = ServantCommentEntity_TypeInfo;
    if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
      v7 = ServantCommentEntity_TypeInfo;
    }
    if ( ServantCommentEntity__GetScriptInt(this, v7->static_fields->SCRIPT_LABEL_TYPE, 0, v6) != 2 )
      LOBYTE(ScriptInt) = 1;
    else
LABEL_10:
      LOBYTE(ScriptInt) = 0;
  }
  return ScriptInt;
}


bool ServantCommentEntity__IsHideUntilCond(ServantCommentEntity_o *this, const MethodInfo *method)
{
  ServantCommentEntity_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_4D31291 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    byte_4D31291 = 1;
  }
  v3 = ServantCommentEntity_TypeInfo;
  script = this->fields.script;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v3 = ServantCommentEntity_TypeInfo;
  }
  return EntityScriptUtil__GetIntValue(script, v3->static_fields->SCRIPT_HIDE_UNTIL_COND, 0, 0) == 1;
}


bool ServantCommentEntity__IsNew(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x1
  int32_t svtId; // w19
  int32_t id; // w20
  int32_t priority; // w21
  int32_t JudgeKey; // w0
  System_Collections_Generic_Dictionary_string__object__o *script; // x23
  int32_t v10; // w22
  ServantCommentEntity_c *v11; // x8
  bool HasKey; // w23

  if ( (byte_4D31284 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31284 = 1;
  }
  if ( ServantCommentEntity__IsConst(this, method)
    || this->fields.id == 1
    || !ServantCommentEntity__IsOpen(this, -1, 1, v3) )
  {
    return 0;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  JudgeKey = ServantCommentEntity__GetReadJudgeKey(this, v4);
  script = this->fields.script;
  v10 = JudgeKey;
  v11 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v11 = ServantCommentEntity_TypeInfo;
  }
  HasKey = EntityScriptUtil__ScriptHasKey(script, v11->static_fields->SCRIPT_IMAGE_LIMIT, 0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return !ServantCommentManager__IsOpen(svtId, id, priority, v10, HasKey, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentEntity__IsOnlyOpenQuestCond(
        ServantCommentEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentEntity_o *v6; // x20
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t max_length; // x9
  int v9; // w10
  __int64 v10; // x25
  unsigned __int64 v12; // x26
  int32_t v13; // w22
  NetworkManager_c *v14; // x0
  int32_t condValue2; // w24
  int64_t userIdNumber; // x23

  v6 = this;
  if ( (byte_4D31283 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    this = (ServantCommentEntity_o *)sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D31283 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      v10 = (unsigned int)condValues->max_length;
      while ( condValues->m_Items[v9] != questId )
      {
        if ( (_DWORD)max_length == ++v9 )
          return 0;
      }
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= LODWORD(condValues->max_length) )
          sub_1C93D34(this);
        v13 = condValues->m_Items[v12];
        if ( v13 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
          }
          v14 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v14 = NetworkManager_TypeInfo;
          }
          condValue2 = v6->fields.condValue2;
          userIdNumber = v14->static_fields->userIdNumber;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v13, condValue2, -1, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v10 == ++v12 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1C93D2C(this, *(_QWORD *)&questId);
      }
    }
    return 0;
  }
  return v6->fields.condValue == questId;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentEntity__IsOpen(
        ServantCommentEntity_o *this,
        int32_t oldFriendShipRank,
        bool addCheck,
        const MethodInfo *method)
{
  ServantCommentEntity_o *v6; // x20
  struct System_Int32_array *condValues; // x8
  unsigned __int64 v8; // x27
  __int64 max_length; // x28
  int32_t condType; // w24
  int32_t v11; // w23
  NetworkManager_c *v12; // x0
  int32_t condValue2; // w25
  int64_t userIdNumber; // x24
  NetworkManager_c *v15; // x0
  int32_t svtId; // w26
  int64_t v17; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v19; // w22
  NetworkManager_c *v20; // x0
  int32_t condValue; // w22
  int32_t v22; // w24
  int64_t v23; // x23
  int32_t v24; // w23
  NetworkManager_c *v25; // x0
  int32_t v26; // w25
  int64_t v27; // x24
  const MethodInfo *v28; // x5
  bool v30; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4D31282 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    this = (ServantCommentEntity_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31282 = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    if ( (int)condValues->max_length >= 1 )
    {
      v30 = addCheck;
      v8 = 0;
      max_length = (unsigned int)condValues->max_length;
      while ( 1 )
      {
        if ( v8 >= LODWORD(condValues->max_length) )
          sub_1C93D34(this);
        condType = v6->fields.condType;
        v11 = condValues->m_Items[v8];
        if ( condType == 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
          }
          v12 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v12 = NetworkManager_TypeInfo;
          }
          condValue2 = v6->fields.condValue2;
          userIdNumber = v12->static_fields->userIdNumber;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v11, condValue2, -1, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_46;
        }
        else if ( oldFriendShipRank < 0 || condType != 9 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
          }
          v15 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v15 = NetworkManager_TypeInfo;
          }
          svtId = v6->fields.svtId;
          v17 = v15->static_fields->userIdNumber;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsOpen_41083312(condType, v11, v17, svtId, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_46:
            addCheck = v30;
            IsQuestPhaseClear = 1;
            goto LABEL_60;
          }
        }
        else if ( v11 <= oldFriendShipRank )
        {
          goto LABEL_46;
        }
        if ( max_length == ++v8 )
          break;
        condValues = v6->fields.condValues;
        if ( !condValues )
          goto LABEL_33;
      }
    }
    return 0;
  }
  v19 = v6->fields.condType;
  if ( v19 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    v20 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v20 = NetworkManager_TypeInfo;
    }
    condValue = v6->fields.condValue;
    v22 = v6->fields.condValue2;
    v23 = v20->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v23, condValue, v22, -1, 0, 0);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v24 = v6->fields.condValue;
    if ( oldFriendShipRank < 0 || v19 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      v25 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v25 = NetworkManager_TypeInfo;
      }
      v26 = v6->fields.svtId;
      v27 = v25->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsOpen_41083312(v19, v24, v27, v26, 0);
      if ( !IsQuestPhaseClear )
        return IsQuestPhaseClear;
    }
    else
    {
      IsQuestPhaseClear = v24 <= oldFriendShipRank;
      if ( v24 > oldFriendShipRank )
        return IsQuestPhaseClear;
    }
  }
LABEL_60:
  if ( !addCheck )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0 )
  {
LABEL_33:
    sub_1C93D2C(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v28);
}


bool ServantCommentEntity__IsProfileLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  const MethodInfo *v5; // x3
  ServantCommentEntity_c *v7; // x0

  if ( (byte_4D31286 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    byte_4D31286 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  if ( ServantCommentEntity__GetScriptInt(this, v4->static_fields->SCRIPT_LABEL_TYPE, 0, v2) == 2 )
    return 1;
  if ( this->fields.id < 2 )
    return 0;
  v7 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v7 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptInt(this, v7->static_fields->SCRIPT_LABEL_TYPE, 0, v5) != 1;
}


void ServantCommentEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31294 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentEntity___c_TypeInfo);
    byte_4D31294 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCommentEntity___c_TypeInfo->static_fields->__9 = (struct ServantCommentEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantCommentEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCommentEntity___c___ctor(ServantCommentEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCommentEntity___c___GetScriptIntArray_b__30_0(
        ServantCommentEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}