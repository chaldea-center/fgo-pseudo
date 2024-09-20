void __fastcall BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE7E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AE7E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BuffConvertEntity__CreatePrimaryKey(BuffConvertEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffId;
}


BuffEntity_o *__fastcall BuffConvertEntity__GetBuffEntity(
        BuffConvertEntity_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4A5AE7B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4A5AE7B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           buffId,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


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
    sub_1B8880C(this, index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
    sub_1B88814(this, index);
  return convertBuffIds->m_Items[index + 1];
}


System_Int32_array *__fastcall BuffConvertEntity__GetEffectList(
        BuffConvertEntity_o *this,
        System_Int32_array *defs,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5AE7A & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5AE7A = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
    if ( !v5 )
      sub_1B8880C(0LL, v6);
    defs = v5;
    if ( !v5->max_length )
      sub_1B88814(v5, v6);
    v5->m_Items[1] = this->fields.effectId;
  }
  return defs;
}


int32_t __fastcall BuffConvertEntity__GetOverwritePopupColorFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        int32_t def,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4A5AE7D & 1) == 0 )
  {
    sub_1B885B0(&Method_BuffConvertEntity_GetParamFromIndex_int___);
    sub_1B885B0(&StringLiteral_10109/*"OverwritePopupColor"*/);
    byte_4A5AE7D = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10109/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_2E71E9C *)Method_BuffConvertEntity_GetParamFromIndex_int___);
  if ( !result )
    return def;
  return result;
}


