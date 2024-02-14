void __fastcall BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216391 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4216391 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_421638E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, *(_QWORD *)&buffId);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_421638E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           buffId,
                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_B0D97C(this);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
  __int64 v7; // x0

  v3 = defs;
  if ( (byte_421638D & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, defs);
    byte_421638D = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = sub_B0D8BC(int___TypeInfo, 1LL);
    if ( !v5 )
      sub_B0D97C(0LL);
    v3 = (System_Int32_array *)v5;
    if ( !*(_DWORD *)(v5 + 24) )
    {
      v7 = sub_B0D9A8(v5);
      sub_B0D948(v7, 0LL);
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

  if ( (byte_4216390 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BuffConvertEntity_GetParamFromIndex_int___, *(_QWORD *)&index);
    sub_B0D8A4(&StringLiteral_10217/*"OverwritePopupColor"*/, v7);
    byte_4216390 = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10217/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_170C004 *)Method_BuffConvertEntity_GetParamFromIndex_int___);
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

  if ( (byte_421638F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BuffConvertEntity_GetParamFromIndex_string___, *(_QWORD *)&index);
    sub_B0D8A4(&StringLiteral_10218/*"OverwritePopupText"*/, v7);
    byte_421638F = 1;
  }
  ParamFromIndex_string = BuffConvertEntity__GetParamFromIndex_string_(
                            this,
                            (System_String_o *)StringLiteral_10218/*"OverwritePopupText"*/,
                            index,
                            def,
                            (const MethodInfo_170C24C *)Method_BuffConvertEntity_GetParamFromIndex_string___);
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
        const MethodInfo_170C004 *method)
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
  const MethodInfo_170C24C *v30; // x4
  System_RuntimeTypeHandle_o v31; // 0:w0.4
  System_RuntimeTypeHandle_o v32; // 0:w0.4

  v9 = this;
  if ( (byte_4214316 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, key);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v12);
    this = (BuffConvertEntity_o *)sub_B0D8A4(&System_Type_TypeInfo, v13);
    byte_4214316 = 1;
  }
  if ( !v9 )
    goto LABEL_32;
  ScriptObject = BuffConvertEntity__GetScriptObject(v9, key, 0LL);
  v15 = sub_B0D964(ScriptObject, System_Collections_Generic_List_object__TypeInfo);
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
    this = (BuffConvertEntity_o *)System_Convert__ChangeType_41907180(v17, TypeFromHandle, 0LL);
    v20 = this;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      this = (BuffConvertEntity_o *)sub_AA65A4(_1_T);
    if ( v20 )
      goto LABEL_16;
LABEL_32:
    sub_B0D97C(this);
  }
  if ( (index & 0x80000000) != 0 || (int)(v16 - 1) < index )
    return def;
  if ( v16 <= index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  this = (BuffConvertEntity_o *)System_Convert__ChangeType_41907180(v23, v25, 0LL);
  v20 = this;
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    this = (BuffConvertEntity_o *)sub_AA65A4(_1_T);
  if ( !v20 )
    goto LABEL_32;
LABEL_16:
  if ( v20->klass->_1.element_class == _1_T->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v20);
  v26 = (BuffConvertEntity_o *)sub_B0DC70(v20);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_string_(v26, v27, v28, v29, v30);
}


System_String_o *__fastcall BuffConvertEntity__GetParamFromIndex_string_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        System_String_o *def,
        const MethodInfo_170C24C *method)
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
  if ( (byte_4214317 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, key);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v12);
    this = (BuffConvertEntity_o *)sub_B0D8A4(&System_Type_TypeInfo, v13);
    byte_4214317 = 1;
  }
  if ( !v9 )
    goto LABEL_26;
  ScriptObject = BuffConvertEntity__GetScriptObject(v9, key, 0LL);
  v15 = sub_B0D964(ScriptObject, System_Collections_Generic_List_object__TypeInfo);
  this = (BuffConvertEntity_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return def;
  if ( !v15 )
LABEL_26:
    sub_B0D97C(this);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  v21 = System_Convert__ChangeType_41907180(v18, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_1_T);
  if ( !v21 )
    return 0LL;
  def = (System_String_o *)sub_B0D964(v21, _1_T);
  if ( !def )
  {
    sub_B0DC70(v21);
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

  if ( (byte_421638B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_421638B = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BuffConvertEntity_o *v22; // x0
  const MethodInfo *v23; // x2
  int32_t v24; // w8
  int32_t convertType; // w9
  __int64 v26; // x1
  __int64 v27; // x2
  struct System_Int32_array *targetIds; // x9
  System_Int32_array *v29; // x22
  int v30; // w8
  System_Func_int__bool__o **v31; // x23
  System_Func_int__bool__o *v32; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_421638C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, convertBuffIndex);
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, v9);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__, v12);
    sub_B0D8A4(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo, v13);
    byte_421638C = 1;
  }
  v14 = sub_B0D974(BuffConvertEntity___c__DisplayClass13_0_TypeInfo, convertBuffIndex, *(_QWORD *)&buffId);
  BuffConvertEntity___c__DisplayClass13_0___ctor((BuffConvertEntity___c__DisplayClass13_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v24 = -1;
  *convertBuffIndex = -1;
  convertType = this->fields.convertType;
  if ( convertType != 2 )
  {
    if ( convertType == 1 )
    {
      v24 = System_Array__IndexOf_int_(
              this->fields.targetIds,
              buffId,
              (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
      *convertBuffIndex = v24;
    }
    return v24 >= 0;
  }
  BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(v22, buffId, v23);
  if ( !BuffEntity
    || (BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0LL),
        *(_DWORD *)(v14 + 24) = 0,
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(BuffEntity);
  }
  v29 = (System_Int32_array *)BuffEntity;
  v30 = 0;
  v31 = (System_Func_int__bool__o **)(v14 + 32);
  while ( 1 )
  {
    if ( v30 >= (signed int)targetIds->max_length )
    {
      v24 = *convertBuffIndex;
      return v24 >= 0;
    }
    v32 = *v31;
    if ( !*v31 )
    {
      v32 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v26, v27);
      System_Func_int__bool____ctor(
        v32,
        (Il2CppObject *)v14,
        Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v14 + 32) = v32;
      sub_B0D840((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    }
    BuffEntity = (System_Int32_array **)BasicHelper__Any_int__24145568(
                                          v29,
                                          (System_Func_T__bool__o *)v32,
                                          (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
    v24 = *(_DWORD *)(v14 + 24);
    if ( ((unsigned __int8)BuffEntity & 1) != 0 )
      break;
    v30 = v24 + 1;
    *(_DWORD *)(v14 + 24) = v30;
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_15;
  }
  *convertBuffIndex = v24;
  return v24 >= 0;
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
    sub_B0D97C(this);
  i = this->fields.i;
  if ( (unsigned int)i >= targetIds->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  return targetIds->m_Items[i + 1] == sf;
}