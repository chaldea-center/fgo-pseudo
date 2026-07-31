void FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_593A0A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
    byte_593A0A4 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_593A09D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
    byte_593A09D = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EC1C *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  float v11; // s11
  float v12; // s12
  float v13; // s13
  Il2CppObject *Instance; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t result; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v11 = pos.fields.z;
  v12 = pos.fields.y;
  v13 = pos.fields.x;
  if ( (byte_593A0A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_593A0A3 = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0);
    if ( !Instance )
      sub_21FFECC(v20, v21);
    v23.fields.x = v13;
    v23.fields.y = v12;
    v23.fields.z = v11;
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
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593A0A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A0A0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( v5 )
  {
    if ( !Component_object )
      sub_21FFECC(v5, v6);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0);
  }
}


void FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_593A09F & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593A09F = 1;
  }
  if ( this->fields.isEditorMode && !this->fields.isInitialized )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
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

  if ( (byte_593A0A1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A0A1 = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_21FFECC(0, v6);
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
  __int64 v9; // x1
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  __int64 v12; // x8
  __int64 i; // x23
  struct UnityEngine_GameObject_array *v14; // x8
  __int64 v15; // x24
  UnityEngine_Object_o *v16; // x21
  struct UnityEngine_GameObject_array *v17; // x8
  UnityEngine_Transform_o *v18; // x0
  __int64 v19; // x1

  if ( (byte_593A0A2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A0A2 = 1;
  }
  fieldPos = (UnityEngine_Object_o *)this->fields.fieldPos;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( !UnityEngine_Object__op_Implicit(fieldPos, 0) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.fieldPos;
  if ( !v7 )
    goto LABEL_28;
  transform = UnityEngine_GameObject__get_transform(v7, 0);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    uniqueFieldPosArray = this->fields.uniqueFieldPosArray;
    if ( !uniqueFieldPosArray )
      goto LABEL_28;
    v12 = (unsigned int)(LODWORD(uniqueFieldPosArray->max_length) - 1);
    if ( (int)v12 >= 0 )
    {
      for ( i = v12 + 4; ; --i )
      {
        v14 = this->fields.uniqueFieldPosArray;
        if ( !v14 )
          break;
        v15 = i - 4;
        if ( i - 4 >= (unsigned __int64)LODWORD(v14->max_length) )
          goto LABEL_29;
        v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14->obj.klass + i);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v16, 0, 0);
        if ( ((unsigned __int8)v7 & 1) == 0 )
        {
          v17 = this->fields.uniqueFieldPosArray;
          if ( !v17 )
            break;
          if ( v15 >= (unsigned __int64)LODWORD(v17->max_length) )
LABEL_29:
            sub_21FFED4(v7);
          v7 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->obj.klass + i);
          if ( !v7 )
            break;
          v18 = UnityEngine_GameObject__get_transform(v7, 0);
          NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v18, name, 0, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
          v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
          if ( ((unsigned __int8)v7 & 1) != 0 )
            return (UnityEngine_Transform_o *)NodeFromName;
        }
        if ( v15 <= 0 )
          return 0;
      }
LABEL_28:
      sub_21FFECC(v7, v6);
    }
    return 0;
  }
  return (UnityEngine_Transform_o *)NodeFromName;
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UnityEngine_GameObject_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x8
  const MethodInfo *v20; // x8
  InvokerMethod invoker_method; // x8
  struct UnityEngine_GameObject_array *v22; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UnityEngine_GameObject_array *v30; // x21
  unsigned __int64 v31; // x20
  __int64 v32; // x24
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593A09E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11904/*"RootCameraPrefab"*/);
    sub_21FFC50(&StringLiteral_6973/*"FieldMotionPrefab"*/);
    sub_21FFC50(&StringLiteral_768/*"(motion)"*/);
    sub_21FFC50(&StringLiteral_6974/*"FieldMotionPrefab(common)"*/);
    byte_593A09E = 1;
  }
  v42 = 0;
  v3 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11904/*"RootCameraPrefab"*/, 0);
  this->fields.cameraPos = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cameraPos, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6974/*"FieldMotionPrefab(common)"*/, 0);
  this->fields.fieldPos = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fieldPos, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[4].klass;
  if ( !klass
    || (v20 = klass->vtable[22].method) == 0
    || (invoker_method = v20->invoker_method) == 0
    || (v22 = (struct UnityEngine_GameObject_array *)sub_21FFD10(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*((_DWORD *)invoker_method + 6) - 1)),
        this->fields.uniqueFieldPosArray = v22,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p_uniqueFieldPosArray,
          (int32_t)v22,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        (v30 = *p_uniqueFieldPosArray) == 0) )
  {
LABEL_12:
    sub_21FFECC(Instance, v18);
  }
  v31 = 0;
  v32 = 32;
  while ( (__int64)v31 < SLODWORD(v30->max_length) )
  {
    v42 = v31 + 1;
    v33 = System_Int32__ToString((int32_t)&v42, 0);
    v34 = System_String__Concat_75481624(
            (System_String_o *)StringLiteral_6973/*"FieldMotionPrefab"*/,
            v33,
            (System_String_o *)StringLiteral_768/*"(motion)"*/,
            0);
    v35 = UnityEngine_GameObject__Find(v34, 0);
    if ( v31 >= LODWORD(v30->max_length) )
      sub_21FFED4(v35);
    *(Il2CppClass **)((char *)&v30->obj.klass + v32) = (Il2CppClass *)v35;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v30 + v32), (int32_t)v35, v36, v37, v38, v39, v40, v41);
    v30 = *p_uniqueFieldPosArray;
    v32 += 8;
    ++v31;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}