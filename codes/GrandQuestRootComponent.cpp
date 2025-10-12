void GrandQuestRootComponent___cctor(const MethodInfo *method)
{
  struct GrandQuestRootComponent_StaticFields *static_fields; // x0
  __int64 v2; // x1
  __int64 v3; // x1
  struct GrandQuestRootComponent_StaticFields *v4; // x0

  if ( (byte_4C32718 & 1) == 0 )
  {
    sub_1C32C20(&GrandQuestRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_21173/*"latestFocusGrandWar"*/);
    sub_1C32C20(&StringLiteral_21170/*"lastClearGrandWar"*/);
    byte_4C32718 = 1;
  }
  static_fields = GrandQuestRootComponent_TypeInfo->static_fields;
  static_fields->GrandFadeTime = 0.66667;
  v2 = StringLiteral_21170/*"lastClearGrandWar"*/;
  static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR = (struct System_String_o *)StringLiteral_21170/*"lastClearGrandWar"*/;
  sub_1C32BC4(&static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR, v2);
  v3 = StringLiteral_21173/*"latestFocusGrandWar"*/;
  v4 = GrandQuestRootComponent_TypeInfo->static_fields;
  v4->SAVE_KEY_LATEST_FOCUS_GRAND_WAR = (struct System_String_o *)StringLiteral_21173/*"latestFocusGrandWar"*/;
  sub_1C32BC4(&v4->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, v3);
}


void GrandQuestRootComponent___ctor(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *v3; // x20

  if ( (byte_4C32717 & 1) == 0 )
  {
    sub_1C32C20(&GrandQuestViewSwitcher_TypeInfo);
    byte_4C32717 = 1;
  }
  v3 = (GrandQuestViewSwitcher_o *)sub_1C32E6C(GrandQuestViewSwitcher_TypeInfo);
  GrandQuestViewSwitcher___ctor(v3, 0);
  this->fields.viewSwitcher = v3;
  sub_1C32BC4(&this->fields.viewSwitcher, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestRootComponent__BackToClassSelectView(
        GrandQuestRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  if ( (byte_4C3270F & 1) == 0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3270F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(1, 0);
  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1C32E7C(0);
  GrandQuestViewSwitcher__BackToClassSelect(viewSwitcher, callback, 0);
}


void GrandQuestRootComponent__CreateClassBoard(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o **p_classBoardController; // x19
  UnityEngine_Object_o *classBoardController; // x21
  const MethodInfo *v5; // x1
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x0
  Il2CppObject *ClassBoardPrefab; // x21
  UnityEngine_Transform_o *transform; // x20
  Il2CppObject *Component_object; // x1

  if ( (byte_4C3270D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3270D = 1;
  }
  p_classBoardController = &this->fields.classBoardController;
  classBoardController = (UnityEngine_Object_o *)this->fields.classBoardController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classBoardController, 0, 0) )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( !resourceCatalog )
      goto LABEL_11;
    ClassBoardPrefab = (Il2CppObject *)GrandQuestResourceCatalogAssetBundle__GetClassBoardPrefab(resourceCatalog, v5);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resourceCatalog = (GrandQuestResourceCatalogAssetBundle_o *)UnityEngine_Object__Instantiate_object__51812484(
                                                                  ClassBoardPrefab,
                                                                  transform,
                                                                  (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    if ( !resourceCatalog )
LABEL_11:
      sub_1C32E7C(resourceCatalog);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)resourceCatalog,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___);
    *p_classBoardController = (struct GrandQuestClassBoardController_o *)Component_object;
    sub_1C32BC4(p_classBoardController, Component_object);
  }
}


void GrandQuestRootComponent__ExecuteInitEndCallback(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.initEndCallback, 0);
}


