void ServantCommentEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ServantCommentEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ServantCommentEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ServantCommentEntity_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct ServantCommentEntity_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5971152 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    sub_2213A60(&StringLiteral_24167/*"readJudgeKey"*/);
    sub_2213A60(&StringLiteral_19023/*"condTitle"*/);
    sub_2213A60(&StringLiteral_24567/*"setLabel"*/);
    sub_2213A60(&StringLiteral_21268/*"imageLimit"*/);
    sub_2213A60(&StringLiteral_21942/*"isHideUntilCond"*/);
    byte_5971152 = 1;
  }
  v7 = StringLiteral_21268/*"imageLimit"*/;
  ServantCommentEntity_TypeInfo->static_fields->SCRIPT_IMAGE_LIMIT = (struct System_String_o *)StringLiteral_21268/*"imageLimit"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantCommentEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_19023/*"condTitle"*/;
  static_fields = ServantCommentEntity_TypeInfo->static_fields;
  static_fields->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_19023/*"condTitle"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SCRIPT_COND_TITLE, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_24567/*"setLabel"*/;
  v17 = ServantCommentEntity_TypeInfo->static_fields;
  v17->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_24567/*"setLabel"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->SCRIPT_LABEL_TYPE, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_24167/*"readJudgeKey"*/;
  v25 = ServantCommentEntity_TypeInfo->static_fields;
  v25->SCRIPT_READ_JUDGE = (struct System_String_o *)StringLiteral_24167/*"readJudgeKey"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->SCRIPT_READ_JUDGE, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_21942/*"isHideUntilCond"*/;
  v33 = ServantCommentEntity_TypeInfo->static_fields;
  v33->SCRIPT_HIDE_UNTIL_COND = (struct System_String_o *)StringLiteral_21942/*"isHideUntilCond"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->SCRIPT_HIDE_UNTIL_COND, v32, v34, v35, v36, v37, v38, v39);
}


void ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971151 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971151 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCommentEntity__CreatePK(int32_t svtId, int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_5971141 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5971141 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantCommentEntity__CreatePrimaryKey(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t svtId; // w20
  int32_t id; // w21
  int32_t priority; // w19

  if ( (byte_5971140 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_5971140 = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
  return ServantCommentEntity__CreatePK(svtId, id, priority, v2);
}


System_String_o *ServantCommentEntity__GetComment(ServantCommentEntity_o *this, const MethodInfo *method)
{
  System_String_o *comment; // x19

  if ( (byte_597114A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_597114A = 1;
  }
  comment = this->fields.comment;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0);
}


System_String_o *ServantCommentEntity__GetCondTitle(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_597114E & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597114E = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v4 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptString(
           this,
           v4->static_fields->SCRIPT_COND_TITLE,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantCommentEntity__GetConditionText(
        System_String_o *textType,
        int32_t condType,
        int32_t condValue,
        System_Int32_array *condValues,
        int32_t condValue2,
        const MethodInfo *method)
{
  System_String_o *v10; // x19
  il2cpp_array_size_t max_length; // x8
  int v12; // w8

  v10 = textType;
  if ( (byte_5971149 & 1) == 0 )
  {
    textType = (System_String_o *)sub_2213A60(&CondType_TypeInfo);
    byte_5971149 = 1;
  }
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_2213CE4(textType);
      condValue = condValues->m_Items[0];
    }
  }
  v12 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
  if ( condType == 1 )
  {
    if ( !v12 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condType);
    return CondType__OpenConditionTextQuestPhaseClear(condValue, condValue2, v10, 1, 0);
  }
  else
  {
    if ( !v12 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condType);
    return CondType__OpenConditionText(condType, condValue, v10, 0);
  }
}


System_String_o *ServantCommentEntity__GetConditiontext(
        ServantCommentEntity_o *this,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  System_Int32_array *condValues; // x23
  int32_t condType; // w21
  int32_t condValue; // w22
  int32_t condValue2; // w20

  if ( (byte_5971148 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_5971148 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condMessage, 0) )
    return this->fields.condMessage;
  condValues = this->fields.condValues;
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  condValue2 = this->fields.condValue2;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v5);
  return ServantCommentEntity__GetConditionText(textType, condType, condValue, condValues, condValue2, v6);
}


System_Int32_array *ServantCommentEntity__GetImageLimit(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_597114D & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_597114D = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v4 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptIntArray(this, v4->static_fields->SCRIPT_IMAGE_LIMIT, 0, v2);
}


int32_t ServantCommentEntity__GetReadJudgeKey(ServantCommentEntity_o *this, const MethodInfo *method)
{
  ServantCommentEntity_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_597114F & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_597114F = 1;
  }
  v3 = ServantCommentEntity_TypeInfo;
  script = this->fields.script;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
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
  __int64 v6; // x2
  ServantCommentEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = defVal;
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_5984368, v6);
  sub_221405C(ScriptObj, qword_5984368, v6);
  return ServantCommentEntity__IsProfileLabel(v8, v9);
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
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  ServantCommentEntity___c_c *v13; // x8
  struct ServantCommentEntity___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__30_0; // x20
  Il2CppObject *v16; // x21
  struct ServantCommentEntity___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_597114C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__);
    sub_2213A60(&ServantCommentEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_597114C = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString
    || (IsNullOrEmpty = System_String__Replace_75703400(
                          ScriptString,
                          (System_String_o *)StringLiteral_16427/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0
    || (IsNullOrEmpty = System_String__Replace_75703400(
                          IsNullOrEmpty,
                          (System_String_o *)StringLiteral_16691/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0 )
  {
    sub_2213CDC(IsNullOrEmpty, v9);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0);
  v13 = ServantCommentEntity___c_TypeInfo;
  if ( !*(&ServantCommentEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo, v11);
    v13 = ServantCommentEntity___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__30_0 = (System_Func_object__int__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v11);
      static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_0, v16, Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, 0);
    v17 = ServantCommentEntity___c_TypeInfo->static_fields;
    v17->__9__30_0 = (struct System_Func_string__int__o *)_9__30_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__30_0, (int32_t)_9__30_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__30_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597114B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_597114B = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v6; // x2
  ServantCommentEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_Int32_array *v10; // x2
  const MethodInfo *v11; // x3

  v4 = defVal;
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass == (Il2CppClass *)qword_5984390 )
    return (System_String_o *)ScriptObj;
  sub_221405C(ScriptObj, qword_5984390, v6);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v8, v9, v10, v11);
}


bool ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_5971142 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_5971142 = 1;
  }
  condType = this->fields.condType;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsConst(condType, 0);
}


bool ServantCommentEntity__IsDetailLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  int32_t ScriptInt; // w0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  ServantCommentEntity_c *v8; // x0

  if ( (byte_5971146 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_5971146 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v4 = ServantCommentEntity_TypeInfo;
  }
  ScriptInt = ServantCommentEntity__GetScriptInt(this, v4->static_fields->SCRIPT_LABEL_TYPE, 0, v2);
  if ( ScriptInt != 1 )
  {
    if ( this->fields.id != 1 )
      goto LABEL_10;
    v8 = ServantCommentEntity_TypeInfo;
    if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v6);
      v8 = ServantCommentEntity_TypeInfo;
    }
    if ( ServantCommentEntity__GetScriptInt(this, v8->static_fields->SCRIPT_LABEL_TYPE, 0, v7) != 2 )
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

  if ( (byte_5971150 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_5971150 = 1;
  }
  v3 = ServantCommentEntity_TypeInfo;
  script = this->fields.script;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
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
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x23
  int32_t v11; // w22
  ServantCommentEntity_c *v12; // x8
  __int64 v13; // x1
  bool HasKey; // w23

  if ( (byte_5971145 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971145 = 1;
  }
  if ( ServantCommentEntity__IsConst(this, method)
    || this->fields.id == 1
    || !ServantCommentEntity__IsOpen(this, -1, 1, v3) )
  {
    return 0;
  }
  else
  {
    svtId = this->fields.svtId;
    id = this->fields.id;
    priority = this->fields.priority;
    JudgeKey = ServantCommentEntity__GetReadJudgeKey(this, v4);
    script = this->fields.script;
    v11 = JudgeKey;
    v12 = ServantCommentEntity_TypeInfo;
    if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v9);
      v12 = ServantCommentEntity_TypeInfo;
    }
    HasKey = EntityScriptUtil__ScriptHasKey(script, v12->static_fields->SCRIPT_IMAGE_LIMIT, 0);
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v13);
    return !ServantCommentManager__IsOpen(svtId, id, priority, v11, HasKey, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentEntity__IsOnlyOpenQuestCond(
        ServantCommentEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentEntity_o *v6; // x20
  struct System_Int32_array *condValues; // x9
  il2cpp_array_size_t max_length; // x8
  __int64 v9; // x25
  int32_t *m_Items; // x9
  int v11; // t1
  unsigned __int64 v13; // x26
  struct System_Int32_array *v14; // x8
  int32_t v15; // w22
  NetworkManager_c *v16; // x0
  int32_t condValue2; // w23
  int64_t userIdNumber; // x24

  v6 = this;
  if ( (byte_5971144 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    this = (ServantCommentEntity_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971144 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = (unsigned int)condValues->max_length;
      m_Items = condValues->m_Items;
      while ( 1 )
      {
        v11 = *m_Items++;
        if ( v11 == questId )
          break;
        LODWORD(max_length) = max_length - 1;
        if ( !(_DWORD)max_length )
          return 0;
      }
      v13 = 0;
      while ( 1 )
      {
        v14 = v6->fields.condValues;
        if ( !v14 )
          sub_2213CDC(this, *(_QWORD *)&questId);
        if ( v13 >= LODWORD(v14->max_length) )
          sub_2213CE4(this);
        v15 = v14->m_Items[v13];
        if ( v15 != questId )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v16 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
            v16 = NetworkManager_TypeInfo;
          }
          condValue2 = v6->fields.condValue2;
          userIdNumber = v16->static_fields->userIdNumber;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&questId);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v15, condValue2, -1, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v9 == ++v13 )
          return 1;
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x27
  __int64 v10; // x29
  struct System_Int32_array *v11; // x8
  int32_t condType; // w24
  int32_t v13; // w23
  NetworkManager_c *v14; // x0
  int32_t condValue2; // w24
  int64_t userIdNumber; // x25
  NetworkManager_c *v17; // x0
  int32_t svtId; // w26
  int64_t v19; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v21; // w22
  NetworkManager_c *v22; // x0
  int32_t condValue; // w23
  int32_t v24; // w24
  int64_t v25; // x22
  int32_t v26; // w23
  NetworkManager_c *v27; // x0
  int32_t v28; // w25
  int64_t v29; // x24
  const MethodInfo *v30; // x5
  bool v32; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_5971143 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (ServantCommentEntity_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971143 = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( (int)max_length >= 1 )
    {
      v32 = addCheck;
      v9 = 0;
      v10 = (unsigned int)max_length;
      do
      {
        v11 = v6->fields.condValues;
        if ( !v11 )
          goto LABEL_64;
        if ( v9 >= LODWORD(v11->max_length) )
          sub_2213CE4(this);
        condType = v6->fields.condType;
        v13 = v11->m_Items[v9];
        if ( condType == 1 )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v14 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
            v14 = NetworkManager_TypeInfo;
          }
          condValue2 = v6->fields.condValue2;
          userIdNumber = v14->static_fields->userIdNumber;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v13, condValue2, -1, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_45;
        }
        else if ( oldFriendShipRank < 0 || condType != 9 )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v17 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
            v17 = NetworkManager_TypeInfo;
          }
          svtId = v6->fields.svtId;
          v19 = v17->static_fields->userIdNumber;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          this = (ServantCommentEntity_o *)CondType__IsOpen_47329936(condType, v13, v19, svtId, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_45:
            addCheck = v32;
            IsQuestPhaseClear = 1;
            goto LABEL_59;
          }
        }
        else if ( v13 <= oldFriendShipRank )
        {
          goto LABEL_45;
        }
        ++v9;
      }
      while ( v10 != v9 );
    }
    return 0;
  }
  v21 = v6->fields.condType;
  if ( v21 == 1 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v22 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      v22 = NetworkManager_TypeInfo;
    }
    condValue = v6->fields.condValue;
    v24 = v6->fields.condValue2;
    v25 = v22->static_fields->userIdNumber;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v25, condValue, v24, -1, 0, 0);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v26 = v6->fields.condValue;
    if ( oldFriendShipRank < 0 || v21 != 9 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v27 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        v27 = NetworkManager_TypeInfo;
      }
      v28 = v6->fields.svtId;
      v29 = v27->static_fields->userIdNumber;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      IsQuestPhaseClear = CondType__IsOpen_47329936(v21, v26, v29, v28, 0);
      if ( !IsQuestPhaseClear )
        return IsQuestPhaseClear;
    }
    else
    {
      IsQuestPhaseClear = v26 <= oldFriendShipRank;
      if ( v26 > oldFriendShipRank )
        return IsQuestPhaseClear;
    }
  }
LABEL_59:
  if ( !addCheck )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0 )
  {
LABEL_64:
    sub_2213CDC(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v30);
}


bool ServantCommentEntity__IsProfileLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  ServantCommentEntity_c *v8; // x0

  if ( (byte_5971147 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_5971147 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v4 = ServantCommentEntity_TypeInfo;
  }
  if ( ServantCommentEntity__GetScriptInt(this, v4->static_fields->SCRIPT_LABEL_TYPE, 0, v2) == 2 )
    return 1;
  if ( this->fields.id < 2 )
    return 0;
  v8 = ServantCommentEntity_TypeInfo;
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v5);
    v8 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptInt(this, v8->static_fields->SCRIPT_LABEL_TYPE, 0, v6) != 1;
}


void ServantCommentEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971153 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentEntity___c_TypeInfo);
    byte_5971153 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCommentEntity___c_TypeInfo->static_fields->__9 = (struct ServantCommentEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantCommentEntity___c_TypeInfo->static_fields,
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