void __fastcall ServantCommentEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ServantCommentEntity_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantCommentEntity_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4352FF7 & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity_TypeInfo);
    sub_B70694(&StringLiteral_17911/*"condTitle"*/);
    sub_B70694(&StringLiteral_22387/*"setLabel"*/);
    sub_B70694(&StringLiteral_19718/*"imageLimit"*/);
    byte_4352FF7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19718/*"imageLimit"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19718/*"imageLimit"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantCommentEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17911/*"condTitle"*/;
  v9->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_17911/*"condTitle"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->SCRIPT_COND_TITLE, v10, v11, v12, v13, v14, v15, v16);
  v17 = ServantCommentEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_22387/*"setLabel"*/;
  v17->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_22387/*"setLabel"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->SCRIPT_LABEL_TYPE, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4352FF6 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4352FF6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCommentEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4352FE4 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4352FE4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_1CA2794 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantCommentEntity__CreatePrimaryKey(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4352FE3 & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity_TypeInfo);
    byte_4352FE3 = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  }
  return ServantCommentEntity__CreatePK(svtId, id, priority, v2);
}


System_String_o *__fastcall ServantCommentEntity__GetComment(ServantCommentEntity_o *this, const MethodInfo *method)
{
  System_String_o *comment; // x19

  if ( (byte_4352FEE & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_4352FEE = 1;
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
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_4352FF5 & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352FF5 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
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


System_String_o *__fastcall ServantCommentEntity__GetConditionText(
        System_String_o *textType,
        int32_t condType,
        int32_t condValue,
        System_Int32_array *condValues,
        int32_t condValue2,
        const MethodInfo *method)
{
  System_String_o *v10; // x19
  __int64 v11; // x8
  __int64 v13; // x0

  v10 = textType;
  if ( (byte_4352FED & 1) == 0 )
  {
    textType = (System_String_o *)sub_B70694(&CondType_TypeInfo);
    byte_4352FED = 1;
  }
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
      {
        v13 = sub_B70798(textType);
        sub_B70738(v13, 0LL);
      }
      condValue = condValues->m_Items[1];
    }
  }
  if ( condType == 1 )
  {
    if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__OpenConditionTextQuestPhaseClear(condValue, condValue2, v10, 1, 0LL);
  }
  else
  {
    if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__OpenConditionText(condType, condValue, v10, 0LL);
  }
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

  if ( (byte_4352FEC & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity_TypeInfo);
    byte_4352FEC = 1;
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
  return ServantCommentEntity__GetConditionText(textType, condType, condValue, condValues, condValue2, v5);
}


System_Int32_array *__fastcall ServantCommentEntity__GetImageLimit(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0

  if ( (byte_4352FF4 & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity_TypeInfo);
    byte_4352FF4 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptIntArray(this, v4->static_fields->SCRIPT_IMAGE_LIMIT, 0LL, v2);
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
  if ( (byte_4352FF0 & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    byte_4352FF0 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (ServantCommentEntity_o *)sub_B70A60(ScriptObj);
  return ServantCommentEntity__IsProfileLabel(v9, v10);
}


System_Int32_array *__fastcall ServantCommentEntity__GetScriptIntArray(
        ServantCommentEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_String_o *ScriptString; // x20
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v9; // x1
  System_String_o *v11; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  ServantCommentEntity___c_c *v13; // x8
  struct ServantCommentEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__30_0; // x20
  Il2CppObject *v16; // x21
  struct ServantCommentEntity___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x0

  if ( (byte_4352FF3 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_string__int___ctor__);
    sub_B70694(&System_Func_string__int__TypeInfo);
    sub_B70694(&Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__);
    sub_B70694(&ServantCommentEntity___c_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_4352FF3 = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString )
    goto LABEL_19;
  IsNullOrEmpty = System_String__Replace_44765404(
                    ScriptString,
                    (System_String_o *)StringLiteral_15855/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v11 = System_String__Replace_44765404(
          IsNullOrEmpty,
          (System_String_o *)StringLiteral_16092/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  IsNullOrEmpty = (System_String_o *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v9 = IsNullOrEmpty;
  if ( !LODWORD(IsNullOrEmpty[1].klass) )
  {
    v25 = sub_B70798(IsNullOrEmpty);
    sub_B70738(v25, 0LL);
  }
  LOWORD(IsNullOrEmpty[1].monitor) = 44;
  if ( !v11 )
LABEL_19:
    sub_B7076C(IsNullOrEmpty, v9);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               v11,
                                                               (System_Char_array *)IsNullOrEmpty,
                                                               0LL);
  v13 = ServantCommentEntity___c_TypeInfo;
  if ( (BYTE3(ServantCommentEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo);
    v13 = ServantCommentEntity___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__30_0,
      v16,
      Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_string__int___ctor__);
    v17 = ServantCommentEntity___c_TypeInfo->static_fields;
    v17->__9__30_0 = (struct System_Func_string__int__o *)_9__30_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__30_0,
      (System_Int32_array **)_9__30_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__30_0,
                                                               (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *__fastcall ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4352FEF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4352FEF = 1;
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
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x9
  ServantCommentEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_String_o *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4352FF1 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    byte_4352FF1 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      v7 = (ServantCommentEntity_o *)sub_B70A60(result);
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
  if ( (byte_4352FF2 & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_4352FF2 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  v9 = (ServantCommentEntity_o *)sub_B70A60(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool __fastcall ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_4352FE5 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4352FE5 = 1;
  }
  condType = this->fields.condType;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4352FEA & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity_TypeInfo);
    byte_4352FEA = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  ScriptInt = ServantCommentEntity__GetScriptInt(this, v4->static_fields->SCRIPT_LABEL_TYPE, 0, v2);
  if ( ScriptInt != 1 )
  {
    if ( this->fields.id != 1 )
      goto LABEL_12;
    v7 = ServantCommentEntity_TypeInfo;
    if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
      v7 = ServantCommentEntity_TypeInfo;
    }
    if ( ServantCommentEntity__GetScriptInt(this, v7->static_fields->SCRIPT_LABEL_TYPE, 0, v6) != 2 )
      LOBYTE(ScriptInt) = 1;
    else
LABEL_12:
      LOBYTE(ScriptInt) = 0;
  }
  return ScriptInt;
}


bool __fastcall ServantCommentEntity__IsNew(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4352FE9 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4352FE9 = 1;
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
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return !ServantCommentManager__IsOpen(svtId, id, priority, v4);
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
  __int64 v9; // x10
  unsigned __int64 v11; // x24
  signed __int64 v12; // x25
  int32_t v13; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v16; // x23
  __int64 v17; // x0

  v6 = this;
  if ( (byte_4352FE7 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    this = (ServantCommentEntity_o *)sub_B70694(&NetworkManager_TypeInfo);
    byte_4352FE7 = 1;
  }
  if ( v6->fields.condType == 1 && v6->fields.condValue2 == questPhase )
  {
    condValues = v6->fields.condValues;
    if ( !condValues )
      return v6->fields.condValue == questId;
    v8 = *(_QWORD *)&condValues->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 8LL;
      while ( *((_DWORD *)&condValues->obj.klass + v9) != questId )
      {
        if ( (int)++v9 - 8 >= (int)v8 )
          return 0;
      }
      v11 = 0LL;
      v12 = (int)v8;
      while ( 1 )
      {
        if ( v11 >= condValues->max_length )
        {
          v17 = sub_B70798(this);
          sub_B70738(v17, 0LL);
        }
        v13 = condValues->m_Items[v11 + 1];
        if ( v13 != questId )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v16 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v16, v13, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( (__int64)++v11 >= v12 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_B7076C(this, *(_QWORD *)&questId);
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
  ServantCommentEntity_o *v6; // x20
  struct System_Int32_array *condValues; // x8
  __int64 v8; // x9
  unsigned __int64 v9; // x26
  signed __int64 v10; // x27
  int32_t condType; // w23
  int32_t v12; // w22
  int64_t UserId; // x0
  int32_t condValue2; // w23
  int64_t v15; // x24
  int64_t v16; // x0
  int32_t svtId; // w24
  int64_t v18; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v20; // w22
  int64_t v21; // x0
  int32_t condValue; // w22
  int32_t v23; // w23
  int64_t v24; // x24
  const MethodInfo *v25; // x5
  int32_t v27; // w23
  int64_t v28; // x0
  int32_t v29; // w24
  int64_t v30; // x25
  __int64 v31; // x0
  bool v32; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_4352FE6 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    this = (ServantCommentEntity_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352FE6 = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v8 = *(_QWORD *)&condValues->max_length;
    if ( (int)v8 >= 1 )
    {
      v32 = addCheck;
      v9 = 0LL;
      v10 = (int)v8;
      while ( 1 )
      {
        if ( v9 >= condValues->max_length )
        {
          v31 = sub_B70798(this);
          sub_B70738(v31, 0LL);
        }
        condType = v6->fields.condType;
        v12 = condValues->m_Items[v9 + 1];
        if ( condType == 1 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v15 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v15, v12, condValue2, -1, 0, 0LL);
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
          v16 = NetworkManager__get_UserId(0LL);
          svtId = v6->fields.svtId;
          v18 = v16;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsOpen_24337312(condType, v12, v18, svtId, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_43:
            addCheck = v32;
            IsQuestPhaseClear = 1;
            goto LABEL_39;
          }
        }
        else if ( v12 <= oldFriendShipRank )
        {
          goto LABEL_43;
        }
        if ( (__int64)++v9 >= v10 )
          break;
        condValues = v6->fields.condValues;
        if ( !condValues )
          goto LABEL_29;
      }
    }
    return 0;
  }
  v20 = v6->fields.condType;
  if ( v20 == 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v21 = NetworkManager__get_UserId(0LL);
    condValue = v6->fields.condValue;
    v23 = v6->fields.condValue2;
    v24 = v21;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v24, condValue, v23, -1, 0, 0LL);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v27 = v6->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v20 != 9 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v28 = NetworkManager__get_UserId(0LL);
      v29 = v6->fields.svtId;
      v30 = v28;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsOpen_24337312(v20, v27, v30, v29, 0LL);
      if ( !IsQuestPhaseClear )
        return IsQuestPhaseClear;
    }
    else
    {
      IsQuestPhaseClear = v27 <= oldFriendShipRank;
      if ( v27 > oldFriendShipRank )
        return IsQuestPhaseClear;
    }
  }
LABEL_39:
  if ( !addCheck )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0LL )
  {
LABEL_29:
    sub_B7076C(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v25);
}


bool __fastcall ServantCommentEntity__IsProfileLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  const MethodInfo *v5; // x3
  ServantCommentEntity_c *v7; // x0

  if ( (byte_4352FEB & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity_TypeInfo);
    byte_4352FEB = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v4 = ServantCommentEntity_TypeInfo;
  }
  if ( ServantCommentEntity__GetScriptInt(this, v4->static_fields->SCRIPT_LABEL_TYPE, 0, v2) == 2 )
    return 1;
  if ( this->fields.id < 2 )
    return 0;
  v7 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v7 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptInt(this, v7->static_fields->SCRIPT_LABEL_TYPE, 0, v5) != 1;
}


void __fastcall ServantCommentEntity__SetOpen(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4352FE8 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4352FE8 = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, id, priority, v2);
}


void __fastcall ServantCommentEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantCommentEntity___c_StaticFields *static_fields; // x0

  if ( (byte_434F223 & 1) == 0 )
  {
    sub_B70694(&ServantCommentEntity___c_TypeInfo);
    byte_434F223 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCommentEntity___c_o *)v1;
  sub_B70630(static_fields);
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