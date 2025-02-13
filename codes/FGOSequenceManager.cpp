void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDD4A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
    byte_4BDDD4A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDD43 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
    byte_4BDDD43 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D37C *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOSequenceManager__ChangeBg(
        FGOSequenceManager_o *this,
        System_String_o *name,
        System_String_o *bgType,
        bool parentCamera,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v12; // s11
  float v13; // s12
  float v14; // s13
  Il2CppObject *Instance; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t result; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v12 = pos.fields.z;
  v13 = pos.fields.y;
  v14 = pos.fields.x;
  if ( (byte_4BDDD49 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4BDDD49 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_1C22094(v20, v21);
    v23.fields.x = v14;
    v23.fields.y = v13;
    v23.fields.z = v12;
    v24.fields.x = x;
    v24.fields.y = y;
    v24.fields.z = z;
    BattleSequenceManager__changeBg(
      (BattleSequenceManager_o *)Instance,
      v20,
      result,
      v23,
      v24,
      parentCamera,
      callback,
      0LL);
  }
}


void __fastcall FGOSequenceManager__InitNoblePhantasm(FGOSequenceManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BDDD46 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD46 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C22094(v4, v5);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDD45 & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDDD45 = 1;
  }
  if ( this->fields.isEditorMode && !this->fields.isInitialized )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__initialize(0LL);
    this->fields.isInitialized = 1;
  }
}


UnityEngine_Transform_o *__fastcall FGOSequenceManager__getCameraTransform(
        FGOSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cameraPos; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4BDDD47 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD47 = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_1C22094(0LL, v6);
  transform = UnityEngine_GameObject__get_transform(v7, 0LL);
  return TransformHelper__getNodeFromName(transform, name, 0, v9);
}


UnityEngine_Transform_o *__fastcall FGOSequenceManager__getCharacterPosition(
        FGOSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fieldPos; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  unsigned int v12; // w9
  __int64 v13; // x23
  UnityEngine_Object_o *v14; // x21
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4BDDD48 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD48 = 1;
  }
  fieldPos = (UnityEngine_Object_o *)this->fields.fieldPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(fieldPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.fieldPos;
  if ( !v7 )
    goto LABEL_25;
  transform = UnityEngine_GameObject__get_transform(v7, 0LL);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 0, v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return (UnityEngine_Transform_o *)NodeFromName;
  uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
  if ( !uniqueFieldPosArray )
LABEL_25:
    sub_1C22094(v7, v6);
  v12 = uniqueFieldPosArray->max_length - 1;
  if ( (v12 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v12 >= uniqueFieldPosArray->max_length )
LABEL_28:
      sub_1C2209C(v7, v6);
    v13 = v12;
    v14 = (UnityEngine_Object_o *)uniqueFieldPosArray->m_Items[v12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v15 = this->fields.uniqueFieldPosArray;
      if ( !v15 )
        goto LABEL_25;
      if ( (unsigned int)v13 >= v15->max_length )
        goto LABEL_28;
      v7 = v15->m_Items[v13];
      if ( !v7 )
        goto LABEL_25;
      v16 = UnityEngine_GameObject__get_transform(v7, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v16, name, 0, v17);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    v12 = v13 - 1;
    if ( (int)v13 - 1 < 0 )
      return 0LL;
    uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
    if ( !uniqueFieldPosArray )
      goto LABEL_25;
  }
}


bool __fastcall FGOSequenceManager__get_FarClippingLock(FGOSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields._FarClippingLock_k__BackingField;
}


void __fastcall FGOSequenceManager__set_FarClippingLock(
        FGOSequenceManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._FarClippingLock_k__BackingField = value;
}


void __fastcall FGOSequenceManager__setup(FGOSequenceManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct UnityEngine_GameObject_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x8
  const MethodInfo *v20; // x8
  InvokerMethod invoker_method; // x8
  struct UnityEngine_GameObject_array *v22; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct UnityEngine_GameObject_array *v30; // x23
  unsigned __int64 v31; // x20
  __int64 v32; // x24
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int v43; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDDD44 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_11612/*"RootCameraPrefab"*/);
    sub_1C21E38(&StringLiteral_6836/*"FieldMotionPrefab"*/);
    sub_1C21E38(&StringLiteral_788/*"(motion)"*/);
    sub_1C21E38(&StringLiteral_6837/*"FieldMotionPrefab(common)"*/);
    byte_4BDDD44 = 1;
  }
  v43 = 0;
  v3 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11612/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.cameraPos, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6837/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.fieldPos, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[5].klass;
  if ( !klass
    || (v20 = klass->vtable[21].method) == 0LL
    || (invoker_method = v20->invoker_method) == 0LL
    || (v22 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*((_DWORD *)invoker_method + 6) - 1)),
        this->fields.uniqueFieldPosArray = v22,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_1C21DDC((PartyOrganizationUtility_o *)p_uniqueFieldPosArray, (int64_t)v22, v24, v25, v26, v27, v28, v29),
        (v30 = *p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_12:
    sub_1C22094(Instance, v18);
  }
  v31 = 0LL;
  v32 = 32LL;
  while ( (__int64)v31 < (int)v30->max_length )
  {
    v43 = v31 + 1;
    v33 = System_Int32__ToString((int32_t)&v43, 0LL);
    v34 = System_String__Concat_63126736(
            (System_String_o *)StringLiteral_6836/*"FieldMotionPrefab"*/,
            v33,
            (System_String_o *)StringLiteral_788/*"(motion)"*/,
            0LL);
    v35 = UnityEngine_GameObject__Find(v34, 0LL);
    if ( v31 >= v30->max_length )
      sub_1C2209C(v35, v36);
    *(Il2CppClass **)((char *)&v30->obj.klass + v32) = (Il2CppClass *)v35;
    sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v30 + v32), (int64_t)v35, v37, v38, v39, v40, v41, v42);
    v30 = *p_uniqueFieldPosArray;
    v32 += 8LL;
    ++v31;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}