void GrandQuestRootComponent__ExitGrandQuestArea(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *grandQuestBackground; // x20
  const MethodInfo *v4; // x1
  GrandQuestBackground_o *assetStorageLoadWrapper; // x0
  UnityEngine_Object_o *classSelectController; // x20
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *levelSelectController; // x20
  struct GrandQuestLevelSelectController_o *v9; // x8
  UnityEngine_Object_o *svtController; // x20
  struct GrandQuestClassBoardController_o **p_classBoardController; // x20
  UnityEngine_Object_o *classBoardController; // x21
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x8

  if ( (byte_4C32710 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32710 = 1;
  }
  grandQuestBackground = (UnityEngine_Object_o *)this->fields.grandQuestBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandQuestBackground, 0, 0) )
  {
    assetStorageLoadWrapper = this->fields.grandQuestBackground;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    GrandQuestBackground__DeleteBlankEarthObj(assetStorageLoadWrapper, v4);
  }
  classSelectController = (UnityEngine_Object_o *)this->fields.classSelectController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSelectController, 0, 0) )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)this->fields.classSelectController;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    GrandQuestClassSelectController__Quit((GrandQuestClassSelectController_o *)assetStorageLoadWrapper, v7);
  }
  levelSelectController = (UnityEngine_Object_o *)this->fields.levelSelectController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Object__op_Inequality(levelSelectController, 0, 0);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
  {
    v9 = this->fields.levelSelectController;
    if ( !v9 )
      goto LABEL_36;
    v9->fields.currentState = 0;
  }
  svtController = (UnityEngine_Object_o *)this->fields.svtController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtController, 0, 0) )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)this->fields.svtController;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    GrandQuestSvtController__Quit((GrandQuestSvtController_o *)assetStorageLoadWrapper, 0);
  }
  p_classBoardController = &this->fields.classBoardController;
  classBoardController = (UnityEngine_Object_o *)this->fields.classBoardController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardController, 0, 0) )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)*p_classBoardController;
    if ( !*p_classBoardController )
      goto LABEL_36;
    GrandQuestClassBoardController__Quit((GrandQuestClassBoardController_o *)assetStorageLoadWrapper, v13);
    assetStorageLoadWrapper = (GrandQuestBackground_o *)*p_classBoardController;
    if ( !*p_classBoardController )
      goto LABEL_36;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)assetStorageLoadWrapper,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_classBoardController = 0;
    sub_1C32BC4(&this->fields.classBoardController, 0);
  }
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)resourceCatalog->fields.assetStorageLoadWrapper;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)assetStorageLoadWrapper, 0);
  }
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !assetStorageLoadWrapper )
LABEL_36:
    sub_1C32E7C(assetStorageLoadWrapper);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetStorageLoadWrapper, 0, 0);
}


System_Collections_Generic_List_MapControl_WarInfo__o *GrandQuestRootComponent__GetGrandWarInfoList(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  Il2CppObject *Instance; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  int32_t parentWarId; // w1
  System_Nullable_int__o v8; // x0
  struct System_Collections_Generic_List_T__o *list; // x28
  BalanceConfig_c *v10; // x0
  Il2CppObject *v11; // x0
  _BOOL8 IsActiveWar; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C32713 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C32713 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v2 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[4].klass) == 0 )
    sub_1C32E7C(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v4 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C32E7C(v4);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v19.fields._current, 0);
    if ( Mine )
    {
      parentWarId = Mine->fields.parentWarId;
      v18.fields._list = 0;
      v8 = (System_Nullable_int__o)&v18;
      System_Nullable_int____ctor(v8, parentWarId, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
      list = v18.fields._list;
    }
    else
    {
      list = 0;
    }
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( (_BYTE)list && v10->static_fields->GrandBoardWarId == HIDWORD(list) )
    {
      v11 = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v11 )
        sub_1C32E7C(0);
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)v11, HIDWORD(current[1].klass), 0);
      if ( IsActiveWar )
      {
        if ( !v2 )
          sub_1C32E7C(IsActiveWar);
        items = v2->fields._items;
        v14 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
        ++v2->fields._version;
        if ( !items )
          sub_1C32E7C(IsActiveWar);
        size = v2->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v2,
            current,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v2->fields._size = size + 1;
          v16[4] = (Il2CppClass *)current;
          sub_1C32BC4(v16 + 4, current);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v2;
}


