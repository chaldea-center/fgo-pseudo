void MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596B3D9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B3D9 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
}


void MasterFormationRootComponent__OnClickBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_596B3DE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    byte_596B3DE = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_2213CDC(0, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3576/*"CLICK_BACK"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_2213CDC(0, isDrag);
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

  if ( (byte_596B3E0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B3E0 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, method),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
}


void MasterFormationRootComponent__beginFinish(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void MasterFormationRootComponent__beginInitialize(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596B3D7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B3D7 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void MasterFormationRootComponent__beginResume(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_48467168((SceneRootComponent_o *)this, 0);
}


void MasterFormationRootComponent__beginStartUp(
        MasterFormationRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppClass *v28; // x8
  __int64 naturalAligment; // x9
  __int64 userId2; // x8
  UnityEngine_Component_c *klass; // x8
  System_Action_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t v35; // w1
  System_String_o *name; // x22
  struct SceneJumpInfo_o *v37; // x8
  int32_t num; // w9
  int64_t userId; // x10

  if ( (byte_596B3D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_2213A60(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5382/*"DeckId"*/);
    sub_2213A60(&StringLiteral_6469/*"EventDeckId"*/);
    sub_2213A60(&StringLiteral_15835/*"UserEquipId"*/);
    byte_596B3D8 = 1;
  }
  this->fields.jumpInfo = 0;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.deckNo = 0;
  this->fields.deckId = 0;
  this->fields.userEquipId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  p_usrGameEnt = &this->fields.usrGameEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_35;
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
      v35 = (int)data;
    else
      v35 = 0;
  }
  else
  {
    v35 = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo, v35, v22, v23, v24, v25, v26, v27);
  if ( !*p_jumpInfo )
    goto LABEL_35;
  name = (*p_jumpInfo)->fields.name;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5382/*"DeckId"*/, 0);
  if ( ((unsigned __int8)bgTxtSprite & 1) != 0
    || (bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                   name,
                                                   (System_String_o *)StringLiteral_6469/*"EventDeckId"*/,
                                                   0),
        ((unsigned __int8)bgTxtSprite & 1) != 0) )
  {
    v37 = *p_jumpInfo;
    if ( !*p_jumpInfo )
      goto LABEL_35;
    num = v37->fields.num;
    userId = v37->fields.userId;
    userId2 = v37->fields.userId2;
    this->fields.deckNo = num;
    this->fields.deckId = userId;
    this->fields.userEquipId = userId2;
  }
  else
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_15835/*"UserEquipId"*/, 0);
    if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
    {
LABEL_8:
      userId2 = this->fields.userEquipId;
      goto LABEL_9;
    }
    if ( !*p_jumpInfo )
      goto LABEL_35;
    userId2 = (*p_jumpInfo)->fields.userId;
    this->fields.userEquipId = userId2;
  }
LABEL_9:
  if ( userId2 <= 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_3F13190 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
LABEL_35:
    sub_2213CDC(bgTxtSprite, v19);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_35;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0, 20, 0);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_35;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_35;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0);
  v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33, v34);
  AtlasManager__LoadOutGameAtlas(v32, 0);
}


void MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596B3DC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    byte_596B3DC = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11565/*"REQUEST_OK"*/, 0);
}


void MasterFormationRootComponent__closeMasterFormation(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596B3DD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B3DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


void MasterFormationRootComponent__gotoBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  MasterFormationRootComponent_o *v2; // x19
  struct SceneJumpInfo_o *jumpInfo; // x8
  System_String_o *name; // x20
  struct SceneJumpInfo_o *v5; // x8
  struct SceneJumpInfo_o *v6; // x8
  bool IsStackScene; // w19
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v12; // x0
  int32_t v13; // w1
  bool v14; // w19

  v2 = this;
  if ( (byte_596B3DF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_5382/*"DeckId"*/);
    sub_2213A60(&StringLiteral_6469/*"EventDeckId"*/);
    this = (MasterFormationRootComponent_o *)sub_2213A60(&StringLiteral_15835/*"UserEquipId"*/);
    byte_596B3DF = 1;
  }
  jumpInfo = v2->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_32;
  name = jumpInfo->fields.name;
  this = (MasterFormationRootComponent_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_15835/*"UserEquipId"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.jumpInfo;
    if ( !v5 )
      goto LABEL_32;
    v5->fields.userId = v2->fields.userEquipId;
  }
  else
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5382/*"DeckId"*/, 0);
    if ( ((unsigned __int8)this & 1) != 0
      || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                     name,
                                                     (System_String_o *)StringLiteral_6469/*"EventDeckId"*/,
                                                     0),
          ((unsigned __int8)this & 1) != 0) )
    {
      v6 = v2->fields.jumpInfo;
      if ( !v6 )
        goto LABEL_32;
      v6->fields.userId2 = v2->fields.userEquipId;
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_32:
    sub_2213CDC(this, method);
  IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsStackScene )
  {
    if ( this )
    {
      v13 = 39;
      goto LABEL_25;
    }
    goto LABEL_32;
  }
  if ( !this )
    goto LABEL_32;
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
    if ( !byte_596ABDE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596ABDE = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    v12 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
    static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance(v12);
    if ( this )
    {
      v13 = 34;
LABEL_25:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v13, 1, 0, 0);
      return;
    }
    goto LABEL_32;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_32;
  v14 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( v14 )
  {
    if ( !this )
      goto LABEL_32;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)this, 1, 0, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_32;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)this, 1, 0, 0);
  }
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
  if ( (byte_596B3DB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9709/*"NO_CHANGE_EQUIP"*/);
    this = (MasterFormationRootComponent_o *)sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    byte_596B3DB = 1;
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
      v5 = &StringLiteral_9709/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
  this = (MasterFormationRootComponent_o *)v2->fields.myFSM;
  v2->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v5 = &StringLiteral_11565/*"REQUEST_OK"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void MasterFormationRootComponent__showMasterFormation(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  MasterFormationComponent_o *mstFormationComp; // x0
  UserGameEntity_o *usrGameEnt; // x21
  int64_t userEquipId; // x22
  MasterFormationComponent_o *v6; // x20
  MasterFormationComponent_NotificationDragState_o *v7; // x23
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  __int64 v10; // x2
  CommonUI_o *v11; // x19

  if ( (byte_596B3DA & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_MasterFormationRootComponent_SetBackBtnEnabled__);
    sub_2213A60(&MasterFormationComponent_NotificationDragState_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B3DA = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_10;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, method);
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v6 = this->fields.mstFormationComp;
  v7 = (MasterFormationComponent_NotificationDragState_o *)sub_2213CCC(MasterFormationComponent_NotificationDragState_TypeInfo);
  MasterFormationComponent_NotificationDragState___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    v8);
  if ( !v6 )
    goto LABEL_10;
  MasterFormationComponent__setMasterFormation(v6, usrGameEnt, userEquipId, v7, v9);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_10;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)mstFormationComp;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v10);
  if ( !v11 )
LABEL_10:
    sub_2213CDC(mstFormationComp, method);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}