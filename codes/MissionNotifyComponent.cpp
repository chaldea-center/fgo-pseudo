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
  ManagerConfig_c *v17; // x0
  struct UISprite_o *baseSp; // x8
  float v19; // s0
  float v20; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v22; // x4
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  MissionNotifyComponent_StateNone_o *v40; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  MissionNotifyComponent_StateFrameIn_o *v46; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  MissionNotifyComponent_StateShowing_o *v52; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  MissionNotifyComponent_StateFrameOut_o *v58; // x21
  const MethodInfo *v59; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  changeVColor_array *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  int max_length; // w8
  changeVColor_array *v65; // x20
  unsigned int v66; // w21
  UIWidget_o *v67; // x0
  struct UnityEngine_Camera_o *main; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_40F7D32 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MissionNotifyComponent___ctor__, method);
    sub_B16FFC(&Method_CStateManager_MissionNotifyComponent__add__, v9);
    sub_B16FFC(&CStateManager_MissionNotifyComponent__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v11);
    sub_B16FFC(&ManagerConfig_TypeInfo, v12);
    sub_B16FFC(&MissionNotifyComponent_StateFrameIn_TypeInfo, v13);
    sub_B16FFC(&MissionNotifyComponent_StateFrameOut_TypeInfo, v14);
    sub_B16FFC(&MissionNotifyComponent_StateNone_TypeInfo, v15);
    sub_B16FFC(&MissionNotifyComponent_StateShowing_TypeInfo, v16);
    byte_40F7D32 = 1;
  }
  v17 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v17 = ManagerConfig_TypeInfo;
  }
  baseSp = this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_21;
  v19 = (float)baseSp->fields.mHeight * 0.5;
  v20 = (float)v17->static_fields->HEIGHT * 0.5;
  this->fields.mFrameInPosY = (float)(v20 - v19) + 1.0;
  this->fields.mFrameOutPosY = v20 + v19;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_B16F98(
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
    v28 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_MissionNotifyComponent__TypeInfo,
                                                                v23,
                                                                v24,
                                                                v25,
                                                                v26);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v28,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v28;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    mFSM = this->fields.mFSM;
    v40 = (MissionNotifyComponent_StateNone_o *)sub_B170CC(
                                                  MissionNotifyComponent_StateNone_TypeInfo,
                                                  v36,
                                                  v37,
                                                  v38,
                                                  v39);
    MissionNotifyComponent_StateNone___ctor(v40, 0LL);
    if ( !mFSM )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v40,
      (const MethodInfo_2907FBC *)Method_CStateManager_MissionNotifyComponent__add__);
    v41 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v46 = (MissionNotifyComponent_StateFrameIn_o *)sub_B170CC(
                                                     MissionNotifyComponent_StateFrameIn_TypeInfo,
                                                     v42,
                                                     v43,
                                                     v44,
                                                     v45);
    MissionNotifyComponent_StateFrameIn___ctor(v46, 0LL);
    if ( !v41 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v41,
      1,
      (IState_T__o *)v46,
      (const MethodInfo_2907FBC *)Method_CStateManager_MissionNotifyComponent__add__);
    v47 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v52 = (MissionNotifyComponent_StateShowing_o *)sub_B170CC(
                                                     MissionNotifyComponent_StateShowing_TypeInfo,
                                                     v48,
                                                     v49,
                                                     v50,
                                                     v51);
    MissionNotifyComponent_StateShowing___ctor(v52, 0LL);
    if ( !v47 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v47,
      2,
      (IState_T__o *)v52,
      (const MethodInfo_2907FBC *)Method_CStateManager_MissionNotifyComponent__add__);
    v53 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v58 = (MissionNotifyComponent_StateFrameOut_o *)sub_B170CC(
                                                      MissionNotifyComponent_StateFrameOut_TypeInfo,
                                                      v54,
                                                      v55,
                                                      v56,
                                                      v57);
    MissionNotifyComponent_StateFrameOut___ctor(v58, 0LL);
    if ( !v53 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v53,
      3,
      (IState_T__o *)v58,
      (const MethodInfo_2907FBC *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v59);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  v61 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          gameObject,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !v61 )
    goto LABEL_21;
  max_length = v61->max_length;
  v65 = v61;
  if ( max_length >= 1 )
  {
    v66 = 0;
    while ( 1 )
    {
      if ( v66 >= max_length )
      {
        sub_B17100(v61, v62, v63);
        sub_B170A0();
      }
      v67 = (UIWidget_o *)v65->m_Items[v66];
      if ( !v67 )
        break;
      UIWidget__set_depth(v67, v67->fields.mDepth + 150, 0LL);
      max_length = v65->max_length;
      if ( (int)++v66 >= max_length )
        goto LABEL_20;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_20:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mCamera,
    (System_Int32_array **)main,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  float v41; // s0
  float v42; // s2
  float mFrameOutPosY; // s1
  float v44; // s4
  float v45; // s3
  float v46; // s2
  float v47; // s9
  System_Action_o *v48; // x21
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  EasingObject_o *v56; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Action_o *v61; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7D37 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, is_framein);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B16FFC(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__, v10);
    sub_B16FFC(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__, v11);
    sub_B16FFC(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, v12);
    byte_40F7D37 = 1;
  }
  v13 = sub_B170CC(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, is_framein, end_act, is_force, method);
  MissionNotifyComponent___c__DisplayClass64_0___ctor((MissionNotifyComponent___c__DisplayClass64_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 56) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 56), (System_Int32_array **)end_act, v20, v21, v22, v23, v24, v25);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v13 + 16) = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), gameObject, v27, v28, v29, v30, v31, v32);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v41 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v44 = v42;
  else
    v44 = z;
  if ( is_framein )
    v42 = z;
  if ( is_framein )
    v45 = v41;
  else
    v45 = x;
  if ( is_framein )
    v41 = x;
  *(float *)(v13 + 32) = v42;
  if ( is_framein )
    v46 = mFrameOutPosY;
  else
    v46 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v13 + 48) = is_framein;
  *(_DWORD *)(v13 + 84) = !is_framein;
  *(float *)(v13 + 72) = v45;
  *(float *)(v13 + 76) = v46;
  *(float *)(v13 + 80) = v44;
  *(float *)(v13 + 24) = v41;
  *(float *)(v13 + 28) = mFrameOutPosY;
  if ( is_framein )
    v47 = 0.5;
  else
    v47 = 0.25;
  v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v48, 0LL);
    return;
  }
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v13 + 16),
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 64), Component_UIWidget, v50, v51, v52, v53, v54, v55);
  v56 = *(EasingObject_o **)(v13 + 64);
  v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v57, v58, v59, v60);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v56 )
