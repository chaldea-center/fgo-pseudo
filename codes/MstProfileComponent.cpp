void __fastcall MstProfileComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MstProfileComponent_StaticFields *static_fields; // x8

  if ( (byte_4A04322 & 1) == 0 )
  {
    sub_1B686D4(&MstProfileComponent_TypeInfo, v1);
    byte_4A04322 = 1;
  }
  static_fields = MstProfileComponent_TypeInfo->static_fields;
  static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  *(_QWORD *)&static_fields->SPELL_WINDOW_ALPHA_TIME = 0x436100003E19999ALL;
  static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void __fastcall MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct ImageItem_Id_array *v5; // x20
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4A04321 & 1) == 0 )
  {
    sub_1B686D4(&ImageItem_Id___TypeInfo, method);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91,
      v3);
    byte_4A04321 = 1;
  }
  v4 = (System_Array_o *)sub_1B6877C(ImageItem_Id___TypeInfo, 8LL);
  v6.fields.value = Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91;
  v5 = (struct ImageItem_Id_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61327548(v4, v6, 0LL);
  this->fields.dispItemInfoList = v5;
  sub_1B68678(&this->fields.dispItemInfoList);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct MstProfileComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v8; // x0
  QuestRewardTokenAction_c *klass; // x8

  if ( (byte_4A0431E & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_OnClickBack__, method);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4A0431E = 1;
  }
  v4 = Method_MstProfileComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v6);
    byte_4A03EAD = 1;
  }
  v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v8->fields.boardGameTokenAction->klass;
  if ( !klass || (v8 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
    sub_1B68930(v8, v6);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v8, 0LL);
}


void __fastcall MstProfileComponent__OnClickNameChangeBtn(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *myRoomFsm; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A0430D & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_OnClickNameChangeBtn__, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0430D = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    v5 = Method_MstProfileComponent_OnClickNameChangeBtn__;
    if ( (*((_BYTE *)Method_MstProfileComponent_OnClickNameChangeBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_OnClickNameChangeBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    MstProfileComponent__showChangeDlg(this, v7);
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
  PlayMakerFSM_o *Fsm; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4A04310 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, changeName);
    sub_1B686D4(&StringLiteral_4388/*"ChangeUserName"*/, v5);
    sub_1B686D4(&StringLiteral_3546/*"CLICK_SUBMIT"*/, v6);
    byte_4A04310 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    Fsm = this->fields.myRoomFsm;
    if ( !Fsm
      || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL)) == 0LL
      || (Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource) == 0LL
      || (Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    (System_String_o *)StringLiteral_4388/*"ChangeUserName"*/,
                                    0LL)) == 0LL
      || (Fsm->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)changeName,
          sub_1B68678(&Fsm->fields.addEventHandlers),
          (Fsm = this->fields.myRoomFsm) == 0LL) )
    {
      sub_1B68930(Fsm, v8);
    }
    PlayMakerFSM__SendEvent(Fsm, (System_String_o *)StringLiteral_3546/*"CLICK_SUBMIT"*/, 0LL);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_1B68678(&this->fields.changeName);
    MstProfileComponent__checkInput(this, v10);
  }
}


void __fastcall MstProfileComponent__OpenExpInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MstExpInfoComponent_o *expInfoWindow; // x0
  __int64 v6; // x1
  struct UserGameEntity_o *usrGameEnt; // x8

  if ( (byte_4A04312 & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_OpenExpInfo__, method);
    byte_4A04312 = 1;
  }
  v3 = Method_MstProfileComponent_OpenExpInfo__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OpenExpInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_OpenExpInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0LL )
    sub_1B68930(expInfoWindow, v6);
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, 0LL);
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

  if ( (byte_4A04303 & 1) == 0 )
  {
    sub_1B686D4(&FSUtility_TypeInfo, method);
    sub_1B686D4(&MstProfileComponent_TypeInfo, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_8874/*"MasterProfileInfo"*/, v5);
    byte_4A04303 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsTablet(0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_18;
      v9 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_8874/*"MasterProfileInfo"*/, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
      {
        v10 = MstProfileComponent_TypeInfo;
        if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
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
          goto LABEL_17;
        }
LABEL_18:
        sub_1B68930(transform, v8);
      }
    }
  }
LABEL_17:
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
  Il2CppObject *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  struct UserGameEntity_o **p_usrGameEnt; // x22
  System_String_o *v19; // x23
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  Il2CppObject *titleInfoPref; // x23
  Il2CppObject *v24; // x23
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  struct TitleInfoControl_o **p_titleInfo; // x23
  TitleInfoControl_o *titleInfo; // x24
  TitleInfoControl_o *v29; // x24
  System_Action_o *v30; // x25
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  MyRoomBackGroundManager_o *bgManager; // x19
  System_Action_o *v34; // x20
  int64_t recoverTime; // [xsp+8h] [xbp-58h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A042FC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, closeCallback);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v7);
    sub_1B686D4(&Method_MstProfileComponent_OnClickBack__, v8);
    sub_1B686D4(&MyRoomControl_TypeInfo, v9);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v11);
    sub_1B686D4(&SoundManager_TypeInfo, v12);
    sub_1B686D4(&Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__, v13);
    sub_1B686D4(&MstProfileComponent___c__DisplayClass62_0_TypeInfo, v14);
    byte_4A042FC = 1;
  }
  count = 0;
  recoverTime = 0LL;
  v15 = (Il2CppObject *)sub_1B68920(MstProfileComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_28;
  v15[1].klass = (Il2CppClass *)endLoadCallback;
  sub_1B68678(&v15[1]);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrGameEnt);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v19 = MyRoomControl__getChangeMyRoomBgm(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v19, 0LL);
  MstProfileComponent__createCmdSpellWindow(this, v20);
  MstProfileComponent__messageSetup(this, v21);
  MstProfileComponent__gradeSetup(this, v22);
  titleInfoPref = (Il2CppObject *)this->fields.titleInfoPref;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__Instantiate_object_(
          titleInfoPref,
          (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v24, layer, 0LL);
  if ( !v24 )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v24,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  p_titleInfo = &this->fields.titleInfo;
  this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
  sub_1B68678(&this->fields.titleInfo);
  titleInfo = this->fields.titleInfo;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !titleInfo )
    goto LABEL_28;
  TitleInfoControl__SetParent(titleInfo, (UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setDepth((TitleInfoControl_o *)gameObject, 40, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)gameObject, 41, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 45, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__changeTitleInfo_36940820((TitleInfoControl_o *)gameObject, 1, 45, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 0, 0LL);
  v29 = this->fields.titleInfo;
  v30 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, (intptr_t)Method_MstProfileComponent_OnClickBack__, 0LL);
  if ( !v29 )
    goto LABEL_28;
  TitleInfoControl__SetBackBtnAct(v29, v30, 0LL);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_1B68678(&this->fields.callbackFunc);
  }
  gameObject = (UnityEngine_GameObject_o *)*p_usrGameEnt;
  if ( !*p_usrGameEnt )
    goto LABEL_28;
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)gameObject, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v32);
  }
  MstProfileComponent__SetProfileData(this, v31);
  bgManager = this->fields.bgManager;
  v34 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v34, v15, Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__, 0LL);
  if ( !bgManager
    || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v34, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)*p_titleInfo) == 0LL) )
  {
LABEL_28:
    sub_1B68930(gameObject, v17);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 1, 0LL);
}


