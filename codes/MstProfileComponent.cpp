void __fastcall MstProfileComponent___cctor(const MethodInfo *method)
{
  MstProfileComponent_c *v1; // x8

  if ( (byte_438A43A & 1) == 0 )
  {
    sub_B775C4(&MstProfileComponent_TypeInfo);
    byte_438A43A = 1;
  }
  MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME = 0.15;
  v1 = MstProfileComponent_TypeInfo;
  MstProfileComponent_TypeInfo->static_fields->MASTER_PROFILE_INFO_X_POS = 225.0;
  v1->static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void __fastcall MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_438A439 & 1) == 0 )
  {
    sub_B775C4(&ImageItem_Id___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91);
    byte_438A439 = 1;
  }
  v3 = (System_Array_o *)sub_B775DC(ImageItem_Id___TypeInfo, 8LL);
  v10.fields.value = Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v3, v10, 0LL);
  this->fields.dispItemInfoList = (struct ImageItem_Id_array *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dispItemInfoList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_438A436 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A436 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    MstProfileComponent_ClickDelegate__Invoke(callbackFunc, 0LL);
}


void __fastcall MstProfileComponent__OnClickNameChangeBtn(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  const MethodInfo *v4; // x1

  if ( (byte_438A425 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A425 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MstProfileComponent__showChangeDlg(this, v4);
  }
}


void __fastcall MstProfileComponent__OnClickSubmit(
        MstProfileComponent_o *this,
        System_String_o *changeName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x21
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  char *Fsm; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_438A428 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_4041/*"ChangeUserName"*/);
    sub_B775C4(&StringLiteral_3203/*"CLICK_SUBMIT"*/);
    byte_438A428 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    Fsm = (char *)this->fields.myRoomFsm;
    if ( !Fsm
      || (Fsm = (char *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL)) == 0LL
      || (Fsm = (char *)*((_QWORD *)Fsm + 11)) == 0LL
      || (Fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                          (System_String_o *)StringLiteral_4041/*"ChangeUserName"*/,
                          0LL)) == 0LL
      || (*((_QWORD *)Fsm + 7) = changeName,
          sub_B77560(
            (BattleServantConfConponent_o *)(Fsm + 56),
            (System_Int32_array **)changeName,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          (Fsm = (char *)this->fields.myRoomFsm) == 0LL) )
    {
      sub_B7769C(Fsm, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, (System_String_o *)StringLiteral_3203/*"CLICK_SUBMIT"*/, 0LL);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.changeName,
      (System_Int32_array **)changeName,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    MstProfileComponent__checkInput(this, v20);
  }
}


void __fastcall MstProfileComponent__OpenExpInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstExpInfoComponent_o *expInfoWindow; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct UserGameEntity_o *usrGameEnt; // x8

  if ( (byte_438A42A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A42A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0LL )
    sub_B7769C(expInfoWindow, v4);
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, v5);
}


void __fastcall MstProfileComponent__SetProfileData(MstProfileComponent_o *this, const MethodInfo *method)
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

  if ( (byte_438A41B & 1) == 0 )
  {
    sub_B775C4(&FSUtility_TypeInfo);
    sub_B775C4(&MstProfileComponent_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_9143/*"MasterProfileInfo"*/);
    byte_438A41B = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsTablet(0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_22;
      v6 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_9143/*"MasterProfileInfo"*/, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
      {
        v7 = MstProfileComponent_TypeInfo;
        if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MstProfileComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
          v7 = MstProfileComponent_TypeInfo;
        }
        MASTER_PROFILE_INFO_X_POS = v7->static_fields->MASTER_PROFILE_INFO_X_POS;
        width = UnityEngine_Screen__get_width(0LL);
        transform = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0LL);
        if ( v6 )
        {
          v10 = (float)((float)(MASTER_PROFILE_INFO_X_POS * (float)width) / (float)(int)transform) / 1.7778;
          gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v10, 0LL);
          goto LABEL_21;
        }
LABEL_22:
        sub_B7769C(transform, v5);
      }
    }
  }
LABEL_21:
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


void __fastcall MstProfileComponent__ShowMstProfile(
        MstProfileComponent_o *this,
        MstProfileComponent_ClickDelegate_o *closeCallback,
        System_Action_o *endLoadCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  struct UnityEngine_GameObject_o *titleInfoPref; // x23
  UnityEngine_GameObject_o *v29; // x23
  int32_t layer; // w0
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  struct TitleInfoControl_o **p_titleInfo; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  TitleInfoControl_o *titleInfo; // x24
  TitleInfoControl_o *v40; // x24
  System_Action_o *v41; // x25
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  MyRoomBackGroundManager_o *bgManager; // x19
  System_Action_o *v51; // x20
  int64_t recoverTime; // [xsp+0h] [xbp-50h] BYREF
  int32_t count; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438A414 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_B775C4(&Method_MstProfileComponent_OnClickBack__);
    sub_B775C4(&MyRoomControl_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__);
    sub_B775C4(&MstProfileComponent___c__DisplayClass62_0_TypeInfo);
    byte_438A414 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  v7 = sub_B77694(MstProfileComponent___c__DisplayClass62_0_TypeInfo);
  MstProfileComponent___c__DisplayClass62_0___ctor((MstProfileComponent___c__DisplayClass62_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_31;
  *(_QWORD *)(v7 + 16) = endLoadCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)endLoadCallback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  }
  v24 = MyRoomControl__getChangeMyRoomBgm(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v24, 0LL);
  MstProfileComponent__createCmdSpellWindow(this, v25);
  MstProfileComponent__messageSetup(this, v26);
  MstProfileComponent__gradeSetup(this, v27);
  titleInfoPref = this->fields.titleInfoPref;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoPref,
                                      (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  GameObjectExtensions__SetLayerRecursively(v29, layer, 0LL);
  if ( !v29 )
    goto LABEL_31;
  Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v29,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  p_titleInfo = &this->fields.titleInfo;
  this->fields.titleInfo = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.titleInfo,
    (System_Int32_array **)Component_srcLineSprite,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  titleInfo = this->fields.titleInfo;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !titleInfo )
    goto LABEL_31;
  TitleInfoControl__SetParent(titleInfo, (UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setDepth((TitleInfoControl_o *)gameObject, 40, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)gameObject, 41, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 45, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__changeTitleInfo_18674844((TitleInfoControl_o *)gameObject, 1, 45, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 0, 0LL);
  v40 = this->fields.titleInfo;
  v41 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_MstProfileComponent_OnClickBack__, 0LL);
  if ( !v40 )
    goto LABEL_31;
  TitleInfoControl__SetBackBtnAct(v40, v41, 0LL);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)closeCallback,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  gameObject = (UnityEngine_GameObject_o *)*p_usrGameEnt;
  if ( !*p_usrGameEnt )
    goto LABEL_31;
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)gameObject, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v49);
  }
  MstProfileComponent__SetProfileData(this, v48);
  bgManager = this->fields.bgManager;
  v51 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v7,
    Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__,
    0LL);
  if ( !bgManager
    || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v51, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)*p_titleInfo) == 0LL) )
  {
LABEL_31:
    sub_B7769C(gameObject, v9);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 1, 0LL);
}


