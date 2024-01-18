void __fastcall ServantCommentEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct ServantCommentEntity_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4189EF1 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_17645/*"condTitle"*/, v8);
    sub_B2C35C(&StringLiteral_19414/*"imageLimit"*/, v9);
    byte_4189EF1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentEntity_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19414/*"imageLimit"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19414/*"imageLimit"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = ServantCommentEntity_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17645/*"condTitle"*/;
  v12->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_17645/*"condTitle"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->SCRIPT_COND_TITLE, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189EF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189EF0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4189EE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&id);
    byte_4189EE0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantCommentEntity__CreatePrimaryKey(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4189EDF & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentEntity_TypeInfo, method);
    byte_4189EDF = 1;
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

  if ( (byte_4189EE8 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4189EE8 = 1;
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
  __int64 v4; // x1
  ServantCommentEntity_c *v5; // x0

  if ( (byte_4189EEF & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentEntity_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189EEF = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
    v5 = ServantCommentEntity_TypeInfo;
  }
  return ServantCommentEntity__GetScriptString(
           this,
           v5->static_fields->SCRIPT_COND_TITLE,
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
  System_String_o *v10; // x19
  __int64 v11; // x8
  __int64 v13; // x0

  v10 = textType;
  if ( (byte_4189EE7 & 1) == 0 )
  {
    textType = (System_String_o *)sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condType);
    byte_4189EE7 = 1;
  }
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
      {
        v13 = sub_B2C460(textType);
        sub_B2C400(v13, 0LL);
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

  if ( (byte_4189EE6 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentEntity_TypeInfo, textType);
    byte_4189EE6 = 1;
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

  if ( (byte_4189EEE & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentEntity_TypeInfo, method);
    byte_4189EEE = 1;
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
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  if ( (byte_4189EEA & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_4189EEA = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B2C728(ScriptObj);
  return (unsigned int)ServantCommentEntity__GetScriptObjList(v9, v10, v11);
}


System_Int32_array *__fastcall ServantCommentEntity__GetScriptIntArray(
        ServantCommentEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *ScriptString; // x20
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v18; // x1
  System_String_o *v20; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  ServantCommentEntity___c_c *v22; // x8
  struct ServantCommentEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__26_0; // x20
  Il2CppObject *v25; // x21
  struct ServantCommentEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x0

  if ( (byte_4189EED & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, key);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v9);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v10);
    sub_B2C35C(&Method_ServantCommentEntity___c__GetScriptIntArray_b__26_0__, v11);
    sub_B2C35C(&ServantCommentEntity___c_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v15);
    byte_4189EED = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString )
    goto LABEL_19;
  IsNullOrEmpty = System_String__Replace_44312768(
                    ScriptString,
                    (System_String_o *)StringLiteral_15634/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v20 = System_String__Replace_44312768(
          IsNullOrEmpty,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  IsNullOrEmpty = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v18 = IsNullOrEmpty;
  if ( !LODWORD(IsNullOrEmpty[1].klass) )
  {
    v34 = sub_B2C460(IsNullOrEmpty);
    sub_B2C400(v34, 0LL);
  }
  LOWORD(IsNullOrEmpty[1].monitor) = 44;
  if ( !v20 )
LABEL_19:
    sub_B2C434(IsNullOrEmpty, v18);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               v20,
                                                               (System_Char_array *)IsNullOrEmpty,
                                                               0LL);
  v22 = ServantCommentEntity___c_TypeInfo;
  if ( (BYTE3(ServantCommentEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo);
    v22 = ServantCommentEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__26_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__26_0,
      v25,
      Method_ServantCommentEntity___c__GetScriptIntArray_b__26_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
    v26 = ServantCommentEntity___c_TypeInfo->static_fields;
    v26->__9__26_0 = (struct System_Func_string__int__o *)_9__26_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v21,
                                                               (System_Func_TSource__TResult__o *)_9__26_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v33,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *__fastcall ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189EE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4189EE9 = 1;
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
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4189EEB & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4189EEB = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B2C728(result);
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
  if ( (byte_4189EEC & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, key);
    byte_4189EEC = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  sub_B2C728(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool __fastcall ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_4189EE1 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_4189EE1 = 1;
  }
  condType = this->fields.condType;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsConst(condType, 0LL);
}


bool __fastcall ServantCommentEntity__IsNew(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4189EE5 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, method);
    byte_4189EE5 = 1;
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
  __int64 v7; // x1
  struct System_Int32_array *condValues; // x8
  __int64 v9; // x9
  __int64 v10; // x10
  unsigned __int64 v12; // x24
  signed __int64 v13; // x25
  int32_t v14; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v17; // x23
  __int64 v18; // x0

  v6 = this;
  if ( (byte_4189EE3 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&questId);
    this = (ServantCommentEntity_o *)sub_B2C35C(&NetworkManager_TypeInfo, v7);
    byte_4189EE3 = 1;
  }
  if ( v6->fields.condType == 1 && v6->fields.condValue2 == questPhase )
  {
    condValues = v6->fields.condValues;
    if ( !condValues )
      return v6->fields.condValue == questId;
    v9 = *(_QWORD *)&condValues->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 8LL;
      while ( *((_DWORD *)&condValues->obj.klass + v10) != questId )
      {
        if ( (int)++v10 - 8 >= (int)v9 )
          return 0;
      }
      v12 = 0LL;
      v13 = (int)v9;
      while ( 1 )
      {
        if ( v12 >= condValues->max_length )
        {
          v18 = sub_B2C460(this);
          sub_B2C400(v18, 0LL);
        }
        v14 = condValues->m_Items[v12 + 1];
        if ( v14 != questId )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v17 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v17, v14, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( (__int64)++v12 >= v13 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_B2C434(this, *(_QWORD *)&questId);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int32_array *condValues; // x8
  __int64 v11; // x9
  unsigned __int64 v12; // x26
  signed __int64 v13; // x27
  int32_t condType; // w23
  int32_t v15; // w22
  int64_t UserId; // x0
  int32_t condValue2; // w23
  int64_t v18; // x24
  int64_t v19; // x0
  int32_t svtId; // w24
  int64_t v21; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v23; // w22
  int64_t v24; // x0
  int32_t condValue; // w22
  int32_t v26; // w23
  int64_t v27; // x24
  const MethodInfo *v28; // x5
  int32_t v30; // w23
  int64_t v31; // x0
  int32_t v32; // w24
  int64_t v33; // x25
  __int64 v34; // x0
  bool v35; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_4189EE2 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    this = (ServantCommentEntity_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4189EE2 = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( (int)v11 >= 1 )
    {
      v35 = addCheck;
      v12 = 0LL;
      v13 = (int)v11;
      while ( 1 )
      {
        if ( v12 >= condValues->max_length )
        {
          v34 = sub_B2C460(this);
          sub_B2C400(v34, 0LL);
        }
        condType = v6->fields.condType;
        v15 = condValues->m_Items[v12 + 1];
        if ( condType == 1 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v18 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v18, v15, condValue2, -1, 0, 0LL);
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
          v19 = NetworkManager__get_UserId(0LL);
          svtId = v6->fields.svtId;
          v21 = v19;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsOpen_25785312(condType, v15, v21, svtId, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_43:
            addCheck = v35;
            IsQuestPhaseClear = 1;
            goto LABEL_39;
          }
        }
        else if ( v15 <= oldFriendShipRank )
        {
          goto LABEL_43;
        }
        if ( (__int64)++v12 >= v13 )
          break;
        condValues = v6->fields.condValues;
        if ( !condValues )
          goto LABEL_29;
      }
    }
    return 0;
  }
  v23 = v6->fields.condType;
  if ( v23 == 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v24 = NetworkManager__get_UserId(0LL);
    condValue = v6->fields.condValue;
    v26 = v6->fields.condValue2;
    v27 = v24;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v27, condValue, v26, -1, 0, 0LL);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v30 = v6->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v23 != 9 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v31 = NetworkManager__get_UserId(0LL);
      v32 = v6->fields.svtId;
      v33 = v31;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsOpen_25785312(v23, v30, v33, v32, 0LL);
      if ( !IsQuestPhaseClear )
        return IsQuestPhaseClear;
    }
    else
    {
      IsQuestPhaseClear = v30 <= oldFriendShipRank;
      if ( v30 > oldFriendShipRank )
        return IsQuestPhaseClear;
    }
  }
LABEL_39:
  if ( !addCheck )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0LL )
  {
LABEL_29:
    sub_B2C434(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v28);
}


void __fastcall ServantCommentEntity__SetOpen(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_4189EE4 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, method);
    byte_4189EE4 = 1;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantCommentEntity___c_StaticFields *static_fields; // x0

  if ( (byte_41853D4 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentEntity___c_TypeInfo, v1);
    byte_41853D4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCommentEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantCommentEntity___c___ctor(ServantCommentEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCommentEntity___c___GetScriptIntArray_b__26_0(
        ServantCommentEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}