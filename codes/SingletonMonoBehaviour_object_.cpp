void SingletonMonoBehaviour_object____ctor(SingletonMonoBehaviour_T__o *this, const MethodInfo_3A5F640 *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SingletonMonoBehaviour_object___Awake(SingletonMonoBehaviour_T__o *this, const MethodInfo_3A5F47C *method)
{
  SingletonMonoBehaviour_object___CheckInstance(
    this,
    (const MethodInfo_3A5F4C4 *)method->klass->rgctx_data->_4_SingletonMonoBehaviour_T__CheckInstance);
}


bool SingletonMonoBehaviour_object___CheckInstance(SingletonMonoBehaviour_T__o *this, const MethodInfo_3A5F4C4 *method)
{
  Il2CppObject *Instance; // x20
  bool v5; // w20

  if ( (byte_4CCDCC7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCDCC7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)method->klass->rgctx_data->_5_SingletonMonoBehaviour_T__get_Instance);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0);
  if ( !v5 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)this, 0);
  }
  return v5;
}


void SingletonMonoBehaviour_object___DoCallbackAfterNotNullChecked(
        System_Action_T__o *callback,
        System_Action_o *fallback,
        const MethodInfo_3A5F570 *method)
{
  __int64 klass; // x0
  Il2CppObject *Instance; // x22
  __int64 v8; // x0

  if ( (byte_4CCDCC8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCDCC8 = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C47444();
  Instance = SingletonMonoBehaviour_object___get_Instance(*(const MethodInfo_3A5F158 **)(*(_QWORD *)(klass + 192) + 40LL));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v8 = (__int64)method->klass;
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C47444();
    ActionExtensions__Call_object_(callback, Instance, *(const MethodInfo_3095D08 **)(*(_QWORD *)(v8 + 192) + 56LL));
  }
  else
  {
    ActionExtensions__Call(fallback, 0);
  }
}


Il2CppObject *SingletonMonoBehaviour_object___getInstance(const MethodInfo_3A5F48C *method)
{
  __int64 klass; // x0
  __int64 v2; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C47444();
  v2 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C47444();
  return **(Il2CppObject ***)(v2 + 184);
}


Il2CppObject *SingletonMonoBehaviour_object___get_Instance(const MethodInfo_3A5F158 *method)
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x8
  UnityEngine_Object_o *v20; // x20
  __int64 v21; // x22
  GrandQuestFolderBoardItem_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x22
  __int64 v29; // x0
  int32_t v30; // w1
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  intptr_t v34; // x20
  System_RuntimeTypeHandle_o v35; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x20
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_4CCDCC6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Debug_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&StringLiteral_25256/*"{0} is nothing"*/);
    byte_4CCDCC6 = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C47444();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C47444();
  v4 = **(UnityEngine_Object_o ***)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(v4, 0, 0);
  v6 = (__int64)method->klass;
  v7 = v5;
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C47444();
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
    v19 = (__int64)method->klass;
    v20 = ObjectOfType;
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C47444();
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 8LL);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C47444();
    if ( v20 )
    {
      v22 = (GrandQuestFolderBoardItem_o *)sub_1C714EC(v20, v21);
      if ( !v22 )
        goto LABEL_38;
    }
    else
    {
      v22 = 0;
    }
    v23 = (__int64)method->klass;
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C47444();
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C47444();
    **(_QWORD **)(v24 + 184) = v22;
    v25 = (__int64)method->klass;
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C47444();
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C47444();
    v27 = (__int64)method->klass;
    v22 = *(GrandQuestFolderBoardItem_o **)(v26 + 184);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C47444();
    v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 8LL);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C47444();
    if ( !v20 )
      goto LABEL_39;
    v29 = sub_1C714EC(v20, v28);
    v30 = v29;
    if ( v29 )
    {
LABEL_40:
      sub_1C71354(v22, v30, v13, v14, v15, v16, v17, v18);
      v31 = (__int64)method->klass;
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1C47444();
      v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
      if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
        v32 = sub_1C47444();
      if ( UnityEngine_Object__op_Equality(**(UnityEngine_Object_o ***)(v32 + 184), 0, 0) )
      {
        v33 = (__int64)method->klass;
        if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
          v33 = sub_1C47444();
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 24LL);
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v35.fields.value = v34;
        v36 = (Il2CppObject *)System_Type__GetTypeFromHandle(v35, 0);
        v37 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25256/*"{0} is nothing"*/, v36, 0);
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v37, 0);
      }
      v38 = (__int64)method->klass;
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C47444();
      v8 = *(_QWORD *)(v38 + 192);
      goto LABEL_55;
    }
LABEL_38:
    sub_1C719A4(v20);
LABEL_39:
    v30 = 0;
    goto LABEL_40;
  }
LABEL_55:
  v39 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1C47444();
  return **(Il2CppObject ***)(v39 + 184);
}