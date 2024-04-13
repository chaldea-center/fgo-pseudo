void __fastcall MstProfileComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MstProfileComponent_c *v4; // x8

  if ( (byte_42E74BF & 1) == 0 )
  {
    sub_B5D5C4(&MstProfileComponent_TypeInfo, v1, v2, v3);
    byte_42E74BF = 1;
  }
  MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME = 0.15;
  v4 = MstProfileComponent_TypeInfo;
  MstProfileComponent_TypeInfo->static_fields->MASTER_PROFILE_INFO_X_POS = 225.0;
  v4->static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void __fastcall MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Array_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_42E74BE & 1) == 0 )
  {
    sub_B5D5C4(&ImageItem_Id___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91,
      v5,
      v6,
      v7);
    byte_42E74BE = 1;
  }
  v8 = (System_Array_o *)sub_B5D5DC(ImageItem_Id___TypeInfo, 8LL);
  v15.fields.value = Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v8, v15, 0LL);
  this->fields.dispItemInfoList = (struct ImageItem_Id_array *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dispItemInfoList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MstProfileComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_42E74BB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74BB = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *myRoomFsm; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42E74AA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E74AA = 1;
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
    MstProfileComponent__showChangeDlg(this, v9);
  }
}


void __fastcall MstProfileComponent__OnClickSubmit(
        MstProfileComponent_o *this,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *myRoomFsm; // x21
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  char *Fsm; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_42E74AD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)changeName, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3981/*"ChangeUserName"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3144/*"CLICK_SUBMIT"*/, v9, v10, v11);
    byte_42E74AD = 1;
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
                          (System_String_o *)StringLiteral_3981/*"ChangeUserName"*/,
                          0LL)) == 0LL
      || (*((_QWORD *)Fsm + 7) = changeName,
          sub_B5D560(
            (BattleServantConfConponent_o *)(Fsm + 56),
            (System_Int32_array **)changeName,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26),
          (Fsm = (char *)this->fields.myRoomFsm) == 0LL) )
    {
      sub_B5D69C(Fsm, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, (System_String_o *)StringLiteral_3144/*"CLICK_SUBMIT"*/, 0LL);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.changeName,
      (System_Int32_array **)changeName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    MstProfileComponent__checkInput(this, v27);
  }
}


void __fastcall MstProfileComponent__OpenExpInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MstExpInfoComponent_o *expInfoWindow; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UserGameEntity_o *usrGameEnt; // x8

  if ( (byte_42E74AF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74AF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0LL )
    sub_B5D69C(expInfoWindow, v6);
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, v7);
}


void __fastcall MstProfileComponent__SetProfileData(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x20
  MstProfileComponent_c *v18; // x0
  float MASTER_PROFILE_INFO_X_POS; // s8
  int32_t width; // w21
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  if ( (byte_42E74A0 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MstProfileComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9070/*"MasterProfileInfo"*/, v11, v12, v13);
    byte_42E74A0 = 1;
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
      v17 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(
                                         transform,
                                         (System_String_o *)StringLiteral_9070/*"MasterProfileInfo"*/,
                                         0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
      {
        v18 = MstProfileComponent_TypeInfo;
        if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MstProfileComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
          v18 = MstProfileComponent_TypeInfo;
        }
        MASTER_PROFILE_INFO_X_POS = v18->static_fields->MASTER_PROFILE_INFO_X_POS;
        width = UnityEngine_Screen__get_width(0LL);
        transform = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0LL);
        if ( v17 )
        {
          v21 = (float)((float)(MASTER_PROFILE_INFO_X_POS * (float)width) / (float)(int)transform) / 1.7778;
          gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v21, 0LL);
          goto LABEL_21;
        }
LABEL_22:
        sub_B5D69C(transform, v16);
      }
    }
  }
LABEL_21:
  MstProfileComponent__setMstImg(this, v14);
  MstProfileComponent__setUserName(this, v23);
  MstProfileComponent__setUserGender(this, v24);
  MstProfileComponent__setUserBirthDay(this, v25);
  MstProfileComponent__setUserLv(this, v26);
  MstProfileComponent__setUserExp(this, v27);
  MstProfileComponent__setHaveItemInfo(this, v28);
  MstProfileComponent__setCmdSpellImg(this, v29);
  MstProfileComponent__showLoginCountInfo(this, v30);
}


