void __fastcall MissionNotifyComponent___ctor(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionNotifyComponent__Awake(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v15; // s0
  float v16; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v18; // x4
  __int64 v19; // x1
  __int64 v20; // x2
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_T__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *v32; // x22
  CStateManager_T__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *v40; // x21
  const MethodInfo *v41; // x2
  __int64 v42; // x1
  int v43; // w8
  void *v44; // x20
  unsigned int v45; // w21
  struct UnityEngine_Camera_o *main; // x0
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_49FF766 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_MissionNotifyComponent___ctor__, method);
    sub_1B640C8(&Method_CStateManager_MissionNotifyComponent__add__, v5);
    sub_1B640C8(&CStateManager_MissionNotifyComponent__TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&MissionNotifyComponent_StateFrameIn_TypeInfo, v9);
    sub_1B640C8(&MissionNotifyComponent_StateFrameOut_TypeInfo, v10);
    sub_1B640C8(&MissionNotifyComponent_StateNone_TypeInfo, v11);
    sub_1B640C8(&MissionNotifyComponent_StateShowing_TypeInfo, v12);
    byte_49FF766 = 1;
  }
  gameObject = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    gameObject = ManagerConfig_TypeInfo;
  }
  baseSp = this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_20;
  v15 = (float)baseSp->fields.mHeight * 0.5;
  v16 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v16 - v15) + 1.0;
  this->fields.mFrameOutPosY = v16 + v15;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v2, v3);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v18);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v22 = (CStateManager_T__o *)sub_1B64314(CStateManager_MissionNotifyComponent__TypeInfo, v19, v20);
    CStateManager_object____ctor(
      v22,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30612BC *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v22;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v22, v23, v24);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v28 = (Il2CppObject *)sub_1B64314(MissionNotifyComponent_StateNone_TypeInfo, v26, v27);
    System_Object___ctor(v28, 0LL);
    if ( !mFSM )
      goto LABEL_20;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v28,
      (const MethodInfo_3061364 *)Method_CStateManager_MissionNotifyComponent__add__);
    v29 = (CStateManager_T__o *)*p_mFSM;
    v32 = (Il2CppObject *)sub_1B64314(MissionNotifyComponent_StateFrameIn_TypeInfo, v30, v31);
    System_Object___ctor(v32, 0LL);
    if ( !v29 )
      goto LABEL_20;
    CStateManager_object___add(
      v29,
      1,
      (IState_T__o *)v32,
      (const MethodInfo_3061364 *)Method_CStateManager_MissionNotifyComponent__add__);
    v33 = (CStateManager_T__o *)*p_mFSM;
    v36 = (Il2CppObject *)sub_1B64314(MissionNotifyComponent_StateShowing_TypeInfo, v34, v35);
    System_Object___ctor(v36, 0LL);
    if ( !v33 )
      goto LABEL_20;
    CStateManager_object___add(
      v33,
      2,
      (IState_T__o *)v36,
      (const MethodInfo_3061364 *)Method_CStateManager_MissionNotifyComponent__add__);
    v37 = (CStateManager_T__o *)*p_mFSM;
    v40 = (Il2CppObject *)sub_1B64314(MissionNotifyComponent_StateFrameOut_TypeInfo, v38, v39);
    System_Object___ctor(v40, 0LL);
    if ( !v37 )
      goto LABEL_20;
    CStateManager_object___add(
      v37,
      3,
      (IState_T__o *)v40,
      (const MethodInfo_3061364 *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v41);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_20;
  v43 = *((_DWORD *)gameObject + 6);
  v44 = gameObject;
  if ( v43 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= v43 )
        sub_1B6432C(gameObject, v42);
      gameObject = (void *)*((_QWORD *)v44 + (int)v45 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) + 150, 0LL);
      v43 = *((_DWORD *)v44 + 6);
      if ( (int)++v45 >= v43 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1B64324(gameObject);
  }
