void __fastcall MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B324AB & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7075/*"GO_NEXT"*/, method);
    byte_4B324AB = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7075/*"GO_NEXT"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__OnClickBack(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B324B0 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3561/*"CLICK_BACK"*/, method);
    byte_4B324B0 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BD36B4(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3561/*"CLICK_BACK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BD36B4(0LL, isDrag);
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

  if ( (byte_4B324B2 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7075/*"GO_NEXT"*/, method);
    byte_4B324B2 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, 0LL),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1BD36B4(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_7075/*"GO_NEXT"*/, 0LL);
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

  if ( (byte_4B324A9 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B324A9 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginResume(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginResume_39454688((SceneRootComponent_o *)this, 0LL);
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
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  struct UserGameEntity_o **p_usrGameEnt; // x20
  __int64 v16; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  __int64 methodPtr_low; // x9
  __int64 userId2; // x8
  UnityEngine_Component_c *klass; // x8
  System_Action_o *v22; // x20
  System_String_o *name; // x22
  struct SceneJumpInfo_o *v24; // x8

  if ( (byte_4B324AA & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, data);
    sub_1BD3458(&AtlasManager_TypeInfo, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_1BD3458(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v7);
    sub_1BD3458(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__, v8);
    sub_1BD3458(&SceneJumpInfo_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BD3458(&StringLiteral_5309/*"DeckId"*/, v11);
    sub_1BD3458(&StringLiteral_6303/*"EventDeckId"*/, v12);
    sub_1BD3458(&StringLiteral_15406/*"UserEquipId"*/, v13);
    byte_4B324AA = 1;
  }
  this->fields.jumpInfo = 0LL;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_1BD33FC(&this->fields.jumpInfo);
  this->fields.deckNo = 0;
  this->fields.deckId = 0LL;
  this->fields.userEquipId = 0LL;
  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  p_usrGameEnt = &this->fields.usrGameEnt;
  sub_1BD33FC(&this->fields.usrGameEnt);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  if ( !data )
    goto LABEL_8;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  bgTxtSprite = (UnityEngine_Component_o *)sub_1BD33FC(&this->fields.jumpInfo);
  if ( !*p_jumpInfo )
    goto LABEL_31;
  name = (*p_jumpInfo)->fields.name;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5309/*"DeckId"*/, 0LL);
  if ( ((unsigned __int8)bgTxtSprite & 1) != 0
    || (bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                   name,
                                                   (System_String_o *)StringLiteral_6303/*"EventDeckId"*/,
                                                   0LL),
        ((unsigned __int8)bgTxtSprite & 1) != 0) )
  {
    v24 = *p_jumpInfo;
    if ( !*p_jumpInfo )
      goto LABEL_31;
    this->fields.deckId = v24->fields.userId;
    this->fields.deckNo = v24->fields.num;
    userId2 = v24->fields.userId2;
  }
  else
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_15406/*"UserEquipId"*/,
                                               0LL);
    if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
    {
LABEL_8:
      userId2 = this->fields.userEquipId;
      goto LABEL_9;
    }
    if ( !*p_jumpInfo )
      goto LABEL_31;
    userId2 = (*p_jumpInfo)->fields.userId;
  }
  this->fields.userEquipId = userId2;
LABEL_9:
  if ( userId2 <= 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_31D209C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
LABEL_31:
    sub_1BD36B4(bgTxtSprite, v16);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_31;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0LL, 19, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_31;
  TitleInfoControl__setBackBtnSprite_37950248((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_31;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0LL);
  v22 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v22, 0LL);
}


void __fastcall MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B324AE & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11214/*"REQUEST_OK"*/, res);
    byte_4B324AE = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BD36B4(0LL, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11214/*"REQUEST_OK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__closeMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B324AF & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v3);
    sub_1BD3458(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B324AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__,
    0LL);
  if ( !v8 )
    sub_1BD36B4(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  if ( (byte_4B324B1 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_5309/*"DeckId"*/, v4);
    sub_1BD3458(&StringLiteral_6303/*"EventDeckId"*/, v5);
    this = (MasterFormationRootComponent_o *)sub_1BD3458(&StringLiteral_15406/*"UserEquipId"*/, v6);
    byte_4B324B1 = 1;
  }
  jumpInfo = v2->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_30;
  name = jumpInfo->fields.name;
  this = (MasterFormationRootComponent_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_15406/*"UserEquipId"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v2->fields.jumpInfo;
    if ( !v9 )
      goto LABEL_30;
    v9->fields.userId = v2->fields.userEquipId;
  }
  else
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_5309/*"DeckId"*/,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0
      || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                     name,
                                                     (System_String_o *)StringLiteral_6303/*"EventDeckId"*/,
                                                     0LL),
          ((unsigned __int8)this & 1) != 0) )
    {
      v10 = v2->fields.jumpInfo;
      if ( !v10 )
        goto LABEL_30;
      v10->fields.userId2 = v2->fields.userEquipId;
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0LL),
        (this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1BD36B4(this, method);
  }
  if ( !IsStackScene )
  {
    v14 = 39;
    goto LABEL_24;
  }
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B320BB )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v12);
      byte_4B320BB = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v14 = 34;
LABEL_24:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v14, 1, 0LL, 0LL);
      return;
    }
    goto LABEL_30;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  v15 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0LL);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
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
  if ( (byte_4B324AD & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9443/*"NO_CHANGE_EQUIP"*/, method);
    this = (MasterFormationRootComponent_o *)sub_1BD3458(&StringLiteral_11214/*"REQUEST_OK"*/, v3);
    byte_4B324AD = 1;
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
      v6 = &StringLiteral_9443/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BD36B4(this, method);
  }
  this = (MasterFormationRootComponent_o *)v2->fields.myFSM;
  v2->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v6 = &StringLiteral_11214/*"REQUEST_OK"*/;
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
  UserGameEntity_o *usrGameEnt; // x21
  int64_t userEquipId; // x22
  MasterFormationComponent_NotificationDragState_o *v10; // x23
  const MethodInfo *v11; // x3
  CommonUI_o *v12; // x19

  if ( (byte_4B324AC & 1) == 0 )
  {
    sub_1BD3458(&AvalonSceneManager_TypeInfo, method);
    sub_1BD3458(&Method_MasterFormationRootComponent_SetBackBtnEnabled__, v3);
    sub_1BD3458(&MasterFormationComponent_NotificationDragState_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B324AC = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_10;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, 0LL);
  v7 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v10 = (MasterFormationComponent_NotificationDragState_o *)sub_1BD36A4(MasterFormationComponent_NotificationDragState_TypeInfo);
  MasterFormationComponent_NotificationDragState___ctor(
    v10,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    v11);
  if ( !v7 )
    goto LABEL_10;
  MasterFormationComponent__setMasterFormation(v7, usrGameEnt, userEquipId, v10, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_10;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)mstFormationComp;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v12 )
LABEL_10:
    sub_1BD36B4(mstFormationComp, method);
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}