void __fastcall MstProfileComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MstProfileComponent_c *v2; // x8

  if ( (byte_4185BFF & 1) == 0 )
  {
    sub_B2C35C(&MstProfileComponent_TypeInfo, v1);
    byte_4185BFF = 1;
  }
  MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME = 0.15;
  v2 = MstProfileComponent_TypeInfo;
  MstProfileComponent_TypeInfo->static_fields->MASTER_PROFILE_INFO_X_POS = 225.0;
  v2->static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void __fastcall MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Array_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4185BFE & 1) == 0 )
  {
    sub_B2C35C(&ImageItem_Id___TypeInfo, method);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91,
      v3);
    byte_4185BFE = 1;
  }
  v4 = (System_Array_o *)sub_B2C374(ImageItem_Id___TypeInfo, 8LL);
  v11.fields.value = Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v4, v11, 0LL);
  this->fields.dispItemInfoList = (struct ImageItem_Id_array *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dispItemInfoList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_4185BFB & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185BFB = 1;
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

  if ( (byte_4185BEA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4185BEA = 1;
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
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  char *Fsm; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1

  if ( (byte_4185BED & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, changeName);
    sub_B2C35C(&StringLiteral_3914/*"ChangeUserName"*/, v5);
    sub_B2C35C(&StringLiteral_3080/*"CLICK_SUBMIT"*/, v6);
    byte_4185BED = 1;
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
                          (System_String_o *)StringLiteral_3914/*"ChangeUserName"*/,
                          0LL)) == 0LL
      || (*((_QWORD *)Fsm + 7) = changeName,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(Fsm + 56),
            (System_Int32_array **)changeName,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21),
          (Fsm = (char *)this->fields.myRoomFsm) == 0LL) )
    {
      sub_B2C434(Fsm, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, (System_String_o *)StringLiteral_3080/*"CLICK_SUBMIT"*/, 0LL);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.changeName,
      (System_Int32_array **)changeName,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    MstProfileComponent__checkInput(this, v22);
  }
}


void __fastcall MstProfileComponent__OpenExpInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstExpInfoComponent_o *expInfoWindow; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct UserGameEntity_o *usrGameEnt; // x8

  if ( (byte_4185BEF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185BEF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0LL )
    sub_B2C434(expInfoWindow, v4);
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, v5);
}


void __fastcall MstProfileComponent__SetProfileData(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x20
  MstProfileComponent_c *v10; // x0
  float MASTER_PROFILE_INFO_X_POS; // s8
  int32_t width; // w21
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

  if ( (byte_4185BE0 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    sub_B2C35C(&MstProfileComponent_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_8976/*"MasterProfileInfo"*/, v5);
    byte_4185BE0 = 1;
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
      v9 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_8976/*"MasterProfileInfo"*/, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
      {
        v10 = MstProfileComponent_TypeInfo;
        if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MstProfileComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
          v10 = MstProfileComponent_TypeInfo;
        }
        MASTER_PROFILE_INFO_X_POS = v10->static_fields->MASTER_PROFILE_INFO_X_POS;
        width = UnityEngine_Screen__get_width(0LL);
        transform = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0LL);
        if ( v9 )
        {
          v13 = (float)((float)(MASTER_PROFILE_INFO_X_POS * (float)width) / (float)(int)transform) / 1.7778;
          gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v13, 0LL);
          goto LABEL_21;
        }
LABEL_22:
        sub_B2C434(transform, v8);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MyRoomControl_c *v32; // x0
  System_String_o *v33; // x23
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  struct UnityEngine_GameObject_o *titleInfoPref; // x23
  UnityEngine_GameObject_o *v38; // x23
  int32_t layer; // w0
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  struct TitleInfoControl_o **p_titleInfo; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  TitleInfoControl_o *titleInfo; // x24
  TitleInfoControl_o *v49; // x24
  System_Action_o *v50; // x25
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x2
  MyRoomBackGroundManager_o *bgManager; // x19
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x3
  int64_t recoverTime; // [xsp+0h] [xbp-50h] BYREF
  int32_t count; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4185BD9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, closeCallback);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v7);
    sub_B2C35C(&Method_MstProfileComponent_OnClickBack__, v8);
    sub_B2C35C(&MyRoomControl_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    sub_B2C35C(&Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__, v13);
    sub_B2C35C(&MstProfileComponent___c__DisplayClass62_0_TypeInfo, v14);
    byte_4185BD9 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  v15 = sub_B2C42C(MstProfileComponent___c__DisplayClass62_0_TypeInfo);
  MstProfileComponent___c__DisplayClass62_0___ctor((MstProfileComponent___c__DisplayClass62_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_31;
  *(_QWORD *)(v15 + 16) = endLoadCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)endLoadCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  }
  v33 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v32);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v33, 0LL);
  MstProfileComponent__createCmdSpellWindow(this, v34);
  MstProfileComponent__messageSetup(this, v35);
  MstProfileComponent__gradeSetup(this, v36);
  titleInfoPref = this->fields.titleInfoPref;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoPref,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  GameObjectExtensions__SetLayerRecursively(v38, layer, 0LL);
  if ( !v38 )
    goto LABEL_31;
  Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v38,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  p_titleInfo = &this->fields.titleInfo;
  this->fields.titleInfo = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.titleInfo,
    (System_Int32_array **)Component_srcLineSprite,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
  TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)gameObject, 1, 45, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 0, 0LL);
  v49 = this->fields.titleInfo;
  v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_MstProfileComponent_OnClickBack__, 0LL);
  if ( !v49 )
    goto LABEL_31;
  TitleInfoControl__SetBackBtnAct(v49, v50, 0LL);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)closeCallback,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  gameObject = (UnityEngine_GameObject_o *)*p_usrGameEnt;
  if ( !*p_usrGameEnt )
    goto LABEL_31;
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)gameObject, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v58);
  }
  MstProfileComponent__SetProfileData(this, v57);
  bgManager = this->fields.bgManager;
  v60 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v15,
    Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__,
    0LL);
  if ( !bgManager
    || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v60, v61),
        (gameObject = (UnityEngine_GameObject_o *)*p_titleInfo) == 0LL) )
  {
LABEL_31:
    sub_B2C434(gameObject, v17);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 1, 0LL);
}