LABEL_19:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mCamera, (int32_t)main, v47, v48);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  __int64 v26; // x1
  __int64 v27; // x2
  float v28; // s0
  float v29; // s2
  float mFrameOutPosY; // s1
  float v31; // s3
  float v32; // s4
  float v33; // s5
  float v34; // s2
  float v35; // s9
  System_Action_o *v36; // x21
  Il2CppObject *Component_object; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  EasingObject_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF76B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, is_framein);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_1B640C8(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__, v10);
    sub_1B640C8(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__, v11);
    sub_1B640C8(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, v12);
    byte_49FF76B = 1;
  }
  v13 = sub_1B64314(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, is_framein, end_act);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_27;
  *(_QWORD *)(v13 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 56) = end_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 56), (int32_t)end_act, v17, v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v13 + 16) = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)gameObject, v20, v21);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v28 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v31 = v28;
  else
    v31 = x;
  if ( is_framein )
    v32 = v29;
  else
    v32 = z;
  if ( is_framein )
    v28 = x;
  if ( is_framein )
    v33 = z;
  else
    v33 = v29;
  if ( is_framein )
    v34 = this->fields.mFrameOutPosY;
  else
    v34 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v13 + 84) = !is_framein;
  *(float *)(v13 + 72) = v31;
  *(float *)(v13 + 76) = v34;
  *(float *)(v13 + 80) = v32;
  *(float *)(v13 + 24) = v28;
  *(float *)(v13 + 28) = mFrameOutPosY;
  *(float *)(v13 + 32) = v33;
  *(_DWORD *)(v13 + 48) = is_framein;
  if ( is_framein )
    v35 = 0.5;
  else
    v35 = 0.25;
  v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v36, 0LL);
    return;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v13 + 16),
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 64), (int32_t)Component_object, v38, v39);
  v40 = *(EasingObject_o **)(v13 + 64);
  v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v40 )
LABEL_27:
    sub_1B64324(v14);
  EasingObject__Play(v40, v35 * timeScale, v43, v36, 0.0, 17, 0LL);
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
  if ( (byte_49FF769 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_1B640C8(&Method_CStateManager_MissionNotifyComponent__getState__, method);
    byte_49FF769 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
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
  Il2CppObject *Component_object; // x20
  const MethodInfo *v7; // x2

  if ( (byte_49FF76C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EasingObject___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF76C = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v4) != 1 )
    {
LABEL_14:
      ActionExtensions__Call(this->fields.mDragStartAct, 0LL);
      return;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_13;
      if ( Component_object )
      {
        EasingObject__SetPause((EasingObject_o *)Component_object, 1, 0LL);
LABEL_13:
        MissionNotifyComponent__SetState(this, 2, v7);
        goto LABEL_14;
      }
    }
    sub_1B64324(gameObject);
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
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49FF76A & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_MissionNotifyComponent__setState__, *(_QWORD *)&state);
    byte_49FF76A = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_MissionNotifyComponent__setState__);
}


