void __fastcall MstProfileComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MstProfileComponent_c *v2; // x8

  if ( (byte_40F7DDD & 1) == 0 )
  {
    sub_B16FFC(&MstProfileComponent_TypeInfo, v1);
    byte_40F7DDD = 1;
  }
  MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME = 0.15;
  v2 = MstProfileComponent_TypeInfo;
  MstProfileComponent_TypeInfo->static_fields->MASTER_PROFILE_INFO_X_POS = 225.0;
  v2->static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void __fastcall MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_40F7DDC & 1) == 0 )
  {
    sub_B16FFC(&ImageItem_Id___TypeInfo, method);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91,
      v4);
    byte_40F7DDC = 1;
  }
  v5 = (System_Array_o *)sub_B17014(ImageItem_Id___TypeInfo, 8LL, v2);
  v12.fields.value = Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v12, 0LL);
  this->fields.dispItemInfoList = (struct ImageItem_Id_array *)v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dispItemInfoList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_40F7DD9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7DD9 = 1;
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
  __int64 v3; // x1
  UnityEngine_Object_o *myRoomFsm; // x20
  const MethodInfo *v5; // x1

  if ( (byte_40F7DC8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F7DC8 = 1;
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
    MstProfileComponent__showChangeDlg(this, v5);
  }
}


void __fastcall MstProfileComponent__OnClickSubmit(
        MstProfileComponent_o *this,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *myRoomFsm; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  PlayMakerFSM_o *v14; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  PlayMakerFSM_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_40F7DCB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, changeName);
    sub_B16FFC(&StringLiteral_3899/*"ChangeUserName"*/, v5);
    sub_B16FFC(&StringLiteral_3071/*"CLICK_SUBMIT"*/, v6);
    byte_40F7DCB = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    v14 = this->fields.myRoomFsm;
    if ( !v14
      || (Fsm = PlayMakerFSM__get_Fsm(v14, 0LL)) == 0LL
      || (variables = Fsm->fields.variables) == 0LL
      || (FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        variables,
                        (System_String_o *)StringLiteral_3899/*"ChangeUserName"*/,
                        0LL)) == 0LL
      || (FsmString->fields.value = changeName,
          sub_B16F98(
            (BattleServantConfConponent_o *)&FsmString->fields.value,
            (System_Int32_array **)changeName,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23),
          (v24 = this->fields.myRoomFsm) == 0LL) )
    {
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(v24, (System_String_o *)StringLiteral_3071/*"CLICK_SUBMIT"*/, 0LL);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.changeName,
      (System_Int32_array **)changeName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    MstProfileComponent__checkInput(this, v25);
  }
}


void __fastcall MstProfileComponent__OpenExpInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  MstExpInfoComponent_o *expInfoWindow; // x0

  if ( (byte_40F7DCD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7DCD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0LL )
    sub_B170D4();
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, v3);
}


void __fastcall MstProfileComponent__SetProfileData(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x20
  MstProfileComponent_c *v9; // x0
  float MASTER_PROFILE_INFO_X_POS; // s8
  int32_t width; // w21
  int32_t height; // w0
  float v13; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1

  if ( (byte_40F7DBE & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&MstProfileComponent_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_8946/*"MasterProfileInfo"*/, v5);
    byte_40F7DBE = 1;
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
      v8 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_8946/*"MasterProfileInfo"*/, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
      {
        v9 = MstProfileComponent_TypeInfo;
        if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MstProfileComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
          v9 = MstProfileComponent_TypeInfo;
        }
        MASTER_PROFILE_INFO_X_POS = v9->static_fields->MASTER_PROFILE_INFO_X_POS;
        width = UnityEngine_Screen__get_width(0LL);
        height = UnityEngine_Screen__get_height(0LL);
        if ( v8 )
        {
          v13 = (float)((float)(MASTER_PROFILE_INFO_X_POS * (float)width) / (float)height) / 1.7778;
          gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v13, 0LL);
          goto LABEL_21;
        }
LABEL_22:
        sub_B170D4();
      }
    }
  }
LABEL_21:
  MstProfileComponent__setMstImg(this, v6);
  MstProfileComponent__setUserName(this, v15);
  MstProfileComponent__setUserGender(this, v16);
  MstProfileComponent__setUserBirthDay(this, v17);
  MstProfileComponent__setUserLv(this, v18);
  MstProfileComponent__setUserExp(this, v19);
  MstProfileComponent__setHaveItemInfo(this, v20);
  MstProfileComponent__setCmdSpellImg(this, v21);
  MstProfileComponent__showLoginCountInfo(this, v22);
}


