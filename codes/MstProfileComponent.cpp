void __fastcall MstProfileComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MstProfileComponent_StaticFields *static_fields; // x8

  if ( (byte_4B116FC & 1) == 0 )
  {
    sub_1BCA7E0(&MstProfileComponent_TypeInfo, v1, v2);
    byte_4B116FC = 1;
  }
  static_fields = MstProfileComponent_TypeInfo->static_fields;
  static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  *(_QWORD *)&static_fields->SPELL_WINDOW_ALPHA_TIME = 0x436100003E19999ALL;
  static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void __fastcall MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Array_o *v6; // x0
  struct ImageItem_Id_array *v7; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B116FB & 1) == 0 )
  {
    sub_1BCA7E0(&ImageItem_Id___TypeInfo, method, v2);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91,
      v4,
      v5);
    byte_4B116FB = 1;
  }
  v6 = (System_Array_o *)sub_1BCA888(ImageItem_Id___TypeInfo, 8LL);
  v8.fields.value = Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91;
  v7 = (struct ImageItem_Id_array *)v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v6, v8, 0LL);
  this->fields.dispItemInfoList = v7;
  sub_1BCA784(&this->fields.dispItemInfoList, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct MstProfileComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v11; // x0
  QuestRewardTokenAction_c *klass; // x8

  if ( (byte_4B116F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_OnClickBack__, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B116F8 = 1;
  }
  v6 = Method_MstProfileComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OnClickBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_OnClickBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B10F83 = 1;
  }
  v11 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    v11 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v11->fields.boardGameTokenAction->klass;
  if ( !klass || (v11 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
    sub_1BCAA3C(v11, v8);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v11, 0LL);
}


void __fastcall MstProfileComponent__OnClickNameChangeBtn(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B116E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_OnClickNameChangeBtn__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B116E7 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    v7 = Method_MstProfileComponent_OnClickNameChangeBtn__;
    if ( (*((_BYTE *)Method_MstProfileComponent_OnClickNameChangeBtn__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_OnClickNameChangeBtn__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    MstProfileComponent__showChangeDlg(this, v9);
  }
}


void __fastcall MstProfileComponent__OnClickSubmit(
        MstProfileComponent_o *this,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *myRoomFsm; // x21
  __int64 v10; // x1
  PlayMakerFSM_o *Fsm; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B116EA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, changeName, method);
    sub_1BCA7E0(&StringLiteral_4479/*"ChangeUserName"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_3598/*"CLICK_SUBMIT"*/, v7, v8);
    byte_4B116EA = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, changeName);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    Fsm = this->fields.myRoomFsm;
    if ( !Fsm
      || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL)) == 0LL
      || (Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource) == 0LL
      || (Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    (System_String_o *)StringLiteral_4479/*"ChangeUserName"*/,
                                    0LL)) == 0LL
      || (Fsm->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)changeName,
          sub_1BCA784(&Fsm->fields.addEventHandlers, changeName),
          (Fsm = this->fields.myRoomFsm) == 0LL) )
    {
      sub_1BCAA3C(Fsm, v10);
    }
    PlayMakerFSM__SendEvent(Fsm, (System_String_o *)StringLiteral_3598/*"CLICK_SUBMIT"*/, 0LL);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_1BCA784(&this->fields.changeName, changeName);
    MstProfileComponent__checkInput(this, v12);
  }
}


void __fastcall MstProfileComponent__OpenExpInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  MstExpInfoComponent_o *expInfoWindow; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UserGameEntity_o *usrGameEnt; // x8

  if ( (byte_4B116EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_OpenExpInfo__, method, v2);
    byte_4B116EC = 1;
  }
  v4 = Method_MstProfileComponent_OpenExpInfo__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OpenExpInfo__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_OpenExpInfo__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0LL )
    sub_1BCAA3C(expInfoWindow, v7);
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, v8);
}


void __fastcall MstProfileComponent__SetProfileData(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x20
  MstProfileComponent_c *v15; // x0
  float MASTER_PROFILE_INFO_X_POS; // s8
  int32_t width; // w21
  float v18; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1

  if ( (byte_4B116DD & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&MstProfileComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9040/*"MasterProfileInfo"*/, v8, v9);
    byte_4B116DD = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v10);
    if ( !FSUtility__IsTablet(0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_18;
      v14 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(
                                         transform,
                                         (System_String_o *)StringLiteral_9040/*"MasterProfileInfo"*/,
                                         0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
      {
        v15 = MstProfileComponent_TypeInfo;
        if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, v10);
          v15 = MstProfileComponent_TypeInfo;
        }
        MASTER_PROFILE_INFO_X_POS = v15->static_fields->MASTER_PROFILE_INFO_X_POS;
        width = UnityEngine_Screen__get_width(0LL);
        transform = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0LL);
        if ( v14 )
        {
          v18 = (float)((float)(MASTER_PROFILE_INFO_X_POS * (float)width) / (float)(int)transform) / 1.7778;
          gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v18, 0LL);
          goto LABEL_17;
        }
LABEL_18:
        sub_1BCAA3C(transform, v12);
      }
    }
  }
LABEL_17:
  MstProfileComponent__setMstImg(this, v10);
  MstProfileComponent__setUserName(this, v20);
  MstProfileComponent__setUserGender(this, v21);
  MstProfileComponent__setUserBirthDay(this, v22);
  MstProfileComponent__setUserLv(this, v23);
  MstProfileComponent__setUserExp(this, v24);
  MstProfileComponent__setHaveItemInfo(this, v25);
  MstProfileComponent__setCmdSpellImg(this, v26);
  MstProfileComponent__showLoginCountInfo(this, v27);
}


