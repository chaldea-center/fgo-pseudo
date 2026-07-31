void BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593835F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_593835F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t BuffConvertEntity__CreatePrimaryKey(BuffConvertEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffId;
}


// local variable allocation has failed, the output may be wrong!
BuffEntity_o *BuffConvertEntity__GetBuffEntity(BuffConvertEntity_o *this, int32_t buffId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_593835C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BuffMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_593835C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&buffId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           buffId,
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
    sub_21FFED4(this);
  return convertBuffIds->m_Items[index];
}


System_Int32_array *BuffConvertEntity__GetEffectList(
        BuffConvertEntity_o *this,
        System_Int32_array *defs,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_593835B & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_593835B = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = sub_21FFD10(int___TypeInfo, 1);
    if ( !v5 )
      sub_21FFECC(0, v6);
    defs = (System_Int32_array *)v5;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_21FFED4(v5);
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

  if ( (byte_593835E & 1) == 0 )
  {
    sub_21FFC50(&Method_BuffConvertEntity_GetParamFromIndex_int___);
    sub_21FFC50(&StringLiteral_10475/*"OverwritePopupColor"*/);
    byte_593835E = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10475/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_37E7E60 *)Method_BuffConvertEntity_GetParamFromIndex_int___);
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

  if ( (byte_593835D & 1) == 0 )
  {
    sub_21FFC50(&Method_BuffConvertEntity_GetParamFromIndex_string___);
    sub_21FFC50(&StringLiteral_10476/*"OverwritePopupText"*/);
    byte_593835D = 1;
  }
  ParamFromIndex_object = BuffConvertEntity__GetParamFromIndex_object_(
                            this,
                            (System_String_o *)StringLiteral_10476/*"OverwritePopupText"*/,
                            index,
                            (Il2CppObject *)def,
                            (const MethodInfo_37E80C8 *)Method_BuffConvertEntity_GetParamFromIndex_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)ParamFromIndex_object, 0) )
    return def;
  else
    return (System_String_o *)ParamFromIndex_object;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BuffConvertEntity__GetParamFromIndex___Il2CppFullySharedGenericType_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_37E829C *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  const MethodInfo_37E829C_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v15; // x25
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v18; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v19; // x0
  void *v20; // x1
  System_Collections_Generic_List_object__o *v21; // x0
  int32_t v22; // w1
  __int64 v23; // x1
  Il2CppObject *Item; // x23
  Il2CppType *_1_T; // x24
  System_RuntimeTypeHandle_o v26; // x0
  __int64 v27; // x1
  System_Type_o *TypeFromHandle; // x24
  Il2CppObject *v29; // x0
  long double v30; // q0
  const MethodInfo_37E829C_RGCTXs *v31; // x8
  Il2CppObject *v32; // x22
  __int64 _0_T; // x1
  const void *v34; // x0
  _QWORD v35[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v35[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  v35[0] = def.klass;
  if ( !rgctx_data )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_2237B54(method);
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
    sub_21FFECC(IsNullOrEmpty, v17);
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
        v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v35;
      else
        v18 = klass;
      memcpy((char *)v35 - ((actualSize + 15) & 0x1FFFFFFF0LL), v18, actualSize);
      v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(monitor, v18, actualSize);
      goto LABEL_30;
    }
    v21 = (System_Collections_Generic_List_object__o *)v15;
    v22 = index;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v21,
           v22,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
  _1_T = method->rgctx_data->_1_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v23);
  v26.fields.value = (intptr_t)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v26, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v27);
  v29 = System_Convert__ChangeType_76462452(Item, TypeFromHandle, 0);
  v31 = method->rgctx_data;
  v32 = v29;
  _0_T = (__int64)v31->_0_T;
  if ( (*((_WORD *)&v31->_0_T->_2.bitflags2 + 1) & 1) == 0 )
    _0_T = sub_2237AF8(v30);
  v34 = (const void *)sub_21FFDB4(v32, _0_T, (char *)v35 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v34, actualSize);
LABEL_30:
  result.monitor = v20;
  result.klass = v19;
  return result;
}


int32_t BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_37E7E60 *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x22
  __int64 IsNullOrEmpty; // x0
  __int64 _0_T; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  Il2CppType *v17; // x21
  System_RuntimeTypeHandle_o v18; // x0
  __int64 v19; // x1
  System_Type_o *v20; // x21
  __int64 v21; // x2
  long double v22; // q0
  const MethodInfo_37E7E60_RGCTXs *v23; // x8
  __int64 v24; // x19
  __int64 v26; // x1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_RuntimeTypeHandle_o v29; // x0
  __int64 v30; // x1
  System_Type_o *TypeFromHandle; // x21
  long double v32; // q0
  const MethodInfo_37E7E60_RGCTXs *rgctx_data; // x8
  BuffConvertEntity_o *v34; // x0
  System_String_o *v35; // x1
  int32_t v36; // w2
  Il2CppObject *v37; // x3
  const MethodInfo_37E80C8 *v38; // x4

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54(method);
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
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !*(_DWORD *)(qword_594C108 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C108, v26);
    v29.fields.value = (intptr_t)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v29, 0);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v30);
    IsNullOrEmpty = (__int64)System_Convert__ChangeType_76462452(Item, TypeFromHandle, 0);
    rgctx_data = method->rgctx_data;
    v24 = IsNullOrEmpty;
    _0_T = (__int64)rgctx_data->_0_T;
    if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
    {
      IsNullOrEmpty = sub_2237AF8(v32);
      _0_T = IsNullOrEmpty;
    }
    if ( v24 )
      goto LABEL_20;