void __fastcall MissionNotifyComponent__SetupAndPlay(
        MissionNotifyComponent_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *drag_start_act,
        System_Func_MissionNotifyComponent__o *frame_out_start_func,
        System_Action_MissionNotifyComponent__o *frame_out_end_act,
        const MethodInfo *method)
{
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
  __int64 v32; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x24
  int32_t v35; // w29
  DataMasterBase_o *v36; // x26
  bool IsMasterMission; // w24
  DataManager_o *v38; // x1
  _BOOL4 v39; // w21
  int v40; // w20
  UILabel_o *noLabel; // x26
  struct UnityEngine_GameObject_o *v42; // x10
  UnityEngine_GameObject_o *v43; // x24
  UILabel_o *progressLabel; // x26
  System_String_o *v45; // x27
  System_String_o *v46; // x0
  _BOOL4 v47; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  struct UISprite_o *clearSp; // x25
  System_Action_MissionNotifyComponent__o *v52; // x29
  int32_t mDepth; // w21
  Il2CppObject *clearEffectPrefab; // x26
  System_Func_MissionNotifyComponent__o *v55; // x20
  UnityEngine_GameObject_o *v56; // x26
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  int32_t v63; // w2
  int32_t v64; // w3
  UnityEngine_Object_o *v65; // x28
  bool v66; // w0
  int m_CancellationTokenSource; // w8
  DataManager_o *v68; // x25
  unsigned int v69; // w22
  int v70; // w21
  UnityEngine_GameObject_o *rewardMessage; // x25
  int v72; // w21
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v74; // x25
  System_String_o *v75; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v77; // x9
  int32_t v78; // w1
  UnityEngine_Object_o *v79; // x25
  struct UILabel_o *v80; // x8
  System_String_o *v81; // x0
  __int64 *v82; // x8
  System_String_o *v83; // x25
  int32_t monitor_high; // w26
  UISprite_o *typeSp; // x27
  int32_t v86; // w2
  int32_t v87; // w3
  Il2CppObject *v88; // x24
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w2
  int32_t v92; // w3
  const MethodInfo *v93; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v95; // x0
  int32_t v96; // [xsp+8h] [xbp-78h]
  int v97; // [xsp+10h] [xbp-70h]
  int monitor; // [xsp+14h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FF768 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, disp_info);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_CompleteMissionMaster___, v14);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v16);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v17);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v18);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v19);
    sub_1B640C8(&long___TypeInfo, v20);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&StringLiteral_21242/*"master_mission_weekly"*/, v25);
    sub_1B640C8(&StringLiteral_21241/*"master_mission_special"*/, v26);
    sub_1B640C8(&StringLiteral_21237/*"master_mission_daily"*/, v27);
    sub_1B640C8(&StringLiteral_21239/*"master_mission_extra"*/, v28);
    sub_1B640C8(&StringLiteral_21240/*"master_mission_panel"*/, v29);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v30);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v31);
    sub_1B640C8(&StringLiteral_21238/*"master_mission_event"*/, v32);
    byte_49FF768 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_object )
    goto LABEL_121;
  v35 = (_DWORD)disp_info + 16;
  v36 = (DataMasterBase_o *)Instance;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_121;
    monitor = (int)entity[1].monitor;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = (DataManager_o *)sub_1B64170(long___TypeInfo, 1LL);
    if ( !entity )
      goto LABEL_121;
    v38 = Instance;
    if ( !Instance )
      goto LABEL_121;
    if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
      goto LABEL_122;
    *(_QWORD *)&Instance->fields._DispLog = SHIDWORD(entity[1].monitor);
    if ( !v36 )
      goto LABEL_121;
    if ( DataMasterBase__isEntityExistsFromId(v36, (System_Int64_array *)Instance, 0LL) )
    {
      v39 = 1;
      v40 = 1;
    }
    else
    {
      v40 = 0;
      v39 = monitor != 7;
    }
  }
  else
  {
    v40 = 0;
    IsMasterMission = 0;
    monitor = 0;
    v39 = 1;
  }
  noLabel = this->fields.noLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_121;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0LL);
  v42 = IsMasterMission ? 0LL : this->fields.noRoot;
  Instance = (DataManager_o *)((((unsigned __int8)v40 | IsMasterMission) & 1) != 0 ? this->fields.noRoot : v42);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v39 & ((v40 | IsMasterMission) ^ 1), 0LL);
  Instance = (DataManager_o *)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_121;
  v43 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v43 )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive(v43, ((unsigned __int8)Instance & 1) == 0, 0LL);
  Instance = (DataManager_o *)this->fields.noRoot;
  if ( !Instance )
    goto LABEL_121;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.missionNameLabel;
    if ( !Instance )
      goto LABEL_121;
  }
  else
  {
    Instance = (DataManager_o *)this->fields.masterMissionNameLabel;
    if ( !Instance )
      goto LABEL_121;
  }
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    disp_info->fields.message,
    (int32_t)Instance[2].fields.context,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, disp_info->fields.condition > 0, 0LL);
  Instance = (DataManager_o *)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_121;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.progressBarNowSlider;
    if ( !Instance )
      goto LABEL_121;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressFrom / (float)disp_info->fields.condition,
      0LL);
    Instance = (DataManager_o *)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_121;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressTo / (float)disp_info->fields.condition,
      0LL);
    progressLabel = this->fields.progressLabel;
    v45 = System_Int32__ToString_62180668((int)disp_info + 44, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
    v46 = System_Int32__ToString_62180668((int)disp_info + 48, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
    Instance = (DataManager_o *)System_String__Concat_61386656(v45, (System_String_o *)StringLiteral_1124/*"/"*/, v46, 0LL);
    if ( !progressLabel )
      goto LABEL_121;
    UILabel__set_text(progressLabel, (System_String_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_121;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_121;
    v47 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL) >= 1.0;
  }
  else
  {
    v47 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v47, banner_group, 0LL);
  Instance = (DataManager_o *)this->fields.clearSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v47, 0LL);
  Instance = (DataManager_o *)this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v97 = v40;
  if ( !v47 )
    goto LABEL_88;
  clearSp = this->fields.clearSp;
  v96 = v35;
  if ( !clearSp )
    goto LABEL_121;
  v52 = frame_out_end_act;
  mDepth = clearSp->fields.mDepth;
  clearEffectPrefab = (Il2CppObject *)this->fields.clearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v55 = frame_out_start_func;
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                clearEffectPrefab,
                                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_121;
  v56 = (UnityEngine_GameObject_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Instance,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = (struct SimpleAnimation_o *)Component_object;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mClearEffectSimpleAnim,
    (int32_t)Component_object,
    v59,
    v60);
  v61 = UnityEngine_GameObject__GetComponent_object_(
          v56,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.mClearEffectAnim = (struct UnityEngine_Animation_o *)v61;
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mClearEffectAnim, (int32_t)v61, v63, v64);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_121;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0LL);
    frame_out_start_func = v55;
  }
  else
  {
    v65 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v66 = UnityEngine_Object__op_Inequality(v65, 0LL, 0LL);
    frame_out_start_func = v55;
    if ( v66 )
    {
      Instance = (DataManager_o *)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_121;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v56, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                v56,
                                (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_121;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v68 = Instance;
  if ( m_CancellationTokenSource >= 1 )
  {
    v69 = 0;
    v70 = mDepth + 1;
    while ( v69 < m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)*((_QWORD *)&v68->fields._DispLog + (int)v69);
      if ( !Instance )
        goto LABEL_121;
      UIWidget__set_depth((UIWidget_o *)Instance, v70 + LODWORD(Instance[1].fields.m_CancellationTokenSource), 0LL);
      m_CancellationTokenSource = (int)v68->fields.m_CancellationTokenSource;
      if ( (int)++v69 >= m_CancellationTokenSource )
        goto LABEL_70;
    }
LABEL_122:
    sub_1B6432C(Instance, v38);
  }
LABEL_70:
  if ( !entity )
  {
    frame_out_end_act = v52;
    v35 = v96;
LABEL_88:
    v72 = monitor;
LABEL_89:
    v78 = 462;
    goto LABEL_90;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = (DataManager_o *)EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  if ( !rewardMessage )
    goto LABEL_121;
  frame_out_end_act = v52;
  UnityEngine_GameObject__SetActive(rewardMessage, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)entity;
  v35 = v96;
  if ( !entity )
    goto LABEL_121;
  v72 = monitor;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_89;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, HIDWORD(entity[5].klass), 0LL);
  if ( !GiftListById )
    goto LABEL_89;
  v74 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_89;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  v75 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Instance,
          (int32_t)entity[1].klass,
          HIDWORD(entity[1].monitor),
          1,
          0LL);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v75, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_121;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v75, 0LL);
    Instance = (DataManager_o *)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (DataManager_o *)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_33377632(v95, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_119;
  }
  if ( !v74->max_length )
    goto LABEL_122;
  v77 = (int32_t *)v74->m_Items[0];
  if ( !v77 || !itemIcon )