void __fastcall MstProfileComponent__ShowMstProfile(
        MstProfileComponent_o *this,
        MstProfileComponent_ClickDelegate_o *closeCallback,
        System_Action_o *endLoadCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x22
  __int64 v28; // x1
  __int64 v29; // x1
  System_String_o *v30; // x23
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  Il2CppObject *titleInfoPref; // x23
  Il2CppObject *v36; // x23
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  struct TitleInfoControl_o **p_titleInfo; // x23
  TitleInfoControl_o *titleInfo; // x24
  TitleInfoControl_o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x25
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  MyRoomBackGroundManager_o *bgManager; // x19
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_o *v52; // x20
  int64_t recoverTime; // [xsp+8h] [xbp-58h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B116D6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closeCallback, endLoadCallback);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v7, v8);
    sub_1BCA7E0(&Method_MstProfileComponent_OnClickBack__, v9, v10);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&SoundManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__, v19, v20);
    sub_1BCA7E0(&MstProfileComponent___c__DisplayClass62_0_TypeInfo, v21, v22);
    byte_4B116D6 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  v23 = (Il2CppObject *)sub_1BCAA2C(
                          MstProfileComponent___c__DisplayClass62_0_TypeInfo,
                          closeCallback,
                          endLoadCallback,
                          method);
  System_Object___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  v23[1].klass = (Il2CppClass *)endLoadCallback;
  sub_1BCA784(&v23[1], endLoadCallback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v28);
  v30 = MyRoomControl__getChangeMyRoomBgm(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v29);
  SoundManager__playBgm(v30, 0LL);
  MstProfileComponent__createCmdSpellWindow(this, v31);
  MstProfileComponent__messageSetup(this, v32);
  MstProfileComponent__gradeSetup(this, v33);
  titleInfoPref = (Il2CppObject *)this->fields.titleInfoPref;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  v36 = UnityEngine_Object__Instantiate_object_(
          titleInfoPref,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v36, layer, 0LL);
  if ( !v36 )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v36,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  p_titleInfo = &this->fields.titleInfo;
  this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
  sub_1BCA784(&this->fields.titleInfo, Component_object);
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
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 46, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)gameObject, 1, 46, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)*p_titleInfo;
  if ( !*p_titleInfo )
    goto LABEL_28;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 0, 0LL);
  v41 = this->fields.titleInfo;
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)this, (intptr_t)Method_MstProfileComponent_OnClickBack__, 0LL);
  if ( !v41 )
    goto LABEL_28;
  TitleInfoControl__SetBackBtnAct(v41, v45, 0LL);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_1BCA784(&this->fields.callbackFunc, closeCallback);
  }
  gameObject = (UnityEngine_GameObject_o *)*p_usrGameEnt;
  if ( !*p_usrGameEnt )
    goto LABEL_28;
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)gameObject, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v47);
  }
  MstProfileComponent__SetProfileData(this, v46);
  bgManager = this->fields.bgManager;
  v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v50, v51);
  System_Action___ctor(v52, v23, Method_MstProfileComponent___c__DisplayClass62_0__ShowMstProfile_b__0__, 0LL);
  if ( !bgManager
    || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v52, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)*p_titleInfo) == 0LL) )
  {
LABEL_28:
    sub_1BCAA3C(gameObject, v25);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 1, 0LL);
}


void __fastcall MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B116D5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B116D5 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
    }
    v7.fields.y = 0.0;
    v7.fields.z = 0.0;
    v7.fields.x = 1200.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v7, 0LL);
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
  __int64 v8; // x2
  struct UILabel_o *userNameTxt; // x8
  System_String_o *mText; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  MstProfileComponent_o *v12; // x0
  const MethodInfo *v13; // x4

  v6 = this;
  if ( (byte_4B116FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_callbackChangeMessage__, result, changeName);
    this = (MstProfileComponent_o *)sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    byte_4B116FD = 1;
  }
  if ( result )
  {
    userNameTxt = v6->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     result,
                                                     changeName,
                                                     method);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)v6,
        Method_MstProfileComponent_callbackChangeMessage__,
        0LL);
      MstProfileComponent__requestChangeName(v12, mText, changeName, v11, v13);
      return;
    }
LABEL_8:
    sub_1BCAA3C(this, result);
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
  if ( (byte_4B116F7 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, result, method);
    byte_4B116F7 = 1;
  }
  if ( !result
    || (this = (MstProfileComponent_o *)System_String__Equals_62409536(
                                          result,
                                          (System_String_o *)StringLiteral_22465/*"ok"*/,
                                          0LL),
        !v4->fields.userMessageInputDlg) )
  {
    sub_1BCAA3C(this, result);
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
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4B116FA & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, result, method);
    byte_4B116FA = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    MstProfileComponent__closeChangeDlg(v4, (const MethodInfo *)result);
    MstProfileComponent__showMstProfile(v4, v5);
    return;
  }
  this = (MstProfileComponent_o *)v4->fields.changeNameWindow;
  if ( !this
    || (ChangeUserNameWindow__resetInputVal((ChangeUserNameWindow_o *)this, (const MethodInfo *)result),
        (this = (MstProfileComponent_o *)v4->fields.changeNameWindow) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, result);
  }
  ChangeUserNameWindow__Close_31685572((ChangeUserNameWindow_o *)this, 0LL, v6);
}


void __fastcall MstProfileComponent__callbackGenderChange(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
  MstProfileComponent__setGenderInfo(this, v5);
}


void __fastcall MstProfileComponent__callbackSetBirthDay(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
  MstProfileComponent__setBirthDayInfo(this, v5);
}


void __fastcall MstProfileComponent__checkInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v11; // x1
  void *SelfUserGame; // x0
  System_String_o *changeName; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  System_String_o *v16; // x21
  NetworkManager_ResultCallbackFunc_o *v17; // x22
  MstProfileComponent_o *v18; // x0
  const MethodInfo *v19; // x4

  if ( (byte_4B116EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_callbackChangeName__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_3485/*"CHECK_OK"*/, v8, v9);
    byte_4B116EB = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    SelfUserGame = this->fields.myRoomFsm;
    if ( SelfUserGame )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_3485/*"CHECK_OK"*/, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(SelfUserGame, v11);
  }
  changeName = this->fields.changeName;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_10;
  v16 = (System_String_o *)*((_QWORD *)SelfUserGame + 30);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v14, v15);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_MstProfileComponent_callbackChangeName__,
    0LL);
  MstProfileComponent__requestChangeName(v18, changeName, v16, v17, v19);
}