BlankEarthSpotEntity_o *GrandQuestRootComponent__GetSpotEntityByWarId(
        GrandQuestRootComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  BlankEarthSpotEntity_o *result; // x0
  BlankEarthSpotEntity_array *v5; // x19
  bool v6; // w8

  if ( (byte_4C32714 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    byte_4C32714 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BlankEarthSpotEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !result )
    goto LABEL_11;
  v5 = BlankEarthSpotMaster__GetByWarId((BlankEarthSpotMaster_o *)result, warId, 0);
  v6 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  result = 0;
  if ( !v6 )
    return result;
  if ( !v5 )
LABEL_11:
    sub_1C32E7C(result);
  if ( !LODWORD(v5->max_length) )
    sub_1C32E84(0);
  return v5->m_Items[0];
}


int32_t GrandQuestRootComponent__GetViewType(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *viewSwitcher; // x8

  viewSwitcher = this->fields.viewSwitcher;
  if ( viewSwitcher )
    return viewSwitcher->fields.currentViewType;
  else
    return 0;
}


void GrandQuestRootComponent__Init(
        GrandQuestRootComponent_o *this,
        TerminalSceneComponent_o *terminalScene,
        ScrTerminalListTop_o *scrTerminalList,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x24
  _QWORD *p_image; // x0
  int v11; // w24
  BalanceConfig_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  GrandQuestRootComponent_ResumeInfo_o *v14; // x24
  TerminalPramsManager_c *v15; // x0
  GrandQuestResourceCatalogAssetBundle_o *v16; // x20
  const MethodInfo *v17; // x1
  GrandQuestViewSwitcher_o *viewSwitcher; // x20
  System_Action_o *v19; // x21

  if ( (byte_4C3270C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&GrandQuestResourceCatalogAssetBundle_TypeInfo);
    sub_1C32C20(&Method_GrandQuestRootComponent__Init_b__47_0__);
    sub_1C32C20(&GrandQuestRootComponent_ResumeInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3270C = 1;
  }
  this->fields.isTouchButton = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  if ( !Instance )
    goto LABEL_39;
  p_image = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, *(_DWORD *)(p_image[23] + 4LL), 0);
  if ( !p_image )
    goto LABEL_39;
  v11 = *((_DWORD *)p_image + 14);
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v11 == v12->static_fields->GrandBoardWarId )
    goto LABEL_21;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C32719 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C32719 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( v13->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField )
  {
LABEL_21:
    v14 = (GrandQuestRootComponent_ResumeInfo_o *)sub_1C32E6C(GrandQuestRootComponent_ResumeInfo_TypeInfo);
    GrandQuestRootComponent_ResumeInfo___ctor(v14, 0);
    if ( !v14 )
      goto LABEL_39;
    v14->fields._IsResume_k__BackingField = 1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C31DAD )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31DAD = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v14->fields._WarId_k__BackingField = v15->static_fields->_WarId_k__BackingField;
    if ( !byte_4C31A97 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
      byte_4C31A97 = 1;
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v14->fields._QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
    if ( !byte_4C32719 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
      byte_4C32719 = 1;
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v14->fields._IsDirectTransitionToClassSelect_k__BackingField = v15->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField;
    this->fields._GrandResumeInfo_k__BackingField = v14;
    sub_1C32BC4(&this->fields._GrandResumeInfo_k__BackingField, v14);
  }
  this->fields.initEndCallback = endCallback;
  sub_1C32BC4(&this->fields.initEndCallback, endCallback);
  this->fields.mTerminalScene = terminalScene;
  sub_1C32BC4(&this->fields.mTerminalScene, terminalScene);
  this->fields.mTerminalListTop = scrTerminalList;
  sub_1C32BC4(&this->fields.mTerminalListTop, scrTerminalList);
  v16 = (GrandQuestResourceCatalogAssetBundle_o *)sub_1C32E6C(GrandQuestResourceCatalogAssetBundle_TypeInfo);
  GrandQuestResourceCatalogAssetBundle___ctor(v16, v17);
  this->fields.resourceCatalog = v16;
  sub_1C32BC4(&this->fields.resourceCatalog, v16);
  viewSwitcher = this->fields.viewSwitcher;
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_GrandQuestRootComponent__Init_b__47_0__, 0);
  if ( !viewSwitcher )
LABEL_39:
    sub_1C32E7C(p_image);
  GrandQuestViewSwitcher__Init(viewSwitcher, this, v19, 0);
}


