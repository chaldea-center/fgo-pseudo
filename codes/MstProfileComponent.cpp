void MstProfileComponent___cctor(const MethodInfo *method)
{
  struct MstProfileComponent_StaticFields *static_fields; // x8

  if ( (byte_4CC24A6 & 1) == 0 )
  {
    sub_1C713B0(&MstProfileComponent_TypeInfo);
    byte_4CC24A6 = 1;
  }
  static_fields = MstProfileComponent_TypeInfo->static_fields;
  static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  *(_QWORD *)&static_fields->SPELL_WINDOW_ALPHA_TIME = 0x436100003E19999ALL;
  static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct ImageItem_Id_array *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC24A5 & 1) == 0 )
  {
    sub_1C713B0(&ImageItem_Id___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91);
    byte_4CC24A5 = 1;
  }
  v3 = (System_Array_o *)sub_1C71458(ImageItem_Id___TypeInfo, 8);
  v4.fields.value = Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91;
  v5 = (struct ImageItem_Id_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v3, v4, 0);
  this->fields.dispItemInfoList = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dispItemInfoList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct MstProfileComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v7; // x0
  QuestRewardItemAction_c *klass; // x8

  if ( (byte_4CC24A2 & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_OnClickBack__);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC24A2 = 1;
  }
  v3 = Method_MstProfileComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v7->fields.friendPointBoostItemAction->klass;
  if ( !klass || (v7 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
    sub_1C71608(v7, v5);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v7, 0);
}


void MstProfileComponent__OnClickNameChangeBtn(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CC2491 & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_OnClickNameChangeBtn__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2491 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    v4 = Method_MstProfileComponent_OnClickNameChangeBtn__;
    if ( (*((_BYTE *)Method_MstProfileComponent_OnClickNameChangeBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_OnClickNameChangeBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    MstProfileComponent__showChangeDlg(this, v6);
  }
}


void MstProfileComponent__OnClickSubmit(
        MstProfileComponent_o *this,
        System_String_o *changeName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  char *Fsm; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_4CC2494 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_4360/*"ChangeUserName"*/);
    sub_1C713B0(&StringLiteral_3480/*"CLICK_SUBMIT"*/);
    byte_4CC2494 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    Fsm = (char *)this->fields.myRoomFsm;
    if ( !Fsm
      || (Fsm = (char *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0)) == 0
      || (Fsm = (char *)*((_QWORD *)Fsm + 11)) == 0
      || (Fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                          (System_String_o *)StringLiteral_4360/*"ChangeUserName"*/,
                          0)) == 0
      || (*((_QWORD *)Fsm + 7) = changeName,
          sub_1C71354((GrandQuestFolderBoardItem_o *)(Fsm + 56), (int32_t)changeName, v14, v15, v16, v17, v18, v19),
          (Fsm = (char *)this->fields.myRoomFsm) == 0) )
    {
      sub_1C71608(Fsm, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, (System_String_o *)StringLiteral_3480/*"CLICK_SUBMIT"*/, 0);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.changeName, (int32_t)changeName, v7, v8, v9, v10, v11, v12);
    MstProfileComponent__checkInput(this, v20);
  }
}


void MstProfileComponent__OpenExpInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MstExpInfoComponent_o *expInfoWindow; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UserGameEntity_o *usrGameEnt; // x8

  if ( (byte_4CC2496 & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_OpenExpInfo__);
    byte_4CC2496 = 1;
  }
  v3 = Method_MstProfileComponent_OpenExpInfo__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OpenExpInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_OpenExpInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0 )
    sub_1C71608(expInfoWindow, v6);
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, v7);
}


void MstProfileComponent__SetProfileData(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x20
  MstProfileComponent_c *v7; // x0
  float MASTER_PROFILE_INFO_X_POS; // s8
  int32_t width; // w21
  float v10; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4CC2487 & 1) == 0 )
  {
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&MstProfileComponent_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_8955/*"MasterProfileInfo"*/);
    byte_4CC2487 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsTablet(0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_18;
      v6 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_8955/*"MasterProfileInfo"*/, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
      {
        v7 = MstProfileComponent_TypeInfo;
        if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
          v7 = MstProfileComponent_TypeInfo;
        }
        MASTER_PROFILE_INFO_X_POS = v7->static_fields->MASTER_PROFILE_INFO_X_POS;
        width = UnityEngine_Screen__get_width(0);
        transform = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0);
        if ( v6 )
        {
          v10 = (float)((float)(MASTER_PROFILE_INFO_X_POS * (float)width) / (float)(int)transform) / 1.7778;
          gameObject = UnityEngine_Component__get_gameObject(v6, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, v10, 0);
          goto LABEL_17;
        }
LABEL_18:
        sub_1C71608(transform, v5);
      }
    }
  }
LABEL_17:
  MstProfileComponent__setMstImg(this, v3);
  MstProfileComponent__setUserName(this, v12);
  MstProfileComponent__setUserGender(this, v13);
  MstProfileComponent__setUserBirthDay(this, v14);
  MstProfileComponent__setUserLv(this, v15);
  MstProfileComponent__setUserExp(this, v16);
  MstProfileComponent__setHaveItemInfo(this, v17);
  MstProfileComponent__setCmdSpellImg(this, v18);
  MstProfileComponent__showLoginCountInfo(this, v19);
}