LABEL_32:
    sub_21FFECC(IsNullOrEmpty, _0_T);
  }
  v16 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)v12,
          0,
          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
  v17 = method->rgctx_data->_1_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v15);
  v18.fields.value = (intptr_t)v17;
  v20 = System_Type__GetTypeFromHandle(v18, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v19);
  IsNullOrEmpty = (__int64)System_Convert__ChangeType_76462452(v16, v20, 0);
  v23 = method->rgctx_data;
  v24 = IsNullOrEmpty;
  _0_T = (__int64)v23->_0_T;
  if ( (*((_WORD *)&v23->_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    IsNullOrEmpty = sub_2237AF8(v22);
    _0_T = IsNullOrEmpty;
  }
  if ( !v24 )
    goto LABEL_32;
LABEL_20:
  if ( *(_QWORD *)(*(_QWORD *)v24 + 64LL) == *(_QWORD *)(_0_T + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v24, _0_T, v21);
  sub_220024C(v24, _0_T, v21);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_object_(v34, v35, v36, v37, v38);
}


Il2CppObject *BuffConvertEntity__GetParamFromIndex_object_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_37E80C8 *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x0
  int32_t v16; // w1
  __int64 v17; // x1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  System_RuntimeTypeHandle_o v20; // x0
  __int64 v21; // x1
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v23; // x21
  long double v24; // q0
  Il2CppClass *_0_T; // x19
  __int64 v26; // x2

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54(method);
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
      sub_21FFECC(IsNullOrEmpty, v14);
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
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !*(_DWORD *)(qword_594C108 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C108, v17);
    v20.fields.value = (intptr_t)_1_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v21);
    v23 = System_Convert__ChangeType_76462452(Item, TypeFromHandle, 0);
    _0_T = method->rgctx_data->_0_T;
    if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_2237AF8(v24);
    if ( !v23 )
      return 0;
    def = (Il2CppObject *)sub_21FFDA4(v23, _0_T);
    if ( !def )
    {
      sub_220024C(v23, _0_T, v26);
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

  if ( (byte_5938359 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938359 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  int32_t convertType; // w8
  struct System_Int32_array *targetIds; // x8
  System_Int32_array *v21; // x22
  int v22; // w9
  System_Func_int__bool__o *v23; // x23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  bool v30; // w8

  if ( (byte_593835A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__);
    sub_21FFC50(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
    byte_593835A = 1;
  }
  v9 = sub_21FFEBC(BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  LODWORD(BuffEntity) = -1;
  *convertBuffIndex = -1;
  convertType = this->fields.convertType;
  if ( convertType == 2 )
  {
    BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(
                                          (BuffConvertEntity_o *)0xFFFFFFFFLL,
                                          buffId,
                                          v18);
    if ( BuffEntity )
    {
      BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0);
      targetIds = this->fields.targetIds;
      *(_DWORD *)(v9 + 24) = 0;
      if ( targetIds )
      {
        v21 = (System_Int32_array *)BuffEntity;
        v22 = 0;
        while ( v22 < SLODWORD(targetIds->max_length) )
        {
          v23 = *(System_Func_int__bool__o **)(v9 + 32);
          if ( !v23 )
          {
            v23 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v23,
              (Il2CppObject *)v9,
              Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
              0);
            *(_QWORD *)(v9 + 32) = v23;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v23, v24, v25, v26, v27, v28, v29);
          }
          v30 = BasicHelper__Any_int__58574768(
                  v21,
                  (System_Func_T__bool__o *)v23,
                  (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
          BuffEntity = (System_Int32_array **)*(unsigned int *)(v9 + 24);
          if ( v30 )
            goto LABEL_7;
          targetIds = this->fields.targetIds;
          v22 = (_DWORD)BuffEntity + 1;
          *(_DWORD *)(v9 + 24) = (_DWORD)BuffEntity + 1;
          if ( !targetIds )
            goto LABEL_16;
        }
        LODWORD(BuffEntity) = *convertBuffIndex;
        return (int)BuffEntity >= 0;
      }
    }
LABEL_16:
    sub_21FFECC(BuffEntity, v11);
  }
  if ( convertType == 1 )
  {
    LODWORD(BuffEntity) = System_Array__IndexOf_int_(
                            this->fields.targetIds,
                            buffId,
                            (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
LABEL_7:
    *convertBuffIndex = (int)BuffEntity;
  }
  return (int)BuffEntity >= 0;
}


void BuffConvertEntity___c__DisplayClass13_0___ctor(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&sf);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(targetIds->max_length) )
    sub_21FFED4(this);
  return targetIds->m_Items[i] == sf;
}