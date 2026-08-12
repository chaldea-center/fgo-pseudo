void MstProfileComponent___cctor(const MethodInfo *method)
{
  struct MstProfileComponent_StaticFields *static_fields; // x8

  if ( (byte_596B670 & 1) == 0 )
  {
    sub_2213A60(&MstProfileComponent_TypeInfo);
    byte_596B670 = 1;
  }
  static_fields = MstProfileComponent_TypeInfo->static_fields;
  static_fields->CMD_SPELL_SCROLLVIEW_DEPTH = 220;
  *(_QWORD *)&static_fields->SPELL_WINDOW_ALPHA_TIME = 0x436100003E19999ALL;
  static_fields->RESET_BIRTH_DAY_ADJUST_PX = 18;
}


void MstProfileComponent___ctor(MstProfileComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B66F & 1) == 0 )
  {
    sub_2213A60(&ImageItem_Id___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91);
    byte_596B66F = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(ImageItem_Id___TypeInfo, 8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__0D341DD08B8546E625271CE1A64255FADBDC46FAF35DEB8DBA11B35A7F4CDD91,
    0);
  this->fields.dispItemInfoList = (struct ImageItem_Id_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dispItemInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MstProfileComponent__OnClickBack(MstProfileComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct MstProfileComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v8; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8

  if ( (byte_596B66C & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_OnClickBack__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596B66C = 1;
  }
  v3 = Method_MstProfileComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
    v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v8->fields.itemGetEffectInstances->klass;
  if ( !klass || (v8 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
    sub_2213CDC(v8, v5);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v8, 0);
}


void MstProfileComponent__OnClickNameChangeBtn(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596B65B & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_OnClickNameChangeBtn__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B65B = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    v5 = Method_MstProfileComponent_OnClickNameChangeBtn__;
    if ( (*((_BYTE *)Method_MstProfileComponent_OnClickNameChangeBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_OnClickNameChangeBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    MstProfileComponent__showChangeDlg(this, v7);
  }
}


void MstProfileComponent__OnClickSubmit(
        MstProfileComponent_o *this,
        System_String_o *changeName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomFsm; // x21
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  char *Fsm; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1

  if ( (byte_596B65E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_4534/*"ChangeUserName"*/);
    sub_2213A60(&StringLiteral_3627/*"CLICK_SUBMIT"*/);
    byte_596B65E = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, changeName, method);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    Fsm = (char *)this->fields.myRoomFsm;
    if ( !Fsm
      || (Fsm = (char *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0)) == 0
      || (Fsm = (char *)*((_QWORD *)Fsm + 11)) == 0
      || (Fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                          (System_String_o *)StringLiteral_4534/*"ChangeUserName"*/,
                          0)) == 0
      || (*((_QWORD *)Fsm + 7) = changeName,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(Fsm + 56), (int32_t)changeName, v14, v15, v16, v17, v18, v19),
          (Fsm = (char *)this->fields.myRoomFsm) == 0) )
    {
      sub_2213CDC(Fsm, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, (System_String_o *)StringLiteral_3627/*"CLICK_SUBMIT"*/, 0);
  }
  else
  {
    this->fields.changeName = changeName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.changeName,
      (int32_t)changeName,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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

  if ( (byte_596B660 & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_OpenExpInfo__);
    byte_596B660 = 1;
  }
  v3 = Method_MstProfileComponent_OpenExpInfo__;
  if ( (*((_BYTE *)Method_MstProfileComponent_OpenExpInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_OpenExpInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt || (expInfoWindow = this->fields.expInfoWindow) == 0 )
    sub_2213CDC(expInfoWindow, v6);
  MstExpInfoComponent__openExpInfo(expInfoWindow, usrGameEnt->fields.exp, v7);
}


void MstProfileComponent__SetProfileData(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *v10; // x20
  __int64 v11; // x2
  MstProfileComponent_c *v12; // x0
  float MASTER_PROFILE_INFO_X_POS; // s8
  int32_t width; // w21
  float v15; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_596B651 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&MstProfileComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9322/*"MasterProfileInfo"*/);
    byte_596B651 = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method, v2);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v4, v5);
    if ( !FSUtility__IsTablet(0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_18;
      v10 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_9322/*"MasterProfileInfo"*/, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) )
      {
        v12 = MstProfileComponent_TypeInfo;
        if ( !*(&MstProfileComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, v4, v11);
          v12 = MstProfileComponent_TypeInfo;
        }
        MASTER_PROFILE_INFO_X_POS = v12->static_fields->MASTER_PROFILE_INFO_X_POS;
        width = UnityEngine_Screen__get_width(0);
        transform = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0);
        if ( v10 )
        {
          v15 = (float)((float)(MASTER_PROFILE_INFO_X_POS * (float)width) / (float)(int)transform) / 1.7778;
          gameObject = UnityEngine_Component__get_gameObject(v10, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, v15, 0);
          goto LABEL_17;
        }
LABEL_18:
        sub_2213CDC(transform, v7);
      }
    }
  }
LABEL_17:
  MstProfileComponent__setMstImg(this, v4);
  MstProfileComponent__setUserName(this, v17);
  MstProfileComponent__setUserGender(this, v18);
  MstProfileComponent__setUserBirthDay(this, v19);
  MstProfileComponent__setUserLv(this, v20);
  MstProfileComponent__setUserExp(this, v21);
  MstProfileComponent__setHaveItemInfo(this, v22);
  MstProfileComponent__setCmdSpellImg(this, v23);
  MstProfileComponent__showLoginCountInfo(this, v24);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *v27; // x22
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *titleInfoPref; // x22
  Il2CppObject *v34; // x22
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  TitleInfoControl_o *titleInfo; // x22
  TitleInfoControl_o *v44; // x22
  System_Action_o *v45; // x23
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  int64_t v54; // x1
  MyRoomBackGroundManager_o *bgManager; // x20
  System_Action_o *v56; // x22
  int64_t recoverTime; // [xsp+8h] [xbp-48h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_596B64A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_2213A60(&Method_MstProfileComponent_OnClickBack__);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_MstProfileComponent___c__DisplayClass63_0__ShowMstProfile_b__0__);
    sub_2213A60(&MstProfileComponent___c__DisplayClass63_0_TypeInfo);
    byte_596B64A = 1;
  }
  count = 0;
  recoverTime = 0;
  v7 = sub_2213CCC(MstProfileComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = endLoadCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)endLoadCallback, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v23, v24);
  MyRoomControl__SetBackGroundData(0);
  v27 = MyRoomControl__getChangeMyRoomBgm(0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v25, v26);
  SoundManager__playBgm(v27, 0);
  MstProfileComponent__createCmdSpellWindow(this, v28);
  MstProfileComponent__messageSetup(this, v29);
  MstProfileComponent__gradeSetup(this, v30);
  titleInfoPref = (Il2CppObject *)this->fields.titleInfoPref;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
  v34 = UnityEngine_Object__Instantiate_object_(
          titleInfoPref,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v34, layer, 0);
  if ( !v34 )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v34,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleInfo,
    (int32_t)Component_object,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  titleInfo = this->fields.titleInfo;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !titleInfo )
    goto LABEL_28;
  TitleInfoControl__SetParent(titleInfo, (UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_28;
  TitleInfoControl__setDepth((TitleInfoControl_o *)gameObject, 40, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_28;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)gameObject, 41, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_28;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 49, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_28;
  TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)gameObject, 1, 49, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_28;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 0, 0);
  v44 = this->fields.titleInfo;
  v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, (intptr_t)Method_MstProfileComponent_OnClickBack__, 0);
  if ( !v44 )
    goto LABEL_28;
  TitleInfoControl__SetBackBtnAct(v44, v45, 0);
  if ( closeCallback )
  {
    this->fields.callbackFunc = closeCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)closeCallback,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrGameEnt;
  if ( !gameObject )
    goto LABEL_28;
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)gameObject, &count, &recoverTime, 0) )
  {
    v54 = recoverTime;
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, v54, v53);
  }
  MstProfileComponent__SetProfileData(this, v52);
  bgManager = this->fields.bgManager;
  v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v7,
    Method_MstProfileComponent___c__DisplayClass63_0__ShowMstProfile_b__0__,
    0);
  if ( !bgManager
    || (MyRoomBackGroundManager__SetBackGround(bgManager, 3, v56, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo) == 0) )
  {
LABEL_28:
    sub_2213CDC(gameObject, v9);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)gameObject, 1, 0);
}


