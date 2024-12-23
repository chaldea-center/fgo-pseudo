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

  if ( (byte_4B64B8C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_4B64B8C = 1;
  }
  if ( this->fields.state == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance
      || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_1BE4D28(Instance, v5);
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
    sub_1BE4D28(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__beginStartUp_39578900((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseRootComponent__EndServantQuestRequest(
        WarehouseRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B64B8D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_4B64B8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall WarehouseRootComponent__Init(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SceneJumpInfo_o *transitionData; // x8
  bool v6; // w0
  WarehouseListMenu_o *warehouseListMenu; // x22
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v9; // w23
  WarehouseListMenu_CallbackFunc_o *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  WarehouseListMenu_o *v19; // x21
  EventUpValSetupInfo_o *v20; // x20
  WarehouseListMenu_CallbackFunc_o *v21; // x22

  if ( (byte_4B64B89 & 1) == 0 )
  {
    sub_1BE4ACC(&WarehouseListMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_WarehouseRootComponent_OnSelectWarehouseList__, v3);
    sub_1BE4ACC(&StringLiteral_12822/*"ServantEquipList"*/, v4);
    byte_4B64B89 = 1;
  }
  if ( !this->fields.state )
  {
    transitionData = this->fields.transitionData;
    this->fields.state = 1;
    if ( transitionData )
    {
      v6 = System_String__op_Equality(transitionData->fields.name, (System_String_o *)StringLiteral_12822/*"ServantEquipList"*/, 0LL);
      warehouseListMenu = this->fields.warehouseListMenu;
      setupInfo = this->fields.setupInfo;
      v9 = v6;
      v10 = (WarehouseListMenu_CallbackFunc_o *)sub_1BE4D18(WarehouseListMenu_CallbackFunc_TypeInfo);
      WarehouseListMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_OnSelectWarehouseList__,
        0LL);
      if ( warehouseListMenu )
      {
        WarehouseListMenu__Open(warehouseListMenu, v9, setupInfo, v10, 0LL);
        this->fields.transitionData = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.transitionData, 0LL, v13, v14, v15, v16, v17, v18);
        return;
      }
LABEL_9:
      sub_1BE4D28(v11, v12);
    }
    v19 = this->fields.warehouseListMenu;
    v20 = this->fields.setupInfo;
    v21 = (WarehouseListMenu_CallbackFunc_o *)sub_1BE4D18(WarehouseListMenu_CallbackFunc_TypeInfo);
    WarehouseListMenu_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_WarehouseRootComponent_OnSelectWarehouseList__,
      0LL);
    if ( !v19 )
      goto LABEL_9;
    WarehouseListMenu__Open(v19, 0, v20, v21, 0LL);
  }
}


void __fastcall WarehouseRootComponent__OnClickBack(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WarehouseListMenu_o *warehouseListMenu; // x20
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B64B8B & 1) == 0 )
  {
    sub_1BE4ACC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_WarehouseRootComponent_EndClickBackRequest__, v3);
    sub_1BE4ACC(&Method_WarehouseRootComponent_OnClickBack__, v4);
    byte_4B64B8B = 1;
  }
  v5 = Method_WarehouseRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_WarehouseRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_WarehouseRootComponent_OnClickBack__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  warehouseListMenu = this->fields.warehouseListMenu;
  v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BE4D18(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
  WarehouseListMenu_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarehouseRootComponent_EndClickBackRequest__,
    0LL);
  if ( !warehouseListMenu )
    sub_1BE4D28(v9, v10);
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
  __int64 v9; // x1

  if ( (byte_4B64B8A & 1) == 0 )
  {
    sub_1BE4ACC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_WarehouseRootComponent_EndServantQuestRequest__, v5);
    byte_4B64B8A = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result == 2 )
    {
      warehouseListMenu = this->fields.warehouseListMenu;
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BE4D18(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_WarehouseRootComponent_EndServantQuestRequest__,
        0LL);
      if ( !warehouseListMenu )
        sub_1BE4D28(v8, v9);
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
    sub_1BE4D28(0LL, method);
  WarehouseListMenu__Init(warehouseListMenu, 0LL);
}


void __fastcall WarehouseRootComponent__beginFinish(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *warehouseListMenu; // x0

  if ( (byte_4B64B88 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_4B64B88 = 1;
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
        (warehouseListMenu = (WarehouseListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(warehouseListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)warehouseListMenu, 2, 0, 0LL);
}


void __fastcall WarehouseRootComponent__beginInitialize(WarehouseRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B64B86 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B64B86 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppClass *v19; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v21; // x10
  struct SceneJumpInfo_o **p_transitionData; // x0
  Il2CppObject *v23; // x1
  System_String_o *MainBgmName; // x20
  __int64 v25; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v28; // x20
  EventUpValSetupInfo_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v37; // x20

  if ( (byte_4B64B87 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, data);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v10);
    sub_1BE4ACC(&BgmManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1BE4ACC(&EventUpValSetupInfo_TypeInfo, v14);
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&SoundManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_WarehouseRootComponent_EndLoadCommonBg__, v18);
    byte_4B64B87 = 1;
  }
  if ( !data )
  {
    this->fields.transitionData = 0LL;
    p_transitionData = &this->fields.transitionData;
LABEL_11:
    v23 = 0LL;
    goto LABEL_15;
  }
  v19 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
  methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
      v21 = data;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  this->fields.transitionData = (struct SceneJumpInfo_o *)v21;
  p_transitionData = &this->fields.transitionData;
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_11;
  if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v19 )
    v23 = data;
  else
    v23 = 0LL;
LABEL_15:
  sub_1BE4A70((PartyOrganizationUtility_o *)p_transitionData, (int64_t)v23, (int64_t)method, v3, v4, v5, v6, v7);
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
  TitleInfoControl__setBackBtnSprite_38070848(titleInfo, 1, 0, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_30;
  titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)titleInfo,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !titleInfo )
    goto LABEL_30;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)titleInfo, 0, 0LL, 0LL);
  v28 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  v29 = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39826336(v29, v28, 0, 0, 0, 0LL);
  this->fields.setupInfo = v29;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)v29, v30, v31, v32, v33, v34, v35);
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
    sub_1BE4D28(titleInfo, v25);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v37 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_WarehouseRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v37, 2, 1, 0LL);
}