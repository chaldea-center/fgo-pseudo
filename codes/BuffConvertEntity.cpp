void __fastcall BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189722 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4189722 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BuffConvertEntity__CreatePrimaryKey(BuffConvertEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffId;
}


// local variable allocation has failed, the output may be wrong!
BuffEntity_o *__fastcall BuffConvertEntity__GetBuffEntity(
        BuffConvertEntity_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1

  if ( (byte_418971F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BuffMaster___, *(_QWORD *)&buffId);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_418971F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v7);
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           buffId,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


int32_t __fastcall BuffConvertEntity__GetConvertBuffIdFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *convertBuffIds; // x8
  unsigned int max_length; // w9
  __int64 v6; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  convertBuffIds = this->fields.convertBuffIds;
  if ( !convertBuffIds )
    sub_B2C434(this, index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  return convertBuffIds->m_Items[index + 1];
}


System_Int32_array *__fastcall BuffConvertEntity__GetEffectList(
        BuffConvertEntity_o *this,
        System_Int32_array *defs,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v8; // x0

  v3 = defs;
  if ( (byte_418971E & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, defs);
    byte_418971E = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = sub_B2C374(int___TypeInfo, 1LL);
    if ( !v5 )
      sub_B2C434(0LL, v6);
    v3 = (System_Int32_array *)v5;
    if ( !*(_DWORD *)(v5 + 24) )
    {
      v8 = sub_B2C460(v5);
      sub_B2C400(v8, 0LL);
    }
    *(_DWORD *)(v5 + 32) = this->fields.effectId;
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffConvertEntity__GetOverwritePopupColorFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        int32_t def,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t result; // w0

  if ( (byte_4189721 & 1) == 0 )
  {
    sub_B2C35C(&Method_BuffConvertEntity_GetParamFromIndex_int___, *(_QWORD *)&index);
    sub_B2C35C(&StringLiteral_10193/*"OverwritePopupColor"*/, v7);
    byte_4189721 = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10193/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_172B558 *)Method_BuffConvertEntity_GetParamFromIndex_int___);
  if ( !result )
    return def;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BuffConvertEntity__GetOverwritePopupTextFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        System_String_o *def,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *ParamFromIndex_string; // x20

  if ( (byte_4189720 & 1) == 0 )
  {
    sub_B2C35C(&Method_BuffConvertEntity_GetParamFromIndex_string___, *(_QWORD *)&index);
    sub_B2C35C(&StringLiteral_10194/*"OverwritePopupText"*/, v7);
    byte_4189720 = 1;
  }
  ParamFromIndex_string = BuffConvertEntity__GetParamFromIndex_string_(
                            this,
                            (System_String_o *)StringLiteral_10194/*"OverwritePopupText"*/,
                            index,
                            def,
                            (const MethodInfo_172B7A0 *)Method_BuffConvertEntity_GetParamFromIndex_string___);
  if ( System_String__IsNullOrEmpty(ParamFromIndex_string, 0LL) )
    return def;
  else
    return ParamFromIndex_string;
}


int32_t __fastcall BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_172B558 *method)
{
  BuffConvertEntity_o *v9; // x23
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 v15; // x22
  unsigned int v16; // w8
  Il2CppObject *v17; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  BuffConvertEntity_o *v20; // x20
  Il2CppClass *_1_T; // x19
  Il2CppObject *v23; // x20
  Il2CppType *v24; // x21
  System_Type_o *v25; // x21
  BuffConvertEntity_o *v26; // x0
  System_String_o *v27; // x1
  int32_t v28; // w2
  System_String_o *v29; // x3
  const MethodInfo_172B7A0 *v30; // x4
  System_RuntimeTypeHandle_o v31; // 0:w0.4
  System_RuntimeTypeHandle_o v32; // 0:w0.4

  v9 = this;
  if ( (byte_418725D & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, key);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v12);
    this = (BuffConvertEntity_o *)sub_B2C35C(&System_Type_TypeInfo, v13);
    byte_418725D = 1;
  }
  if ( !v9 )
    goto LABEL_32;
  ScriptObject = BuffConvertEntity__GetScriptObject(v9, key, 0LL);
  v15 = sub_B2C41C(ScriptObject, System_Collections_Generic_List_object__TypeInfo);
  this = (BuffConvertEntity_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return def;
  if ( !v15 )
    goto LABEL_32;
  v16 = *(_DWORD *)(v15 + 24);
  if ( v16 == 1 )
  {
    v17 = *(Il2CppObject **)(*(_QWORD *)(v15 + 16) + 32LL);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v31.fields.value = (int)_0_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v31, 0LL);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    this = (BuffConvertEntity_o *)System_Convert__ChangeType_42117816(v17, TypeFromHandle, 0LL);
    v20 = this;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      this = (BuffConvertEntity_o *)sub_AC505C(_1_T);
    if ( v20 )
      goto LABEL_16;
LABEL_32:
    sub_B2C434(this, key);
  }
  if ( (index & 0x80000000) != 0 || (int)(v16 - 1) < index )
    return def;
  if ( v16 <= index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v23 = *(Il2CppObject **)(*(_QWORD *)(v15 + 16) + 8LL * index + 32);
  v24 = method->rgctx_data->_0_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v32.fields.value = (int)v24;
  v25 = System_Type__GetTypeFromHandle(v32, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  this = (BuffConvertEntity_o *)System_Convert__ChangeType_42117816(v23, v25, 0LL);
  v20 = this;
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    this = (BuffConvertEntity_o *)sub_AC505C(_1_T);
  if ( !v20 )
    goto LABEL_32;
LABEL_16:
  if ( v20->klass->_1.element_class == _1_T->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v20);
  v26 = (BuffConvertEntity_o *)sub_B2C728(v20);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_string_(v26, v27, v28, v29, v30);
}


System_String_o *__fastcall BuffConvertEntity__GetParamFromIndex_string_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        System_String_o *def,
        const MethodInfo_172B7A0 *method)
{
  BuffConvertEntity_o *v9; // x23
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 v15; // x22
  unsigned int v16; // w8
  __int64 v17; // x8
  Il2CppObject *v18; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v21; // x21
  Il2CppClass *_1_T; // x19
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  v9 = this;
  if ( (byte_418725E & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, key);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v12);
    this = (BuffConvertEntity_o *)sub_B2C35C(&System_Type_TypeInfo, v13);
    byte_418725E = 1;
  }
  if ( !v9 )
    goto LABEL_26;
  ScriptObject = BuffConvertEntity__GetScriptObject(v9, key, 0LL);
  v15 = sub_B2C41C(ScriptObject, System_Collections_Generic_List_object__TypeInfo);
  this = (BuffConvertEntity_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return def;
  if ( !v15 )
LABEL_26:
    sub_B2C434(this, key);
  v16 = *(_DWORD *)(v15 + 24);
  if ( v16 == 1 )
  {
    v17 = *(_QWORD *)(v15 + 16);
  }
  else
  {
    if ( (index & 0x80000000) != 0 || (int)(v16 - 1) < index )
      return def;
    if ( v16 <= index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v17 = *(_QWORD *)(v15 + 16) + 8LL * index;
  }
  v18 = *(Il2CppObject **)(v17 + 32);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v24.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v21 = System_Convert__ChangeType_42117816(v18, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_1_T);
  if ( !v21 )
    return 0LL;
  def = (System_String_o *)sub_B2C41C(v21, _1_T);
  if ( !def )
  {
    sub_B2C728(v21);
    return 0LL;
  }
  return def;
}


Il2CppObject *__fastcall BuffConvertEntity__GetScriptObject(
        BuffConvertEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418971C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_418971C = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
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


bool __fastcall BuffConvertEntity__IsTargetLimit(
        BuffConvertEntity_o *this,
        int32_t targetType,
        int32_t targetId,
        int32_t actorId,
        const MethodInfo *method)
{
  int32_t targetLimit; // w8

  targetLimit = this->fields.targetLimit;
  if ( !targetLimit )
    return 1;
  if ( targetLimit == 1 && targetId == actorId )
    return Target__Check(0, targetType, 0LL);
  return 0;
}


bool __fastcall BuffConvertEntity__TryGetConvertBuffIndex(
        BuffConvertEntity_o *this,
        int32_t *convertBuffIndex,
        int32_t buffId,
        System_Int32_array *addIndividuality,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_Int32_array **BuffEntity; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BuffConvertEntity_o *v23; // x0
  const MethodInfo *v24; // x2
  int32_t v25; // w8
  int32_t convertType; // w9
  struct System_Int32_array *targetIds; // x9
  System_Int32_array *v28; // x22
  int v29; // w8
  System_Func_int__bool__o **v30; // x23
  System_Func_int__bool__o *v31; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_418971D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, convertBuffIndex);
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, v9);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v10);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v11);
    sub_B2C35C(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__, v12);
    sub_B2C35C(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo, v13);
    byte_418971D = 1;
  }
  v14 = sub_B2C42C(BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
  BuffConvertEntity___c__DisplayClass13_0___ctor((BuffConvertEntity___c__DisplayClass13_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  v25 = -1;
  *convertBuffIndex = -1;
  convertType = this->fields.convertType;
  if ( convertType != 2 )
  {
    if ( convertType == 1 )
    {
      v25 = System_Array__IndexOf_int_(
              this->fields.targetIds,
              buffId,
              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
      *convertBuffIndex = v25;
    }
    return v25 >= 0;
  }
  BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(v23, buffId, v24);
  if ( !BuffEntity
    || (BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0LL),
        *(_DWORD *)(v14 + 24) = 0,
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_15:
    sub_B2C434(BuffEntity, v16);
  }
  v28 = (System_Int32_array *)BuffEntity;
  v29 = 0;
  v30 = (System_Func_int__bool__o **)(v14 + 32);
  while ( 1 )
  {
    if ( v29 >= (signed int)targetIds->max_length )
    {
      v25 = *convertBuffIndex;
      return v25 >= 0;
    }
    v31 = *v30;
    if ( !*v30 )
    {
      v31 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v31,
        (Il2CppObject *)v14,
        Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v14 + 32) = v31;
      sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    }
    BuffEntity = (System_Int32_array **)BasicHelper__Any_int__24273940(
                                          v28,
                                          (System_Func_T__bool__o *)v31,
                                          (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
    v25 = *(_DWORD *)(v14 + 24);
    if ( ((unsigned __int8)BuffEntity & 1) != 0 )
      break;
    v29 = v25 + 1;
    *(_DWORD *)(v14 + 24) = v29;
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_15;
  }
  *convertBuffIndex = v25;
  return v25 >= 0;
}


void __fastcall BuffConvertEntity___c__DisplayClass13_0___ctor(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BuffConvertEntity___c__DisplayClass13_0___TryGetConvertBuffIndex_b__0(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct BuffConvertEntity_o *_4__this; // x8
  struct System_Int32_array *targetIds; // x8
  __int64 i; // x9
  __int64 v7; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (targetIds = _4__this->fields.targetIds) == 0LL )
    sub_B2C434(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= targetIds->max_length )
  {
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  return targetIds->m_Items[i + 1] == sf;
}