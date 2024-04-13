void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8C62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E8C62 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8C5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__, (_DWORD)method, v2, v3);
    byte_42E8C5B = 1;
  }
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2A30094 *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  if ( (byte_42E8C61 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__,
      (_DWORD)name,
      (_DWORD)bgType,
      parentCamera);
    byte_42E8C61 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_B5D69C(v20, v21);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_42E8C5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8C5E = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Implicit(Component_WebViewObject, 0LL);
  if ( v9 )
  {
    if ( !Component_WebViewObject )
      sub_B5D69C(v9, v10);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_WebViewObject, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8C5D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C5D = 1;
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
  __int64 v3; // x3
  UnityEngine_Object_o *cameraPos; // x21
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_42E8C5F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E8C5F = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0LL) )
    FGOSequenceManager__setup(this, v7);
  v8 = this->fields.cameraPos;
  if ( !v8 )
    sub_B5D69C(0LL, v7);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  return TransformHelper__getNodeFromName(transform, name, 0, 0LL);
}


UnityEngine_Transform_o *__fastcall FGOSequenceManager__getCharacterPosition(
        FGOSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *fieldPos; // x21
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v13; // w23
  __int64 v14; // x24
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Transform_o *v17; // x0
  __int64 v19; // x0

  if ( (byte_42E8C60 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E8C60 = 1;
  }
  fieldPos = (UnityEngine_Object_o *)this->fields.fieldPos;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(fieldPos, 0LL) )
    FGOSequenceManager__setup(this, v7);
  v8 = this->fields.fieldPos;
  if ( !v8 )
    goto LABEL_30;
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return (UnityEngine_Transform_o *)NodeFromName;
  uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
  if ( !uniqueFieldPosArray )
LABEL_30:
    sub_B5D69C(v8, v7);
  max_length = uniqueFieldPosArray->max_length;
  if ( (int)(max_length - 1) < 0 )
    return 0LL;
  v13 = max_length - 2;
  v14 = (int)(max_length - 1) + 4LL;
  while ( 1 )
  {
    if ( v14 - 4 >= (unsigned __int64)uniqueFieldPosArray->max_length )
    {
LABEL_33:
      v19 = sub_B5D6C8(v8);
      sub_B5D668(v19, 0LL);
    }
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&uniqueFieldPosArray->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v16 = this->fields.uniqueFieldPosArray;
      if ( !v16 )
        goto LABEL_30;
      if ( v14 - 4 >= (unsigned __int64)v16->max_length )
        goto LABEL_33;
      v8 = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->obj.klass + v14);
      if ( !v8 )
        goto LABEL_30;
      v17 = UnityEngine_GameObject__get_transform(v8, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v17, name, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    if ( (v13 & 0x80000000) != 0 )
      return 0LL;
    uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
    --v13;
    --v14;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct UnityEngine_GameObject_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UnityEngine_GameObject_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WebViewManager_o *Instance; // x0
  __int64 v35; // x1
  struct System_Action_o *callbackFunc; // x8
  struct System_DelegateData_o *data; // x8
  struct System_Type_o *target_type; // x8
  struct UnityEngine_GameObject_array *v39; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  unsigned int *v47; // x21
  signed __int64 v48; // x8
  __int64 v49; // x22
  signed __int64 v50; // x25
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x20
  unsigned __int64 v61; // x25
  __int64 v62; // x0
  __int64 v63; // x0
  int v64; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E8C5C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11660/*"RootCameraPrefab"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6723/*"FieldMotionPrefab"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_642/*"(motion)"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6724/*"FieldMotionPrefab(common)"*/, v17, v18, v19);
    byte_42E8C5C = 1;
  }
  v64 = 0;
  v20 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11660/*"RootCameraPrefab"*/, 0LL);
  this->fields.cameraPos = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cameraPos,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6724/*"FieldMotionPrefab(common)"*/, 0LL);
  this->fields.fieldPos = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fieldPos,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  callbackFunc = Instance->fields.callbackFunc;
  if ( !callbackFunc
    || (data = callbackFunc[6].fields.data) == 0LL
    || (target_type = data->fields.target_type) == 0LL
    || (v39 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(LODWORD(target_type[1].klass) - 1)),
        this->fields.uniqueFieldPosArray = v39,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_B5D560(
          (BattleServantConfConponent_o *)p_uniqueFieldPosArray,
          (System_Int32_array **)v39,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        (v47 = (unsigned int *)*p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(Instance, v35);
  }
  v48 = 0LL;
  v49 = 8LL;
  while ( v48 < (int)v47[6] )
  {
    v50 = v48 + 1;
    v64 = v48 + 1;
    v51 = System_Int32__ToString((int32_t)&v64, 0LL);
    v52 = System_String__Concat_44580072(
            (System_String_o *)StringLiteral_6723/*"FieldMotionPrefab"*/,
            v51,
            (System_String_o *)StringLiteral_642/*"(motion)"*/,
            0LL);
    v53 = UnityEngine_GameObject__Find(v52, 0LL);
    v60 = (System_Int32_array **)v53;
    if ( v53 )
    {
      v53 = (UnityEngine_GameObject_o *)sub_B5D684(v53, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
      if ( !v53 )
      {
        v63 = sub_B5D6BC(0LL);
        sub_B5D668(v63, 0LL);
      }
    }
    v61 = v50 - 1;
    if ( v61 >= v47[6] )
    {
      v62 = sub_B5D6C8(v53);
      sub_B5D668(v62, 0LL);
    }
    *(_QWORD *)&v47[v49] = v60;
    sub_B5D560((BattleServantConfConponent_o *)&v47[v49], v60, v54, v55, v56, v57, v58, v59);
    v47 = (unsigned int *)*p_uniqueFieldPosArray;
    v49 += 2LL;
    v48 = v61 + 1;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_14;
  }
}