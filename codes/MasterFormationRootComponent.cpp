void MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4D2B6BA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7014/*"GO_NEXT"*/);
    byte_4D2B6BA = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7014/*"GO_NEXT"*/, 0);
}


void MasterFormationRootComponent__OnClickBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4D2B6BF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3457/*"CLICK_BACK"*/);
    byte_4D2B6BF = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C93D2C(0, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3457/*"CLICK_BACK"*/, 0);
}


void MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C93D2C(0, isDrag);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, !isDrag, 0);
}


void MasterFormationRootComponent___beginStartUp_b__9_0(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
}


void MasterFormationRootComponent___closeMasterFormation_b__17_0(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationComponent_o *mstFormationComp; // x0

  if ( (byte_4D2B6C1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7014/*"GO_NEXT"*/);
    byte_4D2B6C1 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, method),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0) )
  {
    sub_1C93D2C(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_7014/*"GO_NEXT"*/, 0);
}


void MasterFormationRootComponent__beginFinish(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void MasterFormationRootComponent__beginInitialize(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2B6B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B6B8 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void MasterFormationRootComponent__beginResume(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_42213848((SceneRootComponent_o *)this, 0);
}


void MasterFormationRootComponent__beginStartUp(
        MasterFormationRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppClass *v28; // x8
  __int64 naturalAligment; // x9
  __int64 userId2; // x8
  UnityEngine_Component_c *klass; // x8
  System_Action_o *v32; // x20
  int32_t v33; // w1
  System_String_o *name; // x22
  struct SceneJumpInfo_o *v35; // x8

  if ( (byte_4D2B6B9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_1C93AD4(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_5213/*"DeckId"*/);
    sub_1C93AD4(&StringLiteral_6240/*"EventDeckId"*/);
    sub_1C93AD4(&StringLiteral_15327/*"UserEquipId"*/);
    byte_4D2B6B9 = 1;
  }
  this->fields.jumpInfo = 0;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.deckNo = 0;
  this->fields.deckId = 0;
  this->fields.userEquipId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  p_usrGameEnt = &this->fields.usrGameEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  if ( !data )
    goto LABEL_8;
  v28 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
  if ( data->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
  {
    if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v28 )
      v33 = (int)data;
    else
      v33 = 0;
  }
  else
  {
    v33 = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, v33, v22, v23, v24, v25, v26, v27);
  if ( !*p_jumpInfo )
    goto LABEL_36;
  name = (*p_jumpInfo)->fields.name;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5213/*"DeckId"*/, 0);
  if ( ((unsigned __int8)bgTxtSprite & 1) != 0
    || (bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                   name,
                                                   (System_String_o *)StringLiteral_6240/*"EventDeckId"*/,
                                                   0),
        ((unsigned __int8)bgTxtSprite & 1) != 0) )
  {
    v35 = *p_jumpInfo;
    if ( !*p_jumpInfo )
      goto LABEL_36;
    this->fields.deckId = v35->fields.userId;
    this->fields.deckNo = v35->fields.num;
    userId2 = v35->fields.userId2;
  }
  else
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_15327/*"UserEquipId"*/, 0);
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
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_3465A24 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
    sub_1C93D2C(bgTxtSprite, v19);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0, 20, 0);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setBackBtnSprite_40620696((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0);
  v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v32, 0);
}


void MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4D2B6BD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    byte_4D2B6BD = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11163/*"REQUEST_OK"*/, 0);
}


void MasterFormationRootComponent__closeMasterFormation(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2B6BE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B6BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__, 0);
  if ( !v5 )
    sub_1C93D2C(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void MasterFormationRootComponent__gotoBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4D2B6C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_5213/*"DeckId"*/);
    sub_1C93AD4(&StringLiteral_6240/*"EventDeckId"*/);
    this = (MasterFormationRootComponent_o *)sub_1C93AD4(&StringLiteral_15327/*"UserEquipId"*/);
    byte_4D2B6C0 = 1;
  }
  jumpInfo = v2->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_30;
  name = jumpInfo->fields.name;
  this = (MasterFormationRootComponent_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_15327/*"UserEquipId"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.jumpInfo;
    if ( !v5 )
      goto LABEL_30;
    v5->fields.userId = v2->fields.userEquipId;
  }
  else
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5213/*"DeckId"*/, 0);
    if ( ((unsigned __int8)this & 1) != 0
      || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                     name,
                                                     (System_String_o *)StringLiteral_6240/*"EventDeckId"*/,
                                                     0),
          ((unsigned __int8)this & 1) != 0) )
    {
      v6 = v2->fields.jumpInfo;
      if ( !v6 )
        goto LABEL_30;
      v6->fields.userId2 = v2->fields.userEquipId;
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0),
        (this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_30:
    sub_1C93D2C(this, method);
  }
  if ( !IsStackScene )
  {
    v9 = 39;
    goto LABEL_24;
  }
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2AFE8 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2AFE8 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v9 = 34;
LABEL_24:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v9, 1, 0, 0);
      return;
    }
    goto LABEL_30;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  v10 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  if ( v10 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)this, 1, 0, 0);
  else
    AvalonSceneManager__popScene((AvalonSceneManager_o *)this, 1, 0, 0);
}


void MasterFormationRootComponent__requestChangeUsrEquip(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationRootComponent_o *v2; // x19
  struct MasterFormationComponent_o *mstFormationComp; // x8
  int64_t currentUsrEquipId; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4D2B6BC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9377/*"NO_CHANGE_EQUIP"*/);
    this = (MasterFormationRootComponent_o *)sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    byte_4D2B6BC = 1;
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
      v5 = &StringLiteral_9377/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C93D2C(this, method);
  }
  this = (MasterFormationRootComponent_o *)v2->fields.myFSM;
  v2->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v5 = &StringLiteral_11163/*"REQUEST_OK"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void MasterFormationRootComponent__showMasterFormation(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  MasterFormationComponent_o *mstFormationComp; // x0
  MasterFormationComponent_o *v4; // x20
  UserGameEntity_o *usrGameEnt; // x21
  int64_t userEquipId; // x22
  MasterFormationComponent_NotificationDragState_o *v7; // x23
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  CommonUI_o *v10; // x19

  if ( (byte_4D2B6BB & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_MasterFormationRootComponent_SetBackBtnEnabled__);
    sub_1C93AD4(&MasterFormationComponent_NotificationDragState_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B6BB = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_10;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, method);
  v4 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v7 = (MasterFormationComponent_NotificationDragState_o *)sub_1C93D20(MasterFormationComponent_NotificationDragState_TypeInfo);
  MasterFormationComponent_NotificationDragState___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    v8);
  if ( !v4 )
    goto LABEL_10;
  MasterFormationComponent__setMasterFormation(v4, usrGameEnt, userEquipId, v7, v9);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_10;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)mstFormationComp;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_10:
    sub_1C93D2C(mstFormationComp, method);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}