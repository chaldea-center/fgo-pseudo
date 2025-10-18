void ServantCommentEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ServantCommentEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ServantCommentEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ServantCommentEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct ServantCommentEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C4385A & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    sub_1C37058(&StringLiteral_22971/*"readJudgeKey"*/);
    sub_1C37058(&StringLiteral_18209/*"condTitle"*/);
    sub_1C37058(&StringLiteral_23334/*"setLabel"*/);
    sub_1C37058(&StringLiteral_20287/*"imageLimit"*/);
    sub_1C37058(&StringLiteral_20927/*"isHideUntilCond"*/);
    byte_4C4385A = 1;
  }
  ServantCommentEntity_TypeInfo->static_fields->SCRIPT_IMAGE_LIMIT = (struct System_String_o *)StringLiteral_20287/*"imageLimit"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantCommentEntity_TypeInfo->static_fields, StringLiteral_20287/*"imageLimit"*/, v1, v2);
  v3 = StringLiteral_18209/*"condTitle"*/;
  static_fields = ServantCommentEntity_TypeInfo->static_fields;
  static_fields->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_18209/*"condTitle"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->SCRIPT_COND_TITLE, v3, v5, v6);
  v7 = StringLiteral_23334/*"setLabel"*/;
  v8 = ServantCommentEntity_TypeInfo->static_fields;
  v8->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_23334/*"setLabel"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->SCRIPT_LABEL_TYPE, v7, v9, v10);
  v11 = StringLiteral_22971/*"readJudgeKey"*/;
  v12 = ServantCommentEntity_TypeInfo->static_fields;
  v12->SCRIPT_READ_JUDGE = (struct System_String_o *)StringLiteral_22971/*"readJudgeKey"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->SCRIPT_READ_JUDGE, v11, v13, v14);
  v15 = StringLiteral_20927/*"isHideUntilCond"*/;
  v16 = ServantCommentEntity_TypeInfo->static_fields;
  v16->SCRIPT_HIDE_UNTIL_COND = (struct System_String_o *)StringLiteral_20927/*"isHideUntilCond"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->SCRIPT_HIDE_UNTIL_COND, v15, v17, v18);
}


void ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43859 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43859 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCommentEntity__CreatePK(int32_t svtId, int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4C43846 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C43846 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_30E6270 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantCommentEntity__CreatePrimaryKey(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4C43845 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    byte_4C43845 = 1;
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

  if ( (byte_4C4384F & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C4384F = 1;
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

  if ( (byte_4C43856 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43856 = 1;
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
  if ( (byte_4C4384E & 1) == 0 )
  {
    textType = (System_String_o *)sub_1C37058(&CondType_TypeInfo);
    byte_4C4384E = 1;
  }
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C372BC(textType);
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

  if ( (byte_4C4384D & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    byte_4C4384D = 1;
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

  if ( (byte_4C43855 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    byte_4C43855 = 1;
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

  if ( (byte_4C43857 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    byte_4C43857 = 1;
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
  if ( (byte_4C43851 & 1) == 0 )
  {
    sub_1C37058(&long_TypeInfo);
    byte_4C43851 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C37574(ScriptObj);
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
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  ServantCommentEntity___c_c *v11; // x8
  System_Func_object__int__o *_9__31_0; // x20
  Il2CppObject *v13; // x21
  struct ServantCommentEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C43854 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_ServantCommentEntity___c__GetScriptIntArray_b__31_0__);
    sub_1C37058(&ServantCommentEntity___c_TypeInfo);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C43854 = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString
    || (IsNullOrEmpty = System_String__Replace_63608204(
                          ScriptString,
                          (System_String_o *)StringLiteral_15804/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0
    || (IsNullOrEmpty = System_String__Replace_63608204(
                          IsNullOrEmpty,
                          (System_String_o *)StringLiteral_16058/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0 )
  {
    sub_1C372B4(IsNullOrEmpty);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0);
  v11 = ServantCommentEntity___c_TypeInfo;
  if ( !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo);
    v11 = ServantCommentEntity___c_TypeInfo;
  }
  _9__31_0 = (System_Func_object__int__o *)v11->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantCommentEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__31_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__31_0, v13, Method_ServantCommentEntity___c__GetScriptIntArray_b__31_0__, 0);
    static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_string__int__o *)_9__31_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)_9__31_0,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43850 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C43850 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


System_Collections_Generic_List_object__o *ServantCommentEntity__GetScriptObjList(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 naturalAligment; // x9
  ServantCommentEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_String_o *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4C43852 & 1) == 0 )
  {
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C43852 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C37574(result);
      return (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptString(v7, v8, v9, v10);
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
  if ( (byte_4C43853 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    byte_4C43853 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  sub_1C37574(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_4C43847 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    byte_4C43847 = 1;
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

  if ( (byte_4C4384B & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    byte_4C4384B = 1;
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

  if ( (byte_4C43858 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    byte_4C43858 = 1;
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

  if ( (byte_4C4384A & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C4384A = 1;
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
  if ( (byte_4C43849 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    this = (ServantCommentEntity_o *)sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43849 = 1;
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
          sub_1C372BC(this);
        v13 = condValues->m_Items[v12];
        if ( v13 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
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
          sub_1C372B4(this);
      }
    }
    return 0;
  }
  return v6->fields.condValue == questId;
}


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
  if ( (byte_4C43848 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    this = (ServantCommentEntity_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43848 = 1;
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
          sub_1C372BC(this);
        condType = v6->fields.condType;
        v11 = condValues->m_Items[v8];
        if ( condType == 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
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
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
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
          this = (ServantCommentEntity_o *)CondType__IsOpen_40368072(condType, v11, v17, svtId, 0);
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
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
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
      IsQuestPhaseClear = CondType__IsOpen_40368072(v19, v24, v27, v26, 0);
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
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0 )
  {
LABEL_33:
    sub_1C372B4(this);
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

  if ( (byte_4C4384C & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity_TypeInfo);
    byte_4C4384C = 1;
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
  const MethodInfo *v3; // x3

  if ( (byte_4C4385B & 1) == 0 )
  {
    sub_1C37058(&ServantCommentEntity___c_TypeInfo);
    byte_4C4385B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCommentEntity___c_TypeInfo->static_fields->__9 = (struct ServantCommentEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantCommentEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantCommentEntity___c___ctor(ServantCommentEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCommentEntity___c___GetScriptIntArray_b__31_0(
        ServantCommentEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}