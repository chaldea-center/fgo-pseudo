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

  if ( (byte_40FCE8A & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_17578/*"condTitle"*/, v8);
    sub_B16FFC(&StringLiteral_19340/*"imageLimit"*/, v9);
    byte_40FCE8A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentEntity_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19340/*"imageLimit"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19340/*"imageLimit"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = ServantCommentEntity_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17578/*"condTitle"*/;
  v12->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_17578/*"condTitle"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->SCRIPT_COND_TITLE, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FCE89 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FCE89 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_40FCE79 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&id);
    byte_40FCE79 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantCommentEntity__CreatePrimaryKey(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_40FCE78 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentEntity_TypeInfo, method);
    byte_40FCE78 = 1;
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

  if ( (byte_40FCE81 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FCE81 = 1;
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

  if ( (byte_40FCE88 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentEntity_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FCE88 = 1;
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
  int32_t v8; // w20
  System_String_o *v10; // x19
  __int64 v11; // x8

  v8 = condValue;
  v10 = textType;
  if ( (byte_40FCE80 & 1) == 0 )
  {
    textType = (System_String_o *)sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condType);
    byte_40FCE80 = 1;
  }
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
      {
        sub_B17100(textType, *(_QWORD *)&condType, *(_QWORD *)&condValue);
        sub_B170A0();
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
  const MethodInfo *v5; // x5
  int32_t condValue; // w22
  int32_t condType; // w23
  System_Int32_array *condValues; // x21
  int32_t condValue2; // w20

  if ( (byte_40FCE7F & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentEntity_TypeInfo, textType);
    byte_40FCE7F = 1;
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

  if ( (byte_40FCE87 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentEntity_TypeInfo, method);
    byte_40FCE87 = 1;
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
  if ( (byte_40FCE83 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40FCE83 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B173C8(ScriptObj);
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
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x2
  System_Char_array *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  ServantCommentEntity___c_c *v28; // x8
  struct ServantCommentEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__26_0; // x20
  Il2CppObject *v31; // x21
  struct ServantCommentEntity___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_40FCE86 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, key);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v9);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v10);
    sub_B16FFC(&Method_ServantCommentEntity___c__GetScriptIntArray_b__26_0__, v11);
    sub_B16FFC(&ServantCommentEntity___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v15);
    byte_40FCE86 = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  if ( System_String__IsNullOrEmpty(ScriptString, 0LL) )
    return defVal;
  if ( !ScriptString )
    goto LABEL_19;
  v18 = System_String__Replace_43750968(
          ScriptString,
          (System_String_o *)StringLiteral_15571/*"["*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v18 )
    goto LABEL_19;
  v19 = System_String__Replace_43750968(
          v18,
          (System_String_o *)StringLiteral_15807/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v21 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v20);
  if ( !v21 )
    goto LABEL_19;
  if ( !v21->max_length )
  {
    sub_B17100(v21, v21, v22);
    sub_B170A0();
  }
  v21->m_Items[2] = 44;
  if ( !v19 )
LABEL_19:
    sub_B170D4();
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v19, v21, 0LL);
  v28 = ServantCommentEntity___c_TypeInfo;
  if ( (BYTE3(ServantCommentEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo);
    v28 = ServantCommentEntity___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__26_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_string__int__TypeInfo,
                                                                                 v23,
                                                                                 v24,
                                                                                 v25,
                                                                                 v26);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__26_0,
      v31,
      Method_ServantCommentEntity___c__GetScriptIntArray_b__26_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
    v32 = ServantCommentEntity___c_TypeInfo->static_fields;
    v32->__9__26_0 = (struct System_Func_string__int__o *)_9__26_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v27,
                                                               (System_Func_TSource__TResult__o *)_9__26_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v39,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *__fastcall ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCE82 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FCE82 = 1;
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
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_40FCE84 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_40FCE84 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B173C8(result);
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
  if ( (byte_40FCE85 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, key);
    byte_40FCE85 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  sub_B173C8(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool __fastcall ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_40FCE7A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FCE7A = 1;
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

  if ( (byte_40FCE7E & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, method);
    byte_40FCE7E = 1;
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

  v6 = this;
  if ( (byte_40FCE7C & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&questId);
    this = (ServantCommentEntity_o *)sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FCE7C = 1;
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
          sub_B17100(this, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
          sub_B170A0();
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
          sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v30; // x5
  int32_t v32; // w23
  int64_t v33; // x0
  int32_t v34; // w24
  int64_t v35; // x25
  bool v36; // [xsp+Ch] [xbp-54h]

  v4 = addCheck;
  v6 = this;
  if ( (byte_40FCE7B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    this = (ServantCommentEntity_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FCE7B = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( (int)v11 >= 1 )
    {
      v36 = v4;
      v12 = 0LL;
      v13 = (int)v11;
      while ( 1 )
      {
        if ( v12 >= condValues->max_length )
        {
          sub_B17100(this, *(_QWORD *)&oldFriendShipRank, addCheck);
          sub_B170A0();
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
          this = (ServantCommentEntity_o *)CondType__IsOpen_25474480(condType, v15, v21, svtId, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_43:
            v4 = v36;
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
    v32 = v6->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v23 != 9 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v33 = NetworkManager__get_UserId(0LL);
      v34 = v6->fields.svtId;
      v35 = v33;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsOpen_25474480(v23, v32, v35, v34, 0LL);
      if ( !IsQuestPhaseClear )
        return IsQuestPhaseClear;
    }
    else
    {
      IsQuestPhaseClear = v32 <= oldFriendShipRank;
      if ( v32 > oldFriendShipRank )
        return IsQuestPhaseClear;
    }
  }
LABEL_39:
  if ( !v4 )
    return IsQuestPhaseClear;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0LL )
  {
LABEL_29:
    sub_B170D4();
  }
  return ServantCommentAddMaster__IsOpen(
           MasterData_WarQuestSelectionMaster,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v30);
}


void __fastcall ServantCommentEntity__SetOpen(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_40FCE7D & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, method);
    byte_40FCE7D = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7618 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentEntity___c_TypeInfo, v1);
    byte_40F7618 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantCommentEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantCommentEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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