System_String_o *__fastcall BuffConvertEntity__GetOverwritePopupTextFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        System_String_o *def,
        const MethodInfo *method)
{
  Il2CppObject *ParamFromIndex_object; // x20

  if ( (byte_4A5AE7C & 1) == 0 )
  {
    sub_1B885B0(&Method_BuffConvertEntity_GetParamFromIndex_string___);
    sub_1B885B0(&StringLiteral_10110/*"OverwritePopupText"*/);
    byte_4A5AE7C = 1;
  }
  ParamFromIndex_object = BuffConvertEntity__GetParamFromIndex_object_(
                            this,
                            (System_String_o *)StringLiteral_10110/*"OverwritePopupText"*/,
                            index,
                            (Il2CppObject *)def,
                            (const MethodInfo_2E72108 *)Method_BuffConvertEntity_GetParamFromIndex_string___);
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
        const MethodInfo_2E722E8 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  const MethodInfo_2E722E8_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v15; // x25
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  __int64 *v18; // x1
  void *v19; // x0
  char *v20; // x1
  System_Collections_Generic_List_object__o *v21; // x0
  int32_t v22; // w1
  Il2CppObject *Item; // x23
  Il2CppType *_1_T; // x24
  System_Type_o *TypeFromHandle; // x24
  Il2CppObject *v26; // x0
  const MethodInfo_2E722E8_RGCTXs *v27; // x8
  Il2CppObject *v28; // x22
  __int64 _0_T; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // x0 OVERLAPPED
  void *v31; // x1
  __int64 v32[2]; // [xsp+0h] [xbp-10h] BYREF
  System_RuntimeTypeHandle_o v33; // 0:w0.4
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v32[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v32[0] = (__int64)def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
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
      v15 = ScriptObject;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_11;
  if ( !v15 )
    sub_1B8880C(IsNullOrEmpty, v17);
  if ( LODWORD(v15[1].monitor) == 1 )
  {
    v21 = (System_Collections_Generic_List_object__o *)v15;
    v22 = 0;
  }
  else
  {
    if ( (index & 0x80000000) != 0 || LODWORD(v15[1].monitor) - 1 < index )
    {
LABEL_11:
      if ( (method->rgctx_data->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v18 = v32;
      else
        v18 = (__int64 *)klass;
      memcpy((char *)v32 - ((native_size + 15) & 0x1FFFFFFF0LL), v18, native_size);
      v19 = monitor;
      v20 = (char *)v32 - ((native_size + 15) & 0x1FFFFFFF0LL);
      goto LABEL_28;
    }
    v21 = (System_Collections_Generic_List_object__o *)v15;
    v22 = index;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v21,
           v22,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
  _1_T = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v33.fields.value = (int)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v26 = System_Convert__ChangeType_62350644(Item, TypeFromHandle, 0LL);
  v27 = method->rgctx_data;
  v28 = v26;
  _0_T = (__int64)v27->_0_T;
  if ( (BYTE5(v27->_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = sub_1BDA48C(_0_T);
  v20 = (char *)sub_1B886FC(v28, _0_T, (char *)v32 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v19 = monitor;
LABEL_28:
  v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v19, v20, native_size);
  result.monitor = v31;
  result.klass = v30;
  return result;
}


int32_t __fastcall BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_2E71E9C *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v12; // x22
  Il2CppObject *IsNullOrEmpty; // x0
  Il2CppClass *_0_T; // x1
  Il2CppObject *v15; // x20
  Il2CppType *v16; // x21
  System_Type_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  const MethodInfo_2E71E9C_RGCTXs *v20; // x8
  Il2CppObject *v21; // x19
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  const MethodInfo_2E71E9C_RGCTXs *rgctx_data; // x8
  BuffConvertEntity_o *v27; // x0
  System_String_o *v28; // x1
  int32_t v29; // w2
  Il2CppObject *v30; // x3
  const MethodInfo_2E72108 *v31; // x4
  System_RuntimeTypeHandle_o v32; // 0:w0.4
  System_RuntimeTypeHandle_o v33; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8(method);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0LL);
  if ( ScriptObject
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ScriptObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      v12 = ScriptObject;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return def;
  if ( !v12 )
    goto LABEL_32;
  if ( LODWORD(v12[1].monitor) != 1 )
  {
    if ( (index & 0x80000000) != 0 || LODWORD(v12[1].monitor) - 1 < index )
      return def;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v12,
             index,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v33.fields.value = (int)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    IsNullOrEmpty = System_Convert__ChangeType_62350644(Item, TypeFromHandle, 0LL);
    rgctx_data = method->rgctx_data;
    v21 = IsNullOrEmpty;
    _0_T = rgctx_data->_0_T;
    if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      IsNullOrEmpty = (Il2CppObject *)sub_1BDA48C(_0_T);
      _0_T = (Il2CppClass *)IsNullOrEmpty;
    }
    if ( v21 )
      goto LABEL_20;
LABEL_32:
    sub_1B8880C(IsNullOrEmpty, _0_T);
  }
  v15 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)v12,
          0,
          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
  v16 = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v32.fields.value = (int)v16;
  v17 = System_Type__GetTypeFromHandle(v32, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  IsNullOrEmpty = System_Convert__ChangeType_62350644(v15, v17, 0LL);
  v20 = method->rgctx_data;
  v21 = IsNullOrEmpty;
  _0_T = v20->_0_T;
  if ( (BYTE5(v20->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    IsNullOrEmpty = (Il2CppObject *)sub_1BDA48C(_0_T);
    _0_T = (Il2CppClass *)IsNullOrEmpty;
  }
  if ( !v21 )
    goto LABEL_32;
LABEL_20:
  if ( v21->klass->_1.element_class == _0_T->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v21, _0_T, v18, v19);
  sub_1B88ACC(v21);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_object_(v27, v28, v29, v30, v31);
}


Il2CppObject *__fastcall BuffConvertEntity__GetParamFromIndex_object_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_2E72108 *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v12; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x0
  int32_t v16; // w1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v20; // x21
  Il2CppClass *_0_T; // x19
  System_RuntimeTypeHandle_o v23; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8(method);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0LL);
  if ( ScriptObject
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ScriptObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      v12 = ScriptObject;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !v12 )
      sub_1B8880C(IsNullOrEmpty, v14);
    if ( LODWORD(v12[1].monitor) == 1 )
    {
      v15 = (System_Collections_Generic_List_object__o *)v12;
      v16 = 0;
    }
    else
    {
      if ( (index & 0x80000000) != 0 || LODWORD(v12[1].monitor) - 1 < index )
        return def;
      v15 = (System_Collections_Generic_List_object__o *)v12;
      v16 = index;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v15,
             v16,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v23.fields.value = (int)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v23, 0LL);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v20 = System_Convert__ChangeType_62350644(Item, TypeFromHandle, 0LL);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1BDA48C(_0_T);
    if ( !v20 )
      return 0LL;
    def = (Il2CppObject *)sub_1B886EC(v20, _0_T);
    if ( !def )
    {
      sub_1B88ACC(v20);
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

  if ( (byte_4A5AE78 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5AE78 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
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
  __int64 v9; // x21
  System_Int32_array **BuffEntity; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  BuffConvertEntity_o *v14; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w8
  int32_t convertType; // w9
  struct System_Int32_array *targetIds; // x9
  System_Int32_array *v19; // x22
  int v20; // w8
  System_Func_int__bool__o **v21; // x23
  System_Func_int__bool__o *v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5AE79 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__);
    sub_1B885B0(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
    byte_4A5AE79 = 1;
  }
  v9 = sub_1B887FC(BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  v16 = -1;
  *convertBuffIndex = -1;
  convertType = this->fields.convertType;
  if ( convertType != 2 )
  {
    if ( convertType == 1 )
    {
      v16 = System_Array__IndexOf_int_(
              this->fields.targetIds,
              buffId,
              (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
      *convertBuffIndex = v16;
    }
    return v16 >= 0;
  }
  BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(v14, buffId, v15);
  if ( !BuffEntity
    || (BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0LL),
        *(_DWORD *)(v9 + 24) = 0,
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(BuffEntity, v11);
  }
  v19 = (System_Int32_array *)BuffEntity;
  v20 = 0;
  v21 = (System_Func_int__bool__o **)(v9 + 32);
  while ( 1 )
  {
    if ( v20 >= (signed int)targetIds->max_length )
    {
      v16 = *convertBuffIndex;
      return v16 >= 0;
    }
    v22 = *v21;
    if ( !*v21 )
    {
      v22 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v22,
        (Il2CppObject *)v9,
        Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
        0LL);
      *(_QWORD *)(v9 + 32) = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)v22, v23, v24);
    }
    BuffEntity = (System_Int32_array **)BasicHelper__Any_int__48671312(
                                          v19,
                                          (System_Func_T__bool__o *)v22,
                                          (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
    v16 = *(_DWORD *)(v9 + 24);
    if ( ((unsigned __int8)BuffEntity & 1) != 0 )
      break;
    v20 = v16 + 1;
    *(_DWORD *)(v9 + 24) = v20;
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_15;
  }
  *convertBuffIndex = v16;
  return v16 >= 0;
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

  _4__this = this->fields.__4__this;
  if ( !_4__this || (targetIds = _4__this->fields.targetIds) == 0LL )
    sub_1B8880C(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= targetIds->max_length )
    sub_1B88814(this, sf);
  return targetIds->m_Items[i + 1] == sf;
}