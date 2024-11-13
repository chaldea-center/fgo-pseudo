void __fastcall MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B11527 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B11527 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__OnClickBack(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B1152C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, method, v2);
    byte_4B1152C = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, isDrag);
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
  __int64 v2; // x2
  MasterFormationComponent_o *mstFormationComp; // x0

  if ( (byte_4B1152E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B1152E = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, 0LL),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1BCAA3C(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B11525 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B11525 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginResume(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginResume_39383112((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginStartUp(
        MasterFormationRootComponent_o *this,
        Il2CppObject *data,
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
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  __int64 v26; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  Il2CppClass *v29; // x8
  __int64 methodPtr_low; // x9
  __int64 userId2; // x8
  UnityEngine_Component_c *klass; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x20
  __int64 v37; // x1
  Il2CppObject *v38; // x1
  System_String_o *name; // x22
  struct SceneJumpInfo_o *v40; // x8

  if ( (byte_4B11526 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__, v11, v12);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_5301/*"DeckId"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6291/*"EventDeckId"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15387/*"UserEquipId"*/, v21, v22);
    byte_4B11526 = 1;
  }
  this->fields.jumpInfo = 0LL;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_1BCA784(&this->fields.jumpInfo, 0LL);
  this->fields.deckNo = 0;
  this->fields.deckId = 0LL;
  this->fields.userEquipId = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  p_usrGameEnt = &this->fields.usrGameEnt;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
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
  v29 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
  {
    if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v29 )
      v38 = data;
    else
      v38 = 0LL;
  }
  else
  {
    v38 = 0LL;
  }
  bgTxtSprite = (UnityEngine_Component_o *)sub_1BCA784(&this->fields.jumpInfo, v38);
  if ( !*p_jumpInfo )
    goto LABEL_36;
  name = (*p_jumpInfo)->fields.name;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5301/*"DeckId"*/, 0LL);
  if ( ((unsigned __int8)bgTxtSprite & 1) != 0
    || (bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                   name,
                                                   (System_String_o *)StringLiteral_6291/*"EventDeckId"*/,
                                                   0LL),
        ((unsigned __int8)bgTxtSprite & 1) != 0) )
  {
    v40 = *p_jumpInfo;
    if ( !*p_jumpInfo )
      goto LABEL_36;
    this->fields.deckId = v40->fields.userId;
    this->fields.deckNo = v40->fields.num;
    userId2 = v40->fields.userId2;
  }
  else
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_15387/*"UserEquipId"*/,
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
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
    sub_1BCAA3C(bgTxtSprite, v26);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0LL, 19, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_36;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0LL);
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37);
  AtlasManager__LoadOutGameAtlas(v36, 0LL);
}


void __fastcall MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B1152A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, res, method);
    byte_4B1152A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__closeMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1152B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1152B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__,
    0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall MasterFormationRootComponent__gotoBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterFormationRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct SceneJumpInfo_o *jumpInfo; // x8
  System_String_o *name; // x20
  struct SceneJumpInfo_o *v14; // x8
  struct SceneJumpInfo_o *v15; // x8
  bool IsStackScene; // w19
  __int64 v17; // x1
  __int64 v18; // x2
  TerminalPramsManager_c *v19; // x0
  int32_t v20; // w1
  bool v21; // w19

  v3 = this;
  if ( (byte_4B1152D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5301/*"DeckId"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_6291/*"EventDeckId"*/, v8, v9);
    this = (MasterFormationRootComponent_o *)sub_1BCA7E0(&StringLiteral_15387/*"UserEquipId"*/, v10, v11);
    byte_4B1152D = 1;
  }
  jumpInfo = v3->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_30;
  name = jumpInfo->fields.name;
  this = (MasterFormationRootComponent_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_15387/*"UserEquipId"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v3->fields.jumpInfo;
    if ( !v14 )
      goto LABEL_30;
    v14->fields.userId = v3->fields.userEquipId;
  }
  else
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_5301/*"DeckId"*/,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0
      || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                     name,
                                                     (System_String_o *)StringLiteral_6291/*"EventDeckId"*/,
                                                     0LL),
          ((unsigned __int8)this & 1) != 0) )
    {
      v15 = v3->fields.jumpInfo;
      if ( !v15 )
        goto LABEL_30;
      v15->fields.userId2 = v3->fields.userEquipId;
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0LL),
        (this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(this, method);
  }
  if ( !IsStackScene )
  {
    v20 = 39;
    goto LABEL_24;
  }
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
    if ( !byte_4B11139 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
      byte_4B11139 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v20 = 34;
LABEL_24:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v20, 1, 0LL, 0LL);
      return;
    }
    goto LABEL_30;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  v21 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0LL);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  if ( v21 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
  else
    AvalonSceneManager__popScene((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
}


void __fastcall MasterFormationRootComponent__requestChangeUsrEquip(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MasterFormationRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MasterFormationComponent_o *mstFormationComp; // x8
  int64_t currentUsrEquipId; // x8
  __int64 *v8; // x8

  v3 = this;
  if ( (byte_4B11529 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9429/*"NO_CHANGE_EQUIP"*/, method, v2);
    this = (MasterFormationRootComponent_o *)sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v4, v5);
    byte_4B11529 = 1;
  }
  mstFormationComp = v3->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  if ( !mstFormationComp->fields.isChange
    || (currentUsrEquipId = mstFormationComp->fields.currentUsrEquipId, v3->fields.userEquipId == currentUsrEquipId) )
  {
    this = (MasterFormationRootComponent_o *)v3->fields.myFSM;
    if ( this )
    {
      v8 = &StringLiteral_9429/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(this, method);
  }
  this = (MasterFormationRootComponent_o *)v3->fields.myFSM;
  v3->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v8 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v8, 0LL);
}


void __fastcall MasterFormationRootComponent__showMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MasterFormationComponent_o *mstFormationComp; // x0
  MasterFormationComponent_o *v11; // x20
  UserGameEntity_o *usrGameEnt; // x21
  int64_t userEquipId; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  MasterFormationComponent_NotificationDragState_o *v17; // x23
  const MethodInfo *v18; // x3
  CommonUI_o *v19; // x19

  if ( (byte_4B11528 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MasterFormationRootComponent_SetBackBtnEnabled__, v4, v5);
    sub_1BCA7E0(&MasterFormationComponent_NotificationDragState_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11528 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_10;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, 0LL);
  v11 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v17 = (MasterFormationComponent_NotificationDragState_o *)sub_1BCAA2C(
                                                              MasterFormationComponent_NotificationDragState_TypeInfo,
                                                              v14,
                                                              v15,
                                                              v16);
  MasterFormationComponent_NotificationDragState___ctor(
    v17,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    v18);
  if ( !v11 )
    goto LABEL_10;
  MasterFormationComponent__setMasterFormation(v11, usrGameEnt, userEquipId, v17, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_10;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (CommonUI_o *)mstFormationComp;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !v19 )
LABEL_10:
    sub_1BCAA3C(mstFormationComp, method);
  CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}