void SingletonMonoBehaviour_object____ctor(SingletonMonoBehaviour_T__o *this, const MethodInfo_3A4F89C *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SingletonMonoBehaviour_object___Awake(SingletonMonoBehaviour_T__o *this, const MethodInfo_3A4F6D8 *method)
{
  SingletonMonoBehaviour_object___CheckInstance(
    this,
    (const MethodInfo_3A4F720 *)method->klass->rgctx_data->_4_SingletonMonoBehaviour_T__CheckInstance);
}


bool SingletonMonoBehaviour_object___CheckInstance(SingletonMonoBehaviour_T__o *this, const MethodInfo_3A4F720 *method)
{
  Il2CppObject *Instance; // x20
  bool v5; // w20

  if ( (byte_4CBCB6F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBCB6F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)method->klass->rgctx_data->_5_SingletonMonoBehaviour_T__get_Instance);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0);
  if ( !v5 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)this, 0);
  }
  return v5;
}


void SingletonMonoBehaviour_object___DoCallbackAfterNotNullChecked(
        System_Action_T__o *callback,
        System_Action_o *fallback,
        const MethodInfo_3A4F7CC *method)
{
  __int64 klass; // x0
  Il2CppObject *Instance; // x22
  __int64 v8; // x0

  if ( (byte_4CBCB70 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBCB70 = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C41A9C();
  Instance = SingletonMonoBehaviour_object___get_Instance(*(const MethodInfo_3A4F3B4 **)(*(_QWORD *)(klass + 192) + 40LL));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v8 = (__int64)method->klass;
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C41A9C();
    ActionExtensions__Call_object_(callback, Instance, *(const MethodInfo_3085F64 **)(*(_QWORD *)(v8 + 192) + 56LL));
  }
  else
  {
    ActionExtensions__Call(fallback, 0);
  }
}


Il2CppObject *SingletonMonoBehaviour_object___getInstance(const MethodInfo_3A4F6E8 *method)
{
  __int64 klass; // x0
  __int64 v2; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C41A9C();
  v2 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C41A9C();
  return **(Il2CppObject ***)(v2 + 184);
}


Il2CppObject *SingletonMonoBehaviour_object___get_Instance(const MethodInfo_3A4F3B4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  UnityEngine_Object_o *v4; // x20
  bool v5; // w0
  __int64 v6; // x8
  bool v7; // w20
  __int64 v8; // x8
  intptr_t v9; // x20
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x20
  UnityEngine_Object_o *ObjectOfType; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x22
  CGThumbnailListItem_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x22
  __int64 v25; // x0
  int32_t v26; // w1
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  intptr_t v30; // x20
  System_RuntimeTypeHandle_o v31; // x0
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x20
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_4CBCB6E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&StringLiteral_25236/*"{0} is nothing"*/);
    byte_4CBCB6E = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C41A9C();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C41A9C();
  v4 = **(UnityEngine_Object_o ***)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(v4, 0, 0);
  v6 = (__int64)method->klass;
  v7 = v5;
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C();
  v8 = *(_QWORD *)(v6 + 192);
  if ( !v7 )
  {
    v9 = *(_QWORD *)(v8 + 24);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = v9;
    TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
    v15 = (__int64)method->klass;
    v16 = ObjectOfType;
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C41A9C();
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 8LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C41A9C();
    if ( v16 )
    {
      v18 = (CGThumbnailListItem_o *)sub_1C6BB44(v16, v17);
      if ( !v18 )
        goto LABEL_38;
    }
    else
    {
      v18 = 0;
    }
    v19 = (__int64)method->klass;
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C41A9C();
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C41A9C();
    **(_QWORD **)(v20 + 184) = v18;
    v21 = (__int64)method->klass;
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C41A9C();
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C41A9C();
    v23 = (__int64)method->klass;
    v18 = *(CGThumbnailListItem_o **)(v22 + 184);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C41A9C();
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 8LL);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C41A9C();
    if ( !v16 )
      goto LABEL_39;
    v25 = sub_1C6BB44(v16, v24);
    v26 = v25;
    if ( v25 )
    {
LABEL_40:
      sub_1C6B9AC(v18, v26, v13, v14);
      v27 = (__int64)method->klass;
      if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
        v27 = sub_1C41A9C();
      v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
      if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
        v28 = sub_1C41A9C();
      if ( UnityEngine_Object__op_Equality(**(UnityEngine_Object_o ***)(v28 + 184), 0, 0) )
      {
        v29 = (__int64)method->klass;
        if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
          v29 = sub_1C41A9C();
        v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 24LL);
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v31.fields.value = v30;
        v32 = (Il2CppObject *)System_Type__GetTypeFromHandle(v31, 0);
        v33 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25236/*"{0} is nothing"*/, v32, 0);
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v33, 0);
      }
      v34 = (__int64)method->klass;
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1C41A9C();
      v8 = *(_QWORD *)(v34 + 192);
      goto LABEL_55;
    }
LABEL_38:
    sub_1C6BFFC(v16);
LABEL_39:
    v26 = 0;
    goto LABEL_40;
  }
LABEL_55:
  v35 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C41A9C();
  return **(Il2CppObject ***)(v35 + 184);
}