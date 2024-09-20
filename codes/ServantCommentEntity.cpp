void __fastcall ServantCommentEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct ServantCommentEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct ServantCommentEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct ServantCommentEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5B801 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_22793/*"readJudgeKey"*/);
    sub_1B885B0(&StringLiteral_18201/*"condTitle"*/);
    sub_1B885B0(&StringLiteral_23164/*"setLabel"*/);
    sub_1B885B0(&StringLiteral_20235/*"imageLimit"*/);
    byte_4A5B801 = 1;
  }
  ServantCommentEntity_TypeInfo->static_fields->SCRIPT_IMAGE_LIMIT = (struct System_String_o *)StringLiteral_20235/*"imageLimit"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantCommentEntity_TypeInfo->static_fields,
    StringLiteral_20235/*"imageLimit"*/,
    v1,
    v2);
  v3 = StringLiteral_18201/*"condTitle"*/;
  static_fields = ServantCommentEntity_TypeInfo->static_fields;
  static_fields->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_18201/*"condTitle"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SCRIPT_COND_TITLE, v3, v5, v6);
  v7 = StringLiteral_23164/*"setLabel"*/;
  v8 = ServantCommentEntity_TypeInfo->static_fields;
  v8->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_23164/*"setLabel"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SCRIPT_LABEL_TYPE, v7, v9, v10);
  v11 = StringLiteral_22793/*"readJudgeKey"*/;
  v12 = ServantCommentEntity_TypeInfo->static_fields;
  v12->SCRIPT_READ_JUDGE = (struct System_String_o *)StringLiteral_22793/*"readJudgeKey"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->SCRIPT_READ_JUDGE, v11, v13, v14);
}


void __fastcall ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B800 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B800 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCommentEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B7EE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B7EE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantCommentEntity__CreatePrimaryKey(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4A5B7ED & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B7ED = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  return ServantCommentEntity__CreatePK(svtId, id, priority, v2);
}


System_String_o *__fastcall ServantCommentEntity__GetComment(ServantCommentEntity_o *this, const MethodInfo *method)
{
  System_String_o *comment; // x19

  if ( (byte_4A5B7F7 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5B7F7 = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}


System_String_o *__fastcall ServantCommentEntity__GetCondTitle(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_4A5B7FE & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B7FE = 1;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentEntity__GetConditionText(
        System_String_o *textType,
        int32_t condType,
        int32_t condValue,
        System_Int32_array *condValues,
        int32_t condValue2,
        const MethodInfo *method)
{
  System_String_o *v10; // x20
  __int64 v11; // x8

  v10 = textType;
  if ( (byte_4A5B7F6 & 1) == 0 )
  {
    textType = (System_String_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B7F6 = 1;
  }
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
        sub_1B88814(textType, *(_QWORD *)&condType);
      condValue = condValues->m_Items[1];
    }
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( condType == 1 )
    return CondType__OpenConditionTextQuestPhaseClear(condValue, condValue2, v10, 1, 0LL);
  else
    return CondType__OpenConditionText(condType, condValue, v10, 0LL);
}


System_String_o *__fastcall ServantCommentEntity__GetConditiontext(
        ServantCommentEntity_o *this,
        System_String_o *textType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int32_t condValue; // w22
  int32_t condType; // w23
  System_Int32_array *condValues; // x21
  int32_t condValue2; // w20

  if ( (byte_4A5B7F5 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B7F5 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condMessage, 0LL) )
    return this->fields.condMessage;
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  condValues = this->fields.condValues;
  condValue2 = this->fields.condValue2;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  return ServantCommentEntity__GetConditionText(textType, condType, condValue, condValues, condValue2, v5);
}


System_Int32_array *__fastcall ServantCommentEntity__GetImageLimit(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_4A5B7FD & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B7FD = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptIntArray(this, v4->static_fields->SCRIPT_IMAGE_LIMIT, 0LL, v2);
}


int32_t __fastcall ServantCommentEntity__GetReadJudgeKey(ServantCommentEntity_o *this, const MethodInfo *method)
{
  ServantCommentEntity_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_4A5B7FF & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B7FF = 1;
  }
  v3 = ServantCommentEntity_TypeInfo;
  script = this->fields.script;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v3 = ServantCommentEntity_TypeInfo;
  }
  return EntityScriptUtil__GetIntValue(script, v3->static_fields->SCRIPT_READ_JUDGE, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantCommentEntity__GetScriptInt(
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
  if ( (byte_4A5B7F9 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B7F9 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B88ACC(ScriptObj);
  return ServantCommentEntity__IsProfileLabel(v11, v12);
}


System_Int32_array *__fastcall ServantCommentEntity__GetScriptIntArray(
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
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4A5B7FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__);
    sub_1B885B0(&ServantCommentEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5B7FC = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString
    || (IsNullOrEmpty = System_String__Replace_61726660(
                          ScriptString,
                          (System_String_o *)StringLiteral_15812/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (IsNullOrEmpty = System_String__Replace_61726660(
                          IsNullOrEmpty,
                          (System_String_o *)StringLiteral_16069/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1B8880C(IsNullOrEmpty, v9);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
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
    _9__30_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_0, v14, Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, 0LL);
    static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_string__int__o *)_9__30_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__30_0,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *__fastcall ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B7F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5B7F8 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *__fastcall ServantCommentEntity__GetScriptObjList(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 methodPtr_low; // x9
  ServantCommentEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_String_o *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4A5B7FA & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4A5B7FA = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B88ACC(result);
      return (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptString(v7, v8, v9, v10);
    }
  }
  return result;
}


System_String_o *__fastcall ServantCommentEntity__GetScriptString(
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
  if ( (byte_4A5B7FB & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A5B7FB = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  sub_1B88ACC(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool __fastcall ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_4A5B7EF & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B7EF = 1;
  }
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsConst(condType, 0LL);
}


bool __fastcall ServantCommentEntity__IsDetailLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  int32_t ScriptInt; // w0
  const MethodInfo *v6; // x3
  ServantCommentEntity_c *v7; // x0

  if ( (byte_4A5B7F3 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B7F3 = 1;
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


bool __fastcall ServantCommentEntity__IsNew(ServantCommentEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4A5B7F2 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5B7F2 = 1;
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
  HasKey = EntityScriptUtil__ScriptHasKey(script, v11->static_fields->SCRIPT_IMAGE_LIMIT, 0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return !ServantCommentManager__IsOpen(svtId, id, priority, v10, HasKey, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentEntity__IsOnlyOpenQuestCond(
        ServantCommentEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentEntity_o *v6; // x20
  struct System_Int32_array *condValues; // x8
  __int64 v8; // x9
  int v9; // w10
  __int64 v10; // x24
  unsigned __int64 v12; // x25
  int32_t v13; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v16; // x23

  v6 = this;
  if ( (byte_4A5B7F1 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    this = (ServantCommentEntity_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B7F1 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v8 = *(_QWORD *)&condValues->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0;
      v10 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( condValues->m_Items[v9 + 1] != questId )
      {
        if ( (_DWORD)v8 == ++v9 )
          return 0;
      }
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= condValues->max_length )
          sub_1B88814(this, *(_QWORD *)&questId);
        v13 = condValues->m_Items[v12 + 1];
        if ( v13 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v16 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v16, v13, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v10 == ++v12 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1B8880C(this, *(_QWORD *)&questId);
      }
    }
    return 0;
  }
  return v6->fields.condValue == questId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentEntity__IsOpen(
        ServantCommentEntity_o *this,
        int32_t oldFriendShipRank,
        bool addCheck,
        const MethodInfo *method)
{
  ServantCommentEntity_o *v6; // x20
  struct System_Int32_array *condValues; // x8
  unsigned __int64 v8; // x26
  __int64 v9; // x27
  int32_t condType; // w23
  int32_t v11; // w22
  int64_t UserId; // x0
  int32_t condValue2; // w23
  int64_t v14; // x24
  int64_t v15; // x0
  int32_t svtId; // w24
  int64_t v17; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v19; // w22
  int64_t v20; // x0
  int32_t condValue; // w22
  int32_t v22; // w23
  int64_t v23; // x24
  int32_t v24; // w23
  int64_t v25; // x0
  int32_t v26; // w24
  int64_t v27; // x25
  const MethodInfo *v28; // x5

  v6 = this;
  if ( (byte_4A5B7F0 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (ServantCommentEntity_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B7F0 = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    if ( (int)*(_QWORD *)&condValues->max_length >= 1 )
    {
      v8 = 0LL;
      v9 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( 1 )
      {
        if ( v8 >= condValues->max_length )
          sub_1B88814(this, *(_QWORD *)&oldFriendShipRank);
        condType = v6->fields.condType;
        v11 = condValues->m_Items[v8 + 1];
        if ( condType == 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v14 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v14, v11, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_34;
        }
        else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v15 = NetworkManager__get_UserId(0LL);
          svtId = v6->fields.svtId;
          v17 = v15;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsOpen_37635152(condType, v11, v17, svtId, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_34:
            IsQuestPhaseClear = 1;
            goto LABEL_44;
          }
        }
        else if ( v11 <= oldFriendShipRank )
        {
          goto LABEL_34;
        }
        if ( v9 == ++v8 )
          break;
        condValues = v6->fields.condValues;
        if ( !condValues )
          goto LABEL_25;
      }
    }
    return 0;
  }
  v19 = v6->fields.condType;
  if ( v19 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager__get_UserId(0LL);
    condValue = v6->fields.condValue;
    v22 = v6->fields.condValue2;
    v23 = v20;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v23, condValue, v22, -1, 0, 0LL);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v24 = v6->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v19 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v25 = NetworkManager__get_UserId(0LL);
      v26 = v6->fields.svtId;
      v27 = v25;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsOpen_37635152(v19, v24, v27, v26, 0LL);
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
LABEL_44:
  if ( !addCheck )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0LL )
  {
LABEL_25:
    sub_1B8880C(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v28);
}


bool __fastcall ServantCommentEntity__IsProfileLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  const MethodInfo *v5; // x3
  ServantCommentEntity_c *v7; // x0

  if ( (byte_4A5B7F4 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B7F4 = 1;
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


void __fastcall ServantCommentEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B802 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentEntity___c_TypeInfo);
    byte_4A5B802 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantCommentEntity___c_TypeInfo->static_fields->__9 = (struct ServantCommentEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantCommentEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ServantCommentEntity___c___ctor(ServantCommentEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCommentEntity___c___GetScriptIntArray_b__30_0(
        ServantCommentEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}