LABEL_26:
    sub_B170D4();
  EasingObject__Play(v56, v47 * timeScale, v61, v48, 0.0, 17, 0LL);
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
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x8

  if ( (byte_40F7D35 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MissionNotifyComponent__getState__, method);
    byte_40F7D35 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v7; // x2

  if ( (byte_40F7D38 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EasingObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7D38 = 1;
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
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_14;
      if ( Component_srcLineSprite )
      {
        EasingObject__SetPause((EasingObject_o *)Component_srcLineSprite, 1, 0LL);
LABEL_14:
        MissionNotifyComponent__SetState(this, 2, v7);
        goto LABEL_15;
      }
    }
    sub_B170D4();
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

  if ( (byte_40F7D36 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MissionNotifyComponent__setState__, *(_QWORD *)&state);
    byte_40F7D36 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_MissionNotifyComponent__setState__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v35; // w20
  DataMasterBase_o *v36; // x26
  int age; // w21
  bool IsMasterMission; // w24
  __int64 v39; // x2
  changeVColor_array *IsNullOrEmpty; // x0
  __int64 v41; // x2
  changeVColor_array *v42; // x1
  _BOOL4 v43; // w22
  UILabel_o *noLabel; // x26
  System_String_o *v45; // x0
  UnityEngine_GameObject_o *noRoot; // x0
  UnityEngine_Component_o *masterMissionNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v49; // x24
  bool activeSelf; // w0
  UnityEngine_GameObject_o *v51; // x0
  struct UILabel_o *missionNameLabel; // x0
  UnityEngine_GameObject_o *progressBarRoot; // x0
  UnityEngine_GameObject_o *v54; // x0
  UIProgressBar_o *progressBarNowSlider; // x0
  UIProgressBar_o *progressBarUpSlider; // x0
  UILabel_o *progressLabel; // x26
  System_String_o *v58; // x27
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UIProgressBar_o *v62; // x0
  _BOOL4 v63; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  UnityEngine_Component_o *clearSp; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *rewardMessage; // x0
  struct UISprite_o *v70; // x25
  struct UnityEngine_GameObject_o *clearEffectPrefab; // x26
  int v72; // w22
  int32_t v73; // w21
  System_Func_MissionNotifyComponent__o *v74; // x20
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x26
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct UnityEngine_Animation_o *v85; // x0
  UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  UnityEngine_Animation_o *v93; // x28
  bool v94; // w0
  int max_length; // w8
  changeVColor_array *v96; // x25
  unsigned int v97; // w23
  UIWidget_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x25
  bool IsDirectReward; // w0
  WebViewManager_o *v101; // x0
  GiftMaster_o *v102; // x0
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v104; // x25
  WebViewManager_o *v105; // x0
  EventMissionAddMaster_o *v106; // x0
  System_String_o *v107; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v109; // x9
  int32_t v110; // w1
  UIWidget_o *v111; // x0
  UnityEngine_Object_o *v112; // x0
  UnityEngine_Object_o *v113; // x25
  System_String_o *name; // x0
  struct UILabel_o *v115; // x8
  System_String_o *v116; // x0
  __int64 *v117; // x8
  System_String_o *v118; // x25
  int v119; // w22
  int32_t age_high; // w26
  UnityEngine_Component_o **p_typeSp; // x21
  UISprite_o *v122; // x27
  UISprite_o *typeSp; // x0
  UnityEngine_GameObject_o *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  AdManager_o *v131; // x24
  System_String_o *v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  const MethodInfo *v145; // x2
  UnityEngine_Component_o *v146; // x0
  UnityEngine_GameObject_o *v147; // x0
  UnityEngine_Component_o *v148; // x0
  UnityEngine_GameObject_o *v149; // x0
  ItemIconComponent_o *v150; // x0
  int32_t mDepth; // [xsp+Ch] [xbp-74h]
  System_Action_MissionNotifyComponent__o *v152; // [xsp+10h] [xbp-70h]
  int v154; // [xsp+24h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40F7D34 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, disp_info);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_CompleteMissionMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v18);
    sub_B16FFC(&long___TypeInfo, v19);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&StringLiteral_20336, v24);
    sub_B16FFC(&StringLiteral_20335, v25);
    sub_B16FFC(&StringLiteral_20331, v26);
    sub_B16FFC(&StringLiteral_20333, v27);
    sub_B16FFC(&StringLiteral_20334, v28);
    sub_B16FFC(&StringLiteral_871, v29);
    sub_B16FFC(&StringLiteral_9236, v30);
    sub_B16FFC(&StringLiteral_20332, v31);
    byte_40F7D34 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_WarQuestSelectionMaster )
    goto LABEL_119;
  v35 = (_DWORD)disp_info + 16;
  v36 = (DataMasterBase_o *)Master_WarQuestSelectionMaster;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_119;
    age = (int)entity->fields.age;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    IsNullOrEmpty = (changeVColor_array *)sub_B17014(long___TypeInfo, 1LL, v39);
    if ( !entity )
      goto LABEL_119;
    v42 = IsNullOrEmpty;
    if ( !IsNullOrEmpty )
      goto LABEL_119;
    if ( !IsNullOrEmpty->max_length )
      goto LABEL_120;
    IsNullOrEmpty->m_Items[0] = (changeVColor_o *)SHIDWORD(entity->fields.age);
    if ( !v36 )
      goto LABEL_119;
    if ( DataMasterBase__isEntityExistsFromId(v36, (System_Int64_array *)IsNullOrEmpty, 0LL) )
    {
      v43 = 1;
      v154 = 1;
    }
    else
    {
      v43 = age != 7;
      v154 = 0;
    }
  }
  else
  {
    v154 = 0;
    IsMasterMission = 0;
    age = 0;
    v43 = 1;
  }
  noLabel = this->fields.noLabel;
  v45 = System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_119;
  UILabel__set_text(noLabel, v45, 0LL);
  noRoot = this->fields.noRoot;
  if ( !noRoot )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(noRoot, v43 & ((v154 | IsMasterMission) ^ 1), 0LL);
  masterMissionNameLabel = (UnityEngine_Component_o *)this->fields.masterMissionNameLabel;
  if ( !masterMissionNameLabel )
    goto LABEL_119;
  gameObject = UnityEngine_Component__get_gameObject(masterMissionNameLabel, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_119;
  v49 = gameObject;
  activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v49 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v49, !activeSelf, 0LL);
  v51 = this->fields.noRoot;
  if ( !v51 )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf(v51, 0LL) )
  {
    missionNameLabel = this->fields.missionNameLabel;
    if ( !missionNameLabel )
      goto LABEL_119;
  }
  else
  {
    missionNameLabel = this->fields.masterMissionNameLabel;
    if ( !missionNameLabel )
      goto LABEL_119;
  }
  WrapControlText__textAdjust(
    missionNameLabel,
    disp_info->fields.message,
    missionNameLabel->fields.mFontSize,
    0,
    0,
    0LL);
  progressBarRoot = this->fields.progressBarRoot;
  if ( !progressBarRoot )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(progressBarRoot, disp_info->fields.condition > 0, 0LL);
  v54 = this->fields.progressBarRoot;
  if ( !v54 )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf(v54, 0LL) )
  {
    progressBarNowSlider = (UIProgressBar_o *)this->fields.progressBarNowSlider;
    if ( !progressBarNowSlider )
      goto LABEL_119;
    UIProgressBar__set_value(
      progressBarNowSlider,
      (float)disp_info->fields.progressFrom / (float)disp_info->fields.condition,
      0LL);
    progressBarUpSlider = (UIProgressBar_o *)this->fields.progressBarUpSlider;
    if ( !progressBarUpSlider )
      goto LABEL_119;
    UIProgressBar__set_value(
      progressBarUpSlider,
      (float)disp_info->fields.progressTo / (float)disp_info->fields.condition,
      0LL);
    progressLabel = this->fields.progressLabel;
    v58 = System_Int32__ToString_38275808((int)disp_info + 44, (System_String_o *)StringLiteral_9236, 0LL);
    v59 = System_Int32__ToString_38275808((int)disp_info + 48, (System_String_o *)StringLiteral_9236, 0LL);
    v60 = System_String__Concat_43746016(v58, (System_String_o *)StringLiteral_871, v59, 0LL);
    if ( !progressLabel )
      goto LABEL_119;
    UILabel__set_text(progressLabel, v60, 0LL);
  }
  v61 = this->fields.progressBarRoot;
  if ( !v61 )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf(v61, 0LL) )
  {
    v62 = (UIProgressBar_o *)this->fields.progressBarUpSlider;
    if ( !v62 )
      goto LABEL_119;
    v63 = UIProgressBar__get_value(v62, 0LL) >= 1.0;
  }
  else
  {
    v63 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v63, banner_group, 0LL);
  clearSp = (UnityEngine_Component_o *)this->fields.clearSp;
  if ( !clearSp )
    goto LABEL_119;
  v68 = UnityEngine_Component__get_gameObject(clearSp, 0LL);
  if ( !v68 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v68, v63, 0LL);
  rewardMessage = this->fields.rewardMessage;
  if ( !rewardMessage )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(rewardMessage, 0, 0LL);
  if ( !v63 )
  {
LABEL_86:
    v110 = 462;
    goto LABEL_87;
  }
  v70 = this->fields.clearSp;
  v152 = frame_out_end_act;
  if ( !v70 )
    goto LABEL_119;
  clearEffectPrefab = this->fields.clearEffectPrefab;
  v72 = age;
  mDepth = v70->fields.mDepth;
  v73 = v35;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v74 = frame_out_start_func;
  v75 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)clearEffectPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v75 )
    goto LABEL_119;
  v76 = v75;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v75,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = Component_srcLineSprite;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectSimpleAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v85 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v76,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  this->fields.mClearEffectAnim = v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectAnim,
    (System_Int32_array **)v85,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_119;
    SimpleAnimation__Stop(*p_mClearEffectSimpleAnim, 0LL);
    frame_out_start_func = v74;
    v35 = v73;
    age = v72;
  }
  else
  {
    v93 = *p_mClearEffectAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v94 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v93, 0LL, 0LL);
    frame_out_start_func = v74;
    v35 = v73;
    age = v72;
    if ( v94 )
    {
      if ( !*p_mClearEffectAnim )
        goto LABEL_119;
      UnityEngine_Animation__Stop(*p_mClearEffectAnim, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v76, (UnityEngine_Component_o *)v70, 0LL);
  IsNullOrEmpty = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                    v76,
                    (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !IsNullOrEmpty )
    goto LABEL_119;
  max_length = IsNullOrEmpty->max_length;
  v96 = IsNullOrEmpty;
  if ( max_length >= 1 )
  {
    v97 = 0;
    while ( v97 < max_length )
    {
      v98 = (UIWidget_o *)v96->m_Items[v97];
      if ( !v98 )
        goto LABEL_119;
      UIWidget__set_depth(v98, mDepth + 1 + v98->fields.mDepth, 0LL);
      max_length = v96->max_length;
      if ( (int)++v97 >= max_length )
        goto LABEL_68;
    }
LABEL_120:
    sub_B17100(IsNullOrEmpty, v42, v41);
    sub_B170A0();
  }
LABEL_68:
  if ( !entity )
  {
    frame_out_end_act = v152;
    goto LABEL_86;
  }
  v99 = this->fields.rewardMessage;
  IsDirectReward = EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  frame_out_end_act = v152;
  if ( !v99 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v99, IsDirectReward, 0LL);
  if ( !entity )
    goto LABEL_119;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_86;
  v101 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v101 )
    goto LABEL_119;
  v102 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v101,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !v102 )
    goto LABEL_119;
  GiftListById = GiftMaster__GetGiftListById(v102, *(&entity->fields.startType + 1), 0LL);
  if ( !GiftListById )
    goto LABEL_86;
  v104 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_86;
  v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v105 )
    goto LABEL_119;
  v106 = (EventMissionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v105,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !v106 )
    goto LABEL_119;
  v107 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
           v106,
           entity->fields.id,
           HIDWORD(entity->fields.age),
           1,
           0LL);
  IsNullOrEmpty = (changeVColor_array *)System_String__IsNullOrEmpty(v107, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_119;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v107, 0LL);
    v146 = (UnityEngine_Component_o *)this->fields.itemIcon;
    if ( !v146 )
      goto LABEL_119;
    v147 = UnityEngine_Component__get_gameObject(v146, 0LL);
    GameObjectExtensions__SetLocalPositionX(v147, 12.0, 0LL);
    v148 = (UnityEngine_Component_o *)this->fields.itemIcon;
    if ( !v148 )
      goto LABEL_119;
    v149 = UnityEngine_Component__get_gameObject(v148, 0LL);
    GameObjectExtensions__SetLocalScale_27422296(v149, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_117;
  }
  if ( !v104->max_length )
    goto LABEL_120;
  v109 = (int32_t *)v104->m_Items[0];
  if ( !v109 || !itemIcon )
