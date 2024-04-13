void __fastcall MasterFormationRootComponent___ctor(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__Init(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42E8960 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E8960 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__OnClickBack(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42E8965 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, (_DWORD)method, v2, v3);
    byte_42E8965 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__SetBackBtnEnabled(
        MasterFormationRootComponent_o *this,
        bool isDrag,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, isDrag);
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
  int v2; // w2
  __int64 v3; // x3
  MasterFormationComponent_o *mstFormationComp; // x0

  if ( (byte_42E8967 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E8967 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp
    || (MasterFormationComponent__closeMasterFormation(mstFormationComp, 0LL),
        (mstFormationComp = (MasterFormationComponent_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B5D69C(mstFormationComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)mstFormationComp, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E895E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E895E = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MasterFormationRootComponent__beginResume(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginResume_17513312((SceneRootComponent_o *)this, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  struct SceneJumpInfo_o **p_jumpInfo; // x22
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrGameEnt; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x10
  __int64 userId; // x8
  UnityEngine_Component_c *klass; // x8
  System_Action_o *v58; // x20
  System_String_o *name; // x21
  struct SceneJumpInfo_o *v60; // x8

  if ( (byte_42E895F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_MasterFormationRootComponent__beginStartUp_b__9_0__, v19, v20, v21);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_5279/*"DeckId"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_6234/*"EventDeckId"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_15255/*"UserEquipId"*/, v34, v35, v36);
    byte_42E895F = 1;
  }
  this->fields.jumpInfo = 0LL;
  p_jumpInfo = &this->fields.jumpInfo;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
  v55 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v55
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v55 - 1] != SceneJumpInfo_TypeInfo )
  {
    goto LABEL_8;
  }
  *p_jumpInfo = (struct SceneJumpInfo_o *)data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.jumpInfo,
    (System_Int32_array **)data,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !*p_jumpInfo )
    goto LABEL_33;
  name = (*p_jumpInfo)->fields.name;
  if ( !name )
    goto LABEL_8;
  bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(name, (System_String_o *)StringLiteral_5279/*"DeckId"*/, 0LL);
  if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_6234/*"EventDeckId"*/,
                                               0LL);
    if ( ((unsigned __int8)bgTxtSprite & 1) == 0 )
    {
      bgTxtSprite = (UnityEngine_Component_o *)System_String__op_Equality(
                                                 name,
                                                 (System_String_o *)StringLiteral_15255/*"UserEquipId"*/,
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
  v60 = *p_jumpInfo;
  if ( !*p_jumpInfo )
    goto LABEL_33;
  this->fields.deckId = v60->fields.userId;
  this->fields.deckNo = v60->fields.num;
  userId = v60->fields.userId2;
LABEL_29:
  this->fields.userEquipId = userId;
LABEL_9:
  if ( userId <= 0 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( *p_usrGameEnt )
      {
        if ( bgTxtSprite )
        {
          bgTxtSprite = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)bgTxtSprite,
                                                     (*p_usrGameEnt)->fields.activeDeckId,
                                                     (const MethodInfo_23FB038 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
    sub_B5D69C(bgTxtSprite, v46);
  }
LABEL_16:
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgTxtSprite, this->fields.myFSM, 1, 0LL, 19, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)bgTxtSprite, 1, 0, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !bgTxtSprite )
    goto LABEL_33;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgTxtSprite, 29, 0LL);
  v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_MasterFormationRootComponent__beginStartUp_b__9_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v58, 0LL);
}


void __fastcall MasterFormationRootComponent__changeUserEquipCallback(
        MasterFormationRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42E8963 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, (_DWORD)res, (_DWORD)method, v3);
    byte_42E8963 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, res);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
}


void __fastcall MasterFormationRootComponent__closeMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E8964 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E8964 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent__closeMasterFormation_b__17_0__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall MasterFormationRootComponent__gotoBack(MasterFormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterFormationRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  System_String_o *name; // x20
  struct SceneJumpInfo_o *v19; // x8
  struct SceneJumpInfo_o *v20; // x8
  bool IsStackScene; // w19
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  TerminalPramsManager_c *v25; // x0
  int32_t v26; // w1
  bool v27; // w19

  v4 = this;
  if ( (byte_42E8966 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5279/*"DeckId"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6234/*"EventDeckId"*/, v11, v12, v13);
    this = (MasterFormationRootComponent_o *)sub_B5D5C4(&StringLiteral_15255/*"UserEquipId"*/, v14, v15, v16);
    byte_42E8966 = 1;
  }
  jumpInfo = v4->fields.jumpInfo;
  if ( !jumpInfo )
    goto LABEL_33;
  name = jumpInfo->fields.name;
  if ( name )
  {
    this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                               name,
                                               (System_String_o *)StringLiteral_15255/*"UserEquipId"*/,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = v4->fields.jumpInfo;
      if ( !v19 )
        goto LABEL_33;
      v19->fields.userId = v4->fields.userEquipId;
    }
    else
    {
      this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                 name,
                                                 (System_String_o *)StringLiteral_5279/*"DeckId"*/,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0
        || (this = (MasterFormationRootComponent_o *)System_String__op_Equality(
                                                       name,
                                                       (System_String_o *)StringLiteral_6234/*"EventDeckId"*/,
                                                       0LL),
            ((unsigned __int8)this & 1) != 0) )
      {
        v20 = v4->fields.jumpInfo;
        if ( !v20 )
          goto LABEL_33;
        v20->fields.userId2 = v4->fields.userEquipId;
      }
    }
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)this, 0LL),
        (this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(this, method);
  }
  if ( !IsStackScene )
  {
    v26 = 39;
    goto LABEL_27;
  }
  if ( AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 34, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v22, v23, v24);
      byte_42E4B29 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v26 = 34;
