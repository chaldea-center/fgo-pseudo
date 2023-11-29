void __fastcall MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FB1DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864, method);
    byte_40FB1DF = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6864, 0LL);
}


void __fastcall MasterFormationRootComponent__OnClickBack(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_40FB1E4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3034, method);
    byte_40FB1E4 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3034, 0LL);
}


void __fastcall MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, !isDrag, 0LL);
}


void __fastcall MasterFormationRootComponent___beginStartUp_b__9_0(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent___closeMasterFormation_b__17_0(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationComponent_o *mstFormationComp; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FB1E6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864, method);
    byte_40FB1E6 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, method), (myFSM = this->fields.myFSM) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6864, 0LL);
}


void __fastcall MasterFormationRootComponent__beginFinish(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterFormationRootComponent__beginInitialize(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FB1DD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FB1DD = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginResume(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginResume_29752260((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginStartUp(
        MasterFormationRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct SceneJumpInfo_o **p_jumpInfo; // x22
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  bool IsActiveBgTxt; // w0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x10
  __int64 userId; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  int64_t currentCryptoKey; // x8
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v44; // x0
  TitleInfoControl_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x20
  System_String_o *name; // x21
  struct SceneJumpInfo_o *v52; // x8

  if ( (byte_40FB1DE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AtlasManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__, v13);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_5186, v16);
    sub_B16FFC(&StringLiteral_6137, v17);
    sub_B16FFC(&StringLiteral_15037, v18);
    byte_40FB1DE = 1;
  }
  this->fields.jumpInfo = 0LL;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.jumpInfo,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.deckNo = 0;
  this->fields.deckId = 0LL;
  this->fields.userEquipId = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  if ( !data )
    goto LABEL_8;
  v37 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v37
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v37 - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.jumpInfo,
    (System_Int32_array **)data,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !*p_jumpInfo )
    goto LABEL_33;
  name = (*p_jumpInfo)->fields.name;
  if ( !name )
    goto LABEL_8;
  if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_5186, 0LL)
    && !System_String__op_Equality(name, (System_String_o *)StringLiteral_6137, 0LL) )
  {
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15037, 0LL) )
    {
      if ( !*p_jumpInfo )
        goto LABEL_33;
      userId = (*p_jumpInfo)->fields.userId;
      goto LABEL_29;
    }
LABEL_8:
    userId = this->fields.userEquipId;
    goto LABEL_9;
  }
  v52 = *p_jumpInfo;
  if ( !*p_jumpInfo )
    goto LABEL_33;
  this->fields.deckId = v52->fields.userId;
  this->fields.deckNo = v52->fields.num;
  userId = v52->fields.userId2;
LABEL_29:
  this->fields.userEquipId = userId;
LABEL_9:
  if ( userId <= 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (*p_usrGameEnt)->fields.activeDeckId,
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
          if ( Entity )
          {
            currentCryptoKey = Entity->fields.userId.fields.currentCryptoKey;
            if ( currentCryptoKey )
            {
              this->fields.userEquipId = *(_QWORD *)(currentCryptoKey + 24);
              goto LABEL_16;
            }
          }
        }
      }
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_16:
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 19, 0LL);
  v44 = this->fields.titleInfo;
  if ( !v44 )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_19608808(v44, 1, 0, 0, 0LL);
  v45 = this->fields.titleInfo;
  if ( !v45 )
    goto LABEL_33;
  TitleInfoControl__setBackBtnDepth(v45, 29, 0LL);
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v50, 0LL);
}


void __fastcall MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FB1E2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11043, res);
    byte_40FB1E2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11043, 0LL);
}