void __fastcall MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A413 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A413 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_B7769C(gameObject, v5);
    }
    v6.fields.x = 1200.0;
    v6.fields.y = 0.0;
    v6.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v6, 0LL);
  }
}


void __fastcall MstProfileComponent__Update(MstProfileComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.usrGameEnt )
    MstProfileComponent__setCommandSpellInfo(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent___onClickMessageChange_b__104_0(
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
  if ( (byte_438A43B & 1) == 0 )
  {
    sub_B775C4(&Method_MstProfileComponent_callbackChangeMessage__);
    this = (MstProfileComponent_o *)sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438A43B = 1;
  }
  if ( result )
  {
    userNameTxt = v6->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v6,
        Method_MstProfileComponent_callbackChangeMessage__,
        0LL);
      MstProfileComponent__requestChangeName(v10, mText, changeName, v9, v11);
      return;
    }
LABEL_8:
    sub_B7769C(this, result);
  }
  this = (MstProfileComponent_o *)v6->fields.userMessageInputDlg;
  if ( !this )
    goto LABEL_8;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)this, 0LL);
}


void __fastcall MstProfileComponent__callbackChangeMessage(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MstProfileComponent_o *v4; // x19
  char v5; // w20
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_438A435 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438A435 = 1;
  }
  if ( !result
    || (this = (MstProfileComponent_o *)System_String__Equals_44889276(
                                          result,
                                          (System_String_o *)StringLiteral_21657/*"ok"*/,
                                          0LL),
        !v4->fields.userMessageInputDlg) )
  {
    sub_B7769C(this, result);
  }
  v5 = (char)this;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)v4->fields.userMessageInputDlg, 0LL);
  if ( (v5 & 1) != 0 )
    MstProfileComponent__showMstProfile(v4, v6);
}


void __fastcall MstProfileComponent__callbackChangeName(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MstProfileComponent_o *v4; // x19
  struct ChangeUserNameWindow_o *changeNameWindow; // x8
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_438A438 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438A438 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (MstProfileComponent_o *)System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL);
  changeNameWindow = v4->fields.changeNameWindow;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( changeNameWindow )
    {
      ChangeUserNameWindow__Close(v4->fields.changeNameWindow, 0LL);
      MstProfileComponent__showMstProfile(v4, v6);
      return;
    }
LABEL_10:
    sub_B7769C(this, result);
  }
  if ( !changeNameWindow )
    goto LABEL_10;
  ChangeUserNameWindow__resetInputVal(v4->fields.changeNameWindow, 0LL);
  this = (MstProfileComponent_o *)v4->fields.changeNameWindow;
  if ( !this )
    goto LABEL_10;
  ChangeUserNameWindow__Close((ChangeUserNameWindow_o *)this, 0LL);
}


void __fastcall MstProfileComponent__callbackGenderChange(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  MstProfileComponent__setGenderInfo(this, v11);
}


void __fastcall MstProfileComponent__callbackSetBirthDay(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  MstProfileComponent__setBirthDayInfo(this, v11);
}


void __fastcall MstProfileComponent__checkInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *SelfUserGame; // x0
  System_String_o *changeName; // x20
  System_String_o *monitor; // x21
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  MstProfileComponent_o *v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_438A429 & 1) == 0 )
  {
    sub_B775C4(&Method_MstProfileComponent_callbackChangeName__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&StringLiteral_3093/*"CHECK_OK"*/);
    byte_438A429 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    SelfUserGame = this->fields.myRoomFsm;
    if ( SelfUserGame )
    {
      PlayMakerFSM__SendEvent(SelfUserGame, (System_String_o *)StringLiteral_3093/*"CHECK_OK"*/, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(SelfUserGame, v4);
  }
  changeName = this->fields.changeName;
  SelfUserGame = (PlayMakerFSM_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_11;
  monitor = (System_String_o *)SelfUserGame[4].monitor;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackChangeName__,
    0LL);
  MstProfileComponent__requestChangeName(v9, changeName, monitor, v8, v10);
}


void __fastcall MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B7769C(0LL, method);
  ChangeUserNameWindow__Close(changeNameWindow, 0LL);
}


void __fastcall MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_B7769C(0LL, method);
  InputUserBirthDayWindow__Close(inputBirthDayWindow, 0LL);
}


void __fastcall MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  struct UnityEngine_GameObject_o *cmdSpellWinPrefab; // x21
  UnityEngine_GameObject_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t layer; // w0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_438A419 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A419 = 1;
  }
  p_cmdSpellWinComp = &this->fields.cmdSpellWinComp;
  cmdSpellWinComp = (UnityEngine_Object_o *)this->fields.cmdSpellWinComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cmdSpellWinComp, 0LL, 0LL) )
  {
    cmdSpellWinPrefab = this->fields.cmdSpellWinPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)cmdSpellWinPrefab,
                                       (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
          GameObjectExtensions__SetLayerRecursively(v6, layer, 0LL),
          !v6)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v6,
                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          *p_cmdSpellWinComp = (struct CommandSpellWindowComponent_o *)Component_srcLineSprite,
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.cmdSpellWinComp,
            Component_srcLineSprite,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (gameObject = (UnityEngine_GameObject_o *)*p_cmdSpellWinComp) == 0LL) )
    {
      sub_B7769C(gameObject, v8);
    }
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_32813688(v17, this->fields.cmdSpellWinInfo, 0LL);
  }
}


