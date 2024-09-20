void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C8B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
    byte_4A5C8B4 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C8AD & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
    byte_4A5C8AD = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739A3C *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  if ( (byte_4A5C8B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5C8B3 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_1B8880C(v20, v21);
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

  if ( (byte_4A5C8B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8B0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1B8880C(v4, v5);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C8AF & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5C8AF = 1;
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

  if ( (byte_4A5C8B1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8B1 = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_1B8880C(0LL, v6);
  transform = UnityEngine_GameObject__get_transform(v7, 0LL);
  return TransformHelper__getNodeFromName(transform, name, 0, 0LL);
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
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  unsigned int v11; // w9
  __int64 v12; // x23
  UnityEngine_Object_o *v13; // x21
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_Transform_o *v15; // x0

  if ( (byte_4A5C8B2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8B2 = 1;
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
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return (UnityEngine_Transform_o *)NodeFromName;
  uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
  if ( !uniqueFieldPosArray )
LABEL_25:
    sub_1B8880C(v7, v6);
  v11 = uniqueFieldPosArray->max_length - 1;
  if ( (v11 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v11 >= uniqueFieldPosArray->max_length )
LABEL_28:
      sub_1B88814(v7, v6);
    v12 = v11;
    v13 = (UnityEngine_Object_o *)uniqueFieldPosArray->m_Items[v11];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v14 = this->fields.uniqueFieldPosArray;
      if ( !v14 )
        goto LABEL_25;
      if ( (unsigned int)v12 >= v14->max_length )
        goto LABEL_28;
      v7 = v14->m_Items[v12];
      if ( !v7 )
        goto LABEL_25;
      v15 = UnityEngine_GameObject__get_transform(v7, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v15, name, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    v11 = v12 - 1;
    if ( (int)v12 - 1 < 0 )
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
  int32_t v4; // w2
  int32_t v5; // w3
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x8
  const MethodInfo *v12; // x8
  InvokerMethod invoker_method; // x8
  struct UnityEngine_GameObject_array *v14; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  struct UnityEngine_GameObject_array *v18; // x23
  unsigned __int64 v19; // x20
  __int64 v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5C8AE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11395/*"RootCameraPrefab"*/);
    sub_1B885B0(&StringLiteral_6666/*"FieldMotionPrefab"*/);
    sub_1B885B0(&StringLiteral_790/*"(motion)"*/);
    sub_1B885B0(&StringLiteral_6667/*"FieldMotionPrefab(common)"*/);
    byte_4A5C8AE = 1;
  }
  v27 = 0;
  v3 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11395/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cameraPos, (int32_t)v3, v4, v5);
  v6 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6667/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fieldPos, (int32_t)v6, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[5].klass;
  if ( !klass
    || (v12 = klass->vtable[20].method) == 0LL
    || (invoker_method = v12->invoker_method) == 0LL
    || (v14 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*((_DWORD *)invoker_method + 6) - 1)),
        this->fields.uniqueFieldPosArray = v14,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_uniqueFieldPosArray, (int32_t)v14, v16, v17),
        (v18 = *p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(Instance, v10);
  }
  v19 = 0LL;
  v20 = 32LL;
  while ( (__int64)v19 < (int)v18->max_length )
  {
    v27 = v19 + 1;
    v21 = System_Int32__ToString((int32_t)&v27, 0LL);
    v22 = System_String__Concat_61718292(
            (System_String_o *)StringLiteral_6666/*"FieldMotionPrefab"*/,
            v21,
            (System_String_o *)StringLiteral_790/*"(motion)"*/,
            0LL);
    v23 = UnityEngine_GameObject__Find(v22, 0LL);
    if ( v19 >= v18->max_length )
      sub_1B88814(v23, v24);
    *(Il2CppClass **)((char *)&v18->obj.klass + v20) = (Il2CppClass *)v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v18 + v20), (int32_t)v23, v25, v26);
    v18 = *p_uniqueFieldPosArray;
    v20 += 8LL;
    ++v19;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}