void GrandQuestRootComponent__LateUpdate(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1C32E7C(0);
  GrandQuestViewSwitcher__LateUpdate(viewSwitcher, 0);
}


void GrandQuestRootComponent__OnClickGrandClassDisableMask(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C32716 & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__);
    byte_4C32716 = 1;
  }
  v2 = Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__;
  if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void GrandQuestRootComponent__OnClickGrandClassScore(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  GrandQuestViewSwitcher_o *viewSwitcher; // x0
  int32_t CurrentClassId; // w20
  SceneJumpInfo_o *v7; // x19

  if ( (byte_4C32711 & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C32711 = 1;
  }
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v3 = Method_GrandQuestRootComponent_OnClickGrandClassScore__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassScore__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    viewSwitcher = this->fields.viewSwitcher;
    if ( !viewSwitcher
      || (CurrentClassId = GrandQuestViewSwitcher__GetCurrentClassId(viewSwitcher, 0),
          v7 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo),
          SceneJumpInfo___ctor_41379700(v7, (System_String_o *)StringLiteral_1/*""*/, CurrentClassId, 0, 0),
          !v7)
      || (SceneJumpInfo__SetReturnNowScene(v7, 0),
          (viewSwitcher = (GrandQuestViewSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
    {
      sub_1C32E7C(viewSwitcher);
    }
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)viewSwitcher, 91, 1, (Il2CppObject *)v7, 0);
  }
}


void GrandQuestRootComponent__OnClickGrandServantList(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SceneJumpInfo_o *v5; // x19
  Il2CppObject *Instance; // x0

  if ( (byte_4C32712 & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandQuestRootComponent_OnClickGrandServantList__);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C32712 = 1;
  }
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v3 = Method_GrandQuestRootComponent_OnClickGrandServantList__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandServantList__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_GrandQuestRootComponent_OnClickGrandServantList__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor(v5, 0);
    if ( !v5
      || (SceneJumpInfo__SetReturnNowScene(v5, 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
    {
      sub_1C32E7C(Instance);
    }
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 43, 1, (Il2CppObject *)v5, 0);
  }
}


void GrandQuestRootComponent__SetButtonActive(GrandQuestRootComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *grandClassScoreButton; // x0

  grandClassScoreButton = (UnityEngine_Component_o *)this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton
    || (grandClassScoreButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             grandClassScoreButton,
                                                             0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandClassScoreButton, isActive, 0),
        (grandClassScoreButton = (UnityEngine_Component_o *)this->fields.grandServantListButton) == 0)
    || (grandClassScoreButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             grandClassScoreButton,
                                                             0)) == 0 )
  {
    sub_1C32E7C(grandClassScoreButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandClassScoreButton, isActive, 0);
}


void GrandQuestRootComponent__SetButtonEnabled(
        GrandQuestRootComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *grandClassScoreButton; // x0
  bool v5; // w20

  grandClassScoreButton = (UnityEngine_Behaviour_o *)this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton
    || (v5 = isEnabled,
        UnityEngine_Behaviour__set_enabled(grandClassScoreButton, isEnabled, 0),
        (grandClassScoreButton = (UnityEngine_Behaviour_o *)this->fields.grandServantListButton) == 0) )
  {
    sub_1C32E7C(grandClassScoreButton);
  }
  UnityEngine_Behaviour__set_enabled(grandClassScoreButton, v5, 0);
}


void GrandQuestRootComponent__SetDispServant(GrandQuestRootComponent_o *this, bool disp, const MethodInfo *method)
{
  GrandQuestSvtController_o *svtController; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2

  svtController = this->fields.svtController;
  if ( !svtController
    || (v5 = disp,
        GrandQuestSvtController__SetDispServant(svtController, disp, 0),
        (svtController = (GrandQuestSvtController_o *)this->fields.classBoardController) == 0) )
  {
    sub_1C32E7C(svtController);
  }
  GrandQuestClassBoardController__SetDispEffect((GrandQuestClassBoardController_o *)svtController, v5, v6);
}