void __fastcall MstProfileComponent__dispSetBirth(
        MstProfileComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t Month; // w22
  int32_t Day; // w21
  UnityEngine_Transform_o *IsOpen; // x0
  __int64 v8; // x1
  char v9; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  MstProfileComponent_c *v12; // x0
  UnityEngine_GameObject_o *v13; // x24
  float v14; // s0
  MstProfileComponent_c *v15; // x0
  UILabel_o *birthDayLb; // x23
  System_String_o *v17; // x24
  Il2CppObject *v18; // x22
  Il2CppObject *PaddingBirthday; // x0
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8

  if ( (byte_438A421 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&MstProfileComponent_TypeInfo);
    sub_B775C4(&StringLiteral_2672/*"BIRTHDAY"*/);
    byte_438A421 = 1;
  }
  v20.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v20, 0LL);
  v21.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v21, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (UnityEngine_Transform_o *)CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  if ( !this->fields.birthDayInfo )
    goto LABEL_32;
  v9 = (char)IsOpen;
  IsOpen = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  IsOpen = UnityEngine_Transform__GetChild(IsOpen, 0, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  if ( (v9 & 1) != 0 )
  {
    v12 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v12 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v12->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, RESET_BIRTH_DAY_ADJUST_PX, 0LL);
  IsOpen = (UnityEngine_Transform_o *)this->fields.genderTypeLb;
  if ( !IsOpen )
    goto LABEL_32;
  IsOpen = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IsOpen, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  IsOpen = UnityEngine_Transform__get_parent(IsOpen, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  v14 = 0.0;
  if ( (v9 & 1) != 0 )
  {
    v15 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v15 = MstProfileComponent_TypeInfo;
    }
    v14 = (float)v15->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v13, v14, 0LL);
  IsOpen = (UnityEngine_Transform_o *)this->fields.resetBirthBtn;
  if ( !IsOpen )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v9 & 1, 0LL);
  birthDayLb = this->fields.birthDayLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsOpen = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2672/*"BIRTHDAY"*/, 0LL);
  if ( !this->fields.inputBirthDayWindow )
    goto LABEL_32;
  v17 = (System_String_o *)IsOpen;
  IsOpen = (UnityEngine_Transform_o *)InputUserBirthDayWindow__getPaddingBirthday(
                                        this->fields.inputBirthDayWindow,
                                        Month,
                                        0LL);
  if ( !this->fields.inputBirthDayWindow
    || (v18 = (Il2CppObject *)IsOpen,
        PaddingBirthday = (Il2CppObject *)InputUserBirthDayWindow__getPaddingBirthday(
                                            this->fields.inputBirthDayWindow,
                                            Day,
                                            0LL),
        IsOpen = (UnityEngine_Transform_o *)System_String__Format_44897472(v17, v18, PaddingBirthday, 0LL),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, (System_String_o *)IsOpen, 0LL),
        (IsOpen = (UnityEngine_Transform_o *)this->fields.birthDayInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 1, 0LL), !callback) )
  {
LABEL_32:
    sub_B7769C(IsOpen, v8);
  }
  System_Action__Invoke(callback, 0LL);
}


void __fastcall MstProfileComponent__endOpenChangeDlg(
        MstProfileComponent_o *this,
        bool res,
        System_String_o *changeName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v9; // x1
  PlayMakerFSM_o *changeNameWindow; // x0

  if ( (byte_438A427 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_3167/*"CLICK_CANCLE"*/);
    byte_438A427 = 1;
  }
  if ( !res )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
    {
      changeNameWindow = this->fields.myRoomFsm;
      if ( changeNameWindow )
      {
        PlayMakerFSM__SendEvent(changeNameWindow, (System_String_o *)StringLiteral_3167/*"CLICK_CANCLE"*/, 0LL);
        return;
      }
    }
    else
    {
      changeNameWindow = (PlayMakerFSM_o *)this->fields.changeNameWindow;
      if ( changeNameWindow )
      {
        ChangeUserNameWindow__Close((ChangeUserNameWindow_o *)changeNameWindow, 0LL);
        return;
      }
    }
    sub_B7769C(changeNameWindow, v9);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  MstProfileComponent__OnClickSubmit(this, changeName, v7);
}


