void BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D306DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D306DC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t BuffConvertEntity__CreatePrimaryKey(BuffConvertEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffId;
}


BuffEntity_o *BuffConvertEntity__GetBuffEntity(BuffConvertEntity_o *this, int32_t buffId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4D306D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4D306D9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           buffId,
                           (const MethodInfo_3463274 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


int32_t BuffConvertEntity__GetConvertBuffIdFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *convertBuffIds; // x8
  unsigned int max_length; // w9

  if ( index < 0 )
    return 0;
  convertBuffIds = this->fields.convertBuffIds;
  if ( !convertBuffIds )
    sub_1C93D2C(this, index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
    sub_1C93D34(this);
  return convertBuffIds->m_Items[index];
}


System_Int32_array *BuffConvertEntity__GetEffectList(
        BuffConvertEntity_o *this,
        System_Int32_array *defs,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D306D8 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D306D8 = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = sub_1C93B7C(int___TypeInfo, 1);
    if ( !v5 )
      sub_1C93D2C(0, v6);
    defs = (System_Int32_array *)v5;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1C93D34(v5);
    *(_DWORD *)(v5 + 32) = this->fields.effectId;
  }
  return defs;
}


int32_t BuffConvertEntity__GetOverwritePopupColorFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        int32_t def,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4D306DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_BuffConvertEntity_GetParamFromIndex_int___);
    sub_1C93AD4(&StringLiteral_10139/*"OverwritePopupColor"*/);
    byte_4D306DB = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10139/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_31964FC *)Method_BuffConvertEntity_GetParamFromIndex_int___);
  if ( !result )
    return def;
  return result;
}