void __fastcall MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185BD8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185BD8 = 1;
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
      sub_B2C434(gameObject, v5);
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
  __int64 v7; // x1
  struct UILabel_o *userNameTxt; // x8
  System_String_o *mText; // x21
  NetworkManager_ResultCallbackFunc_o *v10; // x22
  MstProfileComponent_o *v11; // x0
  const MethodInfo *v12; // x4

  v6 = this;
  if ( (byte_4185C00 & 1) == 0 )
  {
    sub_B2C35C(&Method_MstProfileComponent_callbackChangeMessage__, result);
    this = (MstProfileComponent_o *)sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4185C00 = 1;
  }
  if ( result )
  {
    userNameTxt = v6->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v6,
        Method_MstProfileComponent_callbackChangeMessage__,
        0LL);
      MstProfileComponent__requestChangeName(v11, mText, changeName, v10, v12);
      return;
    }
LABEL_8:
    sub_B2C434(this, result);
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
  if ( (byte_4185BFA & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B2C35C(&StringLiteral_21218/*"ok"*/, result);
    byte_4185BFA = 1;
  }
  if ( !result
    || (this = (MstProfileComponent_o *)System_String__Equals_44292872(
                                          result,
                                          (System_String_o *)StringLiteral_21218/*"ok"*/,
                                          0LL),
        !v4->fields.userMessageInputDlg) )
  {
    sub_B2C434(this, result);
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
  if ( (byte_4185BFD & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B2C35C(&StringLiteral_21218/*"ok"*/, result);
    byte_4185BFD = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (MstProfileComponent_o *)System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL);
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
    sub_B2C434(this, result);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  __int64 v7; // x1
  PlayMakerFSM_o *SelfUserGame; // x0
  System_String_o *changeName; // x20
  System_String_o *monitor; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  MstProfileComponent_o *v12; // x0
  const MethodInfo *v13; // x4

  if ( (byte_4185BEE & 1) == 0 )
  {
    sub_B2C35C(&Method_MstProfileComponent_callbackChangeName__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_2976/*"CHECK_OK"*/, v5);
    byte_4185BEE = 1;
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
      PlayMakerFSM__SendEvent(SelfUserGame, (System_String_o *)StringLiteral_2976/*"CHECK_OK"*/, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(SelfUserGame, v7);
  }
  changeName = this->fields.changeName;
  SelfUserGame = (PlayMakerFSM_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_11;
  monitor = (System_String_o *)SelfUserGame[4].monitor;
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackChangeName__,
    0LL);
  MstProfileComponent__requestChangeName(v12, changeName, monitor, v11, v13);
}


void __fastcall MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B2C434(0LL, method);
  ChangeUserNameWindow__Close(changeNameWindow, 0LL);
}


void __fastcall MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_B2C434(0LL, method);
  InputUserBirthDayWindow__Close(inputBirthDayWindow, 0LL);
}


void __fastcall MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct CommandSpellWindowComponent_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  struct UnityEngine_GameObject_o *cmdSpellWinPrefab; // x21
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t layer; // w0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_4185BDE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4185BDE = 1;
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
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)cmdSpellWinPrefab,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
          GameObjectExtensions__SetLayerRecursively(v8, layer, 0LL),
          !v8)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v8,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          *p_cmdSpellWinComp = (struct CommandSpellWindowComponent_o *)Component_srcLineSprite,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.cmdSpellWinComp,
            Component_srcLineSprite,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18),
          (gameObject = (UnityEngine_GameObject_o *)*p_cmdSpellWinComp) == 0LL) )
    {
      sub_B2C434(gameObject, v10);
    }
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_31331952(v19, this->fields.cmdSpellWinInfo, 0LL);
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
  UnityEngine_Transform_o *IsOpen; // x0
  __int64 v11; // x1
  char v12; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  MstProfileComponent_c *v15; // x0
  UnityEngine_GameObject_o *v16; // x24
  float v17; // s0
  MstProfileComponent_c *v18; // x0
  UILabel_o *birthDayLb; // x23
  System_String_o *v20; // x24
  Il2CppObject *v21; // x22
  Il2CppObject *PaddingBirthday; // x0
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8

  if ( (byte_4185BE6 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, callback);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&MstProfileComponent_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_2564/*"BIRTHDAY"*/, v7);
    byte_4185BE6 = 1;
  }
  v23.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v23, 0LL);
  v24.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v24, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (UnityEngine_Transform_o *)CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  if ( !this->fields.birthDayInfo )
    goto LABEL_32;
  v12 = (char)IsOpen;
  IsOpen = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  IsOpen = UnityEngine_Transform__GetChild(IsOpen, 0, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  if ( (v12 & 1) != 0 )
  {
    v15 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v15 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v15->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
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
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  v17 = 0.0;
  if ( (v12 & 1) != 0 )
  {
    v18 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v18 = MstProfileComponent_TypeInfo;
    }
    v17 = (float)v18->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v16, v17, 0LL);
  IsOpen = (UnityEngine_Transform_o *)this->fields.resetBirthBtn;
  if ( !IsOpen )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v12 & 1, 0LL);
  birthDayLb = this->fields.birthDayLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsOpen = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2564/*"BIRTHDAY"*/, 0LL);
  if ( !this->fields.inputBirthDayWindow )
    goto LABEL_32;
  v20 = (System_String_o *)IsOpen;
  IsOpen = (UnityEngine_Transform_o *)InputUserBirthDayWindow__getPaddingBirthday(
                                        this->fields.inputBirthDayWindow,
                                        Month,
                                        0LL);
  if ( !this->fields.inputBirthDayWindow
    || (v21 = (Il2CppObject *)IsOpen,
        PaddingBirthday = (Il2CppObject *)InputUserBirthDayWindow__getPaddingBirthday(
                                            this->fields.inputBirthDayWindow,
                                            Day,
                                            0LL),
        IsOpen = (UnityEngine_Transform_o *)System_String__Format_44301068(v20, v21, PaddingBirthday, 0LL),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, (System_String_o *)IsOpen, 0LL),
        (IsOpen = (UnityEngine_Transform_o *)this->fields.birthDayInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 1, 0LL), !callback) )
  {
LABEL_32:
    sub_B2C434(IsOpen, v11);
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
  __int64 v11; // x1
  PlayMakerFSM_o *changeNameWindow; // x0

  if ( (byte_4185BEC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, res);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3049/*"CLICK_CANCLE"*/, v8);
    byte_4185BEC = 1;
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
        PlayMakerFSM__SendEvent(changeNameWindow, (System_String_o *)StringLiteral_3049/*"CLICK_CANCLE"*/, 0LL);
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
    sub_B2C434(changeNameWindow, v11);
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
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0
  __int64 v13; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  const MethodInfo *v15; // x3
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x0

  if ( (byte_4185BF2 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, res);
    sub_B2C35C(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v9);
    sub_B2C35C(&Method_MstProfileComponent_endOpenSetBirthDay__, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    byte_4185BF2 = 1;
  }
  if ( !res )
  {
    v16 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 75) & 2) != 0 )
      v16 = (_QWORD *)sub_B2C364(Method_MstProfileComponent_endOpenSetBirthDay__);
    v17 = (System_Reflection_MethodBase_o *)sub_B2C340(v16, v16[3]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0LL);
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
    inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    if ( inputBirthDayWindow )
    {
      inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)inputBirthDayWindow,
                                                           (const MethodInfo_24E43BC *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
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
    sub_B2C434(inputBirthDayWindow, v13);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !paramList )
    goto LABEL_25;
  if ( paramList->max_length < 2 )
  {
    v18 = sub_B2C460(inputBirthDayWindow);
    sub_B2C400(v18, 0LL);
  }
  MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[1], paramList->m_Items[2], v15);
}