void __fastcall MstProfileComponent__endOpenSetBirthDay(
        MstProfileComponent_o *this,
        bool res,
        System_Int32_array *paramList,
        const MethodInfo *method)
{
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0
  __int64 v8; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  const MethodInfo *v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x0

  if ( (byte_438A42D & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_B775C4(&Method_MstProfileComponent_endOpenSetBirthDay__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A42D = 1;
  }
  if ( !res )
  {
    v11 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B775CC(Method_MstProfileComponent_endOpenSetBirthDay__);
    v12 = (System_Reflection_MethodBase_o *)sub_B775A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
    inputBirthDayWindow = this->fields.inputBirthDayWindow;
    if ( inputBirthDayWindow )
    {
      InputUserBirthDayWindow__Close(inputBirthDayWindow, 0LL);
      return;
    }
    goto LABEL_25;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(144, 0, 0LL, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    if ( inputBirthDayWindow )
    {
      inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)inputBirthDayWindow,
                                                           (const MethodInfo_21FBB80 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
      usrGameEnt = this->fields.usrGameEnt;
      if ( usrGameEnt )
      {
        if ( inputBirthDayWindow )
        {
          *(_QWORD *)&inputBirthDayWindow->fields.m_CachedPtr = usrGameEnt->fields.birthDay;
          goto LABEL_15;
        }
      }
    }
LABEL_25:
    sub_B7769C(inputBirthDayWindow, v8);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !paramList )
    goto LABEL_25;
  if ( paramList->max_length < 2 )
  {
    v13 = sub_B776C8(inputBirthDayWindow);
    sub_B77668(v13, 0LL);
  }
  MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[1], paramList->m_Items[2], v10);
}


void __fastcall MstProfileComponent__genderChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t v7; // w1

  if ( (byte_438A431 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A431 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B7769C(v3, v4);
  if ( usrGameEnt->fields.genderType == 1 )
    v7 = 2;
  else
    v7 = 1;
  MstProfileComponent__requestGenderChange(this, v7, v5);
}


void __fastcall MstProfileComponent__getCurrentUserData(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall MstProfileComponent__gradeSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  int32_t Kind; // w0
  int32_t v4; // w20
  System_String_o *MasterProfileBgImage; // x0
  __int64 v6; // x1
  struct UISprite_o *profileBg; // x22
  System_String_o *v8; // x21
  UIAtlas_o *mAtlas; // x23
  struct UISprite_o *v10; // x8

  if ( (byte_438A417 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Grade_TypeInfo);
    byte_438A417 = 1;
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v4 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterProfileBgImage = Grade__GetMasterProfileBgImage(v4, 0LL);
    profileBg = this->fields.profileBg;
    if ( !profileBg )
      goto LABEL_17;
    v8 = MasterProfileBgImage;
    mAtlas = profileBg->fields.mAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(profileBg, v8, mAtlas, 0LL);
    MasterProfileBgImage = Grade__GetMasterProfileBgLineImage(v4, 0LL);
    v10 = this->fields.profileBg;
    if ( !v10 )
LABEL_17:
      sub_B7769C(MasterProfileBgImage, v6);
    AtlasManager__SetGradeBase(this->fields.nameLine, MasterProfileBgImage, v10->fields.mAtlas, 0LL);
  }
}


void __fastcall MstProfileComponent__hideMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *masterFigure; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *userMessageInputDlg; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  int32_t childCount; // w0
  int32_t v15; // w20
  UnityEngine_Object_o *v16; // x21

  if ( (byte_438A418 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A418 = 1;
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(masterFigure, 0LL, 0LL) )
  {
    userMessageInputDlg = (UnityEngine_Component_o *)this->fields.masterFigure;
    if ( !userMessageInputDlg )
      goto LABEL_26;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    this->fields.masterFigure = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.masterFigure, 0LL, v7, v8, v9, v10, v11, v12);
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg
    || (SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)userMessageInputDlg, 0LL),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.expInfoWindow) == 0LL)
    || (MstExpInfoComponent__Close((MstExpInfoComponent_o *)userMessageInputDlg, v4),
        MstProfileComponent__releaseCmdSpellWindow(this, v13),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0LL)
    || (userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0LL)) == 0LL )
  {
LABEL_26:
    sub_B7769C(userMessageInputDlg, v4);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)userMessageInputDlg, 0LL);
  v15 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !userMessageInputDlg )
        goto LABEL_26;
      userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0LL);
      if ( !userMessageInputDlg )
        goto LABEL_26;
      userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)userMessageInputDlg,
                                                         v15,
                                                         0LL);
      if ( !userMessageInputDlg )
        goto LABEL_26;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v16, 0LL);
    }
    while ( --v15 >= 0 );
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListScrollView;
  if ( !userMessageInputDlg )
    goto LABEL_26;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *, float, float))userMessageInputDlg->klass[1]._1.parent)(
    userMessageInputDlg,
    0LL,
    userMessageInputDlg->klass[1]._1.generic_class,
    0.0,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__messageSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  UILabel_o *SelfUserGame; // x0
  __int64 v4; // x1
  System_String_o *geometry; // x20
  UILabel_o *v6; // x8
  struct UILabel_o **p_messageLabel; // x19
  struct UILabel_o *messageLabel; // t1
  float v10; // s4
  float v11; // s5
  float v12; // s6
  UIWidget_o *v13; // x21
  int v14; // s0
  struct UILabel_o *v15; // t1
  int v16; // s1
  int v17; // s2
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_438A416 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8902/*"MESSAGE_CHANGE_NO_INPUT"*/);
    byte_438A416 = 1;
  }
  SelfUserGame = (UILabel_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  geometry = (System_String_o *)SelfUserGame->fields.geometry;
  if ( System_String__IsNullOrEmpty(geometry, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8902/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    messageLabel = this->fields.messageLabel;
    p_messageLabel = &this->fields.messageLabel;
    v6 = messageLabel;
    if ( messageLabel )
    {
      geometry = (System_String_o *)SelfUserGame;
      UILabel__set_effectStyle(v6, 0, 0LL);
      v13 = (UIWidget_o *)*p_messageLabel;
      v14 = 1058642330;
      *(_QWORD *)&v18.fields.r = 0LL;
      *(_QWORD *)&v18.fields.b = 0LL;
      goto LABEL_12;
    }
LABEL_15:
    sub_B7769C(SelfUserGame, v4);
  }
  v15 = this->fields.messageLabel;
  p_messageLabel = &this->fields.messageLabel;
  SelfUserGame = v15;
  if ( !v15 )
    goto LABEL_15;
  UILabel__set_effectStyle(SelfUserGame, 3, 0LL);
  v13 = (UIWidget_o *)*p_messageLabel;
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  v14 = 1.0;
LABEL_12:
  v16 = v14;
  v17 = v14;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)&v14, v10, v11, v12, (const MethodInfo *)&v18);
  if ( !v13 )
    goto LABEL_15;
  UIWidget__set_color(v13, v18, 0LL);
  SelfUserGame = *p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_15;
  UILabel__set_text(SelfUserGame, geometry, 0LL);
}


void __fastcall MstProfileComponent__onClickCmdSpell(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_438A42F & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A42F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B7769C(0LL, v3);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._10_Open.method)(
    cmdSpellWinComp,
    0LL,
    cmdSpellWinComp->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall MstProfileComponent__onClickMessageChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  System_String_o *message; // x20
  UserMessageInputDlg_o *userMessageInputDlg; // x21
  SupportDeckNameInputMenu_CallbackFunc_o *v7; // x22

  if ( (byte_438A434 & 1) == 0 )
  {
    sub_B775C4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MstProfileComponent__onClickMessageChange_b__104_0__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A434 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v7 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B77694(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__104_0__,
          0LL),
        !userMessageInputDlg) )
  {
    sub_B7769C(SelfUserGame, v4);
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v7, 0LL);
}


void __fastcall MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_438A430 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A430 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_11;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
    if ( cmdSpellWinComp )
    {
      ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._12_Close.method)(
        cmdSpellWinComp,
        0LL,
        cmdSpellWinComp->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_11:
    sub_B7769C(cmdSpellWinComp, method);
  }
}


