void __fastcall MissionNotifyComponent___ctor(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionNotifyComponent__Awake(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v19; // s0
  float v20; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v22; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x21
  MissionNotifyComponent_StateNone_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  MissionNotifyComponent_StateFrameIn_o *v34; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  MissionNotifyComponent_StateShowing_o *v36; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v37; // x20
  MissionNotifyComponent_StateFrameOut_o *v38; // x21
  const MethodInfo *v39; // x2
  int v40; // w8
  void *v41; // x20
  unsigned int v42; // w21
  struct UnityEngine_Camera_o *main; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0

  if ( (byte_4187341 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MissionNotifyComponent___ctor__, method);
    sub_B2C35C(&Method_CStateManager_MissionNotifyComponent__add__, v9);
    sub_B2C35C(&CStateManager_MissionNotifyComponent__TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v11);
    sub_B2C35C(&ManagerConfig_TypeInfo, v12);
    sub_B2C35C(&MissionNotifyComponent_StateFrameIn_TypeInfo, v13);
    sub_B2C35C(&MissionNotifyComponent_StateFrameOut_TypeInfo, v14);
    sub_B2C35C(&MissionNotifyComponent_StateNone_TypeInfo, v15);
    sub_B2C35C(&MissionNotifyComponent_StateShowing_TypeInfo, v16);
    byte_4187341 = 1;
  }
  gameObject = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    gameObject = ManagerConfig_TypeInfo;
  }
  baseSp = this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_21;
  v19 = (float)baseSp->fields.mHeight * 0.5;
  v20 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v20 - v19) + 1.0;
  this->fields.mFrameOutPosY = v20 + v19;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseAtlas,
    (System_Int32_array **)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v22);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_MissionNotifyComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v24,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2A08354 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v24;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    mFSM = this->fields.mFSM;
    v32 = (MissionNotifyComponent_StateNone_o *)sub_B2C42C(MissionNotifyComponent_StateNone_TypeInfo);
    MissionNotifyComponent_StateNone___ctor(v32, 0LL);
    if ( !mFSM )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_2A08420 *)Method_CStateManager_MissionNotifyComponent__add__);
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v34 = (MissionNotifyComponent_StateFrameIn_o *)sub_B2C42C(MissionNotifyComponent_StateFrameIn_TypeInfo);
    MissionNotifyComponent_StateFrameIn___ctor(v34, 0LL);
    if ( !v33 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      1,
      (IState_T__o *)v34,
      (const MethodInfo_2A08420 *)Method_CStateManager_MissionNotifyComponent__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v36 = (MissionNotifyComponent_StateShowing_o *)sub_B2C42C(MissionNotifyComponent_StateShowing_TypeInfo);
    MissionNotifyComponent_StateShowing___ctor(v36, 0LL);
    if ( !v35 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      2,
      (IState_T__o *)v36,
      (const MethodInfo_2A08420 *)Method_CStateManager_MissionNotifyComponent__add__);
    v37 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v38 = (MissionNotifyComponent_StateFrameOut_o *)sub_B2C42C(MissionNotifyComponent_StateFrameOut_TypeInfo);
    MissionNotifyComponent_StateFrameOut___ctor(v38, 0LL);
    if ( !v37 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v37,
      3,
      (IState_T__o *)v38,
      (const MethodInfo_2A08420 *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v39);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_21;
  v40 = *((_DWORD *)gameObject + 6);
  v41 = gameObject;
  if ( v40 >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= v40 )
      {
        v50 = sub_B2C460(gameObject);
        sub_B2C400(v50, 0LL);
      }
      gameObject = (void *)*((_QWORD *)v41 + (int)v42 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 42) + 150, 0LL);
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_20;
    }
LABEL_21:
    sub_B2C434(gameObject, method);
  }
LABEL_20:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mCamera,
    (System_Int32_array **)main,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
}