LABEL_121:
    sub_1B64324(Instance);
  ItemIconComponent__SetGift_37829292(this->fields.itemIcon, v77[5], v77[6], v77[7], 0, 0LL);
LABEL_119:
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_121;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0LL);
  v78 = 360;
LABEL_90:
  Instance = (DataManager_o *)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  UIWidget__set_width((UIWidget_o *)Instance, v78, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_121;
  v79 = (UnityEngine_Object_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v80 = this->fields.noLabel;
  if ( !v80 )
    goto LABEL_121;
  v81 = System_String__Concat_61375396((System_String_o *)Instance, v80->fields.mText, 0LL);
  UnityEngine_Object__set_name(v79, v81, 0LL);
  switch ( v72 )
  {
    case 1:
    case 7:
      v82 = &StringLiteral_21238/*"master_mission_event"*/;
      goto LABEL_101;
    case 2:
      v82 = &StringLiteral_21242/*"master_mission_weekly"*/;
      goto LABEL_101;
    case 3:
      v82 = &StringLiteral_21237/*"master_mission_daily"*/;
      goto LABEL_101;
    case 4:
      v82 = &StringLiteral_21239/*"master_mission_extra"*/;
      goto LABEL_101;
    case 5:
      v82 = &StringLiteral_21241/*"master_mission_special"*/;
      goto LABEL_101;
    case 6:
      v82 = &StringLiteral_21240/*"master_mission_panel"*/;
LABEL_101:
      v83 = (System_String_o *)*v82;
      break;
    default:
      v83 = 0LL;
      break;
  }
  if ( !entity || ((v97 ^ 1) & 1) != 0 )
  {
    Instance = (DataManager_o *)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_121;
    UISprite__set_spriteName((UISprite_o *)Instance, v83, 0LL);
  }
  else
  {
    monitor_high = HIDWORD(entity[1].monitor);
    typeSp = this->fields.typeSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37544692(monitor_high, typeSp, v83, 0LL);
  }
  Instance = (DataManager_o *)this->fields.typeSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v47 && v72 == 3 )
  {
    v88 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (DataManager_o *)System_Int32__ToString(v35, 0LL);
    if ( !v88 )
      goto LABEL_121;
    AdManager__TrackEvent((AdManager_o *)v88, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mDragStartAct, (int32_t)drag_start_act, v86, v87);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mFrameOutStartFunc,
    (int32_t)frame_out_start_func,
    v89,
    v90);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFrameOutEndAct, (int32_t)frame_out_end_act, v91, v92);
  MissionNotifyComponent__SetState(this, 1, v93);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49FF767 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_MissionNotifyComponent__update__, method);
    byte_49FF767 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30613CC *)Method_CStateManager_MissionNotifyComponent__update__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  MissionNotifyComponent_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x4

  if ( (byte_49FF76D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_MissionNotifyComponent_StateFrameIn_begin__, v4);
    sub_1B640C8(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__, v5);
    sub_1B640C8(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, v6);
    byte_49FF76D = 1;
  }
  v7 = sub_1B64314(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)that, v9, v10);
  v11 = Method_MissionNotifyComponent_StateFrameIn_begin__;
  if ( (*((_BYTE *)Method_MissionNotifyComponent_StateFrameIn_begin__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B640E0(Method_MissionNotifyComponent_StateFrameIn_begin__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
  OverwriteAssetSoundName__PlayCommonSe(v12, 20, 0LL);
  v13 = *(MissionNotifyComponent_o **)(v7 + 16);
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v13 )
LABEL_8:
    sub_1B64324(v8);
  MissionNotifyComponent__FrameInOut(v13, 1, v16, 0, v17);
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
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B64324(0LL);
  MissionNotifyComponent__SetState(that, 2, v2);
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
  __int64 v9; // x21
  void *gameObject; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x19
  __int64 v14; // x8
  struct MissionNotifyComponent_o *v15; // x0
  MissionNotifyComponent_StateFrameOut_Fields *p_fields; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *mNextComp; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  MissionNotifyComponent_o *v22; // x20
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x4
  __int64 v25; // x1
  int v26; // w8
  void *v27; // x19
  unsigned int v28; // w20

  if ( (byte_49FF770 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1B640C8(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, v8);
    byte_49FF770 = 1;
  }
  v9 = sub_1B64314(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_22;
  *(_QWORD *)(v9 + 16) = that;
  v13 = v9 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)that, v11, v12);
  if ( !*(_QWORD *)(v9 + 16) )
    goto LABEL_22;
  v14 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 216LL);
  if ( !v14 )
    goto LABEL_22;
  v15 = (struct MissionNotifyComponent_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(v14 + 24))(
                                             *(_QWORD *)(v14 + 64),
                                             *(_QWORD *)(v14 + 40));
  this->fields.mNextComp = v15;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)v15, v17, v18);
  if ( !*(_QWORD *)v13 )
    goto LABEL_22;
  if ( !*(_BYTE *)(*(_QWORD *)v13 + 193LL) )
  {
    mNextComp = (UnityEngine_Object_o *)p_fields->mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v22 = *(MissionNotifyComponent_o **)(v9 + 16);
      v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v9,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v22 )
        goto LABEL_22;
      MissionNotifyComponent__FrameInOut(v22, 0, v23, 0, v24);
    }
  }
  gameObject = *(void **)v13;
  if ( !*(_QWORD *)v13
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_22:
    sub_1B64324(gameObject);
  }
  v26 = *((_DWORD *)gameObject + 6);
  v27 = gameObject;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
        sub_1B6432C(gameObject, v25);
      gameObject = (void *)*((_QWORD *)v27 + (int)v28 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) - 50, 0LL);
      v26 = *((_DWORD *)v27 + 6);
      if ( (int)++v28 >= v26 )
        return;
    }
    goto LABEL_22;
  }
}