void __fastcall MstProfileComponent__releaseCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_cmdSpellWinComp; // x19
  UnityEngine_Object_o *v4; // x20
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438A41A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A41A = 1;
  }
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  p_cmdSpellWinComp = (UnityEngine_Component_o **)&this->fields.cmdSpellWinComp;
  v4 = (UnityEngine_Object_o *)cmdSpellWinComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_cmdSpellWinComp )
      sub_B7769C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_36310192(gameObject, 0LL);
    *p_cmdSpellWinComp = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_cmdSpellWinComp, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall MstProfileComponent__requestChangeName(
        MstProfileComponent_o *this,
        System_String_o *changedName,
        System_String_o *message,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  UserNameChangeRequest_o *SelfUserGame; // x0
  __int64 v9; // x1
  int32_t paramInteger_high; // w22

  if ( (byte_438A437 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A437 = 1;
  }
  SelfUserGame = (UserNameChangeRequest_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  paramInteger_high = HIDWORD(SelfUserGame[1].fields.paramInteger);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SelfUserGame = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                              callback,
                                              (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !SelfUserGame )
LABEL_9:
    sub_B7769C(SelfUserGame, v9);
  UserNameChangeRequest__beginRequest(SelfUserGame, changedName, paramInteger_high, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__requestGenderChange(
        MstProfileComponent_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x21
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x20
  NetworkManager_ResultCallbackFunc_o *v7; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_438A432 & 1) == 0 )
  {
    sub_B775C4(&Method_MstProfileComponent_callbackGenderChange__);
    sub_B775C4(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (MstProfileComponent_o *)sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438A432 = 1;
  }
  klass = v4[24].klass;
  if ( !klass )
    goto LABEL_10;
  namespaze = (System_String_o *)klass->_1.namespaze;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, v4, Method_MstProfileComponent_callbackGenderChange__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v7,
                                                                   (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  this = (MstProfileComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this || !Request_WarBoardWallAttackRequest )
LABEL_10:
    sub_B7769C(this, *(_QWORD *)&genderType);
  UserNameChangeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    namespaze,
    genderType,
    (System_String_o *)this->fields.usrEquipNameLb,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__requestSetBirthDay(
        MstProfileComponent_o *this,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x23
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x21
  int32_t castClass_high; // w22
  NetworkManager_ResultCallbackFunc_o *v10; // x24

  v6 = (Il2CppObject *)this;
  if ( (byte_438A42E & 1) == 0 )
  {
    sub_B775C4(&Method_MstProfileComponent_callbackSetBirthDay__);
    sub_B775C4(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (MstProfileComponent_o *)sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438A42E = 1;
  }
  klass = v6[24].klass;
  if ( !klass )
    goto LABEL_9;
  namespaze = (System_String_o *)klass->_1.namespaze;
  castClass_high = HIDWORD(klass->_1.castClass);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, v6, Method_MstProfileComponent_callbackSetBirthDay__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (MstProfileComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                    v10,
                                    (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !this )
LABEL_9:
    sub_B7769C(this, *(_QWORD *)&month);
  SetUserBirthDayRequest__beginRequest((SetUserBirthDayRequest_o *)this, namespaze, castClass_high, month, day, 0LL);
}


void __fastcall MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B7769C(0LL, method);
  ChangeUserNameWindow__resetInputVal(changeNameWindow, 0LL);
}


void __fastcall MstProfileComponent__setBirthDayInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  MstProfileComponent__setUserBirthDay(this, v10);
}


void __fastcall MstProfileComponent__setCmdSpellImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MstProfileComponent_o *v3; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *cmdSpellWinComp; // x20
  CommandSpellWindowComponent_o *v6; // x20
  struct CommandSpellWindowComponent_o *v7; // x8
  struct CommandSpellWindowComponent_o *v8; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v3 = this;
  if ( (byte_438A41D & 1) == 0 )
  {
    sub_B775C4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_B775C4(&Method_MstProfileComponent_onSpellWindowClose__);
    sub_B775C4(&MstProfileComponent_TypeInfo);
    this = (MstProfileComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A41D = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_17;
  MstProfileComponent__setCmdSpellInfo(v3, usrGameEnt->fields.genderType, v2);
  cmdSpellWinComp = (UnityEngine_Object_o *)v3->fields.cmdSpellWinComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cmdSpellWinComp, 0LL, 0LL) )
  {
    v6 = v3->fields.cmdSpellWinComp;
    this = (MstProfileComponent_o *)MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
    }
    if ( v6 )
    {
      CommandSpellWindowComponent__InitializeCommandSpellDepth(
        v6,
        0,
        MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH,
        0LL);
      this = (MstProfileComponent_o *)v3->fields.cmdSpellWinComp;
      if ( this )
      {
        BattleWindowComponent__setInitData(
          (BattleWindowComponent_o *)this,
          2,
          MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL);
        v7 = v3->fields.cmdSpellWinComp;
        if ( v7 )
        {
          v7->fields.mode = 0;
          v8 = v3->fields.cmdSpellWinComp;
          v9 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B77694(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v9,
            (Il2CppObject *)v3,
            Method_MstProfileComponent_onSpellWindowClose__,
            0LL);
          if ( v8 )
          {
            v8->fields.callback_close = v9;
            sub_B77560(
              (BattleServantConfConponent_o *)&v8->fields.callback_close,
              (System_Int32_array **)v9,
              v10,
              v11,
              v12,
              v13,
              v14,
              v15);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B7769C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__setCmdSpellInfo(
        MstProfileComponent_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *cmdSpellIconMale; // x0
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4

  if ( genderType == 2 )
  {
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    cmdSpellIconMale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0LL);
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconMale, 0, 0LL);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    if ( !cmdSpellIconMale
      || (CommandSpellIconComponent__SetData(
            (CommandSpellIconComponent_o *)cmdSpellIconMale,
            this->fields.usrGameEnt,
            0LL),
          (cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale) == 0LL)
      || (v6.fields.x = 130.0,
          v6.fields.y = 130.0,
          CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)cmdSpellIconMale, v6, 0LL),
          (cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale) == 0LL) )
    {
LABEL_17:
      sub_B7769C(cmdSpellIconMale, *(_QWORD *)&genderType);
    }
  }
  else
  {
    if ( genderType != 1 )
      return;
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    cmdSpellIconMale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0LL);
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconMale, 0, 0LL);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)cmdSpellIconMale, this->fields.usrGameEnt, 0LL);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    v5.fields.x = 130.0;
    v5.fields.y = 130.0;
    CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)cmdSpellIconMale, v5, 0LL);
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
  }
  cmdSpellIconMale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconMale, 1, 0LL);
}