void MstProfileComponent__Start(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B649 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B649 = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    v7.fields.y = 0.0;
    v7.fields.z = 0.0;
    v7.fields.x = 1200.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v7, 0);
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
  if ( (byte_596B671 & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_callbackChangeMessage__);
    this = (MstProfileComponent_o *)sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B671 = 1;
  }
  if ( result )
  {
    userNameTxt = v6->fields.userNameTxt;
    if ( userNameTxt )
    {
      mText = userNameTxt->fields.mText;
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v6,
        Method_MstProfileComponent_callbackChangeMessage__,
        0);
      MstProfileComponent__requestChangeName(v10, mText, changeName, v9, v11);
      return;
    }
LABEL_8:
    sub_2213CDC(this, result);
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
  bool v5; // w8
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_596B66B & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596B66B = 1;
  }
  if ( !result )
    goto LABEL_9;
  v5 = System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0);
  this = (MstProfileComponent_o *)v4->fields.userMessageInputDlg;
  if ( v5 )
  {
    if ( this )
    {
      SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)this, 0);
      MstProfileComponent__showMstProfile(v4, v6);
      return;
    }
LABEL_9:
    sub_2213CDC(this, result);
  }
  if ( !this )
    goto LABEL_9;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)this, 0);
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
  if ( (byte_596B66E & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596B66E = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
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
    sub_2213CDC(this, result);
  }
  ChangeUserNameWindow__Close_39926124((ChangeUserNameWindow_o *)this, 0, v6);
}


void MstProfileComponent__callbackGenderChange(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  MstProfileComponent__setGenderInfo(this, v11);
}


void MstProfileComponent__callbackSetBirthDay(
        MstProfileComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  MstProfileComponent__setBirthDayInfo(this, v11);
}


void MstProfileComponent__checkInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v5; // x1
  PlayMakerFSM_o *SelfUserGame; // x0
  System_String_o *changeName; // x20
  System_String_o *addEventHandlers; // x21
  NetworkManager_ResultCallbackFunc_o *v9; // x22
  MstProfileComponent_o *v10; // x0
  const MethodInfo *v11; // x4

  if ( (byte_596B65F & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_callbackChangeName__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&StringLiteral_3488/*"CHECK_OK"*/);
    byte_596B65F = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    SelfUserGame = this->fields.myRoomFsm;
    if ( SelfUserGame )
    {
      PlayMakerFSM__SendEvent(SelfUserGame, (System_String_o *)StringLiteral_3488/*"CHECK_OK"*/, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(SelfUserGame, v5);
  }
  changeName = this->fields.changeName;
  SelfUserGame = (PlayMakerFSM_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_10;
  addEventHandlers = (System_String_o *)SelfUserGame[3].fields.addEventHandlers;
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_MstProfileComponent_callbackChangeName__, 0);
  MstProfileComponent__requestChangeName(v10, changeName, addEventHandlers, v9, v11);
}


void MstProfileComponent__closeChangeDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_2213CDC(0, method);
  ChangeUserNameWindow__Close_39926124(changeNameWindow, 0, v2);
}


void MstProfileComponent__closeSetBirthDayDlg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  InputUserBirthDayWindow_o *inputBirthDayWindow; // x0

  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  if ( !inputBirthDayWindow )
    sub_2213CDC(0, method);
  InputUserBirthDayWindow__Close_39930616(inputBirthDayWindow, 0, v2);
}


