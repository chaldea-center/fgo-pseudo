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
  AvalonSceneManager_o *Instance; // x0
  bool IsStackScene; // w19
  AvalonSceneManager_o *v6; // x0

  if ( (byte_40F6727 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_40F6727 = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
          (v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_B170D4();
    }
    if ( IsStackScene )
      AvalonSceneManager__popScene(v6, 1, 0LL, 0LL);
    else
      AvalonSceneManager__transitionScene(v6, 39, 1, 0LL, 0LL);
  }
}


void __fastcall WarehouseRootComponent__EndLoadCommonBg(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F6728 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_40F6728 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct SceneJumpInfo_o *transitionData; // x8
  bool v9; // w0
  struct WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v12; // w24
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  WarehouseListMenu_CallbackFunc_o *v17; // x23
  int32_t v18; // w1
  WarehouseListMenu_o *v19; // x0
  WarehouseListMenu_o *v20; // x21
  EventUpValSetupInfo_o *v21; // x19
  WarehouseListMenu_CallbackFunc_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F6724 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_WarehouseRootComponent_OnSelectWarehouseList__, v6);
    sub_B16FFC(&StringLiteral_12655, v7);
    byte_40F6724 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v9 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12655, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v12 = v9;
      v17 = (WarehouseListMenu_CallbackFunc_o *)sub_B170CC(WarehouseListMenu_CallbackFunc_TypeInfo, v13, v14, v15, v16);
      WarehouseListMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        if ( v12 )
        {
          v18 = 1;
          v19 = warehouseListMenu;
        }
        else
        {
          v19 = warehouseListMenu;
          v18 = 0;
        }
        WarehouseListMenu__Open(v19, v18, setupInfo, v17, 0LL);
        this->fields.transitionData = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.transitionData, 0LL, v23, v24, v25, v26, v27, v28);
        return;
      }
    }
    else
    {
      v20 = this->fields.warehouseListMenu;
      v21 = this->fields.setupInfo;
      v22 = (WarehouseListMenu_CallbackFunc_o *)sub_B170CC(WarehouseListMenu_CallbackFunc_TypeInfo, method, v2, v3, v4);
      WarehouseListMenu_CallbackFunc___ctor(
        v22,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( v20 )
      {
        WarehouseListMenu__Open(v20, 0, v21, v22, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarehouseListMenu_o *warehouseListMenu; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x21

  if ( (byte_40F6726 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_WarehouseRootComponent_EndClickBackRequest__, v4);
    byte_40F6726 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                     WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                     v6,
                                                     v7,
                                                     v8,
                                                     v9);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_B170D4();
  WarehouseListMenu__StatusRequest(warehouseListMenu, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__OnSelectWarehouseList(
        WarehouseRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x21

  if ( (byte_40F6725 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_WarehouseRootComponent_EndServantQuestRequest__, v7);
    byte_40F6725 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                        WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                        *(_QWORD *)&result,
                                                        method,
                                                        v3,
                                                        v4);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_B170D4();
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
    sub_B170D4();
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  AtlasManager_o *Instance; // x0

  if ( (byte_40F6723 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_40F6723 = 1;
  }
  warehouseListMenu = this->fields.warehouseListMenu;
  this->fields.state = 0;
  if ( !warehouseListMenu
    || (WarehouseListMenu__Init(warehouseListMenu, 0LL),
        (warehouseConfirmMenu = this->fields.warehouseConfirmMenu) == 0LL)
    || (WarehouseConfirmMenu__Init(warehouseConfirmMenu, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AtlasManager__ReleaseUISkin(Instance, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F6721 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F6721 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__beginStartUp(
        WarehouseRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x10
  Il2CppObject *v19; // x1
  struct SceneJumpInfo_o **p_transitionData; // x0
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v23; // x0
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *EventValUpEventIdList; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  EventUpValSetupInfo_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x20

  if ( (byte_40F6722 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AtlasManager_TypeInfo, v10);
    sub_B16FFC(&BgmManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v12);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&SoundManager_TypeInfo, v16);
    sub_B16FFC(&Method_WarehouseRootComponent_EndLoadCommonBg__, v17);
    byte_40F6722 = 1;
  }
  if ( data )
  {
    v18 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v18 - 1] == SceneJumpInfo_TypeInfo )
        v19 = data;
      else
        v19 = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    this->fields.transitionData = (struct SceneJumpInfo_o *)v19;
    p_transitionData = &this->fields.transitionData;
  }
  else
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
    v19 = 0LL;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_transitionData,
    (System_Int32_array **)v19,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_29;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 83, 0LL);
  v23 = this->fields.titleInfo;
  if ( !v23 )
    goto LABEL_29;
  TitleInfoControl__setBackBtnSprite_19608808(v23, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(MasterData_WarQuestSelectionMaster, 0, 0LL);
  v31 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v27, v28, v29, v30);
  EventUpValSetupInfo___ctor_24610352(v31, EventValUpEventIdList, 0, 0LL);
  this->fields.setupInfo = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (v42 = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
LABEL_29:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v42, 0, 0LL);
  v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v47, 2, 1, 0LL);
}