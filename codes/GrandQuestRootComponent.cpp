void GrandQuestRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct GrandQuestRootComponent_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct GrandQuestRootComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC20CF & 1) == 0 )
  {
    sub_1C713B0(&GrandQuestRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_21269/*"latestFocusGrandWar"*/);
    sub_1C713B0(&StringLiteral_21266/*"lastClearGrandWar"*/);
    byte_4CC20CF = 1;
  }
  static_fields = GrandQuestRootComponent_TypeInfo->static_fields;
  static_fields->GrandFadeTime = 0.66667;
  v8 = StringLiteral_21266/*"lastClearGrandWar"*/;
  static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR = (struct System_String_o *)StringLiteral_21266/*"lastClearGrandWar"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_21269/*"latestFocusGrandWar"*/;
  v10 = GrandQuestRootComponent_TypeInfo->static_fields;
  v10->SAVE_KEY_LATEST_FOCUS_GRAND_WAR = (struct System_String_o *)StringLiteral_21269/*"latestFocusGrandWar"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v10->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, v9, v11, v12, v13, v14, v15, v16);
}


void GrandQuestRootComponent___ctor(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC20CE & 1) == 0 )
  {
    sub_1C713B0(&GrandQuestViewSwitcher_TypeInfo);
    byte_4CC20CE = 1;
  }
  v3 = (GrandQuestViewSwitcher_o *)sub_1C715FC(GrandQuestViewSwitcher_TypeInfo);
  GrandQuestViewSwitcher___ctor(v3, 0);
  this->fields.viewSwitcher = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.viewSwitcher, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestRootComponent__BackToClassSelectView(
        GrandQuestRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  if ( (byte_4CC20C6 & 1) == 0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC20C6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(1, 0);
  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1C71608(0, v5);
  GrandQuestViewSwitcher__BackToClassSelect(viewSwitcher, callback, 0);
}


void GrandQuestRootComponent__CreateClassBoard(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_classBoardController; // x19
  UnityEngine_Object_o *classBoardController; // x21
  const MethodInfo *v5; // x1
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x0
  Il2CppObject *ClassBoardPrefab; // x21
  UnityEngine_Transform_o *transform; // x20
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC20C4 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC20C4 = 1;
  }
  p_classBoardController = (GrandQuestFolderBoardItem_o *)&this->fields.classBoardController;
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
    resourceCatalog = (GrandQuestResourceCatalogAssetBundle_o *)UnityEngine_Object__Instantiate_object__52264420(
                                                                  ClassBoardPrefab,
                                                                  transform,
                                                                  (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    if ( !resourceCatalog )
LABEL_11:
      sub_1C71608(resourceCatalog, v5);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)resourceCatalog,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___);
    p_classBoardController->klass = (GrandQuestFolderBoardItem_c *)Component_object;
    sub_1C71354(p_classBoardController, (int32_t)Component_object, v10, v11, v12, v13, v14, v15);
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
  UnityEngine_Object_o *levelSelectController; // x20
  struct GrandQuestLevelSelectController_o *v8; // x8
  UnityEngine_Object_o *svtController; // x20
  struct GrandQuestClassBoardController_o **p_classBoardController; // x20
  UnityEngine_Object_o *classBoardController; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x8

  if ( (byte_4CC20C7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC20C7 = 1;
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
    GrandQuestClassSelectController__Quit((GrandQuestClassSelectController_o *)assetStorageLoadWrapper, v4);
  }
  levelSelectController = (UnityEngine_Object_o *)this->fields.levelSelectController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Object__op_Inequality(levelSelectController, 0, 0);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
  {
    v8 = this->fields.levelSelectController;
    if ( !v8 )
      goto LABEL_36;
    v8->fields.currentState = 0;
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
    GrandQuestClassBoardController__Quit((GrandQuestClassBoardController_o *)assetStorageLoadWrapper, v4);
    assetStorageLoadWrapper = (GrandQuestBackground_o *)*p_classBoardController;
    if ( !*p_classBoardController )
      goto LABEL_36;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)assetStorageLoadWrapper,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
    *p_classBoardController = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.classBoardController, 0, v13, v14, v15, v16, v17, v18);
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
    sub_1C71608(assetStorageLoadWrapper, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetStorageLoadWrapper, 0, 0);
}


System_Collections_Generic_List_MapControl_WarInfo__o *GrandQuestRootComponent__GetGrandWarInfoList(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  WarEntity_o *Mine; // x0
  __int64 v10; // x1
  int32_t parentWarId; // w1
  System_Nullable_int__o v12; // x0
  struct System_Collections_Generic_List_T__o *list; // x22
  BalanceConfig_c *v14; // x0
  WarReleaseEntity_o *OpenEntity; // x22
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  _BOOL8 IsActiveWar; // x0
  __int64 v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC20CA & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CC20CA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[4].klass) == 0 )
    sub_1C71608(Instance, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v6 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C71608(v6, v7);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v26.fields._current, 0);
    if ( Mine )
    {
      parentWarId = Mine->fields.parentWarId;
      v25.fields._list = 0;
      v12 = (System_Nullable_int__o)&v25;
      System_Nullable_int____ctor(v12, parentWarId, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
      list = v25.fields._list;
    }
    else
    {
      list = 0;
    }
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( (_BYTE)list && v14->static_fields->GrandBoardWarId == HIDWORD(list) )
    {
      if ( !Master_object )
        sub_1C71608(v14, v10);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, HIDWORD(current[1].klass), 0);
      v16 = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v16 )
        sub_1C71608(0, v17);
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)v16, HIDWORD(current[1].klass), 0);
      if ( IsActiveWar || OpenEntity && (IsActiveWar = WarReleaseEntity__IsClose(OpenEntity, 0)) )
      {
        if ( !v3 )
          sub_1C71608(IsActiveWar, v19);
        items = v3->fields._items;
        v21 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(IsActiveWar, v19);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v23[4] = (Il2CppClass *)current;
          sub_1C71354(v23 + 4, current);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v3;
}


BlankEarthSpotEntity_o *GrandQuestRootComponent__GetSpotEntityByWarId(
        GrandQuestRootComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  BlankEarthSpotEntity_o *result; // x0
  __int64 v5; // x1
  BlankEarthSpotEntity_array *v6; // x19
  bool v7; // w8

  if ( (byte_4CC20CB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    byte_4CC20CB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BlankEarthSpotEntity_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !result )
    goto LABEL_11;
  v6 = BlankEarthSpotMaster__GetByWarId((BlankEarthSpotMaster_o *)result, warId, 0);
  v7 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  result = 0;
  if ( !v7 )
    return result;
  if ( !v6 )
LABEL_11:
    sub_1C71608(result, v5);
  if ( !LODWORD(v6->max_length) )
    sub_1C71610(0);
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x24
  _QWORD *p_image; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int v18; // w24
  BalanceConfig_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  GrandQuestRootComponent_ResumeInfo_o *v21; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  TerminalPramsManager_c *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  GrandQuestResourceCatalogAssetBundle_o *v41; // x20
  const MethodInfo *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  GrandQuestViewSwitcher_o *viewSwitcher; // x20
  System_Action_o *v50; // x21

  if ( (byte_4CC20C3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&GrandQuestResourceCatalogAssetBundle_TypeInfo);
    sub_1C713B0(&Method_GrandQuestRootComponent__Init_b__49_0__);
    sub_1C713B0(&GrandQuestRootComponent_ResumeInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC20C3 = 1;
  }
  this->fields.isTouchButton = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC1762 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1762 = 1;
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
  v18 = *((_DWORD *)p_image + 14);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( v18 == v19->static_fields->GrandBoardWarId )
    goto LABEL_21;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC20D0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC20D0 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  if ( v20->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField )
  {
LABEL_21:
    v21 = (GrandQuestRootComponent_ResumeInfo_o *)sub_1C715FC(GrandQuestRootComponent_ResumeInfo_TypeInfo);
    GrandQuestRootComponent_ResumeInfo___ctor(v21, 0);
    if ( !v21 )
      goto LABEL_39;
    v21->fields._IsResume_k__BackingField = 1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC1762 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC1762 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v21->fields._WarId_k__BackingField = v28->static_fields->_WarId_k__BackingField;
    if ( !byte_4CC13B1 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
      byte_4CC13B1 = 1;
    }
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v21->fields._QuestId_k__BackingField = v28->static_fields->_QuestId_k__BackingField;
    if ( !byte_4CC20D0 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
      byte_4CC20D0 = 1;
    }
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v21->fields._IsDirectTransitionToClassSelect_k__BackingField = v28->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField;
    this->fields._GrandResumeInfo_k__BackingField = v21;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields._GrandResumeInfo_k__BackingField,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  this->fields.initEndCallback = endCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.initEndCallback,
    (int32_t)endCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.mTerminalScene = terminalScene;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mTerminalScene,
    (int32_t)terminalScene,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.mTerminalListTop = scrTerminalList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mTerminalListTop,
    (int32_t)scrTerminalList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (GrandQuestResourceCatalogAssetBundle_o *)sub_1C715FC(GrandQuestResourceCatalogAssetBundle_TypeInfo);
  GrandQuestResourceCatalogAssetBundle___ctor(v41, v42);
  this->fields.resourceCatalog = v41;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.resourceCatalog, (int32_t)v41, v43, v44, v45, v46, v47, v48);
  viewSwitcher = this->fields.viewSwitcher;
  v50 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_GrandQuestRootComponent__Init_b__49_0__, 0);
  if ( !viewSwitcher )
LABEL_39:
    sub_1C71608(p_image, v9);
  GrandQuestViewSwitcher__Init(viewSwitcher, this, v50, 0);
}


void GrandQuestRootComponent__LateUpdate(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1C71608(0, method);
  GrandQuestViewSwitcher__LateUpdate(viewSwitcher, 0);
}


void GrandQuestRootComponent__OnClickGrandClassDisableMask(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4CC20CD & 1) == 0 )
  {
    sub_1C713B0(&Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__);
    byte_4CC20CD = 1;
  }
  v2 = Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__;
  if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C713C8(Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C71394(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void GrandQuestRootComponent__OnClickGrandClassScore(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  GrandQuestViewSwitcher_o *viewSwitcher; // x0
  int32_t CurrentClassId; // w20
  SceneJumpInfo_o *v8; // x19

  if ( (byte_4CC20C8 & 1) == 0 )
  {
    sub_1C713B0(&Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC20C8 = 1;
  }
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v3 = Method_GrandQuestRootComponent_OnClickGrandClassScore__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassScore__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    viewSwitcher = this->fields.viewSwitcher;
    if ( !viewSwitcher
      || (CurrentClassId = GrandQuestViewSwitcher__GetCurrentClassId(viewSwitcher, 0),
          v8 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo),
          SceneJumpInfo___ctor_41756288(v8, (System_String_o *)StringLiteral_1/*""*/, CurrentClassId, 0, 0),
          !v8)
      || (SceneJumpInfo__SetReturnNowScene(v8, 0),
          (viewSwitcher = (GrandQuestViewSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
    {
      sub_1C71608(viewSwitcher, v5);
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

  if ( (byte_4CC20C9 & 1) == 0 )
  {
    sub_1C713B0(&Method_GrandQuestRootComponent_OnClickGrandServantList__);
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC20C9 = 1;
  }
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v3 = Method_GrandQuestRootComponent_OnClickGrandServantList__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandServantList__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_GrandQuestRootComponent_OnClickGrandServantList__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor(v5, 0);
    if ( !v5
      || (SceneJumpInfo__SetReturnNowScene(v5, 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
    {
      sub_1C71608(Instance, v7);
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
    sub_1C71608(grandClassScoreButton, isActive);
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
  bool v5; // w20

  grandClassScoreButton = (UnityEngine_Behaviour_o *)this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton
    || (v5 = isEnabled,
        UnityEngine_Behaviour__set_enabled(grandClassScoreButton, isEnabled, 0),
        (grandClassScoreButton = (UnityEngine_Behaviour_o *)this->fields.grandServantListButton) == 0) )
  {
    sub_1C71608(grandClassScoreButton, isEnabled);
  }
  UnityEngine_Behaviour__set_enabled(grandClassScoreButton, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestRootComponent__SetDispQuestListButtonMask(
        GrandQuestRootComponent_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *grandQuestListMoveButtonDisableMask; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v7; // w20
  UnityEngine_GameObject_o *v8; // x0

  grandQuestListMoveButtonDisableMask = (UnityEngine_Component_o *)this->fields.grandQuestListMoveButtonDisableMask;
  if ( !grandQuestListMoveButtonDisableMask
    || (gameObject = UnityEngine_Component__get_gameObject(grandQuestListMoveButtonDisableMask, 0),
        v7 = disp,
        GameObjectHelper__SetActiveSafely(gameObject, v7, 0),
        (grandQuestListMoveButtonDisableMask = (UnityEngine_Component_o *)this->fields.grandQuestListMoveButtonDisableText) == 0) )
  {
    sub_1C71608(grandQuestListMoveButtonDisableMask, disp);
  }
  v8 = UnityEngine_Component__get_gameObject(grandQuestListMoveButtonDisableMask, 0);
  GameObjectHelper__SetActiveSafely(v8, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C71608(svtController, disp);
  }
  GrandQuestClassBoardController__SetDispEffect((GrandQuestClassBoardController_o *)svtController, v5, v6);
}


void GrandQuestRootComponent__SetDispServantBody(GrandQuestRootComponent_o *this, bool disp, const MethodInfo *method)
{
  GrandQuestSvtController_o *svtController; // x0

  svtController = this->fields.svtController;
  if ( !svtController )
    sub_1C71608(0, disp);
  GrandQuestSvtController__SetDispServant(svtController, disp, 0);
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
        sub_1C71608(BoardUiAtlasManagerUnit_k__BackingField, uiSprite);
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
  System_String_o *viewSwitcher; // x0
  __int64 v7; // x1
  struct UIButton_o *grandClassScoreButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x21
  EventDelegate_Callback_o *v10; // x22
  const MethodInfo *v11; // x3
  struct UIButton_o *grandServantListButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v13; // x21
  EventDelegate_Callback_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  UILabel_o *grandQuestListMoveButtonDisableText; // x21

  if ( (byte_4CC20C5 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    sub_1C713B0(&Method_GrandQuestRootComponent_OnClickGrandServantList__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17513/*"btn_grand_select"*/);
    sub_1C713B0(&StringLiteral_17512/*"btn_grand_grandclassscore"*/);
    sub_1C713B0(&StringLiteral_6999/*"GRAND_QUEST_LIST_MOVE_BUTTON_DISABLE_TEXT"*/);
    sub_1C713B0(&StringLiteral_17511/*"btn_grand_grandclass"*/);
    byte_4CC20C5 = 1;
  }
  MainMenuBar__setMenuActive(1, 0, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandClassScoreSprite,
    (System_String_o *)StringLiteral_17512/*"btn_grand_grandclassscore"*/,
    v5);
  grandClassScoreButton = this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton )
    goto LABEL_12;
  onClick = grandClassScoreButton->fields.onClick;
  v10 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandQuestRootComponent_OnClickGrandClassScore__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49625676(onClick, v10, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandServantListSprite,
    (System_String_o *)StringLiteral_17511/*"btn_grand_grandclass"*/,
    v11);
  grandServantListButton = this->fields.grandServantListButton;
  if ( !grandServantListButton )
    goto LABEL_12;
  v13 = grandServantListButton->fields.onClick;
  v14 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandQuestRootComponent_OnClickGrandServantList__,
    0);
  EventDelegate__Set_49625676(v13, v14, 0);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandScoreDisableMask,
    (System_String_o *)StringLiteral_17511/*"btn_grand_grandclass"*/,
    v15);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandQuestListMoveButtonDisableMask,
    (System_String_o *)StringLiteral_17513/*"btn_grand_select"*/,
    v16);
  grandQuestListMoveButtonDisableText = this->fields.grandQuestListMoveButtonDisableText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewSwitcher = LocalizationManager__Get((System_String_o *)StringLiteral_6999/*"GRAND_QUEST_LIST_MOVE_BUTTON_DISABLE_TEXT"*/, 0);
  if ( !grandQuestListMoveButtonDisableText
    || (UILabel__set_text(grandQuestListMoveButtonDisableText, viewSwitcher, 0),
        (viewSwitcher = (System_String_o *)this->fields.viewSwitcher) == 0) )
  {
LABEL_12:
    sub_1C71608(viewSwitcher, v7);
  }
  GrandQuestViewSwitcher__StartUp((GrandQuestViewSwitcher_o *)viewSwitcher, data, 0);
}


void GrandQuestRootComponent__Update(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1C71608(0, method);
  GrandQuestViewSwitcher__Update(viewSwitcher, 0);
}


void GrandQuestRootComponent__UpdateGrandScoreButton(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardBaseMaster_o *Master_object; // x0
  __int64 v4; // x1
  ClassBoardBaseMaster_o *v5; // x20
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x0
  bool v7; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *grandScoreDisableMessageLabel; // x20
  System_String_o *v10; // x1
  UnityEngine_GameObject_o *v11; // x0

  if ( (byte_4CC20CC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_7003/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC20CC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this->fields.viewSwitcher )
    goto LABEL_20;
  v5 = Master_object;
  Master_object = (ClassBoardBaseMaster_o *)GrandQuestViewSwitcher__GetCurrentClassId(this->fields.viewSwitcher, 0);
  if ( !v5 )
    goto LABEL_20;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(v5, (int32_t)Master_object, 0);
  v7 = !GrandClassBoardBaseEntity || !ClassBoardBaseEntity__IsOpen(GrandClassBoardBaseEntity, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMask;
  if ( !Master_object )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( v7 )
  {
    GameObjectHelper__SetActiveSafely(gameObject, 1, 0);
    grandScoreDisableMessageLabel = this->fields.grandScoreDisableMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardBaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7003/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/, 0);
    if ( grandScoreDisableMessageLabel )
    {
      v10 = (System_String_o *)Master_object;
      Master_object = (ClassBoardBaseMaster_o *)grandScoreDisableMessageLabel;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C71608(Master_object, v4);
  }
  GameObjectHelper__SetActiveSafely(gameObject, 0, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UILabel__set_text((UILabel_o *)Master_object, v10, 0);
  Master_object = (ClassBoardBaseMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectHelper__SetActiveSafely(v11, v7, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandResumeInfo_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandResumeInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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