void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F9F40 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__, method);
    byte_40F9F40 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F9F39 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__, method);
    byte_40F9F39 = 1;
  }
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2A5516C *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  int32_t v20; // w0
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v12 = pos.fields.z;
  v13 = pos.fields.y;
  v14 = pos.fields.x;
  if ( (byte_40F9F3F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, name);
    byte_40F9F3F = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_B170D4();
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
  WebViewObject_o *Component_WebViewObject; // x19

  if ( (byte_40F9F3C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9F3C = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_WebViewObject, 0LL) )
  {
    if ( !Component_WebViewObject )
      sub_B170D4();
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_WebViewObject, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F9F3B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9F3B = 1;
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

  if ( (byte_40F9F3D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    byte_40F9F3D = 1;
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
    sub_B170D4();
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v15; // w23
  __int64 v16; // x24
  UnityEngine_Object_o *v17; // x21
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Transform_o *v20; // x0

  if ( (byte_40F9F3E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    byte_40F9F3E = 1;
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
  v10 = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( v10 )
    return (UnityEngine_Transform_o *)NodeFromName;
  uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
  if ( !uniqueFieldPosArray )
LABEL_30:
    sub_B170D4();
  max_length = uniqueFieldPosArray->max_length;
  if ( (int)(max_length - 1) < 0 )
    return 0LL;
  v15 = max_length - 2;
  v16 = (int)(max_length - 1) + 4LL;
  while ( 1 )
  {
    if ( v16 - 4 >= (unsigned __int64)uniqueFieldPosArray->max_length )
    {
LABEL_33:
      sub_B17100(v10, v11, v12);
      sub_B170A0();
    }
    v17 = (UnityEngine_Object_o *)*((_QWORD *)&uniqueFieldPosArray->obj.klass + v16);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
    if ( !v10 )
    {
      v18 = this->fields.uniqueFieldPosArray;
      if ( !v18 )
        goto LABEL_30;
      if ( v16 - 4 >= (unsigned __int64)v18->max_length )
        goto LABEL_33;
      v19 = (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v16);
      if ( !v19 )
        goto LABEL_30;
      v20 = UnityEngine_GameObject__get_transform(v19, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v20, name, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( v10 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    if ( (v15 & 0x80000000) != 0 )
      return 0LL;
    uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
    --v15;
    --v16;
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
  __int64 v23; // x2
  struct System_Action_o *callbackFunc; // x8
  struct System_DelegateData_o *data; // x8
  struct System_Type_o *target_type; // x8
  struct UnityEngine_GameObject_array *v27; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  unsigned int *v35; // x21
  signed __int64 v36; // x8
  __int64 v37; // x22
  signed __int64 v38; // x25
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x20
  unsigned __int64 v50; // x25
  int v51; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F9F3A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_11491/*"RootCameraPrefab"*/, v4);
    sub_B16FFC(&StringLiteral_6619/*"FieldMotionPrefab"*/, v5);
    sub_B16FFC(&StringLiteral_634/*"(motion)"*/, v6);
    sub_B16FFC(&StringLiteral_6620/*"FieldMotionPrefab(common)"*/, v7);
    byte_40F9F3A = 1;
  }
  v51 = 0;
  v8 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11491/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cameraPos,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6620/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fieldPos,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  callbackFunc = Instance->fields.callbackFunc;
  if ( !callbackFunc
    || (data = callbackFunc[6].fields.data) == 0LL
    || (target_type = data->fields.target_type) == 0LL
    || (v27 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(LODWORD(target_type[1].klass) - 1),
                                                       v23),
        this->fields.uniqueFieldPosArray = v27,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_B16F98(
          (BattleServantConfConponent_o *)p_uniqueFieldPosArray,
          (System_Int32_array **)v27,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (v35 = (unsigned int *)*p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v36 = 0LL;
  v37 = 8LL;
  while ( v36 < (int)v35[6] )
  {
    v38 = v36 + 1;
    v51 = v36 + 1;
    v39 = System_Int32__ToString((int32_t)&v51, 0LL);
    v40 = System_String__Concat_43746016(
            (System_String_o *)StringLiteral_6619/*"FieldMotionPrefab"*/,
            v39,
            (System_String_o *)StringLiteral_634/*"(motion)"*/,
            0LL);
    v41 = UnityEngine_GameObject__Find(v40, 0LL);
    v49 = (System_Int32_array **)v41;
    if ( v41 )
    {
      v41 = (UnityEngine_GameObject_o *)sub_B170BC(v41, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
      if ( !v41 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    v50 = v38 - 1;
    if ( v50 >= v35[6] )
    {
      sub_B17100(v41, v42, v43);
      sub_B170A0();
    }
    *(_QWORD *)&v35[v37] = v49;
    sub_B16F98((BattleServantConfConponent_o *)&v35[v37], v49, v43, v44, v45, v46, v47, v48);
    v35 = (unsigned int *)*p_uniqueFieldPosArray;
    v37 += 2LL;
    v36 = v50 + 1;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_14;
  }
}