void __fastcall MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A042FB & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A042FB = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_1B68930(gameObject, v5);
    }
    v6.fields.y = 0.0;
    v6.fields.z = 0.0;
    v6.fields.x = 1200.0;
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
  if ( (byte_4A04323 & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_callbackChangeMessage__, result);
    this = (MstProfileComponent_o *)sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A04323 = 1;
  }
  if ( result )
  {
    userNameTxt = v6->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v6,
        Method_MstProfileComponent_callbackChangeMessage__,
        0LL);
      MstProfileComponent__requestChangeName(v11, mText, changeName, v10, v12);
      return;
    }
LABEL_8:
    sub_1B68930(this, result);
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
  if ( (byte_4A0431D & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1B686D4(&StringLiteral_22150/*"ok"*/, result);
    byte_4A0431D = 1;
  }
  if ( !result
    || (this = (MstProfileComponent_o *)System_String__Equals_61427784(
                                          result,
                                          (System_String_o *)StringLiteral_22150/*"ok"*/,
                                          0LL),
        !v4->fields.userMessageInputDlg) )
  {
    sub_1B68930(this, result);
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
  if ( (byte_4A04320 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1B686D4(&StringLiteral_22150/*"ok"*/, result);
    byte_4A04320 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (MstProfileComponent_o *)System_String__Equals_61427784(result, (System_String_o *)StringLiteral_22150/*"ok"*/, 0LL);
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
    sub_1B68930(this, result);
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
  const MethodInfo *v4; // x1

  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrGameEnt);
  MstProfileComponent__setGenderInfo(this, v4);
}


void __fastcall MstProfileComponent__callbackSetBirthDay(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrGameEnt);
  MstProfileComponent__setBirthDayInfo(this, v4);
}


void __fastcall MstProfileComponent__checkInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v7; // x1
  void *SelfUserGame; // x0
  System_String_o *changeName; // x20
  System_String_o *v10; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  MstProfileComponent_o *v12; // x0
  const MethodInfo *v13; // x4

  if ( (byte_4A04311 & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_callbackChangeName__, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_3435/*"CHECK_OK"*/, v5);
    byte_4A04311 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    SelfUserGame = this->fields.myRoomFsm;
    if ( SelfUserGame )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_3435/*"CHECK_OK"*/, 0LL);
      return;
    }
LABEL_10:
    sub_1B68930(SelfUserGame, v7);
  }
  changeName = this->fields.changeName;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_10;
  v10 = (System_String_o *)*((_QWORD *)SelfUserGame + 30);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackChangeName__,
    0LL);
  MstProfileComponent__requestChangeName(v12, changeName, v10, v11, v13);
}


void __fastcall MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_1B68930(0LL, method);
  ChangeUserNameWindow__Close(changeNameWindow, 0LL);
}


void __fastcall MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_1B68930(0LL, method);
  InputUserBirthDayWindow__Close(inputBirthDayWindow, 0LL);
}