void __fastcall MstProfileComponent__setCmdSpellRecoverTime(
        MstProfileComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v7; // x22
  int v8; // w23
  int v9; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v11; // x20
  __int64 v12; // x2
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  Il2CppObject *v15; // x22
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  int v19; // [xsp+18h] [xbp-38h] BYREF
  int v20; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438A41C & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3381/*"COMMAND_SPELL_RECOVER_TIME"*/);
    sub_B775C4(&StringLiteral_3384/*"COMMNAD_SPELL_RECV_TXT"*/);
    byte_438A41C = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3384/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v7 = recoverTime / 0xE10uLL;
      v8 = (int)(recoverTime / 0x3CuLL) % 60;
      v9 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3381/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v20 = v7;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v12);
      v19 = v8;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v14);
      v18 = v9;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v16);
      cmdSpellRecTimeInfo = System_String__Format_44903000(v11, v13, v15, v17, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B7769C(cmdSpellRecTimeInfo, recoverTime);
  }
  cmdSpellRecTimeInfo = (System_String_o *)this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellRecTimeInfo, 0, 0LL);
}


void __fastcall MstProfileComponent__setCommandSpellInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  int64_t recoverTime; // [xsp+8h] [xbp-18h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-4h] BYREF

  count = 0;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B7769C(0LL, method);
  UserGameEntity__getCmdSpellInfo(usrGameEnt, &count, &recoverTime, 0LL);
  MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v4);
  if ( this->fields.cmdCnt != count )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellImg(this, v5);
  }
}


void __fastcall MstProfileComponent__setGenderInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w21
  TerminalPramsManager_c *v14; // x0
  struct UserGameEntity_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_438A433 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438A433 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B7769C(v10, v11);
  genderType = usrGameEnt->fields.genderType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884B9 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884B9 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_PlayerGenderType_k__BackingField = genderType;
  TerminalPramsManager__PlayerGenderType_SaveData(0LL);
  v15 = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = v15;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  MstProfileComponent__setUserGender(this, v22);
  MstProfileComponent__setMstImg(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__setHaveItemInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListGrid; // x0
  struct ImageItem_Id_array *dispItemInfoList; // x8
  unsigned __int64 v5; // x23
  unsigned __int64 max_length; // x9
  int32_t v7; // w20
  UnityEngine_GameObject_o *mstItemInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  int v12; // s0
  const MethodInfo *v15; // x3
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  __int64 v20; // x0

  if ( (byte_438A424 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
    byte_438A424 = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_15;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0LL);
  if ( !itemListGrid )
    goto LABEL_15;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                              (UnityEngine_Transform_o *)itemListGrid,
                                              0LL);
  if ( (int)itemListGrid > 0 )
    return;
  dispItemInfoList = this->fields.dispItemInfoList;
  if ( !dispItemInfoList )
    goto LABEL_15;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = dispItemInfoList->max_length;
    if ( (__int64)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
    {
      v20 = sub_B776C8(itemListGrid);
      sub_B77668(v20, 0LL);
    }
    itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
    if ( itemListGrid )
    {
      v7 = dispItemInfoList->m_Items[v5 + 1];
      mstItemInfo = this->fields.mstItemInfo;
      transform = UnityEngine_Component__get_transform(itemListGrid, 0LL);
      itemListGrid = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                  (BaseMonoBehaviour_o *)this,
                                                  mstItemInfo,
                                                  transform,
                                                  0LL,
                                                  0LL);
      if ( itemListGrid )
      {
        v10 = (UnityEngine_GameObject_o *)itemListGrid;
        v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemListGrid, 0LL);
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_one(0LL);
        if ( v11 )
        {
          UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
          itemListGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v10,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
          if ( itemListGrid )
          {
            MstHaveItemInfoComponent__setItemInfo(
              (MstHaveItemInfoComponent_o *)itemListGrid,
              v7,
              this->fields.usrGameEnt,
              v15);
            dispItemInfoList = this->fields.dispItemInfoList;
            ++v5;
            if ( dispItemInfoList )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid
    || (v16 = UnityEngine_Component__get_transform(itemListGrid, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL),
        !v16)
    || (UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
        (itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0LL) )
  {
LABEL_15:
    sub_B7769C(itemListGrid, method);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))itemListGrid->klass[1]._1.castClass)(
    itemListGrid,
    itemListGrid->klass[1]._1.declaringType);
}


void __fastcall MstProfileComponent__setMstImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UserGameEntity_o *usrGameEnt; // x8
  struct UserGameEntity_o *v13; // x8
  struct UserGameEntity_o *v14; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int64_t v16; // x21
  __int64 v17; // x22
  __int64 v18; // x22
  struct System_Byte_array *masterDataBytes; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x22
  int32_t v21; // w21
  UnityEngine_Object_o *masterFigure; // x23
  struct UIMasterFigureTextureOld_o *Prefab_31347828; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UIMasterFigureTextureOld_o *v30; // x19
  int32_t v31; // w22
  System_Action_o *v32; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_438A41E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B775C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__);
    sub_B775C4(&MstProfileComponent___c__DisplayClass75_0_TypeInfo);
    byte_438A41E = 1;
  }
  v3 = sub_B77694(MstProfileComponent___c__DisplayClass75_0_TypeInfo);
  MstProfileComponent___c__DisplayClass75_0___ctor((MstProfileComponent___c__DisplayClass75_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_32;
  *(_QWORD *)(v3 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_32;
  *(_DWORD *)(v3 + 24) = usrGameEnt->fields.genderType;
  v13 = this->fields.usrGameEnt;
  if ( !v13 )
    goto LABEL_32;
  if ( v13->fields.activeDeckId < 1 )
    goto LABEL_24;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v14 = this->fields.usrGameEnt;
  if ( !v14 )
    goto LABEL_32;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                v14->fields.activeDeckId,
                                (const MethodInfo_21FBABC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  saveNameList = Instance->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_32;
  v16 = *(_QWORD *)&saveNameList->fields._size;
  if ( v16 < 1 )
  {
LABEL_24:
    v21 = 0;
  }
  else
  {
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v18 = **(_QWORD **)(v17 + 192);
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      sub_B0F2C4(v18);
    Instance = **(DataManager_o ***)(v18 + 184);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                  v16,
                                  (const MethodInfo_21FBABC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_32;
    lookup = Instance->fields.lookup;
    masterDataBytes = Instance->fields.masterDataBytes;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = lookup;
    *(_QWORD *)&v33.fields.fakeValue = masterDataBytes;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_31347828 = MasterFigureManagerOld__CreatePrefab_31347828(
                        this->fields.mstImgBase,
                        2,
                        *(_DWORD *)(v3 + 24),
                        v21,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0LL);
    this->fields.masterFigure = Prefab_31347828;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.masterFigure,
      (System_Int32_array **)Prefab_31347828,
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
  v32 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v3, Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__, 0LL);
  if ( !v30 )
LABEL_32:
    sub_B7769C(Instance, v5);
  UIMasterFigureTextureOld__SetCharacter(v30, 2, v31, v21, v32, 0, 0LL);
}


void __fastcall MstProfileComponent__setUserBirthDay(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int64_t birthDay; // x20
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_438A420 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MstProfileComponent_closeSetBirthDayDlg__);
    this = (MstProfileComponent_o *)sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A420 = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_12;
  birthDay = usrGameEnt->fields.birthDay;
  if ( birthDay <= 0 )
  {
    this = (MstProfileComponent_o *)v2->fields.birthDayInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B7769C(this, method);
  }
  this = (MstProfileComponent_o *)v2->fields.setBirthBtn;
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v2->fields.dtBirthDay = NetworkManager__getDateTime_26207384(birthDay, 0LL);
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)v2, Method_MstProfileComponent_closeSetBirthDayDlg__, 0LL);
  MstProfileComponent__dispSetBirth(v2, v5, v6);
}


void __fastcall MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  float barExp; // [xsp+Ch] [xbp-24h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-20h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_438A423 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_350/*"#,0"*/);
    byte_438A423 = 1;
  }
  lateExp = 0LL;
  exp = 0LL;
  barExp = 0.0;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_9;
  if ( !UserGameEntity__getExpInfo(usrGameEnt, &exp, &lateExp, &barExp, 0LL) )
    return;
  userExpLb = this->fields.userExpLb;
  usrGameEnt = (UserGameEntity_o *)System_Int64__ToString_39550020(
                                     (int64_t)&lateExp,
                                     (System_String_o *)StringLiteral_350/*"#,0"*/,
                                     0LL);
  if ( !userExpLb
    || (UILabel__set_text(userExpLb, (System_String_o *)usrGameEnt, 0LL),
        (usrGameEnt = (UserGameEntity_o *)this->fields.expBar) == 0LL) )
  {
LABEL_9:
    sub_B7769C(usrGameEnt, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)usrGameEnt, barExp, 0LL);
}


