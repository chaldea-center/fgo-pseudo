void WarehouseRootComponent___ctor(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void WarehouseRootComponent__EndClickBackRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  bool IsStackScene; // w19

  if ( (byte_4C40DBD & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C40DBD = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
    {
      sub_1C372B4(Instance);
    }
    if ( IsStackScene )
      AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, 0, 0);
    else
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0, 0);
  }
}


void WarehouseRootComponent__EndLoadCommonBg(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0 )
  {
    sub_1C372B4(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  SceneRootComponent__beginStartUp_41481188((SceneRootComponent_o *)this, 0);
}


void WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C40DBE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C40DBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  struct SceneJumpInfo_o *transitionData; // x8
  bool v4; // w0
  WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v7; // w23
  WarehouseListMenu_CallbackFunc_o *v8; // x24
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  WarehouseListMenu_o *v12; // x21
  EventUpValSetupInfo_o *v13; // x20
  WarehouseListMenu_CallbackFunc_o *v14; // x22

  if ( (byte_4C40DBA & 1) == 0 )
  {
    sub_1C37058(&WarehouseListMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_WarehouseRootComponent_OnSelectWarehouseList__);
    sub_1C37058(&StringLiteral_12727/*"ServantEquipList"*/);
    byte_4C40DBA = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v4 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12727/*"ServantEquipList"*/, 0);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v7 = v4;
      v8 = (WarehouseListMenu_CallbackFunc_o *)sub_1C372A4(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0);
      if ( warehouseListMenu )
      {
        WarehouseListMenu__Open(warehouseListMenu, v7, setupInfo, v8, 0);
        this->fields.transitionData = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.transitionData, 0, v10, v11);
        return;
      }
LABEL_9:
      sub_1C372B4(v9);
    }
    v12 = this->fields.warehouseListMenu;
    v13 = this->fields.setupInfo;
    v14 = (WarehouseListMenu_CallbackFunc_o *)sub_1C372A4(WarehouseListMenu_CallbackFunc_TypeInfo);
    WarehouseListMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_WarehouseRootComponent_OnSelectWarehouseList__,
      0);
    if ( !v12 )
      goto LABEL_9;
    WarehouseListMenu__Open(v12, 0, v13, v14, 0);
  }
}


void WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4C40DBC & 1) == 0 )
  {
    sub_1C37058(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C37058(&Method_WarehouseRootComponent_EndClickBackRequest__);
    sub_1C37058(&Method_WarehouseRootComponent_OnClickBack__);
    byte_4C40DBC = 1;
  }
  v3 = Method_WarehouseRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_WarehouseRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_WarehouseRootComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  warehouseListMenu = this->fields.warehouseListMenu;
  v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1C372A4(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0);
  if ( !warehouseListMenu )
    sub_1C372B4(v7);
  WarehouseListMenu__StatusRequest(warehouseListMenu, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseRootComponent__OnSelectWarehouseList(
        WarehouseRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4C40DBB & 1) == 0 )
  {
    sub_1C37058(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C37058(&Method_WarehouseRootComponent_EndServantQuestRequest__);
    byte_4C40DBB = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1C372A4(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0);
      if ( !warehouseListMenu )
        sub_1C372B4(v7);
      WarehouseListMenu__StatusRequest(warehouseListMenu, v6, 0);
    }
    else
    {
      WarehouseRootComponent__OnClickBack(this, *(const MethodInfo **)&result);
    }
  }
}


void WarehouseRootComponent__Quit(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  warehouseListMenu = this->fields.warehouseListMenu;
  this->fields.state = 0;
  if ( !warehouseListMenu )
    sub_1C372B4(0);
  WarehouseListMenu__Init(warehouseListMenu, 0);
}


void WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_4C40DB9 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C40DB9 = 1;
  }
  warehouseListMenu = this->fields.warehouseListMenu;
  this->fields.state = 0;
  if ( !warehouseListMenu
    || (WarehouseListMenu__Init(warehouseListMenu, 0),
        (warehouseListMenu = (WarehouseListMenu_o *)this->fields.warehouseConfirmMenu) == 0)
    || (WarehouseConfirmMenu__Init((WarehouseConfirmMenu_o *)warehouseListMenu, 0),
        (warehouseListMenu = (WarehouseListMenu_o *)this->fields.backSkinSprite) == 0)
    || (warehouseListMenu = (WarehouseListMenu_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)warehouseListMenu,
                                                     0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warehouseListMenu, 0, 0),
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(warehouseListMenu);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0);
}


void WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C40DB7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C40DB7 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void WarehouseRootComponent__beginStartUp(WarehouseRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x10
  struct SceneJumpInfo_o **p_transitionData; // x0
  int32_t v10; // w1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v14; // x20
  EventUpValSetupInfo_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v19; // x20

  if ( (byte_4C40DB8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&EventUpValSetupInfo_TypeInfo);
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_WarehouseRootComponent_EndLoadCommonBg__);
    byte_4C40DB8 = 1;
  }
  if ( !data )
  {
    this->fields.transitionData = 0;
    p_transitionData = &this->fields.transitionData;
LABEL_11:
    v10 = 0;
    goto LABEL_15;
  }
  v6 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
  if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
      v8 = data;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  this->fields.transitionData = (struct SceneJumpInfo_o *)v8;
  p_transitionData = &this->fields.transitionData;
  if ( data->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_11;
  if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
    v10 = (int)data;
  else
    v10 = 0;
LABEL_15:
  sub_1C36FFC((CGThumbnailListItem_o *)p_transitionData, v10, (int32_t)method, v3);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 86, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  TitleInfoControl__setBackBtnSprite_39841600(titleInfo, 1, 0, 0, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0);
  MainMenuBar__setMenuActive(0, 0, 0);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_30;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_30;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)titleInfo, 0, 0, 0);
  v14 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = (EventUpValSetupInfo_o *)sub_1C372A4(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41737996(v15, v14, 0, 0, 0, 0);
  this->fields.setupInfo = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)v15, v16, v17);
  titleInfo = (TitleInfoControl_o *)this->fields.bgTxtSprite;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0),
        titleInfo = (TitleInfoControl_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)titleInfo & 1, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite) == 0)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0)) == 0 )
  {
LABEL_30:
    sub_1C372B4(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v19, 2, 1, 0);
}