void GrandQuestRootComponent__SetImage(
        GrandQuestRootComponent_o *this,
        UISprite_o *uiSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x8
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x0

  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    Contents_k__BackingField = resourceCatalog->fields._Contents_k__BackingField;
    if ( Contents_k__BackingField )
    {
      BoardUiAtlasManagerUnit_k__BackingField = Contents_k__BackingField->fields._BoardUiAtlasManagerUnit_k__BackingField;
      if ( !BoardUiAtlasManagerUnit_k__BackingField
        || (BoardUiAtlasManagerUnit_k__BackingField = (AtlasManagerUnit_o *)AtlasManagerUnit__SetUI(
                                                                              BoardUiAtlasManagerUnit_k__BackingField,
                                                                              uiSprite,
                                                                              spriteName,
                                                                              0),
            !uiSprite) )
      {
        sub_1C32E7C(BoardUiAtlasManagerUnit_k__BackingField);
      }
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))uiSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        uiSprite,
        uiSprite->klass->vtable._33_MakePixelPerfect.method);
    }
  }
}


void GrandQuestRootComponent__StartUp(GrandQuestRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  GrandQuestViewSwitcher_o *viewSwitcher; // x0
  struct UIButton_o *grandClassScoreButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x21
  EventDelegate_Callback_o *v9; // x22
  const MethodInfo *v10; // x3
  struct UIButton_o *grandServantListButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v12; // x21
  EventDelegate_Callback_o *v13; // x22
  const MethodInfo *v14; // x3

  if ( (byte_4C3270E & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    sub_1C32C20(&Method_GrandQuestRootComponent_OnClickGrandServantList__);
    sub_1C32C20(&StringLiteral_17488/*"btn_grand_grandclassscore"*/);
    sub_1C32C20(&StringLiteral_17487/*"btn_grand_grandclass"*/);
    byte_4C3270E = 1;
  }
  MainMenuBar__setMenuActive(1, 0, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandClassScoreSprite,
    (System_String_o *)StringLiteral_17488/*"btn_grand_grandclassscore"*/,
    v5);
  grandClassScoreButton = this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton )
    goto LABEL_9;
  onClick = grandClassScoreButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandQuestRootComponent_OnClickGrandClassScore__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49215508(onClick, v9, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandServantListSprite,
    (System_String_o *)StringLiteral_17487/*"btn_grand_grandclass"*/,
    v10);
  grandServantListButton = this->fields.grandServantListButton;
  if ( !grandServantListButton
    || (v12 = grandServantListButton->fields.onClick,
        v13 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandQuestRootComponent_OnClickGrandServantList__,
          0),
        EventDelegate__Set_49215508(v12, v13, 0),
        GrandQuestRootComponent__SetImage(
          this,
          this->fields.grandScoreDisableMask,
          (System_String_o *)StringLiteral_17487/*"btn_grand_grandclass"*/,
          v14),
        (viewSwitcher = this->fields.viewSwitcher) == 0) )
  {
LABEL_9:
    sub_1C32E7C(viewSwitcher);
  }
  GrandQuestViewSwitcher__StartUp(viewSwitcher, data, 0);
}


void GrandQuestRootComponent__Update(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1C32E7C(0);
  GrandQuestViewSwitcher__Update(viewSwitcher, 0);
}