void __fastcall MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct CommandSpellWindowComponent_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  Il2CppObject *cmdSpellWinPrefab; // x21
  Il2CppObject *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t layer; // w0
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_4A04301 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___, method);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    byte_4A04301 = 1;
  }
  p_cmdSpellWinComp = &this->fields.cmdSpellWinComp;
  cmdSpellWinComp = (UnityEngine_Object_o *)this->fields.cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cmdSpellWinComp, 0LL, 0LL) )
  {
    cmdSpellWinPrefab = (Il2CppObject *)this->fields.cmdSpellWinPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object_(
           cmdSpellWinPrefab,
           (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
          GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v8, layer, 0LL),
          !v8)
      || (*p_cmdSpellWinComp = (struct CommandSpellWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         (UnityEngine_GameObject_o *)v8,
                                                                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          sub_1B68678(&this->fields.cmdSpellWinComp),
          (gameObject = (UnityEngine_GameObject_o *)*p_cmdSpellWinComp) == 0LL) )
    {
      sub_1B68930(gameObject, v10);
    }
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_33421184(v12, this->fields.cmdSpellWinInfo, 0LL);
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
  __int64 v8; // x1
  int32_t Month; // w22
  int32_t Day; // w21
  UnityEngine_Transform_o *IsOpen; // x0
  __int64 v12; // x1
  char v13; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  MstProfileComponent_c *v16; // x0
  UnityEngine_GameObject_o *v17; // x24
  float v18; // s0
  MstProfileComponent_c *v19; // x0
  UILabel_o *birthDayLb; // x23
  System_String_o *v21; // x24
  Il2CppObject *v22; // x22
  Il2CppObject *PaddingBirthday; // x0
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8

  if ( (byte_4A04309 & 1) == 0 )
  {
    sub_1B686D4(&CondType_TypeInfo, callback);
    sub_1B686D4(&System_DateTime_TypeInfo, v5);
    sub_1B686D4(&LocalizationManager_TypeInfo, v6);
    sub_1B686D4(&MstProfileComponent_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_3010/*"BIRTHDAY"*/, v8);
    byte_4A04309 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v24.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v24, 0LL);
  v25.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v25, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (UnityEngine_Transform_o *)CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL);
  if ( !this->fields.birthDayInfo )
    goto LABEL_30;
  v13 = (char)IsOpen;
  IsOpen = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0LL);
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Transform__GetChild(IsOpen, 0, 0LL);
  if ( !IsOpen )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  if ( (v13 & 1) != 0 )
  {
    v16 = MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v16 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v16->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, RESET_BIRTH_DAY_ADJUST_PX, 0LL);
  IsOpen = (UnityEngine_Transform_o *)this->fields.genderTypeLb;
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IsOpen, 0LL);
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Transform__get_parent(IsOpen, 0LL);
  if ( !IsOpen )
    goto LABEL_30;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  v18 = 0.0;
  if ( (v13 & 1) != 0 )
  {
    v19 = MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
      v19 = MstProfileComponent_TypeInfo;
    }
    v18 = (float)v19->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v17, v18, 0LL);
  IsOpen = (UnityEngine_Transform_o *)this->fields.resetBirthBtn;
  if ( !IsOpen )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v13 & 1, 0LL);
  birthDayLb = this->fields.birthDayLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsOpen = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3010/*"BIRTHDAY"*/, 0LL);
  if ( !this->fields.inputBirthDayWindow )
    goto LABEL_30;
  v21 = (System_String_o *)IsOpen;
  IsOpen = (UnityEngine_Transform_o *)InputUserBirthDayWindow__getPaddingBirthday(
                                        this->fields.inputBirthDayWindow,
                                        Month,
                                        0LL);
  if ( !this->fields.inputBirthDayWindow
    || (v22 = (Il2CppObject *)IsOpen,
        PaddingBirthday = (Il2CppObject *)InputUserBirthDayWindow__getPaddingBirthday(
                                            this->fields.inputBirthDayWindow,
                                            Day,
                                            0LL),
        IsOpen = (UnityEngine_Transform_o *)System_String__Format_61433840(v21, v22, PaddingBirthday, 0LL),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, (System_String_o *)IsOpen, 0LL),
        (IsOpen = (UnityEngine_Transform_o *)this->fields.birthDayInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 1, 0LL), !callback) )
  {
LABEL_30:
    sub_1B68930(IsOpen, v12);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v13; // x1
  PlayMakerFSM_o *changeNameWindow; // x0

  if ( (byte_4A0430F & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_endOpenChangeDlg__, res);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_3510/*"CLICK_CANCLE"*/, v8);
    byte_4A0430F = 1;
  }
  v9 = Method_MstProfileComponent_endOpenChangeDlg__;
  if ( (*((_BYTE *)Method_MstProfileComponent_endOpenChangeDlg__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_endOpenChangeDlg__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B686B8(v9, v9[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0LL);
    MstProfileComponent__OnClickSubmit(this, changeName, v11);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    changeNameWindow = this->fields.myRoomFsm;
    if ( changeNameWindow )
    {
      PlayMakerFSM__SendEvent(changeNameWindow, (System_String_o *)StringLiteral_3510/*"CLICK_CANCLE"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B68930(changeNameWindow, v13);
  }
  changeNameWindow = (PlayMakerFSM_o *)this->fields.changeNameWindow;
  if ( !changeNameWindow )
    goto LABEL_14;
  ChangeUserNameWindow__Close((ChangeUserNameWindow_o *)changeNameWindow, 0LL);
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
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0
  __int64 v12; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x3
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_4A04315 & 1) == 0 )
  {
    sub_1B686D4(&CondType_TypeInfo, res);
    sub_1B686D4(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v7);
    sub_1B686D4(&DataManager_TypeInfo, v8);
    sub_1B686D4(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v9);
    sub_1B686D4(&Method_MstProfileComponent_endOpenSetBirthDay__, v10);
    byte_4A04315 = 1;
  }
  if ( !res )
  {
    v17 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_endOpenSetBirthDay__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B686B8(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0LL);
    inputBirthDayWindow = this->fields.inputBirthDayWindow;
    if ( inputBirthDayWindow )
    {
      InputUserBirthDayWindow__Close(inputBirthDayWindow, 0LL);
      return;
    }
    goto LABEL_22;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    if ( inputBirthDayWindow )
    {
      inputBirthDayWindow = (InputUserBirthDayWindow_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)inputBirthDayWindow,
                                                           (const MethodInfo_30E4728 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
      usrGameEnt = this->fields.usrGameEnt;
      if ( usrGameEnt )
      {
        if ( inputBirthDayWindow )
        {
          *(_QWORD *)&inputBirthDayWindow->fields.m_CachedPtr = usrGameEnt->fields.birthDay;
          goto LABEL_13;
        }
      }
    }
LABEL_22:
    sub_1B68930(inputBirthDayWindow, v12);
  }
LABEL_13:
  v14 = Method_MstProfileComponent_endOpenSetBirthDay__;
  if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_endOpenSetBirthDay__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B686B8(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
  if ( !paramList )
    goto LABEL_22;
  if ( paramList->max_length < 2 )
    sub_1B68938(inputBirthDayWindow, v12);
  MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[1], paramList->m_Items[2], v16);
}


void __fastcall MstProfileComponent__genderChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t v9; // w1

  if ( (byte_4A04319 & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_genderChange__, method);
    byte_4A04319 = 1;
  }
  v3 = Method_MstProfileComponent_genderChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_genderChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_genderChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1B68930(v5, v6);
  if ( usrGameEnt->fields.genderType == 1 )
    v9 = 2;
  else
    v9 = 1;
  MstProfileComponent__requestGenderChange(this, v9, v7);
}


void __fastcall MstProfileComponent__getCurrentUserData(MstProfileComponent_o *this, const MethodInfo *method)
{
  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrGameEnt);
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

  if ( (byte_4A042FF & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, method);
    sub_1B686D4(&Grade_TypeInfo, v3);
    byte_4A042FF = 1;
  }
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v5 = Kind;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterProfileBgImage = Grade__GetMasterProfileBgImage(v5, 0LL);
    profileBg = this->fields.profileBg;
    if ( !profileBg )
      goto LABEL_14;
    v9 = MasterProfileBgImage;
    mAtlas = profileBg->fields.mAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetGradeBase(profileBg, v9, mAtlas, 0LL);
    MasterProfileBgImage = Grade__GetMasterProfileBgLineImage(v5, 0LL);
    v11 = this->fields.profileBg;
    if ( !v11 )
LABEL_14:
      sub_1B68930(MasterProfileBgImage, v7);
    AtlasManager__SetGradeBase(this->fields.nameLine, MasterProfileBgImage, v11->fields.mAtlas, 0LL);
  }
}


void __fastcall MstProfileComponent__hideMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *masterFigure; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *userMessageInputDlg; // x0
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v7; // x1
  int32_t childCount; // w0
  int v9; // w21
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4A04300 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A04300 = 1;
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterFigure, 0LL, 0LL) )
  {
    userMessageInputDlg = (UnityEngine_Component_o *)this->fields.masterFigure;
    if ( !userMessageInputDlg )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(gameObject, 0LL);
    this->fields.masterFigure = 0LL;
    sub_1B68678(&this->fields.masterFigure);
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg
    || (SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)userMessageInputDlg, 0LL),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.expInfoWindow) == 0LL)
    || (MstExpInfoComponent__Close((MstExpInfoComponent_o *)userMessageInputDlg, 0LL),
        MstProfileComponent__releaseCmdSpellWindow(this, v7),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0LL)
    || (userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1B68930(userMessageInputDlg, v4);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)userMessageInputDlg, 0LL);
  if ( childCount >= 1 )
  {
    v9 = childCount + 1;
    do
    {
      userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !userMessageInputDlg )
        goto LABEL_24;
      userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0LL);
      if ( !userMessageInputDlg )
        goto LABEL_24;
      userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)userMessageInputDlg,
                                                         v9 - 2,
                                                         0LL);
      if ( !userMessageInputDlg )
        goto LABEL_24;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69171816(v10, 0LL);
    }
    while ( --v9 > 1 );
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListScrollView;
  if ( !userMessageInputDlg )
    goto LABEL_24;
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
  int v7; // s0
  float v8; // s3
  int v9; // s1
  int v10; // s2

  if ( (byte_4A042FE & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_8602/*"MESSAGE_CHANGE_NO_INPUT"*/, v3);
    byte_4A042FE = 1;
  }
  SelfUserGame = (UILabel_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  geometry = (System_String_o *)SelfUserGame->fields.geometry;
  if ( System_String__IsNullOrEmpty(geometry, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8602/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    if ( this->fields.messageLabel )
    {
      geometry = (System_String_o *)SelfUserGame;
      UILabel__set_effectStyle(this->fields.messageLabel, 0, 0LL);
      SelfUserGame = this->fields.messageLabel;
      if ( SelfUserGame )
      {
        v7 = 1058642330;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1B68930(SelfUserGame, v5);
  }
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  UILabel__set_effectStyle(SelfUserGame, 3, 0LL);
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  v7 = 1.0;
LABEL_13:
  v8 = 1.0;
  v9 = v7;
  v10 = v7;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)&v7, 0LL);
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  UILabel__set_text(SelfUserGame, geometry, 0LL);
}


void __fastcall MstProfileComponent__onClickCmdSpell(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4A04317 & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_onClickCmdSpell__, method);
    byte_4A04317 = 1;
  }
  v3 = Method_MstProfileComponent_onClickCmdSpell__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickCmdSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_onClickCmdSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_1B68930(0LL, v5);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._10_Open.method)(
    cmdSpellWinComp,
    0LL,
    cmdSpellWinComp->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall MstProfileComponent__onClickMessageChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  System_String_o *message; // x20
  UserMessageInputDlg_o *userMessageInputDlg; // x21
  SupportDeckNameInputMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4A0431C & 1) == 0 )
  {
    sub_1B686D4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_1B686D4(&Method_MstProfileComponent__onClickMessageChange_b__104_0__, v3);
    sub_1B686D4(&Method_MstProfileComponent_onClickMessageChange__, v4);
    byte_4A0431C = 1;
  }
  v5 = Method_MstProfileComponent_onClickMessageChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickMessageChange__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_onClickMessageChange__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v11 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1B68920(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__104_0__,
          0LL),
        !userMessageInputDlg) )
  {
    sub_1B68930(SelfUserGame, v8);
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v11, v12);
}