void MstProfileComponent__createCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct CommandSpellWindowComponent_o **p_cmdSpellWinComp; // x20
  UnityEngine_Object_o *cmdSpellWinComp; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *cmdSpellWinPrefab; // x21
  Il2CppObject *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_596B64F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B64F = 1;
  }
  p_cmdSpellWinComp = &this->fields.cmdSpellWinComp;
  cmdSpellWinComp = (UnityEngine_Object_o *)this->fields.cmdSpellWinComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cmdSpellWinComp, 0, 0) )
  {
    cmdSpellWinPrefab = (Il2CppObject *)this->fields.cmdSpellWinPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__Instantiate_object_(
           cmdSpellWinPrefab,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (layer = UnityEngine_GameObject__get_layer(gameObject, 0),
          GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v9, layer, 0),
          !v9)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v9,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___),
          *p_cmdSpellWinComp = (struct CommandSpellWindowComponent_o *)Component_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.cmdSpellWinComp,
            (int32_t)Component_object,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          (gameObject = (UnityEngine_GameObject_o *)*p_cmdSpellWinComp) == 0) )
    {
      sub_2213CDC(gameObject, v11);
    }
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SafeSetParent_42897308(v20, this->fields.cmdSpellWinInfo, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Day; // w21
  UnityEngine_Transform_o *IsOpen; // x0
  __int64 v12; // x1
  char v13; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  float RESET_BIRTH_DAY_ADJUST_PX; // s0
  UnityEngine_GameObject_o *v18; // x24
  MstProfileComponent_c *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  float v23; // s0
  UnityEngine_GameObject_o *v24; // x24
  MstProfileComponent_c *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *birthDayLb; // x23
  const MethodInfo *v29; // x2
  System_String_o *v30; // x24
  const MethodInfo *v31; // x2
  Il2CppObject *v32; // x22
  Il2CppObject *PaddingBirthday; // x0

  if ( (byte_596B657 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MstProfileComponent_TypeInfo);
    sub_2213A60(&StringLiteral_3050/*"BIRTHDAY"*/);
    byte_596B657 = 1;
  }
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, callback, method);
  v5.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Month = System_DateTime__get_Month(v5, 0);
  v7.fields._dateData = (uint64_t)&this->fields.dtBirthDay;
  Day = System_DateTime__get_Day(v7, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
  IsOpen = (UnityEngine_Transform_o *)CondType__IsOpen(144, 0, 0, 0, 0, 0);
  if ( !this->fields.birthDayInfo )
    goto LABEL_30;
  v13 = (char)IsOpen;
  IsOpen = UnityEngine_GameObject__get_transform(this->fields.birthDayInfo, 0);
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Transform__GetChild(IsOpen, 0, 0);
  if ( !IsOpen )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  RESET_BIRTH_DAY_ADJUST_PX = 0.0;
  v18 = gameObject;
  if ( (v13 & 1) != 0 )
  {
    v19 = MstProfileComponent_TypeInfo;
    if ( !*(&MstProfileComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, v15, v16);
      v19 = MstProfileComponent_TypeInfo;
    }
    RESET_BIRTH_DAY_ADJUST_PX = (float)v19->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v18, RESET_BIRTH_DAY_ADJUST_PX, 0);
  IsOpen = (UnityEngine_Transform_o *)this->fields.genderTypeLb;
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_30;
  IsOpen = UnityEngine_Transform__get_parent(IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_30;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  v23 = 0.0;
  v24 = v20;
  if ( (v13 & 1) != 0 )
  {
    v25 = MstProfileComponent_TypeInfo;
    if ( !*(&MstProfileComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, v21, v22);
      v25 = MstProfileComponent_TypeInfo;
    }
    v23 = (float)v25->static_fields->RESET_BIRTH_DAY_ADJUST_PX;
  }
  GameObjectExtensions__SetLocalPositionY(v24, v23, 0);
  IsOpen = (UnityEngine_Transform_o *)this->fields.resetBirthBtn;
  if ( !IsOpen )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v13 & 1, 0);
  birthDayLb = this->fields.birthDayLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
  IsOpen = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3050/*"BIRTHDAY"*/, 0);
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
        IsOpen = (UnityEngine_Transform_o *)System_String__Format_75697880(v30, v32, PaddingBirthday, 0),
        !birthDayLb)
    || (UILabel__set_text(birthDayLb, (System_String_o *)IsOpen, 0),
        (IsOpen = (UnityEngine_Transform_o *)this->fields.birthDayInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 1, 0), !callback) )
  {
LABEL_30:
    sub_2213CDC(IsOpen, v12);
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
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  const MethodInfo *v14; // x1
  PlayMakerFSM_o *v15; // x0

  if ( (byte_596B65D & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_endOpenChangeDlg__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3583/*"CLICK_CANCLE"*/);
    byte_596B65D = 1;
  }
  v7 = Method_MstProfileComponent_endOpenChangeDlg__;
  if ( res )
  {
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenChangeDlg__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_endOpenChangeDlg__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0);
    MstProfileComponent__OnClickSubmit(this, changeName, v9);
  }
  else
  {
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenChangeDlg__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_endOpenChangeDlg__);
    v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
    {
      v15 = this->fields.myRoomFsm;
      if ( !v15 )
        sub_2213CDC(0, v14);
      PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_3583/*"CLICK_CANCLE"*/, 0);
    }
    else
    {
      MstProfileComponent__closeChangeDlg(this, v14);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void MstProfileComponent__endOpenSetBirthDay(
        MstProfileComponent_o *this,
        bool res,
        System_Int32_array *paramList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_596B663 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_2213A60(&Method_MstProfileComponent_endOpenSetBirthDay__);
    byte_596B663 = 1;
  }
  if ( res )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, res, paramList);
    if ( CondType__IsOpen(144, 0, 0, 0, 0, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
      if ( !Master_object )
        goto LABEL_21;
      Master_object = DataMasterBase_object__object__long___GetSingleEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (const MethodInfo_3F1323C *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
      usrGameEnt = this->fields.usrGameEnt;
      if ( !usrGameEnt || !Master_object )
        goto LABEL_21;
      Master_object[1].klass = (Il2CppClass *)usrGameEnt->fields.birthDay;
    }
    v12 = Method_MstProfileComponent_endOpenSetBirthDay__;
    if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_endOpenSetBirthDay__);
    v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0);
    if ( paramList )
    {
      if ( LODWORD(paramList->max_length) < 2 )
        sub_2213CE4(Master_object);
      MstProfileComponent__requestSetBirthDay(this, paramList->m_Items[0], paramList->m_Items[1], v14);
      return;
    }
