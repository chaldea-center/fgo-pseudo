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
  System_RuntimeTypeHandle_o v12; // x20
  __int64 v13; // x1
  System_Type_o *TypeFromHandle; // x20
  UnityEngine_Object_o *ObjectOfType; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x8
  UnityEngine_Object_o *v23; // x20
  __int64 v24; // x22
  MissionNaviTransitionBoardItem_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x0
  MissionNaviTransitionBoardItem_o **v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x0
  int32_t v33; // w1
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x0
  System_RuntimeTypeHandle_o v38; // x20
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x20

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
  v12.fields.value = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 24LL);
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v6);
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
  v22 = (__int64)method->klass;
  v23 = ObjectOfType;
  if ( (*(_WORD *)(v22 + 309) & 1) == 0 )
    v22 = sub_224B908();
  v24 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 8LL);
  if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
    v24 = sub_224B908();
  if ( v23 )
  {
    v25 = (MissionNaviTransitionBoardItem_o *)sub_2213BB4(v23, v24);
    if ( !v25 )
      goto LABEL_43;
  }
  else
  {
    v25 = 0;
  }
  v26 = (__int64)method->klass;
  if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    v26 = sub_224B908();
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908();
  v28 = *(MissionNaviTransitionBoardItem_o ***)(v27 + 184);
  v29 = (__int64)method->klass;
  *v28 = v25;
  if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
    v29 = sub_224B908();
  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 16LL);
  if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
    v30 = sub_224B908();
  v31 = (__int64)method->klass;
  v25 = *(MissionNaviTransitionBoardItem_o **)(v30 + 184);
  if ( (*(_WORD *)(v31 + 309) & 1) == 0 )
    v31 = sub_224B908();
  v24 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 8LL);
  if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
    v24 = sub_224B908();
  if ( !v23 )
    goto LABEL_44;
  v32 = sub_2213BB4(v23, v24);
  v33 = v32;
  if ( v32 )
    goto LABEL_45;
LABEL_43:
  sub_221405C(v23, v24, v16);
LABEL_44:
  v33 = 0;
LABEL_45:
  sub_2213A04(v25, v33, v16, v17, v18, v19, v20, v21);
  v34 = (__int64)method->klass;
  if ( (*(_WORD *)(v34 + 309) & 1) == 0 )
    v34 = sub_224B908();
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
    v35 = sub_224B908();
  if ( UnityEngine_Object__op_Equality(**(UnityEngine_Object_o ***)(v35 + 184), 0, 0) )
  {
    v37 = (__int64)method->klass;
    if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
      v37 = sub_224B908();
    v38.fields.value = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 24LL);
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v36);
    v39 = (Il2CppObject *)System_Type__GetTypeFromHandle(v38, 0);
    v41 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26511/*"{0} is nothing"*/, v39, 0);
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v40);
    UnityEngine_Debug__LogError(v41, 0);
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