void __fastcall MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4A04318 & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_onSpellWindowClose__, method);
    byte_4A04318 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0LL) )
  {
    v4 = Method_MstProfileComponent_onSpellWindowClose__;
    if ( (*((_BYTE *)Method_MstProfileComponent_onSpellWindowClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_onSpellWindowClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
    if ( cmdSpellWinComp )
    {
      ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._12_Close.method)(
        cmdSpellWinComp,
        0LL,
        cmdSpellWinComp->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_10:
    sub_1B68930(cmdSpellWinComp, method);
  }
}


void __fastcall MstProfileComponent__releaseCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_cmdSpellWinComp; // x19
  UnityEngine_Object_o *v4; // x20
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4A04302 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A04302 = 1;
  }
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  p_cmdSpellWinComp = (UnityEngine_Component_o **)&this->fields.cmdSpellWinComp;
  v4 = (UnityEngine_Object_o *)cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_cmdSpellWinComp )
      sub_1B68930(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69172004(gameObject, 0LL);
    *p_cmdSpellWinComp = 0LL;
    sub_1B68678(p_cmdSpellWinComp);
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

  if ( (byte_4A0431F & 1) == 0 )
  {
    sub_1B686D4(&Method_NetworkManager_getRequest_UserNameChangeRequest___, changedName);
    sub_1B686D4(&NetworkManager_TypeInfo, v8);
    byte_4A0431F = 1;
  }
  SelfUserGame = (UserNameChangeRequest_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_8;
  paramInteger_high = HIDWORD(SelfUserGame[1].fields.paramInteger);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SelfUserGame = (UserNameChangeRequest_o *)NetworkManager__getRequest_object_(
                                              callback,
                                              (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !SelfUserGame )
LABEL_8:
    sub_1B68930(SelfUserGame, v10);
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
  void *monitor; // x8
  System_String_o *v9; // x20
  NetworkManager_ResultCallbackFunc_o *v10; // x22
  Il2CppObject *Request_object; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4A0431A & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_callbackGenderChange__, *(_QWORD *)&genderType);
    sub_1B686D4(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    this = (MstProfileComponent_o *)sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A0431A = 1;
  }
  monitor = v4[24].monitor;
  if ( !monitor )
    goto LABEL_9;
  v9 = (System_String_o *)*((_QWORD *)monitor + 3);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, v4, Method_MstProfileComponent_callbackGenderChange__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  this = (MstProfileComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this || !Request_object )
LABEL_9:
    sub_1B68930(this, *(_QWORD *)&genderType);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
    v9,
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
  Il2CppObject *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *monitor; // x8
  System_String_o *v11; // x22
  int32_t v12; // w23
  NetworkManager_ResultCallbackFunc_o *v13; // x24

  v6 = (Il2CppObject *)this;
  if ( (byte_4A04316 & 1) == 0 )
  {
    sub_1B686D4(&Method_MstProfileComponent_callbackSetBirthDay__, *(_QWORD *)&month);
    sub_1B686D4(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___, v7);
    sub_1B686D4(&NetworkManager_TypeInfo, v8);
    this = (MstProfileComponent_o *)sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4A04316 = 1;
  }
  monitor = v6[24].monitor;
  if ( !monitor )
    goto LABEL_8;
  v11 = (System_String_o *)*((_QWORD *)monitor + 3);
  v12 = *((_DWORD *)monitor + 19);
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v13, v6, Method_MstProfileComponent_callbackSetBirthDay__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (MstProfileComponent_o *)NetworkManager__getRequest_object_(
                                    v13,
                                    (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !this )
LABEL_8:
    sub_1B68930(this, *(_QWORD *)&month);
  SetUserBirthDayRequest__beginRequest((SetUserBirthDayRequest_o *)this, v11, v12, month, day, 0LL);
}


void __fastcall MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_1B68930(0LL, method);
  ChangeUserNameWindow__resetInputVal(changeNameWindow, 0LL);
}


void __fastcall MstProfileComponent__setBirthDayInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrGameEnt);
  MstProfileComponent__setUserBirthDay(this, v3);
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
  struct CommandSpellWindowComponent_o *v10; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v11; // x21

  v3 = this;
  if ( (byte_4A04305 & 1) == 0 )
  {
    sub_1B686D4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_1B686D4(&Method_MstProfileComponent_onSpellWindowClose__, v4);
    sub_1B686D4(&MstProfileComponent_TypeInfo, v5);
    this = (MstProfileComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    byte_4A04305 = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_14;
  MstProfileComponent__setCmdSpellInfo(v3, usrGameEnt->fields.genderType, v2);
  cmdSpellWinComp = (UnityEngine_Object_o *)v3->fields.cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cmdSpellWinComp, 0LL, 0LL) )
  {
    v9 = v3->fields.cmdSpellWinComp;
    this = (MstProfileComponent_o *)MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo);
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
          v11 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1B68920(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v11,
            (Il2CppObject *)v3,
            (intptr_t)Method_MstProfileComponent_onSpellWindowClose__,
            0LL);
          v10->fields.callback_close = v11;
          sub_1B68678(&v10->fields.callback_close);
          return;
        }
      }
    }