void __fastcall MstProfileComponent__ShowMstProfile(
        MstProfileComponent_o *this,
        MstProfileComponent_ClickDelegate_o *closeCallback,
        System_Action_o *endLoadCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_usrGameEnt; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *v32; // x23
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  struct UnityEngine_GameObject_o *titleInfoPref; // x23
  UnityEngine_GameObject_o *v37; // x23
  UnityEngine_GameObject_o *v38; // x0
  int32_t layer; // w0
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  TitleInfoControl_o **p_titleInfo; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  TitleInfoControl_o *titleInfo; // x24
  UnityEngine_Transform_o *transform; // x0
  TitleInfoControl_o *v50; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_o *v55; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x2
  MyRoomBackGroundManager_o *bgManager; // x19
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x20
  int64_t recoverTime; // [xsp+0h] [xbp-50h] BYREF
  int32_t count; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F7DB7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closeCallback);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v8);
    sub_B16FFC(&Method_MstProfileComponent_OnClickBack__, v9);
    sub_B16FFC(&MyRoomControl_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    sub_B16FFC(&Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__, v14);
    sub_B16FFC(&MstProfileComponent___c__DisplayClass62_0_TypeInfo, v15);
    byte_40F7DB7 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  v16 = sub_B170CC(MstProfileComponent___c__DisplayClass62_0_TypeInfo, closeCallback, endLoadCallback, method, v4);
  MstProfileComponent___c__DisplayClass62_0___ctor((MstProfileComponent___c__DisplayClass62_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_31;
  *(_QWORD *)(v16 + 16) = endLoadCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 16),
    (System_Int32_array **)endLoadCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  }
  v32 = MyRoomControl__getChangeMyRoomBgm(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v32, 0LL);
  MstProfileComponent__createCmdSpellWindow(this, v33);
  MstProfileComponent__messageSetup(this, v34);
  MstProfileComponent__gradeSetup(this, v35);
  titleInfoPref = this->fields.titleInfoPref;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoPref,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v38 )
    goto LABEL_31;
  layer = UnityEngine_GameObject__get_layer(v38, 0LL);
  GameObjectExtensions__SetLayerRecursively(v37, layer, 0LL);
  if ( !v37 )
    goto LABEL_31;
  Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v37,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  p_titleInfo = &this->fields.titleInfo;
  this->fields.titleInfo = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.titleInfo,
    (System_Int32_array **)Component_srcLineSprite,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  titleInfo = this->fields.titleInfo;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !titleInfo )
    goto LABEL_31;
  TitleInfoControl__SetParent(titleInfo, transform, 0LL);
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setDepth(*p_titleInfo, 40, 0LL);
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnDepth(*p_titleInfo, 41, 0LL);
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setTitleInfo(*p_titleInfo, 0LL, 1, 0LL, 45, 0LL);
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__changeTitleInfo_19612684(*p_titleInfo, 1, 45, 0, 0LL);
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnColliderEnable(*p_titleInfo, 0, 0LL);
  v50 = this->fields.titleInfo;
  v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_MstProfileComponent_OnClickBack__, 0LL);
  if ( !v50 )
    goto LABEL_31;
  TitleInfoControl__SetBackBtnAct(v50, v55, 0LL);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)closeCallback,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !*p_usrGameEnt )
    goto LABEL_31;
  if ( UserGameEntity__getCmdSpellInfo(*p_usrGameEnt, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v63);
  }
  MstProfileComponent__SetProfileData(this, v62);
  bgManager = this->fields.bgManager;
  v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
  System_Action___ctor(
    v69,
    (Il2CppObject *)v16,
    Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__,
    0LL);
  if ( !bgManager || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v69, 0LL), !*p_titleInfo) )
LABEL_31:
    sub_B170D4();
  TitleInfoControl__setBackBtnColliderEnable(*p_titleInfo, 1, 0LL);
}


void __fastcall MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7DB6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7DB6 = 1;
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
    if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
      sub_B170D4();
    v6.fields.x = 1200.0;
    v6.fields.y = 0.0;
    v6.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v6, 0LL);
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
  __int64 v4; // x4
  __int64 v8; // x1
  struct UILabel_o *userNameTxt; // x8
  System_String_o *mText; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  MstProfileComponent_o *v12; // x0
  const MethodInfo *v13; // x4
  SupportDeckNameInputMenu_o *userMessageInputDlg; // x0

  if ( (byte_40F7DDE & 1) == 0 )
  {
    sub_B16FFC(&Method_MstProfileComponent_callbackChangeMessage__, result);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40F7DDE = 1;
  }
  if ( result )
  {
    userNameTxt = this->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     result,
                                                     changeName,
                                                     method,
                                                     v4);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_MstProfileComponent_callbackChangeMessage__,
        0LL);
      MstProfileComponent__requestChangeName(v12, mText, changeName, v11, v13);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  userMessageInputDlg = (SupportDeckNameInputMenu_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg )
    goto LABEL_8;
  SupportDeckNameInputMenu__Close(userMessageInputDlg, 0LL);
}


void __fastcall MstProfileComponent__callbackChangeMessage(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  bool v5; // w0
  bool v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_40F7DD8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, result);
    byte_40F7DD8 = 1;
  }
  if ( !result
    || (v5 = System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL),
        !this->fields.userMessageInputDlg) )
  {
    sub_B170D4();
  }
  v6 = v5;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)this->fields.userMessageInputDlg, 0LL);
  if ( v6 )
    MstProfileComponent__showMstProfile(this, v7);
}


void __fastcall MstProfileComponent__callbackChangeName(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  bool v5; // w0
  struct ChangeUserNameWindow_o *changeNameWindow; // x8
  const MethodInfo *v7; // x1
  ChangeUserNameWindow_o *v8; // x0

  if ( (byte_40F7DDB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, result);
    byte_40F7DDB = 1;
  }
  if ( !result )
    goto LABEL_10;
  v5 = System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL);
  changeNameWindow = this->fields.changeNameWindow;
  if ( v5 )
  {
    if ( changeNameWindow )
    {
      ChangeUserNameWindow__Close(this->fields.changeNameWindow, 0LL);
      MstProfileComponent__showMstProfile(this, v7);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  if ( !changeNameWindow )
    goto LABEL_10;
  ChangeUserNameWindow__resetInputVal(this->fields.changeNameWindow, 0LL);
  v8 = this->fields.changeNameWindow;
  if ( !v8 )
    goto LABEL_10;
  ChangeUserNameWindow__Close(v8, 0LL);
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
  sub_B16F98(
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
  sub_B16F98(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *myRoomFsm; // x20
  PlayMakerFSM_o *v7; // x0
  System_String_o *changeName; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_String_o *message; // x21
  NetworkManager_ResultCallbackFunc_o *v15; // x22
  MstProfileComponent_o *v16; // x0
  const MethodInfo *v17; // x4

  if ( (byte_40F7DCC & 1) == 0 )
  {
    sub_B16FFC(&Method_MstProfileComponent_callbackChangeName__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_2967/*"CHECK_OK"*/, v5);
    byte_40F7DCC = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    v7 = this->fields.myRoomFsm;
    if ( v7 )
    {
      PlayMakerFSM__SendEvent(v7, (System_String_o *)StringLiteral_2967/*"CHECK_OK"*/, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  changeName = this->fields.changeName;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_11;
  message = SelfUserGame->fields.message;
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v10,
                                                 v11,
                                                 v12,
                                                 v13);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackChangeName__,
    0LL);
  MstProfileComponent__requestChangeName(v16, changeName, message, v15, v17);
}


void __fastcall MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B170D4();
  ChangeUserNameWindow__Close(changeNameWindow, 0LL);
}


void __fastcall MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_B170D4();
  InputUserBirthDayWindow__Close(inputBirthDayWindow, 0LL);
}


void __fastcall MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  struct UnityEngine_GameObject_o *cmdSpellWinPrefab; // x21
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_40F7DBC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F7DBC = 1;
  }
  p_cmdSpellWinComp = (UnityEngine_Component_o **)&this->fields.cmdSpellWinComp;
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
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)cmdSpellWinPrefab,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
          GameObjectExtensions__SetLayerRecursively(v8, layer, 0LL),
          !v8)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v8,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          *p_cmdSpellWinComp = (UnityEngine_Component_o *)Component_srcLineSprite,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.cmdSpellWinComp,
            Component_srcLineSprite,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17),
          !*p_cmdSpellWinComp) )
    {
      sub_B170D4();
    }
    v18 = UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(v18, this->fields.cmdSpellWinInfo, 0LL);
  }
}