void GrandQuestRootComponent__UpdateGrandScoreButton(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardBaseMaster_o *Master_object; // x0
  ClassBoardBaseMaster_o *v4; // x20
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x0
  bool v6; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *grandScoreDisableMessageLabel; // x20
  System_String_o *v9; // x1
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_4C32715 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7005/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C32715 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this->fields.viewSwitcher )
    goto LABEL_20;
  v4 = Master_object;
  Master_object = (ClassBoardBaseMaster_o *)GrandQuestViewSwitcher__GetCurrentClassId(this->fields.viewSwitcher, 0);
  if ( !v4 )
    goto LABEL_20;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(v4, (int32_t)Master_object, 0);
  v6 = !GrandClassBoardBaseEntity || !ClassBoardBaseEntity__IsOpen(GrandClassBoardBaseEntity, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMask;
  if ( !Master_object )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( v6 )
  {
    GameObjectHelper__SetActiveSafely(gameObject, 1, 0);
    grandScoreDisableMessageLabel = this->fields.grandScoreDisableMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardBaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7005/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/, 0);
    if ( grandScoreDisableMessageLabel )
    {
      v9 = (System_String_o *)Master_object;
      Master_object = (ClassBoardBaseMaster_o *)grandScoreDisableMessageLabel;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C32E7C(Master_object);
  }
  GameObjectHelper__SetActiveSafely(gameObject, 0, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UILabel__set_text((UILabel_o *)Master_object, v9, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectHelper__SetActiveSafely(v10, v6, 0);
}


void GrandQuestRootComponent___Init_b__47_0(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestRootComponent__StartUp(this, (Il2CppObject *)this, v2);
}


GrandQuestClassBoardController_o *GrandQuestRootComponent__get_ClassBoardController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classBoardController;
}


GrandQuestClassSelectController_o *GrandQuestRootComponent__get_ClassSelectController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classSelectController;
}


UnityEngine_GameObject_o *GrandQuestRootComponent__get_GrandQuest(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.grandQuestRoot;
}


GrandQuestBackground_o *GrandQuestRootComponent__get_GrandQuestBackground(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.grandQuestBackground;
}


GrandQuestRootComponent_ResumeInfo_o *GrandQuestRootComponent__get_GrandResumeInfo(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandResumeInfo_k__BackingField;
}


GrandQuestLevelSelectController_o *GrandQuestRootComponent__get_LevelSelectController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.levelSelectController;
}


GrandQuestResourceCatalogAssetBundle_o *GrandQuestRootComponent__get_ResourceCatalog(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.resourceCatalog;
}


GrandQuestSvtController_o *GrandQuestRootComponent__get_SvtController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.svtController;
}


ScrTerminalListTop_o *GrandQuestRootComponent__get_TerminalList(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalListTop;
}


TerminalSceneComponent_o *GrandQuestRootComponent__get_TerminalScene(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalScene;
}


GrandQuestViewSwitcher_o *GrandQuestRootComponent__get_ViewSwitcher(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.viewSwitcher;
}


void GrandQuestRootComponent__set_GrandResumeInfo(
        GrandQuestRootComponent_o *this,
        GrandQuestRootComponent_ResumeInfo_o *value,
        const MethodInfo *method)
{
  this->fields._GrandResumeInfo_k__BackingField = value;
  sub_1C32BC4(&this->fields._GrandResumeInfo_k__BackingField, value);
}


void GrandQuestRootComponent_ResumeInfo___ctor(GrandQuestRootComponent_ResumeInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestRootComponent_ResumeInfo__get_IsDirectTransitionToClassSelect(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDirectTransitionToClassSelect_k__BackingField;
}


bool GrandQuestRootComponent_ResumeInfo__get_IsResume(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsResume_k__BackingField;
}


int32_t GrandQuestRootComponent_ResumeInfo__get_QuestId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestId_k__BackingField;
}


int32_t GrandQuestRootComponent_ResumeInfo__get_WarId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WarId_k__BackingField;
}


void GrandQuestRootComponent_ResumeInfo__set_IsDirectTransitionToClassSelect(
        GrandQuestRootComponent_ResumeInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDirectTransitionToClassSelect_k__BackingField = value;
}


void GrandQuestRootComponent_ResumeInfo__set_IsResume(
        GrandQuestRootComponent_ResumeInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsResume_k__BackingField = value;
}


void GrandQuestRootComponent_ResumeInfo__set_QuestId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestId_k__BackingField = value;
}


void GrandQuestRootComponent_ResumeInfo__set_WarId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._WarId_k__BackingField = value;
}