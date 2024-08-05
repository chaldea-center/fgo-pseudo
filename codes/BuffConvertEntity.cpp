void __fastcall BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE229 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE229 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D5F80 *)Method_DataEntityBase_int___ctor__);
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
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_49FE226 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_BuffMaster___, *(_QWORD *)&buffId);
    sub_1B64870(&DataManager_TypeInfo, v4);
    sub_1B64870(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_49FE226 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    sub_1B64ACC(0LL, v7);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           buffId,
                           (const MethodInfo_30D6180 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffConvertEntity__GetConvertBuffIdFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *convertBuffIds; // x8
  unsigned int max_length; // w9

  if ( (index & 0x80000000) != 0 )
    return 0;
  convertBuffIds = this->fields.convertBuffIds;
  if ( !convertBuffIds )
    sub_1B64ACC(this, index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
    sub_1B64AD4(this, *(_QWORD *)&index);
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

  v3 = defs;
  if ( (byte_49FE225 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, defs);
    byte_49FE225 = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = sub_1B64918(int___TypeInfo, 1LL);
    if ( !v5 )
      sub_1B64ACC(0LL, v6);
    v3 = (System_Int32_array *)v5;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1B64AD4(v5, v6);
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

  if ( (byte_49FE228 & 1) == 0 )
  {
    sub_1B64870(&Method_BuffConvertEntity_GetParamFromIndex_int___, *(_QWORD *)&index);
    sub_1B64870(&StringLiteral_10061/*"OverwritePopupColor"*/, v7);
    byte_49FE228 = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10061/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_2E2DC5C *)Method_BuffConvertEntity_GetParamFromIndex_int___);
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
  Il2CppObject *ParamFromIndex_object; // x20

  if ( (byte_49FE227 & 1) == 0 )
  {
    sub_1B64870(&Method_BuffConvertEntity_GetParamFromIndex_string___, *(_QWORD *)&index);
    sub_1B64870(&StringLiteral_10062/*"OverwritePopupText"*/, v7);
    byte_49FE227 = 1;
  }
  ParamFromIndex_object = BuffConvertEntity__GetParamFromIndex_object_(
                            this,
                            (System_String_o *)StringLiteral_10062/*"OverwritePopupText"*/,
                            index,
                            (Il2CppObject *)def,
                            (const MethodInfo_2E2DEC8 *)Method_BuffConvertEntity_GetParamFromIndex_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)ParamFromIndex_object, 0LL) )
    return def;
  else
    return (System_String_o *)ParamFromIndex_object;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BuffConvertEntity__GetParamFromIndex___Il2CppFullySharedGenericType_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2E2E0A8 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  const MethodInfo_2E2E0A8_RGCTXs *rgctx_data; // x8
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 native_size; // x20
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x25
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x1
  __int64 *v22; // x1
  void *v23; // x0
  char *v24; // x1
  System_Collections_Generic_List_object__o *v25; // x0
  int32_t v26; // w1
  Il2CppObject *Item; // x23
  Il2CppType *_1_T; // x24
  System_Type_o *TypeFromHandle; // x24
  Il2CppObject *v30; // x0
  const MethodInfo_2E2E0A8_RGCTXs *v31; // x8
  Il2CppObject *v32; // x22
  __int64 _0_T; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v34; // x0 OVERLAPPED
  void *v35; // x1
  __int64 v36[2]; // [xsp+0h] [xbp-10h] BYREF
  System_RuntimeTypeHandle_o v37; // 0:w0.4
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v36[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v36[0] = (__int64)def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B64870(&System_Convert_TypeInfo, key);
    sub_1B64870(&Method_System_Collections_Generic_List_object__get_Count__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_object__get_Item__, v13);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v14);
    sub_1B64870(&System_Type_TypeInfo, v15);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB67A8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_0_T->_2.native_size;
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0LL);
  if ( ScriptObject
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ScriptObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      v19 = ScriptObject;
    else
      v19 = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v19, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_11;
  if ( !v19 )
    sub_1B64ACC(IsNullOrEmpty, v21);
  if ( LODWORD(v19[1].monitor) == 1 )
  {
    v25 = (System_Collections_Generic_List_object__o *)v19;
    v26 = 0;
  }
  else
  {
    if ( (index & 0x80000000) != 0 || LODWORD(v19[1].monitor) - 1 < index )
    {
LABEL_11:
      if ( (method->rgctx_data->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v22 = v36;
      else
        v22 = (__int64 *)klass;
      memcpy((char *)v36 - ((native_size + 15) & 0x1FFFFFFF0LL), v22, native_size);
      v23 = monitor;
      v24 = (char *)v36 - ((native_size + 15) & 0x1FFFFFFF0LL);
      goto LABEL_28;
    }
    v25 = (System_Collections_Generic_List_object__o *)v19;
    v26 = index;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v25,
           v26,
           (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_object__get_Item__);
  _1_T = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v37.fields.value = (int)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v37, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v30 = System_Convert__ChangeType_62027180(Item, TypeFromHandle, 0LL);
  v31 = method->rgctx_data;
  v32 = v30;
  _0_T = (__int64)v31->_0_T;
  if ( (BYTE5(v31->_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = sub_1BB674C(_0_T);
  v24 = (char *)sub_1B649BC(v32, _0_T, (char *)v36 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v23 = monitor;
LABEL_28:
  v34 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v23, v24, native_size);
  result.monitor = v35;
  result.klass = v34;
  return result;
}


int32_t __fastcall BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_2E2DC5C *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v16; // x22
  Il2CppObject *IsNullOrEmpty; // x0
  Il2CppClass *_0_T; // x1
  Il2CppObject *v19; // x20
  Il2CppType *v20; // x21
  System_Type_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  const MethodInfo_2E2DC5C_RGCTXs *v24; // x8
  Il2CppObject *v25; // x19
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  const MethodInfo_2E2DC5C_RGCTXs *rgctx_data; // x8
  BuffConvertEntity_o *v31; // x0
  System_String_o *v32; // x1
  int32_t v33; // w2
  Il2CppObject *v34; // x3
  const MethodInfo_2E2DEC8 *v35; // x4
  System_RuntimeTypeHandle_o v36; // 0:w0.4
  System_RuntimeTypeHandle_o v37; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B64870(&System_Convert_TypeInfo, key);
    sub_1B64870(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v12);
    sub_1B64870(&System_Type_TypeInfo, v13);
    if ( !method->rgctx_data )
      sub_1BB67A8(method);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0LL);
  if ( ScriptObject
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ScriptObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      v16 = ScriptObject;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return def;
  if ( !v16 )
    goto LABEL_32;
  if ( LODWORD(v16[1].monitor) != 1 )
  {
    if ( (index & 0x80000000) != 0 || LODWORD(v16[1].monitor) - 1 < index )
      return def;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v16,
             index,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v37.fields.value = (int)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v37, 0LL);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    IsNullOrEmpty = System_Convert__ChangeType_62027180(Item, TypeFromHandle, 0LL);
    rgctx_data = method->rgctx_data;
    v25 = IsNullOrEmpty;
    _0_T = rgctx_data->_0_T;
    if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      IsNullOrEmpty = (Il2CppObject *)sub_1BB674C(_0_T);
      _0_T = (Il2CppClass *)IsNullOrEmpty;
    }
    if ( v25 )
      goto LABEL_20;
LABEL_32:
    sub_1B64ACC(IsNullOrEmpty, _0_T);
  }
  v19 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)v16,
          0,
          (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_object__get_Item__);
  v20 = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v36.fields.value = (int)v20;
  v21 = System_Type__GetTypeFromHandle(v36, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  IsNullOrEmpty = System_Convert__ChangeType_62027180(v19, v21, 0LL);
  v24 = method->rgctx_data;
  v25 = IsNullOrEmpty;
  _0_T = v24->_0_T;
  if ( (BYTE5(v24->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    IsNullOrEmpty = (Il2CppObject *)sub_1BB674C(_0_T);
    _0_T = (Il2CppClass *)IsNullOrEmpty;
  }
  if ( !v25 )
    goto LABEL_32;
LABEL_20:
  if ( v25->klass->_1.element_class == _0_T->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v25, _0_T, v22, v23);
  sub_1B64D8C(v25);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_object_(v31, v32, v33, v34, v35);
}


Il2CppObject *__fastcall BuffConvertEntity__GetParamFromIndex_object_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_2E2DEC8 *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v16; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x0
  int32_t v20; // w1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v24; // x21
  Il2CppClass *_0_T; // x19
  System_RuntimeTypeHandle_o v27; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B64870(&System_Convert_TypeInfo, key);
    sub_1B64870(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v12);
    sub_1B64870(&System_Type_TypeInfo, v13);
    if ( !method->rgctx_data )
      sub_1BB67A8(method);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0LL);
  if ( ScriptObject
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ScriptObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      v16 = ScriptObject;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !v16 )
      sub_1B64ACC(IsNullOrEmpty, v18);
    if ( LODWORD(v16[1].monitor) == 1 )
    {
      v19 = (System_Collections_Generic_List_object__o *)v16;
      v20 = 0;
    }
    else
    {
      if ( (index & 0x80000000) != 0 || LODWORD(v16[1].monitor) - 1 < index )
        return def;
      v19 = (System_Collections_Generic_List_object__o *)v16;
      v20 = index;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v19,
             v20,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v27.fields.value = (int)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v27, 0LL);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v24 = System_Convert__ChangeType_62027180(Item, TypeFromHandle, 0LL);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1BB674C(_0_T);
    if ( !v24 )
      return 0LL;
    def = (Il2CppObject *)sub_1B649AC(v24, _0_T);
    if ( !def )
    {
      sub_1B64D8C(v24);
      return 0LL;
    }
  }
  return def;
}


Il2CppObject *__fastcall BuffConvertEntity__GetScriptObject(
        BuffConvertEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE223 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FE223 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
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
  __int64 v13; // x21
  System_Int32_array **BuffEntity; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  BuffConvertEntity_o *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w8
  int32_t convertType; // w9
  struct System_Int32_array *targetIds; // x9
  System_Int32_array *v23; // x22
  int v24; // w8
  System_Func_int__bool__o **v25; // x23
  System_Func_int__bool__o *v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FE224 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_IndexOf_int___, convertBuffIndex);
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, v9);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v10);
    sub_1B64870(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__, v11);
    sub_1B64870(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo, v12);
    byte_49FE224 = 1;
  }
  v13 = sub_1B64ABC(BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  v20 = -1;
  *convertBuffIndex = -1;
  convertType = this->fields.convertType;
  if ( convertType != 2 )
  {
    if ( convertType == 1 )
    {
      v20 = System_Array__IndexOf_int_(
              this->fields.targetIds,
              buffId,
              (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___);
      *convertBuffIndex = v20;
    }
    return v20 >= 0;
  }
  BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(v18, buffId, v19);
  if ( !BuffEntity
    || (BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0LL),
        *(_DWORD *)(v13 + 24) = 0,
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_15:
    sub_1B64ACC(BuffEntity, v15);
  }
  v23 = (System_Int32_array *)BuffEntity;
  v24 = 0;
  v25 = (System_Func_int__bool__o **)(v13 + 32);
  while ( 1 )
  {
    if ( v24 >= (signed int)targetIds->max_length )
    {
      v20 = *convertBuffIndex;
      return v20 >= 0;
    }
    v26 = *v25;
    if ( !*v25 )
    {
      v26 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v26,
        (Il2CppObject *)v13,
        Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
        0LL);
      *(_QWORD *)(v13 + 32) = v26;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v26, v27, v28);
    }
    BuffEntity = (System_Int32_array **)BasicHelper__Any_int__48392396(
                                          v23,
                                          (System_Func_T__bool__o *)v26,
                                          (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888);
    v20 = *(_DWORD *)(v13 + 24);
    if ( ((unsigned __int8)BuffEntity & 1) != 0 )
      break;
    v24 = v20 + 1;
    *(_DWORD *)(v13 + 24) = v24;
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_15;
  }
  *convertBuffIndex = v20;
  return v20 >= 0;
}


void __fastcall BuffConvertEntity___c__DisplayClass13_0___ctor(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BuffConvertEntity___c__DisplayClass13_0___TryGetConvertBuffIndex_b__0(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct BuffConvertEntity_o *_4__this; // x8
  struct System_Int32_array *targetIds; // x8
  __int64 i; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || (targetIds = _4__this->fields.targetIds) == 0LL )
    sub_1B64ACC(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= targetIds->max_length )
    sub_1B64AD4(this, *(_QWORD *)&sf);
  return targetIds->m_Items[i + 1] == sf;
}