LABEL_14:
    sub_1B68930(this, method);
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
      sub_1B68930(cmdSpellIconMale, *(_QWORD *)&genderType);
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
  unsigned __int64 v10; // x24
  int v11; // w25
  int v12; // w26
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  int v27; // [xsp+Ch] [xbp-54h] BYREF
  int v28; // [xsp+18h] [xbp-48h] BYREF
  int v29; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A04304 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, recoverTime);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_3726/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_1B686D4(&StringLiteral_3729/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_4A04304 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3726/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v29 = v10;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v15, v16, v17);
      v28 = v11;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v19, v20, v21);
      v27 = v12;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v23, v24, v25);
      cmdSpellRecTimeInfo = System_String__Format_61433908(v14, v18, v22, v26, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B68930(cmdSpellRecTimeInfo, recoverTime);
  }
  cmdSpellRecTimeInfo = (System_String_o *)this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellRecTimeInfo, 0, 0LL);
}


void __fastcall MstProfileComponent__setCommandSpellInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  int64_t recoverTime; // [xsp+0h] [xbp-20h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  count = 0;
  recoverTime = 0LL;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1B68930(0LL, method);
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
  __int64 v3; // x0
  __int64 v4; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w21
  TerminalPramsManager_c *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4A0431B & 1) == 0 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A0431B = 1;
  }
  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  v3 = sub_1B68678(&this->fields.usrGameEnt);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1B68930(v3, v4);
  genderType = usrGameEnt->fields.genderType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A04407 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v4);
    byte_4A04407 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PlayerGenderType_k__BackingField = genderType;
  TerminalPramsManager__PlayerGenderType_SaveData(0LL);
  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrGameEnt);
  MstProfileComponent__setUserGender(this, v8);
  MstProfileComponent__setMstImg(this, v9);
}