void MstProfileComponent__ShowMstProfile(
        MstProfileComponent_o *this,
        MstProfileComponent_ClickDelegate_o *closeCallback,
        System_Action_o *endLoadCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_o *v24; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  Il2CppObject *titleInfoPref; // x23
  Il2CppObject *v29; // x23
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  struct TitleInfoControl_o **p_titleInfo; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  TitleInfoControl_o *titleInfo; // x24
  TitleInfoControl_o *v40; // x24
  System_Action_o *v41; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  MyRoomBackGroundManager_o *bgManager; // x19
  System_Action_o *v51; // x20
  int64_t recoverTime; // [xsp+8h] [xbp-58h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CC2480 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C713B0(&Method_MstProfileComponent_OnClickBack__);
    sub_1C713B0(&MyRoomControl_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&Method_MstProfileComponent___c__DisplayClass63_0__ShowMstProfile_b__0__);
    sub_1C713B0(&MstProfileComponent___c__DisplayClass63_0_TypeInfo);
    byte_4CC2480 = 1;
  }
  count = 0;
  recoverTime = 0;
  v7 = sub_1C715FC(MstProfileComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = endLoadCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)endLoadCallback, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  MyRoomControl__SetBackGroundData(0);
  v24 = MyRoomControl__getChangeMyRoomBgm(0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v24, 0);
  MstProfileComponent__createCmdSpellWindow(this, v25);
  MstProfileComponent__messageSetup(this, v26);
  MstProfileComponent__gradeSetup(this, v27);
  titleInfoPref = (Il2CppObject *)this->fields.titleInfoPref;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__Instantiate_object_(
          titleInfoPref,
          (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v29, layer, 0);
  if ( !v29 )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v29,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  p_titleInfo = &this->fields.titleInfo;
  this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.titleInfo,
    (int32_t)Component_object,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  titleInfo = this->fields.titleInfo;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !titleInfo )
    goto LABEL_28;
  TitleInfoControl__SetParent(titleInfo, (UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setDepth((TitleInfoControl_o *)gameObject, 40, 0);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)gameObject, 41, 0);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 48, 0);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__changeTitleInfo_40112904((TitleInfoControl_o *)gameObject, 1, 48, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 0, 0);
  v40 = this->fields.titleInfo;
  v41 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, (intptr_t)Method_MstProfileComponent_OnClickBack__, 0);
  if ( !v40 )
    goto LABEL_28;
  TitleInfoControl__SetBackBtnAct(v40, v41, 0);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)closeCallback,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  gameObject = (UnityEngine_GameObject_o *)*p_usrGameEnt;
  if ( !*p_usrGameEnt )
    goto LABEL_28;
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)gameObject, &count, &recoverTime, 0) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v49);
  }
  MstProfileComponent__SetProfileData(this, v48);
  bgManager = this->fields.bgManager;
  v51 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v7,
    Method_MstProfileComponent___c__DisplayClass63_0__ShowMstProfile_b__0__,
    0);
  if ( !bgManager
    || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v51, 0),
        (gameObject = (UnityEngine_GameObject_o *)*p_titleInfo) == 0) )
  {
LABEL_28:
    sub_1C71608(gameObject, v9);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 1, 0);
}


void MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC247F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC247F = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_1C71608(gameObject, v5);
    }
    v6.fields.y = 0.0;
    v6.fields.z = 0.0;
    v6.fields.x = 1200.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v6, 0);
  }
}


void MstProfileComponent__Update(MstProfileComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.usrGameEnt )
    MstProfileComponent__setCommandSpellInfo(this, method);
}


// local variable allocation has failed, the output may be wrong!
void MstProfileComponent___onClickMessageChange_b__105_0(
        MstProfileComponent_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  MstProfileComponent_o *v6; // x20
  struct UILabel_o *userNameTxt; // x8
  System_String_o *mText; // x21
  NetworkManager_ResultCallbackFunc_o *v9; // x22
  MstProfileComponent_o *v10; // x0
  const MethodInfo *v11; // x4

  v6 = this;
  if ( (byte_4CC24A7 & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_callbackChangeMessage__);
    this = (MstProfileComponent_o *)sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CC24A7 = 1;
  }
  if ( result )
  {
    userNameTxt = v6->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v6,
        Method_MstProfileComponent_callbackChangeMessage__,
        0);
      MstProfileComponent__requestChangeName(v10, mText, changeName, v9, v11);
      return;
    }
LABEL_8:
    sub_1C71608(this, result);
  }
  this = (MstProfileComponent_o *)v6->fields.userMessageInputDlg;
  if ( !this )
    goto LABEL_8;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)this, 0);
}


void MstProfileComponent__callbackChangeMessage(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MstProfileComponent_o *v4; // x19
  char v5; // w20
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_4CC24A1 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    byte_4CC24A1 = 1;
  }
  if ( !result
    || (this = (MstProfileComponent_o *)System_String__Equals_64067044(
                                          result,
                                          (System_String_o *)StringLiteral_22486/*"ok"*/,
                                          0),
        !v4->fields.userMessageInputDlg) )
  {
    sub_1C71608(this, result);
  }
  v5 = (char)this;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)v4->fields.userMessageInputDlg, 0);
  if ( (v5 & 1) != 0 )
    MstProfileComponent__showMstProfile(v4, v6);
}


void MstProfileComponent__callbackChangeName(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MstProfileComponent_o *v4; // x19
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4CC24A4 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    byte_4CC24A4 = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_64067044(result, (System_String_o *)StringLiteral_22486/*"ok"*/, 0) )
  {
    MstProfileComponent__closeChangeDlg(v4, (const MethodInfo *)result);
    MstProfileComponent__showMstProfile(v4, v5);
    return;
  }
  this = (MstProfileComponent_o *)v4->fields.changeNameWindow;
  if ( !this
    || (ChangeUserNameWindow__resetInputVal((ChangeUserNameWindow_o *)this, (const MethodInfo *)result),
        (this = (MstProfileComponent_o *)v4->fields.changeNameWindow) == 0) )
  {
LABEL_9:
    sub_1C71608(this, result);
  }
  ChangeUserNameWindow__Close_33466108((ChangeUserNameWindow_o *)this, 0, v6);
}


void MstProfileComponent__callbackGenderChange(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)SelfUserGame, v5, v6, v7, v8, v9, v10);
  MstProfileComponent__setGenderInfo(this, v11);
}


void MstProfileComponent__callbackSetBirthDay(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)SelfUserGame, v5, v6, v7, v8, v9, v10);
  MstProfileComponent__setBirthDayInfo(this, v11);
}


void MstProfileComponent__checkInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *SelfUserGame; // x0
  System_String_o *changeName; // x20
  System_String_o *addEventHandlers; // x21
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  MstProfileComponent_o *v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4CC2495 & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_callbackChangeName__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&StringLiteral_3344/*"CHECK_OK"*/);
    byte_4CC2495 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    SelfUserGame = this->fields.myRoomFsm;
    if ( SelfUserGame )
    {
      PlayMakerFSM__SendEvent(SelfUserGame, (System_String_o *)StringLiteral_3344/*"CHECK_OK"*/, 0);
      return;
    }
LABEL_10:
    sub_1C71608(SelfUserGame, v4);
  }
  changeName = this->fields.changeName;
  SelfUserGame = (PlayMakerFSM_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_10;
  addEventHandlers = (System_String_o *)SelfUserGame[3].fields.addEventHandlers;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_MstProfileComponent_callbackChangeName__, 0);
  MstProfileComponent__requestChangeName(v9, changeName, addEventHandlers, v8, v10);
}


void MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_1C71608(0, method);
  ChangeUserNameWindow__Close_33466108(changeNameWindow, 0, v2);
}


void MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_1C71608(0, method);
  InputUserBirthDayWindow__Close_33470652(inputBirthDayWindow, 0, v2);
}


void MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  Il2CppObject *cmdSpellWinPrefab; // x21
  Il2CppObject *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4CC2485 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2485 = 1;
  }
  p_cmdSpellWinComp = &this->fields.cmdSpellWinComp;
  cmdSpellWinComp = (UnityEngine_Object_o *)this->fields.cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cmdSpellWinComp, 0, 0) )
  {
    cmdSpellWinPrefab = (Il2CppObject *)this->fields.cmdSpellWinPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__Instantiate_object_(
           cmdSpellWinPrefab,
           (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0),
          GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v6, layer, 0),
          !v6)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v6,
                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          *p_cmdSpellWinComp = (struct CommandSpellWindowComponent_o *)Component_object,
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.cmdSpellWinComp,
            (int32_t)Component_object,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (gameObject = (UnityEngine_GameObject_o *)*p_cmdSpellWinComp) == 0) )
    {
      sub_1C71608(gameObject, v8);
    }
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SafeSetParent_36395768(v17, this->fields.cmdSpellWinInfo, 0);
  }
}


void MstProfileComponent__dispSetBirth(
        MstProfileComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_DateTime_o v5; // x0
  int32_t Month; // w22
  System_DateTime_o v7; // x0
  int32_t Day; // w21
  UnityEngine_Transform_o *IsOpen; // x0
  __int64 v10; // x1
  char v11; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  MstProfileComponent_c *v14; // x0
  UnityEngine_GameObject_o *v15; // x24
  float v16; // s0
  MstProfileComponent_c *v17; // x0
  UILabel_o *birthDayLb; // x23
  const MethodInfo *v19; // x2
  System_String_o *v20; // x24
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x22
  Il2CppObject *PaddingBirthday; // x0

  if ( (byte_4CC248D & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&MstProfileComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_2923/*"BIRTHDAY"*/);
    byte_4CC248D = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v5.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v5, 0);
  v7.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v7, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (UnityEngine_Transform_o *)CondType__IsOpen(144, 0, 0, 0, 0, 0);
  if ( !this->fields.birthDayInfo )
    goto LABEL_30;
  v11 = (char)IsOpen;
  IsOpen = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0);
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Transform__GetChild(IsOpen, 0, 0);
  if ( !IsOpen )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  if ( (v11 & 1) != 0 )
  {
    v14 = MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v14 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v14->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, RESET_BIRTH_DAY_ADJUST_PX, 0);
  IsOpen = (UnityEngine_Transform_o *)this->fields.genderTypeLb;
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Transform__get_parent(IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_30;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  v16 = 0.0;
  if ( (v11 & 1) != 0 )
  {
    v17 = MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v17 = MstProfileComponent_TypeInfo;
    }
    v16 = (float)v17->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v15, v16, 0);
  IsOpen = (UnityEngine_Transform_o *)this->fields.resetBirthBtn;
  if ( !IsOpen )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v11 & 1, 0);
  birthDayLb = this->fields.birthDayLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsOpen = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BIRTHDAY"*/, 0);
  if ( !this->fields.inputBirthDayWindow )
    goto LABEL_30;
  v20 = (System_String_o *)IsOpen;
  IsOpen = (UnityEngine_Transform_o *)InputUserBirthDayWindow__getPaddingBirthday(
                                        (InputUserBirthDayWindow_o *)IsOpen,
                                        Month,
                                        v19);
  if ( !this->fields.inputBirthDayWindow
    || (v22 = (Il2CppObject *)IsOpen,
        PaddingBirthday = (Il2CppObject *)InputUserBirthDayWindow__getPaddingBirthday(
                                            (InputUserBirthDayWindow_o *)IsOpen,
                                            Day,
                                            v21),
        IsOpen = (UnityEngine_Transform_o *)System_String__Format_64073032(v20, v22, PaddingBirthday, 0),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, (System_String_o *)IsOpen, 0),
        (IsOpen = (UnityEngine_Transform_o *)this->fields.birthDayInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 1, 0), !callback) )
  {
LABEL_30:
    sub_1C71608(IsOpen, v10);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void MstProfileComponent__endOpenChangeDlg(
        MstProfileComponent_o *this,
        bool res,
        System_String_o *changeName,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  const MethodInfo *v11; // x1
  PlayMakerFSM_o *v12; // x0

  if ( (byte_4CC2493 & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_endOpenChangeDlg__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3438/*"CLICK_CANCLE"*/);
    byte_4CC2493 = 1;
  }
  v7 = Method_MstProfileComponent_endOpenChangeDlg__;
  if ( (*((_BYTE *)Method_MstProfileComponent_endOpenChangeDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_endOpenChangeDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0);
    MstProfileComponent__OnClickSubmit(this, changeName, v9);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0);
    myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
    {
      v12 = this->fields.myRoomFsm;
      if ( !v12 )
        sub_1C71608(0, v11);
      PlayMakerFSM__SendEvent(v12, (System_String_o *)StringLiteral_3438/*"CLICK_CANCLE"*/, 0);
    }
    else
    {
      MstProfileComponent__closeChangeDlg(this, v11);
    }
  }
}


void MstProfileComponent__endOpenSetBirthDay(
        MstProfileComponent_o *this,
        bool res,
        System_Int32_array *paramList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x3
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4CC2499 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_1C713B0(&Method_MstProfileComponent_endOpenSetBirthDay__);
    byte_4CC2499 = 1;
  }
  if ( res )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(144, 0, 0, 0, 0, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
      if ( !Master_object )
        goto LABEL_21;
      Master_object = DataMasterBase_object__object__long___GetSingleEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (const MethodInfo_340B488 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
      usrGameEnt = this->fields.usrGameEnt;
      if ( !usrGameEnt || !Master_object )
        goto LABEL_21;
      Master_object[1].klass = (Il2CppClass *)usrGameEnt->fields.birthDay;
    }
    v10 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_endOpenSetBirthDay__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C71394(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 8, 0, 0);
    if ( paramList )
    {
      if ( LODWORD(paramList->max_length) < 2 )
        sub_1C71610(Master_object);
      MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[0], paramList->m_Items[1], v12);
      return;
    }
LABEL_21:
    sub_1C71608(Master_object, v8);
  }
  v13 = Method_MstProfileComponent_endOpenSetBirthDay__;
  if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_endOpenSetBirthDay__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0, 0);
  MstProfileComponent__closeSetBirthDayDlg(this, v15);
}


void MstProfileComponent__genderChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t v9; // w1

  if ( (byte_4CC249D & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_genderChange__);
    byte_4CC249D = 1;
  }
  v3 = Method_MstProfileComponent_genderChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_genderChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_genderChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1C71608(v5, v6);
  if ( usrGameEnt->fields.genderType == 1 )
    v9 = 2;
  else
    v9 = 1;
  MstProfileComponent__requestGenderChange(this, v9, v7);
}


void MstProfileComponent__getCurrentUserData(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
}