void __fastcall MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_1BCAA3C(0LL, method);
  ChangeUserNameWindow__Close_31685572(changeNameWindow, 0LL, v2);
}


void __fastcall MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_1BCAA3C(0LL, method);
  InputUserBirthDayWindow__Close_31690100(inputBirthDayWindow, 0LL, v2);
}


void __fastcall MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct CommandSpellWindowComponent_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  __int64 v10; // x1
  Il2CppObject *cmdSpellWinPrefab; // x21
  Il2CppObject *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4B116DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B116DB = 1;
  }
  p_cmdSpellWinComp = &this->fields.cmdSpellWinComp;
  cmdSpellWinComp = (UnityEngine_Object_o *)this->fields.cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cmdSpellWinComp, 0LL, 0LL) )
  {
    cmdSpellWinPrefab = (Il2CppObject *)this->fields.cmdSpellWinPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v12 = UnityEngine_Object__Instantiate_object_(
            cmdSpellWinPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
          GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v12, layer, 0LL),
          !v12)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v12,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          *p_cmdSpellWinComp = (struct CommandSpellWindowComponent_o *)Component_object,
          sub_1BCA784(&this->fields.cmdSpellWinComp, Component_object),
          (gameObject = (UnityEngine_GameObject_o *)*p_cmdSpellWinComp) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v14);
    }
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(v17, this->fields.cmdSpellWinInfo, 0LL);
  }
}


void __fastcall MstProfileComponent__dispSetBirth(
        MstProfileComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t Month; // w22
  __int64 v14; // x1
  int32_t Day; // w21
  UnityEngine_Transform_o *IsOpen; // x0
  __int64 v17; // x1
  char v18; // w23
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  MstProfileComponent_c *v22; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x24
  float v25; // s0
  MstProfileComponent_c *v26; // x0
  __int64 v27; // x1
  UILabel_o *birthDayLb; // x23
  const MethodInfo *v29; // x2
  System_String_o *v30; // x24
  const MethodInfo *v31; // x2
  Il2CppObject *v32; // x22
  Il2CppObject *PaddingBirthday; // x0
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8

  if ( (byte_4B116E3 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, callback, method);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&MstProfileComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3054/*"BIRTHDAY"*/, v11, v12);
    byte_4B116E3 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, callback);
  v34.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v34, 0LL);
  v35.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v35, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14);
  IsOpen = (UnityEngine_Transform_o *)CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL);
  if ( !this->fields.birthDayInfo )
    goto LABEL_30;
  v18 = (char)IsOpen;
  IsOpen = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0LL);
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Transform__GetChild(IsOpen, 0, 0LL);
  if ( !IsOpen )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  if ( (v18 & 1) != 0 )
  {
    v22 = MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, v19);
      v22 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v22->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
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
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0LL);
  v25 = 0.0;
  if ( (v18 & 1) != 0 )
  {
    v26 = MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, v23);
      v26 = MstProfileComponent_TypeInfo;
    }
    v25 = (float)v26->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v24, v25, 0LL);
  IsOpen = (UnityEngine_Transform_o *)this->fields.resetBirthBtn;
  if ( !IsOpen )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v18 & 1, 0LL);
  birthDayLb = this->fields.birthDayLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  IsOpen = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3054/*"BIRTHDAY"*/, 0LL);
  if ( !this->fields.inputBirthDayWindow )
    goto LABEL_30;
  v30 = (System_String_o *)IsOpen;
  IsOpen = (UnityEngine_Transform_o *)InputUserBirthDayWindow__getPaddingBirthday(
                                        (InputUserBirthDayWindow_o *)IsOpen,
                                        Month,
                                        v29);
  if ( !this->fields.inputBirthDayWindow
    || (v32 = (Il2CppObject *)IsOpen,
        PaddingBirthday = (Il2CppObject *)InputUserBirthDayWindow__getPaddingBirthday(
                                            (InputUserBirthDayWindow_o *)IsOpen,
                                            Day,
                                            v31),
        IsOpen = (UnityEngine_Transform_o *)System_String__Format_62415592(v30, v32, PaddingBirthday, 0LL),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, (System_String_o *)IsOpen, 0LL),
        (IsOpen = (UnityEngine_Transform_o *)this->fields.birthDayInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 1, 0LL), !callback) )
  {
LABEL_30:
    sub_1BCAA3C(IsOpen, v17);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  UnityEngine_Object_o *myRoomFsm; // x20
  const MethodInfo *v16; // x1
  PlayMakerFSM_o *v17; // x0

  if ( (byte_4B116E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_endOpenChangeDlg__, res, changeName);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_3560/*"CLICK_CANCLE"*/, v9, v10);
    byte_4B116E9 = 1;
  }
  v11 = Method_MstProfileComponent_endOpenChangeDlg__;
  if ( (*((_BYTE *)Method_MstProfileComponent_endOpenChangeDlg__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_endOpenChangeDlg__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0LL);
    MstProfileComponent__OnClickSubmit(this, changeName, v13);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
    myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
    {
      v17 = this->fields.myRoomFsm;
      if ( !v17 )
        sub_1BCAA3C(0LL, v16);
      PlayMakerFSM__SendEvent(v17, (System_String_o *)StringLiteral_3560/*"CLICK_CANCLE"*/, 0LL);
    }
    else
    {
      MstProfileComponent__closeChangeDlg(this, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstProfileComponent__endOpenSetBirthDay(
        MstProfileComponent_o *this,
        bool res,
        System_Int32_array *paramList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  const MethodInfo *v21; // x3
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4B116EF & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, res, paramList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v11, v12);
    sub_1BCA7E0(&Method_MstProfileComponent_endOpenSetBirthDay__, v13, v14);
    byte_4B116EF = 1;
  }
  if ( res )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, res);
    if ( CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
      if ( !Master_object )
        goto LABEL_21;
      Master_object = DataMasterBase_object__object__long___GetSingleEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (const MethodInfo_31B30A8 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
      usrGameEnt = this->fields.usrGameEnt;
      if ( !usrGameEnt || !Master_object )
        goto LABEL_21;
      Master_object[1].klass = (Il2CppClass *)usrGameEnt->fields.birthDay;
    }
    v19 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_endOpenSetBirthDay__);
    v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 8, 0LL);
    if ( paramList )
    {
      if ( paramList->max_length < 2 )
        sub_1BCAA44(Master_object, v17);
      MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[1], paramList->m_Items[2], v21);
      return;
    }