void __fastcall MstProfileComponent__setHaveItemInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 itemListGrid; // x0
  struct ImageItem_Id_array *dispItemInfoList; // x8
  unsigned __int64 v5; // x25
  unsigned __int64 max_length; // x9
  int32_t v7; // w21
  UnityEngine_GameObject_o *mstItemInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_Transform_o *v11; // x23
  UnityEngine_Transform_o *v12; // x21

  if ( (byte_4A0430C & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___, method);
    byte_4A0430C = 1;
  }
  itemListGrid = (__int64)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_17;
  itemListGrid = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0LL);
  if ( !itemListGrid )
    goto LABEL_17;
  itemListGrid = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0LL);
  if ( (int)itemListGrid > 0 )
    return;
  dispItemInfoList = this->fields.dispItemInfoList;
  if ( !dispItemInfoList )
    goto LABEL_17;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = dispItemInfoList->max_length;
    if ( (__int64)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
      sub_1B68938(itemListGrid, method);
    itemListGrid = (__int64)this->fields.itemListGrid;
    if ( itemListGrid )
    {
      v7 = dispItemInfoList->m_Items[v5 + 1];
      mstItemInfo = this->fields.mstItemInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0LL);
      itemListGrid = (__int64)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                mstItemInfo,
                                transform,
                                0LL,
                                0LL);
      if ( itemListGrid )
      {
        v10 = (UnityEngine_GameObject_o *)itemListGrid;
        itemListGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemListGrid, 0LL);
        v11 = (UnityEngine_Transform_o *)itemListGrid;
        if ( !byte_4A03906 )
        {
          itemListGrid = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
          byte_4A03906 = 1;
        }
        if ( v11 )
        {
          UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          itemListGrid = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v10,
                                    (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
          if ( itemListGrid )
          {
            MstHaveItemInfoComponent__setItemInfo(
              (MstHaveItemInfoComponent_o *)itemListGrid,
              v7,
              this->fields.usrGameEnt,
              0LL);
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
  itemListGrid = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0LL);
  v12 = (UnityEngine_Transform_o *)itemListGrid;
  if ( !byte_4A03906 )
  {
    itemListGrid = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A03906 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (itemListGrid = (__int64)this->fields.itemListGrid) == 0) )
  {
LABEL_17:
    sub_1B68930(itemListGrid, method);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)itemListGrid + 440LL))(
    itemListGrid,
    *(_QWORD *)(*(_QWORD *)itemListGrid + 448LL));
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  struct UserGameEntity_o *v17; // x8
  Il2CppClass *klass; // x8
  int64_t namespaze; // x21
  __int64 v20; // x0
  __int64 v21; // x0
  void *monitor; // x21
  Il2CppClass *v23; // x22
  int32_t v24; // w21
  UnityEngine_Object_o *masterFigure; // x23
  UIMasterFigureTextureOld_o *v26; // x19
  int32_t v27; // w22
  System_Action_o *v28; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A04306 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserEquipMaster___, v4);
    sub_1B686D4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v5);
    sub_1B686D4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B686D4(&Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__, v11);
    sub_1B686D4(&MstProfileComponent___c__DisplayClass75_0_TypeInfo, v12);
    byte_4A04306 = 1;
  }
  v13 = sub_1B68920(MstProfileComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_29;
  *(_QWORD *)(v13 + 16) = this;
  Instance = (Il2CppObject *)sub_1B68678(v13 + 16);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_29;
  *(_DWORD *)(v13 + 24) = usrGameEnt->fields.genderType;
  if ( usrGameEnt->fields.activeDeckId < 1 )
    goto LABEL_22;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v17 = this->fields.usrGameEnt;
  if ( !v17 )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v17->fields.activeDeckId,
               (const MethodInfo_30E466C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  klass = Instance[3].klass;
  if ( !klass )
    goto LABEL_29;
  namespaze = (int64_t)klass->_1.namespaze;
  if ( namespaze < 1 )
  {
LABEL_22:
    v24 = 0;
  }
  else
  {
    v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1BBA5B0();
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1BBA5B0();
    Instance = **(Il2CppObject ***)(v21 + 184);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 namespaze,
                 (const MethodInfo_30E466C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_29;
    v23 = Instance[2].klass;
    monitor = Instance[2].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v23;
    *(_QWORD *)&v29.fields.fakeValue = monitor;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v29, 0LL);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    this->fields.masterFigure = MasterFigureManagerOld__CreatePrefab_37665988(
                                  this->fields.mstImgBase,
                                  2,
                                  *(_DWORD *)(v13 + 24),
                                  v24,
                                  10,
                                  0LL,
                                  0,
                                  (System_Nullable_Vector3__o)0,
                                  0LL);
    sub_1B68678(&this->fields.masterFigure);
    return;
  }
  v26 = this->fields.masterFigure;
  v27 = *(_DWORD *)(v13 + 24);
  v28 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__,
    0LL);
  if ( !v26 )
LABEL_29:
    sub_1B68930(Instance, v15);
  UIMasterFigureTextureOld__SetCharacter(v26, 2, v27, v24, v28, 0, 0LL);
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
  if ( (byte_4A04308 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MstProfileComponent_closeSetBirthDayDlg__, v3);
    this = (MstProfileComponent_o *)sub_1B686D4(&NetworkManager_TypeInfo, v4);
    byte_4A04308 = 1;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1B68930(this, method);
  }
  this = (MstProfileComponent_o *)v2->fields.setBirthBtn;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v2->fields.dtBirthDay = NetworkManager__getDateTime_38135136(birthDay, 0LL);
  v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v2, Method_MstProfileComponent_closeSetBirthDayDlg__, 0LL);
  MstProfileComponent__dispSetBirth(v2, v7, v8);
}


