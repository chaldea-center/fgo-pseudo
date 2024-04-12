void __fastcall MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42AFF72 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6939/*"GO_NEXT"*/);
    byte_42AFF72 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6939/*"GO_NEXT"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__OnClickBack(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42AFF77 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3075/*"CLICK_BACK"*/);
    byte_42AFF77 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B52A5C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3075/*"CLICK_BACK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B52A5C(0LL, isDrag);
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

  if ( (byte_42AFF79 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6939/*"GO_NEXT"*/);
    byte_42AFF79 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, 0LL),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B52A5C(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_6939/*"GO_NEXT"*/, 0LL);
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

  if ( (byte_42AFF70 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AFF70 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginResume(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginResume_17470456((SceneRootComponent_o *)this, 0LL);
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
  struct SceneJumpInfo_o **p_jumpInfo; // x22
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x10
  __int64 userId; // x8
  UnityEngine_Component_c *klass; // x8
  System_Action_o *v31; // x20
  System_String_o *name; // x21
  struct SceneJumpInfo_o *v33; // x8

  if ( (byte_42AFF71 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_B52984(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__);
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_5245/*"DeckId"*/);
    sub_B52984(&StringLiteral_6198/*"EventDeckId"*/);
    sub_B52984(&StringLiteral_15196/*"UserEquipId"*/);
    byte_42AFF71 = 1;
  }
  this->fields.jumpInfo = 0LL;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  v28 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v28
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v28 - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.jumpInfo,
    (System_Int32_array **)data,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !*p_jumpInfo )
    goto LABEL_33;
  name = (*p_jumpInfo)->fields.name;
  if ( !name )
    goto LABEL_8;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5245/*"DeckId"*/, 0LL);
  if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_6198/*"EventDeckId"*/,
                                               0LL);
    if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
    {
      bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                 name,
                                                 (System_String_o *)StringLiteral_15196/*"UserEquipId"*/,
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
  v33 = *p_jumpInfo;
  if ( !*p_jumpInfo )
    goto LABEL_33;
  this->fields.deckId = v33->fields.userId;
  this->fields.deckNo = v33->fields.num;
  userId = v33->fields.userId2;
LABEL_29:
  this->fields.userEquipId = userId;
LABEL_9:
  if ( userId <= 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_23E2500 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
    sub_B52A5C(bgTxtSprite, v19);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0LL, 19, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_18269200((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0LL);
  v31 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v31, 0LL);
}


void __fastcall MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42AFF75 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    byte_42AFF75 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B52A5C(0LL, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11166/*"REQUEST_OK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__closeMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42AFF76 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFF76 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


void __fastcall MasterFormationRootComponent__gotoBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  MasterFormationRootComponent_o *v2; // x19
  struct SceneJumpInfo_o *jumpInfo; // x8
  System_String_o *name; // x20
  struct SceneJumpInfo_o *v5; // x8
  struct SceneJumpInfo_o *v6; // x8
  bool IsStackScene; // w19
  TerminalPramsManager_c *v8; // x0
  int32_t v9; // w1
  bool v10; // w19

  v2 = this;
  if ( (byte_42AFF78 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_5245/*"DeckId"*/);
    sub_B52984(&StringLiteral_6198/*"EventDeckId"*/);
    this = (MasterFormationRootComponent_o *)sub_B52984(&StringLiteral_15196/*"UserEquipId"*/);
    byte_42AFF78 = 1;
  }
  jumpInfo = v2->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_33;
  name = jumpInfo->fields.name;
  if ( name )
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_15196/*"UserEquipId"*/,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v5 = v2->fields.jumpInfo;
      if ( !v5 )
        goto LABEL_33;
      v5->fields.userId = v2->fields.userEquipId;
    }
    else
    {
      this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                 name,
                                                 (System_String_o *)StringLiteral_5245/*"DeckId"*/,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0
        || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                       name,
                                                       (System_String_o *)StringLiteral_6198/*"EventDeckId"*/,
                                                       0LL),
            ((unsigned __int8)this & 1) != 0) )
      {
        v6 = v2->fields.jumpInfo;
        if ( !v6 )
          goto LABEL_33;
        v6->fields.userId2 = v2->fields.userEquipId;
      }
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0LL),
        (this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_33:
    sub_B52A5C(this, method);
  }
  if ( !IsStackScene )
  {
    v9 = 39;
    goto LABEL_27;
  }
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2AB )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2AB = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v9 = 34;
LABEL_27:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v9, 1, 0LL, 0LL);
      return;
    }
    goto LABEL_33;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  v10 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0LL);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  if ( v10 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
  else
    AvalonSceneManager__popScene((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
}


void __fastcall MasterFormationRootComponent__requestChangeUsrEquip(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationRootComponent_o *v2; // x19
  struct MasterFormationComponent_o *mstFormationComp; // x8
  int64_t currentUsrEquipId; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_42AFF74 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9410/*"NO_CHANGE_EQUIP"*/);
    this = (MasterFormationRootComponent_o *)sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    byte_42AFF74 = 1;
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
      v5 = &StringLiteral_9410/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_B52A5C(this, method);
  }
  this = (MasterFormationRootComponent_o *)v2->fields.myFSM;
  v2->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v5 = &StringLiteral_11166/*"REQUEST_OK"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall MasterFormationRootComponent__showMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationComponent_o *mstFormationComp; // x0
  MasterFormationComponent_o *v4; // x20
  int64_t userEquipId; // x21
  UserGameEntity_o *usrGameEnt; // x22
  MasterFormationComponent_NotificationDragState_o *v7; // x23
  CommonUI_o *v8; // x19

  if ( (byte_42AFF73 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_MasterFormationRootComponent_SetBackBtnEnabled__);
    sub_B52984(&MasterFormationComponent_NotificationDragState_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFF73 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, 0LL);
  v4 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v7 = (MasterFormationComponent_NotificationDragState_o *)sub_B52A54(MasterFormationComponent_NotificationDragState_TypeInfo);
  MasterFormationComponent_NotificationDragState___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    0LL);
  if ( !v4 )
    goto LABEL_11;
  MasterFormationComponent__setMasterFormation(v4, usrGameEnt, userEquipId, v7, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_11;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)mstFormationComp;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v8 )
LABEL_11:
    sub_B52A5C(mstFormationComp, method);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}