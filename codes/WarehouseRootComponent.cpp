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
  __int64 v5; // x1
  bool IsStackScene; // w19

  if ( (byte_41873C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_41873C3 = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
          (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_B2C434(Instance, v5);
    }
    if ( IsStackScene )
      AvalonSceneManager__popScene(Instance, 1, 0LL, 0LL);
    else
      AvalonSceneManager__transitionScene(Instance, 39, 1, 0LL, 0LL);
  }
}


void __fastcall WarehouseRootComponent__EndLoadCommonBg(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B2C434(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41873C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_41873C4 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SceneJumpInfo_o *transitionData; // x8
  bool v6; // w0
  struct WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v9; // w24
  WarehouseListMenu_CallbackFunc_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w1
  WarehouseListMenu_o *v14; // x0
  WarehouseListMenu_o *v15; // x21
  EventUpValSetupInfo_o *v16; // x19
  WarehouseListMenu_CallbackFunc_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_41873C0 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_WarehouseRootComponent_OnSelectWarehouseList__, v3);
    sub_B2C35C(&StringLiteral_12711/*"ServantEquipList"*/, v4);
    byte_41873C0 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v6 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12711/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v9 = v6;
      v10 = (WarehouseListMenu_CallbackFunc_o *)sub_B2C42C(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        if ( v9 )
        {
          v13 = 1;
          v14 = warehouseListMenu;
        }
        else
        {
          v14 = warehouseListMenu;
          v13 = 0;
        }
        WarehouseListMenu__Open(v14, v13, setupInfo, v10, 0LL);
        this->fields.transitionData = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.transitionData, 0LL, v18, v19, v20, v21, v22, v23);
        return;
      }
    }
    else
    {
      v15 = this->fields.warehouseListMenu;
      v16 = this->fields.setupInfo;
      v17 = (WarehouseListMenu_CallbackFunc_o *)sub_B2C42C(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( v15 )
      {
        WarehouseListMenu__Open(v15, 0, v16, v17, 0LL);
        return;
      }
    }
    sub_B2C434(v11, v12);
  }
}


void __fastcall WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_41873C2 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarehouseRootComponent_EndClickBackRequest__, v4);
    byte_41873C2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_B2C434(v7, v8);
  WarehouseListMenu__StatusRequest(warehouseListMenu, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__OnSelectWarehouseList(
        WarehouseRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_41873C1 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_WarehouseRootComponent_EndServantQuestRequest__, v5);
    byte_41873C1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_B2C434(v8, v9);
      WarehouseListMenu__StatusRequest(warehouseListMenu, v7, 0LL);
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
    sub_B2C434(0LL, method);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_41873BF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_41873BF = 1;
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
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(warehouseListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41873BD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_41873BD = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v22; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_Int32_array *EventValUpEventIdList; // x20
  EventUpValSetupInfo_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v33; // x20

  if ( (byte_41873BE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AtlasManager_TypeInfo, v10);
    sub_B2C35C(&BgmManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v12);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&SoundManager_TypeInfo, v16);
    sub_B2C35C(&Method_WarehouseRootComponent_EndLoadCommonBg__, v17);
    byte_41873BE = 1;
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
  sub_B2C2F8(
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
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_29;
  TitleInfoControl__setBackBtnSprite_19529688(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_29;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_29;
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList((EventMaster_o *)titleInfo, 0, 0LL);
  v25 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(v25, EventValUpEventIdList, 0, 0LL);
  this->fields.setupInfo = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
LABEL_29:
    sub_B2C434(titleInfo, v22);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v33, 2, 1, 0LL);
}