void MstProfileComponent__gradeSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  int32_t Kind; // w0
  int32_t v4; // w20
  System_String_o *MasterProfileBgImage; // x0
  __int64 v6; // x1
  struct UISprite_o *profileBg; // x22
  System_String_o *v8; // x21
  UIAtlas_o *mAtlas; // x23
  struct UISprite_o *v10; // x8

  if ( (byte_4CC2483 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Grade_TypeInfo);
    byte_4CC2483 = 1;
  }
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0);
  if ( Kind )
  {
    v4 = Kind;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterProfileBgImage = Grade__GetMasterProfileBgImage(v4, 0);
    profileBg = this->fields.profileBg;
    if ( !profileBg )
      goto LABEL_14;
    v8 = MasterProfileBgImage;
    mAtlas = profileBg->fields.mAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetGradeBase(profileBg, v8, mAtlas, 0);
    MasterProfileBgImage = Grade__GetMasterProfileBgLineImage(v4, 0);
    v10 = this->fields.profileBg;
    if ( !v10 )
LABEL_14:
      sub_1C71608(MasterProfileBgImage, v6);
    AtlasManager__SetGradeBase(this->fields.nameLine, MasterProfileBgImage, v10->fields.mAtlas, 0);
  }
}


void MstProfileComponent__hideMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *masterFigure; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *userMessageInputDlg; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  int32_t childCount; // w0
  int v15; // w21
  UnityEngine_Object_o *v16; // x20

  if ( (byte_4CC2484 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2484 = 1;
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterFigure, 0, 0) )
  {
    userMessageInputDlg = (UnityEngine_Component_o *)this->fields.masterFigure;
    if ( !userMessageInputDlg )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
    this->fields.masterFigure = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.masterFigure, 0, v7, v8, v9, v10, v11, v12);
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg
    || (SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)userMessageInputDlg, 0),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.expInfoWindow) == 0)
    || (MstExpInfoComponent__Close((MstExpInfoComponent_o *)userMessageInputDlg, v4),
        MstProfileComponent__releaseCmdSpellWindow(this, v13),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0)
    || (userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0)) == 0 )
  {
LABEL_24:
    sub_1C71608(userMessageInputDlg, v4);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)userMessageInputDlg, 0);
  if ( childCount >= 1 )
  {
    v15 = childCount + 1;
    do
    {
      userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !userMessageInputDlg )
        goto LABEL_24;
      userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0);
      if ( !userMessageInputDlg )
        goto LABEL_24;
      userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)userMessageInputDlg,
                                                         v15 - 2,
                                                         0);
      if ( !userMessageInputDlg )
        goto LABEL_24;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v16, 0);
    }
    while ( --v15 > 1 );
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListScrollView;
  if ( !userMessageInputDlg )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppClass *, float, float))userMessageInputDlg->klass[1]._1.declaringType)(
    userMessageInputDlg,
    0,
    userMessageInputDlg->klass[1]._1.parent,
    0.0,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void MstProfileComponent__messageSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  float v6; // s0 OVERLAPPED
  float v7; // s3
  float v8; // s1
  float v9; // s2

  if ( (byte_4CC2482 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8668/*"MESSAGE_CHANGE_NO_INPUT"*/);
    byte_4CC2482 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_15;
  v5 = (System_String_o *)*((_QWORD *)SelfUserGame + 31);
  if ( System_String__IsNullOrEmpty(v5, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8668/*"MESSAGE_CHANGE_NO_INPUT"*/, 0);
    if ( this->fields.messageLabel )
    {
      v5 = (System_String_o *)SelfUserGame;
      UILabel__set_effectStyle(this->fields.messageLabel, 0, 0);
      SelfUserGame = this->fields.messageLabel;
      if ( SelfUserGame )
      {
        v6 = 0.6;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1C71608(SelfUserGame, v4);
  }
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  UILabel__set_effectStyle((UILabel_o *)SelfUserGame, 3, 0);
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  v6 = 1.0;
LABEL_13:
  v7 = 1.0;
  v8 = v6;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)&v6, 0);
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)SelfUserGame, v5, 0);
}


void MstProfileComponent__onClickCmdSpell(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4CC249B & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_onClickCmdSpell__);
    byte_4CC249B = 1;
  }
  v3 = Method_MstProfileComponent_onClickCmdSpell__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickCmdSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_onClickCmdSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_1C71608(0, v5);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, const MethodInfo *))cmdSpellWinComp->klass->vtable._10_Open.methodPtr)(
    cmdSpellWinComp,
    0,
    cmdSpellWinComp->klass->vtable._10_Open.method);
}


void MstProfileComponent__onClickMessageChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  System_String_o *message; // x20
  UserMessageInputDlg_o *userMessageInputDlg; // x21
  SupportDeckNameInputMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3

  if ( (byte_4CC24A0 & 1) == 0 )
  {
    sub_1C713B0(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_MstProfileComponent__onClickMessageChange_b__105_0__);
    sub_1C713B0(&Method_MstProfileComponent_onClickMessageChange__);
    byte_4CC24A0 = 1;
  }
  v3 = Method_MstProfileComponent_onClickMessageChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickMessageChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_onClickMessageChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1C715FC(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__105_0__,
          0),
        !userMessageInputDlg) )
  {
    sub_1C71608(SelfUserGame, v6);
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v9, v10);
}


void MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4CC249C & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_onSpellWindowClose__);
    byte_4CC249C = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0) )
  {
    v4 = Method_MstProfileComponent_onSpellWindowClose__;
    if ( (*((_BYTE *)Method_MstProfileComponent_onSpellWindowClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_onSpellWindowClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
    if ( cmdSpellWinComp )
    {
      ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, const MethodInfo *))cmdSpellWinComp->klass->vtable._12_Close.methodPtr)(
        cmdSpellWinComp,
        0,
        cmdSpellWinComp->klass->vtable._12_Close.method);
      return;
    }
LABEL_10:
    sub_1C71608(cmdSpellWinComp, method);
  }
}


void MstProfileComponent__releaseCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_cmdSpellWinComp; // x19
  UnityEngine_Object_o *v4; // x20
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC2486 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2486 = 1;
  }
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  p_cmdSpellWinComp = (UnityEngine_Component_o **)&this->fields.cmdSpellWinComp;
  v4 = (UnityEngine_Object_o *)cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_cmdSpellWinComp )
      sub_1C71608(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71724796(gameObject, 0);
    *p_cmdSpellWinComp = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_cmdSpellWinComp, 0, v8, v9, v10, v11, v12, v13);
  }
}