LABEL_21:
    sub_2213CDC(Master_object, v10);
  }
  v15 = Method_MstProfileComponent_endOpenSetBirthDay__;
  if ( (*((_BYTE *)Method_MstProfileComponent_endOpenSetBirthDay__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_endOpenSetBirthDay__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
  MstProfileComponent__closeSetBirthDayDlg(this, v17);
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

  if ( (byte_596B667 & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_genderChange__);
    byte_596B667 = 1;
  }
  v3 = Method_MstProfileComponent_genderChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_genderChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_genderChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_2213CDC(v5, v6);
  if ( usrGameEnt->fields.genderType == 1 )
    v9 = 2;
  else
    v9 = 1;
  MstProfileComponent__requestGenderChange(this, v9, v7);
}


void MstProfileComponent__getCurrentUserData(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void MstProfileComponent__gradeSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Kind; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t v7; // w20
  System_String_o *MasterProfileBgImage; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UISprite_o *profileBg; // x22
  System_String_o *v12; // x21
  UIAtlas_o *mAtlas; // x23
  struct UISprite_o *nameLine; // x8

  if ( (byte_596B64D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Grade_TypeInfo);
    byte_596B64D = 1;
  }
  if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method, v2);
  Kind = Grade__GetKind(0);
  if ( Kind )
  {
    v7 = Kind;
    if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v5, v6);
    MasterProfileBgImage = Grade__GetMasterProfileBgImage(v7, 0);
    profileBg = this->fields.profileBg;
    if ( !profileBg )
      goto LABEL_14;
    v12 = MasterProfileBgImage;
    mAtlas = profileBg->fields.mAtlas;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
    AtlasManager__SetGradeBase(profileBg, v12, mAtlas, 0);
    MasterProfileBgImage = Grade__GetMasterProfileBgLineImage(v7, 0);
    nameLine = this->fields.nameLine;
    if ( !nameLine )
LABEL_14:
      sub_2213CDC(MasterProfileBgImage, v9);
    AtlasManager__SetGradeBase(nameLine, MasterProfileBgImage, nameLine->fields.mAtlas, 0);
  }
}


void MstProfileComponent__hideMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *masterFigure; // x20
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *userMessageInputDlg; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  int32_t childCount; // w0
  int v18; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *v21; // x20

  if ( (byte_596B64E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B64E = 1;
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(masterFigure, 0, 0) )
  {
    userMessageInputDlg = (UnityEngine_Component_o *)this->fields.masterFigure;
    if ( !userMessageInputDlg )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    this->fields.masterFigure = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.masterFigure, 0, v10, v11, v12, v13, v14, v15);
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.userMessageInputDlg;
  if ( !userMessageInputDlg
    || (SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)userMessageInputDlg, 0),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.expInfoWindow) == 0)
    || (MstExpInfoComponent__Close((MstExpInfoComponent_o *)userMessageInputDlg, v5),
        MstProfileComponent__releaseCmdSpellWindow(this, v16),
        (userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListGrid) == 0)
    || (userMessageInputDlg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(userMessageInputDlg, 0)) == 0 )
  {
LABEL_24:
    sub_2213CDC(userMessageInputDlg, v5);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)userMessageInputDlg, 0);
  if ( childCount >= 1 )
  {
    v18 = childCount + 1;
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
                                                         v18 - 2,
                                                         0);
      if ( !userMessageInputDlg )
        goto LABEL_24;
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(userMessageInputDlg, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
      UnityEngine_Object__Destroy_83459800(v21, 0);
    }
    while ( (unsigned int)--v18 > 1 );
  }
  userMessageInputDlg = (UnityEngine_Component_o *)this->fields.itemListScrollView;
  if ( !userMessageInputDlg )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppClass *, double, double))userMessageInputDlg->klass[1]._1.declaringType)(
    userMessageInputDlg,
    0,
    userMessageInputDlg->klass[1]._1.parent,
    0.0,
    0.0);
}