void __fastcall MstProfileComponent__ShowMstProfile(
        MstProfileComponent_o *this,
        MstProfileComponent_ClickDelegate_o *closeCallback,
        System_Action_o *endLoadCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
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
  __int64 v31; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x23
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  struct UnityEngine_GameObject_o *titleInfoPref; // x23
  UnityEngine_GameObject_o *v53; // x23
  int32_t layer; // w0
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  struct TitleInfoControl_o **p_titleInfo; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  TitleInfoControl_o *titleInfo; // x24
  TitleInfoControl_o *v64; // x24
  System_Action_o *v65; // x25
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x2
  MyRoomBackGroundManager_o *bgManager; // x19
  System_Action_o *v75; // x20
  int64_t recoverTime; // [xsp+0h] [xbp-50h] BYREF
  int32_t count; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E7499 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closeCallback, (_DWORD)endLoadCallback, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v7, v8, v9);
    sub_B5D5C4(&Method_MstProfileComponent_OnClickBack__, v10, v11, v12);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&SoundManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__, v25, v26, v27);
    sub_B5D5C4(&MstProfileComponent___c__DisplayClass62_0_TypeInfo, v28, v29, v30);
    byte_42E7499 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  v31 = sub_B5D694(MstProfileComponent___c__DisplayClass62_0_TypeInfo);
  MstProfileComponent___c__DisplayClass62_0___ctor((MstProfileComponent___c__DisplayClass62_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_31;
  *(_QWORD *)(v31 + 16) = endLoadCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v31 + 16),
    (System_Int32_array **)endLoadCallback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  }
  v48 = MyRoomControl__getChangeMyRoomBgm(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v48, 0LL);
  MstProfileComponent__createCmdSpellWindow(this, v49);
  MstProfileComponent__messageSetup(this, v50);
  MstProfileComponent__gradeSetup(this, v51);
  titleInfoPref = this->fields.titleInfoPref;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v53 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoPref,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  GameObjectExtensions__SetLayerRecursively(v53, layer, 0LL);
  if ( !v53 )
    goto LABEL_31;
  Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v53,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  p_titleInfo = &this->fields.titleInfo;
  this->fields.titleInfo = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.titleInfo,
    (System_Int32_array **)Component_srcLineSprite,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
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
  TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)gameObject, 1, 45, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 0, 0LL);
  v64 = this->fields.titleInfo;
  v65 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_MstProfileComponent_OnClickBack__, 0LL);
  if ( !v64 )
    goto LABEL_31;
  TitleInfoControl__SetBackBtnAct(v64, v65, 0LL);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)closeCallback,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  gameObject = (UnityEngine_GameObject_o *)*p_usrGameEnt;
  if ( !*p_usrGameEnt )
    goto LABEL_31;
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)gameObject, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v73);
  }
  MstProfileComponent__SetProfileData(this, v72);
  bgManager = this->fields.bgManager;
  v75 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v75,
    (Il2CppObject *)v31,
    Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__,
    0LL);
  if ( !bgManager
    || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v75, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)*p_titleInfo) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(gameObject, v33);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 1, 0LL);
}


void __fastcall MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7498 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7498 = 1;
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
      sub_B5D69C(gameObject, v7);
    }
    v8.fields.x = 1200.0;
    v8.fields.y = 0.0;
    v8.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v8, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UILabel_o *userNameTxt; // x8
  System_String_o *mText; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  MstProfileComponent_o *v13; // x0
  const MethodInfo *v14; // x4

  v6 = this;
  if ( (byte_42E74C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MstProfileComponent_callbackChangeMessage__, result, (_DWORD)changeName, method);
    this = (MstProfileComponent_o *)sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8, v9);
    byte_42E74C0 = 1;
  }
  if ( result )
  {
    userNameTxt = v6->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)v6,
        Method_MstProfileComponent_callbackChangeMessage__,
        0LL);
      MstProfileComponent__requestChangeName(v13, mText, changeName, v12, v14);
      return;
    }
LABEL_8:
    sub_B5D69C(this, result);
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
  __int64 v3; // x3
  MstProfileComponent_o *v5; // x19
  char v6; // w20
  const MethodInfo *v7; // x1

  v5 = this;
  if ( (byte_42E74BA & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42E74BA = 1;
  }
  if ( !result
    || (this = (MstProfileComponent_o *)System_String__Equals_44565128(
                                          result,
                                          (System_String_o *)StringLiteral_21497/*"ok"*/,
                                          0LL),
        !v5->fields.userMessageInputDlg) )
  {
    sub_B5D69C(this, result);
  }
  v6 = (char)this;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)v5->fields.userMessageInputDlg, 0LL);
  if ( (v6 & 1) != 0 )
    MstProfileComponent__showMstProfile(v5, v7);
}


void __fastcall MstProfileComponent__callbackChangeName(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MstProfileComponent_o *v5; // x19
  struct ChangeUserNameWindow_o *changeNameWindow; // x8
  const MethodInfo *v7; // x1

  v5 = this;
  if ( (byte_42E74BD & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42E74BD = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (MstProfileComponent_o *)System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
  changeNameWindow = v5->fields.changeNameWindow;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( changeNameWindow )
    {
      ChangeUserNameWindow__Close(v5->fields.changeNameWindow, 0LL);
      MstProfileComponent__showMstProfile(v5, v7);
      return;
    }
LABEL_10:
    sub_B5D69C(this, result);
  }
  if ( !changeNameWindow )
    goto LABEL_10;
  ChangeUserNameWindow__resetInputVal(v5->fields.changeNameWindow, 0LL);
  this = (MstProfileComponent_o *)v5->fields.changeNameWindow;
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v2; // w2
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
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v15; // x1
  PlayMakerFSM_o *SelfUserGame; // x0
  System_String_o *changeName; // x20
  System_String_o *monitor; // x21
  NetworkManager_ResultCallbackFunc_o *v19; // x22
  MstProfileComponent_o *v20; // x0
  const MethodInfo *v21; // x4

  if ( (byte_42E74AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_MstProfileComponent_callbackChangeName__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3035/*"CHECK_OK"*/, v11, v12, v13);
    byte_42E74AE = 1;
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
      PlayMakerFSM__SendEvent(SelfUserGame, (System_String_o *)StringLiteral_3035/*"CHECK_OK"*/, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(SelfUserGame, v15);
  }
  changeName = this->fields.changeName;
  SelfUserGame = (PlayMakerFSM_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_11;
  monitor = (System_String_o *)SelfUserGame[4].monitor;
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackChangeName__,
    0LL);
  MstProfileComponent__requestChangeName(v20, changeName, monitor, v19, v21);
}


void __fastcall MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B5D69C(0LL, method);
  ChangeUserNameWindow__Close(changeNameWindow, 0LL);
}


void __fastcall MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_B5D69C(0LL, method);
  InputUserBirthDayWindow__Close(inputBirthDayWindow, 0LL);
}