void MstProfileComponent__requestChangeName(
        MstProfileComponent_o *this,
        System_String_o *changedName,
        System_String_o *message,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  UserNameChangeRequest_o *SelfUserGame; // x0
  __int64 v9; // x1
  int32_t paramInteger_high; // w22

  if ( (byte_4CC24A3 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC24A3 = 1;
  }
  SelfUserGame = (UserNameChangeRequest_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_8;
  paramInteger_high = HIDWORD(SelfUserGame[1].fields.paramInteger);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SelfUserGame = (UserNameChangeRequest_o *)NetworkManager__getRequest_object_(
                                              callback,
                                              (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !SelfUserGame )
LABEL_8:
    sub_1C71608(SelfUserGame, v9);
  UserNameChangeRequest__beginRequest(SelfUserGame, changedName, paramInteger_high, message, 0);
}


// local variable allocation has failed, the output may be wrong!
void MstProfileComponent__requestGenderChange(
        MstProfileComponent_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x21
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x20
  NetworkManager_ResultCallbackFunc_o *v7; // x22
  Il2CppObject *Request_object; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4CC249E & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_callbackGenderChange__);
    sub_1C713B0(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    this = (MstProfileComponent_o *)sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CC249E = 1;
  }
  klass = v4[25].klass;
  if ( !klass )
    goto LABEL_9;
  namespaze = (System_String_o *)klass->_1.namespaze;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, v4, Method_MstProfileComponent_callbackGenderChange__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  this = (MstProfileComponent_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this || !Request_object )
LABEL_9:
    sub_1C71608(this, *(_QWORD *)&genderType);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
    namespaze,
    genderType,
    (System_String_o *)this->fields.friendPointLb,
    0);
}


// local variable allocation has failed, the output may be wrong!
void MstProfileComponent__requestSetBirthDay(
        MstProfileComponent_o *this,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x21
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x22
  int32_t castClass_high; // w23
  NetworkManager_ResultCallbackFunc_o *v10; // x24

  v6 = (Il2CppObject *)this;
  if ( (byte_4CC249A & 1) == 0 )
  {
    sub_1C713B0(&Method_MstProfileComponent_callbackSetBirthDay__);
    sub_1C713B0(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    this = (MstProfileComponent_o *)sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CC249A = 1;
  }
  klass = v6[25].klass;
  if ( !klass )
    goto LABEL_8;
  namespaze = (System_String_o *)klass->_1.namespaze;
  castClass_high = HIDWORD(klass->_1.castClass);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, v6, Method_MstProfileComponent_callbackSetBirthDay__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (MstProfileComponent_o *)NetworkManager__getRequest_object_(
                                    v10,
                                    (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !this )
LABEL_8:
    sub_1C71608(this, *(_QWORD *)&month);
  SetUserBirthDayRequest__beginRequest((SetUserBirthDayRequest_o *)this, namespaze, castClass_high, month, day, 0);
}


void MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_1C71608(0, method);
  ChangeUserNameWindow__resetInputVal(changeNameWindow, method);
}


void MstProfileComponent__setBirthDayInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  MstProfileComponent__setUserBirthDay(this, v10);
}


void MstProfileComponent__setCmdSpellImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MstProfileComponent_o *v3; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *cmdSpellWinComp; // x20
  CommandSpellWindowComponent_o *v6; // x20
  struct CommandSpellWindowComponent_o *v7; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v3 = this;
  if ( (byte_4CC2489 & 1) == 0 )
  {
    sub_1C713B0(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_1C713B0(&Method_MstProfileComponent_onSpellWindowClose__);
    sub_1C713B0(&MstProfileComponent_TypeInfo);
    this = (MstProfileComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2489 = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_14;
  MstProfileComponent__setCmdSpellInfo(v3, usrGameEnt->fields.genderType, v2);
  cmdSpellWinComp = (UnityEngine_Object_o *)v3->fields.cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cmdSpellWinComp, 0, 0) )
  {
    v6 = v3->fields.cmdSpellWinComp;
    this = (MstProfileComponent_o *)MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
    if ( v6 )
    {
      CommandSpellWindowComponent__InitializeCommandSpellDepth(
        v6,
        0,
        MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH,
        0);
      this = (MstProfileComponent_o *)v3->fields.cmdSpellWinComp;
      if ( this )
      {
        BattleWindowComponent__setInitData(
          (BattleWindowComponent_o *)this,
          2,
          MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0);
        v7 = v3->fields.cmdSpellWinComp;
        if ( v7 )
        {
          v7->fields.mode = 0;
          v8 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1C715FC(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v8,
            (Il2CppObject *)v3,
            (intptr_t)Method_MstProfileComponent_onSpellWindowClose__,
            0);
          v7->fields.callback_close = v8;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v7->fields.callback_close,
            (int32_t)v8,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
          return;
        }
      }
    }
LABEL_14:
    sub_1C71608(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void MstProfileComponent__setCmdSpellInfo(MstProfileComponent_o *this, int32_t genderType, const MethodInfo *method)
{
  UnityEngine_Component_o *cmdSpellIconMale; // x0
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4

  if ( genderType == 2 )
  {
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    cmdSpellIconMale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0);
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconMale, 0, 0);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    if ( !cmdSpellIconMale
      || (CommandSpellIconComponent__SetData(
            (CommandSpellIconComponent_o *)cmdSpellIconMale,
            this->fields.usrGameEnt,
            0),
          (cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale) == 0)
      || (v6.fields.x = 130.0,
          v6.fields.y = 130.0,
          CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)cmdSpellIconMale, v6, 0),
          (cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale) == 0) )
    {
LABEL_17:
      sub_1C71608(cmdSpellIconMale, *(_QWORD *)&genderType);
    }
  }
  else
  {
    if ( genderType != 1 )
      return;
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    cmdSpellIconMale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0);
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconMale, 0, 0);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)cmdSpellIconMale, this->fields.usrGameEnt, 0);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    v5.fields.x = 130.0;
    v5.fields.y = 130.0;
    CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)cmdSpellIconMale, v5, 0);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
  }
  cmdSpellIconMale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0);
  if ( !cmdSpellIconMale )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconMale, 1, 0);
}


void MstProfileComponent__setCmdSpellRecoverTime(
        MstProfileComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v7; // x24
  int v8; // w25
  int v9; // w26
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int v15; // [xsp+Ch] [xbp-54h] BYREF
  int v16; // [xsp+18h] [xbp-48h] BYREF
  int v17; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CC2488 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3674/*"COMMAND_SPELL_RECOVER_TIME"*/);
    sub_1C713B0(&StringLiteral_3677/*"COMMNAD_SPELL_RECV_TXT"*/);
    byte_4CC2488 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMNAD_SPELL_RECV_TXT"*/, 0);
    if ( recoverTitleLb )
    {
      v7 = recoverTime / 0xE10uLL;
      v8 = (int)(recoverTime / 0x3CuLL) % 60;
      v9 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0);
      recoverTimeLb = this->fields.recoverTimeLb;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3674/*"COMMAND_SPELL_RECOVER_TIME"*/, 0);
      v17 = v7;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
      v16 = v8;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      v15 = v9;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      cmdSpellRecTimeInfo = System_String__Format_64073100(v11, v12, v13, v14, 0);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0);
        return;
      }
    }
