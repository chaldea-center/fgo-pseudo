void FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C3936E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
    byte_4C3936E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C39367 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
    byte_4C39367 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2C28 *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
}


void FGOSequenceManager__ChangeBg(
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
  int32_t result; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v12 = pos.fields.z;
  v13 = pos.fields.y;
  v14 = pos.fields.x;
  if ( (byte_4C3936D & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C3936D = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0);
    if ( !Instance )
      sub_1C32E7C(v20);
    v22.fields.x = v14;
    v22.fields.y = v13;
    v22.fields.z = v12;
    v23.fields.x = x;
    v23.fields.y = y;
    v23.fields.z = z;
    BattleSequenceManager__changeBg(
      (BattleSequenceManager_o *)Instance,
      v20,
      result,
      v22,
      v23,
      parentCamera,
      callback,
      0);
  }
}


void FGOSequenceManager__InitNoblePhantasm(FGOSequenceManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C3936A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3936A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C32E7C(v4);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0);
  }
}


void FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C39369 & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C39369 = 1;
  }
  if ( this->fields.isEditorMode && !this->fields.isInitialized )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__initialize(0);
    this->fields.isInitialized = 1;
  }
}


UnityEngine_Transform_o *FGOSequenceManager__getCameraTransform(
        FGOSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cameraPos; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3936B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3936B = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_1C32E7C(0);
  transform = UnityEngine_GameObject__get_transform(v7, 0);
  return TransformHelper__getNodeFromName(transform, name, 0, 0);
}


UnityEngine_Transform_o *FGOSequenceManager__getCharacterPosition(
        FGOSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fieldPos; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  unsigned int v11; // w9
  __int64 v12; // x23
  UnityEngine_Object_o *v13; // x21
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_Transform_o *v15; // x0

  if ( (byte_4C3936C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3936C = 1;
  }
  fieldPos = (UnityEngine_Object_o *)this->fields.fieldPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(fieldPos, 0) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.fieldPos;
  if ( !v7 )
    goto LABEL_25;
  transform = UnityEngine_GameObject__get_transform(v7, 0);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return (UnityEngine_Transform_o *)NodeFromName;
  uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
  if ( !uniqueFieldPosArray )
LABEL_25:
    sub_1C32E7C(v7);
  v11 = LODWORD(uniqueFieldPosArray->max_length) - 1;
  if ( (v11 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v11 >= LODWORD(uniqueFieldPosArray->max_length) )
LABEL_28:
      sub_1C32E84(v7);
    v12 = v11;
    v13 = (UnityEngine_Object_o *)uniqueFieldPosArray->m_Items[v11];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v14 = this->fields.uniqueFieldPosArray;
      if ( !v14 )
        goto LABEL_25;
      if ( (unsigned int)v12 >= LODWORD(v14->max_length) )
        goto LABEL_28;
      v7 = v14->m_Items[v12];
      if ( !v7 )
        goto LABEL_25;
      v15 = UnityEngine_GameObject__get_transform(v7, 0);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v15, name, 0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    v11 = v12 - 1;
    if ( (int)v12 - 1 < 0 )
      return 0;
    uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
    if ( !uniqueFieldPosArray )
      goto LABEL_25;
  }
}


bool FGOSequenceManager__get_FarClippingLock(FGOSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields._FarClippingLock_k__BackingField;
}


void FGOSequenceManager__set_FarClippingLock(FGOSequenceManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._FarClippingLock_k__BackingField = value;
}


void FGOSequenceManager__setup(FGOSequenceManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x8
  __int64 v12; // x8
  struct UnityEngine_GameObject_array *v13; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_array *v17; // x23
  unsigned __int64 v18; // x20
  __int64 v19; // x24
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C39368 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GameObject___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C32C20(&StringLiteral_11425/*"RootCameraPrefab"*/);
    sub_1C32C20(&StringLiteral_6701/*"FieldMotionPrefab"*/);
    sub_1C32C20(&StringLiteral_740/*"(motion)"*/);
    sub_1C32C20(&StringLiteral_6702/*"FieldMotionPrefab(common)"*/);
    byte_4C39368 = 1;
  }
  v25 = 0;
  v3 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11425/*"RootCameraPrefab"*/, 0);
  this->fields.cameraPos = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cameraPos, (int32_t)v3, v4, v5);
  v6 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6702/*"FieldMotionPrefab(common)"*/, 0);
  this->fields.fieldPos = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fieldPos, (int32_t)v6, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[4].klass;
  if ( !klass
    || (methodPtr = klass->vtable[22].methodPtr) == 0
    || (v12 = *((_QWORD *)methodPtr + 2)) == 0
    || (v13 = (struct UnityEngine_GameObject_array *)sub_1C32CC8(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*(_DWORD *)(v12 + 24) - 1)),
        this->fields.uniqueFieldPosArray = v13,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_1C32BC4((CGThumbnailListItem_o *)p_uniqueFieldPosArray, (int32_t)v13, v15, v16),
        (v17 = *p_uniqueFieldPosArray) == 0) )
  {
LABEL_12:
    sub_1C32E7C(Instance);
  }
  v18 = 0;
  v19 = 32;
  while ( (__int64)v18 < SLODWORD(v17->max_length) )
  {
    v25 = v18 + 1;
    v20 = System_Int32__ToString((int32_t)&v25, 0);
    v21 = System_String__Concat_63556792(
            (System_String_o *)StringLiteral_6701/*"FieldMotionPrefab"*/,
            v20,
            (System_String_o *)StringLiteral_740/*"(motion)"*/,
            0);
    v22 = UnityEngine_GameObject__Find(v21, 0);
    if ( v18 >= LODWORD(v17->max_length) )
      sub_1C32E84(v22);
    *(Il2CppClass **)((char *)&v17->obj.klass + v19) = (Il2CppClass *)v22;
    sub_1C32BC4((CGThumbnailListItem_o *)((char *)v17 + v19), (int32_t)v22, v23, v24);
    v17 = *p_uniqueFieldPosArray;
    v19 += 8;
    ++v18;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}