void __fastcall MstProfileComponent__dispSetBirth(
        MstProfileComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t Month; // w22
  int32_t Day; // w21
  bool IsOpen; // w0
  bool v11; // w23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *gameObject; // x24
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  MstProfileComponent_c *v16; // x0
  UnityEngine_Component_o *genderTypeLb; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v20; // x24
  float v21; // s0
  MstProfileComponent_c *v22; // x0
  UnityEngine_GameObject_o *resetBirthBtn; // x0
  UILabel_o *birthDayLb; // x23
  System_String_o *v25; // x0
  System_String_o *v26; // x24
  System_String_o *PaddingBirthday; // x0
  Il2CppObject *v28; // x22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_GameObject_o *birthDayInfo; // x0
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8

  if ( (byte_40F7DC4 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, callback);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&MstProfileComponent_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2553/*"BIRTHDAY"*/, v7);
    byte_40F7DC4 = 1;
  }
  v32.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v32, 0LL);
  v33.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v33, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  if ( !this->fields.birthDayInfo )
    goto LABEL_32;
  v11 = IsOpen;
  transform = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0LL);
  if ( !transform )
    goto LABEL_32;
  Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0LL);
  if ( !Child )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  if ( v11 )
  {
    v16 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v16 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v16->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, RESET_BIRTH_DAY_ADJUST_PX, 0LL);
  genderTypeLb = (UnityEngine_Component_o *)this->fields.genderTypeLb;
  if ( !genderTypeLb )
    goto LABEL_32;
  v18 = UnityEngine_Component__get_transform(genderTypeLb, 0LL);
  if ( !v18 )
    goto LABEL_32;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v18, 0LL);
  if ( !parent )
    goto LABEL_32;
  v20 = UnityEngine_Component__get_gameObject(parent, 0LL);
  v21 = 0.0;
  if ( v11 )
  {
    v22 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v22 = MstProfileComponent_TypeInfo;
    }
    v21 = (float)v22->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v20, v21, 0LL);
  resetBirthBtn = this->fields.resetBirthBtn;
  if ( !resetBirthBtn )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(resetBirthBtn, v11, 0LL);
  birthDayLb = this->fields.birthDayLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2553/*"BIRTHDAY"*/, 0LL);
  if ( !this->fields.inputBirthDayWindow )
    goto LABEL_32;
  v26 = v25;
  PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(this->fields.inputBirthDayWindow, Month, 0LL);
  if ( !this->fields.inputBirthDayWindow
    || (v28 = (Il2CppObject *)PaddingBirthday,
        v29 = (Il2CppObject *)InputUserBirthDayWindow__getPaddingBirthday(this->fields.inputBirthDayWindow, Day, 0LL),
        v30 = System_String__Format_43739268(v26, v28, v29, 0LL),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, v30, 0LL), (birthDayInfo = this->fields.birthDayInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(birthDayInfo, 1, 0LL), !callback) )
  {
LABEL_32:
    sub_B170D4();
  }
  System_Action__Invoke(callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__endOpenChangeDlg(
        MstProfileComponent_o *this,
        bool res,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  PlayMakerFSM_o *v11; // x0
  ChangeUserNameWindow_o *changeNameWindow; // x0

  if ( (byte_40F7DCA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, res);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3040/*"CLICK_CANCLE"*/, v8);
    byte_40F7DCA = 1;
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
      v11 = this->fields.myRoomFsm;
      if ( v11 )
      {
        PlayMakerFSM__SendEvent(v11, (System_String_o *)StringLiteral_3040/*"CLICK_CANCLE"*/, 0LL);
        return;
      }
    }
    else
    {
      changeNameWindow = this->fields.changeNameWindow;
      if ( changeNameWindow )
      {
        ChangeUserNameWindow__Close(changeNameWindow, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  MstProfileComponent__OnClickSubmit(this, changeName, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__endOpenSetBirthDay(
        MstProfileComponent_o *this,
        bool res,
        System_Int32_array *paramList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *SingleEntity; // x0
  struct UserGameEntity_o *usrGameEnt; // x8
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  if ( (byte_40F7DD0 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, res);
    sub_B16FFC(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v9);
    sub_B16FFC(&Method_MstProfileComponent_endOpenSetBirthDay__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40F7DD0 = 1;
  }
  if ( !res )
  {
    v19 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 75) & 2) != 0 )
      v19 = (_QWORD *)sub_B17004(Method_MstProfileComponent_endOpenSetBirthDay__);
    v20 = (System_Reflection_MethodBase_o *)sub_B16FE0(v19, v19[3]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0LL);
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
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                       Master_WarQuestSelectionMaster,
                       (const MethodInfo_266F674 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
      usrGameEnt = this->fields.usrGameEnt;
      if ( usrGameEnt )
      {
        if ( SingleEntity )
        {
          SingleEntity[1].klass = (Il2CppClass *)usrGameEnt->fields.birthDay;
          goto LABEL_15;
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !paramList )
    goto LABEL_25;
  if ( paramList->max_length < 2 )
  {
    sub_B17100(v15, v16, v17);
    sub_B170A0();
  }
  MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[1], paramList->m_Items[2], v18);
}


void __fastcall MstProfileComponent__genderChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t v5; // w1

  if ( (byte_40F7DD4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7DD4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B170D4();
  if ( usrGameEnt->fields.genderType == 1 )
    v5 = 2;
  else
    v5 = 1;
  MstProfileComponent__requestGenderChange(this, v5, v3);
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
  sub_B16F98(
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
  __int64 v3; // x1
  int32_t Kind; // w0
  int32_t v5; // w20
  System_String_o *MasterProfileBgImage; // x0
  struct UISprite_o *profileBg; // x22
  System_String_o *v8; // x21
  UIAtlas_o *mAtlas; // x23
  System_String_o *MasterProfileBgLineImage; // x0
  struct UISprite_o *v11; // x8

  if ( (byte_40F7DBA & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Grade_TypeInfo, v3);
    byte_40F7DBA = 1;
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v5 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterProfileBgImage = Grade__GetMasterProfileBgImage(v5, 0LL);
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
    MasterProfileBgLineImage = Grade__GetMasterProfileBgLineImage(v5, 0LL);
    v11 = this->fields.profileBg;
    if ( !v11 )
LABEL_17:
      sub_B170D4();
    AtlasManager__SetGradeBase(this->fields.nameLine, MasterProfileBgLineImage, v11->fields.mAtlas, 0LL);
  }
}


void __fastcall MstProfileComponent__hideMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *masterFigure; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  SupportDeckNameInputMenu_o *userMessageInputDlg; // x0
  const MethodInfo *v13; // x1
  MstExpInfoComponent_o *expInfoWindow; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *itemListGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v19; // w20
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *v23; // x21
  struct UIScrollView_o *itemListScrollView; // x0

  if ( (byte_40F7DBB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7DBB = 1;
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(masterFigure, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.masterFigure;
    if ( !v4 )
      goto LABEL_26;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    this->fields.masterFigure = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.masterFigure, 0LL, v6, v7, v8, v9, v10, v11);
  }
  userMessageInputDlg = (SupportDeckNameInputMenu_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg
    || (SupportDeckNameInputMenu__Init(userMessageInputDlg, 0LL), (expInfoWindow = this->fields.expInfoWindow) == 0LL)
    || (MstExpInfoComponent__Close(expInfoWindow, v13),
        MstProfileComponent__releaseCmdSpellWindow(this, v15),
        (itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0LL)
    || (transform = UnityEngine_Component__get_transform(itemListGrid, 0LL)) == 0LL )
  {
LABEL_26:
    sub_B170D4();
  }
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v19 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      v20 = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !v20 )
        goto LABEL_26;
      v21 = UnityEngine_Component__get_transform(v20, 0LL);
      if ( !v21 )
        goto LABEL_26;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v21, v19, 0LL);
      if ( !Child )
        goto LABEL_26;
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v23, 0LL);
    }
    while ( --v19 >= 0 );
  }
  itemListScrollView = this->fields.itemListScrollView;
  if ( !itemListScrollView )
    goto LABEL_26;
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))itemListScrollView->klass->vtable._9_SetDragAmount.method)(
    itemListScrollView,
    0LL,
    itemListScrollView->klass->vtable._10_MoveRelative.methodPtr,
    0.0,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__messageSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x0
  System_String_o *message; // x20
  System_String_o *v6; // x0
  UILabel_o *v7; // x8
  UILabel_o **p_messageLabel; // x19
  struct UILabel_o *messageLabel; // t1
  float v11; // s4
  float v12; // s5
  float v13; // s6
  UILabel_o *v14; // x21
  int v15; // s0
  UILabel_o *v16; // x0
  struct UILabel_o *v17; // t1
  int v18; // s1
  int v19; // s2
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_40F7DB9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8712/*"MESSAGE_CHANGE_NO_INPUT"*/, v3);
    byte_40F7DB9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  message = SelfUserGame->fields.message;
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8712/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    messageLabel = this->fields.messageLabel;
    p_messageLabel = &this->fields.messageLabel;
    v7 = messageLabel;
    if ( messageLabel )
    {
      message = v6;
      UILabel__set_effectStyle(v7, 0, 0LL);
      v14 = *p_messageLabel;
      v15 = 1058642330;
      *(_QWORD *)&v20.fields.r = 0LL;
      *(_QWORD *)&v20.fields.b = 0LL;
      goto LABEL_12;
    }
LABEL_15:
    sub_B170D4();
  }
  v17 = this->fields.messageLabel;
  p_messageLabel = &this->fields.messageLabel;
  v16 = v17;
  if ( !v17 )
    goto LABEL_15;
  UILabel__set_effectStyle(v16, 3, 0LL);
  v14 = *p_messageLabel;
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  v15 = 1.0;
LABEL_12:
  v18 = v15;
  v19 = v15;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)&v15, v11, v12, v13, (const MethodInfo *)&v20);
  if ( !v14 )
    goto LABEL_15;
  UIWidget__set_color((UIWidget_o *)v14, v20, 0LL);
  if ( !*p_messageLabel )
    goto LABEL_15;
  UILabel__set_text(*p_messageLabel, message, 0LL);
}


