void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_43521D6 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
    byte_43521D6 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_43521CF & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
    byte_43521CF = 1;
  }
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2CE9B60 *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  WebViewManager_o *Instance; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v12 = pos.fields.z;
  v13 = pos.fields.y;
  v14 = pos.fields.x;
  if ( (byte_43521D5 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_43521D5 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_B7076C(v20, v21);
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
  UnityEngine_Object_o *Component_WebViewObject; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_43521D2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43521D2 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Implicit(Component_WebViewObject, 0LL);
  if ( v4 )
  {
    if ( !Component_WebViewObject )
      sub_B7076C(v4, v5);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_WebViewObject, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_43521D1 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43521D1 = 1;
  }
  if ( this->fields.isEditorMode && !this->fields.isInitialized )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
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

  if ( (byte_43521D3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43521D3 = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_B7076C(0LL, v6);
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
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v12; // w23
  __int64 v13; // x24
  UnityEngine_Object_o *v14; // x21
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Transform_o *v16; // x0
  __int64 v18; // x0

  if ( (byte_43521D4 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43521D4 = 1;
  }
  fieldPos = (UnityEngine_Object_o *)this->fields.fieldPos;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(fieldPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.fieldPos;
  if ( !v7 )
    goto LABEL_30;
  transform = UnityEngine_GameObject__get_transform(v7, 0LL);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return (UnityEngine_Transform_o *)NodeFromName;
  uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
  if ( !uniqueFieldPosArray )
LABEL_30:
    sub_B7076C(v7, v6);
  max_length = uniqueFieldPosArray->max_length;
  if ( (int)(max_length - 1) < 0 )
    return 0LL;
  v12 = max_length - 2;
  v13 = (int)(max_length - 1) + 4LL;
  while ( 1 )
  {
    if ( v13 - 4 >= (unsigned __int64)uniqueFieldPosArray->max_length )
    {
LABEL_33:
      v18 = sub_B70798(v7);
      sub_B70738(v18, 0LL);
    }
    v14 = (UnityEngine_Object_o *)*((_QWORD *)&uniqueFieldPosArray->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v15 = this->fields.uniqueFieldPosArray;
      if ( !v15 )
        goto LABEL_30;
      if ( v13 - 4 >= (unsigned __int64)v15->max_length )
        goto LABEL_33;
      v7 = (UnityEngine_GameObject_o *)*((_QWORD *)&v15->obj.klass + v13);
      if ( !v7 )
        goto LABEL_30;
      v16 = UnityEngine_GameObject__get_transform(v7, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v16, name, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    if ( (v12 & 0x80000000) != 0 )
      return 0LL;
    uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
    --v12;
    --v13;
    if ( !uniqueFieldPosArray )
      goto LABEL_30;
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UnityEngine_GameObject_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  struct System_Action_o *callbackFunc; // x8
  _QWORD *monitor; // x8
  __int64 v21; // x8
  struct UnityEngine_GameObject_array *v22; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned int *v30; // x21
  signed __int64 v31; // x8
  __int64 v32; // x22
  signed __int64 v33; // x25
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x20
  unsigned __int64 v44; // x25
  __int64 v45; // x0
  __int64 v46; // x0
  int v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43521D0 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B70694(&StringLiteral_11681/*"RootCameraPrefab"*/);
    sub_B70694(&StringLiteral_6736/*"FieldMotionPrefab"*/);
    sub_B70694(&StringLiteral_646/*"(motion)"*/);
    sub_B70694(&StringLiteral_6737/*"FieldMotionPrefab(common)"*/);
    byte_43521D0 = 1;
  }
  v47 = 0;
  v3 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11681/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.cameraPos, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6737/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fieldPos,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  callbackFunc = Instance->fields.callbackFunc;
  if ( !callbackFunc
    || (monitor = callbackFunc[7].monitor) == 0LL
    || (v21 = monitor[2]) == 0
    || (v22 = (struct UnityEngine_GameObject_array *)sub_B706AC(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*(_DWORD *)(v21 + 24) - 1)),
        this->fields.uniqueFieldPosArray = v22,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_B70630(
          (BattleServantConfConponent_o *)p_uniqueFieldPosArray,
          (System_Int32_array **)v22,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        (v30 = (unsigned int *)*p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_14:
    sub_B7076C(Instance, v18);
  }
  v31 = 0LL;
  v32 = 8LL;
  while ( v31 < (int)v30[6] )
  {
    v33 = v31 + 1;
    v47 = v31 + 1;
    v34 = System_Int32__ToString((int32_t)&v47, 0LL);
    v35 = System_String__Concat_44760452(
            (System_String_o *)StringLiteral_6736/*"FieldMotionPrefab"*/,
            v34,
            (System_String_o *)StringLiteral_646/*"(motion)"*/,
            0LL);
    v36 = UnityEngine_GameObject__Find(v35, 0LL);
    v43 = (System_Int32_array **)v36;
    if ( v36 )
    {
      v36 = (UnityEngine_GameObject_o *)sub_B70754(v36, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
      if ( !v36 )
      {
        v46 = sub_B7078C(0LL);
        sub_B70738(v46, 0LL);
      }
    }
    v44 = v33 - 1;
    if ( v44 >= v30[6] )
    {
      v45 = sub_B70798(v36);
      sub_B70738(v45, 0LL);
    }
    *(_QWORD *)&v30[v32] = v43;
    sub_B70630((BattleServantConfConponent_o *)&v30[v32], v43, v37, v38, v39, v40, v41, v42);
    v30 = (unsigned int *)*p_uniqueFieldPosArray;
    v32 += 2LL;
    v31 = v44 + 1;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_14;
  }
}