void __fastcall MissionNotifyComponent__FrameIn(
        MissionNotifyComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionNotifyComponent__FrameInOut(this, 1, end_act, is_force, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent__FrameInOut(
        MissionNotifyComponent_o *this,
        bool is_framein,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  float v39; // s0
  float v40; // s2
  float mFrameOutPosY; // s1
  float v42; // s4
  float v43; // s3
  float v44; // s2
  float v45; // s9
  System_Action_o *v46; // x21
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  EasingObject_o *v54; // x19
  System_Action_o *v55; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187346 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, is_framein);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B2C35C(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__, v10);
    sub_B2C35C(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__, v11);
    sub_B2C35C(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, v12);
    byte_4187346 = 1;
  }
  v13 = sub_B2C42C(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
  MissionNotifyComponent___c__DisplayClass64_0___ctor((MissionNotifyComponent___c__DisplayClass64_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 56) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 56), (System_Int32_array **)end_act, v22, v23, v24, v25, v26, v27);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v13 + 16) = gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), gameObject, v29, v30, v31, v32, v33, v34);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v39 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v42 = v40;
  else
    v42 = z;
  if ( is_framein )
    v40 = z;
  if ( is_framein )
    v43 = v39;
  else
    v43 = x;
  if ( is_framein )
    v39 = x;
  *(float *)(v13 + 32) = v40;
  if ( is_framein )
    v44 = mFrameOutPosY;
  else
    v44 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v13 + 48) = is_framein;
  *(_DWORD *)(v13 + 84) = !is_framein;
  *(float *)(v13 + 72) = v43;
  *(float *)(v13 + 76) = v44;
  *(float *)(v13 + 80) = v42;
  *(float *)(v13 + 24) = v39;
  *(float *)(v13 + 28) = mFrameOutPosY;
  if ( is_framein )
    v45 = 0.5;
  else
    v45 = 0.25;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v46, 0LL);
    return;
  }
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v13 + 16),
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 64), Component_UIWidget, v48, v49, v50, v51, v52, v53);
  v54 = *(EasingObject_o **)(v13 + 64);
  v55 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v54 )
LABEL_26:
    sub_B2C434(v14, v15);
  EasingObject__Play(v54, v45 * timeScale, v55, v46, 0.0, 17, 0LL);
}


void __fastcall MissionNotifyComponent__FrameOut(
        MissionNotifyComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionNotifyComponent__FrameInOut(this, 0, end_act, is_force, v4);
}


int32_t __fastcall MissionNotifyComponent__GetState(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  MissionNotifyComponent_o *v2; // x19
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4187344 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_B2C35C(&Method_CStateManager_MissionNotifyComponent__getState__, method);
    byte_4187344 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
  return mFSM->fields.m_state;
}


bool __fastcall MissionNotifyComponent__IsBusy(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  int32_t State; // w0
  const MethodInfo *v4; // x1

  State = MissionNotifyComponent__GetState(this, method);
  if ( State != 1 )
    LOBYTE(State) = MissionNotifyComponent__GetState(this, v4) == 2;
  return State;
}


bool __fastcall MissionNotifyComponent__IsPress(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIsPress;
}


void __fastcall MissionNotifyComponent__OnClick(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( MissionNotifyComponent__GetState(this, method) == 2 )
    MissionNotifyComponent__SetState(this, 3, v3);
}


