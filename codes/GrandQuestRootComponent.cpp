void GrandQuestRootComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct GrandQuestRootComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct GrandQuestRootComponent_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5933192 & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestRootComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_22197/*"latestFocusGrandWar"*/);
    sub_21FFC50(&StringLiteral_22194/*"lastClearGrandWar"*/);
    byte_5933192 = 1;
  }
  v7 = StringLiteral_22194/*"lastClearGrandWar"*/;
  static_fields = GrandQuestRootComponent_TypeInfo->static_fields;
  static_fields->GrandFadeTime = 0.66667;
  static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR = (struct System_String_o *)v7;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v9 = StringLiteral_22197/*"latestFocusGrandWar"*/;
  v10 = GrandQuestRootComponent_TypeInfo->static_fields;
  v10->SAVE_KEY_LATEST_FOCUS_GRAND_WAR = (struct System_String_o *)StringLiteral_22197/*"latestFocusGrandWar"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->SAVE_KEY_LATEST_FOCUS_GRAND_WAR,
    v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void GrandQuestRootComponent___ctor(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 *v4; // x8
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5933191 & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestViewSwitcher_TypeInfo);
    byte_5933191 = 1;
  }
  v3 = sub_21FFEBC(GrandQuestViewSwitcher_TypeInfo);
  *(_DWORD *)(v3 + 48) = -1;
  v4 = *(__int64 **)(qword_594C0B8 + 184);
  v5 = *v4;
  *(_QWORD *)(v3 + 56) = *v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 56), v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)v3, 0);
  this->fields.viewSwitcher = (struct GrandQuestViewSwitcher_o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.viewSwitcher, v3, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestRootComponent__BackToClassSelectView(
        GrandQuestRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  struct GrandQuestViewSwitcher_o *viewSwitcher; // x0

  if ( (byte_5933189 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5933189 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback, method);
  TerminalPramsManager__PlaySystemSE(1, 0);
  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_21FFECC(0, v5);
  if ( viewSwitcher->fields.currentViewType == 2 )
    GrandQuestViewSwitcher__ChangeView(viewSwitcher, 1, viewSwitcher->fields.currentWarId, 0, callback, v6);
}


void GrandQuestRootComponent__CreateClassBoard(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_classBoardController; // x19
  UnityEngine_Object_o *classBoardController; // x21
  const MethodInfo *v6; // x1
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x0
  Il2CppObject *ClassBoardPrefab; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Transform_o *transform; // x20
  Il2CppObject *Component_object; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5933187 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933187 = 1;
  }
  p_classBoardController = (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardController;
  classBoardController = (UnityEngine_Object_o *)this->fields.classBoardController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(classBoardController, 0, 0) )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( !resourceCatalog )
      goto LABEL_11;
    ClassBoardPrefab = (Il2CppObject *)GrandQuestResourceCatalogAssetBundle__GetClassBoardPrefab(resourceCatalog, v6);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    resourceCatalog = (GrandQuestResourceCatalogAssetBundle_o *)UnityEngine_Object__Instantiate_object__59506996(
                                                                  ClassBoardPrefab,
                                                                  transform,
                                                                  (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    if ( !resourceCatalog )
LABEL_11:
      sub_21FFECC(resourceCatalog, v6);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)resourceCatalog,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___);
    p_classBoardController->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
    sub_21FFBF4(p_classBoardController, (int32_t)Component_object, v13, v14, v15, v16, v17, v18);
  }
}


void GrandQuestRootComponent__ExecuteInitEndCallback(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.initEndCallback, 0);
}


void GrandQuestRootComponent__ExitGrandQuestArea(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *grandQuestBackground; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  GrandQuestBackground_o *assetStorageLoadWrapper; // x0
  UnityEngine_Object_o *classSelectController; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *levelSelectController; // x20
  __int64 v11; // x2
  struct GrandQuestLevelSelectController_o *v12; // x8
  UnityEngine_Object_o *svtController; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct GrandQuestSvtController_o *v20; // x20
  const MethodInfo *v21; // x1
  struct GrandQuestClassBoardController_o **p_classBoardController; // x20
  UnityEngine_Object_o *classBoardController; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x8

  if ( (byte_593318A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593318A = 1;
  }
  grandQuestBackground = (UnityEngine_Object_o *)this->fields.grandQuestBackground;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(grandQuestBackground, 0, 0) )
  {
    assetStorageLoadWrapper = this->fields.grandQuestBackground;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    GrandQuestBackground__DeleteBlankEarthObj(assetStorageLoadWrapper, v5);
  }
  classSelectController = (UnityEngine_Object_o *)this->fields.classSelectController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(classSelectController, 0, 0) )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)this->fields.classSelectController;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    GrandQuestClassSelectController__Quit((GrandQuestClassSelectController_o *)assetStorageLoadWrapper, v5);
  }
  levelSelectController = (UnityEngine_Object_o *)this->fields.levelSelectController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Object__op_Inequality(levelSelectController, 0, 0);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
  {
    v12 = this->fields.levelSelectController;
    if ( !v12 )
      goto LABEL_36;
    v12->fields.currentState = 0;
  }
  svtController = (UnityEngine_Object_o *)this->fields.svtController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Object__op_Inequality(svtController, 0, 0);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
  {
    v20 = this->fields.svtController;
    if ( !v20 )
      goto LABEL_36;
    v20->fields.currentViewType = 0;
    v20->fields.currentWarId = -1;
    v20->fields.blankEarthSpotEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->fields.blankEarthSpotEntity, 0, v14, v15, v16, v17, v18, v19);
    GrandQuestSvtController__ClearFigure(v20, v21);
    v20->fields.initialized = 0;
  }
  p_classBoardController = &this->fields.classBoardController;
  classBoardController = (UnityEngine_Object_o *)this->fields.classBoardController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v14);
  if ( UnityEngine_Object__op_Inequality(classBoardController, 0, 0) )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)*p_classBoardController;
    if ( !*p_classBoardController )
      goto LABEL_36;
    GrandQuestClassBoardController__Quit((GrandQuestClassBoardController_o *)assetStorageLoadWrapper, v5);
    assetStorageLoadWrapper = (GrandQuestBackground_o *)*p_classBoardController;
    if ( !*p_classBoardController )
      goto LABEL_36;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)assetStorageLoadWrapper,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_classBoardController = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.classBoardController, 0, v27, v28, v29, v30, v31, v32);
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
    sub_21FFECC(assetStorageLoadWrapper, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetStorageLoadWrapper, 0, 0);
}


System_Collections_Generic_List_MapControl_WarInfo__o *GrandQuestRootComponent__GetGrandWarInfoList(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v3; // w8
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  WarEntity_o *Mine; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t parentWarId; // w1
  System_Nullable_int__o v15; // x0
  __int64 v16; // x22
  BalanceConfig_c *v17; // x0
  WarReleaseEntity_o *OpenEntity; // x22
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  _BOOL8 IsActiveWar; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF
  __int64 v36; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_593318D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_593318D = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v35, 0, sizeof(v35));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[4].klass) == 0 )
    sub_21FFECC(Instance, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v35 = v34;
  v34.fields._list = 0;
  *(_QWORD *)&v34.fields._index = &v35;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v35,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_21FFECC(v8, v9);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v35.fields._current, 0);
    if ( Mine )
    {
      parentWarId = Mine->fields.parentWarId;
      v36 = 0;
      v15 = (System_Nullable_int__o)&v36;
      System_Nullable_int____ctor(v15, parentWarId, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
      v16 = v36;
    }
    else
    {
      v16 = 0;
    }
    v17 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12, v13);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( (_BYTE)v16 && v17->static_fields->GrandBoardWarId == HIDWORD(v16) )
    {
      if ( !Master_object )
        sub_21FFECC(v17, v12);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, HIDWORD(current[1].klass), 0);
      v19 = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v19 )
        sub_21FFECC(0, v20);
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)v19, HIDWORD(current[1].klass), 0);
      if ( IsActiveWar || OpenEntity && (IsActiveWar = WarReleaseEntity__IsClose(OpenEntity, 0)) )
      {
        if ( !v5
          || (items = v5->fields._items,
              v30 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_21FFECC(IsActiveWar, v22);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v32[4] = (Il2CppClass *)current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)current, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *GrandQuestRootComponent__GetSpotEntityByWarId(
        GrandQuestRootComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  BlankEarthSpotEntity_o *result; // x0
  __int64 v5; // x1
  BlankEarthSpotEntity_array *v6; // x19
  bool v7; // w8

  if ( (byte_593318E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    byte_593318E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&warId, method);
  result = (BlankEarthSpotEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !result )
    goto LABEL_11;
  v6 = BlankEarthSpotMaster__GetByWarId((BlankEarthSpotMaster_o *)result, warId, 0);
  v7 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  result = 0;
  if ( !v7 )
    return result;
  if ( !v6 )
LABEL_11:
    sub_21FFECC(result, v5);
  if ( !LODWORD(v6->max_length) )
    sub_21FFED4(0);
  return v6->m_Items[0];
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
  const MethodInfo_476EDF8 *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x24
  _QWORD *p_image; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int v20; // w24
  BalanceConfig_c *v21; // x0
  TerminalPramsManager_c *v22; // x0
  __int64 v23; // x24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  TerminalPramsManager_c *v30; // x0
  TerminalPramsManager_c *v31; // x0
  int v32; // w9
  int v33; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  GrandQuestResourceCatalogAssetBundle_o *v47; // x20
  const MethodInfo *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  GrandQuestViewSwitcher_o *viewSwitcher; // x20
  System_Action_o *v56; // x21
  const MethodInfo *v57; // x3

  if ( (byte_5933186 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&GrandQuestResourceCatalogAssetBundle_TypeInfo);
    sub_21FFC50(&Method_GrandQuestRootComponent__Init_b__49_0__);
    sub_21FFC50(&GrandQuestRootComponent_ResumeInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5933186 = 1;
  }
  v9 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__;
  this->fields.isTouchButton = 0;
  Instance = SingletonTemplate_object___get_Instance(v9);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  if ( !Instance )
    goto LABEL_39;
  p_image = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, *(_DWORD *)(p_image[23] + 4LL), 0);
  if ( !p_image )
    goto LABEL_39;
  v20 = *((_DWORD *)p_image + 14);
  v21 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v14);
    v21 = BalanceConfig_TypeInfo;
  }
  if ( v20 == v21->static_fields->GrandBoardWarId )
    goto LABEL_21;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v14);
  if ( !byte_59331F5 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59331F5 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v14);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( v22->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField )
  {
LABEL_21:
    v23 = sub_21FFEBC(GrandQuestRootComponent_ResumeInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v23, 0);
    if ( !v23 )
      goto LABEL_39;
    v30 = TerminalPramsManager_TypeInfo;
    *(_BYTE *)(v23 + 16) = 1;
    if ( !*(&v30->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v30, v10, v24);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v24);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v32 = (unsigned __int8)byte_593205C;
    *(_DWORD *)(v23 + 20) = v31->static_fields->_WarId_k__BackingField;
    if ( !v32 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
      byte_593205C = 1;
    }
    if ( !*(&v31->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v31, v10, v24);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v33 = (unsigned __int8)byte_59331F5;
    *(_DWORD *)(v23 + 24) = v31->static_fields->_QuestId_k__BackingField;
    if ( !v33 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
      byte_59331F5 = 1;
    }
    if ( !*(&v31->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v31, v10, v24);
      v31 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v31->static_fields;
    this->fields._GrandResumeInfo_k__BackingField = (struct GrandQuestRootComponent_ResumeInfo_o *)v23;
    *(_BYTE *)(v23 + 28) = static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._GrandResumeInfo_k__BackingField,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  this->fields.initEndCallback = endCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.initEndCallback,
    (int32_t)endCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.mTerminalScene = terminalScene;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTerminalScene,
    (int32_t)terminalScene,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.mTerminalListTop = scrTerminalList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTerminalListTop,
    (int32_t)scrTerminalList,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (GrandQuestResourceCatalogAssetBundle_o *)sub_21FFEBC(GrandQuestResourceCatalogAssetBundle_TypeInfo);
  GrandQuestResourceCatalogAssetBundle___ctor(v47, v48);
  this->fields.resourceCatalog = v47;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resourceCatalog,
    (int32_t)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  viewSwitcher = this->fields.viewSwitcher;
  v56 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_GrandQuestRootComponent__Init_b__49_0__, 0);
  if ( !viewSwitcher )
LABEL_39:
    sub_21FFECC(p_image, v10);
  GrandQuestViewSwitcher__Init(viewSwitcher, this, v56, v57);
}


void GrandQuestRootComponent__LateUpdate(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_21FFECC(0, method);
  GrandQuestViewSwitcher__LateUpdate(viewSwitcher, method);
}


void GrandQuestRootComponent__OnClickGrandClassDisableMask(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_5933190 & 1) == 0 )
  {
    sub_21FFC50(&Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__);
    byte_5933190 = 1;
  }
  v2 = Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__;
  if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void GrandQuestRootComponent__OnClickGrandClassScore(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  GrandQuestViewSwitcher_o *viewSwitcher; // x0
  int32_t CurrentClassId; // w20
  SceneJumpInfo_o *v8; // x19

  if ( (byte_593318B & 1) == 0 )
  {
    sub_21FFC50(&Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593318B = 1;
  }
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v3 = Method_GrandQuestRootComponent_OnClickGrandClassScore__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassScore__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    viewSwitcher = this->fields.viewSwitcher;
    if ( !viewSwitcher
      || (CurrentClassId = GrandQuestViewSwitcher__GetCurrentClassId(viewSwitcher, v5),
          v8 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo),
          SceneJumpInfo___ctor_48427232(v8, (System_String_o *)StringLiteral_1/*""*/, CurrentClassId, 0, 0),
          !v8)
      || (SceneJumpInfo__SetReturnNowScene(v8, 0),
          (viewSwitcher = (GrandQuestViewSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
    {
      sub_21FFECC(viewSwitcher, v5);
    }
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)viewSwitcher, 91, 1, (Il2CppObject *)v8, 0);
  }
}