void MstProfileComponent__messageSetup(MstProfileComponent_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  __int64 v6; // x2
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B64C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9030/*"MESSAGE_CHANGE_NO_INPUT"*/);
    byte_596B64C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_15;
  v5 = (System_String_o *)*((_QWORD *)SelfUserGame + 31);
  if ( System_String__IsNullOrEmpty(v5, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v6);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_9030/*"MESSAGE_CHANGE_NO_INPUT"*/, 0);
    if ( this->fields.messageLabel )
    {
      v5 = (System_String_o *)SelfUserGame;
      UILabel__set_effectStyle(this->fields.messageLabel, 0, 0);
      SelfUserGame = this->fields.messageLabel;
      if ( SelfUserGame )
      {
        v10.fields.a = 1.0;
        v10.fields.r = 0.6;
        v10.fields.g = 0.6;
        v10.fields.b = 0.6;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_2213CDC(SelfUserGame, v4);
  }
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  UILabel__set_effectStyle((UILabel_o *)SelfUserGame, 3, 0);
  SelfUserGame = this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_15;
  v10.fields.r = 1.0;
  v10.fields.g = 1.0;
  v10.fields.b = 1.0;
  v10.fields.a = 1.0;
LABEL_13:
  UIWidget__set_color((UIWidget_o *)SelfUserGame, v10, 0);
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

  if ( (byte_596B665 & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_onClickCmdSpell__);
    byte_596B665 = 1;
  }
  v3 = Method_MstProfileComponent_onClickCmdSpell__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickCmdSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_onClickCmdSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_2213CDC(0, v5);
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

  if ( (byte_596B66A & 1) == 0 )
  {
    sub_2213A60(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MstProfileComponent__onClickMessageChange_b__105_0__);
    sub_2213A60(&Method_MstProfileComponent_onClickMessageChange__);
    byte_596B66A = 1;
  }
  v3 = Method_MstProfileComponent_onClickMessageChange__;
  if ( (*((_BYTE *)Method_MstProfileComponent_onClickMessageChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_onClickMessageChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (message = SelfUserGame->fields.message,
        userMessageInputDlg = this->fields.userMessageInputDlg,
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_2213CCC(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MstProfileComponent__onClickMessageChange_b__105_0__,
          0),
        !userMessageInputDlg) )
  {
    sub_2213CDC(SelfUserGame, v6);
  }
  UserMessageInputDlg__Open(userMessageInputDlg, message, v9, v10);
}


void MstProfileComponent__onSpellWindowClose(MstProfileComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_596B666 & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_onSpellWindowClose__);
    byte_596B666 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0) )
  {
    v4 = Method_MstProfileComponent_onSpellWindowClose__;
    if ( (*((_BYTE *)Method_MstProfileComponent_onSpellWindowClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_onSpellWindowClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
    sub_2213CDC(cmdSpellWinComp, method);
  }
}


void MstProfileComponent__releaseCmdSpellWindow(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_cmdSpellWinComp; // x19
  UnityEngine_Object_o *v5; // x20
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596B650 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B650 = 1;
  }
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  p_cmdSpellWinComp = (UnityEngine_Component_o **)&this->fields.cmdSpellWinComp;
  v5 = (UnityEngine_Object_o *)cmdSpellWinComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_cmdSpellWinComp )
      sub_2213CDC(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cmdSpellWinComp, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
    *p_cmdSpellWinComp = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_cmdSpellWinComp, 0, v11, v12, v13, v14, v15, v16);
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
  __int64 v10; // x2
  int32_t CallBack_high; // w22

  if ( (byte_596B66D & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B66D = 1;
  }
  SelfUserGame = (UserNameChangeRequest_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_8;
  CallBack_high = HIDWORD(SelfUserGame[1].fields.CallBack);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  SelfUserGame = (UserNameChangeRequest_o *)NetworkManager__getRequest_object_(
                                              callback,
                                              (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  if ( !SelfUserGame )
LABEL_8:
    sub_2213CDC(SelfUserGame, v9);
  UserNameChangeRequest__beginRequest(SelfUserGame, changedName, CallBack_high, message, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Request_object; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_596B668 & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_callbackGenderChange__);
    sub_2213A60(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (MstProfileComponent_o *)sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B668 = 1;
  }
  klass = v4[25].klass;
  if ( !klass )
    goto LABEL_9;
  namespaze = (System_String_o *)klass->_1.namespaze;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, v4, Method_MstProfileComponent_callbackGenderChange__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  this = (MstProfileComponent_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this || !Request_object )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&genderType);
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
  __int64 v11; // x1
  __int64 v12; // x2

  v6 = (Il2CppObject *)this;
  if ( (byte_596B664 & 1) == 0 )
  {
    sub_2213A60(&Method_MstProfileComponent_callbackSetBirthDay__);
    sub_2213A60(&Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (MstProfileComponent_o *)sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B664 = 1;
  }
  klass = v6[25].klass;
  if ( !klass )
    goto LABEL_8;
  namespaze = (System_String_o *)klass->_1.namespaze;
  castClass_high = HIDWORD(klass->_1.castClass);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, v6, Method_MstProfileComponent_callbackSetBirthDay__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  this = (MstProfileComponent_o *)NetworkManager__getRequest_object_(
                                    v10,
                                    (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_SetUserBirthDayRequest___);
  if ( !this )
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&month);
  SetUserBirthDayRequest__beginRequest((SetUserBirthDayRequest_o *)this, namespaze, castClass_high, month, day, 0);
}


void MstProfileComponent__resetInput(MstProfileComponent_o *this, const MethodInfo *method)
{
  ChangeUserNameWindow_o *changeNameWindow; // x0

  changeNameWindow = this->fields.changeNameWindow;
  if ( !changeNameWindow )
    sub_2213CDC(0, method);
  ChangeUserNameWindow__resetInputVal(changeNameWindow, method);
}


void MstProfileComponent__setBirthDayInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  MstProfileComponent__setUserBirthDay(this, v10);
}


void MstProfileComponent__setCmdSpellImg(MstProfileComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MstProfileComponent_o *v3; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *cmdSpellWinComp; // x20
  __int64 v8; // x2
  CommandSpellWindowComponent_o *v9; // x20
  struct CommandSpellWindowComponent_o *v10; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v3 = this;
  if ( (byte_596B653 & 1) == 0 )
  {
    sub_2213A60(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_2213A60(&Method_MstProfileComponent_onSpellWindowClose__);
    sub_2213A60(&MstProfileComponent_TypeInfo);
    this = (MstProfileComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B653 = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_14;
  MstProfileComponent__setCmdSpellInfo(v3, usrGameEnt->fields.genderType, v2);
  cmdSpellWinComp = (UnityEngine_Object_o *)v3->fields.cmdSpellWinComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(cmdSpellWinComp, 0, 0) )
  {
    v9 = v3->fields.cmdSpellWinComp;
    this = (MstProfileComponent_o *)MstProfileComponent_TypeInfo;
    if ( !*(&MstProfileComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MstProfileComponent_TypeInfo, method, v8);
    if ( v9 )
    {
      CommandSpellWindowComponent__InitializeCommandSpellDepth(
        v9,
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
        v10 = v3->fields.cmdSpellWinComp;
        if ( v10 )
        {
          v10->fields.mode = 0;
          v11 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_2213CCC(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
          CommandSpellWindowComponent_CloseButtonCallBack___ctor(
            v11,
            (Il2CppObject *)v3,
            (intptr_t)Method_MstProfileComponent_onSpellWindowClose__,
            0);
          v10->fields.callback_close = v11;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v10->fields.callback_close,
            (int32_t)v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(this, method);
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
      sub_2213CDC(cmdSpellIconMale, *(_QWORD *)&genderType);
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
  int v8; // w23
  int v9; // w22
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int v15; // [xsp+4h] [xbp-4Ch] BYREF
  int v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596B652 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3821/*"COMMAND_SPELL_RECOVER_TIME"*/);
    sub_2213A60(&StringLiteral_3824/*"COMMNAD_SPELL_RECV_TXT"*/);
    byte_596B652 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoverTime, method);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMNAD_SPELL_RECV_TXT"*/, 0);
    if ( recoverTitleLb )
    {
      v7 = recoverTime / 0xE10uLL;
      v8 = recoverTime % 0x3CuLL;
      v9 = (int)(recoverTime / 0x3CuLL) % 60;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0);
      recoverTimeLb = this->fields.recoverTimeLb;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"COMMAND_SPELL_RECOVER_TIME"*/, 0);
      v17 = v7;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
      v16 = v9;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
      v15 = v8;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15);
      cmdSpellRecTimeInfo = System_String__Format_75697948(v11, v12, v13, v14, 0);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0);
        return;
      }
    }
LABEL_11:
    sub_2213CDC(cmdSpellRecTimeInfo, recoverTime);
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

  usrGameEnt = this->fields.usrGameEnt;
  count = 0;
  recoverTime = 0;
  if ( !usrGameEnt )
    sub_2213CDC(0, method);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w20
  TerminalPramsManager_c *v15; // x0
  struct UserGameEntity_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_596B669 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596B669 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_2213CDC(v10, v11);
  genderType = usrGameEnt->fields.genderType;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
  if ( !byte_596B6DD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596B6DD = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_PlayerGenderType_k__BackingField = genderType;
  TerminalPramsManager__PlayerGenderType_SaveData(0);
  v16 = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  MstProfileComponent__setUserGender(this, v23);
  MstProfileComponent__setMstImg(this, v24);
}


void MstProfileComponent__setHaveItemInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 itemListGrid; // x0
  struct ImageItem_Id_array *dispItemInfoList; // x8
  unsigned __int64 v5; // x25
  unsigned __int64 max_length_low; // x9
  UnityEngine_GameObject_o *mstItemInfo; // x22
  int32_t v8; // w21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_Transform_o *v11; // x23
  const MethodInfo *v12; // x3
  UnityEngine_Transform_o *v13; // x21

  if ( (byte_596B65A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
    byte_596B65A = 1;
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
      sub_2213CE4(itemListGrid);
    itemListGrid = (__int64)this->fields.itemListGrid;
    if ( itemListGrid )
    {
      mstItemInfo = this->fields.mstItemInfo;
      v8 = dispItemInfoList->m_Items[v5];
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0);
      itemListGrid = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, mstItemInfo, transform, 0, 0);
      if ( itemListGrid )
      {
        v10 = (UnityEngine_GameObject_o *)itemListGrid;
        itemListGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemListGrid, 0);
        v11 = (UnityEngine_Transform_o *)itemListGrid;
        if ( !byte_5969AE5 )
        {
          itemListGrid = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( v11 )
        {
          UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          itemListGrid = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v10,
                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MstHaveItemInfoComponent___);
          if ( itemListGrid )
          {
            MstHaveItemInfoComponent__setItemInfo(
              (MstHaveItemInfoComponent_o *)itemListGrid,
              v8,
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
  if ( !byte_5969AE5 )
  {
    itemListGrid = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v13
    || (UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (itemListGrid = (__int64)this->fields.itemListGrid) == 0) )
  {
LABEL_17:
    sub_2213CDC(itemListGrid, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  __int64 activeDeckId; // x9
  struct UserGameEntity_o *v15; // x8
  long double v16; // q0
  Il2CppClass *klass; // x8
  int64_t namespaze; // x21
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x2
  Il2CppClass *v22; // x21
  void *monitor; // x22
  int32_t v24; // w21
  UnityEngine_Object_o *masterFigure; // x22
  struct UIMasterFigureTextureOld_o *Prefab_47634244; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UIMasterFigureTextureOld_o *v33; // x22
  int32_t v34; // w19
  System_Action_o *v35; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_596B654 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_2213A60(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_MstProfileComponent___c__DisplayClass76_0__setMstImg_b__0__);
    sub_2213A60(&MstProfileComponent___c__DisplayClass76_0_TypeInfo);
    byte_596B654 = 1;
  }
  v3 = sub_2213CCC(MstProfileComponent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_29;
  activeDeckId = usrGameEnt->fields.activeDeckId;
  *(_DWORD *)(v3 + 24) = usrGameEnt->fields.genderType;
  if ( activeDeckId < 1 )
    goto LABEL_22;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v15 = this->fields.usrGameEnt;
  if ( !v15 )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v15->fields.activeDeckId,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
    v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
      v19 = sub_224B908(v16);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
    if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
      v20 = sub_224B908(v16);
    Instance = **(Il2CppObject ***)(v20 + 184);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 namespaze,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_29;
    v22 = Instance[2].klass;
    monitor = Instance[2].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v21);
    *(_QWORD *)&v36.fields.currentCryptoKey = v22;
    *(_QWORD *)&v36.fields.fakeValue = monitor;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
  }
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v12);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0, 0) )
  {
    Prefab_47634244 = MasterFigureManagerOld__CreatePrefab_47634244(
                        this->fields.mstImgBase,
                        2,
                        *(_DWORD *)(v3 + 24),
                        v24,
                        10,
                        0,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0,
                        0);
    this->fields.masterFigure = Prefab_47634244;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.masterFigure,
      (int32_t)Prefab_47634244,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    return;
  }
  v33 = this->fields.masterFigure;
  v34 = *(_DWORD *)(v3 + 24);
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v3, Method_MstProfileComponent___c__DisplayClass76_0__setMstImg_b__0__, 0);
  if ( !v33 )
LABEL_29:
    sub_2213CDC(Instance, v5);
  UIMasterFigureTextureOld__SetCharacter(v33, 2, v34, v24, v35, 0, 0, 0);
}


void MstProfileComponent__setUserBirthDay(MstProfileComponent_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *v2; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int64_t birthDay; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_DateTime_o v7; // x0
  System_Action_c *v8; // x8
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_596B656 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MstProfileComponent_closeSetBirthDayDlg__);
    this = (MstProfileComponent_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B656 = 1;
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
    sub_2213CDC(this, method);
  }
  this = (MstProfileComponent_o *)v2->fields.setBirthBtn;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  v7.fields._dateData = NetworkManager__getDateTime_48347260(birthDay, 0).fields._dateData;
  v8 = System_Action_TypeInfo;
  v2->fields.dtBirthDay = v7;
  v9 = (System_Action_o *)sub_2213CCC(v8);
  System_Action___ctor(v9, (Il2CppObject *)v2, Method_MstProfileComponent_closeSetBirthDayDlg__, 0);
  MstProfileComponent__dispSetBirth(v2, v9, v10);
}


void MstProfileComponent__setUserExp(MstProfileComponent_o *this, const MethodInfo *method)
{
  System_String_o *usrGameEnt; // x0
  UILabel_o *userExpLb; // x20
  __int64 v5; // x2
  int32_t LevelMax; // w20
  BalanceConfig_c *v7; // x8
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x20
  int v12; // [xsp+8h] [xbp-38h] BYREF
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-30h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596B659 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_8991/*"MAX_USER_LEVEL_COND_{0}"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    byte_596B659 = 1;
  }
  usrGameEnt = (System_String_o *)this->fields.usrGameEnt;
  lateExp = 0;
  exp = 0;
  barExp = 0.0;
  if ( !usrGameEnt )
    goto LABEL_20;
  if ( UserGameEntity__getExpInfo((UserGameEntity_o *)usrGameEnt, &exp, &lateExp, &barExp, 0) )
  {
    userExpLb = this->fields.userExpLb;
    usrGameEnt = System_Int64__ToString_77143864((int64_t)&lateExp, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
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
    sub_2213CDC(usrGameEnt, method);
  }
  usrGameEnt = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !usrGameEnt )
    goto LABEL_20;
  usrGameEnt = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)usrGameEnt,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !usrGameEnt )
    goto LABEL_20;
  LevelMax = UserExpMaster__GetLevelMax((UserExpMaster_o *)usrGameEnt, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( LevelMax != v7->static_fields->UserLevelMax )
  {
    usrGameEnt = (System_String_o *)this->fields.condNextLevelMessageLb;
    if ( !usrGameEnt )
      goto LABEL_20;
    usrGameEnt = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)usrGameEnt, 0);
    if ( !usrGameEnt )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrGameEnt, 1, 0);
    v12 = LevelMax + 1;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
    v11 = System_String__Format((System_String_o *)StringLiteral_8991/*"MAX_USER_LEVEL_COND_{0}"*/, v8, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    usrGameEnt = LocalizationManager__Get(v11, 0);
    if ( !this->fields.condNextLevelMessageLb )
      goto LABEL_20;
    UILabel__set_text(this->fields.condNextLevelMessageLb, usrGameEnt, 0);
  }
}


void MstProfileComponent__setUserGender(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MstProfileComponent_o *v3; // x19
  struct UserGameEntity_o *usrGameEnt; // x8
  int32_t genderType; // w21
  UILabel_o *genderTypeLb; // x20
  Gender_c *v7; // x0

  v3 = this;
  if ( (byte_596B655 & 1) == 0 )
  {
    this = (MstProfileComponent_o *)sub_2213A60(&Gender_TypeInfo);
    byte_596B655 = 1;
  }
  usrGameEnt = v3->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_8;
  genderType = usrGameEnt->fields.genderType;
  genderTypeLb = v3->fields.genderTypeLb;
  v7 = Gender_TypeInfo;
  v3->fields.currentGenderType = genderType;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, method, v2);
  this = (MstProfileComponent_o *)Gender__ToName(genderType, 0);
  if ( !genderTypeLb )
LABEL_8:
    sub_2213CDC(this, method);
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

  if ( (byte_596B658 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B658 = 1;
  }
  v10 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)UserExpMaster__GetLevelMax((UserExpMaster_o *)Instance, 0);
  usrGameEnt = this->fields.usrGameEnt;
  v10 = (int)Instance;
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
    sub_2213CDC(Instance, v4);
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
    sub_2213CDC(this, method);
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
  if ( (byte_596B65C & 1) == 0 )
  {
    sub_2213A60(&ChangeUserNameWindow_CallbackFunc_TypeInfo);
    this = (MstProfileComponent_o *)sub_2213A60(&Method_MstProfileComponent_endOpenChangeDlg__);
    byte_596B65C = 1;
  }
  klass = v2[25].klass;
  if ( !klass
    || (monitor = (ChangeUserNameWindow_o *)v2[2].monitor,
        namespaze = (System_String_o *)klass->_1.namespaze,
        v6 = (ChangeUserNameWindow_CallbackFunc_o *)sub_2213CCC(ChangeUserNameWindow_CallbackFunc_TypeInfo),
        ChangeUserNameWindow_CallbackFunc___ctor(v6, v2, (intptr_t)Method_MstProfileComponent_endOpenChangeDlg__, v7),
        !monitor) )
  {
    sub_2213CDC(this, method);
  }
  ChangeUserNameWindow__OpenChangeNameWindow(monitor, namespaze, v6, v8);
}


void MstProfileComponent__showLoginCountInfo(MstProfileComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  DataManager_o *v6; // x0
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  long double v10; // q0
  int32_t monitor_high; // w20
  int monitor; // w24
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t NextLoginBonusDay; // w21
  UILabel_o *seqLoginLb; // x22
  Il2CppObject *v17; // x0
  UILabel_o *totalLoginLb; // x22
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *nextLoginBonusLb; // x19
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  int32_t v25; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v26; // [xsp+8h] [xbp-48h] BYREF
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596B661 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TotalLoginMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserLoginMaster___);
    sub_2213A60(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9651/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/);
    byte_596B661 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(DataManager_o ***)(v5 + 184);
  if ( !v6 )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        v6,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserLoginMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v7);
    v6 = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_32;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *(_QWORD *)(*(_QWORD *)&v6[1].fields._DispLog + 64LL),
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__GetEntity__);
  if ( Entity )
  {
    monitor = (int)Entity[1].monitor;
    monitor_high = HIDWORD(Entity[1].monitor);
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_224B908(v10);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v10);
    v6 = **(DataManager_o ***)(v14 + 184);
    if ( !v6 )
      goto LABEL_32;
    v6 = (DataManager_o *)DataManager__GetMasterData_object_(
                            v6,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalLoginMaster___);
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
  v27 = monitor;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v27);
  v6 = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v17, 0);
  if ( !seqLoginLb )
    goto LABEL_32;
  UILabel__set_text(seqLoginLb, (System_String_o *)v6, 0);
  totalLoginLb = this->fields.totalLoginLb;
  v26 = monitor_high;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v26);
  v6 = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v19, 0);
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
    sub_2213CDC(v6, method);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9651/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0);
  v25 = NextLoginBonusDay;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
  v6 = (DataManager_o *)System_String__Format(v23, v24, 0);
  method = (const MethodInfo *)v6;
  if ( !nextLoginBonusLb )
    goto LABEL_32;