LABEL_21:
    sub_1BCAA3C(Master_object, v17);
  }
  v22 = Method_MstProfileComponent_endOpenSetBirthDay__;
  if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_endOpenSetBirthDay__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 1, 0LL);
  MstProfileComponent__closeSetBirthDayDlg(this, v24);
}


void __fastcall MstProfileComponent__genderChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t v10; // w1

  if ( (byte_4B116F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_genderChange__, method, v2);
    byte_4B116F3 = 1;
  }
  v4 = Method_MstProfileComponent_genderChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_genderChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_genderChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1BCAA3C(v6, v7);
  if ( usrGameEnt->fields.genderType == 1 )
    v10 = 2;
  else
    v10 = 1;
  MstProfileComponent__requestGenderChange(this, v10, v8);
}


void __fastcall MstProfileComponent__getCurrentUserData(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
}


void __fastcall MstProfileComponent__gradeSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t Kind; // w0
  __int64 v7; // x1
  int32_t v8; // w20
  System_String_o *MasterProfileBgImage; // x0
  __int64 v10; // x1
  struct UISprite_o *profileBg; // x22
  System_String_o *v12; // x21
  UIAtlas_o *mAtlas; // x23
  struct UISprite_o *v14; // x8

  if ( (byte_4B116D9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Grade_TypeInfo, v4, v5);
    byte_4B116D9 = 1;
  }
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v8 = Kind;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v7);
    MasterProfileBgImage = Grade__GetMasterProfileBgImage(v8, 0LL);
    profileBg = this->fields.profileBg;
    if ( !profileBg )
      goto LABEL_14;
    v12 = MasterProfileBgImage;
    mAtlas = profileBg->fields.mAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
    AtlasManager__SetGradeBase(profileBg, v12, mAtlas, 0LL);
    MasterProfileBgImage = Grade__GetMasterProfileBgLineImage(v8, 0LL);
    v14 = this->fields.profileBg;
    if ( !v14 )
LABEL_14:
      sub_1BCAA3C(MasterProfileBgImage, v10);
    AtlasManager__SetGradeBase(this->fields.nameLine, MasterProfileBgImage, v14->fields.mAtlas, 0LL);
  }
}


void __fastcall MstProfileComponent__hideMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *masterFigure; // x20
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *userMessageInputDlg; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v9; // x1
  int32_t childCount; // w0
  int v11; // w21
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20

  if ( (byte_4B116DA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B116DA = 1;
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(masterFigure, 0LL, 0LL) )
  {
    userMessageInputDlg = (UnityEngine_Component_o *)this->fields.masterFigure;
    if ( !userMessageInputDlg )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.masterFigure = 0LL;
    sub_1BCA784(&this->fields.masterFigure, 0LL);
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg
    || (SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)userMessageInputDlg, 0LL),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.expInfoWindow) == 0LL)
    || (MstExpInfoComponent__Close((MstExpInfoComponent_o *)userMessageInputDlg, v5),
        MstProfileComponent__releaseCmdSpellWindow(this, v9),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0LL)
    || (userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1BCAA3C(userMessageInputDlg, v5);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)userMessageInputDlg, 0LL);
  if ( childCount >= 1 )
  {
    v11 = childCount + 1;
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
                                                         v11 - 2,
                                                         0LL);
      if ( !userMessageInputDlg )
        goto LABEL_24;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__Destroy_70154244(v13, 0LL);
    }
    while ( --v11 > 1 );
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *SelfUserGame; // x0
  __int64 v7; // x1
  System_String_o *geometry; // x20
  int v9; // s0
  float v10; // s3
  int v11; // s1
  int v12; // s2

  if ( (byte_4B116D8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8763/*"MESSAGE_CHANGE_NO_INPUT"*/, v4, v5);
    byte_4B116D8 = 1;
  }
  SelfUserGame = (UILabel_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  geometry = (System_String_o *)SelfUserGame->fields.geometry;
  if ( System_String__IsNullOrEmpty(geometry, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8763/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    if ( this->fields.messageLabel )
    {
      geometry = (System_String_o *)SelfUserGame;
      UILabel__set_effectStyle(this->fields.messageLabel, 0, 0LL);
      SelfUserGame = this->fields.messageLabel;
      if ( SelfUserGame )
      {
        v9 = 1058642330;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1BCAA3C(SelfUserGame, v7);
  }
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  UILabel__set_effectStyle(SelfUserGame, 3, 0LL);
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  v9 = 1.0;
LABEL_13:
  v10 = 1.0;
  v11 = v9;
  v12 = v9;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)&v9, 0LL);
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  UILabel__set_text(SelfUserGame, geometry, 0LL);
}


void __fastcall MstProfileComponent__onClickCmdSpell(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4B116F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_onClickCmdSpell__, method, v2);
    byte_4B116F1 = 1;
  }
  v4 = Method_MstProfileComponent_onClickCmdSpell__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickCmdSpell__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_onClickCmdSpell__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_1BCAA3C(0LL, v6);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._10_Open.method)(
    cmdSpellWinComp,
    0LL,
    cmdSpellWinComp->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall MstProfileComponent__onClickMessageChange(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_String_o *message; // x20
  UserMessageInputDlg_o *userMessageInputDlg; // x21
  SupportDeckNameInputMenu_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x3

  if ( (byte_4B116F6 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MstProfileComponent__onClickMessageChange_b__104_0__, v4, v5);
    sub_1BCA7E0(&Method_MstProfileComponent_onClickMessageChange__, v6, v7);
    byte_4B116F6 = 1;
  }
  v8 = Method_MstProfileComponent_onClickMessageChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickMessageChange__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_onClickMessageChange__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v16 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           SupportDeckNameInputMenu_CallbackFunc_TypeInfo,
                                                           v11,
                                                           v12,
                                                           v13),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__104_0__,
          0LL),
        !userMessageInputDlg) )
  {
    sub_1BCAA3C(SelfUserGame, v11);
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v16, v17);
}


