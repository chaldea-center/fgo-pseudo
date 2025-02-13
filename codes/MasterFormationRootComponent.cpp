void __fastcall MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4BD7762 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7762 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__OnClickBack(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4BD7767 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3578/*"CLICK_BACK"*/);
    byte_4BD7767 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3578/*"CLICK_BACK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, isDrag);
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

  if ( (byte_4BD7769 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7769 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, 0LL),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1C22094(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD7760 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD7760 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginResume(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginResume_39920572((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginStartUp(
        MasterFormationRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  Il2CppClass *v11; // x8
  __int64 methodPtr_low; // x9
  __int64 userId2; // x8
  UnityEngine_Component_c *klass; // x8
  System_Action_o *v15; // x20
  Il2CppObject *v16; // x1
  System_String_o *name; // x22
  struct SceneJumpInfo_o *v18; // x8

  if ( (byte_4BD7761 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_1C21E38(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_5336/*"DeckId"*/);
    sub_1C21E38(&StringLiteral_6339/*"EventDeckId"*/);
    sub_1C21E38(&StringLiteral_15486/*"UserEquipId"*/);
    byte_4BD7761 = 1;
  }
  this->fields.jumpInfo = 0LL;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_1C21DDC(&this->fields.jumpInfo, 0LL);
  this->fields.deckNo = 0;
  this->fields.deckId = 0LL;
  this->fields.userEquipId = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  p_usrGameEnt = &this->fields.usrGameEnt;
  sub_1C21DDC(&this->fields.usrGameEnt, SelfUserGame);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  if ( !data )
    goto LABEL_8;
  v11 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
  {
    if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v11 )
      v16 = data;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  bgTxtSprite = (UnityEngine_Component_o *)sub_1C21DDC(&this->fields.jumpInfo, v16);
  if ( !*p_jumpInfo )
    goto LABEL_36;
  name = (*p_jumpInfo)->fields.name;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5336/*"DeckId"*/, 0LL);
  if ( ((unsigned __int8)bgTxtSprite & 1) != 0
    || (bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                   name,
                                                   (System_String_o *)StringLiteral_6339/*"EventDeckId"*/,
                                                   0LL),
        ((unsigned __int8)bgTxtSprite & 1) != 0) )
  {
    v18 = *p_jumpInfo;
    if ( !*p_jumpInfo )
      goto LABEL_36;
    this->fields.deckId = v18->fields.userId;
    this->fields.deckNo = v18->fields.num;
    userId2 = v18->fields.userId2;
  }
  else
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_15486/*"UserEquipId"*/,
                                               0LL);
    if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
    {
LABEL_8:
      userId2 = this->fields.userEquipId;
      goto LABEL_9;
    }
    if ( !*p_jumpInfo )
      goto LABEL_36;
    userId2 = (*p_jumpInfo)->fields.userId;
  }
  this->fields.userEquipId = userId2;
LABEL_9:
  if ( userId2 <= 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_325E324 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
LABEL_36:
    sub_1C22094(bgTxtSprite, v8);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0LL, 19, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setBackBtnSprite_38384144((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0LL);
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v15, 0LL);
}


void __fastcall MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4BD7765 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    byte_4BD7765 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C22094(0LL, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__closeMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BD7766 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7766 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__,
    0LL);
  if ( !v5 )
    sub_1C22094(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0LL);
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
  if ( (byte_4BD7768 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5336/*"DeckId"*/);
    sub_1C21E38(&StringLiteral_6339/*"EventDeckId"*/);
    this = (MasterFormationRootComponent_o *)sub_1C21E38(&StringLiteral_15486/*"UserEquipId"*/);
    byte_4BD7768 = 1;
  }
  jumpInfo = v2->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_30;
  name = jumpInfo->fields.name;
  this = (MasterFormationRootComponent_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_15486/*"UserEquipId"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.jumpInfo;
    if ( !v5 )
      goto LABEL_30;
    v5->fields.userId = v2->fields.userEquipId;
  }
  else
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_5336/*"DeckId"*/,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0
      || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                     name,
                                                     (System_String_o *)StringLiteral_6339/*"EventDeckId"*/,
                                                     0LL),
          ((unsigned __int8)this & 1) != 0) )
    {
      v6 = v2->fields.jumpInfo;
      if ( !v6 )
        goto LABEL_30;
      v6->fields.userId2 = v2->fields.userEquipId;
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0LL),
        (this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1C22094(this, method);
  }
  if ( !IsStackScene )
  {
    v9 = 39;
    goto LABEL_24;
  }
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD736A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD736A = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v9 = 34;
LABEL_24:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v9, 1, 0LL, 0LL);
      return;
    }
    goto LABEL_30;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  v10 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0LL);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
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
  if ( (byte_4BD7764 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9491/*"NO_CHANGE_EQUIP"*/);
    this = (MasterFormationRootComponent_o *)sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    byte_4BD7764 = 1;
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
      v5 = &StringLiteral_9491/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C22094(this, method);
  }
  this = (MasterFormationRootComponent_o *)v2->fields.myFSM;
  v2->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v5 = &StringLiteral_11274/*"REQUEST_OK"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall MasterFormationRootComponent__showMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationComponent_o *mstFormationComp; // x0
  MasterFormationComponent_o *v4; // x20
  UserGameEntity_o *usrGameEnt; // x21
  int64_t userEquipId; // x22
  MasterFormationComponent_NotificationDragState_o *v7; // x23
  const MethodInfo *v8; // x3
  CommonUI_o *v9; // x19

  if ( (byte_4BD7763 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_MasterFormationRootComponent_SetBackBtnEnabled__);
    sub_1C21E38(&MasterFormationComponent_NotificationDragState_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7763 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_10;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, 0LL);
  v4 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v7 = (MasterFormationComponent_NotificationDragState_o *)sub_1C22084(MasterFormationComponent_NotificationDragState_TypeInfo);
  MasterFormationComponent_NotificationDragState___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    v8);
  if ( !v4 )
    goto LABEL_10;
  MasterFormationComponent__setMasterFormation(v4, usrGameEnt, userEquipId, v7, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_10;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)mstFormationComp;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v9 )
LABEL_10:
    sub_1C22094(mstFormationComp, method);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}