void __fastcall MissionNotifyComponent__OnDragStart(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4187347 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EasingObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187347 = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v4) != 1 )
    {
LABEL_15:
      ActionExtensions__Call(this->fields.mDragStartAct, 0LL);
      return;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_14;
      if ( Component_srcLineSprite )
      {
        EasingObject__SetPause((EasingObject_o *)Component_srcLineSprite, 1, 0LL);
LABEL_14:
        MissionNotifyComponent__SetState(this, 2, v8);
        goto LABEL_15;
      }
    }
    sub_B2C434(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent__OnPress(
        MissionNotifyComponent_o *this,
        bool is_press,
        const MethodInfo *method)
{
  _BOOL4 mIsDragDone; // w8
  const MethodInfo *v5; // x2

  mIsDragDone = this->fields.mIsDragDone;
  this->fields.mIsPress = is_press;
  if ( mIsDragDone && MissionNotifyComponent__GetState(this, (const MethodInfo *)is_press) == 2 )
    MissionNotifyComponent__SetState(this, 3, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent__SetState(
        MissionNotifyComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x0

  if ( (byte_4187345 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MissionNotifyComponent__setState__, *(_QWORD *)&state);
    byte_4187345 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_MissionNotifyComponent__setState__);
}


void __fastcall MissionNotifyComponent__SetupAndPlay(
        MissionNotifyComponent_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *drag_start_act,
        System_Func_MissionNotifyComponent__o *frame_out_start_func,
        System_Action_MissionNotifyComponent__o *frame_out_end_act,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 Instance; // x0
  __int64 v33; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  int32_t v35; // w20
  DataMasterBase_o *v36; // x26
  int age; // w21
  bool IsMasterMission; // w24
  _BOOL4 v39; // w22
  UILabel_o *noLabel; // x26
  UnityEngine_GameObject_o *v41; // x24
  UILabel_o *progressLabel; // x26
  System_String_o *v43; // x27
  System_String_o *v44; // x0
  _BOOL4 v45; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  struct UISprite_o *clearSp; // x25
  struct UnityEngine_GameObject_o *clearEffectPrefab; // x26
  int v51; // w22
  int32_t v52; // w21
  System_Func_MissionNotifyComponent__o *v53; // x20
  UnityEngine_GameObject_o *v54; // x26
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UnityEngine_Animation_o *v63; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UnityEngine_Object_o *v71; // x28
  bool v72; // w0
  int v73; // w8
  __int64 v74; // x25
  unsigned int v75; // w23
  UnityEngine_GameObject_o *rewardMessage; // x25
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v78; // x25
  System_String_o *v79; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v81; // x9
  UnityEngine_Object_o *v82; // x25
  struct UILabel_o *v83; // x8
  System_String_o *v84; // x0
  __int64 *v85; // x8
  System_String_o *v86; // x25
  int v87; // w22
  int32_t age_high; // w26
  struct UISprite_o **p_typeSp; // x21
  UISprite_o *typeSp; // x27
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  AdManager_o *v97; // x24
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  const MethodInfo *v110; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v112; // x0
  __int64 v113; // x0
  int32_t mDepth; // [xsp+Ch] [xbp-74h]
  System_Action_MissionNotifyComponent__o *v115; // [xsp+10h] [xbp-70h]
  int v117; // [xsp+24h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4187343 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, disp_info);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_CompleteMissionMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v18);
    sub_B2C35C(&long___TypeInfo, v19);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&StringLiteral_20419/*"master_mission_weekly"*/, v24);
    sub_B2C35C(&StringLiteral_20418/*"master_mission_special"*/, v25);
    sub_B2C35C(&StringLiteral_20414/*"master_mission_daily"*/, v26);
    sub_B2C35C(&StringLiteral_20416/*"master_mission_extra"*/, v27);
    sub_B2C35C(&StringLiteral_20417/*"master_mission_panel"*/, v28);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v29);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v30);
    sub_B2C35C(&StringLiteral_20415/*"master_mission_event"*/, v31);
    byte_4187343 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_WarQuestSelectionMaster )
    goto LABEL_119;
  v35 = (_DWORD)disp_info + 16;
  v36 = (DataMasterBase_o *)Instance;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_119;
    age = (int)entity->fields.age;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = sub_B2C374(long___TypeInfo, 1LL);
    if ( !entity )
      goto LABEL_119;
    v33 = Instance;
    if ( !Instance )
      goto LABEL_119;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_120;
    *(_QWORD *)(Instance + 32) = SHIDWORD(entity->fields.age);
    if ( !v36 )
      goto LABEL_119;
    if ( DataMasterBase__isEntityExistsFromId(v36, (System_Int64_array *)Instance, 0LL) )
    {
      v39 = 1;
      v117 = 1;
    }
    else
    {
      v39 = age != 7;
      v117 = 0;
    }
  }
  else
  {
    v117 = 0;
    IsMasterMission = 0;
    age = 0;
    v39 = 1;
  }
  noLabel = this->fields.noLabel;
  Instance = (__int64)System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_119;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.noRoot;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v39 & ((v117 | IsMasterMission) ^ 1), 0LL);
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_119;
  v41 = (UnityEngine_GameObject_o *)Instance;
  Instance = UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v41 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v41, (Instance & 1) == 0, 0LL);
  Instance = (__int64)this->fields.noRoot;
  if ( !Instance )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.missionNameLabel;
    if ( !Instance )
      goto LABEL_119;
  }
  else
  {
    Instance = (__int64)this->fields.masterMissionNameLabel;
    if ( !Instance )
      goto LABEL_119;
  }
  WrapControlText__textAdjust((UILabel_o *)Instance, disp_info->fields.message, *(_DWORD *)(Instance + 416), 0, 0, 0LL);
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, disp_info->fields.condition > 0, 0LL);
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.progressBarNowSlider;
    if ( !Instance )
      goto LABEL_119;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressFrom / (float)disp_info->fields.condition,
      0LL);
    Instance = (__int64)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_119;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressTo / (float)disp_info->fields.condition,
      0LL);
    progressLabel = this->fields.progressLabel;
    v43 = System_Int32__ToString_38381416((int)disp_info + 44, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
    v44 = System_Int32__ToString_38381416((int)disp_info + 48, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
    Instance = (__int64)System_String__Concat_44307816(v43, (System_String_o *)StringLiteral_872/*"/"*/, v44, 0LL);
    if ( !progressLabel )
      goto LABEL_119;
    UILabel__set_text(progressLabel, (System_String_o *)Instance, 0LL);
  }
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_119;
    v45 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL) >= 1.0;
  }
  else
  {
    v45 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v45, banner_group, 0LL);
  Instance = (__int64)this->fields.clearSp;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v45, 0LL);
  Instance = (__int64)this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( !v45 )
  {
LABEL_86:
    v33 = 462LL;
    goto LABEL_87;
  }
  clearSp = this->fields.clearSp;
  v115 = frame_out_end_act;
  if ( !clearSp )
    goto LABEL_119;
  clearEffectPrefab = this->fields.clearEffectPrefab;
  v51 = age;
  mDepth = clearSp->fields.mDepth;
  v52 = v35;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v53 = frame_out_start_func;
  Instance = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)clearEffectPrefab,
                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_119;
  v54 = (UnityEngine_GameObject_o *)Instance;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = Component_srcLineSprite;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectSimpleAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v54,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  this->fields.mClearEffectAnim = v63;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectAnim,
    (System_Int32_array **)v63,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    Instance = (__int64)*p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_119;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0LL);
    frame_out_start_func = v53;
    v35 = v52;
    age = v51;
  }
  else
  {
    v71 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v72 = UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
    frame_out_start_func = v53;
    v35 = v52;
    age = v51;
    if ( v72 )
    {
      Instance = (__int64)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_119;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v54, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                        v54,
                        (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_119;
  v73 = *(_DWORD *)(Instance + 24);
  v74 = Instance;
  if ( v73 >= 1 )
  {
    v75 = 0;
    while ( v75 < v73 )
    {
      Instance = *(_QWORD *)(v74 + 8LL * (int)v75 + 32);
      if ( !Instance )
        goto LABEL_119;
      UIWidget__set_depth((UIWidget_o *)Instance, mDepth + 1 + *(_DWORD *)(Instance + 168), 0LL);
      v73 = *(_DWORD *)(v74 + 24);
      if ( (int)++v75 >= v73 )
        goto LABEL_68;
    }
LABEL_120:
    v113 = sub_B2C460(Instance);
    sub_B2C400(v113, 0LL);
  }
LABEL_68:
  if ( !entity )
  {
    frame_out_end_act = v115;
    goto LABEL_86;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  frame_out_end_act = v115;
  if ( !rewardMessage )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(rewardMessage, Instance & 1, 0LL);
  Instance = (__int64)entity;
  if ( !entity )
    goto LABEL_119;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_86;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_119;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, *(&entity->fields.startType + 1), 0LL);
  if ( !GiftListById )
    goto LABEL_86;
  v78 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_86;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_119;
  v79 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Instance,
          entity->fields.id,
          HIDWORD(entity->fields.age),
          1,
          0LL);
  Instance = System_String__IsNullOrEmpty(v79, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( (Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_119;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v79, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_119;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_119;
    v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_31328252(v112, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_117;
  }
  if ( !v78->max_length )
    goto LABEL_120;
  v81 = (int32_t *)v78->m_Items[0];
  if ( !v81 || !itemIcon )
LABEL_119:
    sub_B2C434(Instance, v33);
  ItemIconComponent__SetGift(this->fields.itemIcon, v81[5], v81[6], v81[7], 0, 0LL);
LABEL_117:
  Instance = (__int64)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_119;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0LL);
  v33 = 360LL;
LABEL_87:
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_119;
  UIWidget__set_width((UIWidget_o *)Instance, v33, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  v82 = (UnityEngine_Object_o *)Instance;
  Instance = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v83 = this->fields.noLabel;
  if ( !v83 )
    goto LABEL_119;
  v84 = System_String__Concat_44305532((System_String_o *)Instance, v83->fields.mText, 0LL);
  UnityEngine_Object__set_name(v82, v84, 0LL);
  switch ( age )
  {
    case 1:
    case 7:
      v85 = &StringLiteral_20415/*"master_mission_event"*/;
      goto LABEL_98;
    case 2:
      v85 = &StringLiteral_20419/*"master_mission_weekly"*/;
      goto LABEL_98;
    case 3:
      v85 = &StringLiteral_20414/*"master_mission_daily"*/;
      goto LABEL_98;
    case 4:
      v85 = &StringLiteral_20416/*"master_mission_extra"*/;
      goto LABEL_98;
    case 5:
      v85 = &StringLiteral_20418/*"master_mission_special"*/;
      goto LABEL_98;
    case 6:
      v85 = &StringLiteral_20417/*"master_mission_panel"*/;
LABEL_98:
      v86 = (System_String_o *)*v85;
      break;
    default:
      v86 = 0LL;
      break;
  }
  v87 = age;
  if ( !entity || ((v117 ^ 1) & 1) != 0 )
  {
    p_typeSp = &this->fields.typeSp;
    Instance = (__int64)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_119;
    UISprite__set_spriteName((UISprite_o *)Instance, v86, 0LL);
  }
  else
  {
    age_high = HIDWORD(entity->fields.age);
    p_typeSp = &this->fields.typeSp;
    typeSp = this->fields.typeSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28451336(age_high, typeSp, v86, 0LL);
  }
  Instance = (__int64)*p_typeSp;
  if ( !*p_typeSp )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v45 && v87 == 3 )
  {
    v97 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (__int64)System_Int32__ToString(v35, 0LL);
    if ( !v97 )
      goto LABEL_119;
    AdManager__TrackEvent(v97, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mDragStartAct,
    (System_Int32_array **)drag_start_act,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutStartFunc,
    (System_Int32_array **)frame_out_start_func,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutEndAct,
    (System_Int32_array **)frame_out_end_act,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  MissionNotifyComponent__SetState(this, 1, v110);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x0

  if ( (byte_4187342 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MissionNotifyComponent__update__, method);
    byte_4187342 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_MissionNotifyComponent__update__);
}


NoticeNumberComponent_o *__fastcall MissionNotifyComponent__get_NoticeNumberPrefab(
        MissionNotifyComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.noticeNumberPrefab;
}


void __fastcall MissionNotifyComponent_StateFrameIn___ctor(
        MissionNotifyComponent_StateFrameIn_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameIn__begin(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  MissionNotifyComponent_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4185D3A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&SeManager_TypeInfo, v4);
    sub_B2C35C(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__, v5);
    sub_B2C35C(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, v6);
    byte_4185D3A = 1;
  }
  v7 = sub_B2C42C(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
  MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___ctor(
    (MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = that;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)that, v10, v11, v12, v13, v14, v15);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(20, 0LL);
  v16 = *(MissionNotifyComponent_o **)(v7 + 16);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v16 )
LABEL_9:
    sub_B2C434(v8, v9);
  MissionNotifyComponent__FrameIn(v16, v17, 0, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameIn__end(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateFrameIn__update(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___ctor(
        MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___begin_b__0(
        MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
  MissionNotifyComponent__SetState(that, 2, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___ctor(
        MissionNotifyComponent_StateFrameOut_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut__begin(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  void *gameObject; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x19
  Il2CppObject *v20; // x0
  MissionNotifyComponent_StateFrameOut_Fields *p_fields; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *mNextComp; // x20
  MissionNotifyComponent_o *v29; // x20
  System_Action_o *v30; // x22
  int v31; // w8
  void *v32; // x19
  unsigned int v33; // w20
  __int64 v34; // x0

  if ( (byte_4185D3B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_System_Func_MissionNotifyComponent__Invoke__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__, v8);
    sub_B2C35C(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, v9);
    byte_4185D3B = 1;
  }
  v10 = sub_B2C42C(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___ctor(
    (MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_23;
  *(_QWORD *)(v10 + 16) = that;
  v19 = v10 + 16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( !*(_QWORD *)(v10 + 16) )
    goto LABEL_23;
  gameObject = *(void **)(*(_QWORD *)(v10 + 16) + 208LL);
  if ( !gameObject )
    goto LABEL_23;
  v20 = System_Func_object___Invoke(
          (System_Func_object__o *)gameObject,
          (const MethodInfo_26FF090 *)Method_System_Func_MissionNotifyComponent__Invoke__);
  this->fields.mNextComp = (struct MissionNotifyComponent_o *)v20;
  p_fields = &this->fields;
  sub_B2C2F8((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)v19 )
    goto LABEL_23;
  if ( !*(_BYTE *)(*(_QWORD *)v19 + 185LL) )
  {
    mNextComp = (UnityEngine_Object_o *)p_fields->mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v29 = *(MissionNotifyComponent_o **)(v10 + 16);
      v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)v10,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v29 )
        goto LABEL_23;
      MissionNotifyComponent__FrameOut(v29, v30, 0, 0LL);
    }
  }
  gameObject = *(void **)v19;
  if ( !*(_QWORD *)v19
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_23:
    sub_B2C434(gameObject, v12);
  }
  v31 = *((_DWORD *)gameObject + 6);
  v32 = gameObject;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= v31 )
      {
        v34 = sub_B2C460(gameObject);
        sub_B2C400(v34, 0LL);
      }
      gameObject = (void *)*((_QWORD *)v32 + (int)v33 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 42) - 50, 0LL);
      v31 = *((_DWORD *)v32 + 6);
      if ( (int)++v33 >= v31 )
        return;
    }
    goto LABEL_23;
  }
}


void __fastcall MissionNotifyComponent_StateFrameOut__end(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  if ( (byte_4185D3D & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_B2C35C(
                                                       &Method_ActionExtensions_Call_MissionNotifyComponent___,
                                                       that);
    byte_4185D3D = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (BlankEarth_QAARotateEarthResponse_o *)that,
    (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 klass; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 *v17; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v19; // s0
  float v20; // s1
  float v21; // s8
  float v22; // s9
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x20
  float v25; // s0
  float v26; // s8
  float v27; // s0
  UnityEngine_Object_o *v28; // x19
  BattleServantConfConponent_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  MissionNotifyComponent_o *v37; // x19
  System_Action_o *v38; // x20
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4

  if ( (byte_4185D3C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__, v6);
    sub_B2C35C(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, v7);
    byte_4185D3C = 1;
  }
  v8 = sub_B2C42C(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___ctor(
    (MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_26;
  *(_QWORD *)(v8 + 16) = that;
  v17 = (__int64 *)(v8 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)that, v11, v12, v13, v14, v15, v16);
  klass = *(_QWORD *)(v8 + 16);
  if ( !klass )
    goto LABEL_26;
  if ( *(_BYTE *)(klass + 185) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    *(UnityEngine_Vector3_o *)&v19 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*v17 )
      goto LABEL_26;
    *(float32x2_t *)(*v17 + 188) = vmul_f32(*(float32x2_t *)(*v17 + 188), vdup_n_s32(0x3F6147AEu));
    klass = *v17;
    if ( !*v17 )
      goto LABEL_26;
    v21 = v19 + *(float *)(klass + 188);
    v22 = v20 + *(float *)(klass + 192);
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    v39.fields.x = v21;
    v39.fields.y = v22;
    GameObjectExtensions__SetLocalPosition_31325816(v23, v39, 0LL);
    if ( !*v17 )
      goto LABEL_26;
    v24 = *(_QWORD *)(*v17 + 24);
    if ( !v24 )
      goto LABEL_26;
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 424LL))(
              v24,
              *(_QWORD *)(*(_QWORD *)v24 + 432LL));
    if ( !*v17 )
      goto LABEL_26;
    klass = *(_QWORD *)(*v17 + 24);
    if ( !klass )
      goto LABEL_26;
    v26 = v25;
    v27 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
            klass,
            *(_QWORD *)(*(_QWORD *)klass + 432LL));
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v24 + 440LL))(
              v24,
              *(_QWORD *)(*(_QWORD *)v24 + 448LL),
              v26 + (float)((float)(0.0 - v27) * 0.15));
    if ( !*v17 )
      goto LABEL_26;
    klass = *(_QWORD *)(*v17 + 24);
    if ( !klass )
      goto LABEL_26;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
           klass,
           *(_QWORD *)(*(_QWORD *)klass + 432LL)) <= 0.01 )
    {
      klass = *v17;
      if ( *v17 )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)klass, 0, 0LL);
        return;
      }
LABEL_26:
      sub_B2C434(klass, v10);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (BattleServantConfConponent_o *)&this->fields;
    v28 = (UnityEngine_Object_o *)mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
    {
      klass = (__int64)p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_26;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)klass, 0LL) != 1 )
      {
        p_fields->klass = 0LL;
        sub_B2C2F8(p_fields, 0LL, v31, v32, v33, v34, v35, v36);
        v37 = *(MissionNotifyComponent_o **)(v8 + 16);
        v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v38,
          (Il2CppObject *)v8,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v37 )
          goto LABEL_26;
        MissionNotifyComponent__FrameOut(v37, v38, 0, 0LL);
      }
    }
  }
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___ctor(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___begin_b__0(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
  MissionNotifyComponent__SetState(that, 0, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___ctor(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___update_b__0(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
  MissionNotifyComponent__SetState(that, 0, 0LL);
}


void __fastcall MissionNotifyComponent_StateNone___ctor(
        MissionNotifyComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateNone__begin(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateNone__end(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateNone__update(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateShowing___ctor(
        MissionNotifyComponent_StateShowing_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateShowing__begin(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  SimpleAnimation_o *baseSp; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *mClearEffectSimpleAnim; // x20
  UnityEngine_Object_o *mClearEffectAnim; // x20

  if ( (byte_4185D3E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    byte_4185D3E = 1;
  }
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_18;
  baseSp = (SimpleAnimation_o *)that->fields.baseSp;
  if ( !baseSp )
    goto LABEL_18;
  ((void (__fastcall *)(SimpleAnimation_o *, const char *, float))baseSp->klass[1]._1.gc_desc)(
    baseSp,
    baseSp->klass[1]._1.name,
    1.0);
  mClearEffectSimpleAnim = (UnityEngine_Object_o *)that->fields.mClearEffectSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    baseSp = that->fields.mClearEffectSimpleAnim;
    if ( baseSp )
    {
      SimpleAnimation__Play(baseSp, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(baseSp, v6);
  }
  mClearEffectAnim = (UnityEngine_Object_o *)that->fields.mClearEffectAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mClearEffectAnim, 0LL, 0LL) )
  {
    baseSp = (SimpleAnimation_o *)that->fields.mClearEffectAnim;
    if ( !baseSp )
      goto LABEL_18;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)baseSp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateShowing__end(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  int v3; // s0
  struct UnityEngine_Vector2_o mTouchPosDifOld; // d0
  __int64 v8; // x0
  __int64 v9; // x1
  float v10; // s0
  float x; // w8
  struct UnityEngine_Vector2_o mTouchPosDif; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4

  mTouchPosDif = this->fields.mTouchPosDif;
  v13.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&v3, (const MethodInfo *)&mTouchPosDif);
  if ( v13.fields.x >= UnityEngine_Vector2__get_sqrMagnitude(v13, (const MethodInfo *)&this->fields.mTouchPosDifOld) )
  {
    mTouchPosDifOld.fields.x = mTouchPosDif.fields.x;
  }
  else
  {
    mTouchPosDifOld = this->fields.mTouchPosDifOld;
    mTouchPosDif = mTouchPosDifOld;
  }
  mTouchPosDif.fields.x = UnityEngine_Mathf__Clamp(mTouchPosDifOld.fields.x, -15.0, 15.0, 0LL);
  v10 = UnityEngine_Mathf__Clamp(mTouchPosDif.fields.y, -15.0, 15.0, 0LL);
  mTouchPosDif.fields.y = v10;
  if ( !that )
    sub_B2C434(v8, v9);
  x = mTouchPosDif.fields.x;
  that->fields.mInertiaSpd.fields.y = v10;
  that->fields.mInertiaSpd.fields.x = x;
}


void __fastcall MissionNotifyComponent_StateShowing__update(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  float32x2_t *v4; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Camera_o *mCamera; // x21
  int v9; // w8
  unsigned __int64 v10; // d0
  float v11; // s1
  float v12; // s8
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float32x2_t *)this;
  if ( (byte_4185D3F & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_B2C35C(&CTouch_TypeInfo, that);
    byte_4185D3F = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress || (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4[6].n64_f32[0]) < 2.0 )
      return;
LABEL_14:
    MissionNotifyComponent__SetState(that, 3, 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v4[3].n64_u64[0] = v4[2].n64_u64[0];
  mCamera = that->fields.mCamera;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  v4[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_28395408(mCamera, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) > 1 )
    v4[2].n64_u64[0] = v4[3].n64_u64[0];
  v9 = v4[6].n64_i32[1];
  if ( v9 < 1 )
  {
    LODWORD(v10) = v4[4].n64_u32[0];
    v11 = v4[4].n64_f32[1];
  }
  else
  {
    v10 = vsub_f32(v4[2], v4[3]).n64_u64[0];
    v11 = *((float *)&v10 + 1);
    v4[5].n64_u64[0] = v4[4].n64_u64[0];
    v4[4].n64_u64[0] = v10;
  }
  v12 = x + *(float *)&v10;
  v13 = y + v11;
  v4[6].n64_u32[1] = v9 + 1;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v15.fields.x = v12;
  v15.fields.y = v13;
  GameObjectExtensions__SetLocalPosition_31325816(v14, v15, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 2 )
    goto LABEL_14;
}


void __fastcall MissionNotifyComponent___c__DisplayClass64_0___ctor(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent___c__DisplayClass64_0___FrameInOut_b__0(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *baseSp; // x0
  __int64 v4; // x1
  struct MissionNotifyComponent_o *_4__this; // x8

  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, this->fields.pos_to, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (baseSp = _4__this->fields.baseSp) == 0LL )
    sub_B2C434(baseSp, v4);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))baseSp->klass->vtable._8_set_alpha.method)(
    baseSp,
    baseSp->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    (float)this->fields.alp_to);
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent___c__DisplayClass64_0___FrameInOut_b__1(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mStartTime; // s4
  MissionNotifyComponent___c__DisplayClass64_0_o *v4; // x19
  unsigned __int64 v5; // d0 OVERLAPPED
  float v6; // s2
  int v7; // s1
  struct MissionNotifyComponent_o *_4__this; // x8
  float v9; // [xsp+0h] [xbp-20h]

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_5;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = vadd_f32(
         *(float32x2_t *)&this->fields.pos_from.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&this->fields.pos_to.fields.x, *(float32x2_t *)&this->fields.pos_from.fields.x),
           mStartTime)).n64_u64[0];
  v6 = this->fields.pos_from.fields.z
     + (float)(mStartTime * (float)(this->fields.pos_to.fields.z - this->fields.pos_from.fields.z));
  v7 = HIDWORD(v5);
  v9 = mStartTime;
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&v5, 0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (this = (MissionNotifyComponent___c__DisplayClass64_0_o *)_4__this->fields.baseSp) == 0LL )
LABEL_5:
    sub_B2C434(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}