LABEL_27:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, v26, 1, 0LL, 0LL);
      return;
    }
    goto LABEL_33;
  }
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  v27 = AvalonSceneManager__checkStackScene((AvalonSceneManager_o *)this, 80, 0LL);
  this = (MasterFormationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  if ( v27 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
  else
    AvalonSceneManager__popScene((AvalonSceneManager_o *)this, 1, 0LL, 0LL);
}


void __fastcall MasterFormationRootComponent__requestChangeUsrEquip(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterFormationRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MasterFormationComponent_o *mstFormationComp; // x8
  int64_t currentUsrEquipId; // x8
  __int64 *v10; // x8

  v4 = this;
  if ( (byte_42E8962 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9449/*"NO_CHANGE_EQUIP"*/, (_DWORD)method, v2, v3);
    this = (MasterFormationRootComponent_o *)sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v5, v6, v7);
    byte_42E8962 = 1;
  }
  mstFormationComp = v4->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  if ( !mstFormationComp->fields.isChange
    || (currentUsrEquipId = mstFormationComp->fields.currentUsrEquipId, v4->fields.userEquipId == currentUsrEquipId) )
  {
    this = (MasterFormationRootComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      v10 = &StringLiteral_9449/*"NO_CHANGE_EQUIP"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_B5D69C(this, method);
  }
  this = (MasterFormationRootComponent_o *)v4->fields.myFSM;
  v4->fields.userEquipId = currentUsrEquipId;
  if ( !this )
    goto LABEL_11;
  v10 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v10, 0LL);
}


void __fastcall MasterFormationRootComponent__showMasterFormation(
        MasterFormationRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  MasterFormationComponent_o *mstFormationComp; // x0
  MasterFormationComponent_o *v15; // x20
  int64_t userEquipId; // x21
  UserGameEntity_o *usrGameEnt; // x22
  MasterFormationComponent_NotificationDragState_o *v18; // x23
  CommonUI_o *v19; // x19

  if ( (byte_42E8961 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MasterFormationRootComponent_SetBackBtnEnabled__, v5, v6, v7);
    sub_B5D5C4(&MasterFormationComponent_NotificationDragState_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E8961 = 1;
  }
  mstFormationComp = this->fields.mstFormationComp;
  if ( !mstFormationComp )
    goto LABEL_11;
  MasterFormationComponent__setCmdSpellImg(mstFormationComp, 0LL);
  v15 = this->fields.mstFormationComp;
  userEquipId = this->fields.userEquipId;
  usrGameEnt = this->fields.usrGameEnt;
  v18 = (MasterFormationComponent_NotificationDragState_o *)sub_B5D694(MasterFormationComponent_NotificationDragState_TypeInfo);
  MasterFormationComponent_NotificationDragState___ctor(
    v18,
    (Il2CppObject *)this,
    Method_MasterFormationRootComponent_SetBackBtnEnabled__,
    0LL);
  if ( !v15 )
    goto LABEL_11;
  MasterFormationComponent__setMasterFormation(v15, usrGameEnt, userEquipId, v18, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)this->fields.titleInfo;
  if ( !mstFormationComp )
    goto LABEL_11;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)mstFormationComp, 1, 0LL);
  mstFormationComp = (MasterFormationComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (CommonUI_o *)mstFormationComp;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v19 )
LABEL_11:
    sub_B5D69C(mstFormationComp, method);
  CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}