void __fastcall MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4B116F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_onSpellWindowClose__, method, v2);
    byte_4B116F2 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0LL) )
  {
    v5 = Method_MstProfileComponent_onSpellWindowClose__;
    if ( (*((_BYTE *)Method_MstProfileComponent_onSpellWindowClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_onSpellWindowClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
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
    sub_1BCAA3C(cmdSpellWinComp, method);
  }
}


void __fastcall MstProfileComponent__releaseCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_cmdSpellWinComp; // x19
  UnityEngine_Object_o *v5; // x20
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B116DC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B116DC = 1;
  }
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  p_cmdSpellWinComp = (UnityEngine_Component_o **)&this->fields.cmdSpellWinComp;
  v5 = (UnityEngine_Object_o *)cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_cmdSpellWinComp )
      sub_1BCAA3C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
    *p_cmdSpellWinComp = 0LL;
    sub_1BCA784(p_cmdSpellWinComp, 0LL);
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
  __int64 v9; // x2
  UserNameChangeRequest_o *SelfUserGame; // x0
  __int64 v11; // x1
  int32_t paramInteger_high; // w22

  if ( (byte_4B116F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserNameChangeRequest___, changedName, message);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B116F9 = 1;
  }
  SelfUserGame = (UserNameChangeRequest_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_8;
  paramInteger_high = HIDWORD(SelfUserGame[1].fields.paramInteger);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  SelfUserGame = (UserNameChangeRequest_o *)NetworkManager__getRequest_object_(
                                              callback,
                                              (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !SelfUserGame )
LABEL_8:
    sub_1BCAA3C(SelfUserGame, v11);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *monitor; // x8
  System_String_o *v13; // x20
  NetworkManager_ResultCallbackFunc_o *v14; // x22
  __int64 v15; // x1
  Il2CppObject *Request_object; // x21

  v5 = (Il2CppObject *)this;
  if ( (byte_4B116F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_callbackGenderChange__, *(_QWORD *)&genderType, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    this = (MstProfileComponent_o *)sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B116F4 = 1;
  }
  monitor = v5[24].monitor;
  if ( !monitor )
    goto LABEL_9;
  v13 = (System_String_o *)*((_QWORD *)monitor + 3);
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&genderType,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(v14, v5, Method_MstProfileComponent_callbackGenderChange__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  this = (MstProfileComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this || !Request_object )
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&genderType);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
    v13,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *monitor; // x8
  System_String_o *v14; // x22
  int32_t v15; // w23
  NetworkManager_ResultCallbackFunc_o *v16; // x24
  __int64 v17; // x1

  v6 = (Il2CppObject *)this;
  if ( (byte_4B116F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MstProfileComponent_callbackSetBirthDay__, *(_QWORD *)&month, *(_QWORD *)&day);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    this = (MstProfileComponent_o *)sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B116F0 = 1;
  }
  monitor = v6[24].monitor;
  if ( !monitor )
    goto LABEL_8;
  v14 = (System_String_o *)*((_QWORD *)monitor + 3);
  v15 = *((_DWORD *)monitor + 19);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&month,
                                                 *(_QWORD *)&day,
                                                 method);
  NetworkManager_ResultCallbackFunc___ctor(v16, v6, Method_MstProfileComponent_callbackSetBirthDay__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  this = (MstProfileComponent_o *)NetworkManager__getRequest_object_(
                                    v16,
                                    (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, *(_QWORD *)&month);
  SetUserBirthDayRequest__beginRequest((SetUserBirthDayRequest_o *)this, v14, v15, month, day, 0LL);
}


void __fastcall MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_1BCAA3C(0LL, method);
  ChangeUserNameWindow__resetInputVal(changeNameWindow, method);
}


void __fastcall MstProfileComponent__setBirthDayInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
  MstProfileComponent__setUserBirthDay(this, v4);
}


void __fastcall MstProfileComponent__setCmdSpellImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MstProfileComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  __int64 v11; // x1
  UnityEngine_Object_o *cmdSpellWinComp; // x20
  CommandSpellWindowComponent_o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  struct CommandSpellWindowComponent_o *v16; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v17; // x21

  v3 = this;
  if ( (byte_4B116DF & 1) == 0 )
  {
    sub_1BCA7E0(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MstProfileComponent_onSpellWindowClose__, v4, v5);
    sub_1BCA7E0(&MstProfileComponent_TypeInfo, v6, v7);
    this = (MstProfileComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B116DF = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_14;
  MstProfileComponent__setCmdSpellInfo(v3, usrGameEnt->fields.genderType, v2);
  cmdSpellWinComp = (UnityEngine_Object_o *)v3->fields.cmdSpellWinComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(cmdSpellWinComp, 0LL, 0LL) )
  {
    v13 = v3->fields.cmdSpellWinComp;
    this = (MstProfileComponent_o *)MstProfileComponent_TypeInfo;
    if ( !MstProfileComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, method);
    if ( v13 )
    {
      CommandSpellWindowComponent__InitializeCommandSpellDepth(
        v13,
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
        v16 = v3->fields.cmdSpellWinComp;
        if ( v16 )
        {
          v16->fields.mode = 0;
          v17 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1BCAA2C(
                                                                       CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                                       method,
                                                                       v14,
                                                                       v15);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v17,
            (Il2CppObject *)v3,
            (intptr_t)Method_MstProfileComponent_onSpellWindowClose__,
            0LL);
          v16->fields.callback_close = v17;
          sub_1BCA784(&v16->fields.callback_close, v17);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(this, method);
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
      sub_1BCAA3C(cmdSpellIconMale, *(_QWORD *)&genderType);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v13; // x24
  int v14; // w25
  int v15; // w26
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v17; // x20
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  int v21; // [xsp+Ch] [xbp-54h] BYREF
  int v22; // [xsp+18h] [xbp-48h] BYREF
  int v23; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B116DE & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, recoverTime, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3781/*"COMMAND_SPELL_RECOVER_TIME"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3784/*"COMMNAD_SPELL_RECV_TXT"*/, v9, v10);
    byte_4B116DE = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoverTime);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3784/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v13 = recoverTime / 0xE10uLL;
      v14 = (int)(recoverTime / 0x3CuLL) % 60;
      v15 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3781/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v23 = v13;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v22 = v14;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v21 = v15;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      cmdSpellRecTimeInfo = System_String__Format_62415660(v17, v18, v19, v20, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(cmdSpellRecTimeInfo, recoverTime);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  struct UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w21
  TerminalPramsManager_c *v10; // x0
  struct UserGameEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B116F5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B116F5 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  v5 = sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1BCAA3C(v5, v6);
  genderType = usrGameEnt->fields.genderType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_4B1175D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B1175D = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_PlayerGenderType_k__BackingField = genderType;
  TerminalPramsManager__PlayerGenderType_SaveData(0LL);
  v11 = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = v11;
  sub_1BCA784(&this->fields.usrGameEnt, v11);
  MstProfileComponent__setUserGender(this, v12);
  MstProfileComponent__setMstImg(this, v13);
}


void __fastcall MstProfileComponent__setHaveItemInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 itemListGrid; // x0
  struct ImageItem_Id_array *dispItemInfoList; // x8
  unsigned __int64 v6; // x25
  unsigned __int64 max_length; // x9
  int32_t v8; // w21
  UnityEngine_GameObject_o *mstItemInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v11; // x22
  __int64 v12; // x2
  UnityEngine_Transform_o *v13; // x23
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x21

  if ( (byte_4B116E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___, method, v2);
    byte_4B116E6 = 1;
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
  v6 = 0LL;
  while ( 1 )
  {
    max_length = dispItemInfoList->max_length;
    if ( (__int64)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      sub_1BCAA44(itemListGrid, method);
    itemListGrid = (__int64)this->fields.itemListGrid;
    if ( itemListGrid )
    {
      v8 = dispItemInfoList->m_Items[v6 + 1];
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
        v11 = (UnityEngine_GameObject_o *)itemListGrid;
        itemListGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemListGrid, 0LL);
        v13 = (UnityEngine_Transform_o *)itemListGrid;
        if ( !byte_4B109C6 )
        {
          itemListGrid = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v12);
          byte_4B109C6 = 1;
        }
        if ( v13 )
        {
          UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          itemListGrid = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v11,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
          if ( itemListGrid )
          {
            MstHaveItemInfoComponent__setItemInfo(
              (MstHaveItemInfoComponent_o *)itemListGrid,
              v8,
              this->fields.usrGameEnt,
              v14);
            dispItemInfoList = this->fields.dispItemInfoList;
            ++v6;
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
  v16 = (UnityEngine_Transform_o *)itemListGrid;
  if ( !byte_4B109C6 )
  {
    itemListGrid = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v15);
    byte_4B109C6 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (itemListGrid = (__int64)this->fields.itemListGrid) == 0) )
  {
LABEL_17:
    sub_1BCAA3C(itemListGrid, method);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)itemListGrid + 440LL))(
    itemListGrid,
    *(_QWORD *)(*(_QWORD *)itemListGrid + 448LL));
}


void __fastcall MstProfileComponent__setMstImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x20
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  struct UserGameEntity_o *v29; // x8
  long double v30; // q0
  Il2CppClass *klass; // x8
  int64_t namespaze; // x21
  __int64 v33; // x0
  __int64 v34; // x0
  void *monitor; // x21
  Il2CppClass *v36; // x22
  int32_t v37; // w21
  UnityEngine_Object_o *masterFigure; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  struct UIMasterFigureTextureOld_o *Prefab_38634032; // x1
  UIMasterFigureTextureOld_o *v43; // x19
  int32_t v44; // w22
  System_Action_o *v45; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B116E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__, v21, v22);
    sub_1BCA7E0(&MstProfileComponent___c__DisplayClass75_0_TypeInfo, v23, v24);
    byte_4B116E0 = 1;
  }
  v25 = sub_1BCAA2C(MstProfileComponent___c__DisplayClass75_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_29;
  *(_QWORD *)(v25 + 16) = this;
  Instance = (Il2CppObject *)sub_1BCA784(v25 + 16, this);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_29;
  *(_DWORD *)(v25 + 24) = usrGameEnt->fields.genderType;
  if ( usrGameEnt->fields.activeDeckId < 1 )
    goto LABEL_22;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v29 = this->fields.usrGameEnt;
  if ( !v29 )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v29->fields.activeDeckId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  klass = Instance[3].klass;
  if ( !klass )
    goto LABEL_29;
  namespaze = (int64_t)klass->_1.namespaze;
  if ( namespaze < 1 )
  {
LABEL_22:
    v37 = 0;
  }
  else
  {
    v33 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1C1C6BC(v30);
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C1C6BC(v30);
    Instance = **(Il2CppObject ***)(v34 + 184);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 namespaze,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_29;
    v36 = Instance[2].klass;
    monitor = Instance[2].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    *(_QWORD *)&v46.fields.currentCryptoKey = v36;
    *(_QWORD *)&v46.fields.fakeValue = monitor;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_38634032 = MasterFigureManagerOld__CreatePrefab_38634032(
                        this->fields.mstImgBase,
                        2,
                        *(_DWORD *)(v25 + 24),
                        v37,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0LL);
    this->fields.masterFigure = Prefab_38634032;
    sub_1BCA784(&this->fields.masterFigure, Prefab_38634032);
    return;
  }
  v43 = this->fields.masterFigure;
  v44 = *(_DWORD *)(v25 + 24);
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v25,
    Method_MstProfileComponent___c__DisplayClass75_0__setMstImg_b__0__,
    0LL);
  if ( !v43 )