void __fastcall MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct CommandSpellWindowComponent_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  struct UnityEngine_GameObject_o *cmdSpellWinPrefab; // x21
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  int32_t layer; // w0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_42E749E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E749E = 1;
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
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)cmdSpellWinPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
          GameObjectExtensions__SetLayerRecursively(v14, layer, 0LL),
          !v14)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v14,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          *p_cmdSpellWinComp = (struct CommandSpellWindowComponent_o *)Component_srcLineSprite,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.cmdSpellWinComp,
            Component_srcLineSprite,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24),
          (gameObject = (UnityEngine_GameObject_o *)*p_cmdSpellWinComp) == 0LL) )
    {
      sub_B5D69C(gameObject, v16);
    }
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(v25, this->fields.cmdSpellWinInfo, 0LL);
  }
}


void __fastcall MstProfileComponent__dispSetBirth(
        MstProfileComponent_o *this,
        System_Action_o *callback,
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
  int32_t Month; // w22
  int32_t Day; // w21
  UnityEngine_Transform_o *IsOpen; // x0
  __int64 v18; // x1
  char v19; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  MstProfileComponent_c *v22; // x0
  UnityEngine_GameObject_o *v23; // x24
  float v24; // s0
  MstProfileComponent_c *v25; // x0
  UILabel_o *birthDayLb; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x22
  Il2CppObject *PaddingBirthday; // x0
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8

  if ( (byte_42E74A6 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&MstProfileComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2618/*"BIRTHDAY"*/, v12, v13, v14);
    byte_42E74A6 = 1;
  }
  v30.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v30, 0LL);
  v31.fields.dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v31, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (UnityEngine_Transform_o *)CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  if ( !this->fields.birthDayInfo )
    goto LABEL_32;
  v19 = (char)IsOpen;
  IsOpen = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  IsOpen = UnityEngine_Transform__GetChild(IsOpen, 0, 0LL);
  if ( !IsOpen )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  if ( (v19 & 1) != 0 )
  {
    v22 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v22 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v22->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
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
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  v24 = 0.0;
  if ( (v19 & 1) != 0 )
  {
    v25 = MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v25 = MstProfileComponent_TypeInfo;
    }
    v24 = (float)v25->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v23, v24, 0LL);
  IsOpen = (UnityEngine_Transform_o *)this->fields.resetBirthBtn;
  if ( !IsOpen )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v19 & 1, 0LL);
  birthDayLb = this->fields.birthDayLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsOpen = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2618/*"BIRTHDAY"*/, 0LL);
  if ( !this->fields.inputBirthDayWindow )
    goto LABEL_32;
  v27 = (System_String_o *)IsOpen;
  IsOpen = (UnityEngine_Transform_o *)InputUserBirthDayWindow__getPaddingBirthday(
                                        this->fields.inputBirthDayWindow,
                                        Month,
                                        0LL);
  if ( !this->fields.inputBirthDayWindow
    || (v28 = (Il2CppObject *)IsOpen,
        PaddingBirthday = (Il2CppObject *)InputUserBirthDayWindow__getPaddingBirthday(
                                            this->fields.inputBirthDayWindow,
                                            Day,
                                            0LL),
        IsOpen = (UnityEngine_Transform_o *)System_String__Format_44573324(v27, v28, PaddingBirthday, 0LL),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, (System_String_o *)IsOpen, 0LL),
        (IsOpen = (UnityEngine_Transform_o *)this->fields.birthDayInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 1, 0LL), !callback) )
  {
LABEL_32:
    sub_B5D69C(IsOpen, v18);
  }
  System_Action__Invoke(callback, 0LL);
}


void __fastcall MstProfileComponent__endOpenChangeDlg(
        MstProfileComponent_o *this,
        bool res,
        System_String_o *changeName,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v15; // x1
  PlayMakerFSM_o *changeNameWindow; // x0

  if ( (byte_42E74AC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, res, (_DWORD)changeName, method);
    sub_B5D5C4(&SoundManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_3108/*"CLICK_CANCLE"*/, v10, v11, v12);
    byte_42E74AC = 1;
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
        PlayMakerFSM__SendEvent(changeNameWindow, (System_String_o *)StringLiteral_3108/*"CLICK_CANCLE"*/, 0LL);
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
    sub_B5D69C(changeNameWindow, v15);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  MstProfileComponent__OnClickSubmit(this, changeName, v13);
}


void __fastcall MstProfileComponent__endOpenSetBirthDay(
        MstProfileComponent_o *this,
        bool res,
        System_Int32_array *paramList,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0
  __int64 v23; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  const MethodInfo *v25; // x3
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x0

  if ( (byte_42E74B2 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, res, (_DWORD)paramList, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(
      &Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_MstProfileComponent_endOpenSetBirthDay__, v16, v17, v18);
    sub_B5D5C4(&SoundManager_TypeInfo, v19, v20, v21);
    byte_42E74B2 = 1;
  }
  if ( !res )
  {
    v26 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 75) & 2) != 0 )
      v26 = (_QWORD *)sub_B5D5CC(Method_MstProfileComponent_endOpenSetBirthDay__);
    v27 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v26, v26[3]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 1, 0LL);
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
    inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    if ( inputBirthDayWindow )
    {
      inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)inputBirthDayWindow,
                                                           (const MethodInfo_23FB0FC *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
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
    sub_B5D69C(inputBirthDayWindow, v23);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !paramList )
    goto LABEL_25;
  if ( paramList->max_length < 2 )
  {
    v28 = sub_B5D6C8(inputBirthDayWindow);
    sub_B5D668(v28, 0LL);
  }
  MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[1], paramList->m_Items[2], v25);
}


