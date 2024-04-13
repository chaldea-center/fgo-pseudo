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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v35; // s0
  float v36; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v38; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x21
  MissionNotifyComponent_StateNone_o *v48; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v49; // x21
  MissionNotifyComponent_StateFrameIn_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x21
  MissionNotifyComponent_StateShowing_o *v52; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v53; // x20
  MissionNotifyComponent_StateFrameOut_o *v54; // x21
  const MethodInfo *v55; // x2
  int v56; // w8
  void *v57; // x20
  unsigned int v58; // w21
  struct UnityEngine_Camera_o *main; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x0

  if ( (byte_42E73FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MissionNotifyComponent___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_CStateManager_MissionNotifyComponent__add__, v9, v10, v11);
    sub_B5D5C4(&CStateManager_MissionNotifyComponent__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v15, v16, v17);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&MissionNotifyComponent_StateFrameIn_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&MissionNotifyComponent_StateFrameOut_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&MissionNotifyComponent_StateNone_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&MissionNotifyComponent_StateShowing_TypeInfo, v30, v31, v32);
    byte_42E73FE = 1;
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
  v35 = (float)baseSp->fields.mHeight * 0.5;
  v36 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v36 - v35) + 1.0;
  this->fields.mFrameOutPosY = v36 + v35;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseAtlas,
    (System_Int32_array **)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v38);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v40 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_MissionNotifyComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v40,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v40;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    mFSM = this->fields.mFSM;
    v48 = (MissionNotifyComponent_StateNone_o *)sub_B5D694(MissionNotifyComponent_StateNone_TypeInfo);
    MissionNotifyComponent_StateNone___ctor(v48, 0LL);
    if ( !mFSM )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v48,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MissionNotifyComponent__add__);
    v49 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v50 = (MissionNotifyComponent_StateFrameIn_o *)sub_B5D694(MissionNotifyComponent_StateFrameIn_TypeInfo);
    MissionNotifyComponent_StateFrameIn___ctor(v50, 0LL);
    if ( !v49 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v49,
      1,
      (IState_T__o *)v50,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MissionNotifyComponent__add__);
    v51 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v52 = (MissionNotifyComponent_StateShowing_o *)sub_B5D694(MissionNotifyComponent_StateShowing_TypeInfo);
    MissionNotifyComponent_StateShowing___ctor(v52, 0LL);
    if ( !v51 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v51,
      2,
      (IState_T__o *)v52,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MissionNotifyComponent__add__);
    v53 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v54 = (MissionNotifyComponent_StateFrameOut_o *)sub_B5D694(MissionNotifyComponent_StateFrameOut_TypeInfo);
    MissionNotifyComponent_StateFrameOut___ctor(v54, 0LL);
    if ( !v53 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v53,
      3,
      (IState_T__o *)v54,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v55);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_21;
  v56 = *((_DWORD *)gameObject + 6);
  v57 = gameObject;
  if ( v56 >= 1 )
  {
    v58 = 0;
    while ( 1 )
    {
      if ( v58 >= v56 )
      {
        v66 = sub_B5D6C8(gameObject);
        sub_B5D668(v66, 0LL);
      }
      gameObject = (void *)*((_QWORD *)v57 + (int)v58 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 42) + 150, 0LL);
      v56 = *((_DWORD *)v57 + 6);
      if ( (int)++v58 >= v56 )
        goto LABEL_20;
    }
LABEL_21:
    sub_B5D69C(gameObject, method);
  }
