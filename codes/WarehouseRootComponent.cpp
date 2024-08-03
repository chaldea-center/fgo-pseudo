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
  bool IsStackScene; // w19

  if ( (byte_49FA555 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_49FA555 = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_1B64324(Instance);
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
    sub_1B64324(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA556 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_49FA556 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct SceneJumpInfo_o *transitionData; // x8
  bool v7; // w0
  WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v10; // w23
  __int64 v11; // x1
  __int64 v12; // x2
  WarehouseListMenu_CallbackFunc_o *v13; // x24
  __int64 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  WarehouseListMenu_o *v17; // x21
  EventUpValSetupInfo_o *v18; // x20
  WarehouseListMenu_CallbackFunc_o *v19; // x22

  if ( (byte_49FA552 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseRootComponent_OnSelectWarehouseList__, v4);
    sub_1B640C8(&StringLiteral_12566/*"ServantEquipList"*/, v5);
    byte_49FA552 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v7 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12566/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v10 = v7;
      v13 = (WarehouseListMenu_CallbackFunc_o *)sub_1B64314(WarehouseListMenu_CallbackFunc_TypeInfo, v11, v12);
      WarehouseListMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        WarehouseListMenu__Open(warehouseListMenu, v10, setupInfo, v13, 0LL);
        this->fields.transitionData = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.transitionData, 0, v15, v16);
        return;
      }
LABEL_9:
      sub_1B64324(v14);
    }
    v17 = this->fields.warehouseListMenu;
    v18 = this->fields.setupInfo;
    v19 = (WarehouseListMenu_CallbackFunc_o *)sub_1B64314(WarehouseListMenu_CallbackFunc_TypeInfo, method, v2);
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WarehouseListMenu_o *warehouseListMenu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49FA554 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseRootComponent_EndClickBackRequest__, v3);
    sub_1B640C8(&Method_WarehouseRootComponent_OnClickBack__, v4);
    byte_49FA554 = 1;
  }
  v5 = Method_WarehouseRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_WarehouseRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_WarehouseRootComponent_OnClickBack__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v8, v9);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_1B64324(v11);
  WarehouseListMenu__StatusRequest(warehouseListMenu, v10, 0LL);
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

  if ( (byte_49FA553 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_WarehouseRootComponent_EndServantQuestRequest__, v5);
    byte_49FA553 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                        WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                        *(_QWORD *)&result,
                                                        method);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_1B64324(v8);
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
    sub_1B64324(0LL);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_49FA551 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_49FA551 = 1;
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
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(warehouseListMenu);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA54F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49FA54F = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__beginStartUp(
        WarehouseRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppClass *v15; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v17; // x10
  struct SceneJumpInfo_o **p_transitionData; // x0
  int32_t v19; // w1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  EventUpValSetupInfo_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x20

  if ( (byte_49FA550 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(&AtlasManager_TypeInfo, v6);
    sub_1B640C8(&BgmManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v10);
    sub_1B640C8(&SceneJumpInfo_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&SoundManager_TypeInfo, v13);
    sub_1B640C8(&Method_WarehouseRootComponent_EndLoadCommonBg__, v14);
    byte_49FA550 = 1;
  }
  if ( !data )
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
LABEL_11:
    v19 = 0;
    goto LABEL_15;
  }
  v15 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
      v17 = data;
    else
      v17 = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  this->fields.transitionData = (struct SceneJumpInfo_o *)v17;
  p_transitionData = &this->fields.transitionData;
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_11;
  if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v15 )
    v19 = (int)data;
  else
    v19 = 0;
LABEL_15:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_transitionData, v19, (int32_t)method, v3);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 83, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setBackBtnSprite_36875508(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_30;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_30;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)titleInfo, 0, 0LL, 0LL);
  v23 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  v26 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v24, v25);
  EventUpValSetupInfo___ctor_38592760(v26, v23, 0, 0, 0, 0LL);
  this->fields.setupInfo = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)v26, v27, v28);
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
    sub_1B64324(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v32, 2, 1, 0LL);
}