LABEL_29:
    sub_1BCAA3C(Instance, v27);
  UIMasterFigureTextureOld__SetCharacter(v43, 2, v44, v37, v45, 0, 0LL);
}


void __fastcall MstProfileComponent__setUserBirthDay(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MstProfileComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int64_t birthDay; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2

  v3 = this;
  if ( (byte_4B116E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MstProfileComponent_closeSetBirthDayDlg__, v4, v5);
    this = (MstProfileComponent_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B116E2 = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_11;
  birthDay = usrGameEnt->fields.birthDay;
  if ( birthDay <= 0 )
  {
    this = (MstProfileComponent_o *)v3->fields.birthDayInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(this, method);
  }
  this = (MstProfileComponent_o *)v3->fields.setBirthBtn;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  v3->fields.dtBirthDay = NetworkManager__getDateTime_39270164(birthDay, 0LL);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)v3, Method_MstProfileComponent_closeSetBirthDayDlg__, 0LL);
  MstProfileComponent__dispSetBirth(v3, v14, v15);
}


void __fastcall MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserGameEntity_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t lateExp; // [xsp+8h] [xbp-28h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4B116E5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, method, v2);
    byte_4B116E5 = 1;
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
  usrGameEnt = (UserGameEntity_o *)System_Int64__ToString_63212004(
                                     (int64_t)&lateExp,
                                     (System_String_o *)StringLiteral_424/*"#,0"*/,
                                     0LL);
  if ( !userExpLb
    || (UILabel__set_text(userExpLb, (System_String_o *)usrGameEnt, 0LL),
        (usrGameEnt = (UserGameEntity_o *)this->fields.expBar) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(usrGameEnt, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)usrGameEnt, barExp, 0LL);
}