void __fastcall MstProfileComponent__genderChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t v9; // w1

  if ( (byte_42E74B6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74B6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B5D69C(v5, v6);
  if ( usrGameEnt->fields.genderType == 1 )
    v9 = 2;
  else
    v9 = 1;
  MstProfileComponent__requestGenderChange(this, v9, v7);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t Kind; // w0
  int32_t v9; // w20
  System_String_o *MasterProfileBgImage; // x0
  __int64 v11; // x1
  struct UISprite_o *profileBg; // x22
  System_String_o *v13; // x21
  UIAtlas_o *mAtlas; // x23
  struct UISprite_o *v15; // x8

  if ( (byte_42E749C & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Grade_TypeInfo, v5, v6, v7);
    byte_42E749C = 1;
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v9 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterProfileBgImage = Grade__GetMasterProfileBgImage(v9, 0LL);
    profileBg = this->fields.profileBg;
    if ( !profileBg )
      goto LABEL_17;
    v13 = MasterProfileBgImage;
    mAtlas = profileBg->fields.mAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(profileBg, v13, mAtlas, 0LL);
    MasterProfileBgImage = Grade__GetMasterProfileBgLineImage(v9, 0LL);
    v15 = this->fields.profileBg;
    if ( !v15 )
LABEL_17:
      sub_B5D69C(MasterProfileBgImage, v11);
    AtlasManager__SetGradeBase(this->fields.nameLine, MasterProfileBgImage, v15->fields.mAtlas, 0LL);
  }
}


void __fastcall MstProfileComponent__hideMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *masterFigure; // x20
  const MethodInfo *v6; // x1
  UnityEngine_Component_o *userMessageInputDlg; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  int32_t childCount; // w0
  int32_t v17; // w20
  UnityEngine_Object_o *v18; // x21

  if ( (byte_42E749D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E749D = 1;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    this->fields.masterFigure = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.masterFigure, 0LL, v9, v10, v11, v12, v13, v14);
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg
    || (SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)userMessageInputDlg, 0LL),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.expInfoWindow) == 0LL)
    || (MstExpInfoComponent__Close((MstExpInfoComponent_o *)userMessageInputDlg, v6),
        MstProfileComponent__releaseCmdSpellWindow(this, v15),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0LL)
    || (userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0LL)) == 0LL )
  {
LABEL_26:
    sub_B5D69C(userMessageInputDlg, v6);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)userMessageInputDlg, 0LL);
  v17 = childCount - 1;
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
                                                         v17,
                                                         0LL);
      if ( !userMessageInputDlg )
        goto LABEL_26;
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v18, 0LL);
    }
    while ( --v17 >= 0 );
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *SelfUserGame; // x0
  __int64 v9; // x1
  System_String_o *geometry; // x20
  UILabel_o *v11; // x8
  struct UILabel_o **p_messageLabel; // x19
  struct UILabel_o *messageLabel; // t1
  float v15; // s4
  float v16; // s5
  float v17; // s6
  UIWidget_o *v18; // x21
  int v19; // s0
  struct UILabel_o *v20; // t1
  int v21; // s1
  int v22; // s2
  UnityEngine_Color_o v23; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_42E749B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8831/*"MESSAGE_CHANGE_NO_INPUT"*/, v5, v6, v7);
    byte_42E749B = 1;
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
    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8831/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    messageLabel = this->fields.messageLabel;
    p_messageLabel = &this->fields.messageLabel;
    v11 = messageLabel;
    if ( messageLabel )
    {
      geometry = (System_String_o *)SelfUserGame;
      UILabel__set_effectStyle(v11, 0, 0LL);
      v18 = (UIWidget_o *)*p_messageLabel;
      v19 = 1058642330;
      *(_QWORD *)&v23.fields.r = 0LL;
      *(_QWORD *)&v23.fields.b = 0LL;
      goto LABEL_12;
    }
LABEL_15:
    sub_B5D69C(SelfUserGame, v9);
  }
  v20 = this->fields.messageLabel;
  p_messageLabel = &this->fields.messageLabel;
  SelfUserGame = v20;
  if ( !v20 )
    goto LABEL_15;
  UILabel__set_effectStyle(SelfUserGame, 3, 0LL);
  v18 = (UIWidget_o *)*p_messageLabel;
  *(_QWORD *)&v23.fields.r = 0LL;
  *(_QWORD *)&v23.fields.b = 0LL;
  v19 = 1.0;
LABEL_12:
  v21 = v19;
  v22 = v19;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)&v19, v15, v16, v17, (const MethodInfo *)&v23);
  if ( !v18 )
    goto LABEL_15;
  UIWidget__set_color(v18, v23, 0LL);
  SelfUserGame = *p_messageLabel;
  if ( !*p_messageLabel )
    goto LABEL_15;
  UILabel__set_text(SelfUserGame, geometry, 0LL);
}


