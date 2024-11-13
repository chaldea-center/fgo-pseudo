void __fastcall ServantCommentEntity___cctor(const MethodInfo *method)
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct ServantCommentEntity_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct ServantCommentEntity_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct ServantCommentEntity_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B168B4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_23037/*"readJudgeKey"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18385/*"condTitle"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_23408/*"setLabel"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20449/*"imageLimit"*/, v14, v15);
    byte_4B168B4 = 1;
  }
  ServantCommentEntity_TypeInfo->static_fields->SCRIPT_IMAGE_LIMIT = (struct System_String_o *)StringLiteral_20449/*"imageLimit"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCommentEntity_TypeInfo->static_fields,
    StringLiteral_20449/*"imageLimit"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_18385/*"condTitle"*/;
  static_fields = ServantCommentEntity_TypeInfo->static_fields;
  static_fields->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_18385/*"condTitle"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SCRIPT_COND_TITLE, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_23408/*"setLabel"*/;
  v25 = ServantCommentEntity_TypeInfo->static_fields;
  v25->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_23408/*"setLabel"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->SCRIPT_LABEL_TYPE, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_23037/*"readJudgeKey"*/;
  v33 = ServantCommentEntity_TypeInfo->static_fields;
  v33->SCRIPT_READ_JUDGE = (struct System_String_o *)StringLiteral_23037/*"readJudgeKey"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->SCRIPT_READ_JUDGE, v32, v34, v35, v36, v37, v38, v39);
}


void __fastcall ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B168B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B168B3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B168A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&id, *(_QWORD *)&priority);
    byte_4B168A1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantCommentEntity__CreatePrimaryKey(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4B168A0 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, method, v2);
    byte_4B168A0 = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
  return ServantCommentEntity__CreatePK(svtId, id, priority, v3);
}


System_String_o *__fastcall ServantCommentEntity__GetComment(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *comment; // x19

  if ( (byte_4B168AA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B168AA = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}


System_String_o *__fastcall ServantCommentEntity__GetCondTitle(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ServantCommentEntity_c *v7; // x0

  if ( (byte_4B168B1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B168B1 = 1;
  }
  v7 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v7 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptString(
           this,
           v7->static_fields->SCRIPT_COND_TITLE,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
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
  int32_t v8; // w21
  System_String_o *v10; // x20
  __int64 v11; // x8

  v8 = condValue;
  v10 = textType;
  if ( (byte_4B168A9 & 1) == 0 )
  {
    textType = (System_String_o *)sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condType, *(_QWORD *)&condValue);
    byte_4B168A9 = 1;
  }
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
        sub_1BCAA44(textType, *(_QWORD *)&condType);
      v8 = condValues->m_Items[1];
    }
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condType);
  if ( condType == 1 )
    return CondType__OpenConditionTextQuestPhaseClear(v8, condValue2, v10, 1, 0LL);
  else
    return CondType__OpenConditionText(condType, v8, v10, 0LL);
}


System_String_o *__fastcall ServantCommentEntity__GetConditiontext(
        ServantCommentEntity_o *this,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  int32_t condValue; // w22
  int32_t condType; // w23
  System_Int32_array *condValues; // x21
  int32_t condValue2; // w20

  if ( (byte_4B168A8 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, textType, method);
    byte_4B168A8 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condMessage, 0LL) )
    return this->fields.condMessage;
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  condValues = this->fields.condValues;
  condValue2 = this->fields.condValue2;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v5);
  return ServantCommentEntity__GetConditionText(textType, condType, condValue, condValues, condValue2, v6);
}


System_Int32_array *__fastcall ServantCommentEntity__GetImageLimit(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ServantCommentEntity_c *v5; // x0

  if ( (byte_4B168B0 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, method, v2);
    byte_4B168B0 = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v5 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptIntArray(this, v5->static_fields->SCRIPT_IMAGE_LIMIT, 0LL, v3);
}


int32_t __fastcall ServantCommentEntity__GetReadJudgeKey(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCommentEntity_c *v4; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_4B168B2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, method, v2);
    byte_4B168B2 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  script = this->fields.script;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v4 = ServantCommentEntity_TypeInfo;
  }
  return EntityScriptUtil__GetIntValue(script, v4->static_fields->SCRIPT_READ_JUDGE, -1, 0LL);
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
  if ( (byte_4B168AC & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, key, *(_QWORD *)&defVal);
    byte_4B168AC = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1BCACFC(ScriptObj);
  return ServantCommentEntity__IsProfileLabel(v11, v12);
}


System_Int32_array *__fastcall ServantCommentEntity__GetScriptIntArray(
        ServantCommentEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *ScriptString; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v23; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  ServantCommentEntity___c_c *v29; // x8
  System_Func_object__int__o *_9__30_0; // x20
  Il2CppObject *v31; // x21
  struct ServantCommentEntity___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4B168AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, key, defVal);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, v11, v12);
    sub_1BCA7E0(&ServantCommentEntity___c_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v19, v20);
    byte_4B168AF = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString
    || (IsNullOrEmpty = System_String__Replace_62420848(
                          ScriptString,
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (IsNullOrEmpty = System_String__Replace_62420848(
                          IsNullOrEmpty,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1BCAA3C(IsNullOrEmpty, v23);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
  v29 = ServantCommentEntity___c_TypeInfo;
  if ( !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo, v25);
    v29 = ServantCommentEntity___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__int__o *)v29->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29, v25);
      v29 = ServantCommentEntity___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__30_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v25, v26, v27);
    System_Func_object__int____ctor(_9__30_0, v31, Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, 0LL);
    static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_string__int__o *)_9__30_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__30_0,
      (int64_t)_9__30_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TResult__o *)_9__30_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v39,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *__fastcall ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B168AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B168AB = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4B168AD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, key, method);
    byte_4B168AD = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1BCACFC(result);
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
  if ( (byte_4B168AE & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, key, defVal);
    byte_4B168AE = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  sub_1BCACFC(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool __fastcall ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t condType; // w19

  if ( (byte_4B168A2 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B168A2 = 1;
  }
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsConst(condType, 0LL);
}


bool __fastcall ServantCommentEntity__IsDetailLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ServantCommentEntity_c *v5; // x0
  int32_t ScriptInt; // w0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ServantCommentEntity_c *v9; // x0

  if ( (byte_4B168A6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, method, v2);
    byte_4B168A6 = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v5 = ServantCommentEntity_TypeInfo;
  }
  ScriptInt = ServantCommentEntity__GetScriptInt(this, v5->static_fields->SCRIPT_LABEL_TYPE, 0, v3);
  if ( ScriptInt != 1 )
  {
    if ( this->fields.id != 1 )
      goto LABEL_10;
    v9 = ServantCommentEntity_TypeInfo;
    if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v7);
      v9 = ServantCommentEntity_TypeInfo;
    }
    if ( ServantCommentEntity__GetScriptInt(this, v9->static_fields->SCRIPT_LABEL_TYPE, 0, v8) != 2 )
      LOBYTE(ScriptInt) = 1;
    else
LABEL_10:
      LOBYTE(ScriptInt) = 0;
  }
  return ScriptInt;
}


bool __fastcall ServantCommentEntity__IsNew(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  int32_t svtId; // w19
  int32_t id; // w20
  int32_t priority; // w21
  int32_t JudgeKey; // w0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x23
  int32_t v14; // w22
  ServantCommentEntity_c *v15; // x8
  __int64 v16; // x1
  bool HasKey; // w23

  if ( (byte_4B168A5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v4, v5);
    byte_4B168A5 = 1;
  }
  if ( ServantCommentEntity__IsConst(this, method)
    || this->fields.id == 1
    || !ServantCommentEntity__IsOpen(this, -1, 1, v6) )
  {
    return 0;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  JudgeKey = ServantCommentEntity__GetReadJudgeKey(this, v7);
  script = this->fields.script;
  v14 = JudgeKey;
  v15 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v12);
    v15 = ServantCommentEntity_TypeInfo;
  }
  HasKey = EntityScriptUtil__ScriptHasKey(script, v15->static_fields->SCRIPT_IMAGE_LIMIT, 0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v16);
  return !ServantCommentManager__IsOpen(svtId, id, priority, v14, HasKey, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentEntity__IsOnlyOpenQuestCond(
        ServantCommentEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *condValues; // x8
  __int64 v10; // x9
  int v11; // w10
  __int64 v12; // x24
  unsigned __int64 v14; // x25
  int32_t v15; // w21
  int64_t UserId; // x0
  __int64 v17; // x1
  int32_t condValue2; // w22
  int64_t v19; // x23

  v6 = this;
  if ( (byte_4B168A4 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    this = (ServantCommentEntity_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B168A4 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v10 = *(_QWORD *)&condValues->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0;
      v12 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( condValues->m_Items[v11 + 1] != questId )
      {
        if ( (_DWORD)v10 == ++v11 )
          return 0;
      }
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= condValues->max_length )
          sub_1BCAA44(this, *(_QWORD *)&questId);
        v15 = condValues->m_Items[v14 + 1];
        if ( v15 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v19 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v19, v15, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v12 == ++v14 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1BCAA3C(this, *(_QWORD *)&questId);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *condValues; // x8
  unsigned __int64 v14; // x26
  __int64 v15; // x27
  int32_t condType; // w23
  int32_t v17; // w22
  int64_t UserId; // x0
  __int64 v19; // x1
  int32_t condValue2; // w23
  int64_t v21; // x24
  int64_t v22; // x0
  __int64 v23; // x1
  int32_t svtId; // w24
  int64_t v25; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v27; // w22
  int64_t v28; // x0
  __int64 v29; // x1
  int32_t condValue; // w22
  int32_t v31; // w23
  int64_t v32; // x24
  int32_t v33; // w23
  int64_t v34; // x0
  __int64 v35; // x1
  int32_t v36; // w24
  int64_t v37; // x25
  const MethodInfo *v38; // x5

  v6 = this;
  if ( (byte_4B168A3 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank, addCheck);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    this = (ServantCommentEntity_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B168A3 = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    if ( (int)*(_QWORD *)&condValues->max_length >= 1 )
    {
      v14 = 0LL;
      v15 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( 1 )
      {
        if ( v14 >= condValues->max_length )
          sub_1BCAA44(this, *(_QWORD *)&oldFriendShipRank);
        condType = v6->fields.condType;
        v17 = condValues->m_Items[v14 + 1];
        if ( condType == 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v21 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v21, v17, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_34;
        }
        else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          v22 = NetworkManager__get_UserId(0LL);
          svtId = v6->fields.svtId;
          v25 = v22;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v23);
          this = (ServantCommentEntity_o *)CondType__IsOpen_38348640(condType, v17, v25, svtId, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_34:
            IsQuestPhaseClear = 1;
            goto LABEL_44;
          }
        }
        else if ( v17 <= oldFriendShipRank )
        {
          goto LABEL_34;
        }
        if ( v15 == ++v14 )
          break;
        condValues = v6->fields.condValues;
        if ( !condValues )
          goto LABEL_25;
      }
    }
    return 0;
  }
  v27 = v6->fields.condType;
  if ( v27 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    v28 = NetworkManager__get_UserId(0LL);
    condValue = v6->fields.condValue;
    v31 = v6->fields.condValue2;
    v32 = v28;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v32, condValue, v31, -1, 0, 0LL);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v33 = v6->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v27 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      v34 = NetworkManager__get_UserId(0LL);
      v36 = v6->fields.svtId;
      v37 = v34;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v35);
      IsQuestPhaseClear = CondType__IsOpen_38348640(v27, v33, v37, v36, 0LL);
      if ( !IsQuestPhaseClear )
        return IsQuestPhaseClear;
    }
    else
    {
      IsQuestPhaseClear = v33 <= oldFriendShipRank;
      if ( v33 > oldFriendShipRank )
        return IsQuestPhaseClear;
    }
  }
LABEL_44:
  if ( !addCheck )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v38);
}


bool __fastcall ServantCommentEntity__IsProfileLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ServantCommentEntity_c *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  ServantCommentEntity_c *v9; // x0

  if ( (byte_4B168A7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, method, v2);
    byte_4B168A7 = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, method);
    v5 = ServantCommentEntity_TypeInfo;
  }
  if ( ServantCommentEntity__GetScriptInt(this, v5->static_fields->SCRIPT_LABEL_TYPE, 0, v3) == 2 )
    return 1;
  if ( this->fields.id < 2 )
    return 0;
  v9 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v6);
    v9 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptInt(this, v9->static_fields->SCRIPT_LABEL_TYPE, 0, v7) != 1;
}


void __fastcall ServantCommentEntity___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B168B5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentEntity___c_TypeInfo, v1, v2);
    byte_4B168B5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCommentEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantCommentEntity___c_TypeInfo->static_fields->__9 = (struct ServantCommentEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCommentEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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