LABEL_119:
    sub_B170D4();
  ItemIconComponent__SetGift(this->fields.itemIcon, v109[5], v109[6], v109[7], 0, 0LL);
LABEL_117:
  v150 = this->fields.itemIcon;
  if ( !v150 )
    goto LABEL_119;
  ItemIconComponent__SetNotifyDirectGetCounter(v150, 70, 0LL);
  v110 = 360;
LABEL_87:
  v111 = (UIWidget_o *)this->fields.masterMissionNameLabel;
  if ( !v111 )
    goto LABEL_119;
  UIWidget__set_width(v111, v110, 0LL);
  v112 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v112 )
    goto LABEL_119;
  v113 = v112;
  name = UnityEngine_Object__get_name(v112, 0LL);
  v115 = this->fields.noLabel;
  if ( !v115 )
    goto LABEL_119;
  v116 = System_String__Concat_43743732(name, v115->fields.mText, 0LL);
  UnityEngine_Object__set_name(v113, v116, 0LL);
  switch ( age )
  {
    case 1:
    case 7:
      v117 = &StringLiteral_20332;
      goto LABEL_98;
    case 2:
      v117 = &StringLiteral_20336;
      goto LABEL_98;
    case 3:
      v117 = &StringLiteral_20331;
      goto LABEL_98;
    case 4:
      v117 = &StringLiteral_20333;
      goto LABEL_98;
    case 5:
      v117 = &StringLiteral_20335;
      goto LABEL_98;
    case 6:
      v117 = &StringLiteral_20334;
LABEL_98:
      v118 = (System_String_o *)*v117;
      break;
    default:
      v118 = 0LL;
      break;
  }
  v119 = age;
  if ( !entity || ((v154 ^ 1) & 1) != 0 )
  {
    p_typeSp = (UnityEngine_Component_o **)&this->fields.typeSp;
    typeSp = this->fields.typeSp;
    if ( !typeSp )
      goto LABEL_119;
    UISprite__set_spriteName(typeSp, v118, 0LL);
  }
  else
  {
    age_high = HIDWORD(entity->fields.age);
    p_typeSp = (UnityEngine_Component_o **)&this->fields.typeSp;
    v122 = this->fields.typeSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(age_high, v122, v118, 0LL);
  }
  if ( !*p_typeSp )
    goto LABEL_119;
  v124 = UnityEngine_Component__get_gameObject(*p_typeSp, 0LL);
  if ( !v124 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v124, 1, 0LL);
  if ( v63 && v119 == 3 )
  {
    v131 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    v132 = System_Int32__ToString(v35, 0LL);
    if ( !v131 )
      goto LABEL_119;
    AdManager__TrackEvent(v131, 8, 8, 0, 0, v132, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mDragStartAct,
    (System_Int32_array **)drag_start_act,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutStartFunc,
    (System_Int32_array **)frame_out_start_func,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutEndAct,
    (System_Int32_array **)frame_out_end_act,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  MissionNotifyComponent__SetState(this, 1, v145);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x0

  if ( (byte_40F7D33 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MissionNotifyComponent__update__, method);
    byte_40F7D33 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_MissionNotifyComponent__update__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  MissionNotifyComponent_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x21

  if ( (byte_40F8630 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&SeManager_TypeInfo, v6);
    sub_B16FFC(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__, v7);
    sub_B16FFC(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, v8);
    byte_40F8630 = 1;
  }
  v9 = sub_B170CC(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, that, method, v3, v4);
  MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___ctor(
    (MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = that;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)that, v10, v11, v12, v13, v14, v15);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(20, 0LL);
  v16 = *(MissionNotifyComponent_o **)(v9 + 16);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v16 )
LABEL_9:
    sub_B170D4();
  MissionNotifyComponent__FrameIn(v16, v21, 0, 0LL);
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Component_o **v19; // x19
  System_Func_object__o *v20; // x0
  Il2CppObject *v21; // x0
  MissionNotifyComponent_StateFrameOut_Fields *p_fields; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *mNextComp; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  MissionNotifyComponent_o *v34; // x20
  System_Action_o *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  changeVColor_array *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  int max_length; // w8
  changeVColor_array *v41; // x19
  unsigned int v42; // w20
  UIWidget_o *v43; // x0

  if ( (byte_40F8631 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_System_Func_MissionNotifyComponent__Invoke__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__, v10);
    sub_B16FFC(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, v11);
    byte_40F8631 = 1;
  }
  v12 = sub_B170CC(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___ctor(
    (MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_23;
  *(_QWORD *)(v12 + 16) = that;
  v19 = (UnityEngine_Component_o **)(v12 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( !*(_QWORD *)(v12 + 16) )
    goto LABEL_23;
  v20 = *(System_Func_object__o **)(*(_QWORD *)(v12 + 16) + 208LL);
  if ( !v20 )
    goto LABEL_23;
  v21 = System_Func_object___Invoke(
          v20,
          (const MethodInfo_284EF68 *)Method_System_Func_MissionNotifyComponent__Invoke__);
  this->fields.mNextComp = (struct MissionNotifyComponent_o *)v21;
  p_fields = &this->fields;
  sub_B16F98((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
  if ( !*v19 )
    goto LABEL_23;
  if ( !BYTE1((*v19)[7].fields.m_CachedPtr) )
  {
    mNextComp = (UnityEngine_Object_o *)p_fields->mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v34 = *(MissionNotifyComponent_o **)(v12 + 16);
      v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v12,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v34 )
        goto LABEL_23;
      MissionNotifyComponent__FrameOut(v34, v35, 0, 0LL);
    }
  }
  if ( !*v19
    || (gameObject = UnityEngine_Component__get_gameObject(*v19, 0LL)) == 0LL
    || (v37 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                gameObject,
                (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_23:
    sub_B170D4();
  }
  max_length = v37->max_length;
  v41 = v37;
  if ( max_length >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= max_length )
      {
        sub_B17100(v37, v38, v39);
        sub_B170A0();
      }
      v43 = (UIWidget_o *)v41->m_Items[v42];
      if ( !v43 )
        break;
      UIWidget__set_depth(v43, v43->fields.mDepth - 50, 0LL);
      max_length = v41->max_length;
      if ( (int)++v42 >= max_length )
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
  if ( (byte_40F8633 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_MissionNotifyComponent___, that);
    byte_40F8633 = 1;
  }
  if ( !that )
    sub_B170D4();
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (BlankEarth_QAARotateEarthResponse_o *)that,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  MissionNotifyComponent_o **v17; // x19
  __int64 v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v20; // s0
  float v21; // s1
  MissionNotifyComponent_o *v22; // x0
  float v23; // s8
  float v24; // s9
  UnityEngine_GameObject_o *v25; // x0
  struct UISprite_o *baseSp; // x20
  float v27; // s0
  struct UISprite_o *v28; // x0
  float v29; // s8
  float v30; // s0
  struct UISprite_o *v31; // x0
  UnityEngine_Object_o *v32; // x19
  BattleServantConfConponent_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  MissionNotifyComponent_o *v41; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x20
  UnityEngine_Vector2_o v47; // 0:s0.4,4:s1.4

  if ( (byte_40F8632 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__, v8);
    sub_B16FFC(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, v9);
    byte_40F8632 = 1;
  }
  v10 = sub_B170CC(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, that, method, v3, v4);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___ctor(
    (MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_26;
  *(_QWORD *)(v10 + 16) = that;
  v17 = (MissionNotifyComponent_o **)(v10 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)that, v11, v12, v13, v14, v15, v16);
  v18 = *(_QWORD *)(v10 + 16);
  if ( !v18 )
    goto LABEL_26;
  if ( *(_BYTE *)(v18 + 185) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    *(UnityEngine_Vector3_o *)&v20 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*v17 )
      goto LABEL_26;
    (*v17)->fields.mInertiaSpd = (struct UnityEngine_Vector2_o)vmul_f32(
                                                                 (float32x2_t)(*v17)->fields.mInertiaSpd,
                                                                 vdup_n_s32(0x3F6147AEu)).n64_u64[0];
    v22 = *v17;
    if ( !*v17 )
      goto LABEL_26;
    v23 = v20 + v22->fields.mInertiaSpd.fields.x;
    v24 = v21 + v22->fields.mInertiaSpd.fields.y;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
    v47.fields.x = v23;
    v47.fields.y = v24;
    GameObjectExtensions__SetLocalPosition_27419860(v25, v47, 0LL);
    if ( !*v17 )
      goto LABEL_26;
    baseSp = (*v17)->fields.baseSp;
    if ( !baseSp )
      goto LABEL_26;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))baseSp->klass->vtable._7_get_alpha.method)(
      baseSp,
      baseSp->klass->vtable._8_set_alpha.methodPtr);
    if ( !*v17 )
      goto LABEL_26;
    v28 = (*v17)->fields.baseSp;
    if ( !v28 )
      goto LABEL_26;
    v29 = v27;
    v30 = ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v28->klass->vtable._7_get_alpha.method)(
            v28,
            v28->klass->vtable._8_set_alpha.methodPtr);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))baseSp->klass->vtable._8_set_alpha.method)(
      baseSp,
      baseSp->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v29 + (float)((float)(0.0 - v30) * 0.15));
    if ( !*v17 )
      goto LABEL_26;
    v31 = (*v17)->fields.baseSp;
    if ( !v31 )
      goto LABEL_26;
    if ( ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v31->klass->vtable._7_get_alpha.method)(
           v31,
           v31->klass->vtable._8_set_alpha.methodPtr) <= 0.01 )
    {
      if ( *v17 )
      {
        MissionNotifyComponent__SetState(*v17, 0, 0LL);
        return;
      }
LABEL_26:
      sub_B170D4();
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (BattleServantConfConponent_o *)&this->fields;
    v32 = (UnityEngine_Object_o *)mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
    {
      if ( !p_fields->klass )
        goto LABEL_26;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)p_fields->klass, 0LL) != 1 )
      {
        p_fields->klass = 0LL;
        sub_B16F98(p_fields, 0LL, v35, v36, v37, v38, v39, v40);
        v41 = *(MissionNotifyComponent_o **)(v10 + 16);
        v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
        System_Action___ctor(
          v46,
          (Il2CppObject *)v10,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v41 )
          goto LABEL_26;
        MissionNotifyComponent__FrameOut(v41, v46, 0, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
  struct UISprite_o *baseSp; // x0
  UnityEngine_Object_o *mClearEffectSimpleAnim; // x20
  SimpleAnimation_o *v7; // x0
  UnityEngine_Object_o *mClearEffectAnim; // x20
  UnityEngine_Animation_o *v9; // x0

  if ( (byte_40F8634 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40F8634 = 1;
  }
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_18;
  baseSp = that->fields.baseSp;
  if ( !baseSp )
    goto LABEL_18;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))baseSp->klass->vtable._8_set_alpha.method)(
    baseSp,
    baseSp->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  mClearEffectSimpleAnim = (UnityEngine_Object_o *)that->fields.mClearEffectSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    v7 = that->fields.mClearEffectSimpleAnim;
    if ( v7 )
    {
      SimpleAnimation__Play(v7, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  mClearEffectAnim = (UnityEngine_Object_o *)that->fields.mClearEffectAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mClearEffectAnim, 0LL, 0LL) )
  {
    v9 = that->fields.mClearEffectAnim;
    if ( !v9 )
      goto LABEL_18;
    UnityEngine_Animation__Play(v9, 0LL);
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
  float v8; // s0
  float x; // w8
  struct UnityEngine_Vector2_o mTouchPosDif; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o v11; // 0:s0.4,4:s1.4

  mTouchPosDif = this->fields.mTouchPosDif;
  v11.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&v3, (const MethodInfo *)&mTouchPosDif);
  if ( v11.fields.x >= UnityEngine_Vector2__get_sqrMagnitude(v11, (const MethodInfo *)&this->fields.mTouchPosDifOld) )
  {
    mTouchPosDifOld.fields.x = mTouchPosDif.fields.x;
  }
  else
  {
    mTouchPosDifOld = this->fields.mTouchPosDifOld;
    mTouchPosDif = mTouchPosDifOld;
  }
  mTouchPosDif.fields.x = UnityEngine_Mathf__Clamp(mTouchPosDifOld.fields.x, -15.0, 15.0, 0LL);
  v8 = UnityEngine_Mathf__Clamp(mTouchPosDif.fields.y, -15.0, 15.0, 0LL);
  mTouchPosDif.fields.y = v8;
  if ( !that )
    sub_B170D4();
  x = mTouchPosDif.fields.x;
  that->fields.mInertiaSpd.fields.y = v8;
  that->fields.mInertiaSpd.fields.x = x;
}


