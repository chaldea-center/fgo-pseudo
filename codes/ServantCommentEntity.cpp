void __fastcall ServantCommentEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct ServantCommentEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct ServantCommentEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FEB8B & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity_TypeInfo, v1);
    sub_1B64870(&StringLiteral_18132/*"condTitle"*/, v4);
    sub_1B64870(&StringLiteral_23071/*"setLabel"*/, v5);
    sub_1B64870(&StringLiteral_20158/*"imageLimit"*/, v6);
    byte_49FEB8B = 1;
  }
  ServantCommentEntity_TypeInfo->static_fields->SCRIPT_IMAGE_LIMIT = (struct System_String_o *)StringLiteral_20158/*"imageLimit"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)ServantCommentEntity_TypeInfo->static_fields,
    StringLiteral_20158/*"imageLimit"*/,
    v2,
    v3);
  v7 = StringLiteral_18132/*"condTitle"*/;
  static_fields = ServantCommentEntity_TypeInfo->static_fields;
  static_fields->SCRIPT_COND_TITLE = (struct System_String_o *)StringLiteral_18132/*"condTitle"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->SCRIPT_COND_TITLE, v7, v9, v10);
  v11 = StringLiteral_23071/*"setLabel"*/;
  v12 = ServantCommentEntity_TypeInfo->static_fields;
  v12->SCRIPT_LABEL_TYPE = (struct System_String_o *)StringLiteral_23071/*"setLabel"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v12->SCRIPT_LABEL_TYPE, v11, v13, v14);
}


void __fastcall ServantCommentEntity___ctor(ServantCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB8A & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEB8A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FEB78 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&id);
    byte_49FEB78 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           id,
           priority,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantCommentEntity__CreatePrimaryKey(
        ServantCommentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_49FEB77 & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity_TypeInfo, method);
    byte_49FEB77 = 1;
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

  if ( (byte_49FEB82 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    byte_49FEB82 = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}


System_String_o *__fastcall ServantCommentEntity__GetCondTitle(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  ServantCommentEntity_c *v5; // x0

  if ( (byte_49FEB89 & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity_TypeInfo, method);
    sub_1B64870(&StringLiteral_1/*""*/, v4);
    byte_49FEB89 = 1;
  }
  v5 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
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
  System_String_o *v10; // x20
  __int64 v11; // x8

  v10 = textType;
  if ( (byte_49FEB81 & 1) == 0 )
  {
    textType = (System_String_o *)sub_1B64870(&CondType_TypeInfo, *(_QWORD *)&condType);
    byte_49FEB81 = 1;
  }
  if ( condValues )
  {
    v11 = *(_QWORD *)&condValues->max_length;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
        sub_1B64AD4(textType, *(_QWORD *)&condType);
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

  if ( (byte_49FEB80 & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity_TypeInfo, textType);
    byte_49FEB80 = 1;
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

  if ( (byte_49FEB88 & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity_TypeInfo, method);
    byte_49FEB88 = 1;
  }
  v4 = ServantCommentEntity_TypeInfo;
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
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
  __int64 v8; // x2
  __int64 v9; // x3
  ServantCommentEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_49FEB84 & 1) == 0 )
  {
    sub_1B64870(&long_TypeInfo, key);
    byte_49FEB84 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B64D8C(ScriptObj);
  return ServantCommentEntity__IsProfileLabel(v11, v12);
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
  System_String_o *ScriptString; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  ServantCommentEntity___c_c *v19; // x8
  System_Func_object__int__o *_9__30_0; // x20
  Il2CppObject *v21; // x21
  struct ServantCommentEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_49FEB87 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_string__int___, key);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B64870(&System_Func_string__int__TypeInfo, v8);
    sub_1B64870(&Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, v9);
    sub_1B64870(&ServantCommentEntity___c_TypeInfo, v10);
    sub_1B64870(&StringLiteral_15746/*"["*/, v11);
    sub_1B64870(&StringLiteral_1/*""*/, v12);
    sub_1B64870(&StringLiteral_16002/*"]"*/, v13);
    byte_49FEB87 = 1;
  }
  ScriptString = ServantCommentEntity__GetScriptString(this, key, (System_String_o *)StringLiteral_1/*""*/, method);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(ScriptString, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return defVal;
  if ( !ScriptString
    || (IsNullOrEmpty = System_String__Replace_61403196(
                          ScriptString,
                          (System_String_o *)StringLiteral_15746/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (IsNullOrEmpty = System_String__Replace_61403196(
                          IsNullOrEmpty,
                          (System_String_o *)StringLiteral_16002/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1B64ACC(IsNullOrEmpty, v16);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
  v19 = ServantCommentEntity___c_TypeInfo;
  if ( !ServantCommentEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity___c_TypeInfo);
    v19 = ServantCommentEntity___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__int__o *)v19->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ServantCommentEntity___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__30_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_0, v21, Method_ServantCommentEntity___c__GetScriptIntArray_b__30_0__, 0LL);
    static_fields = ServantCommentEntity___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_string__int__o *)_9__30_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__30_0,
                                                               (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
}


Il2CppObject *__fastcall ServantCommentEntity__GetScriptObj(
        ServantCommentEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEB83 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FEB83 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_49FEB85 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_49FEB85 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)ServantCommentEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B64D8C(result);
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
  if ( (byte_49FEB86 & 1) == 0 )
  {
    sub_1B64870(&string_TypeInfo, key);
    byte_49FEB86 = 1;
  }
  ScriptObj = ServantCommentEntity__GetScriptObj(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObj )
    return v4;
  if ( (System_String_c *)ScriptObj->klass == string_TypeInfo )
    return (System_String_o *)ScriptObj;
  sub_1B64D8C(ScriptObj);
  return (System_String_o *)ServantCommentEntity__GetScriptIntArray(v9, v10, v11, v12);
}


bool __fastcall ServantCommentEntity__IsConst(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w19

  if ( (byte_49FEB79 & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, method);
    byte_49FEB79 = 1;
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

  if ( (byte_49FEB7E & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity_TypeInfo, method);
    byte_49FEB7E = 1;
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
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_49FEB7D & 1) == 0 )
  {
    sub_1B64870(&ServantCommentManager_TypeInfo, method);
    byte_49FEB7D = 1;
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
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return !ServantCommentManager__IsOpen(svtId, id, priority, 0LL);
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
  int v10; // w10
  __int64 v11; // x24
  unsigned __int64 v13; // x25
  int32_t v14; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v17; // x23

  v6 = this;
  if ( (byte_49FEB7B & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, *(_QWORD *)&questId);
    this = (ServantCommentEntity_o *)sub_1B64870(&NetworkManager_TypeInfo, v7);
    byte_49FEB7B = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v9 = *(_QWORD *)&condValues->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0;
      v11 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( condValues->m_Items[v10 + 1] != questId )
      {
        if ( (_DWORD)v9 == ++v10 )
          return 0;
      }
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= condValues->max_length )
          sub_1B64AD4(this, *(_QWORD *)&questId);
        v14 = condValues->m_Items[v13 + 1];
        if ( v14 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v17 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v17, v14, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v11 == ++v13 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1B64ACC(this, *(_QWORD *)&questId);
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
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int32_array *condValues; // x8
  unsigned __int64 v11; // x26
  __int64 v12; // x27
  int32_t condType; // w23
  int32_t v14; // w22
  int64_t UserId; // x0
  int32_t condValue2; // w23
  int64_t v17; // x24
  int64_t v18; // x0
  int32_t svtId; // w24
  int64_t v20; // x25
  bool IsQuestPhaseClear; // w0
  int32_t v22; // w22
  int64_t v23; // x0
  int32_t condValue; // w22
  int32_t v25; // w23
  int64_t v26; // x24
  int32_t v27; // w23
  int64_t v28; // x0
  int32_t v29; // w24
  int64_t v30; // x25
  const MethodInfo *v31; // x5

  v6 = this;
  if ( (byte_49FEB7A & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7);
    sub_1B64870(&NetworkManager_TypeInfo, v8);
    this = (ServantCommentEntity_o *)sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FEB7A = 1;
  }
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    if ( (int)*(_QWORD *)&condValues->max_length >= 1 )
    {
      v11 = 0LL;
      v12 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( 1 )
      {
        if ( v11 >= condValues->max_length )
          sub_1B64AD4(this, *(_QWORD *)&oldFriendShipRank);
        condType = v6->fields.condType;
        v14 = condValues->m_Items[v11 + 1];
        if ( condType == 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v17 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsQuestPhaseClear(v17, v14, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_34;
        }
        else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v18 = NetworkManager__get_UserId(0LL);
          svtId = v6->fields.svtId;
          v20 = v18;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentEntity_o *)CondType__IsOpen_37328508(condType, v14, v20, svtId, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_34:
            IsQuestPhaseClear = 1;
            goto LABEL_44;
          }
        }
        else if ( v14 <= oldFriendShipRank )
        {
          goto LABEL_34;
        }
        if ( v12 == ++v11 )
          break;
        condValues = v6->fields.condValues;
        if ( !condValues )
          goto LABEL_25;
      }
    }
    return 0;
  }
  v22 = v6->fields.condType;
  if ( v22 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v23 = NetworkManager__get_UserId(0LL);
    condValue = v6->fields.condValue;
    v25 = v6->fields.condValue2;
    v26 = v23;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestPhaseClear = CondType__IsQuestPhaseClear(v26, condValue, v25, -1, 0, 0LL);
    if ( !IsQuestPhaseClear )
      return IsQuestPhaseClear;
  }
  else
  {
    v27 = v6->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v22 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v28 = NetworkManager__get_UserId(0LL);
      v29 = v6->fields.svtId;
      v30 = v28;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsOpen_37328508(v22, v27, v30, v29, 0LL);
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
LABEL_44:
  if ( !addCheck )
    return IsQuestPhaseClear;
  this = (ServantCommentEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantCommentEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___)) == 0LL )
  {
LABEL_25:
    sub_1B64ACC(this, *(_QWORD *)&oldFriendShipRank);
  }
  return ServantCommentAddMaster__IsOpen(
           (ServantCommentAddMaster_o *)this,
           v6->fields.svtId,
           v6->fields.id,
           v6->fields.priority,
           oldFriendShipRank,
           v31);
}


bool __fastcall ServantCommentEntity__IsProfileLabel(ServantCommentEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantCommentEntity_c *v4; // x0
  const MethodInfo *v5; // x3
  ServantCommentEntity_c *v7; // x0

  if ( (byte_49FEB7F & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity_TypeInfo, method);
    byte_49FEB7F = 1;
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


void __fastcall ServantCommentEntity__SetOpen(ServantCommentEntity_o *this, const MethodInfo *method)
{
  int32_t id; // w20
  int32_t svtId; // w21
  int32_t priority; // w19

  if ( (byte_49FEB7C & 1) == 0 )
  {
    sub_1B64870(&ServantCommentManager_TypeInfo, method);
    byte_49FEB7C = 1;
  }
  svtId = this->fields.svtId;
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__IsOpen(svtId, id, priority, 0LL);
}


void __fastcall ServantCommentEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FEB8C & 1) == 0 )
  {
    sub_1B64870(&ServantCommentEntity___c_TypeInfo, v1);
    byte_49FEB8C = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(ServantCommentEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCommentEntity___c_TypeInfo->static_fields->__9 = (struct ServantCommentEntity___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)ServantCommentEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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