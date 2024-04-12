void __fastcall BaseCore___ctor(BaseCore_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BaseCore__Awake(BaseCore_o *this, const MethodInfo *method)
{
  this->fields.mCoreType = 0;
}


Il2CppObject *__fastcall BaseCore__CreateEarthPoint_object_(
        BaseCore_o *this,
        int32_t warId,
        float x,
        float y,
        float z,
        const MethodInfo_1A40B24 *method)
{
  struct UnityEngine_GameObject_o *mEarthPointPrefab; // x21
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *mEarthPointRoot; // x1
  UnityEngine_GameObject_o *v14; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *transform; // x21
  System_String_o *v18; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v20 = warId;
  if ( (byte_42B15B4 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5845/*"EarthPoint_"*/);
    byte_42B15B4 = 1;
  }
  mEarthPointPrefab = this->fields.mEarthPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mEarthPointPrefab,
                                      (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEarthPointRoot = this->fields.mEarthPointRoot;
  v14 = v12;
  GameObjectExtensions__SetParent_32090952(v12, mEarthPointRoot, 0LL);
  if ( !v14
    || (transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v14, 0LL),
        v18 = System_Int32__ToString((int32_t)&v20, 0LL),
        v15 = System_String__Concat_44568316((System_String_o *)StringLiteral_5845/*"EarthPoint_"*/, v18, 0LL),
        !transform) )
  {
    sub_B52A5C(v15, v16);
  }
  UnityEngine_Object__set_name(transform, v15, 0LL);
  GameObjectExtensions__SetLocalPosition_32085168(v14, x, y, z, 0LL);
  return (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)(v14);
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
    sub_B52A5C(this, method);
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
  if ( (byte_42ACF0B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5845/*"EarthPoint_"*/);
    byte_42ACF0B = 1;
  }
  result = (BaseEarthPoint_o *)this->fields.mEarthPointRoot;
  if ( !result )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  result = (BaseEarthPoint_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_5845/*"EarthPoint_"*/, v6, 0LL);
  if ( !transform )
    goto LABEL_13;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  result = 0LL;
  if ( v8 )
  {
    if ( v7 )
    {
      result = (BaseEarthPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( result )
        return (BaseEarthPoint_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     (UnityEngine_GameObject_o *)result,
                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___);
    }
LABEL_13:
    sub_B52A5C(result, *(_QWORD *)&warId);
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

  if ( (byte_42ACF0D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF0D = 1;
  }
  EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint(this, warId, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EarthPoint, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !EarthPoint
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL)) == 0LL )
    {
      sub_B52A5C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


bool __fastcall BaseCore__IsWarOpen(BaseCore_o *this, MapControl_WarInfo_o *warInfo, const MethodInfo *method)
{
  QuestTree_o *v4; // x20

  if ( (byte_42ACF0C & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (BaseCore_o *)sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    byte_42ACF0C = 1;
  }
  if ( !warInfo )
    goto LABEL_12;
  this = (BaseCore_o *)MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !this )
    goto LABEL_12;
  if ( WarEntity__IsEvent((WarEntity_o *)this, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v4 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (BaseCore_o *)MapControl_WarInfo__GetMine(warInfo, 0LL);
    if ( v4 )
      return QuestTree__IsActiveEventWar_22026436(v4, (WarEntity_o *)this, 0LL);
LABEL_12:
    sub_B52A5C(this, warInfo);
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
  this->fields.mFocusEarthPoint = BaseCore__GetEarthPoint(this, warId, method);
  sub_B52920(&this->fields.mFocusEarthPoint);
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
    sub_B52A5C(transform, v4);
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
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Component_o *mTerminalMap; // x0
  __int64 v5; // x1
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct TerminalSceneComponent_o *v7; // x8

  if ( (byte_42ACF0A & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42ACF0A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  this->fields.mTerminalScene = v3->static_fields->mInstance;
  sub_B52920(&this->fields.mTerminalScene);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene
    || (mTerminalMap = (UnityEngine_Component_o *)mTerminalScene->fields.mTerminalMap) == 0LL
    || (this->fields.mTerminalMap = UnityEngine_Component__get_gameObject(mTerminalMap, 0LL),
        sub_B52920(&this->fields.mTerminalMap),
        (v7 = this->fields.mTerminalScene) == 0LL) )
  {
    sub_B52A5C(mTerminalMap, v5);
  }
  this->fields.mEarthEffCamera = v7->fields.mEarthEffCamera;
  sub_B52920(&this->fields.mEarthEffCamera);
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