void __fastcall MasterFormationRootComponent__closeMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40FB1E3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB1E3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall MasterFormationRootComponent__gotoBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SceneJumpInfo_o *jumpInfo; // x8
  System_String_o *name; // x20
  struct SceneJumpInfo_o *v9; // x8
  struct SceneJumpInfo_o *v10; // x8
  AvalonSceneManager_o *Instance; // x0
  bool IsStackScene; // w19
  AvalonSceneManager_o *v13; // x0
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  int32_t v16; // w1
  AvalonSceneManager_o *v17; // x0
  bool v18; // w19
  AvalonSceneManager_o *v19; // x0

  if ( (byte_40FB1E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5186, v4);
    sub_B16FFC(&StringLiteral_6137, v5);
    sub_B16FFC(&StringLiteral_15037, v6);
    byte_40FB1E5 = 1;
  }
  jumpInfo = this->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_33;
  name = jumpInfo->fields.name;
  if ( name )
  {
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15037, 0LL) )
    {
      v9 = this->fields.jumpInfo;
      if ( !v9 )
        goto LABEL_33;
      v9->fields.userId = this->fields.userEquipId;
    }
    else if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_5186, 0LL)
           || System_String__op_Equality(name, (System_String_o *)StringLiteral_6137, 0LL) )
    {
      v10 = this->fields.jumpInfo;
      if ( !v10 )
        goto LABEL_33;
      v10->fields.userId2 = this->fields.userEquipId;
    }
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
        (v13 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_33:
    sub_B170D4();
  }
  if ( !IsStackScene )
  {
    v16 = 39;
    goto LABEL_27;
  }
  if ( AvalonSceneManager__checkStackScene(v13, 34, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v14);
      byte_40F604D = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_IsAutoResume_k__BackingField = 1;
    v13 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( v13 )
    {
      v16 = 34;
LABEL_27:
      AvalonSceneManager__transitionScene(v13, v16, 1, 0LL, 0LL);
      return;
    }
    goto LABEL_33;
  }
  v17 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v17 )
    goto LABEL_33;
  v18 = AvalonSceneManager__checkStackScene(v17, 80, 0LL);
  v19 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v19 )
    goto LABEL_33;
  if ( v18 )
    AvalonSceneManager__popSceneRefresh(v19, 1, 0LL, 0LL);
  else
    AvalonSceneManager__popScene(v19, 1, 0LL, 0LL);
}


void __fastcall MasterFormationRootComponent__requestChangeUsrEquip(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MasterFormationComponent_o *mstFormationComp; // x8
  int64_t currentUsrEquipId; // x8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_40FB1E1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9323, method);
    sub_B16FFC(&StringLiteral_11043, v3);
    byte_40FB1E1 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  if ( !mstFormationComp->fields.isChange
    || (currentUsrEquipId = mstFormationComp->fields.currentUsrEquipId, this->fields.userEquipId == currentUsrEquipId) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v7 = &StringLiteral_9323;
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
  }
  myFSM = this->fields.myFSM;
  this->fields.userEquipId = currentUsrEquipId;
  if ( !myFSM )
    goto LABEL_11;
  v7 = &StringLiteral_11043;
LABEL_10:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


void __fastcall MasterFormationRootComponent__showMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MasterFormationComponent_o *mstFormationComp; // x0
  MasterFormationComponent_o *v7; // x20
  int64_t userEquipId; // x21
  UserGameEntity_o *usrGameEnt; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  MasterFormationComponent_NotificationDragState_o *v14; // x23
  const MethodInfo *v15; // x4
  TitleInfoControl_o *titleInfo; // x0
  CommonUI_o *Instance; // x19

  if ( (byte_40FB1E0 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_MasterFormationRootComponent_SetBackBtnEnabled__, v3);
    sub_B16FFC(&MasterFormationComponent_NotificationDragState_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB1E0 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, method);
  v7 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v14 = (MasterFormationComponent_NotificationDragState_o *)sub_B170CC(
                                                              MasterFormationComponent_NotificationDragState_TypeInfo,
                                                              v10,
                                                              v11,
                                                              v12,
                                                              v13);
  MasterFormationComponent_NotificationDragState___ctor(
    v14,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    0LL);
  if ( !v7 )
    goto LABEL_11;
  MasterFormationComponent__setMasterFormation(v7, usrGameEnt, userEquipId, v14, v15);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_11;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}