void __fastcall MstProfileComponent__setUserGender(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MstProfileComponent_o *v3; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w20
  UILabel_o *genderTypeLb; // x19

  v3 = this;
  if ( (byte_4B116E1 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_1BCA7E0(&Gender_TypeInfo, method, v2);
    byte_4B116E1 = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_8;
  genderType = usrGameEnt->fields.genderType;
  v3->fields.currentGenderType = genderType;
  genderTypeLb = v3->fields.genderTypeLb;
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
  this = (MstProfileComponent_o *)Gender__ToName(genderType, 0LL);
  if ( !genderTypeLb )
LABEL_8:
    sub_1BCAA3C(this, method);
  UILabel__set_text(genderTypeLb, (System_String_o *)this, 0LL);
}


void __fastcall MstProfileComponent__setUserLv(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MstProfileComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  UIExtrusionLabel_o *userLevelLb; // x20
  MstProfileComponent_o *v8; // x1
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  UILabel_o *userMaxLvLb; // x19
  MstProfileComponent_o *v12; // x1

  v3 = this;
  if ( (byte_4B116E4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    this = (MstProfileComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B116E4 = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_15;
  userLevelLb = v3->fields.userLevelLb;
  this = (MstProfileComponent_o *)System_Int32__ToString((int)usrGameEnt + 80, 0LL);
  if ( !userLevelLb )
    goto LABEL_15;
  if ( this )
    v8 = this;
  else
    v8 = (MstProfileComponent_o *)StringLiteral_1/*""*/;
  UIExtrusionLabel__set_text(userLevelLb, (System_String_o *)v8, 0LL);
  v10 = BalanceConfig_TypeInfo;
  userMaxLvLb = v3->fields.userMaxLvLb;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
    v10 = BalanceConfig_TypeInfo;
  }
  this = (MstProfileComponent_o *)System_Int32__ToString((unsigned int)v10->static_fields + 24, 0LL);
  if ( !userMaxLvLb )
LABEL_15:
    sub_1BCAA3C(this, method);
  if ( this )
    v12 = this;
  else
    v12 = (MstProfileComponent_o *)StringLiteral_1/*""*/;
  UILabel__set_text(userMaxLvLb, (System_String_o *)v12, 0LL);
}


void __fastcall MstProfileComponent__setUserName(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrGameEnt; // x8

  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (this = (MstProfileComponent_o *)this->fields.userNameTxt) == 0LL )
    sub_1BCAA3C(this, method);
  UILabel__set_text((UILabel_o *)this, usrGameEnt->fields.name, 0LL);
}


void __fastcall MstProfileComponent__showChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  void *monitor; // x8
  ChangeUserNameWindow_o *v8; // x20
  System_String_o *v9; // x21
  ChangeUserNameWindow_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_4B116E8 & 1) == 0 )
  {
    sub_1BCA7E0(&ChangeUserNameWindow_CallbackFunc_TypeInfo, method, v2);
    this = (MstProfileComponent_o *)sub_1BCA7E0(&Method_MstProfileComponent_endOpenChangeDlg__, v5, v6);
    byte_4B116E8 = 1;
  }
  monitor = v4[24].monitor;
  if ( !monitor
    || (v8 = (ChangeUserNameWindow_o *)v4[2].monitor,
        v9 = (System_String_o *)*((_QWORD *)monitor + 3),
        v10 = (ChangeUserNameWindow_CallbackFunc_o *)sub_1BCAA2C(
                                                       ChangeUserNameWindow_CallbackFunc_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3),
        ChangeUserNameWindow_CallbackFunc___ctor(v10, v4, (intptr_t)Method_MstProfileComponent_endOpenChangeDlg__, v11),
        !v8) )
  {
    sub_1BCAA3C(this, method);
  }
  ChangeUserNameWindow__OpenChangeNameWindow(v8, v9, v10, v12);
}


