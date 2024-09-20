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

  if ( (byte_4A5926D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5926D = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_1B8880C(Instance, v5);
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
    sub_1B8880C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5926E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5926E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
  int32_t v11; // w2
  int32_t v12; // w3
  WarehouseListMenu_o *v13; // x21
  EventUpValSetupInfo_o *v14; // x20
  WarehouseListMenu_CallbackFunc_o *v15; // x22

  if ( (byte_4A5926A & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseRootComponent_OnSelectWarehouseList__);
    sub_1B885B0(&StringLiteral_12627/*"ServantEquipList"*/);
    byte_4A5926A = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v4 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12627/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v7 = v4;
      v8 = (WarehouseListMenu_CallbackFunc_o *)sub_1B887FC(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        WarehouseListMenu__Open(warehouseListMenu, v7, setupInfo, v8, 0LL);
        this->fields.transitionData = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.transitionData, 0, v11, v12);
        return;
      }
LABEL_9:
      sub_1B8880C(v9, v10);
    }
    v13 = this->fields.warehouseListMenu;
    v14 = this->fields.setupInfo;
    v15 = (WarehouseListMenu_CallbackFunc_o *)sub_1B887FC(WarehouseListMenu_CallbackFunc_TypeInfo);
    WarehouseListMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_WarehouseRootComponent_OnSelectWarehouseList__,
      0LL);
    if ( !v13 )
      goto LABEL_9;
    WarehouseListMenu__Open(v13, 0, v14, v15, 0LL);
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

  if ( (byte_4A5926C & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseRootComponent_EndClickBackRequest__);
    sub_1B885B0(&Method_WarehouseRootComponent_OnClickBack__);
    byte_4A5926C = 1;
  }
  v3 = Method_WarehouseRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_WarehouseRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarehouseRootComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_1B8880C(v7, v8);
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

  if ( (byte_4A5926B & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseRootComponent_EndServantQuestRequest__);
    byte_4A5926B = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_1B8880C(v7, v8);
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
    sub_1B8880C(0LL, method);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_4A59269 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4A59269 = 1;
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
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(warehouseListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A59267 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A59267 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarehouseRootComponent__beginStartUp(
        WarehouseRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppClass *v6; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v8; // x10
  struct SceneJumpInfo_o **p_transitionData; // x0
  int32_t v10; // w1
  System_String_o *MainBgmName; // x20
  __int64 v12; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v15; // x20
  EventUpValSetupInfo_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v20; // x20

  if ( (byte_4A59268 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_WarehouseRootComponent_EndLoadCommonBg__);
    byte_4A59268 = 1;
  }
  if ( !data )
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
LABEL_11:
    v10 = 0;
    goto LABEL_15;
  }
  v6 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
      v8 = data;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  this->fields.transitionData = (struct SceneJumpInfo_o *)v8;
  p_transitionData = &this->fields.transitionData;
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_11;
  if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v6 )
    v10 = (int)data;
  else
    v10 = 0;
LABEL_15:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_transitionData, v10, (int32_t)method, v3);
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
  TitleInfoControl__setBackBtnSprite_37184884(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_30;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_30;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)titleInfo, 0, 0LL, 0LL);
  v15 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  v16 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(v16, v15, 0, 0, 0, 0LL);
  this->fields.setupInfo = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)v16, v17, v18);
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
    sub_1B8880C(titleInfo, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v20, 2, 1, 0LL);
}