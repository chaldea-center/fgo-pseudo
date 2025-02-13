void __fastcall WarehouseRootComponent___ctor(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__EndClickBackRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  bool IsStackScene; // w19

  if ( (byte_4BDA4EA & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDA4EA = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_1C22094(Instance, v5);
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
    sub_1C22094(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_39920388((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDA4EB & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDA4EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  struct SceneJumpInfo_o *transitionData; // x8
  bool v4; // w0
  WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v7; // w23
  WarehouseListMenu_CallbackFunc_o *v8; // x24
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  WarehouseListMenu_o *v17; // x21
  EventUpValSetupInfo_o *v18; // x20
  WarehouseListMenu_CallbackFunc_o *v19; // x22

  if ( (byte_4BDA4E7 & 1) == 0 )
  {
    sub_1C21E38(&WarehouseListMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_WarehouseRootComponent_OnSelectWarehouseList__);
    sub_1C21E38(&StringLiteral_12874/*"ServantEquipList"*/);
    byte_4BDA4E7 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v4 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12874/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v7 = v4;
      v8 = (WarehouseListMenu_CallbackFunc_o *)sub_1C22084(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        WarehouseListMenu__Open(warehouseListMenu, v7, setupInfo, v8, 0LL);
        this->fields.transitionData = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.transitionData, 0LL, v11, v12, v13, v14, v15, v16);
        return;
      }
LABEL_9:
      sub_1C22094(v9, v10);
    }
    v17 = this->fields.warehouseListMenu;
    v18 = this->fields.setupInfo;
    v19 = (WarehouseListMenu_CallbackFunc_o *)sub_1C22084(WarehouseListMenu_CallbackFunc_TypeInfo);
    WarehouseListMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_WarehouseRootComponent_OnSelectWarehouseList__,
      0LL);
    if ( !v17 )
      goto LABEL_9;
    WarehouseListMenu__Open(v17, 0, v18, v19, 0LL);
  }
}


void __fastcall WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDA4E9 & 1) == 0 )
  {
    sub_1C21E38(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_WarehouseRootComponent_EndClickBackRequest__);
    sub_1C21E38(&Method_WarehouseRootComponent_OnClickBack__);
    byte_4BDA4E9 = 1;
  }
  v3 = Method_WarehouseRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_WarehouseRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_WarehouseRootComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1C22084(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_1C22094(v7, v8);
  WarehouseListMenu__StatusRequest(warehouseListMenu, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__OnSelectWarehouseList(
        WarehouseRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDA4E8 & 1) == 0 )
  {
    sub_1C21E38(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_WarehouseRootComponent_EndServantQuestRequest__);
    byte_4BDA4E8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1C22084(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_1C22094(v7, v8);
      WarehouseListMenu__StatusRequest(warehouseListMenu, v6, 0LL);
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
    sub_1C22094(0LL, method);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_4BDA4E6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4BDA4E6 = 1;
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
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(warehouseListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDA4E4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDA4E4 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
  Il2CppClass *v10; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v12; // x10
  struct SceneJumpInfo_o **p_transitionData; // x0
  Il2CppObject *v14; // x1
  System_String_o *MainBgmName; // x20
  __int64 v16; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v19; // x20
  EventUpValSetupInfo_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v28; // x20

  if ( (byte_4BDA4E5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&EventUpValSetupInfo_TypeInfo);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_WarehouseRootComponent_EndLoadCommonBg__);
    byte_4BDA4E5 = 1;
  }
  if ( !data )
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
LABEL_11:
    v14 = 0LL;
    goto LABEL_15;
  }
  v10 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
      v12 = data;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  this->fields.transitionData = (struct SceneJumpInfo_o *)v12;
  p_transitionData = &this->fields.transitionData;
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_11;
  if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v10 )
    v14 = data;
  else
    v14 = 0LL;
LABEL_15:
  sub_1C21DDC((PartyOrganizationUtility_o *)p_transitionData, (int64_t)v14, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 84, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setBackBtnSprite_38384144(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_30;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_30;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)titleInfo, 0, 0LL, 0LL);
  v19 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  v20 = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40169720(v20, v19, 0, 0, 0, 0LL);
  this->fields.setupInfo = v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)v20, v21, v22, v23, v24, v25, v26);
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
    sub_1C22094(titleInfo, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v28 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v28, 2, 1, 0LL);
}