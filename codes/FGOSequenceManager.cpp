void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DE57 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__, method);
    byte_4B1DE57 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DE50 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__, method);
    byte_4B1DE50 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8DFC *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  if ( (byte_4B1DE56 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, name);
    byte_4B1DE56 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_1BCB254(v20, v21);
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
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B1DE53 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1DE53 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( v5 )
  {
    if ( !Component_object )
      sub_1BCB254(v5, v6);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DE52 & 1) == 0 )
  {
    sub_1BCAFF8(&SoundManager_TypeInfo, method);
    byte_4B1DE52 = 1;
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

  if ( (byte_4B1DE54 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    byte_4B1DE54 = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_1BCB254(0LL, v6);
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
  __int64 v11; // x2
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  unsigned int v13; // w9
  __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4B1DE55 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    byte_4B1DE55 = 1;
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
    sub_1BCB254(v7, v6);
  v13 = uniqueFieldPosArray->max_length - 1;
  if ( (v13 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v13 >= uniqueFieldPosArray->max_length )
LABEL_28:
      sub_1BCB25C(v7, v6, v11);
    v14 = v13;
    v15 = (UnityEngine_Object_o *)uniqueFieldPosArray->m_Items[v13];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v16 = this->fields.uniqueFieldPosArray;
      if ( !v16 )
        goto LABEL_25;
      if ( (unsigned int)v14 >= v16->max_length )
        goto LABEL_28;
      v7 = v16->m_Items[v14];
      if ( !v7 )
        goto LABEL_25;
      v17 = UnityEngine_GameObject__get_transform(v7, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v17, name, 0, v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    v13 = v14 - 1;
    if ( (int)v14 - 1 < 0 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_GameObject_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x8
  __int64 v18; // x8
  struct UnityEngine_GameObject_array *v19; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UnityEngine_GameObject_array *v23; // x23
  unsigned __int64 v24; // x20
  __int64 v25; // x24
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1DE51 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    sub_1BCAFF8(&StringLiteral_11322/*"RootCameraPrefab"*/, v4);
    sub_1BCAFF8(&StringLiteral_6650/*"FieldMotionPrefab"*/, v5);
    sub_1BCAFF8(&StringLiteral_735/*"(motion)"*/, v6);
    sub_1BCAFF8(&StringLiteral_6651/*"FieldMotionPrefab(common)"*/, v7);
    byte_4B1DE51 = 1;
  }
  v32 = 0;
  v8 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11322/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.cameraPos, (int32_t)v8, v9, v10);
  v11 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6651/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.fieldPos, (int32_t)v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[4].klass;
  if ( !klass
    || (methodPtr = klass->vtable[23].methodPtr) == 0LL
    || (v18 = *((_QWORD *)methodPtr + 2)) == 0
    || (v19 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*(_DWORD *)(v18 + 24) - 1)),
        this->fields.uniqueFieldPosArray = v19,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_1BCAF9C((CGThumbnailListItem_o *)p_uniqueFieldPosArray, (int32_t)v19, v21, v22),
        (v23 = *p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_12:
    sub_1BCB254(Instance, v15);
  }
  v24 = 0LL;
  v25 = 32LL;
  while ( (__int64)v24 < (int)v23->max_length )
  {
    v32 = v24 + 1;
    v26 = System_Int32__ToString((int32_t)&v32, 0LL);
    v27 = System_String__Concat_62488672(
            (System_String_o *)StringLiteral_6650/*"FieldMotionPrefab"*/,
            v26,
            (System_String_o *)StringLiteral_735/*"(motion)"*/,
            0LL);
    v28 = UnityEngine_GameObject__Find(v27, 0LL);
    if ( v24 >= v23->max_length )
      sub_1BCB25C(v28, v29, v30);
    *(Il2CppClass **)((char *)&v23->obj.klass + v25) = (Il2CppClass *)v28;
    sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v23 + v25), (int32_t)v28, v30, v31);
    v23 = *p_uniqueFieldPosArray;
    v25 += 8LL;
    ++v24;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}