void GrandQuestRootComponent__OnClickGrandServantList(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SceneJumpInfo_o *v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_593318C & 1) == 0 )
  {
    sub_21FFC50(&Method_GrandQuestRootComponent_OnClickGrandServantList__);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593318C = 1;
  }
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v3 = Method_GrandQuestRootComponent_OnClickGrandServantList__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandServantList__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_GrandQuestRootComponent_OnClickGrandServantList__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor(v5, 0);
    if ( !v5
      || (SceneJumpInfo__SetReturnNowScene(v5, 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
    {
      sub_21FFECC(Instance, v7);
    }
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 43, 1, (Il2CppObject *)v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(grandClassScoreButton, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandClassScoreButton, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestRootComponent__SetButtonEnabled(
        GrandQuestRootComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *grandClassScoreButton; // x0

  grandClassScoreButton = (UnityEngine_Behaviour_o *)this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton
    || (UnityEngine_Behaviour__set_enabled(grandClassScoreButton, isEnabled, 0),
        (grandClassScoreButton = (UnityEngine_Behaviour_o *)this->fields.grandServantListButton) == 0) )
  {
    sub_21FFECC(grandClassScoreButton, isEnabled);
  }
  UnityEngine_Behaviour__set_enabled(grandClassScoreButton, isEnabled, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestRootComponent__SetDispQuestListButtonMask(
        GrandQuestRootComponent_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *grandQuestListMoveButtonDisableMask; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0

  grandQuestListMoveButtonDisableMask = (UnityEngine_Component_o *)this->fields.grandQuestListMoveButtonDisableMask;
  if ( !grandQuestListMoveButtonDisableMask
    || (gameObject = UnityEngine_Component__get_gameObject(grandQuestListMoveButtonDisableMask, 0),
        GameObjectHelper__SetActiveSafely(gameObject, disp, 0),
        (grandQuestListMoveButtonDisableMask = (UnityEngine_Component_o *)this->fields.grandQuestListMoveButtonDisableText) == 0) )
  {
    sub_21FFECC(grandQuestListMoveButtonDisableMask, disp);
  }
  v7 = UnityEngine_Component__get_gameObject(grandQuestListMoveButtonDisableMask, 0);
  GameObjectHelper__SetActiveSafely(v7, disp, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestRootComponent__SetDispServant(GrandQuestRootComponent_o *this, bool disp, const MethodInfo *method)
{
  GrandQuestSvtController_o *svtController; // x0
  const MethodInfo *v6; // x2

  svtController = this->fields.svtController;
  if ( !svtController
    || (GrandQuestSvtController__SetDispServant(svtController, disp, method),
        (svtController = (GrandQuestSvtController_o *)this->fields.classBoardController) == 0) )
  {
    sub_21FFECC(svtController, disp);
  }
  GrandQuestClassBoardController__SetDispEffect((GrandQuestClassBoardController_o *)svtController, disp, v6);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestRootComponent__SetDispServantBody(GrandQuestRootComponent_o *this, bool disp, const MethodInfo *method)
{
  GrandQuestSvtController_o *svtController; // x0

  svtController = this->fields.svtController;
  if ( !svtController )
    sub_21FFECC(0, disp);
  GrandQuestSvtController__SetDispServant(svtController, disp, method);
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
        sub_21FFECC(BoardUiAtlasManagerUnit_k__BackingField, uiSprite);
      }
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))uiSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        uiSprite,
        uiSprite->klass->vtable._33_MakePixelPerfect.method);
    }
  }
}


void GrandQuestRootComponent__StartUp(GrandQuestRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_String_o *viewSwitcher; // x0
  Il2CppObject *v6; // x1
  struct UIButton_o *grandClassScoreButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  struct UIButton_o *grandServantListButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v14; // x20
  EventDelegate_Callback_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *grandQuestListMoveButtonDisableText; // x20
  const MethodInfo *v21; // x2

  if ( (byte_5933188 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    sub_21FFC50(&Method_GrandQuestRootComponent_OnClickGrandServantList__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18221/*"btn_grand_select"*/);
    sub_21FFC50(&StringLiteral_18220/*"btn_grand_grandclassscore"*/);
    sub_21FFC50(&StringLiteral_7286/*"GRAND_QUEST_LIST_MOVE_BUTTON_DISABLE_TEXT"*/);
    sub_21FFC50(&StringLiteral_18219/*"btn_grand_grandclass"*/);
    byte_5933188 = 1;
  }
  MainMenuBar__setMenuActive(1, 0, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandClassScoreSprite,
    (System_String_o *)StringLiteral_18220/*"btn_grand_grandclassscore"*/,
    v4);
  grandClassScoreButton = this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton )
    goto LABEL_12;
  onClick = grandClassScoreButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandQuestRootComponent_OnClickGrandClassScore__,
    0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10, v11);
  EventDelegate__Set_56117672(onClick, v9, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandServantListSprite,
    (System_String_o *)StringLiteral_18219/*"btn_grand_grandclass"*/,
    v12);
  grandServantListButton = this->fields.grandServantListButton;
  if ( !grandServantListButton )
    goto LABEL_12;
  v14 = grandServantListButton->fields.onClick;
  v15 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandQuestRootComponent_OnClickGrandServantList__,
    0);
  EventDelegate__Set_56117672(v14, v15, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandScoreDisableMask,
    (System_String_o *)StringLiteral_18219/*"btn_grand_grandclass"*/,
    v16);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandQuestListMoveButtonDisableMask,
    (System_String_o *)StringLiteral_18221/*"btn_grand_select"*/,
    v17);
  grandQuestListMoveButtonDisableText = this->fields.grandQuestListMoveButtonDisableText;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  viewSwitcher = LocalizationManager__Get((System_String_o *)StringLiteral_7286/*"GRAND_QUEST_LIST_MOVE_BUTTON_DISABLE_TEXT"*/, 0);
  if ( !grandQuestListMoveButtonDisableText
    || (UILabel__set_text(grandQuestListMoveButtonDisableText, viewSwitcher, 0),
        (viewSwitcher = (System_String_o *)this->fields.viewSwitcher) == 0) )
  {
LABEL_12:
    sub_21FFECC(viewSwitcher, v6);
  }
  GrandQuestViewSwitcher__StartUp((GrandQuestViewSwitcher_o *)viewSwitcher, v6, v21);
}