void __fastcall MissionNotifyComponent_StateFrameOut__end(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  if ( (byte_49FF772 & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_1B640C8(
                                                       &Method_ActionExtensions_Call_MissionNotifyComponent___,
                                                       that);
    byte_49FF772 = 1;
  }
  if ( !that )
    sub_1B64324(this);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (Il2CppObject *)that,
    (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_MissionNotifyComponent___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 *v12; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v14; // s0
  float v15; // s1
  float v16; // s8
  float v17; // s9
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x20
  float v20; // s0
  float v21; // s8
  float v22; // s0
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *v24; // x19
  ServantStatusBattleListViewItem_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  MissionNotifyComponent_o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x20
  const MethodInfo *v34; // x4
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4

  if ( (byte_49FF771 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__, v6);
    sub_1B640C8(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, v7);
    byte_49FF771 = 1;
  }
  v8 = sub_1B64314(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_25;
  *(_QWORD *)(v8 + 16) = that;
  v12 = (__int64 *)(v8 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)that, v10, v11);
  klass = *(_QWORD *)(v8 + 16);
  if ( !klass )
    goto LABEL_25;
  if ( *(_BYTE *)(klass + 193) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    *(UnityEngine_Vector3_o *)&v14 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*v12 )
      goto LABEL_25;
    *(float32x2_t *)(*v12 + 196) = vmul_f32(*(float32x2_t *)(*v12 + 196), vdup_n_s32(0x3F6147AEu));
    klass = *v12;
    if ( !*v12 )
      goto LABEL_25;
    v16 = v14 + *(float *)(klass + 196);
    v17 = v15 + *(float *)(klass + 200);
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    v35.fields.x = v16;
    v35.fields.y = v17;
    GameObjectExtensions__SetLocalPosition_33375356(v18, v35, 0LL);
    if ( !*v12 )
      goto LABEL_25;
    v19 = *(_QWORD *)(*v12 + 32);
    if ( !v19 )
      goto LABEL_25;
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 424LL))(
              v19,
              *(_QWORD *)(*(_QWORD *)v19 + 432LL));
    if ( !*v12 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v12 + 32);
    if ( !klass )
      goto LABEL_25;
    v21 = v20;
    v22 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
            klass,
            *(_QWORD *)(*(_QWORD *)klass + 432LL));
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v19 + 440LL))(
              v19,
              *(_QWORD *)(*(_QWORD *)v19 + 448LL),
              v21 + (float)((float)(0.0 - v22) * 0.15));
    if ( !*v12 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v12 + 32);
    if ( !klass )
      goto LABEL_25;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
           klass,
           *(_QWORD *)(*(_QWORD *)klass + 432LL)) <= 0.01 )
    {
      klass = *v12;
      if ( *v12 )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)klass, 0, v23);
        return;
      }
