void __fastcall MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_418593C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_418593C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__OnClickBack(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4185941 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, method);
    byte_4185941 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, isDrag);
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

  if ( (byte_4185943 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_4185943 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, method),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B2C434(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
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
  __int64 v4; // x1

  if ( (byte_418593A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418593A = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginResume(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginResume_17297200((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginStartUp(
        MasterFormationRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct SceneJumpInfo_o **p_jumpInfo; // x22
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  __int64 v17; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  __int64 v20; // x10
  __int64 userId; // x8
  UnityEngine_Component_c *klass; // x8
  System_Action_o *v23; // x20
  System_String_o *name; // x21
  struct SceneJumpInfo_o *v25; // x8

  if ( (byte_418593B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__, v8);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_5205/*"DeckId"*/, v11);
    sub_B2C35C(&StringLiteral_6155/*"EventDeckId"*/, v12);
    sub_B2C35C(&StringLiteral_15097/*"UserEquipId"*/, v13);
    byte_418593B = 1;
  }
  this->fields.jumpInfo = 0LL;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_B2C2F8(&this->fields.jumpInfo, 0LL);
  this->fields.deckNo = 0;
  this->fields.deckId = 0LL;
  this->fields.userEquipId = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  this->fields.usrGameEnt = SelfUserGame;
  sub_B2C2F8(&this->fields.usrGameEnt, SelfUserGame);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  if ( !data )
    goto LABEL_8;
  v20 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v20
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v20 - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  sub_B2C2F8(&this->fields.jumpInfo, data);
  if ( !*p_jumpInfo )
    goto LABEL_33;
  name = (*p_jumpInfo)->fields.name;
  if ( !name )
    goto LABEL_8;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5205/*"DeckId"*/, 0LL);
  if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_6155/*"EventDeckId"*/,
                                               0LL);
    if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
    {
      bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                 name,
                                                 (System_String_o *)StringLiteral_15097/*"UserEquipId"*/,
                                                 0LL);
      if ( ((unsigned __int8)bgTxtSprite & 1) != 0 )
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
  }
  v25 = *p_jumpInfo;
  if ( !*p_jumpInfo )
    goto LABEL_33;
  this->fields.deckId = v25->fields.userId;
  this->fields.deckNo = v25->fields.num;
  userId = v25->fields.userId2;
LABEL_29:
  this->fields.userEquipId = userId;
LABEL_9:
  if ( userId <= 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
          if ( bgTxtSprite )
          {
            klass = bgTxtSprite[2].klass;
            if ( klass )
            {
              this->fields.userEquipId = (int64_t)klass->_1.namespaze;
              goto LABEL_16;
            }
          }
        }
      }
    }
LABEL_33:
    sub_B2C434(bgTxtSprite, v17);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0LL, 19, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0LL);
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v23, 0LL);
}


void __fastcall MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_418593F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, res);
    byte_418593F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__closeMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4185940 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185940 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__,
    0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v9, 0LL);
}


void __fastcall MasterFormationRootComponent__gotoBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  MasterFormationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SceneJumpInfo_o *jumpInfo; // x8
  System_String_o *name; // x20
  struct SceneJumpInfo_o *v9; // x8
  struct SceneJumpInfo_o *v10; // x8
  bool IsStackScene; // w19
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0
  int32_t v14; // w1
  bool v15; // w19

  v2 = this;
  if ( (byte_4185942 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5205/*"DeckId"*/, v4);
    sub_B2C35C(&StringLiteral_6155/*"EventDeckId"*/, v5);
    this = (MasterFormationRootComponent_o *)sub_B2C35C(&StringLiteral_15097/*"UserEquipId"*/, v6);
    byte_4185942 = 1;
  }
  jumpInfo = v2->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_33;
  name = jumpInfo->fields.name;
  if ( name )
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_15097/*"UserEquipId"*/,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v2->fields.jumpInfo;
      if ( !v9 )
        goto LABEL_33;
      v9->fields.userId = v2->fields.userEquipId;
    }
    else
    {
      this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                 name,
                                                 (System_String_o *)StringLiteral_5205/*"DeckId"*/,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0
        || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                       name,
                                                       (System_String_o *)StringLiteral_6155/*"EventDeckId"*/,
                                                       0LL),
            ((unsigned __int8)this & 1) != 0) )
      {
        v10 = v2->fields.jumpInfo;
        if ( !v10 )
          goto LABEL_33;
        v10->fields.userId2 = v2->fields.userEquipId;
      }
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0LL),
        (this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_33:
    sub_B2C434(this, method);
  }
  if ( !IsStackScene )
  {
    v14 = 39;
    goto LABEL_27;
  }
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
      byte_4183C70 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v14 = 34;
LABEL_27:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v14, 1, 0LL, 0LL);
      return;
    }
    goto LABEL_33;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  v15 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0LL);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  if ( v15 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
  else
    AvalonSceneManager__popScene((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
}


void __fastcall MasterFormationRootComponent__requestChangeUsrEquip(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct MasterFormationComponent_o *mstFormationComp; // x8
  int64_t currentUsrEquipId; // x8
  __int64 *v6; // x8

  v2 = this;
  if ( (byte_418593E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9353/*"NO_CHANGE_EQUIP"*/, method);
    this = (MasterFormationRootComponent_o *)sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v3);
    byte_418593E = 1;
  }
  mstFormationComp = v2->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  if ( !mstFormationComp->fields.isChange
    || (currentUsrEquipId = mstFormationComp->fields.currentUsrEquipId, v2->fields.userEquipId == currentUsrEquipId) )
  {
    this = (MasterFormationRootComponent_o *)v2->fields.myFSM;
    if ( this )
    {
      v6 = &StringLiteral_9353/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_B2C434(this, method);
  }
  this = (MasterFormationRootComponent_o *)v2->fields.myFSM;
  v2->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v6 = &StringLiteral_11079/*"REQUEST_OK"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
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
  MasterFormationComponent_NotificationDragState_o *v10; // x23
  const MethodInfo *v11; // x4
  CommonUI_o *v12; // x19

  if ( (byte_418593D & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_MasterFormationRootComponent_SetBackBtnEnabled__, v3);
    sub_B2C35C(&MasterFormationComponent_NotificationDragState_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418593D = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, method);
  v7 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v10 = (MasterFormationComponent_NotificationDragState_o *)sub_B2C42C(MasterFormationComponent_NotificationDragState_TypeInfo);
  MasterFormationComponent_NotificationDragState___ctor(
    v10,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    0LL);
  if ( !v7 )
    goto LABEL_11;
  MasterFormationComponent__setMasterFormation(v7, usrGameEnt, userEquipId, v10, v11);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_11;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)mstFormationComp;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
LABEL_11:
    sub_B2C434(mstFormationComp, method);
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}