void __fastcall MstProfileComponent__onClickCmdSpell(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_42E74B4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74B4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B5D69C(0LL, v5);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._10_Open.method)(
    cmdSpellWinComp,
    0LL,
    cmdSpellWinComp->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall MstProfileComponent__onClickMessageChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v12; // x1
  System_String_o *message; // x20
  UserMessageInputDlg_o *userMessageInputDlg; // x21
  SupportDeckNameInputMenu_CallbackFunc_o *v15; // x22

  if ( (byte_42E74B9 & 1) == 0 )
  {
    sub_B5D5C4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MstProfileComponent__onClickMessageChange_b__104_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E74B9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v15 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B5D694(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__104_0__,
          0LL),
        !userMessageInputDlg) )
  {
    sub_B5D69C(SelfUserGame, v12);
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v15, 0LL);
}


void __fastcall MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_42E74B5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74B5 = 1;
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
    sub_B5D69C(cmdSpellWinComp, method);
  }
}


void __fastcall MstProfileComponent__releaseCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_cmdSpellWinComp; // x19
  UnityEngine_Object_o *v6; // x20
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E749F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E749F = 1;
  }
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  p_cmdSpellWinComp = (UnityEngine_Component_o **)&this->fields.cmdSpellWinComp;
  v6 = (UnityEngine_Object_o *)cmdSpellWinComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_cmdSpellWinComp )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
    *p_cmdSpellWinComp = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_cmdSpellWinComp, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall MstProfileComponent__requestChangeName(
        MstProfileComponent_o *this,
        System_String_o *changedName,
        System_String_o *message,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserNameChangeRequest_o *SelfUserGame; // x0
  __int64 v12; // x1
  int32_t paramInteger_high; // w22

  if ( (byte_42E74BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_NetworkManager_getRequest_UserNameChangeRequest___,
      (_DWORD)changedName,
      (_DWORD)message,
      callback);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42E74BC = 1;
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
                                              (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !SelfUserGame )
LABEL_9:
    sub_B5D69C(SelfUserGame, v12);
  UserNameChangeRequest__beginRequest(SelfUserGame, changedName, paramInteger_high, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__requestGenderChange(
        MstProfileComponent_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x20
  NetworkManager_ResultCallbackFunc_o *v17; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x21

  v5 = (Il2CppObject *)this;
  if ( (byte_42E74B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MstProfileComponent_callbackGenderChange__, genderType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    this = (MstProfileComponent_o *)sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E74B7 = 1;
  }
  klass = v5[24].klass;
  if ( !klass )
    goto LABEL_10;
  namespaze = (System_String_o *)klass->_1.namespaze;
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v17, v5, Method_MstProfileComponent_callbackGenderChange__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v17,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  this = (MstProfileComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this || !Request_WarBoardWallAttackRequest )
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&genderType);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x21
  int32_t castClass_high; // w22
  NetworkManager_ResultCallbackFunc_o *v19; // x24

  v6 = (Il2CppObject *)this;
  if ( (byte_42E74B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MstProfileComponent_callbackSetBirthDay__, month, day, method);
    sub_B5D5C4(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    this = (MstProfileComponent_o *)sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14, v15);
    byte_42E74B3 = 1;
  }
  klass = v6[24].klass;
  if ( !klass )
    goto LABEL_9;
  namespaze = (System_String_o *)klass->_1.namespaze;
  castClass_high = HIDWORD(klass->_1.castClass);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v19, v6, Method_MstProfileComponent_callbackSetBirthDay__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (MstProfileComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                    v19,
                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !this )
LABEL_9:
    sub_B5D69C(this, *(_QWORD *)&month);
  SetUserBirthDayRequest__beginRequest((SetUserBirthDayRequest_o *)this, namespaze, castClass_high, month, day, 0LL);
}


void __fastcall MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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
  __int64 v3; // x3
  MstProfileComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *cmdSpellWinComp; // x20
  CommandSpellWindowComponent_o *v16; // x20
  struct CommandSpellWindowComponent_o *v17; // x8
  struct CommandSpellWindowComponent_o *v18; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  v4 = this;
  if ( (byte_42E74A2 & 1) == 0 )
  {
    sub_B5D5C4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_MstProfileComponent_onSpellWindowClose__, v5, v6, v7);
    sub_B5D5C4(&MstProfileComponent_TypeInfo, v8, v9, v10);
    this = (MstProfileComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E74A2 = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_17;
  MstProfileComponent__setCmdSpellInfo(v4, usrGameEnt->fields.genderType, v2);
  cmdSpellWinComp = (UnityEngine_Object_o *)v4->fields.cmdSpellWinComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cmdSpellWinComp, 0LL, 0LL) )
  {
    v16 = v4->fields.cmdSpellWinComp;
    this = (MstProfileComponent_o *)MstProfileComponent_TypeInfo;
    if ( (BYTE3(MstProfileComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
    }
    if ( v16 )
    {
      CommandSpellWindowComponent__InitializeCommandSpellDepth(
        v16,
        0,
        MstProfileComponent_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH,
        0LL);
      this = (MstProfileComponent_o *)v4->fields.cmdSpellWinComp;
      if ( this )
      {
        BattleWindowComponent__setInitData(
          (BattleWindowComponent_o *)this,
          2,
          MstProfileComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL);
        v17 = v4->fields.cmdSpellWinComp;
        if ( v17 )
        {
          v17->fields.mode = 0;
          v18 = v4->fields.cmdSpellWinComp;
          v19 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B5D694(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v19,
            (Il2CppObject *)v4,
            Method_MstProfileComponent_onSpellWindowClose__,
            0LL);
          if ( v18 )
          {
            v18->fields.callback_close = v19;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v18->fields.callback_close,
              (System_Int32_array **)v19,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B5D69C(this, method);
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
      sub_B5D69C(cmdSpellIconMale, *(_QWORD *)&genderType);
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
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v17; // x22
  int v18; // w23
  int v19; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  int v26; // [xsp+18h] [xbp-38h] BYREF
  int v27; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E74A1 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, recoverTime, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3321/*"COMMAND_SPELL_RECOVER_TIME"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3324/*"COMMNAD_SPELL_RECV_TXT"*/, v12, v13, v14);
    byte_42E74A1 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3324/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v17 = recoverTime / 0xE10uLL;
      v18 = (int)(recoverTime / 0x3CuLL) % 60;
      v19 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3321/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v27 = v17;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v26 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v25 = v19;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      cmdSpellRecTimeInfo = System_String__Format_44578852(v21, v22, v23, v24, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(cmdSpellRecTimeInfo, recoverTime);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // w2
  __int64 v15; // x3
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w21
  TerminalPramsManager_c *v18; // x0
  struct UserGameEntity_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1

  if ( (byte_42E74B8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74B8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B5D69C(v12, v13);
  genderType = usrGameEnt->fields.genderType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CC9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v13, v14, v15);
    byte_42E5CC9 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_PlayerGenderType_k__BackingField = genderType;
  TerminalPramsManager__PlayerGenderType_SaveData(0LL);
  v19 = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  MstProfileComponent__setUserGender(this, v26);
  MstProfileComponent__setMstImg(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__setHaveItemInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *itemListGrid; // x0
  struct ImageItem_Id_array *dispItemInfoList; // x8
  unsigned __int64 v7; // x23
  unsigned __int64 max_length; // x9
  int32_t v9; // w20
  UnityEngine_GameObject_o *mstItemInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Transform_o *v13; // x22
  int v14; // s0
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  __int64 v22; // x0

  if ( (byte_42E74A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___, (_DWORD)method, v2, v3);
    byte_42E74A9 = 1;
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
  v7 = 0LL;
  while ( 1 )
  {
    max_length = dispItemInfoList->max_length;
    if ( (__int64)v7 >= (int)max_length )
      break;
    if ( v7 >= max_length )
    {
      v22 = sub_B5D6C8(itemListGrid);
      sub_B5D668(v22, 0LL);
    }
    itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
    if ( itemListGrid )
    {
      v9 = dispItemInfoList->m_Items[v7 + 1];
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
        v12 = (UnityEngine_GameObject_o *)itemListGrid;
        v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemListGrid, 0LL);
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
        if ( v13 )
        {
          UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
          itemListGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
          if ( itemListGrid )
          {
            MstHaveItemInfoComponent__setItemInfo(
              (MstHaveItemInfoComponent_o *)itemListGrid,
              v9,
              this->fields.usrGameEnt,
              v17);
            dispItemInfoList = this->fields.dispItemInfoList;
            ++v7;
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
    || (v18 = UnityEngine_Component__get_transform(itemListGrid, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
        !v18)
    || (UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL),
        (itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(itemListGrid, method);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))itemListGrid->klass[1]._1.castClass)(
    itemListGrid,
    itemListGrid->klass[1]._1.declaringType);
}


void __fastcall MstProfileComponent__setMstImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x20
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UserGameEntity_o *usrGameEnt; // x8
  struct UserGameEntity_o *v45; // x8
  struct UserGameEntity_o *v46; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int64_t v48; // x21
  __int64 v49; // x22
  __int64 v50; // x22
  struct System_Byte_array *masterDataBytes; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x22
  int32_t v53; // w21
  UnityEngine_Object_o *masterFigure; // x23
  struct UIMasterFigureTextureOld_o *Prefab_31039236; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UIMasterFigureTextureOld_o *v62; // x19
  int32_t v63; // w22
  System_Action_o *v64; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42E74A3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__, v29, v30, v31);
    sub_B5D5C4(&MstProfileComponent___c__DisplayClass75_0_TypeInfo, v32, v33, v34);
    byte_42E74A3 = 1;
  }
  v35 = sub_B5D694(MstProfileComponent___c__DisplayClass75_0_TypeInfo);
  MstProfileComponent___c__DisplayClass75_0___ctor((MstProfileComponent___c__DisplayClass75_0_o *)v35, 0LL);
  if ( !v35 )
    goto LABEL_32;
  *(_QWORD *)(v35 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_32;
  *(_DWORD *)(v35 + 24) = usrGameEnt->fields.genderType;
  v45 = this->fields.usrGameEnt;
  if ( !v45 )
    goto LABEL_32;
  if ( v45->fields.activeDeckId < 1 )
    goto LABEL_24;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v46 = this->fields.usrGameEnt;
  if ( !v46 )
    goto LABEL_32;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                v46->fields.activeDeckId,
                                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  saveNameList = Instance->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_32;
  v48 = *(_QWORD *)&saveNameList->fields._size;
  if ( v48 < 1 )
  {
LABEL_24:
    v53 = 0;
  }
  else
  {
    v49 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v50 = **(_QWORD **)(v49 + 192);
    if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
      sub_AF52C4(v50);
    Instance = **(DataManager_o ***)(v50 + 184);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                  v48,
                                  (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_32;
    lookup = Instance->fields.lookup;
    masterDataBytes = Instance->fields.masterDataBytes;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v65.fields.currentCryptoKey = lookup;
    *(_QWORD *)&v65.fields.fakeValue = masterDataBytes;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v65, 0LL);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_31039236 = MasterFigureManagerOld__CreatePrefab_31039236(
                        this->fields.mstImgBase,
                        2,
                        *(_DWORD *)(v35 + 24),
                        v53,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0LL);
    this->fields.masterFigure = Prefab_31039236;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.masterFigure,
      (System_Int32_array **)Prefab_31039236,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    return;
  }
  v62 = this->fields.masterFigure;
  v63 = *(_DWORD *)(v35 + 24);
  v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v35,
    Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__,
    0LL);
  if ( !v62 )
LABEL_32:
    sub_B5D69C(Instance, v37);
  UIMasterFigureTextureOld__SetCharacter(v62, 2, v63, v53, v64, 0, 0LL);
}


void __fastcall MstProfileComponent__setUserBirthDay(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MstProfileComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserGameEntity_o *usrGameEnt; // x8
  int64_t birthDay; // x20
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_42E74A5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MstProfileComponent_closeSetBirthDayDlg__, v5, v6, v7);
    this = (MstProfileComponent_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42E74A5 = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_12;
  birthDay = usrGameEnt->fields.birthDay;
  if ( birthDay <= 0 )
  {
    this = (MstProfileComponent_o *)v4->fields.birthDayInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(this, method);
  }
  this = (MstProfileComponent_o *)v4->fields.setBirthBtn;
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v4->fields.dtBirthDay = NetworkManager__getDateTime_26077468(birthDay, 0LL);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_MstProfileComponent_closeSetBirthDayDlg__, 0LL);
  MstProfileComponent__dispSetBirth(v4, v13, v14);
}


void __fastcall MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserGameEntity_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  float barExp; // [xsp+Ch] [xbp-24h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-20h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E74A8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, (_DWORD)method, v2, v3);
    byte_42E74A8 = 1;
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
  usrGameEnt = (UserGameEntity_o *)System_Int64__ToString_39744560(
                                     (int64_t)&lateExp,
                                     (System_String_o *)StringLiteral_346/*"#,0"*/,
                                     0LL);
  if ( !userExpLb
    || (UILabel__set_text(userExpLb, (System_String_o *)usrGameEnt, 0LL),
        (usrGameEnt = (UserGameEntity_o *)this->fields.expBar) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(usrGameEnt, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)usrGameEnt, barExp, 0LL);
}


void __fastcall MstProfileComponent__setUserGender(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MstProfileComponent_o *v4; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w20
  UILabel_o *genderTypeLb; // x19

  v4 = this;
  if ( (byte_42E74A4 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_B5D5C4(&Gender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74A4 = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_9;
  genderType = usrGameEnt->fields.genderType;
  v4->fields.currentGenderType = genderType;
  genderTypeLb = v4->fields.genderTypeLb;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this = (MstProfileComponent_o *)Gender__ToName(genderType, 0LL);
  if ( !genderTypeLb )
LABEL_9:
    sub_B5D69C(this, method);
  UILabel__set_text(genderTypeLb, (System_String_o *)this, 0LL);
}


void __fastcall MstProfileComponent__setUserLv(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MstProfileComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UserGameEntity_o *usrGameEnt; // x8
  UIExtrusionLabel_o *userLevelLb; // x20
  System_String_o *v10; // x1
  UILabel_o *userMaxLvLb; // x19
  BalanceConfig_c *v12; // x0
  System_String_o *v13; // x1

  v4 = this;
  if ( (byte_42E74A7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    this = (MstProfileComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E74A7 = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  userLevelLb = v4->fields.userLevelLb;
  this = (MstProfileComponent_o *)System_Int32__ToString((int)usrGameEnt + 80, 0LL);
  if ( !userLevelLb )
    goto LABEL_16;
  if ( this )
    v10 = (System_String_o *)this;
  else
    v10 = (System_String_o *)StringLiteral_1/*""*/;
  UIExtrusionLabel__set_text(userLevelLb, v10, 0LL);
  userMaxLvLb = v4->fields.userMaxLvLb;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  this = (MstProfileComponent_o *)System_Int32__ToString((unsigned int)v12->static_fields + 24, 0LL);
  if ( !userMaxLvLb )
LABEL_16:
    sub_B5D69C(this, method);
  if ( this )
    v13 = (System_String_o *)this;
  else
    v13 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(userMaxLvLb, v13, 0LL);
}


void __fastcall MstProfileComponent__setUserName(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8

  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (this = (MstProfileComponent_o *)this->fields.userNameTxt) == 0LL )
    sub_B5D69C(this, method);
  UILabel__set_text((UILabel_o *)this, usrGameEnt->fields.name, 0LL);
}


void __fastcall MstProfileComponent__showChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x21
  ChangeUserNameWindow_o *v10; // x20
  ChangeUserNameWindow_CallbackFunc_o *v11; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E74AB & 1) == 0 )
  {
    sub_B5D5C4(&ChangeUserNameWindow_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    this = (MstProfileComponent_o *)sub_B5D5C4(&Method_MstProfileComponent_endOpenChangeDlg__, v5, v6, v7);
    byte_42E74AB = 1;
  }
  klass = v4[24].klass;
  if ( !klass
    || (namespaze = (System_String_o *)klass->_1.namespaze,
        v10 = (ChangeUserNameWindow_o *)v4[2].klass,
        v11 = (ChangeUserNameWindow_CallbackFunc_o *)sub_B5D694(ChangeUserNameWindow_CallbackFunc_TypeInfo),
        ChangeUserNameWindow_CallbackFunc___ctor(v11, v4, Method_MstProfileComponent_endOpenChangeDlg__, 0LL),
        !v10) )
  {
    sub_B5D69C(this, method);
  }
  ChangeUserNameWindow__OpenChangeNameWindow(v10, namespaze, v11, 0LL);
}


void __fastcall MstProfileComponent__showLoginCountInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 v32; // x20
  __int64 v33; // x20
  DataManager_o *UserId; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *Entity; // x0
  int32_t hiddenValue_high; // w21
  int hiddenValue; // w24
  __int64 v39; // x20
  __int64 v40; // x20
  int32_t NextLoginBonusDay; // w20
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v43; // x0
  UILabel_o *totalLoginLb; // x22
  Il2CppObject *v45; // x0
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  int32_t v49; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v50; // [xsp+8h] [xbp-38h] BYREF
  int v51; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E74B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalLoginMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserLoginMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9395/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v29, v30, v31);
    byte_42E74B0 = 1;
  }
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v33 = **(_QWORD **)(v32 + 192);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    sub_AF52C4(v33);
  UserId = **(DataManager_o ***)(v33 + 184);
  if ( !UserId )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(UserId, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserLoginMaster___);
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
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    hiddenValue = Entity->fields.id.fields.hiddenValue;
    hiddenValue_high = HIDWORD(Entity->fields.id.fields.hiddenValue);
    v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
      sub_AF52C4(v39);
    v40 = **(_QWORD **)(v39 + 192);
    if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
      sub_AF52C4(v40);
    UserId = **(DataManager_o ***)(v40 + 184);
    if ( !UserId )
      goto LABEL_30;
    UserId = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                UserId,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalLoginMaster___);
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
  v51 = hiddenValue;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v43, 0LL);
  if ( !seqLoginLb )
    goto LABEL_30;
  UILabel__set_text(seqLoginLb, (System_String_o *)UserId, 0LL);
  totalLoginLb = this->fields.totalLoginLb;
  v50 = hiddenValue_high;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v45, 0LL);
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
    sub_B5D69C(UserId, method);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9395/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0LL);
  v49 = NextLoginBonusDay;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  UserId = (DataManager_o *)System_String__Format(v47, v48, 0LL);
  method = (const MethodInfo *)UserId;
  if ( !nextLoginBonusLb )
    goto LABEL_30;
LABEL_28:
  UILabel__set_text(nextLoginBonusLb, (System_String_o *)method, 0LL);
}


void __fastcall MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v6; // x1
  MyRoomBackGroundManager_o *bgManager; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  int64_t recoverTime; // [xsp+0h] [xbp-20h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E749A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E749A = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  MstProfileComponent__createCmdSpellWindow(this, v15);
  MstProfileComponent__messageSetup(this, v16);
  MstProfileComponent__gradeSetup(this, v17);
  bgManager = (MyRoomBackGroundManager_o *)this->fields.usrGameEnt;
  if ( !bgManager )
LABEL_13:
    sub_B5D69C(bgManager, v6);
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)bgManager, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v19);
  }
  MstProfileComponent__SetProfileData(this, v18);
}


void __fastcall MstProfileComponent__showSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x20
  InputUserBirthDayWindow_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E74B1 & 1) == 0 )
  {
    sub_B5D5C4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MstProfileComponent_endOpenSetBirthDay__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E74B1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v12 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_B5D694(InputUserBirthDayWindow_CallbackFunc_TypeInfo);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    0LL);
  if ( !inputBirthDayWindow )
    sub_B5D69C(v13, v14);
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent_ClickDelegate___ctor(
        MstProfileComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall MstProfileComponent_ClickDelegate__BeginInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  MstProfileComponent_ClickDelegate_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  MstProfileComponent_ClickDelegate_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}