LABEL_25:
      sub_1B64324(klass);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
    v24 = (UnityEngine_Object_o *)mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      klass = (__int64)p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_25;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)klass, v27) != 1 )
      {
        p_fields->klass = 0LL;
        sub_1B6406C(p_fields, 0, v28, v29);
        v30 = *(MissionNotifyComponent_o **)(v8 + 16);
        v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
        System_Action___ctor(
          v33,
          (Il2CppObject *)v8,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v30 )
          goto LABEL_25;
        MissionNotifyComponent__FrameInOut(v30, 0, v33, 0, v34);
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
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B64324(0LL);
  MissionNotifyComponent__SetState(that, 0, v2);
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
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B64324(0LL);
  MissionNotifyComponent__SetState(that, 0, v2);
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
  UnityEngine_Object_o *mClearEffectSimpleAnim; // x20
  UnityEngine_Object_o *mClearEffectAnim; // x20

  if ( (byte_49FF76E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    byte_49FF76E = 1;
  }
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_16;
  baseSp = (SimpleAnimation_o *)that->fields.baseSp;
  if ( !baseSp )
    goto LABEL_16;
  ((void (__fastcall *)(SimpleAnimation_o *, const char *, float))baseSp->klass[1]._1.gc_desc)(
    baseSp,
    baseSp->klass[1]._1.name,
    1.0);
  mClearEffectSimpleAnim = (UnityEngine_Object_o *)that->fields.mClearEffectSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    baseSp = that->fields.mClearEffectSimpleAnim;
    if ( baseSp )
    {
      SimpleAnimation__Play(baseSp, 0LL);
      return;
    }
LABEL_16:
    sub_1B64324(baseSp);
  }
  mClearEffectAnim = (UnityEngine_Object_o *)that->fields.mClearEffectAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mClearEffectAnim, 0LL, 0LL) )
  {
    baseSp = (SimpleAnimation_o *)that->fields.mClearEffectAnim;
    if ( !baseSp )
      goto LABEL_16;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)baseSp, 0LL);
  }
}


