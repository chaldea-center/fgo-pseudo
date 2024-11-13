void __fastcall BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15F0A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B15F07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, *(_QWORD *)&buffId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7);
    byte_4B15F07 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&buffId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           buffId,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
    sub_1BCAA44(this, index);
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
  if ( (byte_4B15F06 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, defs, method);
    byte_4B15F06 = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = sub_1BCA888(int___TypeInfo, 1LL);
    if ( !v5 )
      sub_1BCAA3C(0LL, v6);
    v3 = (System_Int32_array *)v5;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1BCAA44(v5, v6);
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
  __int64 v8; // x2
  int32_t result; // w0

  if ( (byte_4B15F09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BuffConvertEntity_GetParamFromIndex_int___, *(_QWORD *)&index, *(_QWORD *)&def);
    sub_1BCA7E0(&StringLiteral_10242/*"OverwritePopupColor"*/, v7, v8);
    byte_4B15F09 = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10242/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_2F04FA0 *)Method_BuffConvertEntity_GetParamFromIndex_int___);
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
  __int64 v8; // x2
  Il2CppObject *ParamFromIndex_object; // x20

  if ( (byte_4B15F08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BuffConvertEntity_GetParamFromIndex_string___, *(_QWORD *)&index, def);
    sub_1BCA7E0(&StringLiteral_10243/*"OverwritePopupText"*/, v7, v8);
    byte_4B15F08 = 1;
  }
  ParamFromIndex_object = BuffConvertEntity__GetParamFromIndex_object_(
                            this,
                            (System_String_o *)StringLiteral_10243/*"OverwritePopupText"*/,
                            index,
                            (Il2CppObject *)def,
                            (const MethodInfo_2F0520C *)Method_BuffConvertEntity_GetParamFromIndex_string___);
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
        const MethodInfo_2F053EC *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  const MethodInfo_2F053EC_RGCTXs *rgctx_data; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 native_size; // x20
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v24; // x25
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v26; // x1
  __int64 *v27; // x1
  void *v28; // x0
  char *v29; // x1
  System_Collections_Generic_List_object__o *v30; // x0
  int32_t v31; // w1
  __int64 v32; // x1
  Il2CppObject *Item; // x23
  Il2CppType *_1_T; // x24
  __int64 v35; // x1
  System_Type_o *TypeFromHandle; // x24
  Il2CppObject *v37; // x0
  long double v38; // q0
  const MethodInfo_2F053EC_RGCTXs *v39; // x8
  Il2CppObject *v40; // x22
  __int64 _0_T; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v42; // x0 OVERLAPPED
  void *v43; // x1
  __int64 v44[2]; // [xsp+0h] [xbp-10h] BYREF
  System_RuntimeTypeHandle_o v45; // 0:w0.4
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v44[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v44[0] = (__int64)def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, key, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Type_TypeInfo, v18, v19);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v20);
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
      v24 = ScriptObject;
    else
      v24 = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v24, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_11;
  if ( !v24 )
    sub_1BCAA3C(IsNullOrEmpty, v26);
  if ( LODWORD(v24[1].monitor) == 1 )
  {
    v30 = (System_Collections_Generic_List_object__o *)v24;
    v31 = 0;
  }
  else
  {
    if ( (index & 0x80000000) != 0 || LODWORD(v24[1].monitor) - 1 < index )
    {
LABEL_11:
      if ( (method->rgctx_data->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v27 = v44;
      else
        v27 = (__int64 *)klass;
      memcpy((char *)v44 - ((native_size + 15) & 0x1FFFFFFF0LL), v27, native_size);
      v28 = monitor;
      v29 = (char *)v44 - ((native_size + 15) & 0x1FFFFFFF0LL);
      goto LABEL_28;
    }
    v30 = (System_Collections_Generic_List_object__o *)v24;
    v31 = index;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v30,
           v31,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
  _1_T = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v32);
  v45.fields.value = (int)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v45, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v35);
  v37 = System_Convert__ChangeType_63045160(Item, TypeFromHandle, 0LL);
  v39 = method->rgctx_data;
  v40 = v37;
  _0_T = (__int64)v39->_0_T;
  if ( (BYTE5(v39->_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = sub_1C1C6BC(v38);
  v29 = (char *)sub_1BCA92C(v40, _0_T, (char *)v44 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v28 = monitor;
LABEL_28:
  v42 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v28, v29, native_size);
  result.monitor = v43;
  result.klass = v42;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_2F04FA0 *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v21; // x22
  __int64 IsNullOrEmpty; // x0
  __int64 _0_T; // x1
  __int64 v24; // x1
  Il2CppObject *v25; // x20
  Il2CppType *v26; // x21
  __int64 v27; // x1
  System_Type_o *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  long double v31; // q0
  const MethodInfo_2F04FA0_RGCTXs *v32; // x8
  __int64 v33; // x19
  __int64 v35; // x1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  __int64 v38; // x1
  System_Type_o *TypeFromHandle; // x21
  long double v40; // q0
  const MethodInfo_2F04FA0_RGCTXs *rgctx_data; // x8
  BuffConvertEntity_o *v42; // x0
  System_String_o *v43; // x1
  int32_t v44; // w2
  Il2CppObject *v45; // x3
  const MethodInfo_2F0520C *v46; // x4
  System_RuntimeTypeHandle_o v47; // 0:w0.4
  System_RuntimeTypeHandle_o v48; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, key, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Type_TypeInfo, v16, v17);
    if ( !method->rgctx_data )
      sub_1C1C718(method, v18);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0LL);
  if ( ScriptObject
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ScriptObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      v21 = ScriptObject;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v21, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return def;
  if ( !v21 )
    goto LABEL_32;
  if ( LODWORD(v21[1].monitor) != 1 )
  {
    if ( (index & 0x80000000) != 0 || LODWORD(v21[1].monitor) - 1 < index )
      return def;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v21,
             index,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v35);
    v48.fields.value = (int)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v48, 0LL);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v38);
    IsNullOrEmpty = (__int64)System_Convert__ChangeType_63045160(Item, TypeFromHandle, 0LL);
    rgctx_data = method->rgctx_data;
    v33 = IsNullOrEmpty;
    _0_T = (__int64)rgctx_data->_0_T;
    if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      IsNullOrEmpty = sub_1C1C6BC(v40);
      _0_T = IsNullOrEmpty;
    }
    if ( v33 )
      goto LABEL_20;