void __fastcall MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t lateExp; // [xsp+8h] [xbp-28h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4A0430B & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_429/*"#,0"*/, method);
    byte_4A0430B = 1;
  }
  exp = 0LL;
  lateExp = 0LL;
  barExp = 0.0;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_9;
  if ( !UserGameEntity__getExpInfo(usrGameEnt, &exp, &lateExp, &barExp, 0LL) )
    return;
  userExpLb = this->fields.userExpLb;
  usrGameEnt = (UserGameEntity_o *)System_Int64__ToString_62229924(
                                     (int64_t)&lateExp,
                                     (System_String_o *)StringLiteral_429/*"#,0"*/,
                                     0LL);
  if ( !userExpLb
    || (UILabel__set_text(userExpLb, (System_String_o *)usrGameEnt, 0LL),
        (usrGameEnt = (UserGameEntity_o *)this->fields.expBar) == 0LL) )
  {
LABEL_9:
    sub_1B68930(usrGameEnt, method);
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
  if ( (byte_4A04307 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1B686D4(&Gender_TypeInfo, method);
    byte_4A04307 = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_8;
  genderType = usrGameEnt->fields.genderType;
  v2->fields.currentGenderType = genderType;
  genderTypeLb = v2->fields.genderTypeLb;
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this = (MstProfileComponent_o *)Gender__ToName(genderType, 0LL);
  if ( !genderTypeLb )
LABEL_8:
    sub_1B68930(this, method);
  UILabel__set_text(genderTypeLb, (System_String_o *)this, 0LL);
}


void __fastcall MstProfileComponent__setUserLv(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  __int64 v3; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UIExtrusionLabel_o *userLevelLb; // x20
  MstProfileComponent_o *v6; // x1
  BalanceConfig_c *v7; // x0
  UILabel_o *userMaxLvLb; // x19
  MstProfileComponent_o *v9; // x1

  v2 = this;
  if ( (byte_4A0430A & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    this = (MstProfileComponent_o *)sub_1B686D4(&StringLiteral_1/*""*/, v3);
    byte_4A0430A = 1;
  }
  usrGameEnt = v2->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_15;
  userLevelLb = v2->fields.userLevelLb;
  this = (MstProfileComponent_o *)System_Int32__ToString((int)usrGameEnt + 80, 0LL);
  if ( !userLevelLb )
    goto LABEL_15;
  if ( this )
    v6 = this;
  else
    v6 = (MstProfileComponent_o *)StringLiteral_1/*""*/;
  UIExtrusionLabel__set_text(userLevelLb, (System_String_o *)v6, 0LL);
  v7 = BalanceConfig_TypeInfo;
  userMaxLvLb = v2->fields.userMaxLvLb;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  this = (MstProfileComponent_o *)System_Int32__ToString((unsigned int)v7->static_fields + 24, 0LL);
  if ( !userMaxLvLb )
LABEL_15:
    sub_1B68930(this, method);
  if ( this )
    v9 = this;
  else
    v9 = (MstProfileComponent_o *)StringLiteral_1/*""*/;
  UILabel__set_text(userMaxLvLb, (System_String_o *)v9, 0LL);
}


void __fastcall MstProfileComponent__setUserName(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8

  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (this = (MstProfileComponent_o *)this->fields.userNameTxt) == 0LL )
    sub_1B68930(this, method);
  UILabel__set_text((UILabel_o *)this, usrGameEnt->fields.name, 0LL);
}


void __fastcall MstProfileComponent__showChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  ChangeUserNameWindow_o *v5; // x20
  System_String_o *v6; // x21
  ChangeUserNameWindow_CallbackFunc_o *v7; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4A0430E & 1) == 0 )
  {
    sub_1B686D4(&ChangeUserNameWindow_CallbackFunc_TypeInfo, method);
    this = (MstProfileComponent_o *)sub_1B686D4(&Method_MstProfileComponent_endOpenChangeDlg__, v3);
    byte_4A0430E = 1;
  }
  monitor = v2[24].monitor;
  if ( !monitor
    || (v5 = (ChangeUserNameWindow_o *)v2[2].monitor,
        v6 = (System_String_o *)*((_QWORD *)monitor + 3),
        v7 = (ChangeUserNameWindow_CallbackFunc_o *)sub_1B68920(ChangeUserNameWindow_CallbackFunc_TypeInfo),
        ChangeUserNameWindow_CallbackFunc___ctor(v7, v2, (intptr_t)Method_MstProfileComponent_endOpenChangeDlg__, 0LL),
        !v5) )
  {
    sub_1B68930(this, method);
  }
  ChangeUserNameWindow__OpenChangeNameWindow(v5, v6, v7, 0LL);
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
  __int64 v12; // x0
  __int64 v13; // x0
  DataManager_o *UserId; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t monitor_high; // w20
  int monitor; // w24
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t NextLoginBonusDay; // w21
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v26; // x0
  UILabel_o *totalLoginLb; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  int32_t v38; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v39; // [xsp+8h] [xbp-48h] BYREF
  int v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A04313 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_TotalLoginMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserLoginMaster___, v3);
    sub_1B686D4(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__, v4);
    sub_1B686D4(&int_TypeInfo, v5);
    sub_1B686D4(&LocalizationManager_TypeInfo, v6);
    sub_1B686D4(&NetworkManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_1B686D4(&StringLiteral_24888/*"{0:N0}"*/, v9);
    sub_1B686D4(&StringLiteral_1/*""*/, v10);
    sub_1B686D4(&StringLiteral_9204/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v11);
    byte_4A04313 = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BBA5B0();
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BBA5B0();
  UserId = **(DataManager_o ***)(v13 + 184);
  if ( !UserId )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        UserId,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserLoginMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             (int64_t)UserId,
             (const MethodInfo_30E466C *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    monitor = (int)Entity[1].monitor;
    monitor_high = HIDWORD(Entity[1].monitor);
    v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BBA5B0();
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1BBA5B0();
    UserId = **(DataManager_o ***)(v23 + 184);
    if ( !UserId )
      goto LABEL_28;
    UserId = (DataManager_o *)DataManager__GetMasterData_object_(
                                UserId,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TotalLoginMaster___);
    if ( !UserId )
      goto LABEL_28;
    NextLoginBonusDay = TotalLoginMaster__getNextLoginBonusDay((TotalLoginMaster_o *)UserId, monitor_high, 0LL);
  }
  else
  {
    NextLoginBonusDay = 0;
    monitor_high = 0;
    monitor = 0;
  }
  seqLoginLb = this->fields.seqLoginLb;
  v40 = monitor;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v17, v18, v19);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24888/*"{0:N0}"*/, v26, 0LL);
  if ( !seqLoginLb )
    goto LABEL_28;
  UILabel__set_text(seqLoginLb, (System_String_o *)UserId, 0LL);
  totalLoginLb = this->fields.totalLoginLb;
  v39 = monitor_high;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v28, v29, v30);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24888/*"{0:N0}"*/, v31, 0LL);
  if ( !totalLoginLb )
    goto LABEL_28;
  UILabel__set_text(totalLoginLb, (System_String_o *)UserId, 0LL);
  nextLoginBonusLb = this->fields.nextLoginBonusLb;
  if ( NextLoginBonusDay < 1 )
  {
    method = (const MethodInfo *)StringLiteral_1/*""*/;
    if ( nextLoginBonusLb )
      goto LABEL_26;
LABEL_28:
    sub_1B68930(UserId, method);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9204/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0LL);
  v38 = NextLoginBonusDay;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v34, v35, v36);
  UserId = (DataManager_o *)System_String__Format(v33, v37, 0LL);
  method = (const MethodInfo *)UserId;
  if ( !nextLoginBonusLb )
    goto LABEL_28;