LABEL_30:
  UILabel__set_text(nextLoginBonusLb, (System_String_o *)method, 0);
}


void MstProfileComponent__showMstProfile(MstProfileComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myRoomFsm; // x20
  __int64 v5; // x1
  MyRoomBackGroundManager_o *bgManager; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  int64_t v19; // x1
  int64_t recoverTime; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596B64B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B64B = 1;
  }
  myRoomFsm = (UnityEngine_Object_o *)this->fields.myRoomFsm;
  count = 0;
  recoverTime = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(myRoomFsm, 0, 0) )
  {
    bgManager = this->fields.bgManager;
    if ( !bgManager )
      goto LABEL_12;
    MyRoomBackGroundManager__QuitBackGround(bgManager, 0);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  MstProfileComponent__createCmdSpellWindow(this, v14);
  MstProfileComponent__messageSetup(this, v15);
  MstProfileComponent__gradeSetup(this, v16);
  bgManager = (MyRoomBackGroundManager_o *)this->fields.usrGameEnt;
  if ( !bgManager )
LABEL_12:
    sub_2213CDC(bgManager, v5);
  if ( UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)bgManager, &count, &recoverTime, 0) )
  {
    v19 = recoverTime;
    this->fields.cmdCnt = count;
    MstProfileComponent__setCmdSpellRecoverTime(this, v19, v18);
  }
  MstProfileComponent__SetProfileData(this, v17);
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

  if ( (byte_596B662 & 1) == 0 )
  {
    sub_2213A60(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MstProfileComponent_endOpenSetBirthDay__);
    sub_2213A60(&Method_MstProfileComponent_showSetBirthDayDlg__);
    byte_596B662 = 1;
  }
  v3 = Method_MstProfileComponent_showSetBirthDayDlg__;
  if ( (*((_BYTE *)Method_MstProfileComponent_showSetBirthDayDlg__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MstProfileComponent_showSetBirthDayDlg__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  inputBirthDayWindow = this->fields.inputBirthDayWindow;
  v6 = (InputUserBirthDayWindow_CallbackFunc_o *)sub_2213CCC(InputUserBirthDayWindow_CallbackFunc_TypeInfo);
  InputUserBirthDayWindow_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_MstProfileComponent_endOpenSetBirthDay__,
    v7);
  if ( !inputBirthDayWindow )
    sub_2213CDC(v8, v9);
  InputUserBirthDayWindow__OpenInputBirthDayWindow(inputBirthDayWindow, v6, v10);
}


void MstProfileComponent_ClickDelegate___ctor(
        MstProfileComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2002228;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20021E8;
}


System_IAsyncResult_o *MstProfileComponent_ClickDelegate__BeginInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void MstProfileComponent_ClickDelegate__EndInvoke(
        MstProfileComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MstProfileComponent_ClickDelegate__Invoke(MstProfileComponent_ClickDelegate_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void MstProfileComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B672 & 1) == 0 )
  {
    sub_2213A60(&MstProfileComponent___c_TypeInfo);
    byte_596B672 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MstProfileComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MstProfileComponent___c_TypeInfo->static_fields->__9 = (struct MstProfileComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MstProfileComponent___c_TypeInfo->static_fields,
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

  if ( (byte_596B673 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B673 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  __int64 v5; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v7; // x8
  MstProfileComponent___c_c *v8; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MstProfileComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__63_1; // x20
  Il2CppObject *v12; // x21
  struct MstProfileComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596B674 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MstProfileComponent___c__ShowMstProfile_b__63_1__);
    sub_2213A60(&MstProfileComponent___c_TypeInfo);
    byte_596B674 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
      v7 = AvalonSceneManager_TypeInfo;
    }
    v8 = MstProfileComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
    if ( !*(&MstProfileComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MstProfileComponent___c_TypeInfo, v4, v5);
      v8 = MstProfileComponent___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__63_1 = static_fields->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v4, v5);
        static_fields = MstProfileComponent___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__63_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__63_1, v12, Method_MstProfileComponent___c__ShowMstProfile_b__63_1__, 0);
      v13 = MstProfileComponent___c_TypeInfo->static_fields;
      v13->__9__63_1 = _9__63_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__63_1, (int32_t)_9__63_1, v14, v15, v16, v17, v18, v19);
    }
    if ( !Instance )
      sub_2213CDC(v8, v4);
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
    sub_2213CDC(this, method);
  MstProfileComponent__setCmdSpellInfo(this->fields.__4__this, this->fields.genderType, v2);
}