LABEL_11:
    sub_1C71608(cmdSpellRecTimeInfo, recoverTime);
  }
  cmdSpellRecTimeInfo = (System_String_o *)this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellRecTimeInfo, 0, 0);
}


void MstProfileComponent__setCommandSpellInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  int64_t recoverTime; // [xsp+0h] [xbp-20h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  count = 0;
  recoverTime = 0;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1C71608(0, method);
  UserGameEntity__getCmdSpellInfo(usrGameEnt, &count, &recoverTime, 0);
  MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v4);
  if ( this->fields.cmdCnt != count )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellImg(this, v5);
  }
}


void MstProfileComponent__setGenderInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w21
  TerminalPramsManager_c *v14; // x0
  struct UserGameEntity_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_4CC249F & 1) == 0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC249F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1C71608(v10, v11);
  genderType = usrGameEnt->fields.genderType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC24DD )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC24DD = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_PlayerGenderType_k__BackingField = genderType;
  TerminalPramsManager__PlayerGenderType_SaveData(0);
  v15 = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  MstProfileComponent__setUserGender(this, v22);
  MstProfileComponent__setMstImg(this, v23);
}


void MstProfileComponent__setHaveItemInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 itemListGrid; // x0
  struct ImageItem_Id_array *dispItemInfoList; // x8
  unsigned __int64 v5; // x25
  unsigned __int64 max_length_low; // x9
  int32_t v7; // w21
  UnityEngine_GameObject_o *mstItemInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_Transform_o *v11; // x23
  const MethodInfo *v12; // x3
  UnityEngine_Transform_o *v13; // x21

  if ( (byte_4CC2490 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
    byte_4CC2490 = 1;
  }
  itemListGrid = (__int64)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_17;
  itemListGrid = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0);
  if ( !itemListGrid )
    goto LABEL_17;
  itemListGrid = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0);
  if ( (int)itemListGrid > 0 )
    return;
  dispItemInfoList = this->fields.dispItemInfoList;
  if ( !dispItemInfoList )
    goto LABEL_17;
  v5 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(dispItemInfoList->max_length);
    if ( (__int64)v5 >= (int)max_length_low )
      break;
    if ( v5 >= max_length_low )
      sub_1C71610(itemListGrid);
    itemListGrid = (__int64)this->fields.itemListGrid;
    if ( itemListGrid )
    {
      v7 = dispItemInfoList->m_Items[v5];
      mstItemInfo = this->fields.mstItemInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0);
      itemListGrid = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, mstItemInfo, transform, 0, 0);
      if ( itemListGrid )
      {
        v10 = (UnityEngine_GameObject_o *)itemListGrid;
        itemListGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemListGrid, 0);
        v11 = (UnityEngine_Transform_o *)itemListGrid;
        if ( !byte_4CC0D0E )
        {
          itemListGrid = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D0E = 1;
        }
        if ( v11 )
        {
          UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          itemListGrid = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v10,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
          if ( itemListGrid )
          {
            MstHaveItemInfoComponent__setItemInfo(
              (MstHaveItemInfoComponent_o *)itemListGrid,
              v7,
              this->fields.usrGameEnt,
              v12);
            dispItemInfoList = this->fields.dispItemInfoList;
            ++v5;
            if ( dispItemInfoList )
              continue;
          }
        }
      }
    }
    goto LABEL_17;
  }
  itemListGrid = (__int64)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_17;
  itemListGrid = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0);
  v13 = (UnityEngine_Transform_o *)itemListGrid;
  if ( !byte_4CC0D0E )
  {
    itemListGrid = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v13
    || (UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (itemListGrid = (__int64)this->fields.itemListGrid) == 0) )
  {
LABEL_17:
    sub_1C71608(itemListGrid, method);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)itemListGrid + 440LL))(
    itemListGrid,
    *(_QWORD *)(*(_QWORD *)itemListGrid + 448LL));
}


void MstProfileComponent__setMstImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UserGameEntity_o *usrGameEnt; // x8
  struct UserGameEntity_o *v13; // x8
  long double v14; // q0
  Il2CppClass *klass; // x8
  int64_t namespaze; // x21
  __int64 v17; // x0
  __int64 v18; // x0
  void *monitor; // x21
  Il2CppClass *v20; // x22
  int32_t v21; // w21
  UnityEngine_Object_o *masterFigure; // x23
  struct UIMasterFigureTextureOld_o *Prefab_40945812; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UIMasterFigureTextureOld_o *v30; // x19
  int32_t v31; // w22
  System_Action_o *v32; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4CC248A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_MstProfileComponent___c__DisplayClass76_0__setMstImg_b__0__);
    sub_1C713B0(&MstProfileComponent___c__DisplayClass76_0_TypeInfo);
    byte_4CC248A = 1;
  }
  v3 = sub_1C715FC(MstProfileComponent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_29;
  *(_DWORD *)(v3 + 24) = usrGameEnt->fields.genderType;
  if ( usrGameEnt->fields.activeDeckId < 1 )
    goto LABEL_22;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v13 = this->fields.usrGameEnt;
  if ( !v13 )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v13->fields.activeDeckId,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  klass = Instance[3].klass;
  if ( !klass )
    goto LABEL_29;
  namespaze = (int64_t)klass->_1.namespaze;
  if ( namespaze < 1 )
  {
LABEL_22:
    v21 = 0;
  }
  else
  {
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C47444(v14);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C47444(v14);
    Instance = **(Il2CppObject ***)(v18 + 184);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 namespaze,
                 (const MethodInfo_340B3DC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_29;
    v20 = Instance[2].klass;
    monitor = Instance[2].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v20;
    *(_QWORD *)&v33.fields.fakeValue = monitor;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v33, 0);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0, 0) )
  {
    Prefab_40945812 = MasterFigureManagerOld__CreatePrefab_40945812(
                        this->fields.mstImgBase,
                        2,
                        *(_DWORD *)(v3 + 24),
                        v21,
                        10,
                        0,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0,
                        0);
    this->fields.masterFigure = Prefab_40945812;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.masterFigure,
      (int32_t)Prefab_40945812,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    return;
  }
  v30 = this->fields.masterFigure;
  v31 = *(_DWORD *)(v3 + 24);
  v32 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v3, Method_MstProfileComponent___c__DisplayClass76_0__setMstImg_b__0__, 0);
  if ( !v30 )
