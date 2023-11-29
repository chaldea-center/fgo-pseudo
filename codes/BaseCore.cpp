void __fastcall BaseCore___ctor(BaseCore_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BaseCore__Awake(BaseCore_o *this, const MethodInfo *method)
{
  this->fields.mCoreType = 0;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall BaseCore__CreateEarthPoint_object_(
        BaseCore_o *this,
        int32_t warId,
        float x,
        float y,
        float z,
        const MethodInfo_18B4E80 *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o *mEarthPointPrefab; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *mEarthPointRoot; // x1
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Object_o *transform; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  v21 = warId;
  if ( (byte_40FA637 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&warId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5786, v12);
    byte_40FA637 = 1;
  }
  mEarthPointPrefab = this->fields.mEarthPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mEarthPointPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEarthPointRoot = this->fields.mEarthPointRoot;
  v16 = v14;
  GameObjectExtensions__SetParent_27425860(v14, mEarthPointRoot, 0LL);
  if ( !v16
    || (transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v16, 0LL),
        v18 = System_Int32__ToString((int32_t)&v21, 0LL),
        v19 = System_String__Concat_43743732((System_String_o *)StringLiteral_5786, v18, 0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Object__set_name(transform, v19, 0LL);
  GameObjectExtensions__SetLocalPosition_27420076(v16, x, y, z, 0LL);
  return (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)(v16);
}


void __fastcall BaseCore__EndSlideServant(BaseCore_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  StandFigureSlideComponent_o *mTerminalServant; // x0
  struct TerminalSceneComponent_o *v5; // x8
  StandFigureSlideComponent_o *v6; // x0

  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_8;
  mTerminalServant = mTerminalScene->fields.mTerminalServant;
  if ( !mTerminalServant )
    goto LABEL_8;
  if ( StandFigureSlideComponent__IsMoving(mTerminalServant, 0LL) )
  {
    v5 = this->fields.mTerminalScene;
    if ( v5 )
    {
      v6 = v5->fields.mTerminalServant;
      if ( v6 )
      {
        StandFigureSlideComponent__EndSlide(v6, 0LL);
        return;
      }
    }
LABEL_8:
    sub_B170D4();
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
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *mEarthPointRoot; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  UnityEngine_Object_o *v10; // x19
  bool v11; // w8
  BaseEarthPoint_o *result; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = warId;
  if ( (byte_40F6EF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___, *(_QWORD *)&warId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5786, v5);
    byte_40F6EF4 = 1;
  }
  mEarthPointRoot = this->fields.mEarthPointRoot;
  if ( !mEarthPointRoot )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform(mEarthPointRoot, 0LL);
  v8 = System_Int32__ToString((int32_t)&v14, 0LL);
  v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_5786, v8, 0LL);
  if ( !transform )
    goto LABEL_13;
  v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v9, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  result = 0LL;
  if ( v11 )
  {
    if ( v10 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
      if ( gameObject )
        return (BaseEarthPoint_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     gameObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BaseEarthPoint___);
    }
LABEL_13:
    sub_B170D4();
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BaseCore__HideEarthPoint(BaseCore_o *this, int32_t warId, const MethodInfo *method)
{
  UnityEngine_Component_o *EarthPoint; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F6EF6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&warId);
    byte_40F6EF6 = 1;
  }
  EarthPoint = (UnityEngine_Component_o *)BaseCore__GetEarthPoint(this, warId, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EarthPoint, 0LL, 0LL) )
  {
    if ( !EarthPoint || (gameObject = UnityEngine_Component__get_gameObject(EarthPoint, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


bool __fastcall BaseCore__IsWarOpen(BaseCore_o *this, MapControl_WarInfo_o *warInfo, const MethodInfo *method)
{
  __int64 v4; // x1
  WarEntity_o *Mine; // x0
  QuestTree_o *v6; // x20
  WarEntity_o *v7; // x0

  if ( (byte_40F6EF5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, warInfo);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v4);
    byte_40F6EF5 = 1;
  }
  if ( !warInfo )
    goto LABEL_12;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    goto LABEL_12;
  if ( WarEntity__IsEvent(Mine, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v6 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v7 = MapControl_WarInfo__GetMine(warInfo, 0LL);
    if ( v6 )
      return QuestTree__IsActiveEventWar_21525412(v6, v7, 0LL);
LABEL_12:
    sub_B170D4();
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
  struct BaseEarthPoint_o *EarthPoint; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  EarthPoint = BaseCore__GetEarthPoint(this, warId, method);
  this->fields.mFocusEarthPoint = EarthPoint;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mFocusEarthPoint,
    (System_Int32_array **)EarthPoint,
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
  float PointInitAngle_k__BackingField; // s10
  float x; // s8
  float z; // s9
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localEulerAngles = UnityEngine_Transform__get_localEulerAngles(transform, 0LL),
        PointInitAngle_k__BackingField = this->fields._PointInitAngle_k__BackingField,
        x = localEulerAngles.fields.x,
        z = localEulerAngles.fields.z,
        (v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v9.fields.x = x;
  v9.fields.z = z;
  v9.fields.y = PointInitAngle_k__BackingField;
  UnityEngine_Transform__set_localEulerAngles(v7, v9, 0LL);
}


void __fastcall BaseCore__SetState(BaseCore_o *this, int32_t state, const MethodInfo *method)
{
  ;
}


void __fastcall BaseCore__SetTerminalData(BaseCore_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v11; // x1
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  UnityEngine_Component_o *mTerminalMap; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TerminalSceneComponent_o *v27; // x8
  struct UnityEngine_Camera_o *mEarthEffCamera; // x1

  if ( (byte_40F6EF3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6EF3 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v9->static_fields->mInstance;
  v11 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mTerminalScene,
    (System_Int32_array **)v11,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene
    || (mTerminalMap = (UnityEngine_Component_o *)mTerminalScene->fields.mTerminalMap) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalMap, 0LL),
        this->fields.mTerminalMap = gameObject,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mTerminalMap,
          (System_Int32_array **)gameObject,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (v27 = this->fields.mTerminalScene) == 0LL) )
  {
    sub_B170D4();
  }
  mEarthEffCamera = v27->fields.mEarthEffCamera;
  this->fields.mEarthEffCamera = mEarthEffCamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEarthEffCamera,
    (System_Int32_array **)mEarthEffCamera,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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