void __fastcall MstProfileComponent__setUserGender(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w20
  UILabel_o *genderTypeLb; // x19

  v2 = this;
  if ( (byte_438A41F & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B775C4(&Gender_TypeInfo);
    byte_438A41F = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_9;
  genderType = usrGameEnt->fields.genderType;
  v2->fields.currentGenderType = genderType;
  genderTypeLb = v2->fields.genderTypeLb;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this = (MstProfileComponent_o *)Gender__ToName(genderType, 0LL);
  if ( !genderTypeLb )
LABEL_9:
    sub_B7769C(this, method);
  UILabel__set_text(genderTypeLb, (System_String_o *)this, 0LL);
}


void __fastcall MstProfileComponent__setUserLv(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  UIExtrusionLabel_o *userLevelLb; // x20
  System_String_o *v5; // x1
  UILabel_o *userMaxLvLb; // x19
  BalanceConfig_c *v7; // x0
  System_String_o *v8; // x1

  v2 = this;
  if ( (byte_438A422 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    this = (MstProfileComponent_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438A422 = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  userLevelLb = v2->fields.userLevelLb;
  this = (MstProfileComponent_o *)System_Int32__ToString((int)usrGameEnt + 80, 0LL);
  if ( !userLevelLb )
    goto LABEL_16;
  if ( this )
    v5 = (System_String_o *)this;
  else
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  UIExtrusionLabel__set_text(userLevelLb, v5, 0LL);
  userMaxLvLb = v2->fields.userMaxLvLb;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  this = (MstProfileComponent_o *)System_Int32__ToString((unsigned int)v7->static_fields + 24, 0LL);
  if ( !userMaxLvLb )
LABEL_16:
    sub_B7769C(this, method);
  if ( this )
    v8 = (System_String_o *)this;
  else
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(userMaxLvLb, v8, 0LL);
}


void __fastcall MstProfileComponent__setUserName(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8

  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (this = (MstProfileComponent_o *)this->fields.userNameTxt) == 0LL )
    sub_B7769C(this, method);
  UILabel__set_text((UILabel_o *)this, usrGameEnt->fields.name, 0LL);
}


void __fastcall MstProfileComponent__showChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x21
  ChangeUserNameWindow_o *v5; // x20
  ChangeUserNameWindow_CallbackFunc_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_438A426 & 1) == 0 )
  {
    sub_B775C4(&ChangeUserNameWindow_CallbackFunc_TypeInfo);
    this = (MstProfileComponent_o *)sub_B775C4(&Method_MstProfileComponent_endOpenChangeDlg__);
    byte_438A426 = 1;
  }
  klass = v2[24].klass;
  if ( !klass
    || (namespaze = (System_String_o *)klass->_1.namespaze,
        v5 = (ChangeUserNameWindow_o *)v2[2].klass,
        v6 = (ChangeUserNameWindow_CallbackFunc_o *)sub_B77694(ChangeUserNameWindow_CallbackFunc_TypeInfo),
        ChangeUserNameWindow_CallbackFunc___ctor(v6, v2, Method_MstProfileComponent_endOpenChangeDlg__, 0LL),
        !v5) )
  {
    sub_B7769C(this, method);
  }
  ChangeUserNameWindow__OpenChangeNameWindow(v5, namespaze, v6, 0LL);
}


void __fastcall MstProfileComponent__showLoginCountInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *UserId; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *Entity; // x0
  __int64 v8; // x2
  int32_t hiddenValue_high; // w21
  int hiddenValue; // w24
  __int64 v11; // x20
  __int64 v12; // x20
  int32_t NextLoginBonusDay; // w20
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v15; // x0
  UILabel_o *totalLoginLb; // x22
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v20; // x21
  __int64 v21; // x2
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438A42B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_TotalLoginMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserLoginMaster___);
    sub_B775C4(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_9468/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/);
    byte_438A42B = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  UserId = **(DataManager_o ***)(v4 + 184);
  if ( !UserId )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(UserId, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserLoginMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int64_t)UserId,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    hiddenValue = Entity->fields.id.fields.hiddenValue;
    hiddenValue_high = HIDWORD(Entity->fields.id.fields.hiddenValue);
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_B0F2C4(v11);
    v12 = **(_QWORD **)(v11 + 192);
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_B0F2C4(v12);
    UserId = **(DataManager_o ***)(v12 + 184);
    if ( !UserId )
      goto LABEL_30;
    UserId = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                UserId,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TotalLoginMaster___);
    if ( !UserId )
      goto LABEL_30;
    NextLoginBonusDay = TotalLoginMaster__getNextLoginBonusDay((TotalLoginMaster_o *)UserId, hiddenValue_high, 0LL);
  }
  else
  {
    NextLoginBonusDay = 0;
    hiddenValue_high = 0;
    hiddenValue = 0;
  }
  seqLoginLb = this->fields.seqLoginLb;
  v25 = hiddenValue;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v8);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v15, 0LL);
  if ( !seqLoginLb )
    goto LABEL_30;
  UILabel__set_text(seqLoginLb, (System_String_o *)UserId, 0LL);
  totalLoginLb = this->fields.totalLoginLb;
  v24 = hiddenValue_high;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v17);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v18, 0LL);
  if ( !totalLoginLb )
    goto LABEL_30;
  UILabel__set_text(totalLoginLb, (System_String_o *)UserId, 0LL);
  nextLoginBonusLb = this->fields.nextLoginBonusLb;
  if ( NextLoginBonusDay < 1 )
  {
    method = (const MethodInfo *)StringLiteral_1/*""*/;
    if ( nextLoginBonusLb )
      goto LABEL_28;
LABEL_30:
    sub_B7769C(UserId, method);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9468/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0LL);
  v23 = NextLoginBonusDay;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v21);
  UserId = (DataManager_o *)System_String__Format(v20, v22, 0LL);
  method = (const MethodInfo *)UserId;
  if ( !nextLoginBonusLb )
    goto LABEL_30;