LABEL_20:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mCamera,
    (System_Int32_array **)main,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
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
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  float v47; // s0
  float v48; // s2
  float mFrameOutPosY; // s1
  float v50; // s4
  float v51; // s3
  float v52; // s2
  float v53; // s9
  System_Action_o *v54; // x21
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  EasingObject_o *v62; // x19
  System_Action_o *v63; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7403 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, is_framein, (_DWORD)end_act, is_force);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10, v11);
    sub_B5D5C4(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__, v12, v13, v14);
    sub_B5D5C4(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__, v15, v16, v17);
    sub_B5D5C4(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, v18, v19, v20);
    byte_42E7403 = 1;
  }
  v21 = sub_B5D694(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
  MissionNotifyComponent___c__DisplayClass64_0___ctor((MissionNotifyComponent___c__DisplayClass64_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_26;
  *(_QWORD *)(v21 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 40), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 56) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 56), (System_Int32_array **)end_act, v30, v31, v32, v33, v34, v35);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v21 + 16) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), gameObject, v37, v38, v39, v40, v41, v42);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v21 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v47 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v21 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v50 = v48;
  else
    v50 = z;
  if ( is_framein )
    v48 = z;
  if ( is_framein )
    v51 = v47;
  else
    v51 = x;
  if ( is_framein )
    v47 = x;
  *(float *)(v21 + 32) = v48;
  if ( is_framein )
    v52 = mFrameOutPosY;
  else
    v52 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v21 + 48) = is_framein;
  *(_DWORD *)(v21 + 84) = !is_framein;
  *(float *)(v21 + 72) = v51;
  *(float *)(v21 + 76) = v52;
  *(float *)(v21 + 80) = v50;
  *(float *)(v21 + 24) = v47;
  *(float *)(v21 + 28) = mFrameOutPosY;
  if ( is_framein )
    v53 = 0.5;
  else
    v53 = 0.25;
  v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v21,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v54, 0LL);
    return;
  }
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v21 + 16),
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v21 + 64) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 64), Component_UIWidget, v56, v57, v58, v59, v60, v61);
  v62 = *(EasingObject_o **)(v21 + 64);
  v63 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v21,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v62 )
LABEL_26:
    sub_B5D69C(v22, v23);
  EasingObject__Play(v62, v53 * timeScale, v63, v54, 0.0, 17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  MissionNotifyComponent_o *v4; // x19
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E7401 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_B5D5C4(
                                         &Method_CStateManager_MissionNotifyComponent__getState__,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42E7401 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E7404 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EasingObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7404 = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v8) != 1 )
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
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
        MissionNotifyComponent__SetState(this, 2, v12);
        goto LABEL_15;
      }
    }
    sub_B5D69C(gameObject, v10);
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
  __int64 v3; // x3
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x0

  if ( (byte_42E7402 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MissionNotifyComponent__setState__, state, (_DWORD)method, v3);
    byte_42E7402 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_MissionNotifyComponent__setState__);
}