System_String_o *BuffConvertEntity__GetOverwritePopupTextFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        System_String_o *def,
        const MethodInfo *method)
{
  Il2CppObject *ParamFromIndex_object; // x20

  if ( (byte_4D306DA & 1) == 0 )
  {
    sub_1C93AD4(&Method_BuffConvertEntity_GetParamFromIndex_string___);
    sub_1C93AD4(&StringLiteral_10140/*"OverwritePopupText"*/);
    byte_4D306DA = 1;
  }
  ParamFromIndex_object = BuffConvertEntity__GetParamFromIndex_object_(
                            this,
                            (System_String_o *)StringLiteral_10140/*"OverwritePopupText"*/,
                            index,
                            (Il2CppObject *)def,
                            (const MethodInfo_3196768 *)Method_BuffConvertEntity_GetParamFromIndex_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)ParamFromIndex_object, 0) )
    return def;
  else
    return (System_String_o *)ParamFromIndex_object;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BuffConvertEntity__GetParamFromIndex___Il2CppFullySharedGenericType_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_3196948 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  const MethodInfo_3196948_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v15; // x25
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v18; // x1
  void *v19; // x0
  char *v20; // x1
  System_Collections_Generic_List_object__o *v21; // x0
  int32_t v22; // w1
  Il2CppObject *Item; // x23
  Il2CppType *_1_T; // x24
  System_Type_o *TypeFromHandle; // x24
  Il2CppObject *v26; // x0
  long double v27; // q0
  const MethodInfo_3196948_RGCTXs *v28; // x8
  Il2CppObject *v29; // x22
  __int64 _0_T; // x1
  _QWORD v33[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v33[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v33[0] = def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C69BC4(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_0_T->_2.actualSize;
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0);
  if ( ScriptObject
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        ScriptObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      v15 = ScriptObject;
    else
      v15 = 0;
  }
  else
  {
    v15 = 0;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0);
  if ( IsNullOrEmpty )
    goto LABEL_11;
  if ( !v15 )
    sub_1C93D2C(IsNullOrEmpty, v17);
  if ( LODWORD(v15[1].monitor) == 1 )
  {
    v21 = (System_Collections_Generic_List_object__o *)v15;
    v22 = 0;
  }
  else
  {
    if ( index < 0 || LODWORD(v15[1].monitor) - 1 < index )
    {
LABEL_11:
      if ( (method->rgctx_data->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v33;
      else
        v18 = klass;
      memcpy((char *)v33 - ((actualSize + 15) & 0x1FFFFFFF0LL), v18, actualSize);
      v19 = monitor;
      v20 = (char *)v33 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      goto LABEL_28;
    }
    v21 = (System_Collections_Generic_List_object__o *)v15;
    v22 = index;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v21,
           v22,
           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
  _1_T = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_T, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v26 = System_Convert__ChangeType_65499600(Item, TypeFromHandle, 0);
  v28 = method->rgctx_data;
  v29 = v26;
  _0_T = (__int64)v28->_0_T;
  if ( (*(&v28->_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = sub_1C69B68(v27);
  v20 = (char *)sub_1C93C20(v29, _0_T, (char *)v33 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v19 = monitor;
LABEL_28:
  result.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v19, v20, actualSize);
  return result;
}


int32_t BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_31964FC *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x22
  __int64 IsNullOrEmpty; // x0
  __int64 _0_T; // x1
  Il2CppObject *v15; // x20
  Il2CppType *v16; // x21
  System_Type_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  long double v20; // q0
  const MethodInfo_31964FC_RGCTXs *v21; // x8
  __int64 v22; // x19
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  long double v27; // q0
  const MethodInfo_31964FC_RGCTXs *rgctx_data; // x8
  BuffConvertEntity_o *v29; // x0
  System_String_o *v30; // x1
  int32_t v31; // w2
  Il2CppObject *v32; // x3
  const MethodInfo_3196768 *v33; // x4

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4(method);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0);
  if ( ScriptObject
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        ScriptObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      v12 = ScriptObject;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return def;
  if ( !v12 )
    goto LABEL_32;
  if ( LODWORD(v12[1].monitor) != 1 )
  {
    if ( index < 0 || LODWORD(v12[1].monitor) - 1 < index )
      return def;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v12,
             index,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_T, 0);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    IsNullOrEmpty = (__int64)System_Convert__ChangeType_65499600(Item, TypeFromHandle, 0);
    rgctx_data = method->rgctx_data;
    v22 = IsNullOrEmpty;
    _0_T = (__int64)rgctx_data->_0_T;
    if ( (*(&rgctx_data->_0_T->_2.bitflags2 + 2) & 1) == 0 )
    {
      IsNullOrEmpty = sub_1C69B68(v27);
      _0_T = IsNullOrEmpty;
    }
    if ( v22 )
      goto LABEL_20;
LABEL_32:
    sub_1C93D2C(IsNullOrEmpty, _0_T);
  }
  v15 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)v12,
          0,
          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
  v16 = method->rgctx_data->_1_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v17 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v16, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  IsNullOrEmpty = (__int64)System_Convert__ChangeType_65499600(v15, v17, 0);
  v21 = method->rgctx_data;
  v22 = IsNullOrEmpty;
  _0_T = (__int64)v21->_0_T;
  if ( (*(&v21->_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    IsNullOrEmpty = sub_1C69B68(v20);
    _0_T = IsNullOrEmpty;
  }
  if ( !v22 )
    goto LABEL_32;
LABEL_20:
  if ( *(_QWORD *)(*(_QWORD *)v22 + 64LL) == *(_QWORD *)(_0_T + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v22, _0_T, v18, v19);
  sub_1C940C8(v22);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_object_(v29, v30, v31, v32, v33);
}


Il2CppObject *BuffConvertEntity__GetParamFromIndex_object_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_3196768 *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x0
  int32_t v16; // w1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v20; // x21
  long double v21; // q0
  Il2CppClass *_0_T; // x19

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4(method);
  }
  ScriptObject = BuffConvertEntity__GetScriptObject(this, key, 0);
  if ( ScriptObject
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        ScriptObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      v12 = ScriptObject;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !v12 )
      sub_1C93D2C(IsNullOrEmpty, v14);
    if ( LODWORD(v12[1].monitor) == 1 )
    {
      v15 = (System_Collections_Generic_List_object__o *)v12;
      v16 = 0;
    }
    else
    {
      if ( index < 0 || LODWORD(v12[1].monitor) - 1 < index )
        return def;
      v15 = (System_Collections_Generic_List_object__o *)v12;
      v16 = index;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v15,
             v16,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_T, 0);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v20 = System_Convert__ChangeType_65499600(Item, TypeFromHandle, 0);
    _0_T = method->rgctx_data->_0_T;
    if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C69B68(v21);
    if ( !v20 )
      return 0;
    def = (Il2CppObject *)sub_1C93C10(v20, _0_T);
    if ( !def )
    {
      sub_1C940C8(v20);
      return 0;
    }
  }
  return def;
}


Il2CppObject *BuffConvertEntity__GetScriptObject(
        BuffConvertEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D306D6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D306D6 = 1;
  }
  value = 0;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


bool BuffConvertEntity__IsTargetLimit(
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
    return Target__Check(0, targetType, 0);
  return 0;
}


bool BuffConvertEntity__TryGetConvertBuffIndex(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
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
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4D306D7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__);
    sub_1C93AD4(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
    byte_4D306D7 = 1;
  }
  v9 = sub_1C93D20(BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
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
              (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
      *convertBuffIndex = v20;
    }
    return v20 >= 0;
  }
  BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(v18, buffId, v19);
  if ( !BuffEntity
    || (BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0),
        *(_DWORD *)(v9 + 24) = 0,
        (targetIds = this->fields.targetIds) == 0) )
  {
LABEL_15:
    sub_1C93D2C(BuffEntity, v11);
  }
  v23 = (System_Int32_array *)BuffEntity;
  v24 = 0;
  v25 = (System_Func_int__bool__o **)(v9 + 32);
  while ( 1 )
  {
    if ( v24 >= SLODWORD(targetIds->max_length) )
    {
      v20 = *convertBuffIndex;
      return v20 >= 0;
    }
    v26 = *v25;
    if ( !*v25 )
    {
      v26 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v26,
        (Il2CppObject *)v9,
        Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
        0);
      *(_QWORD *)(v9 + 32) = v26;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
    }
    BuffEntity = (System_Int32_array **)BasicHelper__Any_int__51960056(
                                          v23,
                                          (System_Func_T__bool__o *)v26,
                                          (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
    v20 = *(_DWORD *)(v9 + 24);
    if ( ((unsigned __int8)BuffEntity & 1) != 0 )
      break;
    v24 = v20 + 1;
    *(_DWORD *)(v9 + 24) = v24;
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_15;
  }
  *convertBuffIndex = v20;
  return v20 >= 0;
}


void BuffConvertEntity___c__DisplayClass13_0___ctor(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BuffConvertEntity___c__DisplayClass13_0___TryGetConvertBuffIndex_b__0(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct BuffConvertEntity_o *_4__this; // x8
  struct System_Int32_array *targetIds; // x8
  __int64 i; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || (targetIds = _4__this->fields.targetIds) == 0 )
    sub_1C93D2C(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(targetIds->max_length) )
    sub_1C93D34(this);
  return targetIds->m_Items[i] == sf;
}