LABEL_28:
  UILabel__set_text(nextLoginBonusLb, (System_String_o *)method, 0LL);
}


void __fastcall MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v4; // x1
  MyRoomBackGroundManager_o *bgManager; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int64_t recoverTime; // [xsp+0h] [xbp-20h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438A415 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A415 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    bgManager = this->fields.bgManager;
    if ( !bgManager )
      goto LABEL_13;
    MyRoomBackGroundManager__QuitBackGround(bgManager, 0LL);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  MstProfileComponent__createCmdSpellWindow(this, v13);
  MstProfileComponent__messageSetup(this, v14);
  MstProfileComponent__gradeSetup(this, v15);
  bgManager = (MyRoomBackGroundManager_o *)this->fields.usrGameEnt;
  if ( !bgManager )
LABEL_13:
    sub_B7769C(bgManager, v4);
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)bgManager, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v17);
  }
  MstProfileComponent__SetProfileData(this, v16);
}


void __fastcall MstProfileComponent__showSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x20
  InputUserBirthDayWindow_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438A42C & 1) == 0 )
  {
    sub_B775C4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MstProfileComponent_endOpenSetBirthDay__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A42C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v4 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_B77694(InputUserBirthDayWindow_CallbackFunc_TypeInfo);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    0LL);
  if ( !inputBirthDayWindow )
    sub_B7769C(v5, v6);
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent_ClickDelegate___ctor(
        MstProfileComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall MstProfileComponent_ClickDelegate__BeginInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, &v5, callback, object);
}


void __fastcall MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall MstProfileComponent_ClickDelegate__Invoke(
        MstProfileComponent_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  MstProfileComponent_ClickDelegate_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  MstProfileComponent_ClickDelegate_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  MstProfileComponent_ClickDelegate_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (MstProfileComponent_ClickDelegate_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B775F4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B775EC(v18);
      v21 = sub_B779F0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B0F4C0(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B77674(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B0F4C0(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}


void __fastcall MstProfileComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438C146 & 1) == 0 )
  {
    sub_B775C4(&MstProfileComponent___c_TypeInfo);
    byte_438C146 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(MstProfileComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MstProfileComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall MstProfileComponent___c___ctor(MstProfileComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MstProfileComponent___c___ShowMstProfile_b__62_1(
        MstProfileComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438C147 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C147 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MstProfileComponent___c__DisplayClass62_0___ctor(
        MstProfileComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MstProfileComponent___c__DisplayClass62_0___ShowMstProfile_b__0(
        MstProfileComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *endLoadCallback; // x0
  __int64 v4; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v6; // x8
  MstProfileComponent___c_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MstProfileComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_1; // x20
  Il2CppObject *v11; // x21
  struct MstProfileComponent___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438C148 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MstProfileComponent___c__ShowMstProfile_b__62_1__);
    sub_B775C4(&MstProfileComponent___c_TypeInfo);
    byte_438C148 = 1;
  }
  endLoadCallback = this->fields.endLoadCallback;
  if ( endLoadCallback )
  {
    System_Action__Invoke(endLoadCallback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    v7 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MstProfileComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo);
      v7 = MstProfileComponent___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__62_1 = static_fields->__9__62_1;
    if ( !_9__62_1 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(_9__62_1, v11, Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, 0LL);
      v12 = MstProfileComponent___c_TypeInfo->static_fields;
      v12->__9__62_1 = _9__62_1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v12->__9__62_1,
        (System_Int32_array **)_9__62_1,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( !Instance )
      sub_B7769C(v7, v4);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__62_1, 0LL);
  }
}


void __fastcall MstProfileComponent___c__DisplayClass75_0___ctor(
        MstProfileComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MstProfileComponent___c__DisplayClass75_0___setMstImg_b__0(
        MstProfileComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  MstProfileComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  MstProfileComponent__setCmdSpellInfo(_4__this, this->fields.genderType, 0LL);
}