LABEL_29:
    sub_1C71608(Instance, v5);
  UIMasterFigureTextureOld__SetCharacter(v30, 2, v31, v21, v32, 0, 0, 0);
}


void MstProfileComponent__setUserBirthDay(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int64_t birthDay; // x20
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_4CC248C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_MstProfileComponent_closeSetBirthDayDlg__);
    this = (MstProfileComponent_o *)sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC248C = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_11;
  birthDay = usrGameEnt->fields.birthDay;
  if ( birthDay <= 0 )
  {
    this = (MstProfileComponent_o *)v2->fields.birthDayInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_11:
    sub_1C71608(this, method);
  }
  this = (MstProfileComponent_o *)v2->fields.setBirthBtn;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v2->fields.dtBirthDay = NetworkManager__getDateTime_41643704(birthDay, 0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)v2, Method_MstProfileComponent_closeSetBirthDayDlg__, 0);
  MstProfileComponent__dispSetBirth(v2, v5, v6);
}


void MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  System_String_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  int32_t LevelMax; // w20
  BalanceConfig_c *v6; // x8
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  int v9; // [xsp+8h] [xbp-38h] BYREF
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-30h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CC248F & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_8629/*"MAX_USER_LEVEL_COND_{0}"*/);
    sub_1C713B0(&StringLiteral_396/*"#,0"*/);
    byte_4CC248F = 1;
  }
  lateExp = 0;
  exp = 0;
  barExp = 0.0;
  usrGameEnt = (System_String_o *)this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_20;
  if ( UserGameEntity__getExpInfo((UserGameEntity_o *)usrGameEnt, &exp, &lateExp, &barExp, 0) )
  {
    userExpLb = this->fields.userExpLb;
    usrGameEnt = System_Int64__ToString_65545396((int64_t)&lateExp, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
    if ( userExpLb )
    {
      UILabel__set_text(userExpLb, usrGameEnt, 0);
      usrGameEnt = (System_String_o *)this->fields.expBar;
      if ( usrGameEnt )
      {
        UIProgressBar__set_value((UIProgressBar_o *)usrGameEnt, barExp, 0);
        return;
      }
    }
LABEL_20:
    sub_1C71608(usrGameEnt, method);
  }
  usrGameEnt = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !usrGameEnt )
    goto LABEL_20;
  usrGameEnt = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)usrGameEnt,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !usrGameEnt )
    goto LABEL_20;
  LevelMax = UserExpMaster__GetLevelMax((UserExpMaster_o *)usrGameEnt, 0);
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( LevelMax != v6->static_fields->UserLevelMax )
  {
    usrGameEnt = (System_String_o *)this->fields.condNextLevelMessageLb;
    if ( !usrGameEnt )
      goto LABEL_20;
    usrGameEnt = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)usrGameEnt, 0);
    if ( !usrGameEnt )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrGameEnt, 1, 0);
    v9 = LevelMax + 1;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
    v8 = System_String__Format((System_String_o *)StringLiteral_8629/*"MAX_USER_LEVEL_COND_{0}"*/, v7, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    usrGameEnt = LocalizationManager__Get(v8, 0);
    if ( !this->fields.condNextLevelMessageLb )
      goto LABEL_20;
    UILabel__set_text(this->fields.condNextLevelMessageLb, usrGameEnt, 0);
  }
}


void MstProfileComponent__setUserGender(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w20
  UILabel_o *genderTypeLb; // x19

  v2 = this;
  if ( (byte_4CC248B & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1C713B0(&Gender_TypeInfo);
    byte_4CC248B = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_8;
  genderType = usrGameEnt->fields.genderType;
  v2->fields.currentGenderType = genderType;
  genderTypeLb = v2->fields.genderTypeLb;
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this = (MstProfileComponent_o *)Gender__ToName(genderType, 0);
  if ( !genderTypeLb )
LABEL_8:
    sub_1C71608(this, method);
  UILabel__set_text(genderTypeLb, (System_String_o *)this, 0);
}


void MstProfileComponent__setUserLv(MstProfileComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UIExtrusionLabel_o *userLevelLb; // x20
  System_String_o *v7; // x1
  UILabel_o *userMaxLvLb; // x19
  System_String_o *v9; // x1
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC248E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC248E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)UserExpMaster__GetLevelMax((UserExpMaster_o *)Instance, 0);
  v10 = (int)Instance;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_15;
  userLevelLb = this->fields.userLevelLb;
  Instance = (DataManager_o *)System_Int32__ToString((int)usrGameEnt + 80, 0);
  if ( !userLevelLb )
    goto LABEL_15;
  v7 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UIExtrusionLabel__set_text(userLevelLb, v7, 0);
  userMaxLvLb = this->fields.userMaxLvLb;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v10, 0);
  if ( !userMaxLvLb )
LABEL_15:
    sub_1C71608(Instance, v4);
  if ( Instance )
    v9 = (System_String_o *)Instance;
  else
    v9 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(userMaxLvLb, v9, 0);
}


void MstProfileComponent__setUserName(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8

  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (this = (MstProfileComponent_o *)this->fields.userNameTxt) == 0 )
    sub_1C71608(this, method);
  UILabel__set_text((UILabel_o *)this, usrGameEnt->fields.name, 0);
}


void MstProfileComponent__showChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  ChangeUserNameWindow_o *monitor; // x20
  System_String_o *namespaze; // x21
  ChangeUserNameWindow_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_4CC2492 & 1) == 0 )
  {
    sub_1C713B0(&ChangeUserNameWindow_CallbackFunc_TypeInfo);
    this = (MstProfileComponent_o *)sub_1C713B0(&Method_MstProfileComponent_endOpenChangeDlg__);
    byte_4CC2492 = 1;
  }
  klass = v2[25].klass;
  if ( !klass
    || (monitor = (ChangeUserNameWindow_o *)v2[2].monitor,
        namespaze = (System_String_o *)klass->_1.namespaze,
        v6 = (ChangeUserNameWindow_CallbackFunc_o *)sub_1C715FC(ChangeUserNameWindow_CallbackFunc_TypeInfo),
        ChangeUserNameWindow_CallbackFunc___ctor(v6, v2, (intptr_t)Method_MstProfileComponent_endOpenChangeDlg__, v7),
        !monitor) )
  {
    sub_1C71608(this, method);
  }
  ChangeUserNameWindow__OpenChangeNameWindow(monitor, namespaze, v6, v8);
}


