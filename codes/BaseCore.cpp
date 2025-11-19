void BaseCore___ctor(BaseCore_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BaseCore__Awake(BaseCore_o *this, const MethodInfo *method)
{
  this->fields.mCoreType = 0;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BaseCore__CreateEarthPoint___Il2CppFullySharedGenericType_(
        BaseCore_o *this,
        int32_t warId,
        float x,
        float y,
        float z,
        const MethodInfo_3123250 *method)
{
  __int64 v6; // x3
  __int64 v7; // x20
  __int64 v10; // x8
  size_t v14; // x21
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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // x0
  void *v26; // x1
  _BYTE v27[12]; // [xsp+0h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-2Ch] BYREF
  _QWORD v29[2]; // [xsp+10h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v7 = v6;
  v29[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v28 = warId;
  v10 = *(_QWORD *)(v6 + 56);
  if ( !v10 )
  {
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5831/*"EarthPoint_"*/);
    v10 = *(_QWORD *)(v7 + 56);
    if ( !v10 )
    {
      sub_1C41AF8(v7);
      v10 = *(_QWORD *)(v7 + 56);
    }
  }
  v14 = *(unsigned int *)(*(_QWORD *)(v10 + 8) + 252LL);
  mEarthPointPrefab = (Il2CppObject *)this->fields.mEarthPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          mEarthPointPrefab,
          (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEarthPointRoot = this->fields.mEarthPointRoot;
  v18 = (UnityEngine_GameObject_o *)v16;
  GameObjectExtensions__SetParent_36361856((UnityEngine_GameObject_o *)v16, mEarthPointRoot, 0);
  if ( !v18
    || (transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v18, 0),
        v22 = System_Int32__ToString((int32_t)&v28, 0),
        v19 = System_String__Concat_63966792((System_String_o *)StringLiteral_5831/*"EarthPoint_"*/, v22, 0),
        !transform) )
  {
    sub_1C6BC60(v19, v20);
  }
  UnityEngine_Object__set_name(transform, v19, 0);
  GameObjectExtensions__SetLocalPosition_36356244(v18, x, y, z, 0);
  v23 = **(__int64 ***)(v7 + 56);
  v24 = *v23;
  v29[0] = &v27[-((v14 + 15) & 0x1FFFFFFF0LL)];
  ((void (__fastcall *)(__int64, __int64 *, UnityEngine_GameObject_o *, _QWORD *, _QWORD))v23[2])(
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


Il2CppObject *BaseCore__CreateEarthPoint_object_(
        BaseCore_o *this,
        int32_t warId,
        float x,
        float y,
        float z,
        const MethodInfo_312311C *method)
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
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5831/*"EarthPoint_"*/);
    if ( !method->rgctx_data )
      sub_1C41AF8(method);
  }
  mEarthPointPrefab = (Il2CppObject *)this->fields.mEarthPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object_(
          mEarthPointPrefab,
          (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEarthPointRoot = this->fields.mEarthPointRoot;
  v14 = (UnityEngine_GameObject_o *)v12;
  GameObjectExtensions__SetParent_36361856((UnityEngine_GameObject_o *)v12, mEarthPointRoot, 0);
  if ( !v14
    || (transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v14, 0),
        v18 = System_Int32__ToString((int32_t)&v20, 0),
        v15 = System_String__Concat_63966792((System_String_o *)StringLiteral_5831/*"EarthPoint_"*/, v18, 0),
        !transform) )
  {
    sub_1C6BC60(v15, v16);
  }
  UnityEngine_Object__set_name(transform, v15, 0);
  GameObjectExtensions__SetLocalPosition_36356244(v14, x, y, z, 0);
  return UnityEngine_GameObject__GetComponent_object_(
           v14,
           (const MethodInfo_319312C *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


void BaseCore__EndSlideServant(BaseCore_o *this, const MethodInfo *method)
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
  this = (BaseCore_o *)StandFigureSlideComponent__IsMoving((StandFigureSlideComponent_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v3->fields.mTerminalScene;
    if ( v4 )
    {
      this = (BaseCore_o *)v4->fields.mTerminalServant;
      if ( this )
      {
        StandFigureSlideComponent__EndSlide((StandFigureSlideComponent_o *)this, 0);
        return;
      }
    }
LABEL_8:
    sub_1C6BC60(this, method);
  }
}


void BaseCore__FocusIn(BaseCore_o *this, bool isForce, const MethodInfo *method)
{
  ((void (__fastcall *)(BaseCore_o *, __int64, bool, const MethodInfo *))this->klass->vtable._4_FocusInOut.methodPtr)(
    this,
    1,
    isForce,
    this->klass->vtable._4_FocusInOut.method);
}


void BaseCore__FocusInOut(BaseCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  ;
}


void BaseCore__FocusOut(BaseCore_o *this, bool isForce, const MethodInfo *method)
{
  ((void (__fastcall *)(BaseCore_o *, _QWORD, bool, const MethodInfo *))this->klass->vtable._4_FocusInOut.methodPtr)(
    this,
    0,
    isForce,
    this->klass->vtable._4_FocusInOut.method);
}


float BaseCore__GetAutoRotationSpeed(BaseCore_o *this, const MethodInfo *method)
{
  return ChangedFPSUtil__CalcVelocityForCurrentFps(-0.4, 0);
}


// local variable allocation has failed, the output may be wrong!
BaseEarthPoint_o *BaseCore__GetEarthPoint(BaseCore_o *this, int32_t warId, const MethodInfo *method)
{
  BaseEarthPoint_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v6; // x0
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = warId;
  if ( (byte_4CB2A92 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5831/*"EarthPoint_"*/);
    byte_4CB2A92 = 1;
  }
  result = (BaseEarthPoint_o *)this->fields.mEarthPointRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
  v6 = System_Int32__ToString((int32_t)&v9, 0);
  result = (BaseEarthPoint_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_5831/*"EarthPoint_"*/, v6, 0);
  if ( !transform )
    goto LABEL_12;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
  result = 0;
  if ( v8 )
  {
    if ( v7 )
    {
      result = (BaseEarthPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
      if ( result )
        return (BaseEarthPoint_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)result,
                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___);
    }
LABEL_12:
    sub_1C6BC60(result, *(_QWORD *)&warId);
  }
  return result;
}


int32_t BaseCore__GetState(BaseCore_o *this, const MethodInfo *method)
{
  return 0;
}


float BaseCore__GetStateMainInertialSpdOld(BaseCore_o *this, const MethodInfo *method)
{
  return 0.0;
}


void BaseCore__HideEarthPoint(BaseCore_o *this, int32_t warId, const MethodInfo *method)
{
  UnityEngine_Object_o *EarthPoint; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4CB2A94 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2A94 = 1;
  }
  EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint(this, warId, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EarthPoint, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !EarthPoint
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0)) == 0 )
    {
      sub_1C6BC60(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


bool BaseCore__IsWarOpen(BaseCore_o *this, MapControl_WarInfo_o *warInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20

  if ( (byte_4CB2A93 & 1) == 0 )
  {
    this = (BaseCore_o *)sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CB2A93 = 1;
  }
  if ( !warInfo )
    goto LABEL_9;
  this = (BaseCore_o *)MapControl_WarInfo__GetMine(warInfo, 0);
  if ( !this )
    goto LABEL_9;
  if ( WarEntity__IsEvent((WarEntity_o *)this, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (BaseCore_o *)MapControl_WarInfo__GetMine(warInfo, 0);
    if ( Instance )
      return QuestTree__IsActiveEventWar_36852952((QuestTree_o *)Instance, (WarEntity_o *)this, 0);
LABEL_9:
    sub_1C6BC60(this, warInfo);
  }
  return (unsigned int)(MapControl_WarInfo__GetStatus(warInfo, 0) - 1) < 2;
}


void BaseCore__OnPress(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void BaseCore__OnRelease(BaseCore_o *this, const MethodInfo *method)
{
  this->fields.mIsTouch = 0;
}


void BaseCore__SetDisp(BaseCore_o *this, bool isDisp, const MethodInfo *method)
{
  ;
}


void BaseCore__SetFocusEarthPoint(BaseCore_o *this, int32_t warId, const MethodInfo *method)
{
  struct BaseEarthPoint_o *EarthPoint; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  EarthPoint = BaseCore__GetEarthPoint(this, warId, method);
  this->fields.mFocusEarthPoint = EarthPoint;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mFocusEarthPoint, (int32_t)EarthPoint, v5, v6);
}


void BaseCore__SetRotateY_PointInitAngle(BaseCore_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float PointInitAngle_k__BackingField; // s10
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localEulerAngles = UnityEngine_Transform__get_localEulerAngles(transform, 0),
        PointInitAngle_k__BackingField = this->fields._PointInitAngle_k__BackingField,
        x = localEulerAngles.fields.x,
        z = localEulerAngles.fields.z,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C6BC60(transform, v4);
  }
  v9.fields.x = x;
  v9.fields.z = z;
  v9.fields.y = PointInitAngle_k__BackingField;
  UnityEngine_Transform__set_localEulerAngles(transform, v9, 0);
}


void BaseCore__SetState(BaseCore_o *this, int32_t state, const MethodInfo *method)
{
  ;
}


void BaseCore__SetTerminalData(BaseCore_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v7; // x1
  UnityEngine_Component_o *mTerminalMap; // x0
  __int64 v9; // x1
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct TerminalSceneComponent_o *v16; // x8
  struct UnityEngine_Camera_o *mEarthEffCamera; // x1

  if ( (byte_4CB2A91 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB2A91 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v5->static_fields->mInstance;
  v7 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mTerminalScene, (int32_t)v7, v2, v3);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene
    || (mTerminalMap = (UnityEngine_Component_o *)mTerminalScene->fields.mTerminalMap) == 0
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalMap, 0),
        this->fields.mTerminalMap = gameObject,
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mTerminalMap, (int32_t)gameObject, v12, v13),
        (v16 = this->fields.mTerminalScene) == 0) )
  {
    sub_1C6BC60(mTerminalMap, v9);
  }
  mEarthEffCamera = v16->fields.mEarthEffCamera;
  this->fields.mEarthEffCamera = mEarthEffCamera;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mEarthEffCamera, (int32_t)mEarthEffCamera, v14, v15);
}


void BaseCore__Setup(
        BaseCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  ;
}


void BaseCore__Update(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


int32_t BaseCore__get_CoreType(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields.mCoreType;
}


bool BaseCore__get_IsFocusIn(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields.mIsFocusIn;
}


bool BaseCore__get_IsFocusMoving(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields.mIsFocusMoving;
}


float BaseCore__get_PointInitAngle(BaseCore_o *this, const MethodInfo *method)
{
  return this->fields._PointInitAngle_k__BackingField;
}


void BaseCore__mcbfStartMain(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void BaseCore__mcbfStartZoomIn(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void BaseCore__mcbfStartZoomOut(BaseCore_o *this, const MethodInfo *method)
{
  ;
}


void BaseCore__set_PointInitAngle(BaseCore_o *this, float value, const MethodInfo *method)
{
  this->fields._PointInitAngle_k__BackingField = value;
}