void __fastcall MissionNotifyComponent_StateShowing__end(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float v5; // s4
  float v6; // s5
  float v7; // s4
  bool v8; // nf
  float v9; // s1
  float v10; // s2
  float v11; // s0

  x = this->fields.mTouchPosDif.fields.x;
  y = this->fields.mTouchPosDif.fields.y;
  v5 = (float)(x * x) + (float)(y * y);
  v6 = (float)(this->fields.mTouchPosDifOld.fields.x * this->fields.mTouchPosDifOld.fields.x)
     + (float)(this->fields.mTouchPosDifOld.fields.y * this->fields.mTouchPosDifOld.fields.y);
  if ( v5 < v6 )
    y = this->fields.mTouchPosDifOld.fields.y;
  if ( v5 < v6 )
    x = this->fields.mTouchPosDifOld.fields.x;
  if ( !that )
    sub_1B64324(this);
  v7 = fminf(y, 15.0);
  v8 = y < -15.0;
  v9 = fminf(x, 15.0);
  if ( v8 )
    v10 = -15.0;
  else
    v10 = v7;
  if ( x < -15.0 )
    v11 = -15.0;
  else
    v11 = v9;
  that->fields.mInertiaSpd.fields.x = v11;
  that->fields.mInertiaSpd.fields.y = v10;
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
  const MethodInfo *v12; // x2
  float v13; // s8
  float v14; // s9
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float32x2_t *)this;
  if ( (byte_49FF76F & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_1B640C8(&CTouch_TypeInfo, that);
    byte_49FF76F = 1;
  }
  if ( !that )
    sub_1B64324(this);
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress || (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4[6].n64_f32[0]) < 2.0 )
      return;
LABEL_13:
    MissionNotifyComponent__SetState(that, 3, v12);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v4[3].n64_u64[0] = v4[2].n64_u64[0];
  mCamera = that->fields.mCamera;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  v4[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_46287896(mCamera, 0LL);
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
  v13 = x + *(float *)&v10;
  v14 = y + v11;
  v4[6].n64_u32[1] = v9 + 1;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v16.fields.x = v13;
  v16.fields.y = v14;
  GameObjectExtensions__SetLocalPosition_33375356(v15, v16, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 2 )
    goto LABEL_13;
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
  struct MissionNotifyComponent_o *_4__this; // x8

  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, this->fields.pos_to, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (baseSp = _4__this->fields.baseSp) == 0LL )
    sub_1B64324(baseSp);
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
  float mNow; // s4
  MissionNotifyComponent___c__DisplayClass64_0_o *v4; // x19
  unsigned __int64 v5; // d0 OVERLAPPED
  float v6; // s2
  int v7; // s1
  struct MissionNotifyComponent_o *_4__this; // x8
  float v9; // [xsp+0h] [xbp-20h]

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_5;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = vadd_f32(
         *(float32x2_t *)&this->fields.pos_from.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&this->fields.pos_to.fields.x, *(float32x2_t *)&this->fields.pos_from.fields.x),
           mNow)).n64_u64[0];
  v6 = this->fields.pos_from.fields.z
     + (float)(mNow * (float)(this->fields.pos_to.fields.z - this->fields.pos_from.fields.z));
  v7 = HIDWORD(v5);
  v9 = mNow;
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&v5, 0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (this = (MissionNotifyComponent___c__DisplayClass64_0_o *)_4__this->fields.baseSp) == 0LL )
LABEL_5:
    sub_1B64324(this);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}