void MstProfileComponent__showLoginCountInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  DataManager_o *v6; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  long double v9; // q0
  int32_t monitor_high; // w20
  int monitor; // w24
  __int64 v12; // x0
  __int64 v13; // x0
  int32_t NextLoginBonusDay; // w21
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v16; // x0
  UILabel_o *totalLoginLb; // x22
  Il2CppObject *v18; // x0
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v20; // x20
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v23; // [xsp+8h] [xbp-48h] BYREF
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CC2497 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_TotalLoginMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserLoginMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&StringLiteral_25222/*"{0:N0}"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_9267/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/);
    byte_4CC2497 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C47444(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C47444(v2);
  v6 = **(DataManager_o ***)(v5 + 184);
  if ( !v6 )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        v6,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserLoginMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v6 = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_32;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *(_QWORD *)(*(_QWORD *)&v6[1].fields._DispLog + 64LL),
             (const MethodInfo_340B3DC *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    monitor = (int)Entity[1].monitor;
    monitor_high = HIDWORD(Entity[1].monitor);
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C47444(v9);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C47444(v9);
    v6 = **(DataManager_o ***)(v13 + 184);
    if ( !v6 )
      goto LABEL_32;
    v6 = (DataManager_o *)DataManager__GetMasterData_object_(
                            v6,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TotalLoginMaster___);
    if ( !v6 )
      goto LABEL_32;
    NextLoginBonusDay = TotalLoginMaster__getNextLoginBonusDay((TotalLoginMaster_o *)v6, monitor_high, 0);
  }
  else
  {
    NextLoginBonusDay = 0;
    monitor_high = 0;
    monitor = 0;
  }
  seqLoginLb = this->fields.seqLoginLb;
  v24 = monitor;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v6 = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v16, 0);
  if ( !seqLoginLb )
    goto LABEL_32;
  UILabel__set_text(seqLoginLb, (System_String_o *)v6, 0);
  totalLoginLb = this->fields.totalLoginLb;
  v23 = monitor_high;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v6 = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v18, 0);
  if ( !totalLoginLb )
    goto LABEL_32;
  UILabel__set_text(totalLoginLb, (System_String_o *)v6, 0);
  nextLoginBonusLb = this->fields.nextLoginBonusLb;
  if ( NextLoginBonusDay < 1 )
  {
    method = (const MethodInfo *)StringLiteral_1/*""*/;
    if ( nextLoginBonusLb )
      goto LABEL_30;
LABEL_32:
    sub_1C71608(v6, method);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9267/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0);
  v22 = NextLoginBonusDay;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v6 = (DataManager_o *)System_String__Format(v20, v21, 0);
  method = (const MethodInfo *)v6;
  if ( !nextLoginBonusLb )
    goto LABEL_32;
LABEL_30:
  UILabel__set_text(nextLoginBonusLb, (System_String_o *)method, 0);
}


void MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v4; // x1
  MyRoomBackGroundManager_o *bgManager; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int64_t recoverTime; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC2481 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2481 = 1;
  }
  count = 0;
  recoverTime = 0;
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    bgManager = this->fields.bgManager;
    if ( !bgManager )
      goto LABEL_12;
    MyRoomBackGroundManager__QuitBackGround(bgManager, 0);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)SelfUserGame, v7, v8, v9, v10, v11, v12);
  MstProfileComponent__createCmdSpellWindow(this, v13);
  MstProfileComponent__messageSetup(this, v14);
  MstProfileComponent__gradeSetup(this, v15);
  bgManager = (MyRoomBackGroundManager_o *)this->fields.usrGameEnt;
  if ( !bgManager )
LABEL_12:
    sub_1C71608(bgManager, v4);
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)bgManager, &count, &recoverTime, 0) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v17);
  }
  MstProfileComponent__SetProfileData(this, v16);
}


void MstProfileComponent__showSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x20
  InputUserBirthDayWindow_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4CC2498 & 1) == 0 )
  {
    sub_1C713B0(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_MstProfileComponent_endOpenSetBirthDay__);
    sub_1C713B0(&Method_MstProfileComponent_showSetBirthDayDlg__);
    byte_4CC2498 = 1;
  }
  v3 = Method_MstProfileComponent_showSetBirthDayDlg__;
  if ( (*((_BYTE *)Method_MstProfileComponent_showSetBirthDayDlg__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_MstProfileComponent_showSetBirthDayDlg__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v6 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_1C715FC(InputUserBirthDayWindow_CallbackFunc_TypeInfo);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    v7);
  if ( !inputBirthDayWindow )
    sub_1C71608(v8, v9);
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v6, v10);
}


void MstProfileComponent_ClickDelegate___ctor(
        MstProfileComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9F810;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F7D0;
}


System_IAsyncResult_o *MstProfileComponent_ClickDelegate__BeginInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void MstProfileComponent_ClickDelegate__Invoke(MstProfileComponent_ClickDelegate_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void MstProfileComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC24A8 & 1) == 0 )
  {
    sub_1C713B0(&MstProfileComponent___c_TypeInfo);
    byte_4CC24A8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(MstProfileComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MstProfileComponent___c_TypeInfo->static_fields->__9 = (struct MstProfileComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)MstProfileComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MstProfileComponent___c___ctor(MstProfileComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MstProfileComponent___c___ShowMstProfile_b__63_1(MstProfileComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC24A9 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC24A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
}


void MstProfileComponent___c__DisplayClass63_0___ctor(
        MstProfileComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MstProfileComponent___c__DisplayClass63_0___ShowMstProfile_b__0(
        MstProfileComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endLoadCallback; // x8
  __int64 v4; // x1
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v6; // x8
  MstProfileComponent___c_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__63_1; // x20
  Il2CppObject *v10; // x21
  struct MstProfileComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CC24AA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_MstProfileComponent___c__ShowMstProfile_b__63_1__);
    sub_1C713B0(&MstProfileComponent___c_TypeInfo);
    byte_4CC24AA = 1;
  }
  endLoadCallback = this->fields.endLoadCallback;
  if ( endLoadCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))endLoadCallback->fields.invoke_impl)(
      endLoadCallback->fields.method_code,
      endLoadCallback->fields.method);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    v7 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    if ( !MstProfileComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo);
      v7 = MstProfileComponent___c_TypeInfo;
    }
    _9__63_1 = v7->static_fields->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = MstProfileComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__63_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(_9__63_1, v10, Method_MstProfileComponent___c__ShowMstProfile_b__63_1__, 0);
      static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      static_fields->__9__63_1 = _9__63_1;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__63_1,
        (int32_t)_9__63_1,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    if ( !Instance )
      sub_1C71608(v7, v4);
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, _9__63_1, 0);
  }
}


void MstProfileComponent___c__DisplayClass76_0___ctor(
        MstProfileComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MstProfileComponent___c__DisplayClass76_0___setMstImg_b__0(
        MstProfileComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C71608(this, method);
  MstProfileComponent__setCmdSpellInfo(this->fields.__4__this, this->fields.genderType, v2);
}