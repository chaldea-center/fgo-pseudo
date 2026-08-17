void SingletonMonoBehaviour_object____ctor(SingletonMonoBehaviour_T__o *this, const MethodInfo_47A2F28 *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SingletonMonoBehaviour_object___Awake(SingletonMonoBehaviour_T__o *this, const MethodInfo_47A2D54 *method)
{
  SingletonMonoBehaviour_object___CheckInstance(
    this,
    (const MethodInfo_47A2DA4 *)method->klass->rgctx_data->_4_SingletonMonoBehaviour_T__CheckInstance);
}


bool SingletonMonoBehaviour_object___CheckInstance(SingletonMonoBehaviour_T__o *this, const MethodInfo_47A2DA4 *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  bool v7; // w20

  if ( (byte_5978565 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5978565 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)method->klass->rgctx_data->_5_SingletonMonoBehaviour_T__get_Instance);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0);
  if ( !v7 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)this, 0);
  }
  return v7;
}


void SingletonMonoBehaviour_object___DoCallbackAfterNotNullChecked(
        System_Action_T__o *callback,
        System_Action_o *fallback,
        const MethodInfo_47A2E50 *method)
{
  __int64 klass; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  __int64 v9; // x0

  if ( (byte_5978566 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5978566 = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  Instance = SingletonMonoBehaviour_object___get_Instance(*(const MethodInfo_47A29F8 **)(*(_QWORD *)(klass + 192) + 40LL));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v9 = (__int64)method->klass;
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908();
    ActionExtensions__Call_object_(callback, Instance, *(const MethodInfo_36FFECC **)(*(_QWORD *)(v9 + 192) + 56LL));
  }
  else
  {
    ActionExtensions__Call(fallback, 0);
  }
}


Il2CppObject *SingletonMonoBehaviour_object___getInstance(const MethodInfo_47A2D64 *method)
{
  __int64 klass; // x0
  __int64 v2; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v2 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_WORD *)(v2 + 309) & 1) == 0 )
    v2 = sub_224B908();
  return **(Il2CppObject ***)(v2 + 184);
}


Il2CppObject *SingletonMonoBehaviour_object___get_Instance(const MethodInfo_47A29F8 *method)
{
  __int64 v1; // x1
  __int64 klass; // x0
  __int64 v4; // x0
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  bool v7; // w8
  __int64 v8; // x0
  __int16 v9; // w9
  __int64 v10; // x0
  intptr_t v12; // x20
  System_RuntimeTypeHandle_o v13; // x0
  __int64 v14; // x1
  System_Type_o *TypeFromHandle; // x20
  UnityEngine_Object_o *ObjectOfType; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x8
  UnityEngine_Object_o *v24; // x20
  __int64 v25; // x22
  MissionNaviTransitionBoardItem_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x0
  MissionNaviTransitionBoardItem_o **v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x0
  int32_t v34; // w1
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x0
  intptr_t v39; // x20
  System_RuntimeTypeHandle_o v40; // x0
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x20

  if ( (byte_5978564 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26511/*"{0} is nothing"*/);
    byte_5978564 = 1;
  }
  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v4 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908();
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v7 = UnityEngine_Object__op_Inequality(v5, 0, 0);
  v8 = (__int64)method->klass;
  v9 = *(_WORD *)(v8 + 309);
  if ( v7 )
  {
    if ( (v9 & 1) != 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (v9 & 1) == 0 )
    v8 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 24LL);
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v6);
  v13.fields.value = v12;
  TypeFromHandle = System_Type__GetTypeFromHandle(v13, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
  v23 = (__int64)method->klass;
  v24 = ObjectOfType;
  if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
    v23 = sub_224B908();
  v25 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 8LL);
  if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
    v25 = sub_224B908();
  if ( v24 )
  {
    v26 = (MissionNaviTransitionBoardItem_o *)sub_2213BB4(v24, v25);
    if ( !v26 )
      goto LABEL_43;
  }
  else
  {
    v26 = 0;
  }
  v27 = (__int64)method->klass;
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908();
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
    v28 = sub_224B908();
  v29 = *(MissionNaviTransitionBoardItem_o ***)(v28 + 184);
  v30 = (__int64)method->klass;
  *v29 = v26;
  if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
    v30 = sub_224B908();
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
  if ( (*(_WORD *)(v31 + 309) & 1) == 0 )
    v31 = sub_224B908();
  v32 = (__int64)method->klass;
  v26 = *(MissionNaviTransitionBoardItem_o **)(v31 + 184);
  if ( (*(_WORD *)(v32 + 309) & 1) == 0 )
    v32 = sub_224B908();
  v25 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 8LL);
  if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
    v25 = sub_224B908();
  if ( !v24 )
    goto LABEL_44;
  v33 = sub_2213BB4(v24, v25);
  v34 = v33;
  if ( v33 )
    goto LABEL_45;
LABEL_43:
  sub_221405C(v24, v25, v17);
LABEL_44:
  v34 = 0;
LABEL_45:
  sub_2213A04(v26, v34, v17, v18, v19, v20, v21, v22);
  v35 = (__int64)method->klass;
  if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
    v35 = sub_224B908();
  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 16LL);
  if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
    v36 = sub_224B908();
  if ( UnityEngine_Object__op_Equality(**(UnityEngine_Object_o ***)(v36 + 184), 0, 0) )
  {
    v38 = (__int64)method->klass;
    if ( (*(_WORD *)(v38 + 309) & 1) == 0 )
      v38 = sub_224B908();
    v39 = *(_QWORD *)(*(_QWORD *)(v38 + 192) + 24LL);
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v37);
    v40.fields.value = v39;
    v41 = (Il2CppObject *)System_Type__GetTypeFromHandle(v40, 0);
    v43 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26511/*"{0} is nothing"*/, v41, 0);
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v42);
    UnityEngine_Debug__LogError(v43, 0);
  }
  v8 = (__int64)method->klass;
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
LABEL_11:
    v8 = sub_224B908();
LABEL_12:
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908();
  return **(Il2CppObject ***)(v10 + 184);
}