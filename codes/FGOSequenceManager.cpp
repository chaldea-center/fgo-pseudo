void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_421540C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__, method);
    byte_421540C = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4215405 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__, method);
    byte_4215405 = 1;
  }
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2A71298 *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v12 = pos.fields.z;
  v13 = pos.fields.y;
  v14 = pos.fields.x;
  if ( (byte_421540B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, name);
    byte_421540B = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_B0D97C(v20);
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
  UnityEngine_Object_o *Component_WebViewObject; // x19
  _BOOL8 v5; // x0

  if ( (byte_4215408 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215408 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Implicit(Component_WebViewObject, 0LL);
  if ( v5 )
  {
    if ( !Component_WebViewObject )
      sub_B0D97C(v5);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_WebViewObject, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4215407 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215407 = 1;
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

  if ( (byte_4215409 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, name);
    byte_4215409 = 1;
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
    sub_B0D97C(0LL);
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

  if ( (byte_421540A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, name);
    byte_421540A = 1;
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
    sub_B0D97C(v7);
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
      v18 = sub_B0D9A8(v7);
      sub_B0D948(v18, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UnityEngine_GameObject_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WebViewManager_o *Instance; // x0
  struct System_Action_o *callbackFunc; // x8
  struct System_DelegateData_o *data; // x8
  struct System_Type_o *target_type; // x8
  struct UnityEngine_GameObject_array *v26; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  unsigned int *v34; // x21
  signed __int64 v35; // x8
  __int64 v36; // x22
  signed __int64 v37; // x25
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x20
  unsigned __int64 v48; // x25
  __int64 v49; // x0
  __int64 v50; // x0
  int v51; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4215406 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_11554/*"RootCameraPrefab"*/, v4);
    sub_B0D8A4(&StringLiteral_6660/*"FieldMotionPrefab"*/, v5);
    sub_B0D8A4(&StringLiteral_641/*"(motion)"*/, v6);
    sub_B0D8A4(&StringLiteral_6661/*"FieldMotionPrefab(common)"*/, v7);
    byte_4215406 = 1;
  }
  v51 = 0;
  v8 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11554/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cameraPos,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6661/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fieldPos,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  callbackFunc = Instance->fields.callbackFunc;
  if ( !callbackFunc
    || (data = callbackFunc[6].fields.data) == 0LL
    || (target_type = data->fields.target_type) == 0LL
    || (v26 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(LODWORD(target_type[1].klass) - 1)),
        this->fields.uniqueFieldPosArray = v26,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_B0D840(
          (BattleServantConfConponent_o *)p_uniqueFieldPosArray,
          (System_Int32_array **)v26,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33),
        (v34 = (unsigned int *)*p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  v35 = 0LL;
  v36 = 8LL;
  while ( v35 < (int)v34[6] )
  {
    v37 = v35 + 1;
    v51 = v35 + 1;
    v38 = System_Int32__ToString((int32_t)&v51, 0LL);
    v39 = System_String__Concat_43852188(
            (System_String_o *)StringLiteral_6660/*"FieldMotionPrefab"*/,
            v38,
            (System_String_o *)StringLiteral_641/*"(motion)"*/,
            0LL);
    v40 = UnityEngine_GameObject__Find(v39, 0LL);
    v47 = (System_Int32_array **)v40;
    if ( v40 )
    {
      v40 = (UnityEngine_GameObject_o *)sub_B0D964(v40, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
      if ( !v40 )
      {
        v50 = sub_B0D99C(0LL);
        sub_B0D948(v50, 0LL);
      }
    }
    v48 = v37 - 1;
    if ( v48 >= v34[6] )
    {
      v49 = sub_B0D9A8(v40);
      sub_B0D948(v49, 0LL);
    }
    *(_QWORD *)&v34[v36] = v47;
    sub_B0D840((BattleServantConfConponent_o *)&v34[v36], v47, v41, v42, v43, v44, v45, v46);
    v34 = (unsigned int *)*p_uniqueFieldPosArray;
    v36 += 2LL;
    v35 = v48 + 1;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_14;
  }
}