LABEL_32:
    sub_1BCAA3C(IsNullOrEmpty, _0_T);
  }
  v25 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)v21,
          0,
          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
  v26 = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v24);
  v47.fields.value = (int)v26;
  v28 = System_Type__GetTypeFromHandle(v47, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v27);
  IsNullOrEmpty = (__int64)System_Convert__ChangeType_63045160(v25, v28, 0LL);
  v32 = method->rgctx_data;
  v33 = IsNullOrEmpty;
  _0_T = (__int64)v32->_0_T;
  if ( (BYTE5(v32->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    IsNullOrEmpty = sub_1C1C6BC(v31);
    _0_T = IsNullOrEmpty;
  }
  if ( !v33 )
    goto LABEL_32;
LABEL_20:
  if ( *(_QWORD *)(*(_QWORD *)v33 + 64LL) == *(_QWORD *)(_0_T + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v33, _0_T, v29, v30);
  sub_1BCACFC(v33);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_object_(v42, v43, v44, v45, v46);
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall BuffConvertEntity__GetParamFromIndex_object_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_2F0520C *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v21; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x0
  int32_t v25; // w1
  __int64 v26; // x1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  __int64 v29; // x1
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v31; // x21
  long double v32; // q0
  Il2CppClass *_0_T; // x19
  System_RuntimeTypeHandle_o v35; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, key, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Type_TypeInfo, v16, v17);
    if ( !method->rgctx_data )
      sub_1C1C718(method, v18);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0LL);
  if ( ScriptObject
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ScriptObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      v21 = ScriptObject;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v21, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !v21 )
      sub_1BCAA3C(IsNullOrEmpty, v23);
    if ( LODWORD(v21[1].monitor) == 1 )
    {
      v24 = (System_Collections_Generic_List_object__o *)v21;
      v25 = 0;
    }
    else
    {
      if ( (index & 0x80000000) != 0 || LODWORD(v21[1].monitor) - 1 < index )
        return def;
      v24 = (System_Collections_Generic_List_object__o *)v21;
      v25 = index;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v24,
             v25,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v26);
    v35.fields.value = (int)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v35, 0LL);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v29);
    v31 = System_Convert__ChangeType_63045160(Item, TypeFromHandle, 0LL);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C1C6BC(v32);
    if ( !v31 )
      return 0LL;
    def = (Il2CppObject *)sub_1BCA91C(v31, _0_T);
    if ( !def )
    {
      sub_1BCACFC(v31);
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

  if ( (byte_4B15F04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B15F04 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  System_Int32_array **BuffEntity; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  BuffConvertEntity_o *v26; // x0
  const MethodInfo *v27; // x2
  int32_t v28; // w8
  int32_t convertType; // w9
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Int32_array *targetIds; // x9
  System_Int32_array *v33; // x22
  int v34; // w8
  System_Func_int__bool__o **v35; // x23
  System_Func_int__bool__o *v36; // x24
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B15F05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, convertBuffIndex, *(_QWORD *)&buffId);
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, v9, v10);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__, v13, v14);
    sub_1BCA7E0(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo, v15, v16);
    byte_4B15F05 = 1;
  }
  v17 = sub_1BCAA2C(
          BuffConvertEntity___c__DisplayClass13_0_TypeInfo,
          convertBuffIndex,
          *(_QWORD *)&buffId,
          addIndividuality);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  v28 = -1;
  *convertBuffIndex = -1;
  convertType = this->fields.convertType;
  if ( convertType != 2 )
  {
    if ( convertType == 1 )
    {
      v28 = System_Array__IndexOf_int_(
              this->fields.targetIds,
              buffId,
              (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
      *convertBuffIndex = v28;
    }
    return v28 >= 0;
  }
  BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(v26, buffId, v27);
  if ( !BuffEntity
    || (BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0LL),
        *(_DWORD *)(v17 + 24) = 0,
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(BuffEntity, v19);
  }
  v33 = (System_Int32_array *)BuffEntity;
  v34 = 0;
  v35 = (System_Func_int__bool__o **)(v17 + 32);
  while ( 1 )
  {
    if ( v34 >= (signed int)targetIds->max_length )
    {
      v28 = *convertBuffIndex;
      return v28 >= 0;
    }
    v36 = *v35;
    if ( !*v35 )
    {
      v36 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v19, v30, v31);
      System_Func_int__bool____ctor(
        v36,
        (Il2CppObject *)v17,
        Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
        0LL);
      *(_QWORD *)(v17 + 32) = v36;
      sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)v36, v37, v38, v39, v40, v41, v42);
    }
    BuffEntity = (System_Int32_array **)BasicHelper__Any_int__49273364(
                                          v33,
                                          (System_Func_T__bool__o *)v36,
                                          (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
    v28 = *(_DWORD *)(v17 + 24);
    if ( ((unsigned __int8)BuffEntity & 1) != 0 )
      break;
    v34 = v28 + 1;
    *(_DWORD *)(v17 + 24) = v34;
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_15;
  }
  *convertBuffIndex = v28;
  return v28 >= 0;
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
    sub_1BCAA3C(this, *(_QWORD *)&sf);
  i = this->fields.i;
  if ( (unsigned int)i >= targetIds->max_length )
    sub_1BCAA44(this, sf);
  return targetIds->m_Items[i + 1] == sf;
}