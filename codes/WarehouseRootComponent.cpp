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

  if ( (byte_4213F47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_4213F47 = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
          (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_B0D97C(Instance);
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
    sub_B0D97C(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_16655688((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4213F48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_4213F48 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct SceneJumpInfo_o *transitionData; // x8
  bool v7; // w0
  struct WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v10; // w24
  __int64 v11; // x1
  __int64 v12; // x2
  WarehouseListMenu_CallbackFunc_o *v13; // x23
  __int64 v14; // x0
  int32_t v15; // w1
  WarehouseListMenu_o *v16; // x0
  WarehouseListMenu_o *v17; // x21
  EventUpValSetupInfo_o *v18; // x19
  WarehouseListMenu_CallbackFunc_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4213F44 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_WarehouseRootComponent_OnSelectWarehouseList__, v4);
    sub_B0D8A4(&StringLiteral_12750/*"ServantEquipList"*/, v5);
    byte_4213F44 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v7 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12750/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v10 = v7;
      v13 = (WarehouseListMenu_CallbackFunc_o *)sub_B0D974(WarehouseListMenu_CallbackFunc_TypeInfo, v11, v12);
      WarehouseListMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        if ( v10 )
        {
          v15 = 1;
          v16 = warehouseListMenu;
        }
        else
        {
          v16 = warehouseListMenu;
          v15 = 0;
        }
        WarehouseListMenu__Open(v16, v15, setupInfo, v13, 0LL);
        this->fields.transitionData = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.transitionData, 0LL, v20, v21, v22, v23, v24, v25);
        return;
      }
    }
    else
    {
      v17 = this->fields.warehouseListMenu;
      v18 = this->fields.setupInfo;
      v19 = (WarehouseListMenu_CallbackFunc_o *)sub_B0D974(WarehouseListMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseListMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( v17 )
      {
        WarehouseListMenu__Open(v17, 0, v18, v19, 0LL);
        return;
      }
    }
    sub_B0D97C(v14);
  }
}


void __fastcall WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarehouseListMenu_o *warehouseListMenu; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4213F46 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarehouseRootComponent_EndClickBackRequest__, v4);
    byte_4213F46 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_B0D97C(v9);
  WarehouseListMenu__StatusRequest(warehouseListMenu, v8, 0LL);
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

  if ( (byte_4213F45 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_WarehouseRootComponent_EndServantQuestRequest__, v5);
    byte_4213F45 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(
                                                        WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                        *(_QWORD *)&result,
                                                        method);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_B0D97C(v8);
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
    sub_B0D97C(0LL);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_4213F43 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_4213F43 = 1;
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
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(warehouseListMenu);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4213F41 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4213F41 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v18; // x1
  __int64 v19; // x10
  Il2CppObject *v20; // x1
  struct SceneJumpInfo_o **p_transitionData; // x0
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  EventUpValSetupInfo_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x20

  if ( (byte_4213F42 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&AtlasManager_TypeInfo, v10);
    sub_B0D8A4(&BgmManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v14);
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&SoundManager_TypeInfo, v17);
    sub_B0D8A4(&Method_WarehouseRootComponent_EndLoadCommonBg__, v18);
    byte_4213F42 = 1;
  }
  if ( data )
  {
    v19 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v19 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v19 - 1] == SceneJumpInfo_TypeInfo )
        v20 = data;
      else
        v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    this->fields.transitionData = (struct SceneJumpInfo_o *)v20;
    p_transitionData = &this->fields.transitionData;
  }
  else
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
    v20 = 0LL;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)p_transitionData,
    (System_Int32_array **)v20,
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
  TitleInfoControl__setBackBtnSprite_17439696(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_29;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_29;
  EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                 (EventMaster_o *)titleInfo,
                                                                                 0,
                                                                                 0LL);
  v25 = System_Linq_Enumerable__ToArray_int_(
          EventValUpEventIdHash,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v28 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v26, v27);
  EventUpValSetupInfo___ctor_25655088(v28, v25, 0, 0, 0, 0LL);
  this->fields.setupInfo = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
    sub_B0D97C(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v38 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v38, 2, 1, 0LL);
}