void __fastcall MstProfileComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MstProfileComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F74 & 1) == 0 )
  {
    sub_B5D5C4(&MstProfileComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5F74 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MstProfileComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MstProfileComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MstProfileComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MstProfileComponent___c___ctor(MstProfileComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MstProfileComponent___c___ShowMstProfile_b__62_1(
        MstProfileComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5F75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F75 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Action_o *endLoadCallback; // x0
  __int64 v18; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v20; // x8
  MstProfileComponent___c_c *v21; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MstProfileComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_1; // x20
  Il2CppObject *v25; // x21
  struct MstProfileComponent___c_StaticFields *v26; // x0

  if ( (byte_42E5F76 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, v11, v12, v13);
    sub_B5D5C4(&MstProfileComponent___c_TypeInfo, v14, v15, v16);
    byte_42E5F76 = 1;
  }
  endLoadCallback = this->fields.endLoadCallback;
  if ( endLoadCallback )
  {
    System_Action__Invoke(endLoadCallback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    v21 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MstProfileComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MstProfileComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo);
      v21 = MstProfileComponent___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__62_1 = static_fields->__9__62_1;
    if ( !_9__62_1 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__62_1, v25, Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, 0LL);
      v26 = MstProfileComponent___c_TypeInfo->static_fields;
      v26->__9__62_1 = _9__62_1;
      sub_B5D560(&v26->__9__62_1);
    }
    if ( !Instance )
      sub_B5D69C(v21, v18);
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
    sub_B5D69C(0LL, method);
  MstProfileComponent__setCmdSpellInfo(_4__this, this->fields.genderType, 0LL);
}