LABEL_26:
  UILabel__set_text(nextLoginBonusLb, (System_String_o *)method, 0LL);
}


void __fastcall MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v4; // x1
  MyRoomBackGroundManager_o *bgManager; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int64_t recoverTime; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A042FD & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A042FD = 1;
  }
  count = 0;
  recoverTime = 0LL;
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    bgManager = this->fields.bgManager;
    if ( !bgManager )
      goto LABEL_12;
    MyRoomBackGroundManager__QuitBackGround(bgManager, 0LL);
  }
  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrGameEnt);
  MstProfileComponent__createCmdSpellWindow(this, v6);
  MstProfileComponent__messageSetup(this, v7);
  MstProfileComponent__gradeSetup(this, v8);
  bgManager = (MyRoomBackGroundManager_o *)this->fields.usrGameEnt;
  if ( !bgManager )
LABEL_12:
    sub_1B68930(bgManager, v4);
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)bgManager, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v10);
  }
  MstProfileComponent__SetProfileData(this, v9);
}


void __fastcall MstProfileComponent__showSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x20
  InputUserBirthDayWindow_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A04314 & 1) == 0 )
  {
    sub_1B686D4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, method);
    sub_1B686D4(&Method_MstProfileComponent_endOpenSetBirthDay__, v3);
    sub_1B686D4(&Method_MstProfileComponent_showSetBirthDayDlg__, v4);
    byte_4A04314 = 1;
  }
  v5 = Method_MstProfileComponent_showSetBirthDayDlg__;
  if ( (*((_BYTE *)Method_MstProfileComponent_showSetBirthDayDlg__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC(Method_MstProfileComponent_showSetBirthDayDlg__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v8 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_1B68920(InputUserBirthDayWindow_CallbackFunc_TypeInfo);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    0LL);
  if ( !inputBirthDayWindow )
    sub_1B68930(v9, v10);
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent_ClickDelegate___ctor(
        MstProfileComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B68678(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A9894;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A9854;
}


System_IAsyncResult_o *__fastcall MstProfileComponent_ClickDelegate__BeginInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B68688(this, &v5, callback, object);
}


void __fastcall MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall MstProfileComponent_ClickDelegate__Invoke(
        MstProfileComponent_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MstProfileComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4A04324 & 1) == 0 )
  {
    sub_1B686D4(&MstProfileComponent___c_TypeInfo, v1);
    byte_4A04324 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(MstProfileComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MstProfileComponent___c_TypeInfo->static_fields->__9 = (struct MstProfileComponent___c_o *)v2;
  sub_1B68678(MstProfileComponent___c_TypeInfo->static_fields);
}


void __fastcall MstProfileComponent___c___ctor(MstProfileComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MstProfileComponent___c___ShowMstProfile_b__62_1(
        MstProfileComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A04325 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A04325 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
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
  struct System_Action_o *endLoadCallback; // x8
  __int64 v8; // x1
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v10; // x8
  MstProfileComponent___c_c *v11; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__62_1; // x20
  Il2CppObject *v14; // x21
  struct MstProfileComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4A04326 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B686D4(&Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, v5);
    sub_1B686D4(&MstProfileComponent___c_TypeInfo, v6);
    byte_4A04326 = 1;
  }
  endLoadCallback = this->fields.endLoadCallback;
  if ( endLoadCallback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endLoadCallback->fields.m_target)(
      endLoadCallback->fields.original_method_info,
      *(_QWORD *)&endLoadCallback->fields.extra_arg);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    v11 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    if ( !MstProfileComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo);
      v11 = MstProfileComponent___c_TypeInfo;
    }
    _9__62_1 = v11->static_fields->__9__62_1;
    if ( !_9__62_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = MstProfileComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(_9__62_1, v14, Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, 0LL);
      static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_1 = _9__62_1;
      v11 = (MstProfileComponent___c_c *)sub_1B68678(&static_fields->__9__62_1);
    }
    if ( !Instance )
      sub_1B68930(v11, v8);
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, _9__62_1, 0LL);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B68930(this, method);
  MstProfileComponent__setCmdSpellInfo(this->fields.__4__this, this->fields.genderType, v2);
}