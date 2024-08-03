void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FDA66 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__, method);
    byte_49FDA66 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FDA5F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__, method);
    byte_49FDA5F = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC360 *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  int32_t result; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v12 = pos.fields.z;
  v13 = pos.fields.y;
  v14 = pos.fields.x;
  if ( (byte_49FDA65 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, name);
    byte_49FDA65 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_1B64324(v20);
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
      0LL);
  }
}


void __fastcall FGOSequenceManager__InitNoblePhantasm(FGOSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0

  if ( (byte_49FDA62 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FDA62 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( v5 )
  {
    if ( !Component_object )
      sub_1B64324(v5);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FDA61 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, method);
    byte_49FDA61 = 1;
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

  if ( (byte_49FDA63 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    byte_49FDA63 = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_1B64324(0LL);
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
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  unsigned int v13; // w9
  __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_49FDA64 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    byte_49FDA64 = 1;
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
    sub_1B64324(v7);
  v13 = uniqueFieldPosArray->max_length - 1;
  if ( (v13 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v13 >= uniqueFieldPosArray->max_length )
LABEL_28:
      sub_1B6432C(v7, v11);
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
  int32_t v10; // w3
  struct UnityEngine_GameObject_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8
  const MethodInfo *v16; // x8
  InvokerMethod invoker_method; // x8
  struct UnityEngine_GameObject_array *v18; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  struct UnityEngine_GameObject_array *v22; // x23
  unsigned __int64 v23; // x20
  __int64 v24; // x24
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FDA60 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_11341/*"RootCameraPrefab"*/, v4);
    sub_1B640C8(&StringLiteral_6640/*"FieldMotionPrefab"*/, v5);
    sub_1B640C8(&StringLiteral_791/*"(motion)"*/, v6);
    sub_1B640C8(&StringLiteral_6641/*"FieldMotionPrefab(common)"*/, v7);
    byte_49FDA60 = 1;
  }
  v31 = 0;
  v8 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11341/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cameraPos, (int32_t)v8, v9, v10);
  v11 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6641/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fieldPos, (int32_t)v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[5].klass;
  if ( !klass
    || (v16 = klass->vtable[20].method) == 0LL
    || (invoker_method = v16->invoker_method) == 0LL
    || (v18 = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*((_DWORD *)invoker_method + 6) - 1)),
        this->fields.uniqueFieldPosArray = v18,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_uniqueFieldPosArray, (int32_t)v18, v20, v21),
        (v22 = *p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  v23 = 0LL;
  v24 = 32LL;
  while ( (__int64)v23 < (int)v22->max_length )
  {
    v31 = v23 + 1;
    v25 = System_Int32__ToString((int32_t)&v31, 0LL);
    v26 = System_String__Concat_61386656(
            (System_String_o *)StringLiteral_6640/*"FieldMotionPrefab"*/,
            v25,
            (System_String_o *)StringLiteral_791/*"(motion)"*/,
            0LL);
    v27 = UnityEngine_GameObject__Find(v26, 0LL);
    if ( v23 >= v22->max_length )
      sub_1B6432C(v27, v28);
    *(Il2CppClass **)((char *)&v22->obj.klass + v24) = (Il2CppClass *)v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v22 + v24), (int32_t)v27, v29, v30);
    v22 = *p_uniqueFieldPosArray;
    v24 += 8LL;
    ++v23;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}