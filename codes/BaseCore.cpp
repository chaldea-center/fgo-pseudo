void __fastcall BaseCore___ctor(BaseCore_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BaseCore__Awake(BaseCore_o *this, const MethodInfo *method)
{
  this->fields.mCoreType = 0;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BaseCore__CreateEarthPoint___Il2CppFullySharedGenericType_(
        BaseCore_o *this,
        int32_t warId,
        float x,
        float y,
        float z,
        const MethodInfo_2F99C2C *method)
{
  __int64 v6; // x3
  __int64 v7; // x20
  __int64 v10; // x8
  __int64 v14; // x21
  Il2CppObject *mEarthPointPrefab; // x24
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *mEarthPointRoot; // x1
  UnityEngine_GameObject_o *v18; // x23
  System_String_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *transform; // x24
  System_String_o *v22; // x0
  __int64 *v23; // x1
  __int64 v24; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // x0 OVERLAPPED
  void *v26; // x1
  _BYTE v27[12]; // [xsp+0h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-2Ch] BYREF
  __int64 v29[2]; // [xsp+10h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v7 = v6;
  v29[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v28 = warId;
  v10 = *(_QWORD *)(v6 + 56);
  if ( !v10 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5959/*"EarthPoint_"*/);
    v10 = *(_QWORD *)(v7 + 56);
    if ( !v10 )
    {
      sub_1C73D70(v7);
      v10 = *(_QWORD *)(v7 + 56);
    }
  }
  v14 = *(unsigned int *)(*(_QWORD *)(v10 + 8) + 252LL);
  mEarthPointPrefab = (Il2CppObject *)this->fields.mEarthPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          mEarthPointPrefab,
          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEarthPointRoot = this->fields.mEarthPointRoot;
  v18 = (UnityEngine_GameObject_o *)v16;
  GameObjectExtensions__SetParent_34803496((UnityEngine_GameObject_o *)v16, mEarthPointRoot, 0LL);
  if ( !v18
    || (transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v18, 0LL),
        v22 = System_Int32__ToString((int32_t)&v28, 0LL),
        v19 = System_String__Concat_63115476((System_String_o *)StringLiteral_5959/*"EarthPoint_"*/, v22, 0LL),
        !transform) )
  {
    sub_1C22094(v19, v20);
  }
  UnityEngine_Object__set_name(transform, v19, 0LL);
  GameObjectExtensions__SetLocalPosition_34797772(v18, x, y, z, 0LL);
  v23 = **(__int64 ***)(v7 + 56);
  v24 = *v23;
  v29[0] = (__int64)&v27[-((v14 + 15) & 0x1FFFFFFF0LL)];
  ((void (__fastcall *)(__int64, __int64 *, UnityEngine_GameObject_o *, __int64 *, __int64))v23[2])(
    v24,
    v23,
    v18,
    v29,
    v29[0]);
  v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    &v27[-((v14 + 15) & 0x1FFFFFFF0LL)],
                                                                    v14);
  result.monitor = v26;
  result.klass = v25;
  return result;
}


