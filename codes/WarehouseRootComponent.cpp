void __fastcall WarehouseRootComponent___ctor(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__EndClickBackRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  bool IsStackScene; // w19

  if ( (byte_4B141F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, method);
    byte_4B141F8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_1BCAA3C(Instance, v5);
    }
    if ( IsStackScene )
      AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, 0LL, 0LL);
    else
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0LL, 0LL);
  }
}


void __fastcall WarehouseRootComponent__EndLoadCommonBg(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1BCAA3C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B141F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, method);
    byte_4B141F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct SceneJumpInfo_o *transitionData; // x8
  bool v10; // w0
  WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v13; // w23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  WarehouseListMenu_CallbackFunc_o *v17; // x24
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  WarehouseListMenu_o *v26; // x21
  EventUpValSetupInfo_o *v27; // x20
  WarehouseListMenu_CallbackFunc_o *v28; // x22

  if ( (byte_4B141F5 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseRootComponent_OnSelectWarehouseList__, v5, v6);
    sub_1BCA7E0(&StringLiteral_12785/*"ServantEquipList"*/, v7, v8);
    byte_4B141F5 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v10 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12785/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v13 = v10;
      v17 = (WarehouseListMenu_CallbackFunc_o *)sub_1BCAA2C(WarehouseListMenu_CallbackFunc_TypeInfo, v14, v15, v16);
      WarehouseListMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        WarehouseListMenu__Open(warehouseListMenu, v13, setupInfo, v17, 0LL);
        this->fields.transitionData = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.transitionData, 0LL, v20, v21, v22, v23, v24, v25);
        return;
      }
LABEL_9:
      sub_1BCAA3C(v18, v19);
    }
    v26 = this->fields.warehouseListMenu;
    v27 = this->fields.setupInfo;
    v28 = (WarehouseListMenu_CallbackFunc_o *)sub_1BCAA2C(WarehouseListMenu_CallbackFunc_TypeInfo, method, v2, v3);
    WarehouseListMenu_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      Method_WarehouseRootComponent_OnSelectWarehouseList__,
      0LL);
    if ( !v26 )
      goto LABEL_9;
    WarehouseListMenu__Open(v26, 0, v27, v28, 0LL);
  }
}


void __fastcall WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  WarehouseListMenu_o *warehouseListMenu; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B141F7 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseRootComponent_EndClickBackRequest__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseRootComponent_OnClickBack__, v6, v7);
    byte_4B141F7 = 1;
  }
  v8 = Method_WarehouseRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_WarehouseRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_WarehouseRootComponent_OnClickBack__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                     WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                     v11,
                                                     v12,
                                                     v13);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_1BCAA3C(v15, v16);
  WarehouseListMenu__StatusRequest(warehouseListMenu, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__OnSelectWarehouseList(
        WarehouseRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B141F6 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_WarehouseRootComponent_EndServantQuestRequest__, v6, v7);
    byte_4B141F6 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                        WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                        *(_QWORD *)&result,
                                                        method,
                                                        v3);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_1BCAA3C(v10, v11);
      WarehouseListMenu__StatusRequest(warehouseListMenu, v9, 0LL);
    }
    else
    {
      WarehouseRootComponent__OnClickBack(this, *(const MethodInfo **)&result);
    }
  }
}


void __fastcall WarehouseRootComponent__Quit(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  warehouseListMenu = this->fields.warehouseListMenu;
  this->fields.state = 0;
  if ( !warehouseListMenu )
    sub_1BCAA3C(0LL, method);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_4B141F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method, v2);
    byte_4B141F4 = 1;
  }
  warehouseListMenu = this->fields.warehouseListMenu;
  this->fields.state = 0;
  if ( !warehouseListMenu
    || (WarehouseListMenu__Init(warehouseListMenu, 0LL),
        (warehouseListMenu = (WarehouseListMenu_o *)this->fields.warehouseConfirmMenu) == 0LL)
    || (WarehouseConfirmMenu__Init((WarehouseConfirmMenu_o *)warehouseListMenu, 0LL),
        (warehouseListMenu = (WarehouseListMenu_o *)this->fields.backSkinSprite) == 0LL)
    || (warehouseListMenu = (WarehouseListMenu_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)warehouseListMenu,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warehouseListMenu, 0, 0LL),
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(warehouseListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B141F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B141F2 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__beginStartUp(
        WarehouseRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppClass *v28; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v30; // x10
  struct SceneJumpInfo_o **p_transitionData; // x0
  Il2CppObject *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  System_String_o *MainBgmName; // x20
  __int64 v36; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  EventUpValSetupInfo_o *v43; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x20
  __int64 v55; // x1

  if ( (byte_4B141F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&BgmManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v16, v17);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&SoundManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_WarehouseRootComponent_EndLoadCommonBg__, v26, v27);
    byte_4B141F3 = 1;
  }
  if ( !data )
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
LABEL_11:
    v32 = 0LL;
    goto LABEL_15;
  }
  v28 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
      v30 = data;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  this->fields.transitionData = (struct SceneJumpInfo_o *)v30;
  p_transitionData = &this->fields.transitionData;
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_11;
  if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v28 )
    v32 = data;
  else
    v32 = 0LL;
LABEL_15:
  sub_1BCA784((PartyOrganizationUtility_o *)p_transitionData, (int64_t)v32, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v33);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v34);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 84, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setBackBtnSprite_37887988(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_30;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_30;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)titleInfo, 0, 0LL, 0LL);
  v39 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v43 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v40, v41, v42);
  EventUpValSetupInfo___ctor_39629568(v43, v39, 0, 0, 0, 0LL);
  this->fields.setupInfo = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  titleInfo = (TitleInfoControl_o *)this->fields.bgTxtSprite;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL),
        titleInfo = (TitleInfoControl_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)titleInfo & 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)titleInfo,
                                            0LL)) == 0LL )
  {
LABEL_30:
    sub_1BCAA3C(titleInfo, v36);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55);
  AtlasManager__LoadUISkin(v54, 2, 1, 0LL);
}