void GrandQuestRootComponent__Update(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *viewSwitcher; // x19
  TaskScheduler_o *taskScheduler; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_21FFECC(this, method);
  taskScheduler = viewSwitcher->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0);
  viewSwitcher->fields.isCurrentFrameTaskUpdated = 1;
}


void GrandQuestRootComponent__UpdateGrandScoreButton(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardBaseMaster_o *Master_object; // x0
  const MethodInfo *v5; // x1
  ClassBoardBaseMaster_o *v6; // x20
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x0
  UnityEngine_GameObject_o *v8; // x0
  bool v9; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *grandScoreDisableMessageLabel; // x20
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_593318F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7290/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593318F = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this->fields.viewSwitcher )
    goto LABEL_20;
  v6 = Master_object;
  Master_object = (ClassBoardBaseMaster_o *)GrandQuestViewSwitcher__GetCurrentClassId(this->fields.viewSwitcher, v5);
  if ( !v6 )
    goto LABEL_20;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(v6, (int32_t)Master_object, 0);
  if ( !GrandClassBoardBaseEntity || !ClassBoardBaseEntity__IsOpen(GrandClassBoardBaseEntity, 0) )
  {
    Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMask;
    if ( Master_object )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      GameObjectHelper__SetActiveSafely(gameObject, 1, 0);
      grandScoreDisableMessageLabel = this->fields.grandScoreDisableMessageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
      Master_object = (ClassBoardBaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7290/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/, 0);
      if ( grandScoreDisableMessageLabel )
      {
        UILabel__set_text(grandScoreDisableMessageLabel, (System_String_o *)Master_object, 0);
        Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMessageLabel;
        if ( Master_object )
        {
          v9 = 1;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_21FFECC(Master_object, v5);
  }
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMask;
  if ( !Master_object )
    goto LABEL_20;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectHelper__SetActiveSafely(v8, 0, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  v9 = 0;
LABEL_19:
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectHelper__SetActiveSafely(v14, v9, 0);
}


void GrandQuestRootComponent___Init_b__49_0(GrandQuestRootComponent_o *this, const MethodInfo *method)
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandResumeInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandResumeInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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