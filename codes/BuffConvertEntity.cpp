void BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597050C & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_597050C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_5970509 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_5970509 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&buffId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           buffId,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_2213CDC(this, *(_QWORD *)&index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
    sub_2213CE4(this);
  return convertBuffIds->m_Items[index];
}


System_Int32_array *BuffConvertEntity__GetEffectList(
        BuffConvertEntity_o *this,
        System_Int32_array *defs,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5970508 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970508 = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = sub_2213B20(int___TypeInfo, 1);
    if ( !v5 )
      sub_2213CDC(0, v6);
    defs = (System_Int32_array *)v5;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_2213CE4(v5);
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

  if ( (byte_597050B & 1) == 0 )
  {
    sub_2213A60(&Method_BuffConvertEntity_GetParamFromIndex_int___);
    sub_2213A60(&StringLiteral_10488/*"OverwritePopupColor"*/);
    byte_597050B = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10488/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_381B210 *)Method_BuffConvertEntity_GetParamFromIndex_int___);
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

  if ( (byte_597050A & 1) == 0 )
  {
    sub_2213A60(&Method_BuffConvertEntity_GetParamFromIndex_string___);
    sub_2213A60(&StringLiteral_10489/*"OverwritePopupText"*/);
    byte_597050A = 1;
  }
  ParamFromIndex_object = BuffConvertEntity__GetParamFromIndex_object_(
                            this,
                            (System_String_o *)StringLiteral_10489/*"OverwritePopupText"*/,
                            index,
                            (Il2CppObject *)def,
                            (const MethodInfo_381B478 *)Method_BuffConvertEntity_GetParamFromIndex_string___);
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
        const MethodInfo_381B64C *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  const MethodInfo_381B64C_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v15; // x25
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v18; // x22
  System_Collections_Generic_List_object__o *v21; // x0
  int32_t v22; // w1
  __int64 v23; // x1
  Il2CppObject *Item; // x23
  Il2CppType *_1_T; // x24
  __int64 v26; // x1
  System_Type_o *TypeFromHandle; // x24
  Il2CppObject *v28; // x0
  long double v29; // q0
  const MethodInfo_381B64C_RGCTXs *v30; // x8
  Il2CppObject *v31; // x22
  __int64 _0_T; // x1
  const void *v33; // x0
  _QWORD v34[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v34[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  v34[0] = def.klass;
  if ( !rgctx_data )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
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
    sub_2213CDC(IsNullOrEmpty, v17);
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
        v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v34;
      else
        v18 = klass;
      memcpy((char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL), v18, actualSize);
      result.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(monitor, v18, actualSize);
      return result;
    }
    v21 = (System_Collections_Generic_List_object__o *)v15;
    v22 = index;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v21,
           v22,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
  _1_T = method->rgctx_data->_1_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v23);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_T, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v26);
  v28 = System_Convert__ChangeType_76675756(Item, TypeFromHandle, 0);
  v30 = method->rgctx_data;
  v31 = v28;
  _0_T = (__int64)v30->_0_T;
  if ( (*((_WORD *)&v30->_0_T->_2.bitflags2 + 1) & 1) == 0 )
    _0_T = sub_224B908(v29);
  v33 = (const void *)sub_2213BC4(v31, _0_T, (char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  result.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v33, actualSize);
  return result;
}


int32_t BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_381B210 *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x22
  __int64 IsNullOrEmpty; // x0
  __int64 _0_T; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  Il2CppType *v17; // x21
  __int64 v18; // x1
  System_Type_o *v19; // x21
  __int64 v20; // x2
  long double v21; // q0
  const MethodInfo_381B210_RGCTXs *v22; // x8
  __int64 v23; // x19
  __int64 v25; // x1
  Il2CppObject *Item; // x20
  Il2CppType *_1_T; // x21
  __int64 v28; // x1
  System_Type_o *TypeFromHandle; // x21
  long double v30; // q0
  const MethodInfo_381B210_RGCTXs *rgctx_data; // x8
  BuffConvertEntity_o *v32; // x0
  System_String_o *v33; // x1
  int32_t v34; // w2
  Il2CppObject *v35; // x3
  const MethodInfo_381B478 *v36; // x4

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v25);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_T, 0);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v28);
    IsNullOrEmpty = (__int64)System_Convert__ChangeType_76675756(Item, TypeFromHandle, 0);
    rgctx_data = method->rgctx_data;
    v23 = IsNullOrEmpty;
    _0_T = (__int64)rgctx_data->_0_T;
    if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
    {
      IsNullOrEmpty = sub_224B908(v30);
      _0_T = IsNullOrEmpty;
    }
    if ( v23 )
      goto LABEL_20;
LABEL_32:
    sub_2213CDC(IsNullOrEmpty, _0_T);
  }
  v16 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)v12,
          0,
          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
  v17 = method->rgctx_data->_1_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v15);
  v19 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v17, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v18);
  IsNullOrEmpty = (__int64)System_Convert__ChangeType_76675756(v16, v19, 0);
  v22 = method->rgctx_data;
  v23 = IsNullOrEmpty;
  _0_T = (__int64)v22->_0_T;
  if ( (*((_WORD *)&v22->_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    IsNullOrEmpty = sub_224B908(v21);
    _0_T = IsNullOrEmpty;
  }
  if ( !v23 )
    goto LABEL_32;
LABEL_20:
  if ( *(_QWORD *)(*(_QWORD *)v23 + 64LL) == *(_QWORD *)(_0_T + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v23, _0_T, v20);
  sub_221405C(v23, _0_T, v20);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_object_(v32, v33, v34, v35, v36);
}


Il2CppObject *BuffConvertEntity__GetParamFromIndex_object_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_381B478 *method)
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
  __int64 v20; // x1
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v22; // x21
  long double v23; // q0
  Il2CppClass *_0_T; // x19
  __int64 v25; // x2

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
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
      sub_2213CDC(IsNullOrEmpty, v14);
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
    _1_T = method->rgctx_data->_1_T;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v17);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_T, 0);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v20);
    v22 = System_Convert__ChangeType_76675756(Item, TypeFromHandle, 0);
    _0_T = method->rgctx_data->_0_T;
    if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_224B908(v23);
    if ( !v22 )
      return 0;
    def = (Il2CppObject *)sub_2213BB4(v22, _0_T);
    if ( !def )
    {
      sub_221405C(v22, _0_T, v25);
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

  if ( (byte_5970506 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5970506 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_5970507 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__);
    sub_2213A60(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
    byte_5970507 = 1;
  }
  v9 = sub_2213CCC(BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
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
            v23 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v23,
              (Il2CppObject *)v9,
              Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
              0);
            *(_QWORD *)(v9 + 32) = v23;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v23, v24, v25, v26, v27, v28, v29);
          }
          v30 = BasicHelper__Any_int__58784608(
                  v21,
                  (System_Func_T__bool__o *)v23,
                  (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
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
    sub_2213CDC(BuffEntity, v11);
  }
  if ( convertType == 1 )
  {
    LODWORD(BuffEntity) = System_Array__IndexOf_int_(
                            this->fields.targetIds,
                            buffId,
                            (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
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
    sub_2213CDC(this, *(_QWORD *)&sf);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(targetIds->max_length) )
    sub_2213CE4(this);
  return targetIds->m_Items[i] == sf;
}