void __fastcall MstProfileComponent__onClickCmdSpell(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_40F7DD2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7DD2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B170D4();
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._10_Open.method)(
    cmdSpellWinComp,
    0LL,
    cmdSpellWinComp->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall MstProfileComponent__onClickMessageChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_String_o *message; // x20
  UserMessageInputDlg_o *userMessageInputDlg; // x21
  SupportDeckNameInputMenu_CallbackFunc_o *v12; // x22

  if ( (byte_40F7DD7 & 1) == 0 )
  {
    sub_B16FFC(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MstProfileComponent__onClickMessageChange_b__104_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F7DD7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v12 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B170CC(
                                                           SupportDeckNameInputMenu_CallbackFunc_TypeInfo,
                                                           v6,
                                                           v7,
                                                           v8,
                                                           v9),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__104_0__,
          0LL),
        !userMessageInputDlg) )
  {
    sub_B170D4();
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v12, 0LL);
}


void __fastcall MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  struct CommandSpellWindowComponent_o *v4; // x0

  if ( (byte_40F7DD3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7DD3 = 1;
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
    v4 = this->fields.cmdSpellWinComp;
    if ( v4 )
    {
      ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._12_Close.method)(
        v4,
        0LL,
        v4->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall MstProfileComponent__releaseCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_cmdSpellWinComp; // x19
  UnityEngine_Object_o *v4; // x20
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // t1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7DBD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7DBD = 1;
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
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
    *p_cmdSpellWinComp = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_cmdSpellWinComp, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall MstProfileComponent__requestChangeName(
        MstProfileComponent_o *this,
        System_String_o *changedName,
        System_String_o *message,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t genderType; // w22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F7DDA & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_UserNameChangeRequest___, changedName);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40F7DDA = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  genderType = SelfUserGame->fields.genderType;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   callback,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_9:
    sub_B170D4();
  UserNameChangeRequest__beginRequest(Request_WarBoardWallAttackRequest, changedName, genderType, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__requestGenderChange(
        MstProfileComponent_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_String_o *name; // x20
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x21
  UserGameEntity_o *SelfUserGame; // x0

  if ( (byte_40F7DD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_MstProfileComponent_callbackGenderChange__, *(_QWORD *)&genderType);
    sub_B16FFC(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40F7DD5 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_10;
  name = usrGameEnt->fields.name;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&genderType,
                                                 method,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackGenderChange__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v12,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_WarBoardWallAttackRequest )
LABEL_10:
    sub_B170D4();
  UserNameChangeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    name,
    genderType,
    SelfUserGame->fields.message,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__requestSetBirthDay(
        MstProfileComponent_o *this,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_String_o *name; // x21
  int32_t genderType; // w22
  NetworkManager_ResultCallbackFunc_o *v14; // x24
  SetUserBirthDayRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F7DD1 & 1) == 0 )
  {
    sub_B16FFC(&Method_MstProfileComponent_callbackSetBirthDay__, *(_QWORD *)&month);
    sub_B16FFC(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    byte_40F7DD1 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_9;
  name = usrGameEnt->fields.name;
  genderType = usrGameEnt->fields.genderType;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&month,
                                                 *(_QWORD *)&day,
                                                 method,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackSetBirthDay__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (SetUserBirthDayRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v14,
                                                                    (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_9:
    sub_B170D4();
  SetUserBirthDayRequest__beginRequest(Request_WarBoardWallAttackRequest, name, genderType, month, day, 0LL);
}


void __fastcall MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *cmdSpellWinComp; // x20
  CommandSpellWindowComponent_o *v9; // x20
  BattleWindowComponent_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct CommandSpellWindowComponent_o *v15; // x8
  struct CommandSpellWindowComponent_o *v16; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F7DC0 & 1) == 0 )
  {
    sub_B16FFC(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_B16FFC(&Method_MstProfileComponent_onSpellWindowClose__, v4);
    sub_B16FFC(&MstProfileComponent_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F7DC0 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_17;
  MstProfileComponent__setCmdSpellInfo(this, usrGameEnt->fields.genderType, v2);
  cmdSpellWinComp = (UnityEngine_Object_o *)this->fields.cmdSpellWinComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cmdSpellWinComp, 0LL, 0LL) )
  {
    v9 = this->fields.cmdSpellWinComp;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
    }
    if ( v9 )
    {
      CommandSpellWindowComponent__InitializeCommandSpellDepth(
        v9,
        0,
        MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH,
        0LL);
      v10 = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
      if ( v10 )
      {
        BattleWindowComponent__setInitData(
          v10,
          2,
          MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL);
        v15 = this->fields.cmdSpellWinComp;
        if ( v15 )
        {
          v15->fields.mode = 0;
          v16 = this->fields.cmdSpellWinComp;
          v17 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B170CC(
                                                                       CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                                       v11,
                                                                       v12,
                                                                       v13,
                                                                       v14);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v17,
            (Il2CppObject *)this,
            Method_MstProfileComponent_onSpellWindowClose__,
            0LL);
          if ( v16 )
          {
            v16->fields.callback_close = v17;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v16->fields.callback_close,
              (System_Int32_array **)v17,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
}


void __fastcall MstProfileComponent__setCmdSpellInfo(
        MstProfileComponent_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *v5; // x0
  CommandSpellIconComponent_o *v6; // x0
  CommandSpellIconComponent_o *v7; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Component_o *cmdSpellIconMale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x0
  CommandSpellIconComponent_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  if ( genderType == 2 )
  {
    cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !cmdSpellIconMale )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
    if ( !cmdSpellIconFemale
      || (CommandSpellIconComponent__SetData(cmdSpellIconFemale, this->fields.usrGameEnt, 0LL),
          (v12 = this->fields.cmdSpellIconFemale) == 0LL)
      || (v15.fields.x = 130.0,
          v15.fields.y = 130.0,
          CommandSpellIconComponent__SetSize(v12, v15, 0LL),
          (v8 = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale) == 0LL) )
    {
LABEL_17:
      sub_B170D4();
    }
  }
  else
  {
    if ( genderType != 1 )
      return;
    v4 = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    if ( !v4 )
      goto LABEL_17;
    v5 = UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( !v5 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    v6 = this->fields.cmdSpellIconMale;
    if ( !v6 )
      goto LABEL_17;
    CommandSpellIconComponent__SetData(v6, this->fields.usrGameEnt, 0LL);
    v7 = this->fields.cmdSpellIconMale;
    if ( !v7 )
      goto LABEL_17;
    v14.fields.x = 130.0;
    v14.fields.y = 130.0;
    CommandSpellIconComponent__SetSize(v7, v14, 0LL);
    v8 = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
    if ( !v8 )
      goto LABEL_17;
  }
  v13 = UnityEngine_Component__get_gameObject(v8, 0LL);
  if ( !v13 )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(v13, 1, 0LL);
}


void __fastcall MstProfileComponent__setCmdSpellRecoverTime(
        MstProfileComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *recoverTitleLb; // x21
  System_String_o *v9; // x0
  unsigned __int64 v10; // x22
  int v11; // w23
  int v12; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_GameObject_o *cmdSpellRecTimeInfo; // x0
  int v20; // [xsp+Ch] [xbp-44h] BYREF
  int v21; // [xsp+18h] [xbp-38h] BYREF
  int v22; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40F7DBF & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, recoverTime);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3247/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_B16FFC(&StringLiteral_3249/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_40F7DBF = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3249/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, v9, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3247/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v22 = v10;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v21 = v11;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v20 = v12;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v18 = System_String__Format_43744796(v14, v15, v16, v17, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, v18, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  cmdSpellRecTimeInfo = this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(cmdSpellRecTimeInfo, 0, 0LL);
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
    sub_B170D4();
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
  __int64 v10; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w21
  TerminalPramsManager_c *v13; // x0
  struct UserGameEntity_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1

  if ( (byte_40F7DD6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F7DD6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B16F98(
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
    sub_B170D4();
  genderType = usrGameEnt->fields.genderType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E2B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F6E2B = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_PlayerGenderType_k__BackingField = genderType;
  TerminalPramsManager__PlayerGenderType_SaveData(0LL);
  v14 = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  MstProfileComponent__setUserGender(this, v21);
  MstProfileComponent__setMstImg(this, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__setHaveItemInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 childCount; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ImageItem_Id_array *dispItemInfoList; // x8
  unsigned __int64 v9; // x23
  unsigned __int64 max_length; // x9
  UnityEngine_Component_o *v11; // x0
  int32_t v12; // w20
  UnityEngine_GameObject_o *mstItemInfo; // x21
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x22
  int v18; // s0
  MstHaveItemInfoComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v22; // x3
  UnityEngine_Component_o *v23; // x0
  UnityEngine_Transform_o *v24; // x20
  int v25; // s0
  struct UIGrid_o *v28; // x0

  if ( (byte_40F7DC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___, method);
    byte_40F7DC7 = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_15;
  transform = UnityEngine_Component__get_transform(itemListGrid, 0LL);
  if ( !transform )
    goto LABEL_15;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( (int)childCount > 0 )
    return;
  dispItemInfoList = this->fields.dispItemInfoList;
  if ( !dispItemInfoList )
    goto LABEL_15;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = dispItemInfoList->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
    {
      sub_B17100(childCount, v6, v7);
      sub_B170A0();
    }
    v11 = (UnityEngine_Component_o *)this->fields.itemListGrid;
    if ( v11 )
    {
      v12 = dispItemInfoList->m_Items[v9 + 1];
      mstItemInfo = this->fields.mstItemInfo;
      v14 = UnityEngine_Component__get_transform(v11, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, mstItemInfo, v14, 0LL, 0LL);
      if ( Object )
      {
        v16 = Object;
        v17 = UnityEngine_GameObject__get_transform(Object, 0LL);
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
        if ( v17 )
        {
          UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
          Component_srcLineSprite = (MstHaveItemInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v16,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
          if ( Component_srcLineSprite )
          {
            MstHaveItemInfoComponent__setItemInfo(Component_srcLineSprite, v12, this->fields.usrGameEnt, v22);
            dispItemInfoList = this->fields.dispItemInfoList;
            ++v9;
            if ( dispItemInfoList )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
  v23 = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !v23
    || (v24 = UnityEngine_Component__get_transform(v23, 0LL),
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL),
        !v24)
    || (UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL),
        (v28 = this->fields.itemListGrid) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v28->klass->vtable._8_Reposition.method)(
    v28,
    v28->klass->vtable._9_ResetPosition.methodPtr);
}


void __fastcall MstProfileComponent__setMstImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserGameEntity_o *usrGameEnt; // x8
  struct UserGameEntity_o *v24; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *v27; // x8
  UserServantEntity_o *Entity; // x0
  int64_t currentCryptoKey; // x8
  int64_t v30; // x21
  __int64 v31; // x22
  __int64 v32; // x22
  DataManager_o *v33; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v34; // x0
  UserServantEntity_o *v35; // x0
  __int64 v36; // x21
  int64_t fakeValue; // x22
  int32_t v38; // w21
  UnityEngine_Object_o *masterFigure; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct UIMasterFigureTextureOld_o *Prefab_27244420; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UIMasterFigureTextureOld_o *v51; // x19
  int32_t v52; // w22
  System_Action_o *v53; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_40F7DC1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__, v14);
    sub_B16FFC(&MstProfileComponent___c__DisplayClass75_0_TypeInfo, v15);
    byte_40F7DC1 = 1;
  }
  v16 = sub_B170CC(MstProfileComponent___c__DisplayClass75_0_TypeInfo, method, v2, v3, v4);
  MstProfileComponent___c__DisplayClass75_0___ctor((MstProfileComponent___c__DisplayClass75_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_32;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_32;
  *(_DWORD *)(v16 + 24) = usrGameEnt->fields.genderType;
  v24 = this->fields.usrGameEnt;
  if ( !v24 )
    goto LABEL_32;
  if ( v24->fields.activeDeckId < 1 )
    goto LABEL_24;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v27 = this->fields.usrGameEnt;
  if ( !v27 )
    goto LABEL_32;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v27->fields.activeDeckId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !Entity )
    goto LABEL_32;
  currentCryptoKey = Entity->fields.userId.fields.currentCryptoKey;
  if ( !currentCryptoKey )
    goto LABEL_32;
  v30 = *(_QWORD *)(currentCryptoKey + 24);
  if ( v30 < 1 )
  {
LABEL_24:
    v38 = 0;
  }
  else
  {
    v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v32 = **(_QWORD **)(v31 + 192);
    if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
      sub_AAFCFC(v32);
    v33 = **(DataManager_o ***)(v32 + 184);
    if ( !v33 )
      goto LABEL_32;
    v34 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   v33,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !v34 )
      goto LABEL_32;
    v35 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            v34,
            v30,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !v35 )
      goto LABEL_32;
    fakeValue = v35->fields.id.fields.fakeValue;
    v36 = *(_QWORD *)&v35->fields.id.fields.inited;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v54.fields.currentCryptoKey = fakeValue;
    *(_QWORD *)&v54.fields.fakeValue = v36;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_27244420 = MasterFigureManagerOld__CreatePrefab_27244420(
                        this->fields.mstImgBase,
                        2,
                        *(_DWORD *)(v16 + 24),
                        v38,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0LL);
    this->fields.masterFigure = Prefab_27244420;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.masterFigure,
      (System_Int32_array **)Prefab_27244420,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    return;
  }
  v51 = this->fields.masterFigure;
  v52 = *(_DWORD *)(v16 + 24);
  v53 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v16,
    Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__,
    0LL);
  if ( !v51 )
LABEL_32:
    sub_B170D4();
  UIMasterFigureTextureOld__SetCharacter(v51, 2, v52, v38, v53, 0, 0LL);
}


void __fastcall MstProfileComponent__setUserBirthDay(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  int64_t birthDay; // x20
  UnityEngine_GameObject_o *setBirthBtn; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *birthDayInfo; // x0

  if ( (byte_40F7DC3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MstProfileComponent_closeSetBirthDayDlg__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F7DC3 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_12;
  birthDay = usrGameEnt->fields.birthDay;
  if ( birthDay <= 0 )
  {
    birthDayInfo = this->fields.birthDayInfo;
    if ( birthDayInfo )
    {
      UnityEngine_GameObject__SetActive(birthDayInfo, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  setBirthBtn = this->fields.setBirthBtn;
  if ( !setBirthBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(setBirthBtn, 0, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this->fields.dtBirthDay = NetworkManager__getDateTime_23685272(birthDay, 0LL);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MstProfileComponent_closeSetBirthDayDlg__, 0LL);
  MstProfileComponent__dispSetBirth(this, v12, v13);
}


void __fastcall MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  System_String_o *v5; // x0
  UIProgressBar_o *expBar; // x0
  float barExp; // [xsp+Ch] [xbp-24h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-20h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F7DC6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_340/*"#,0"*/, method);
    byte_40F7DC6 = 1;
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
  v5 = System_Int64__ToString_38278592((int64_t)&lateExp, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
  if ( !userExpLb || (UILabel__set_text(userExpLb, v5, 0LL), (expBar = (UIProgressBar_o *)this->fields.expBar) == 0LL) )
LABEL_9:
    sub_B170D4();
  UIProgressBar__set_value(expBar, barExp, 0LL);
}


void __fastcall MstProfileComponent__setUserGender(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w20
  UILabel_o *genderTypeLb; // x19
  System_String_o *v6; // x0

  if ( (byte_40F7DC2 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, method);
    byte_40F7DC2 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_9;
  genderType = usrGameEnt->fields.genderType;
  this->fields.currentGenderType = genderType;
  genderTypeLb = this->fields.genderTypeLb;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  v6 = Gender__ToName(genderType, 0LL);
  if ( !genderTypeLb )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(genderTypeLb, v6, 0LL);
}


void __fastcall MstProfileComponent__setUserLv(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UIExtrusionLabel_o *userLevelLb; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x1
  UILabel_o *userMaxLvLb; // x19
  BalanceConfig_c *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_40F7DC5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F7DC5 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  userLevelLb = this->fields.userLevelLb;
  v6 = System_Int32__ToString((int)usrGameEnt + 80, 0LL);
  if ( !userLevelLb )
    goto LABEL_16;
  if ( v6 )
    v7 = v6;
  else
    v7 = (System_String_o *)StringLiteral_1/*""*/;
  UIExtrusionLabel__set_text(userLevelLb, v7, 0LL);
  userMaxLvLb = this->fields.userMaxLvLb;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = System_Int32__ToString((unsigned int)v9->static_fields + 24, 0LL);
  if ( !userMaxLvLb )
LABEL_16:
    sub_B170D4();
  if ( v10 )
    v11 = v10;
  else
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(userMaxLvLb, v11, 0LL);
}


void __fastcall MstProfileComponent__setUserName(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8
  UILabel_o *userNameTxt; // x0

  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (userNameTxt = this->fields.userNameTxt) == 0LL )
    sub_B170D4();
  UILabel__set_text(userNameTxt, usrGameEnt->fields.name, 0LL);
}


void __fastcall MstProfileComponent__showChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_String_o *name; // x21
  ChangeUserNameWindow_o *changeNameWindow; // x20
  ChangeUserNameWindow_CallbackFunc_o *v10; // x22

  if ( (byte_40F7DC9 & 1) == 0 )
  {
    sub_B16FFC(&ChangeUserNameWindow_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MstProfileComponent_endOpenChangeDlg__, v6);
    byte_40F7DC9 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt
    || (name = usrGameEnt->fields.name,
        changeNameWindow = this->fields.changeNameWindow,
        v10 = (ChangeUserNameWindow_CallbackFunc_o *)sub_B170CC(
                                                       ChangeUserNameWindow_CallbackFunc_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4),
        ChangeUserNameWindow_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MstProfileComponent_endOpenChangeDlg__,
          0LL),
        !changeNameWindow) )
  {
    sub_B170D4();
  }
  ChangeUserNameWindow__OpenChangeNameWindow(changeNameWindow, name, v10, 0LL);
}


void __fastcall MstProfileComponent__showLoginCountInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x20
  DataManager_o *v14; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserServantEntity_o *Entity; // x0
  int32_t hiddenValue_high; // w21
  int hiddenValue; // w24
  __int64 v20; // x20
  __int64 v21; // x20
  DataManager_o *v22; // x0
  TotalLoginMaster_o *v23; // x0
  int32_t NextLoginBonusDay; // w20
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  UILabel_o *totalLoginLb; // x22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x1
  int32_t v35; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v36; // [xsp+8h] [xbp-38h] BYREF
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F7DCE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalLoginMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserLoginMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B16FFC(&StringLiteral_23433/*"{0:N0}"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    sub_B16FFC(&StringLiteral_9270/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v11);
    byte_40F7DCE = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(v13);
  v14 = **(DataManager_o ***)(v13 + 184);
  if ( !v14 )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(v14, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserLoginMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             UserId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    hiddenValue = Entity->fields.id.fields.hiddenValue;
    hiddenValue_high = HIDWORD(Entity->fields.id.fields.hiddenValue);
    v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AAFCFC(v20);
    v21 = **(_QWORD **)(v20 + 192);
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      sub_AAFCFC(v21);
    v22 = **(DataManager_o ***)(v21 + 184);
    if ( !v22 )
      goto LABEL_30;
    v23 = (TotalLoginMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v22,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalLoginMaster___);
    if ( !v23 )
      goto LABEL_30;
    NextLoginBonusDay = TotalLoginMaster__getNextLoginBonusDay(v23, hiddenValue_high, 0LL);
  }
  else
  {
    NextLoginBonusDay = 0;
    hiddenValue_high = 0;
    hiddenValue = 0;
  }
  seqLoginLb = this->fields.seqLoginLb;
  v37 = hiddenValue;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v27 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v26, 0LL);
  if ( !seqLoginLb )
    goto LABEL_30;
  UILabel__set_text(seqLoginLb, v27, 0LL);
  totalLoginLb = this->fields.totalLoginLb;
  v36 = hiddenValue_high;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v30 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v29, 0LL);
  if ( !totalLoginLb )
    goto LABEL_30;
  UILabel__set_text(totalLoginLb, v30, 0LL);
  nextLoginBonusLb = this->fields.nextLoginBonusLb;
  if ( NextLoginBonusDay < 1 )
  {
    v34 = (System_String_o *)StringLiteral_1/*""*/;
    if ( nextLoginBonusLb )
      goto LABEL_28;
LABEL_30:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9270/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0LL);
  v35 = NextLoginBonusDay;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  v34 = System_String__Format(v32, v33, 0LL);
  if ( !nextLoginBonusLb )
    goto LABEL_30;
LABEL_28:
  UILabel__set_text(nextLoginBonusLb, v34, 0LL);
}


void __fastcall MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  MyRoomBackGroundManager_o *bgManager; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UserGameEntity_o *usrGameEnt; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int64_t recoverTime; // [xsp+0h] [xbp-20h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7DB8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7DB8 = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  MstProfileComponent__createCmdSpellWindow(this, v12);
  MstProfileComponent__messageSetup(this, v13);
  MstProfileComponent__gradeSetup(this, v14);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
LABEL_13:
    sub_B170D4();
  if ( UserGameEntity__getCmdSpellInfo(usrGameEnt, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v17);
  }
  MstProfileComponent__SetProfileData(this, v16);
}


void __fastcall MstProfileComponent__showSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  InputUserBirthDayWindow_CallbackFunc_o *v10; // x21

  if ( (byte_40F7DCF & 1) == 0 )
  {
    sub_B16FFC(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MstProfileComponent_endOpenSetBirthDay__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F7DCF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v10 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_B170CC(
                                                    InputUserBirthDayWindow_CallbackFunc_TypeInfo,
                                                    v6,
                                                    v7,
                                                    v8,
                                                    v9);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    0LL);
  if ( !inputBirthDayWindow )
    sub_B170D4();
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v10, 0LL);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall MstProfileComponent_ClickDelegate__Invoke(
        MstProfileComponent_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  MstProfileComponent_ClickDelegate_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  MstProfileComponent_ClickDelegate_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  MstProfileComponent_ClickDelegate_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (MstProfileComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}


void __fastcall MstProfileComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8640 & 1) == 0 )
  {
    sub_B16FFC(&MstProfileComponent___c_TypeInfo, v1);
    byte_40F8640 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MstProfileComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MstProfileComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F8641 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F8641 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *endLoadCallback; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v13; // x8
  MstProfileComponent___c_c *v14; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MstProfileComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_1; // x20
  Il2CppObject *v18; // x21
  struct MstProfileComponent___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F8642 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, v5);
    sub_B16FFC(&MstProfileComponent___c_TypeInfo, v6);
    byte_40F8642 = 1;
  }
  endLoadCallback = this->fields.endLoadCallback;
  if ( endLoadCallback )
  {
    System_Action__Invoke(endLoadCallback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    v14 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MstProfileComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo);
      v14 = MstProfileComponent___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__62_1 = static_fields->__9__62_1;
    if ( !_9__62_1 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(_9__62_1, v18, Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, 0LL);
      v19 = MstProfileComponent___c_TypeInfo->static_fields;
      v19->__9__62_1 = _9__62_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v19->__9__62_1,
        (System_Int32_array **)_9__62_1,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( !Instance )
      sub_B170D4();
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
    sub_B170D4();
  MstProfileComponent__setCmdSpellInfo(_4__this, this->fields.genderType, 0LL);
}