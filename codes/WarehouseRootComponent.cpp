void __fastcall WarehouseRootComponent___ctor(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__EndClickBackRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  bool IsStackScene; // w19

  if ( (byte_42E7325 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, (_DWORD)method, v3);
    byte_42E7325 = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
          (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_B5D69C(Instance, v6);
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
    sub_B5D69C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E7326 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, (_DWORD)method, v3);
    byte_42E7326 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct SceneJumpInfo_o *transitionData; // x8
  bool v12; // w0
  struct WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v15; // w24
  WarehouseListMenu_CallbackFunc_o *v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  WarehouseListMenu_o *v20; // x0
  WarehouseListMenu_o *v21; // x21
  EventUpValSetupInfo_o *v22; // x19
  WarehouseListMenu_CallbackFunc_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E7322 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarehouseRootComponent_OnSelectWarehouseList__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12862/*"ServantEquipList"*/, v8, v9, v10);
    byte_42E7322 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v12 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12862/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v15 = v12;
      v16 = (WarehouseListMenu_CallbackFunc_o *)sub_B5D694(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        if ( v15 )
        {
          v19 = 1;
          v20 = warehouseListMenu;
        }
        else
        {
          v20 = warehouseListMenu;
          v19 = 0;
        }
        WarehouseListMenu__Open(v20, v19, setupInfo, v16, 0LL);
        this->fields.transitionData = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.transitionData, 0LL, v24, v25, v26, v27, v28, v29);
        return;
      }
    }
    else
    {
      v21 = this->fields.warehouseListMenu;
      v22 = this->fields.setupInfo;
      v23 = (WarehouseListMenu_CallbackFunc_o *)sub_B5D694(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( v21 )
      {
        WarehouseListMenu__Open(v21, 0, v22, v23, 0LL);
        return;
      }
    }
    sub_B5D69C(v17, v18);
  }
}


void __fastcall WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E7324 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarehouseRootComponent_EndClickBackRequest__, v8, v9, v10);
    byte_42E7324 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v12 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_B5D69C(v13, v14);
  WarehouseListMenu__StatusRequest(warehouseListMenu, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__OnSelectWarehouseList(
        WarehouseRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E7323 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WarehouseRootComponent_EndServantQuestRequest__, v6, v7, v8);
    byte_42E7323 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_B5D69C(v11, v12);
      WarehouseListMenu__StatusRequest(warehouseListMenu, v10, 0LL);
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
    sub_B5D69C(0LL, method);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_42E7321 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7321 = 1;
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
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(warehouseListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E731F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E731F = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
  __int64 v37; // x10
  Il2CppObject *v38; // x1
  struct SceneJumpInfo_o **p_transitionData; // x0
  System_String_o *MainBgmName; // x20
  __int64 v41; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v44; // x20
  EventUpValSetupInfo_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v53; // x20

  if ( (byte_42E7320 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BgmManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v19, v20, v21);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&SoundManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_WarehouseRootComponent_EndLoadCommonBg__, v34, v35, v36);
    byte_42E7320 = 1;
  }
  if ( data )
  {
    v37 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v37 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v37 - 1] == SceneJumpInfo_TypeInfo )
        v38 = data;
      else
        v38 = 0LL;
    }
    else
    {
      v38 = 0LL;
    }
    this->fields.transitionData = (struct SceneJumpInfo_o *)v38;
    p_transitionData = &this->fields.transitionData;
  }
  else
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
    v38 = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_transitionData,
    (System_Int32_array **)v38,
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
  TitleInfoControl__setBackBtnSprite_18313300(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_29;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_29;
  EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                 (EventMaster_o *)titleInfo,
                                                                                 0,
                                                                                 0LL);
  v44 = System_Linq_Enumerable__ToArray_int_(
          EventValUpEventIdHash,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v45 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(v45, v44, 0, 0, 0, 0LL);
  this->fields.setupInfo = v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
    sub_B5D69C(titleInfo, v41);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v53, 2, 1, 0LL);
}