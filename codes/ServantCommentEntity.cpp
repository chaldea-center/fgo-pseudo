void __fastcall ServantCommentEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct ServantCommentEntity_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ServantCommentEntity_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E9D07 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17864/*"condTitle"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22319/*"setLabel"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19659/*"imageLimit"*/, v14, v15, v16);
    byte_42E9D07 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19659/*"imageLimit"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19659/*"imageLimit"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = ServantCommentEntity_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_17864/*"condTitle"*/;
  v19->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_17864/*"condTitle"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->SCRIPT_COND_TITLE, v20, v21, v22, v23, v24, v25, v26);
  v27 = ServantCommentEntity_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_22319/*"setLabel"*/;
  v27->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_22319/*"setLabel"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->SCRIPT_LABEL_TYPE, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9D06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9D06 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCommentEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42E9CF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, id, priority, method);
    byte_42E9CF4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantCommentEntity__CreatePrimaryKey(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_42E9CF3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CF3 = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  }
  return ServantCommentEntity__CreatePK(svtId, id, priority, v3);
}


System_String_o *__fastcall ServantCommentEntity__GetComment(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *comment; // x19

  if ( (byte_42E9CFE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CFE = 1;
  }
  comment = this->fields.comment;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}


System_String_o *__fastcall ServantCommentEntity__GetCondTitle(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantCommentEntity_c *v8; // x0

  if ( (byte_42E9D05 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E9D05 = 1;
  }
  v8 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v8 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptString(
           this,
           v8->static_fields->SCRIPT_COND_TITLE,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall ServantCommentEntity__GetConditionText(
        System_String_o *textType,
        int32_t condType,
        int32_t condValue,
        System_Int32_array *condValues,
        int32_t condValue2,
        const MethodInfo *method)
{
  int32_t v8; // w20
  System_String_o *v10; // x19
  __int64 v11; // x8
  __int64 v13; // x0

  v8 = condValue;
  v10 = textType;
  if ( (byte_42E9CFD & 1) == 0 )
  {
    textType = (System_String_o *)sub_B5D5C4(&CondType_TypeInfo, condType, condValue, condValues);
    byte_42E9CFD = 1;
  }
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
      {
        v13 = sub_B5D6C8(textType);
        sub_B5D668(v13, 0LL);
      }
      v8 = condValues->m_Items[1];
    }
  }
  if ( condType == 1 )
  {
    if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__OpenConditionTextQuestPhaseClear(v8, condValue2, v10, 1, 0LL);
  }
  else
  {
    if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__OpenConditionText(condType, v8, v10, 0LL);
  }
}


System_String_o *__fastcall ServantCommentEntity__GetConditiontext(
        ServantCommentEntity_o *this,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x5
  int32_t condValue; // w22
  int32_t condType; // w23
  System_Int32_array *condValues; // x21
  int32_t condValue2; // w20

  if ( (byte_42E9CFC & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, (_DWORD)textType, (_DWORD)method, v3);
    byte_42E9CFC = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condMessage, 0LL) )
    return this->fields.condMessage;
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  condValues = this->fields.condValues;
  condValue2 = this->fields.condValue2;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  }
  return ServantCommentEntity__GetConditionText(textType, condType, condValue, condValues, condValue2, v6);
}


System_Int32_array *__fastcall ServantCommentEntity__GetImageLimit(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  ServantCommentEntity_c *v5; // x0

  if ( (byte_42E9D04 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9D04 = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v5 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptIntArray(this, v5->static_fields->SCRIPT_IMAGE_LIMIT, 0LL, v3);
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
  ServantCommentEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  v4 = defVal;
  if ( (byte_42E9D00 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42E9D00 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (ServantCommentEntity_o *)sub_B5D990(ScriptObj);
  return ServantCommentEntity__IsProfileLabel(v9, v10);
}


System_Int32_array *__fastcall ServantCommentEntity__GetScriptIntArray(
        ServantCommentEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_String_o *ScriptString; // x20
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v36; // x1
  System_String_o *v38; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  ServantCommentEntity___c_c *v40; // x8
  struct ServantCommentEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__30_0; // x20
  Il2CppObject *v43; // x21
  struct ServantCommentEntity___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  __int64 v52; // x0

  if ( (byte_42E9D03 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, v19, v20, v21);
    sub_B5D5C4(&ServantCommentEntity___c_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v31, v32, v33);
    byte_42E9D03 = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString )
    goto LABEL_19;
  IsNullOrEmpty = System_String__Replace_44585024(
                    ScriptString,
                    (System_String_o *)StringLiteral_15824/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v38 = System_String__Replace_44585024(
          IsNullOrEmpty,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  IsNullOrEmpty = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v36 = IsNullOrEmpty;
  if ( !LODWORD(IsNullOrEmpty[1].klass) )
  {
    v52 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v52, 0LL);
  }
  LOWORD(IsNullOrEmpty[1].monitor) = 44;
  if ( !v38 )
LABEL_19:
    sub_B5D69C(IsNullOrEmpty, v36);
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               v38,
                                                               (System_Char_array *)IsNullOrEmpty,
                                                               0LL);
  v40 = ServantCommentEntity___c_TypeInfo;
  if ( (BYTE3(ServantCommentEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo);
    v40 = ServantCommentEntity___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__30_0,
      v43,
      Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
    v44 = ServantCommentEntity___c_TypeInfo->static_fields;
    v44->__9__30_0 = (struct System_Func_string__int__o *)_9__30_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__30_0,
      (System_Int32_array **)_9__30_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v39,
                                                               (System_Func_TSource__TResult__o *)_9__30_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v51,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *__fastcall ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9CFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42E9CFF = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
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
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v7; // x9
  ServantCommentEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_String_o *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_42E9D01 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    byte_42E9D01 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      v8 = (ServantCommentEntity_o *)sub_B5D990(result);
      return (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptString(v8, v9, v10, v11);
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
  if ( (byte_42E9D02 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)key, (_DWORD)defVal, method);
    byte_42E9D02 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  v9 = (ServantCommentEntity_o *)sub_B5D990(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool __fastcall ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t condType; // w19

  if ( (byte_42E9CF5 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CF5 = 1;
  }
  condType = this->fields.condType;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsConst(condType, 0LL);
}


bool __fastcall ServantCommentEntity__IsDetailLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  ServantCommentEntity_c *v5; // x0
  int32_t ScriptInt; // w0
  const MethodInfo *v7; // x3
  ServantCommentEntity_c *v8; // x0

  if ( (byte_42E9CFA & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CFA = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v5 = ServantCommentEntity_TypeInfo;
  }
  ScriptInt = ServantCommentEntity__GetScriptInt(this, v5->static_fields->SCRIPT_LABEL_TYPE, 0, v3);
  if ( ScriptInt != 1 )
  {
    if ( this->fields.id != 1 )
      goto LABEL_12;
    v8 = ServantCommentEntity_TypeInfo;
    if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
      v8 = ServantCommentEntity_TypeInfo;
    }
    if ( ServantCommentEntity__GetScriptInt(this, v8->static_fields->SCRIPT_LABEL_TYPE, 0, v7) != 2 )
      LOBYTE(ScriptInt) = 1;
    else
LABEL_12:
      LOBYTE(ScriptInt) = 0;
  }
  return ScriptInt;
}


bool __fastcall ServantCommentEntity__IsNew(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_42E9CF9 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CF9 = 1;
  }
  if ( ServantCommentEntity__IsConst(this, method)
    || this->fields.id == 1
    || !ServantCommentEntity__IsOpen(this, -1, 1, v5) )
  {
    return 0;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return !ServantCommentManager__IsOpen(svtId, id, priority, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentEntity__IsOnlyOpenQuestCond(
        ServantCommentEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentEntity_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Int32_array *condValues; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  unsigned __int64 v14; // x24
  signed __int64 v15; // x25
  int32_t v16; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v19; // x23
  __int64 v20; // x0

  v6 = this;
  if ( (byte_42E9CF7 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, questId, questPhase, method);
    this = (ServantCommentEntity_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E9CF7 = 1;
  }
  if ( v6->fields.condType == 1 && v6->fields.condValue2 == questPhase )
  {
    condValues = v6->fields.condValues;
    if ( !condValues )
      return v6->fields.condValue == questId;
    v11 = *(_QWORD *)&condValues->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 8LL;
      while ( *((_DWORD *)&condValues->obj.klass + v12) != questId )
      {
        if ( (int)++v12 - 8 >= (int)v11 )
          return 0;
      }
      v14 = 0LL;
      v15 = (int)v11;
      while ( 1 )
      {
        if ( v14 >= condValues->max_length )
        {
          v20 = sub_B5D6C8(this);
          sub_B5D668(v20, 0LL);
        }
        v16 = condValues->m_Items[v14 + 1];
        if ( v16 != questId )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v19 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v19, v16, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( (__int64)++v14 >= v15 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_B5D69C(this, *(_QWORD *)&questId);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentEntity__IsOpen(
        ServantCommentEntity_o *this,
        int32_t oldFriendShipRank,
        bool addCheck,
        const MethodInfo *method)
{
  bool v4; // w26
  ServantCommentEntity_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Int32_array *condValues; // x8
  __int64 v17; // x9
  unsigned __int64 v18; // x26
  signed __int64 v19; // x27
  int32_t condType; // w23
  int32_t v21; // w22
  int64_t UserId; // x0
  int32_t condValue2; // w23
  int64_t v24; // x24
  int64_t v25; // x0
  int32_t svtId; // w24
  int64_t v27; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v29; // w22
  int64_t v30; // x0
  int32_t condValue; // w22
  int32_t v32; // w23
  int64_t v33; // x24
  const MethodInfo *v34; // x5
  int32_t v36; // w23
  int64_t v37; // x0
  int32_t v38; // w24
  int64_t v39; // x25
  __int64 v40; // x0
  bool v41; // [xsp+Ch] [xbp-54h]

  v4 = addCheck;
  v6 = this;
  if ( (byte_42E9CF6 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, oldFriendShipRank, addCheck, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    this = (ServantCommentEntity_o *)sub_B5D5C4(
                                       &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                       v13,
                                       v14,
                                       v15);
    byte_42E9CF6 = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v17 = *(_QWORD *)&condValues->max_length;
    if ( (int)v17 >= 1 )
    {
      v41 = v4;
      v18 = 0LL;
      v19 = (int)v17;
      while ( 1 )
      {
        if ( v18 >= condValues->max_length )
        {
          v40 = sub_B5D6C8(this);
          sub_B5D668(v40, 0LL);
        }
        condType = v6->fields.condType;
        v21 = condValues->m_Items[v18 + 1];
        if ( condType == 1 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v24 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v24, v21, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_43;
        }
        else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v25 = NetworkManager__get_UserId(0LL);
          svtId = v6->fields.svtId;
          v27 = v25;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsOpen_25916820(condType, v21, v27, svtId, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_43:
            v4 = v41;
            IsQuestPhaseClear = 1;
            goto LABEL_39;
          }
        }
        else if ( v21 <= oldFriendShipRank )
        {
          goto LABEL_43;
        }
        if ( (__int64)++v18 >= v19 )
          break;
        condValues = v6->fields.condValues;
        if ( !condValues )
          goto LABEL_29;
      }
    }
    return 0;
  }
  v29 = v6->fields.condType;
  if ( v29 == 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v30 = NetworkManager__get_UserId(0LL);
    condValue = v6->fields.condValue;
    v32 = v6->fields.condValue2;
    v33 = v30;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v33, condValue, v32, -1, 0, 0LL);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v36 = v6->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v29 != 9 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v37 = NetworkManager__get_UserId(0LL);
      v38 = v6->fields.svtId;
      v39 = v37;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsOpen_25916820(v29, v36, v39, v38, 0LL);
      if ( !IsQuestPhaseClear )
        return IsQuestPhaseClear;
    }
    else
    {
      IsQuestPhaseClear = v36 <= oldFriendShipRank;
      if ( v36 > oldFriendShipRank )
        return IsQuestPhaseClear;
    }
  }
LABEL_39:
  if ( !v4 )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0LL )
  {
LABEL_29:
    sub_B5D69C(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v34);
}


bool __fastcall ServantCommentEntity__IsProfileLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  ServantCommentEntity_c *v5; // x0
  const MethodInfo *v6; // x3
  ServantCommentEntity_c *v8; // x0

  if ( (byte_42E9CFB & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CFB = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v5 = ServantCommentEntity_TypeInfo;
  }
  if ( ServantCommentEntity__GetScriptInt(this, v5->static_fields->SCRIPT_LABEL_TYPE, 0, v3) == 2 )
    return 1;
  if ( this->fields.id < 2 )
    return 0;
  v8 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v8 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptInt(this, v8->static_fields->SCRIPT_LABEL_TYPE, 0, v6) != 1;
}


void __fastcall ServantCommentEntity__SetOpen(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_42E9CF8 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CF8 = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, id, priority, v3);
}


void __fastcall ServantCommentEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantCommentEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D44 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5D44 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCommentEntity___c_o *)v4;
  sub_B5D560(static_fields);
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