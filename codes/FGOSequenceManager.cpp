void FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C28C66 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
    byte_4C28C66 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C28C5F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
    byte_4C28C5F = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D3FF0 *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  if ( (byte_4C28C65 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C28C65 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0);
    if ( !Instance )
      sub_1C2D6EC(v20, v21);
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
      0);
  }
}


void FGOSequenceManager__InitNoblePhantasm(FGOSequenceManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C28C62 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28C62 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C2D6EC(v4, v5);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0);
  }
}


void FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C28C61 & 1) == 0 )
  {
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C28C61 = 1;
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

  if ( (byte_4C28C63 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28C63 = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_1C2D6EC(0, v6);
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
  __int64 v10; // x2
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  unsigned int v12; // w9
  __int64 v13; // x23
  UnityEngine_Object_o *v14; // x21
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Transform_o *v16; // x0

  if ( (byte_4C28C64 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28C64 = 1;
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
    sub_1C2D6EC(v7, v6);
  v12 = LODWORD(uniqueFieldPosArray->max_length) - 1;
  if ( (v12 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v12 >= LODWORD(uniqueFieldPosArray->max_length) )
LABEL_28:
      sub_1C2D6F4(v7, v6, v10);
    v13 = v12;
    v14 = (UnityEngine_Object_o *)uniqueFieldPosArray->m_Items[v12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v14, 0, 0);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v15 = this->fields.uniqueFieldPosArray;
      if ( !v15 )
        goto LABEL_25;
      if ( (unsigned int)v13 >= LODWORD(v15->max_length) )
        goto LABEL_28;
      v7 = v15->m_Items[v13];
      if ( !v7 )
        goto LABEL_25;
      v16 = UnityEngine_GameObject__get_transform(v7, 0);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v16, name, 0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    v12 = v13 - 1;
    if ( (int)v13 - 1 < 0 )
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
  __int64 v10; // x1
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x8
  __int64 v13; // x8
  struct UnityEngine_GameObject_array *v14; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_array *v18; // x23
  unsigned __int64 v19; // x20
  __int64 v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  int v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C28C60 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11419/*"RootCameraPrefab"*/);
    sub_1C2D490(&StringLiteral_6696/*"FieldMotionPrefab"*/);
    sub_1C2D490(&StringLiteral_740/*"(motion)"*/);
    sub_1C2D490(&StringLiteral_6697/*"FieldMotionPrefab(common)"*/);
    byte_4C28C60 = 1;
  }
  v27 = 0;
  v3 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11419/*"RootCameraPrefab"*/, 0);
  this->fields.cameraPos = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cameraPos, (int32_t)v3, v4, v5);
  v6 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6697/*"FieldMotionPrefab(common)"*/, 0);
  this->fields.fieldPos = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fieldPos, (int32_t)v6, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[4].klass;
  if ( !klass
    || (methodPtr = klass->vtable[22].methodPtr) == 0
    || (v13 = *((_QWORD *)methodPtr + 2)) == 0
    || (v14 = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*(_DWORD *)(v13 + 24) - 1)),
        this->fields.uniqueFieldPosArray = v14,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_1C2D434((CGThumbnailListItem_o *)p_uniqueFieldPosArray, (int32_t)v14, v16, v17),
        (v18 = *p_uniqueFieldPosArray) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v10);
  }
  v19 = 0;
  v20 = 32;
  while ( (__int64)v19 < SLODWORD(v18->max_length) )
  {
    v27 = v19 + 1;
    v21 = System_Int32__ToString((int32_t)&v27, 0);
    v22 = System_String__Concat_63496112(
            (System_String_o *)StringLiteral_6696/*"FieldMotionPrefab"*/,
            v21,
            (System_String_o *)StringLiteral_740/*"(motion)"*/,
            0);
    v23 = UnityEngine_GameObject__Find(v22, 0);
    if ( v19 >= LODWORD(v18->max_length) )
      sub_1C2D6F4(v23, v24, v25);
    *(Il2CppClass **)((char *)&v18->obj.klass + v20) = (Il2CppClass *)v23;
    sub_1C2D434((CGThumbnailListItem_o *)((char *)v18 + v20), (int32_t)v23, v25, v26);
    v18 = *p_uniqueFieldPosArray;
    v20 += 8;
    ++v19;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}