void __fastcall FGOSequenceManager___ctor(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5EBE & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__, method);
    byte_4BB5EBE = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_FGOSequenceManager___ctor__);
}


void __fastcall FGOSequenceManager__Awake(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5EB7 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__, method);
    byte_4BB5EB7 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869EFC *)Method_SingletonMonoBehaviour_FGOSequenceManager__Awake__);
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
  if ( (byte_4BB5EBD & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, name);
    byte_4BB5EBD = 1;
  }
  result = 0;
  if ( !System_Int32__TryParse(bgType, &result, 0LL) )
    result = 0;
  if ( !this->fields.isEditorMode )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v20 = System_Int32__Parse(name, 0LL);
    if ( !Instance )
      sub_1C13F80(v20, v21);
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

  if ( (byte_4BB5EBA & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_ForceDisableObject___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB5EBA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_ForceDisableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( v5 )
  {
    if ( !Component_object )
      sub_1C13F80(v5, v6);
    ForceDisableObject__DisableAllObjects((ForceDisableObject_o *)Component_object, 0LL);
  }
}


void __fastcall FGOSequenceManager__SetupSound(FGOSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5EB9 & 1) == 0 )
  {
    sub_1C13D24(&SoundManager_TypeInfo, method);
    byte_4BB5EB9 = 1;
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

  if ( (byte_4BB5EBB & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, name);
    byte_4BB5EBB = 1;
  }
  cameraPos = (UnityEngine_Object_o *)this->fields.cameraPos;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(cameraPos, 0LL) )
    FGOSequenceManager__setup(this, v6);
  v7 = this->fields.cameraPos;
  if ( !v7 )
    sub_1C13F80(0LL, v6);
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
  struct UnityEngine_GameObject_array *uniqueFieldPosArray; // x8
  unsigned int v12; // w9
  __int64 v13; // x23
  UnityEngine_Object_o *v14; // x21
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4BB5EBC & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, name);
    byte_4BB5EBC = 1;
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
    sub_1C13F80(v7, v6);
  v12 = uniqueFieldPosArray->max_length - 1;
  if ( (v12 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v12 >= uniqueFieldPosArray->max_length )
LABEL_28:
      sub_1C13F88(v7, v6);
    v13 = v12;
    v14 = (UnityEngine_Object_o *)uniqueFieldPosArray->m_Items[v12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v15 = this->fields.uniqueFieldPosArray;
      if ( !v15 )
        goto LABEL_25;
      if ( (unsigned int)v13 >= v15->max_length )
        goto LABEL_28;
      v7 = v15->m_Items[v13];
      if ( !v7 )
        goto LABEL_25;
      v16 = UnityEngine_GameObject__get_transform(v7, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v16, name, 0, v17);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return (UnityEngine_Transform_o *)NodeFromName;
    }
    v12 = v13 - 1;
    if ( (int)v13 - 1 < 0 )
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UnityEngine_GameObject_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x8
  __int64 v26; // x8
  struct UnityEngine_GameObject_array *v27; // x0
  struct UnityEngine_GameObject_array **p_uniqueFieldPosArray; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UnityEngine_GameObject_array *v35; // x23
  unsigned __int64 v36; // x20
  __int64 v37; // x24
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int v48; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB5EB8 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_GameObject___TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    sub_1C13D24(&StringLiteral_11591/*"RoadMap"*/, v4);
    sub_1C13D24(&StringLiteral_6823/*"FieldGetter"*/, v5);
    sub_1C13D24(&StringLiteral_788/*"(motion)"*/, v6);
    sub_1C13D24(&StringLiteral_6824/*"FieldInfo does not match the target Type."*/, v7);
    byte_4BB5EB8 = 1;
  }
  v48 = 0;
  v8 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11591/*"RoadMap"*/, 0LL);
  this->fields.cameraPos = v8;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.cameraPos, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6824/*"FieldInfo does not match the target Type."*/, 0LL);
  this->fields.fieldPos = v15;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.fieldPos, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[5].klass;
  if ( !klass
    || (methodPtr = klass->vtable[21].methodPtr) == 0LL
    || (v26 = *((_QWORD *)methodPtr + 2)) == 0
    || (v27 = (struct UnityEngine_GameObject_array *)sub_1C13DCC(
                                                       UnityEngine_GameObject___TypeInfo,
                                                       (unsigned int)(*(_DWORD *)(v26 + 24) - 1)),
        this->fields.uniqueFieldPosArray = v27,
        p_uniqueFieldPosArray = &this->fields.uniqueFieldPosArray,
        sub_1C13CC8((PartyOrganizationUtility_o *)p_uniqueFieldPosArray, (int64_t)v27, v29, v30, v31, v32, v33, v34),
        (v35 = *p_uniqueFieldPosArray) == 0LL) )
  {
LABEL_12:
    sub_1C13F80(Instance, v23);
  }
  v36 = 0LL;
  v37 = 32LL;
  while ( (__int64)v36 < (int)v35->max_length )
  {
    v48 = v36 + 1;
    v38 = System_Int32__ToString((int32_t)&v48, 0LL);
    v39 = System_String__Concat_62979204(
            (System_String_o *)StringLiteral_6823/*"FieldGetter"*/,
            v38,
            (System_String_o *)StringLiteral_788/*"(motion)"*/,
            0LL);
    v40 = UnityEngine_GameObject__Find(v39, 0LL);
    if ( v36 >= v35->max_length )
      sub_1C13F88(v40, v41);
    *(Il2CppClass **)((char *)&v35->obj.klass + v37) = (Il2CppClass *)v40;
    sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v35 + v37), (int64_t)v40, v42, v43, v44, v45, v46, v47);
    v35 = *p_uniqueFieldPosArray;
    v37 += 8LL;
    ++v36;
    if ( !*p_uniqueFieldPosArray )
      goto LABEL_12;
  }
}