Il2CppObject *__fastcall BaseCore__CreateEarthPoint_object_(
        BaseCore_o *this,
        int32_t warId,
        float x,
        float y,
        float z,
        const MethodInfo_2F99AF8 *method)
{
  Il2CppObject *mEarthPointPrefab; // x21
  Il2CppObject *v12; // x0
  UnityEngine_GameObject_o *mEarthPointRoot; // x1
  UnityEngine_GameObject_o *v14; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *transform; // x21
  System_String_o *v18; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v20 = warId;
  if ( !method->rgctx_data )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5959/*"EarthPoint_"*/);
    if ( !method->rgctx_data )
      sub_1C73D70(method);
  }
  mEarthPointPrefab = (Il2CppObject *)this->fields.mEarthPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object_(
          mEarthPointPrefab,
          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEarthPointRoot = this->fields.mEarthPointRoot;
  v14 = (UnityEngine_GameObject_o *)v12;
  GameObjectExtensions__SetParent_34803496((UnityEngine_GameObject_o *)v12, mEarthPointRoot, 0LL);
  if ( !v14
    || (transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v14, 0LL),
        v18 = System_Int32__ToString((int32_t)&v20, 0LL),
        v15 = System_String__Concat_63115476((System_String_o *)StringLiteral_5959/*"EarthPoint_"*/, v18, 0LL),
        !transform) )
  {
    sub_1C22094(v15, v16);
  }
  UnityEngine_Object__set_name(transform, v15, 0LL);
  GameObjectExtensions__SetLocalPosition_34797772(v14, x, y, z, 0LL);
  return UnityEngine_GameObject__GetComponent_object_(
           v14,
           (const MethodInfo_3000534 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


void __fastcall BaseCore__EndSlideServant(BaseCore_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  BaseCore_o *v3; // x19
  struct TerminalSceneComponent_o *v4; // x8

  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_8;
  v3 = this;
  this = (BaseCore_o *)mTerminalScene->fields.mTerminalServant;
  if ( !this )
    goto LABEL_8;
  this = (BaseCore_o *)StandFigureSlideComponent__IsMoving((StandFigureSlideComponent_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v3->fields.mTerminalScene;
    if ( v4 )
    {
      this = (BaseCore_o *)v4->fields.mTerminalServant;
      if ( this )
      {
        StandFigureSlideComponent__EndSlide((StandFigureSlideComponent_o *)this, 0LL);
        return;
      }
    }
LABEL_8:
    sub_1C22094(this, method);
  }
}


void __fastcall BaseCore__FocusIn(BaseCore_o *this, bool isForce, const MethodInfo *method)
{
  ((void (__fastcall *)(BaseCore_o *, __int64, bool, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    1LL,
    isForce,
    this->klass->vtable._5_Awake.methodPtr);
}


void __fastcall BaseCore__FocusInOut(BaseCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__FocusOut(BaseCore_o *this, bool isForce, const MethodInfo *method)
{
  ((void (__fastcall *)(BaseCore_o *, _QWORD, bool, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    0LL,
    isForce,
    this->klass->vtable._5_Awake.methodPtr);
}


float __fastcall BaseCore__GetAutoRotationSpeed(BaseCore_o *this, const MethodInfo *method)
{
  return ChangedFPSUtil__CalcVelocityForCurrentFps(-0.4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BaseEarthPoint_o *__fastcall BaseCore__GetEarthPoint(BaseCore_o *this, int32_t warId, const MethodInfo *method)
{
  BaseEarthPoint_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v6; // x0
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = warId;
  if ( (byte_4BD8F2E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5959/*"EarthPoint_"*/);
    byte_4BD8F2E = 1;
  }
  result = (BaseEarthPoint_o *)this->fields.mEarthPointRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  result = (BaseEarthPoint_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_5959/*"EarthPoint_"*/, v6, 0LL);
  if ( !transform )
    goto LABEL_12;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  result = 0LL;
  if ( v8 )
  {
    if ( v7 )
    {
      result = (BaseEarthPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( result )
        return (BaseEarthPoint_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)result,
                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___);
    }
LABEL_12:
    sub_1C22094(result, *(_QWORD *)&warId);
  }
  return result;
}


int32_t __fastcall BaseCore__GetState(BaseCore_o *this, const MethodInfo *method)
{
  return 0;
}


float __fastcall BaseCore__GetStateMainInertialSpdOld(BaseCore_o *this, const MethodInfo *method)
{
  return 0.0;
}


void __fastcall BaseCore__HideEarthPoint(BaseCore_o *this, int32_t warId, const MethodInfo *method)
{
  UnityEngine_Object_o *EarthPoint; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4BD8F30 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8F30 = 1;
  }
  EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint(this, warId, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EarthPoint, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !EarthPoint
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL)) == 0LL )
    {
      sub_1C22094(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


bool __fastcall BaseCore__IsWarOpen(BaseCore_o *this, MapControl_WarInfo_o *warInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20

  if ( (byte_4BD8F2F & 1) == 0 )
  {
    this = (BaseCore_o *)sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BD8F2F = 1;
  }
  if ( !warInfo )
    goto LABEL_9;
  this = (BaseCore_o *)MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !this )
    goto LABEL_9;
  if ( WarEntity__IsEvent((WarEntity_o *)this, 0LL) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (BaseCore_o *)MapControl_WarInfo__GetMine(warInfo, 0LL);
    if ( Instance )
      return QuestTree__IsActiveEventWar_35200004((QuestTree_o *)Instance, (WarEntity_o *)this, 0LL);
LABEL_9:
    sub_1C22094(this, warInfo);
  }
  return (unsigned int)(MapControl_WarInfo__GetStatus(warInfo, 0LL) - 1) < 2;
}


void __fastcall BaseCore__OnPress(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__OnRelease(BaseCore_o *this, const MethodInfo *method)
{
  this->fields.mIsTouch = 0;
}


void __fastcall BaseCore__SetDisp(BaseCore_o *this, bool isDisp, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__SetFocusEarthPoint(BaseCore_o *this, int32_t warId, const MethodInfo *method)
{
  struct BaseEarthPoint_o *EarthPoint; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  EarthPoint = BaseCore__GetEarthPoint(this, warId, method);
  this->fields.mFocusEarthPoint = EarthPoint;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mFocusEarthPoint,
    (int64_t)EarthPoint,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BaseCore__SetRotateY_PointInitAngle(BaseCore_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float PointInitAngle_k__BackingField; // s10
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localEulerAngles = UnityEngine_Transform__get_localEulerAngles(transform, 0LL),
        PointInitAngle_k__BackingField = this->fields._PointInitAngle_k__BackingField,
        x = localEulerAngles.fields.x,
        z = localEulerAngles.fields.z,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C22094(transform, v4);
  }
  v9.fields.x = x;
  v9.fields.z = z;
  v9.fields.y = PointInitAngle_k__BackingField;
  UnityEngine_Transform__set_localEulerAngles(transform, v9, 0LL);
}


void __fastcall BaseCore__SetState(BaseCore_o *this, int32_t state, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__SetTerminalData(BaseCore_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v11; // x1
  UnityEngine_Component_o *mTerminalMap; // x0
  __int64 v13; // x1
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct TerminalSceneComponent_o *v28; // x8
  struct UnityEngine_Camera_o *mEarthEffCamera; // x1

  if ( (byte_4BD8F2D & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD8F2D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v9->static_fields->mInstance;
  v11 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mTerminalScene, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene
    || (mTerminalMap = (UnityEngine_Component_o *)mTerminalScene->fields.mTerminalMap) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalMap, 0LL),
        this->fields.mTerminalMap = gameObject,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.mTerminalMap,
          (int64_t)gameObject,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (v28 = this->fields.mTerminalScene) == 0LL) )
  {
    sub_1C22094(mTerminalMap, v13);
  }
  mEarthEffCamera = v28->fields.mEarthEffCamera;
  this->fields.mEarthEffCamera = mEarthEffCamera;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mEarthEffCamera,
    (int64_t)mEarthEffCamera,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall BaseCore__Setup(
        BaseCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__Update(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall BaseCore__get_CoreType(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields.mCoreType;
}


bool __fastcall BaseCore__get_IsFocusIn(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields.mIsFocusIn;
}


bool __fastcall BaseCore__get_IsFocusMoving(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields.mIsFocusMoving;
}


float __fastcall BaseCore__get_PointInitAngle(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields._PointInitAngle_k__BackingField;
}


void __fastcall BaseCore__mcbfStartMain(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__mcbfStartZoomIn(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__mcbfStartZoomOut(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__set_PointInitAngle(BaseCore_o *this, float value, const MethodInfo *method)
{
  this->fields._PointInitAngle_k__BackingField = value;
}