void __fastcall MissionNotifyComponent__SetupAndPlay(
        MissionNotifyComponent_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *drag_start_act,
        System_Func_MissionNotifyComponent__o *frame_out_start_func,
        System_Action_MissionNotifyComponent__o *frame_out_end_act,
        const MethodInfo *method)
{
  struct System_Func_MissionNotifyComponent__o *v7; // x28
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  __int64 Instance; // x0
  __int64 v77; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  int32_t v79; // w20
  DataMasterBase_o *v80; // x26
  int age; // w21
  bool IsMasterMission; // w24
  _BOOL4 v83; // w22
  UILabel_o *noLabel; // x26
  UnityEngine_GameObject_o *v85; // x24
  UILabel_o *progressLabel; // x26
  System_String_o *v87; // x27
  System_String_o *v88; // x0
  _BOOL4 v89; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  struct UISprite_o *clearSp; // x25
  struct UnityEngine_GameObject_o *clearEffectPrefab; // x26
  int v95; // w22
  int32_t v96; // w21
  struct System_Func_MissionNotifyComponent__o *v97; // x20
  UnityEngine_GameObject_o *v98; // x26
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct UnityEngine_Animation_o *v107; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  UnityEngine_Object_o *v115; // x28
  bool v116; // w0
  int v117; // w8
  __int64 v118; // x25
  unsigned int v119; // w23
  UnityEngine_GameObject_o *rewardMessage; // x25
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v122; // x25
  System_String_o *v123; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v125; // x9
  UnityEngine_Object_o *v126; // x25
  struct UILabel_o *v127; // x8
  System_String_o *v128; // x0
  __int64 *v129; // x8
  System_String_o *v130; // x25
  int v131; // w22
  int32_t age_high; // w26
  struct UISprite_o **p_typeSp; // x21
  UISprite_o *typeSp; // x27
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  AdManager_o *v141; // x24
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  const MethodInfo *v154; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v156; // x0
  __int64 v157; // x0
  int32_t mDepth; // [xsp+Ch] [xbp-74h]
  System_Action_MissionNotifyComponent__o *v159; // [xsp+10h] [xbp-70h]
  int v161; // [xsp+24h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v7 = frame_out_start_func;
  if ( (byte_42E7400 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)disp_info, (_DWORD)drag_start_act, frame_out_start_func);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_CompleteMissionMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v28, v29, v30);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v31, v32, v33);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v34, v35, v36);
    sub_B5D5C4(&long___TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v40, v41, v42);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_20679/*"master_mission_weekly"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_20678/*"master_mission_special"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_20674/*"master_mission_daily"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_20676/*"master_mission_extra"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_20677/*"master_mission_panel"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_20675/*"master_mission_event"*/, v73, v74, v75);
    byte_42E7400 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_WarQuestSelectionMaster )
    goto LABEL_119;
  v79 = (_DWORD)disp_info + 16;
  v80 = (DataMasterBase_o *)Instance;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_119;
    age = (int)entity->fields.age;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = sub_B5D5DC(long___TypeInfo, 1LL);
    if ( !entity )
      goto LABEL_119;
    v77 = Instance;
    if ( !Instance )
      goto LABEL_119;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_120;
    *(_QWORD *)(Instance + 32) = SHIDWORD(entity->fields.age);
    if ( !v80 )
      goto LABEL_119;
    if ( DataMasterBase__isEntityExistsFromId(v80, (System_Int64_array *)Instance, 0LL) )
    {
      v83 = 1;
      v161 = 1;
    }
    else
    {
      v83 = age != 7;
      v161 = 0;
    }
  }
  else
  {
    v161 = 0;
    IsMasterMission = 0;
    age = 0;
    v83 = 1;
  }
  noLabel = this->fields.noLabel;
  Instance = (__int64)System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_119;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.noRoot;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v83 & ((v161 | IsMasterMission) ^ 1), 0LL);
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_119;
  v85 = (UnityEngine_GameObject_o *)Instance;
  Instance = UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v85 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v85, (Instance & 1) == 0, 0LL);
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
    v87 = System_Int32__ToString_39741776((int)disp_info + 44, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    v88 = System_Int32__ToString_39741776((int)disp_info + 48, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    Instance = (__int64)System_String__Concat_44580072(v87, (System_String_o *)StringLiteral_885/*"/"*/, v88, 0LL);
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
    v89 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL) >= 1.0;
  }
  else
  {
    v89 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v89, banner_group, 0LL);
  Instance = (__int64)this->fields.clearSp;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v89, 0LL);
  Instance = (__int64)this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( !v89 )
  {
LABEL_86:
    v77 = 462LL;
    goto LABEL_87;
  }
  clearSp = this->fields.clearSp;
  v159 = frame_out_end_act;
  if ( !clearSp )
    goto LABEL_119;
  clearEffectPrefab = this->fields.clearEffectPrefab;
  v95 = age;
  mDepth = clearSp->fields.mDepth;
  v96 = v79;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v97 = v7;
  Instance = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)clearEffectPrefab,
                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_119;
  v98 = (UnityEngine_GameObject_o *)Instance;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = Component_srcLineSprite;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectSimpleAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v107 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v98,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  this->fields.mClearEffectAnim = v107;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectAnim,
    (System_Int32_array **)v107,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    Instance = (__int64)*p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_119;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0LL);
    v7 = v97;
    v79 = v96;
    age = v95;
  }
  else
  {
    v115 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v116 = UnityEngine_Object__op_Inequality(v115, 0LL, 0LL);
    v7 = v97;
    v79 = v96;
    age = v95;
    if ( v116 )
    {
      Instance = (__int64)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_119;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v98, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                        v98,
                        (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_119;
  v117 = *(_DWORD *)(Instance + 24);
  v118 = Instance;
  if ( v117 >= 1 )
  {
    v119 = 0;
    while ( v119 < v117 )
    {
      Instance = *(_QWORD *)(v118 + 8LL * (int)v119 + 32);
      if ( !Instance )
        goto LABEL_119;
      UIWidget__set_depth((UIWidget_o *)Instance, mDepth + 1 + *(_DWORD *)(Instance + 168), 0LL);
      v117 = *(_DWORD *)(v118 + 24);
      if ( (int)++v119 >= v117 )
        goto LABEL_68;
    }
LABEL_120:
    v157 = sub_B5D6C8(Instance);
    sub_B5D668(v157, 0LL);
  }
LABEL_68:
  if ( !entity )
  {
    frame_out_end_act = v159;
    goto LABEL_86;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  frame_out_end_act = v159;
  if ( !rewardMessage )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(rewardMessage, Instance & 1, 0LL);
  Instance = (__int64)entity;
  if ( !entity )
    goto LABEL_119;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_86;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_119;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, *(&entity->fields.startType + 1), 0LL);
  if ( !GiftListById )
    goto LABEL_86;
  v122 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_86;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_119;
  v123 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
           (EventMissionAddMaster_o *)Instance,
           entity->fields.id,
           HIDWORD(entity->fields.age),
           1,
           0LL);
  Instance = System_String__IsNullOrEmpty(v123, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( (Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_119;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v123, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_119;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_119;
    v156 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_32432824(v156, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_117;
  }
  if ( !v122->max_length )
    goto LABEL_120;
  v125 = (int32_t *)v122->m_Items[0];
  if ( !v125 || !itemIcon )
LABEL_119:
    sub_B5D69C(Instance, v77);
  ItemIconComponent__SetGift(this->fields.itemIcon, v125[5], v125[6], v125[7], 0, 0LL);
LABEL_117:
  Instance = (__int64)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_119;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0LL);
  v77 = 360LL;
LABEL_87:
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_119;
  UIWidget__set_width((UIWidget_o *)Instance, v77, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  v126 = (UnityEngine_Object_o *)Instance;
  Instance = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v127 = this->fields.noLabel;
  if ( !v127 )
    goto LABEL_119;
  v128 = System_String__Concat_44577788((System_String_o *)Instance, v127->fields.mText, 0LL);
  UnityEngine_Object__set_name(v126, v128, 0LL);
  switch ( age )
  {
    case 1:
    case 7:
      v129 = &StringLiteral_20675/*"master_mission_event"*/;
      goto LABEL_98;
    case 2:
      v129 = &StringLiteral_20679/*"master_mission_weekly"*/;
      goto LABEL_98;
    case 3:
      v129 = &StringLiteral_20674/*"master_mission_daily"*/;
      goto LABEL_98;
    case 4:
      v129 = &StringLiteral_20676/*"master_mission_extra"*/;
      goto LABEL_98;
    case 5:
      v129 = &StringLiteral_20678/*"master_mission_special"*/;
      goto LABEL_98;
    case 6:
      v129 = &StringLiteral_20677/*"master_mission_panel"*/;
LABEL_98:
      v130 = (System_String_o *)*v129;
      break;
    default:
      v130 = 0LL;
      break;
  }
  v131 = age;
  if ( !entity || ((v161 ^ 1) & 1) != 0 )
  {
    p_typeSp = &this->fields.typeSp;
    Instance = (__int64)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_119;
    UISprite__set_spriteName((UISprite_o *)Instance, v130, 0LL);
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
    AtlasManager__SetEventUI_31190412(age_high, typeSp, v130, 0LL);
  }
  Instance = (__int64)*p_typeSp;
  if ( !*p_typeSp )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v89 && v131 == 3 )
  {
    v141 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (__int64)System_Int32__ToString(v79, 0LL);
    if ( !v141 )
      goto LABEL_119;
    AdManager__TrackEvent(v141, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mDragStartAct,
    (System_Int32_array **)drag_start_act,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  this->fields.mFrameOutStartFunc = v7;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutStartFunc,
    (System_Int32_array **)v7,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutEndAct,
    (System_Int32_array **)frame_out_end_act,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  MissionNotifyComponent__SetState(this, 1, v154);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x0

  if ( (byte_42E73FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MissionNotifyComponent__update__, (_DWORD)method, v2, v3);
    byte_42E73FF = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_MissionNotifyComponent__update__);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  MissionNotifyComponent_o *v17; // x20
  System_Action_o *v18; // x21

  if ( (byte_42E5F64 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&SeManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__, v8, v9, v10);
    sub_B5D5C4(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, v11, v12, v13);
    byte_42E5F64 = 1;
  }
  v14 = (MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *)sub_B5D694(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
  MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  v14->fields.that = that;
  sub_B5D560(&v14->fields);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(20, 0LL);
  v17 = v14->fields.that;
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v14,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v17 )
LABEL_9:
    sub_B5D69C(v15, v16);
  MissionNotifyComponent__FrameIn(v17, v18, 0, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *v21; // x21
  void *mFrameOutStartFunc; // x0
  __int64 v23; // x1
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_Fields *p_fields; // x19
  MissionNotifyComponent_StateFrameOut_Fields *v25; // x20
  UnityEngine_Object_o *mNextComp; // x20
  MissionNotifyComponent_o *v27; // x20
  System_Action_o *v28; // x22
  int v29; // w8
  void *v30; // x19
  unsigned int v31; // w20
  __int64 v32; // x0

  if ( (byte_42E5F65 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_MissionNotifyComponent__Invoke__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__, v15, v16, v17);
    sub_B5D5C4(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, v18, v19, v20);
    byte_42E5F65 = 1;
  }
  v21 = (MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *)sub_B5D694(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_23;
  v21->fields.that = that;
  p_fields = &v21->fields;
  sub_B5D560(&v21->fields);
  if ( !v21->fields.that )
    goto LABEL_23;
  mFrameOutStartFunc = v21->fields.that->fields.mFrameOutStartFunc;
  if ( !mFrameOutStartFunc )
    goto LABEL_23;
  this->fields.mNextComp = (struct MissionNotifyComponent_o *)System_Func_object___Invoke(
                                                                (System_Func_object__o *)mFrameOutStartFunc,
                                                                (const MethodInfo_278E15C *)Method_System_Func_MissionNotifyComponent__Invoke__);
  v25 = &this->fields;
  sub_B5D560(v25);
  if ( !p_fields->that )
    goto LABEL_23;
  if ( !p_fields->that->fields.mIsDragDone )
  {
    mNextComp = (UnityEngine_Object_o *)v25->mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v27 = v21->fields.that;
      v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v21,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v27 )
        goto LABEL_23;
      MissionNotifyComponent__FrameOut(v27, v28, 0, 0LL);
    }
  }
  mFrameOutStartFunc = p_fields->that;
  if ( !p_fields->that
    || (mFrameOutStartFunc = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFrameOutStartFunc, 0LL)) == 0LL
    || (mFrameOutStartFunc = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                               (UnityEngine_GameObject_o *)mFrameOutStartFunc,
                               (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_23:
    sub_B5D69C(mFrameOutStartFunc, v23);
  }
  v29 = *((_DWORD *)mFrameOutStartFunc + 6);
  v30 = mFrameOutStartFunc;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= v29 )
      {
        v32 = sub_B5D6C8(mFrameOutStartFunc);
        sub_B5D668(v32, 0LL);
      }
      mFrameOutStartFunc = (void *)*((_QWORD *)v30 + (int)v31 + 4);
      if ( !mFrameOutStartFunc )
        break;
      UIWidget__set_depth((UIWidget_o *)mFrameOutStartFunc, *((_DWORD *)mFrameOutStartFunc + 42) - 50, 0LL);
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
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
  __int64 v3; // x3

  if ( (byte_42E5F67 & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_B5D5C4(
                                                       &Method_ActionExtensions_Call_MissionNotifyComponent___,
                                                       (_DWORD)that,
                                                       (_DWORD)method,
                                                       v3);
    byte_42E5F67 = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (BlankEarth_QAARotateEarthResponse_o *)that,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 *p_fields; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v20; // s0
  float v21; // s1
  float v22; // s8
  float v23; // s9
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x20
  float v26; // s0
  float v27; // s8
  float v28; // s0
  UnityEngine_Object_o *v29; // x19
  MissionNotifyComponent_StateFrameOut_Fields *v30; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  MissionNotifyComponent_o *v32; // x19
  System_Action_o *v33; // x20
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4

  if ( (byte_42E5F66 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__, v9, v10, v11);
    sub_B5D5C4(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, v12, v13, v14);
    byte_42E5F66 = 1;
  }
  v15 = (MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *)sub_B5D694(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_26;
  v15->fields.that = that;
  p_fields = (__int64 *)&v15->fields;
  sub_B5D560(&v15->fields);
  v16 = (__int64)v15->fields.that;
  if ( !v16 )
    goto LABEL_26;
  if ( *(_BYTE *)(v16 + 185) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    *(UnityEngine_Vector3_o *)&v20 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*p_fields )
      goto LABEL_26;
    *(float32x2_t *)(*p_fields + 188) = vmul_f32(*(float32x2_t *)(*p_fields + 188), vdup_n_s32(0x3F6147AEu));
    v16 = *p_fields;
    if ( !*p_fields )
      goto LABEL_26;
    v22 = v20 + *(float *)(v16 + 188);
    v23 = v21 + *(float *)(v16 + 192);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    v34.fields.x = v22;
    v34.fields.y = v23;
    GameObjectExtensions__SetLocalPosition_32430388(v24, v34, 0LL);
    if ( !*p_fields )
      goto LABEL_26;
    v25 = *(_QWORD *)(*p_fields + 24);
    if ( !v25 )
      goto LABEL_26;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 424LL))(
            v25,
            *(_QWORD *)(*(_QWORD *)v25 + 432LL));
    if ( !*p_fields )
      goto LABEL_26;
    v16 = *(_QWORD *)(*p_fields + 24);
    if ( !v16 )
      goto LABEL_26;
    v27 = v26;
    v28 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 424LL))(v16, *(_QWORD *)(*(_QWORD *)v16 + 432LL));
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v25 + 440LL))(
            v25,
            *(_QWORD *)(*(_QWORD *)v25 + 448LL),
            v27 + (float)((float)(0.0 - v28) * 0.15));
    if ( !*p_fields )
      goto LABEL_26;
    v16 = *(_QWORD *)(*p_fields + 24);
    if ( !v16 )
      goto LABEL_26;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 424LL))(v16, *(_QWORD *)(*(_QWORD *)v16 + 432LL)) <= 0.01 )
    {
      v16 = *p_fields;
      if ( *p_fields )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)v16, 0, 0LL);
        return;
      }