void __fastcall MissionNotifyComponent_StateShowing__update(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Camera_o *mCamera; // x21
  int32_t mDragFrameCount; // w8
  struct UnityEngine_Vector2_o v10; // d0
  float v11; // s1
  float v12; // s8
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8635 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, that);
    byte_40F8635 = 1;
  }
  if ( !that )
    sub_B170D4();
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress
      || (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime) < 2.0 )
    {
      return;
    }
LABEL_14:
    MissionNotifyComponent__SetState(that, 3, 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  this->fields.mTouchPosOld = this->fields.mTouchPosNow;
  mCamera = that->fields.mCamera;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  this->fields.mTouchPosNow = CTouch__getScreenPosition_27640488(mCamera, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) > 1 )
    this->fields.mTouchPosNow = this->fields.mTouchPosOld;
  mDragFrameCount = this->fields.mDragFrameCount;
  if ( mDragFrameCount < 1 )
  {
    v10.fields.x = this->fields.mTouchPosDif.fields.x;
    v11 = this->fields.mTouchPosDif.fields.y;
  }
  else
  {
    v10 = (struct UnityEngine_Vector2_o)vsub_f32(
                                          (float32x2_t)this->fields.mTouchPosNow,
                                          (float32x2_t)this->fields.mTouchPosOld).n64_u64[0];
    v11 = v10.fields.y;
    this->fields.mTouchPosDifOld = this->fields.mTouchPosDif;
    this->fields.mTouchPosDif = v10;
  }
  v12 = x + v10.fields.x;
  v13 = y + v11;
  this->fields.mDragFrameCount = mDragFrameCount + 1;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v15.fields.x = v12;
  v15.fields.y = v13;
  GameObjectExtensions__SetLocalPosition_27419860(v14, v15, 0LL);
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
  struct MissionNotifyComponent_o *_4__this; // x8
  struct UISprite_o *baseSp; // x0

  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, this->fields.pos_to, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (baseSp = _4__this->fields.baseSp) == 0LL )
    sub_B170D4();
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
  unsigned __int64 v5; // d0 OVERLAPPED
  float v6; // s2
  int v7; // s1
  struct MissionNotifyComponent_o *_4__this; // x8
  struct UISprite_o *baseSp; // x0
  float v10; // [xsp+0h] [xbp-20h]

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_5;
  mStartTime = eo->fields.mStartTime;
  v5 = vadd_f32(
         *(float32x2_t *)&this->fields.pos_from.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&this->fields.pos_to.fields.x, *(float32x2_t *)&this->fields.pos_from.fields.x),
           mStartTime)).n64_u64[0];
  v6 = this->fields.pos_from.fields.z
     + (float)(mStartTime * (float)(this->fields.pos_to.fields.z - this->fields.pos_from.fields.z));
  v7 = HIDWORD(v5);
  v10 = mStartTime;
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&v5, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (baseSp = _4__this->fields.baseSp) == 0LL )
LABEL_5:
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))baseSp->klass->vtable._8_set_alpha.method)(
    baseSp,
    baseSp->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    (float)(v10 * (float)(this->fields.alp_to - this->fields.alp_from)) + (float)this->fields.alp_from);
}