void __fastcall MstProfileComponent__showLoginCountInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x0
  __int64 v24; // x0
  DataManager_o *UserId; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  long double v29; // q0
  int32_t monitor_high; // w20
  int monitor; // w24
  __int64 v32; // x0
  __int64 v33; // x0
  int32_t NextLoginBonusDay; // w21
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v36; // x0
  UILabel_o *totalLoginLb; // x22
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v41; // x20
  Il2CppObject *v42; // x0
  int32_t v43; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B116ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalLoginMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserLoginMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_9372/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v21, v22);
    byte_4B116ED = 1;
  }
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C1C6BC(v3);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v3);
  UserId = **(DataManager_o ***)(v24 + 184);
  if ( !UserId )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        UserId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserLoginMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
  UserId = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             (int64_t)UserId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    monitor = (int)Entity[1].monitor;
    monitor_high = HIDWORD(Entity[1].monitor);
    v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1C1C6BC(v29);
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1C1C6BC(v29);
    UserId = **(DataManager_o ***)(v33 + 184);
    if ( !UserId )
      goto LABEL_28;
    UserId = (DataManager_o *)DataManager__GetMasterData_object_(
                                UserId,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalLoginMaster___);
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
  v45 = monitor;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v36, 0LL);
  if ( !seqLoginLb )
    goto LABEL_28;
  UILabel__set_text(seqLoginLb, (System_String_o *)UserId, 0LL);
  totalLoginLb = this->fields.totalLoginLb;
  v44 = monitor_high;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  UserId = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v38, 0LL);
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
    sub_1BCAA3C(UserId, method);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9372/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0LL);
  v43 = NextLoginBonusDay;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  UserId = (DataManager_o *)System_String__Format(v41, v42, 0LL);
  method = (const MethodInfo *)UserId;
  if ( !nextLoginBonusLb )
    goto LABEL_28;
LABEL_26:
  UILabel__set_text(nextLoginBonusLb, (System_String_o *)method, 0LL);
}


void __fastcall MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v5; // x1
  MyRoomBackGroundManager_o *bgManager; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  int64_t recoverTime; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B116D7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B116D7 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0LL, 0LL) )
  {
    bgManager = this->fields.bgManager;
    if ( !bgManager )
      goto LABEL_12;
    MyRoomBackGroundManager__QuitBackGround(bgManager, 0LL);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
  MstProfileComponent__createCmdSpellWindow(this, v8);
  MstProfileComponent__messageSetup(this, v9);
  MstProfileComponent__gradeSetup(this, v10);
  bgManager = (MyRoomBackGroundManager_o *)this->fields.usrGameEnt;
  if ( !bgManager )
LABEL_12:
    sub_1BCAA3C(bgManager, v5);
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)bgManager, &count, &recoverTime, 0LL) )
  {
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, recoverTime, v12);
  }
  MstProfileComponent__SetProfileData(this, v11);
}


void __fastcall MstProfileComponent__showSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  InputUserBirthDayWindow_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4B116EE & 1) == 0 )
  {
    sub_1BCA7E0(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MstProfileComponent_endOpenSetBirthDay__, v4, v5);
    sub_1BCA7E0(&Method_MstProfileComponent_showSetBirthDayDlg__, v6, v7);
    byte_4B116EE = 1;
  }
  v8 = Method_MstProfileComponent_showSetBirthDayDlg__;
  if ( (*((_BYTE *)Method_MstProfileComponent_showSetBirthDayDlg__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_MstProfileComponent_showSetBirthDayDlg__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v14 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_1BCAA2C(
                                                    InputUserBirthDayWindow_CallbackFunc_TypeInfo,
                                                    v11,
                                                    v12,
                                                    v13);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    v15);
  if ( !inputBirthDayWindow )
    sub_1BCAA3C(v16, v17);
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v14, v18);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05F24;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05EE4;
}


System_IAsyncResult_o *__fastcall MstProfileComponent_ClickDelegate__BeginInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B116FE & 1) == 0 )
  {
    sub_1BCA7E0(&MstProfileComponent___c_TypeInfo, v1, v2);
    byte_4B116FE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MstProfileComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MstProfileComponent___c_TypeInfo->static_fields->__9 = (struct MstProfileComponent___c_o *)v4;
  sub_1BCA784(MstProfileComponent___c_TypeInfo->static_fields, v4);
}


void __fastcall MstProfileComponent___c___ctor(MstProfileComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MstProfileComponent___c___ShowMstProfile_b__62_1(
        MstProfileComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B116FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B116FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Action_o *endLoadCallback; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v17; // x8
  MstProfileComponent___c_c *v18; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__62_1; // x20
  Il2CppObject *v21; // x21
  struct MstProfileComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B11700 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, v8, v9);
    sub_1BCA7E0(&MstProfileComponent___c_TypeInfo, v10, v11);
    byte_4B11700 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13);
      v17 = AvalonSceneManager_TypeInfo;
    }
    v18 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    if ( !MstProfileComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo, v13);
      v18 = MstProfileComponent___c_TypeInfo;
    }
    _9__62_1 = v18->static_fields->__9__62_1;
    if ( !_9__62_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, v13);
        v18 = MstProfileComponent___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
      System_Action___ctor(_9__62_1, v21, Method_MstProfileComponent___c__ShowMstProfile_b__62_1__, 0LL);
      static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_1 = _9__62_1;
      v18 = (MstProfileComponent___c_c *)sub_1BCA784(&static_fields->__9__62_1, _9__62_1);
    }
    if ( !Instance )
      sub_1BCAA3C(v18, v13);
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
    sub_1BCAA3C(this, method);
  MstProfileComponent__setCmdSpellInfo(this->fields.__4__this, this->fields.genderType, v2);
}