void __fastcall MstProfileComponent__genderChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t v7; // w1

  if ( (byte_4185BF6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185BF6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B2C434(v3, v4);
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
  sub_B2C2F8(
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
  __int64 v7; // x1
  struct UISprite_o *profileBg; // x22
  System_String_o *v9; // x21
  UIAtlas_o *mAtlas; // x23
  struct UISprite_o *v11; // x8

  if ( (byte_4185BDC & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Grade_TypeInfo, v3);
    byte_4185BDC = 1;
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
    v9 = MasterProfileBgImage;
    mAtlas = profileBg->fields.mAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(profileBg, v9, mAtlas, 0LL);
    MasterProfileBgImage = Grade__GetMasterProfileBgLineImage(v5, 0LL);
    v11 = this->fields.profileBg;
    if ( !v11 )
LABEL_17:
      sub_B2C434(MasterProfileBgImage, v7);
    AtlasManager__SetGradeBase(this->fields.nameLine, MasterProfileBgImage, v11->fields.mAtlas, 0LL);
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

  if ( (byte_4185BDD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185BDD = 1;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    this->fields.masterFigure = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.masterFigure, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_B2C434(userMessageInputDlg, v4);
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
      UnityEngine_Object__Destroy_35314896(v16, 0LL);
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
  __int64 v3; // x1
  UILabel_o *SelfUserGame; // x0
  __int64 v5; // x1
  System_String_o *geometry; // x20
  UILabel_o *v7; // x8
  struct UILabel_o **p_messageLabel; // x19
  struct UILabel_o *messageLabel; // t1
  float v11; // s4
  float v12; // s5
  float v13; // s6
  UIWidget_o *v14; // x21
  int v15; // s0
  struct UILabel_o *v16; // t1
  int v17; // s1
  int v18; // s2
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4185BDB & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8741/*"MESSAGE_CHANGE_NO_INPUT"*/, v3);
    byte_4185BDB = 1;
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
    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8741/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    messageLabel = this->fields.messageLabel;
    p_messageLabel = &this->fields.messageLabel;
    v7 = messageLabel;
    if ( messageLabel )
    {
      geometry = (System_String_o *)SelfUserGame;
      UILabel__set_effectStyle(v7, 0, 0LL);
      v14 = (UIWidget_o *)*p_messageLabel;
      v15 = 1058642330;
      *(_QWORD *)&v19.fields.r = 0LL;
      *(_QWORD *)&v19.fields.b = 0LL;
      goto LABEL_12;
    }
LABEL_15:
    sub_B2C434(SelfUserGame, v5);
  }
  v16 = this->fields.messageLabel;
  p_messageLabel = &this->fields.messageLabel;
  SelfUserGame = v16;
  if ( !v16 )
    goto LABEL_15;
  UILabel__set_effectStyle(SelfUserGame, 3, 0LL);
  v14 = (UIWidget_o *)*p_messageLabel;
  *(_QWORD *)&v19.fields.r = 0LL;
  *(_QWORD *)&v19.fields.b = 0LL;
  v15 = 1.0;
LABEL_12:
  v17 = v15;
  v18 = v15;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)&v15, v11, v12, v13, (const MethodInfo *)&v19);
  if ( !v14 )
    goto LABEL_15;
  UIWidget__set_color(v14, v19, 0LL);
  SelfUserGame = *p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_15;
  UILabel__set_text(SelfUserGame, geometry, 0LL);
}


void __fastcall MstProfileComponent__onClickCmdSpell(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4185BF4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185BF4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B2C434(0LL, v3);
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
  System_String_o *message; // x20
  UserMessageInputDlg_o *userMessageInputDlg; // x21
  SupportDeckNameInputMenu_CallbackFunc_o *v9; // x22

  if ( (byte_4185BF9 & 1) == 0 )
  {
    sub_B2C35C(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_MstProfileComponent__onClickMessageChange_b__104_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185BF9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B2C42C(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__104_0__,
          0LL),
        !userMessageInputDlg) )
  {
    sub_B2C434(SelfUserGame, v6);
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v9, 0LL);
}


void __fastcall MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4185BF5 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185BF5 = 1;
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
    sub_B2C434(cmdSpellWinComp, method);
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

  if ( (byte_4185BDF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185BDF = 1;
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
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
    *p_cmdSpellWinComp = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_cmdSpellWinComp, 0LL, v8, v9, v10, v11, v12, v13);
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
  UserNameChangeRequest_o *SelfUserGame; // x0
  __int64 v10; // x1
  int32_t paramInteger_high; // w22

  if ( (byte_4185BFC & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_UserNameChangeRequest___, changedName);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    byte_4185BFC = 1;
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
                                              (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !SelfUserGame )
LABEL_9:
    sub_B2C434(SelfUserGame, v10);
  UserNameChangeRequest__beginRequest(SelfUserGame, changedName, paramInteger_high, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__requestGenderChange(
        MstProfileComponent_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x20
  NetworkManager_ResultCallbackFunc_o *v10; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4185BF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_MstProfileComponent_callbackGenderChange__, *(_QWORD *)&genderType);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    this = (MstProfileComponent_o *)sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4185BF7 = 1;
  }
  klass = v4[24].klass;
  if ( !klass )
    goto LABEL_10;
  namespaze = (System_String_o *)klass->_1.namespaze;
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, v4, Method_MstProfileComponent_callbackGenderChange__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v10,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  this = (MstProfileComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this || !Request_WarBoardWallAttackRequest )
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&genderType);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x21
  int32_t castClass_high; // w22
  NetworkManager_ResultCallbackFunc_o *v13; // x24

  v6 = (Il2CppObject *)this;
  if ( (byte_4185BF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_MstProfileComponent_callbackSetBirthDay__, *(_QWORD *)&month);
    sub_B2C35C(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    this = (MstProfileComponent_o *)sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4185BF3 = 1;
  }
  klass = v6[24].klass;
  if ( !klass )
    goto LABEL_9;
  namespaze = (System_String_o *)klass->_1.namespaze;
  castClass_high = HIDWORD(klass->_1.castClass);
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v13, v6, Method_MstProfileComponent_callbackSetBirthDay__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (MstProfileComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                    v13,
                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !this )
LABEL_9:
    sub_B2C434(this, *(_QWORD *)&month);
  SetUserBirthDayRequest__beginRequest((SetUserBirthDayRequest_o *)this, namespaze, castClass_high, month, day, 0LL);
}


void __fastcall MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *cmdSpellWinComp; // x20
  CommandSpellWindowComponent_o *v9; // x20
  struct CommandSpellWindowComponent_o *v10; // x8
  struct CommandSpellWindowComponent_o *v11; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v3 = this;
  if ( (byte_4185BE2 & 1) == 0 )
  {
    sub_B2C35C(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_B2C35C(&Method_MstProfileComponent_onSpellWindowClose__, v4);
    sub_B2C35C(&MstProfileComponent_TypeInfo, v5);
    this = (MstProfileComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4185BE2 = 1;
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
    v9 = v3->fields.cmdSpellWinComp;
    this = (MstProfileComponent_o *)MstProfileComponent_TypeInfo;
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
      this = (MstProfileComponent_o *)v3->fields.cmdSpellWinComp;
      if ( this )
      {
        BattleWindowComponent__setInitData(
          (BattleWindowComponent_o *)this,
          2,
          MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL);
        v10 = v3->fields.cmdSpellWinComp;
        if ( v10 )
        {
          v10->fields.mode = 0;
          v11 = v3->fields.cmdSpellWinComp;
          v12 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B2C42C(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v12,
            (Il2CppObject *)v3,
            Method_MstProfileComponent_onSpellWindowClose__,
            0LL);
          if ( v11 )
          {
            v11->fields.callback_close = v12;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v11->fields.callback_close,
              (System_Int32_array **)v12,
              v13,
              v14,
              v15,
              v16,
              v17,
              v18);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B2C434(this, method);
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
      sub_B2C434(cmdSpellIconMale, *(_QWORD *)&genderType);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v10; // x22
  int v11; // w23
  int v12; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  int v19; // [xsp+18h] [xbp-38h] BYREF
  int v20; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4185BE1 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, recoverTime);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3256/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_B2C35C(&StringLiteral_3258/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_4185BE1 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3258/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3256/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v20 = v10;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v19 = v11;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      v18 = v12;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      cmdSpellRecTimeInfo = System_String__Format_44306596(v14, v15, v16, v17, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B2C434(cmdSpellRecTimeInfo, recoverTime);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_4185BF8 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4185BF8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B2C2F8(
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
    sub_B2C434(v10, v11);
  genderType = usrGameEnt->fields.genderType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418471A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    byte_418471A = 1;
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
  sub_B2C2F8(
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

  if ( (byte_4185BE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___, method);
    byte_4185BE9 = 1;
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
      v20 = sub_B2C460(itemListGrid);
      sub_B2C400(v20, 0LL);
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
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
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
    sub_B2C434(itemListGrid, method);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))itemListGrid->klass[1]._1.castClass)(
    itemListGrid,
    itemListGrid->klass[1]._1.declaringType);
}


void __fastcall MstProfileComponent__setMstImg(MstProfileComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x20
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UserGameEntity_o *usrGameEnt; // x8
  struct UserGameEntity_o *v23; // x8
  struct UserGameEntity_o *v24; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int64_t v26; // x21
  __int64 v27; // x22
  __int64 v28; // x22
  struct System_Byte_array *masterDataBytes; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x22
  int32_t v31; // w21
  UnityEngine_Object_o *masterFigure; // x23
  struct UIMasterFigureTextureOld_o *Prefab_21041272; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UIMasterFigureTextureOld_o *v40; // x19
  int32_t v41; // w22
  System_Action_o *v42; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4185BE3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__, v11);
    sub_B2C35C(&MstProfileComponent___c__DisplayClass75_0_TypeInfo, v12);
    byte_4185BE3 = 1;
  }
  v13 = sub_B2C42C(MstProfileComponent___c__DisplayClass75_0_TypeInfo);
  MstProfileComponent___c__DisplayClass75_0___ctor((MstProfileComponent___c__DisplayClass75_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_32;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_32;
  *(_DWORD *)(v13 + 24) = usrGameEnt->fields.genderType;
  v23 = this->fields.usrGameEnt;
  if ( !v23 )
    goto LABEL_32;
  if ( v23->fields.activeDeckId < 1 )
    goto LABEL_24;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v24 = this->fields.usrGameEnt;
  if ( !v24 )
    goto LABEL_32;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                v24->fields.activeDeckId,
                                (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  saveNameList = Instance->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_32;
  v26 = *(_QWORD *)&saveNameList->fields._size;
  if ( v26 < 1 )
  {
LABEL_24:
    v31 = 0;
  }
  else
  {
    v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v28 = **(_QWORD **)(v27 + 192);
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      sub_AC505C(v28);
    Instance = **(DataManager_o ***)(v28 + 184);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                  v26,
                                  (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_32;
    lookup = Instance->fields.lookup;
    masterDataBytes = Instance->fields.masterDataBytes;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = lookup;
    *(_QWORD *)&v43.fields.fakeValue = masterDataBytes;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_21041272 = MasterFigureManagerOld__CreatePrefab_21041272(
                        this->fields.mstImgBase,
                        2,
                        *(_DWORD *)(v13 + 24),
                        v31,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0LL);
    this->fields.masterFigure = Prefab_21041272;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.masterFigure,
      (System_Int32_array **)Prefab_21041272,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    return;
  }
  v40 = this->fields.masterFigure;
  v41 = *(_DWORD *)(v13 + 24);
  v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v13,
    Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__,
    0LL);
  if ( !v40 )
LABEL_32:
    sub_B2C434(Instance, v15);
  UIMasterFigureTextureOld__SetCharacter(v40, 2, v41, v31, v42, 0, 0LL);
}


void __fastcall MstProfileComponent__setUserBirthDay(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  int64_t birthDay; // x20
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4185BE5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MstProfileComponent_closeSetBirthDayDlg__, v3);
    this = (MstProfileComponent_o *)sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4185BE5 = 1;
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
    sub_B2C434(this, method);
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
  v2->fields.dtBirthDay = NetworkManager__getDateTime_26271468(birthDay, 0LL);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v2, Method_MstProfileComponent_closeSetBirthDayDlg__, 0LL);
  MstProfileComponent__dispSetBirth(v2, v7, v8);
}


void __fastcall MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  float barExp; // [xsp+Ch] [xbp-24h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-20h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4185BE8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, method);
    byte_4185BE8 = 1;
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
  usrGameEnt = (UserGameEntity_o *)System_Int64__ToString_38384200(
                                     (int64_t)&lateExp,
                                     (System_String_o *)StringLiteral_340/*"#,0"*/,
                                     0LL);
  if ( !userExpLb
    || (UILabel__set_text(userExpLb, (System_String_o *)usrGameEnt, 0LL),
        (usrGameEnt = (UserGameEntity_o *)this->fields.expBar) == 0LL) )
  {
LABEL_9:
    sub_B2C434(usrGameEnt, method);
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
  if ( (byte_4185BE4 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B2C35C(&Gender_TypeInfo, method);
    byte_4185BE4 = 1;
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
    sub_B2C434(this, method);
  UILabel__set_text(genderTypeLb, (System_String_o *)this, 0LL);
}


void __fastcall MstProfileComponent__setUserLv(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  __int64 v3; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UIExtrusionLabel_o *userLevelLb; // x20
  System_String_o *v6; // x1
  UILabel_o *userMaxLvLb; // x19
  BalanceConfig_c *v8; // x0
  System_String_o *v9; // x1

  v2 = this;
  if ( (byte_4185BE7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    this = (MstProfileComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4185BE7 = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  userLevelLb = v2->fields.userLevelLb;
  this = (MstProfileComponent_o *)System_Int32__ToString((int)usrGameEnt + 80, 0LL);
  if ( !userLevelLb )
    goto LABEL_16;
  if ( this )
    v6 = (System_String_o *)this;
  else
    v6 = (System_String_o *)StringLiteral_1/*""*/;
  UIExtrusionLabel__set_text(userLevelLb, v6, 0LL);
  userMaxLvLb = v2->fields.userMaxLvLb;
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  this = (MstProfileComponent_o *)System_Int32__ToString((unsigned int)v8->static_fields + 24, 0LL);
  if ( !userMaxLvLb )
LABEL_16:
    sub_B2C434(this, method);
  if ( this )
    v9 = (System_String_o *)this;
  else
    v9 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(userMaxLvLb, v9, 0LL);
}


void __fastcall MstProfileComponent__setUserName(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8

  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (this = (MstProfileComponent_o *)this->fields.userNameTxt) == 0LL )
    sub_B2C434(this, method);
  UILabel__set_text((UILabel_o *)this, usrGameEnt->fields.name, 0LL);
}


void __fastcall MstProfileComponent__showChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x21
  ChangeUserNameWindow_o *v6; // x20
  ChangeUserNameWindow_CallbackFunc_o *v7; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4185BEB & 1) == 0 )
  {
    sub_B2C35C(&ChangeUserNameWindow_CallbackFunc_TypeInfo, method);
    this = (MstProfileComponent_o *)sub_B2C35C(&Method_MstProfileComponent_endOpenChangeDlg__, v3);
    byte_4185BEB = 1;
  }
  klass = v2[24].klass;
  if ( !klass
    || (namespaze = (System_String_o *)klass->_1.namespaze,
        v6 = (ChangeUserNameWindow_o *)v2[2].klass,
        v7 = (ChangeUserNameWindow_CallbackFunc_o *)sub_B2C42C(ChangeUserNameWindow_CallbackFunc_TypeInfo),
        ChangeUserNameWindow_CallbackFunc___ctor(v7, v2, Method_MstProfileComponent_endOpenChangeDlg__, 0LL),
        !v6) )
  {
    sub_B2C434(this, method);
  }
  ChangeUserNameWindow__OpenChangeNameWindow(v6, namespaze, v7, 0LL);
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
  DataManager_o *UserId; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *Entity; // x0
  int32_t hiddenValue_high; // w21
  int hiddenValue; // w24
  __int64 v19; // x20
  __int64 v20; // x20
  int32_t NextLoginBonusDay; // w20
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v23; // x0
  UILabel_o *totalLoginLb; // x22
  Il2CppObject *v25; // x0
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  int32_t v29; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4185BF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalLoginMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserLoginMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_9300/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v11);
    byte_4185BF0 = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AC505C(v13);
  UserId = **(DataManager_o ***)(v13 + 184);
  if ( !UserId )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(UserId, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserLoginMaster___);
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
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    hiddenValue = Entity->fields.id.fields.hiddenValue;
    hiddenValue_high = HIDWORD(Entity->fields.id.fields.hiddenValue);
    v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AC505C(v19);
    v20 = **(_QWORD **)(v19 + 192);
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AC505C(v20);
    UserId = **(DataManager_o ***)(v20 + 184);
    if ( !UserId )
      goto LABEL_30;
    UserId = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                UserId,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalLoginMaster___);
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
  v31 = hiddenValue;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v23, 0LL);
  if ( !seqLoginLb )
    goto LABEL_30;
  UILabel__set_text(seqLoginLb, (System_String_o *)UserId, 0LL);
  totalLoginLb = this->fields.totalLoginLb;
  v30 = hiddenValue_high;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v25, 0LL);
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
    sub_B2C434(UserId, method);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9300/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0LL);
  v29 = NextLoginBonusDay;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  UserId = (DataManager_o *)System_String__Format(v27, v28, 0LL);
  method = (const MethodInfo *)UserId;
  if ( !nextLoginBonusLb )
    goto LABEL_30;
LABEL_28:
  UILabel__set_text(nextLoginBonusLb, (System_String_o *)method, 0LL);
}


void __fastcall MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  const MethodInfo *v4; // x1
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

  if ( (byte_4185BDA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185BDA = 1;
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
    MyRoomBackGroundManager__QuitBackGround(bgManager, v4);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B2C2F8(
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
    sub_B2C434(bgManager, v4);
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)bgManager, &count, &recoverTime, 0LL) )
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
  InputUserBirthDayWindow_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185BF1 & 1) == 0 )
  {
    sub_B2C35C(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_MstProfileComponent_endOpenSetBirthDay__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185BF1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v6 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_B2C42C(InputUserBirthDayWindow_CallbackFunc_TypeInfo);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    0LL);
  if ( !inputBirthDayWindow )
    sub_B2C434(v7, v8);
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v6, 0LL);
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
  sub_B2C2F8(
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
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall MstProfileComponent_ClickDelegate__Invoke(
        MstProfileComponent_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  MstProfileComponent_ClickDelegate_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  MstProfileComponent_ClickDelegate_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  MstProfileComponent_ClickDelegate_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (MstProfileComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}


void __fastcall MstProfileComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D4A & 1) == 0 )
  {
    sub_B2C35C(&MstProfileComponent___c_TypeInfo, v1);
    byte_4185D4A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MstProfileComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MstProfileComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4185D4B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185D4B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v10; // x8
  MstProfileComponent___c_c *v11; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MstProfileComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_1; // x20
  Il2CppObject *v15; // x21
  struct MstProfileComponent___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4185D4C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, v5);
    sub_B2C35C(&MstProfileComponent___c_TypeInfo, v6);
    byte_4185D4C = 1;
  }
  endLoadCallback = this->fields.endLoadCallback;
  if ( endLoadCallback )
  {
    System_Action__Invoke(endLoadCallback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    v11 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MstProfileComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo);
      v11 = MstProfileComponent___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__62_1 = static_fields->__9__62_1;
    if ( !_9__62_1 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__62_1, v15, Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, 0LL);
      v16 = MstProfileComponent___c_TypeInfo->static_fields;
      v16->__9__62_1 = _9__62_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v16->__9__62_1,
        (System_Int32_array **)_9__62_1,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( !Instance )
      sub_B2C434(v11, v8);
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
    sub_B2C434(0LL, method);
  MstProfileComponent__setCmdSpellInfo(_4__this, this->fields.genderType, 0LL);
}