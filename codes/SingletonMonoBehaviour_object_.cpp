void SingletonMonoBehaviour_object____ctor(SingletonMonoBehaviour_T__o *this, const MethodInfo_3AC57E4 *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SingletonMonoBehaviour_object___Awake(SingletonMonoBehaviour_T__o *this, const MethodInfo_3AC5620 *method)
{
  SingletonMonoBehaviour_object___CheckInstance(
    this,
    (const MethodInfo_3AC5668 *)method->klass->rgctx_data->_4_SingletonMonoBehaviour_T__CheckInstance);
}


bool SingletonMonoBehaviour_object___CheckInstance(SingletonMonoBehaviour_T__o *this, const MethodInfo_3AC5668 *method)
{
  Il2CppObject *Instance; // x20
  bool v5; // w20

  if ( (byte_4D372AF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D372AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)method->klass->rgctx_data->_5_SingletonMonoBehaviour_T__get_Instance);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0);
  if ( !v5 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)this, 0);
  }
  return v5;
}


void SingletonMonoBehaviour_object___DoCallbackAfterNotNullChecked(
        System_Action_T__o *callback,
        System_Action_o *fallback,
        const MethodInfo_3AC5714 *method)
{
  __int64 klass; // x0
  Il2CppObject *Instance; // x22
  __int64 v8; // x0

  if ( (byte_4D372B0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D372B0 = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C69B68();
  Instance = SingletonMonoBehaviour_object___get_Instance(*(const MethodInfo_3AC52FC **)(*(_QWORD *)(klass + 192) + 40LL));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v8 = (__int64)method->klass;
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C69B68();
    ActionExtensions__Call_object_(callback, Instance, *(const MethodInfo_30EBC54 **)(*(_QWORD *)(v8 + 192) + 56LL));
  }
  else
  {
    ActionExtensions__Call(fallback, 0);
  }
}


Il2CppObject *SingletonMonoBehaviour_object___getInstance(const MethodInfo_3AC5630 *method)
{
  __int64 klass; // x0
  __int64 v2; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C69B68();
  v2 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C69B68();
  return **(Il2CppObject ***)(v2 + 184);
}


Il2CppObject *SingletonMonoBehaviour_object___get_Instance(const MethodInfo_3AC52FC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  UnityEngine_Object_o *v4; // x20
  bool v5; // w0
  __int64 v6; // x8
  bool v7; // w20
  __int64 v8; // x8
  System_RuntimeTypeHandle_o v9; // x20
  System_Type_o *TypeFromHandle; // x20
  UnityEngine_Object_o *ObjectOfType; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x8
  UnityEngine_Object_o *v19; // x20
  __int64 v20; // x22
  GrandQuestFolderBoardItem_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x22
  __int64 v28; // x0
  int32_t v29; // w1
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  System_RuntimeTypeHandle_o v33; // x20
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x20
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_4D372AE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    sub_1C93AD4(&StringLiteral_25451/*"{0} is nothing"*/);
    byte_4D372AE = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C69B68();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C69B68();
  v4 = **(UnityEngine_Object_o ***)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(v4, 0, 0);
  v6 = (__int64)method->klass;
  v7 = v5;
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68();
  v8 = *(_QWORD *)(v6 + 192);
  if ( !v7 )
  {
    v9.fields.value = *(_QWORD *)(v8 + 24);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
    v18 = (__int64)method->klass;
    v19 = ObjectOfType;
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C69B68();
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 8LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C69B68();
    if ( v19 )
    {
      v21 = (GrandQuestFolderBoardItem_o *)sub_1C93C10(v19, v20);
      if ( !v21 )
        goto LABEL_38;
    }
    else
    {
      v21 = 0;
    }
    v22 = (__int64)method->klass;
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C69B68();
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C69B68();
    **(_QWORD **)(v23 + 184) = v21;
    v24 = (__int64)method->klass;
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C69B68();
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C69B68();
    v26 = (__int64)method->klass;
    v21 = *(GrandQuestFolderBoardItem_o **)(v25 + 184);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C69B68();
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 8LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C69B68();
    if ( !v19 )
      goto LABEL_39;
    v28 = sub_1C93C10(v19, v27);
    v29 = v28;
    if ( v28 )
    {
LABEL_40:
      sub_1C93A78(v21, v29, v12, v13, v14, v15, v16, v17);
      v30 = (__int64)method->klass;
      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
        v30 = sub_1C69B68();
      v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1C69B68();
      if ( UnityEngine_Object__op_Equality(**(UnityEngine_Object_o ***)(v31 + 184), 0, 0) )
      {
        v32 = (__int64)method->klass;
        if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
          v32 = sub_1C69B68();
        v33.fields.value = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 24LL);
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v34 = (Il2CppObject *)System_Type__GetTypeFromHandle(v33, 0);
        v35 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25451/*"{0} is nothing"*/, v34, 0);
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v35, 0);
      }
      v36 = (__int64)method->klass;
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1C69B68();
      v8 = *(_QWORD *)(v36 + 192);
      goto LABEL_55;
    }
LABEL_38:
    sub_1C940C8(v19);
LABEL_39:
    v29 = 0;
    goto LABEL_40;
  }
LABEL_55:
  v37 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1C69B68();
  return **(Il2CppObject ***)(v37 + 184);
}