LABEL_26:
      sub_B5D69C(v16, v17);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    v30 = &this->fields;
    v29 = (UnityEngine_Object_o *)mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      v16 = (__int64)v30->mNextComp;
      if ( !v30->mNextComp )
        goto LABEL_26;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)v16, 0LL) != 1 )
      {
        v30->mNextComp = 0LL;
        sub_B5D560(v30);
        v32 = v15->fields.that;
        v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v33,
          (Il2CppObject *)v15,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v32 )
          goto LABEL_26;
        MissionNotifyComponent__FrameOut(v32, v33, 0, 0LL);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  SimpleAnimation_o *baseSp; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mClearEffectSimpleAnim; // x20
  UnityEngine_Object_o *mClearEffectAnim; // x20

  if ( (byte_42E5F68 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    byte_42E5F68 = 1;
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
    sub_B5D69C(baseSp, v7);
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
    sub_B5D69C(v8, v9);
  x = mTouchPosDif.fields.x;
  that->fields.mInertiaSpd.fields.y = v10;
  that->fields.mInertiaSpd.fields.x = x;
}


void __fastcall MissionNotifyComponent_StateShowing__update(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  float32x2_t *v5; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Camera_o *mCamera; // x21
  int v10; // w8
  unsigned __int64 v11; // d0
  float v12; // s1
  float v13; // s8
  float v14; // s9
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v5 = (float32x2_t *)this;
  if ( (byte_42E5F69 & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    byte_42E5F69 = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress || (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v5[6].n64_f32[0]) < 2.0 )
      return;
LABEL_14:
    MissionNotifyComponent__SetState(that, 3, 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v5[3].n64_u64[0] = v5[2].n64_u64[0];
  mCamera = that->fields.mCamera;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  v5[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_30482268(mCamera, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) > 1 )
    v5[2].n64_u64[0] = v5[3].n64_u64[0];
  v10 = v5[6].n64_i32[1];
  if ( v10 < 1 )
  {
    LODWORD(v11) = v5[4].n64_u32[0];
    v12 = v5[4].n64_f32[1];
  }
  else
  {
    v11 = vsub_f32(v5[2], v5[3]).n64_u64[0];
    v12 = *((float *)&v11 + 1);
    v5[5].n64_u64[0] = v5[4].n64_u64[0];
    v5[4].n64_u64[0] = v11;
  }
  v13 = x + *(float *)&v11;
  v14 = y + v12;
  v5[6].n64_u32[1] = v10 + 1;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v16.fields.x = v13;
  v16.fields.y = v14;
  GameObjectExtensions__SetLocalPosition_32430388(v15, v16, 0LL);
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
    sub_B5D69C(baseSp, v4);
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
    sub_B5D69C(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}