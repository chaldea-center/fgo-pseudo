void __fastcall GrandQuestRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFCE65 & 1) == 0 )
  {
    sub_1BC3008(&GrandQuestRootComponent_TypeInfo, v1);
    byte_4AFCE65 = 1;
  }
  LODWORD(GrandQuestRootComponent_TypeInfo->static_fields->GrandFadeTime) = (struct GrandQuestRootComponent_StaticFields)1059760811;
}


void __fastcall GrandQuestRootComponent___ctor(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *v3; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4AFCE64 & 1) == 0 )
  {
    sub_1BC3008(&GrandQuestViewSwitcher_TypeInfo, method);
    byte_4AFCE64 = 1;
  }
  v3 = (GrandQuestViewSwitcher_o *)sub_1BC3254(GrandQuestViewSwitcher_TypeInfo);
  GrandQuestViewSwitcher___ctor(v3, v4);
  this->fields.viewSwitcher = v3;
  sub_1BC2FAC(&this->fields.viewSwitcher);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandQuestRootComponent__BackToClassSelectView(
        GrandQuestRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  struct GrandQuestViewSwitcher_o *viewSwitcher; // x0

  if ( (byte_4AFCE5C & 1) == 0 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, callback);
    byte_4AFCE5C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(1, 0LL);
  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1BC3264(0LL, v5);
  if ( viewSwitcher->fields.currentViewType == 2 )
    GrandQuestViewSwitcher__ChangeView(viewSwitcher, 1, viewSwitcher->fields.currentWarId, 0, callback, v6);
}


void __fastcall GrandQuestRootComponent__CreateClassBoard(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct GrandQuestClassBoardController_o **p_classBoardController; // x19
  UnityEngine_Object_o *classBoardController; // x21
  const MethodInfo *v7; // x1
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x0
  Il2CppObject *ClassBoardPrefab; // x21
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_4AFCE5A & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___, method);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4AFCE5A = 1;
  }
  p_classBoardController = &this->fields.classBoardController;
  classBoardController = (UnityEngine_Object_o *)this->fields.classBoardController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classBoardController, 0LL, 0LL) )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( !resourceCatalog )
      goto LABEL_11;
    ClassBoardPrefab = (Il2CppObject *)GrandQuestResourceCatalogAssetBundle__GetClassBoardPrefab(resourceCatalog, v7);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resourceCatalog = (GrandQuestResourceCatalogAssetBundle_o *)UnityEngine_Object__Instantiate_object__50900816(
                                                                  ClassBoardPrefab,
                                                                  transform,
                                                                  (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
    if ( !resourceCatalog )
LABEL_11:
      sub_1BC3264(resourceCatalog, v7);
    *p_classBoardController = (struct GrandQuestClassBoardController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                           (UnityEngine_GameObject_o *)resourceCatalog,
                                                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestClassBoardController___);
    sub_1BC2FAC(p_classBoardController);
  }
}


void __fastcall GrandQuestRootComponent__ExecuteInitEndCallback(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.initEndCallback, 0LL);
}


void __fastcall GrandQuestRootComponent__ExitGrandQuestArea(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *grandQuestBackground; // x20
  const MethodInfo *v4; // x1
  GrandQuestBackground_o *assetStorageLoadWrapper; // x0
  UnityEngine_Object_o *classSelectController; // x20
  UnityEngine_Object_o *levelSelectController; // x20
  struct GrandQuestLevelSelectController_o *v8; // x8
  UnityEngine_Object_o *svtController; // x20
  struct GrandQuestSvtController_o *v10; // x20
  const MethodInfo *v11; // x1
  struct GrandQuestClassBoardController_o **p_classBoardController; // x20
  UnityEngine_Object_o *classBoardController; // x21
  UnityEngine_Object_o *gameObject; // x21
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x8

  if ( (byte_4AFCE5D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFCE5D = 1;
  }
  grandQuestBackground = (UnityEngine_Object_o *)this->fields.grandQuestBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandQuestBackground, 0LL, 0LL) )
  {
    assetStorageLoadWrapper = this->fields.grandQuestBackground;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    GrandQuestBackground__DeleteBlankEarthObj(assetStorageLoadWrapper, v4);
  }
  classSelectController = (UnityEngine_Object_o *)this->fields.classSelectController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSelectController, 0LL, 0LL) )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)this->fields.classSelectController;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    GrandQuestClassSelectController__Quit((GrandQuestClassSelectController_o *)assetStorageLoadWrapper, v4);
  }
  levelSelectController = (UnityEngine_Object_o *)this->fields.levelSelectController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Object__op_Inequality(levelSelectController, 0LL, 0LL);
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
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Object__op_Inequality(svtController, 0LL, 0LL);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
  {
    v10 = this->fields.svtController;
    if ( !v10 )
      goto LABEL_36;
    v10->fields.currentViewType = 0;
    v10->fields.currentWarId = -1;
    v10->fields.blankEarthSpotEntity = 0LL;
    sub_1BC2FAC(&v10->fields.blankEarthSpotEntity);
    GrandQuestSvtController__ClearFigure(v10, v11);
    v10->fields.initialized = 0;
  }
  p_classBoardController = &this->fields.classBoardController;
  classBoardController = (UnityEngine_Object_o *)this->fields.classBoardController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardController, 0LL, 0LL) )
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
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
    *p_classBoardController = 0LL;
    sub_1BC2FAC(&this->fields.classBoardController);
  }
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    assetStorageLoadWrapper = (GrandQuestBackground_o *)resourceCatalog->fields.assetStorageLoadWrapper;
    if ( !assetStorageLoadWrapper )
      goto LABEL_36;
    AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)assetStorageLoadWrapper, 0LL);
  }
  assetStorageLoadWrapper = (GrandQuestBackground_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !assetStorageLoadWrapper )
LABEL_36:
    sub_1BC3264(assetStorageLoadWrapper, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetStorageLoadWrapper, 0, 0LL);
}


System_Collections_Generic_List_MapControl_WarInfo__o *__fastcall GrandQuestRootComponent__GetGrandWarInfoList(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x19
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  WarEntity_o *v16; // x27
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v21; // x1
  int32_t parentWarId; // w1
  struct System_Collections_Generic_List_T__o *list; // x28
  BalanceConfig_c *v24; // x0
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  _BOOL8 IsActiveWar; // x0
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF
  System_Nullable_int__o v36; // 0:x0.8

  if ( (byte_4AFCE60 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v2);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v8);
    sub_1BC3008(&Method_System_Nullable_int__GetValueOrDefault__, v9);
    sub_1BC3008(&Method_System_Nullable_int___ctor__, v10);
    sub_1BC3008(&Method_System_Nullable_int__get_HasValue__, v11);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    byte_4AFCE60 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v13 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[4].klass) == 0LL )
    sub_1BC3264(Instance, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v16 = 0LL;
  v35 = v34;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v17 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1BC3264(v17, v18);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v35.fields._current, 0LL);
    if ( Mine )
      v16 = Mine;
    if ( Mine )
    {
      if ( !v16 )
        sub_1BC3264(Mine, v21);
      parentWarId = v16->fields.parentWarId;
      v34.fields._list = 0LL;
      v36 = (System_Nullable_int__o)&v34;
      System_Nullable_int____ctor(v36, parentWarId, (const MethodInfo_37C0098 *)Method_System_Nullable_int___ctor__);
      list = v34.fields._list;
    }
    else
    {
      list = 0LL;
    }
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    if ( (_BYTE)list && v24->static_fields->GrandBoardWarId == HIDWORD(list) )
    {
      v25 = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v25 )
        sub_1BC3264(0LL, v26);
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)v25, HIDWORD(current[1].klass), 0LL);
      if ( IsActiveWar )
      {
        if ( !v13 )
          sub_1BC3264(IsActiveWar, v28);
        items = v13->fields._items;
        v30 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1BC3264(IsActiveWar, v28);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            current,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v32[4] = (Il2CppClass *)current;
          sub_1BC2FAC(v32 + 4);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *__fastcall GrandQuestRootComponent__GetSpotEntityByWarId(
        GrandQuestRootComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  BlankEarthSpotEntity_o *result; // x0
  __int64 v7; // x1
  BlankEarthSpotEntity_array *v8; // x19
  __int64 v9; // x2
  bool v10; // w8

  if ( (byte_4AFCE61 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&warId);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, v5);
    byte_4AFCE61 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BlankEarthSpotEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !result )
    goto LABEL_11;
  v8 = BlankEarthSpotMaster__GetByWarId((BlankEarthSpotMaster_o *)result, warId, 0LL);
  v10 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  result = 0LL;
  if ( !v10 )
    return result;
  if ( !v8 )
LABEL_11:
    sub_1BC3264(result, v7);
  if ( !v8->max_length )
    sub_1BC326C(0LL, v7, v9);
  return v8->m_Items[0];
}


int32_t __fastcall GrandQuestRootComponent__GetViewType(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *viewSwitcher; // x8

  viewSwitcher = this->fields.viewSwitcher;
  if ( viewSwitcher )
    return viewSwitcher->fields.currentViewType;
  else
    return 0;
}


void __fastcall GrandQuestRootComponent__Init(
        GrandQuestRootComponent_o *this,
        TerminalSceneComponent_o *terminalScene,
        ScrTerminalListTop_o *scrTerminalList,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Instance; // x24
  _QWORD *p_image; // x0
  int v18; // w24
  BalanceConfig_c *v19; // x0
  __int64 v20; // x24
  TerminalPramsManager_c *v21; // x0
  GrandQuestResourceCatalogAssetBundle_o *v22; // x20
  const MethodInfo *v23; // x1
  GrandQuestViewSwitcher_o *viewSwitcher; // x20
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x3

  if ( (byte_4AFCE59 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, terminalScene);
    sub_1BC3008(&BalanceConfig_TypeInfo, v9);
    sub_1BC3008(&GrandQuestResourceCatalogAssetBundle_TypeInfo, v10);
    sub_1BC3008(&Method_GrandQuestRootComponent__Init_b__45_0__, v11);
    sub_1BC3008(&GrandQuestRootComponent_ResumeInfo_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v14);
    byte_4AFCE59 = 1;
  }
  this->fields.isTouchButton = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC524 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v15);
    byte_4AFC524 = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  if ( !Instance )
    goto LABEL_32;
  p_image = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, *(_DWORD *)(p_image[23] + 4LL), 0LL);
  if ( !p_image )
    goto LABEL_32;
  v18 = *((_DWORD *)p_image + 14);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( v18 == v19->static_fields->GrandBoardWarId )
  {
    v20 = sub_1BC3254(GrandQuestRootComponent_ResumeInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    if ( !v20 )
      goto LABEL_32;
    *(_BYTE *)(v20 + 16) = 1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC524 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v15);
      byte_4AFC524 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(v20 + 20) = v21->static_fields->_WarId_k__BackingField;
    if ( !byte_4AFC46E )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v15);
      v21 = TerminalPramsManager_TypeInfo;
      byte_4AFC46E = 1;
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(v20 + 24) = v21->static_fields->_QuestId_k__BackingField;
    if ( !byte_4AFCE89 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v15);
      v21 = TerminalPramsManager_TypeInfo;
      byte_4AFCE89 = 1;
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(v20 + 28) = v21->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField;
    this->fields._GrandResumeInfo_k__BackingField = (struct GrandQuestRootComponent_ResumeInfo_o *)v20;
    sub_1BC2FAC(&this->fields._GrandResumeInfo_k__BackingField);
  }
  this->fields.initEndCallback = endCallback;
  sub_1BC2FAC(&this->fields.initEndCallback);
  this->fields.mTerminalScene = terminalScene;
  sub_1BC2FAC(&this->fields.mTerminalScene);
  this->fields.mTerminalListTop = scrTerminalList;
  sub_1BC2FAC(&this->fields.mTerminalListTop);
  v22 = (GrandQuestResourceCatalogAssetBundle_o *)sub_1BC3254(GrandQuestResourceCatalogAssetBundle_TypeInfo);
  GrandQuestResourceCatalogAssetBundle___ctor(v22, v23);
  this->fields.resourceCatalog = v22;
  sub_1BC2FAC(&this->fields.resourceCatalog);
  viewSwitcher = this->fields.viewSwitcher;
  v25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_GrandQuestRootComponent__Init_b__45_0__, 0LL);
  if ( !viewSwitcher )
LABEL_32:
    sub_1BC3264(p_image, v15);
  GrandQuestViewSwitcher__Init(viewSwitcher, this, v25, v26);
}


void __fastcall GrandQuestRootComponent__LateUpdate(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *viewSwitcher; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1BC3264(0LL, method);
  GrandQuestViewSwitcher__LateUpdate(viewSwitcher, method);
}


void __fastcall GrandQuestRootComponent__OnClickGrandClassDisableMask(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4AFCE63 & 1) == 0 )
  {
    sub_1BC3008(&Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__, method);
    byte_4AFCE63 = 1;
  }
  v2 = Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__;
  if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1BC3020(Method_GrandQuestRootComponent_OnClickGrandClassDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0LL);
}


void __fastcall GrandQuestRootComponent__OnClickGrandClassScore(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  GrandQuestViewSwitcher_o *viewSwitcher; // x0
  int32_t CurrentClassId; // w19
  int32_t ClassBoardBaseId; // w20
  SceneJumpInfo_o *v14; // x19

  if ( (byte_4AFCE5E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardClassMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_GrandQuestRootComponent_OnClickGrandClassScore__, v4);
    sub_1BC3008(&SceneJumpInfo_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4AFCE5E = 1;
  }
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v8 = Method_GrandQuestRootComponent_OnClickGrandClassScore__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandClassScore__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BC3020(Method_GrandQuestRootComponent_OnClickGrandClassScore__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    viewSwitcher = this->fields.viewSwitcher;
    if ( !viewSwitcher )
      goto LABEL_13;
    CurrentClassId = GrandQuestViewSwitcher__GetCurrentClassId(viewSwitcher, v10);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    viewSwitcher = (GrandQuestViewSwitcher_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !viewSwitcher
      || (ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                               (ClassBoardClassMaster_o *)viewSwitcher,
                               CurrentClassId,
                               0LL),
          v14 = (SceneJumpInfo_o *)sub_1BC3254(SceneJumpInfo_TypeInfo),
          SceneJumpInfo___ctor_40501008(v14, (System_String_o *)StringLiteral_1/*""*/, ClassBoardBaseId, 0, 0LL),
          !v14)
      || (SceneJumpInfo__SetReturnNowScene(v14, 0LL),
          (viewSwitcher = (GrandQuestViewSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
LABEL_13:
      sub_1BC3264(viewSwitcher, v10);
    }
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)viewSwitcher, 91, 1, (Il2CppObject *)v14, 0LL);
  }
}


void __fastcall GrandQuestRootComponent__OnClickGrandServantList(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  GrandQuestViewSwitcher_o *viewSwitcher; // x0
  int32_t CurrentClassId; // w19
  int32_t grandGraphId; // w20
  SceneJumpInfo_o *v13; // x19
  GrandGraphDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4AFCE5F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_GrandQuestRootComponent_OnClickGrandServantList__, v4);
    sub_1BC3008(&SceneJumpInfo_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4AFCE5F = 1;
  }
  entity = 0LL;
  if ( !this->fields.isTouchButton )
  {
    this->fields.isTouchButton = 1;
    v7 = Method_GrandQuestRootComponent_OnClickGrandServantList__;
    if ( (*((_BYTE *)Method_GrandQuestRootComponent_OnClickGrandServantList__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BC3020(Method_GrandQuestRootComponent_OnClickGrandServantList__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    viewSwitcher = this->fields.viewSwitcher;
    if ( viewSwitcher )
    {
      CurrentClassId = GrandQuestViewSwitcher__GetCurrentClassId(viewSwitcher, v9);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      viewSwitcher = (GrandQuestViewSwitcher_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
      if ( viewSwitcher )
      {
        viewSwitcher = (GrandQuestViewSwitcher_o *)GrandGraphDetailMaster__TryGetEntityByBaseClassId(
                                                     (GrandGraphDetailMaster_o *)viewSwitcher,
                                                     &entity,
                                                     CurrentClassId,
                                                     0LL);
        if ( ((unsigned __int8)viewSwitcher & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_18;
          grandGraphId = entity->fields.grandGraphId;
        }
        else
        {
          grandGraphId = 0;
        }
        v13 = (SceneJumpInfo_o *)sub_1BC3254(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_40500908(v13, grandGraphId, 0LL);
        if ( v13 )
        {
          SceneJumpInfo__SetReturnNowScene(v13, 0LL);
          viewSwitcher = (GrandQuestViewSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( viewSwitcher )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)viewSwitcher, 43, 1, (Il2CppObject *)v13, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1BC3264(viewSwitcher, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestRootComponent__SetButtonActive(
        GrandQuestRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *grandClassScoreButton; // x0

  grandClassScoreButton = (UnityEngine_Component_o *)this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton
    || (grandClassScoreButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             grandClassScoreButton,
                                                             0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandClassScoreButton, isActive, 0LL),
        (grandClassScoreButton = (UnityEngine_Component_o *)this->fields.grandServantListButton) == 0LL)
    || (grandClassScoreButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             grandClassScoreButton,
                                                             0LL)) == 0LL )
  {
    sub_1BC3264(grandClassScoreButton, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandClassScoreButton, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestRootComponent__SetDispServant(
        GrandQuestRootComponent_o *this,
        bool disp,
        const MethodInfo *method)
{
  GrandQuestSvtController_o *svtController; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2

  svtController = this->fields.svtController;
  if ( !svtController
    || (v5 = disp,
        GrandQuestSvtController__SetDispServant(svtController, disp, method),
        (svtController = (GrandQuestSvtController_o *)this->fields.classBoardController) == 0LL) )
  {
    sub_1BC3264(svtController, disp);
  }
  GrandQuestClassBoardController__SetDispEffect((GrandQuestClassBoardController_o *)svtController, v5, v6);
}


void __fastcall GrandQuestRootComponent__SetImage(
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
                                                                              0LL),
            !uiSprite) )
      {
        sub_1BC3264(BoardUiAtlasManagerUnit_k__BackingField, uiSprite);
      }
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))uiSprite->klass->vtable._33_MakePixelPerfect.method)(
        uiSprite,
        uiSprite->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}


void __fastcall GrandQuestRootComponent__StartUp(
        GrandQuestRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  GrandQuestViewSwitcher_o *viewSwitcher; // x0
  Il2CppObject *v11; // x1
  struct UIButton_o *grandClassScoreButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v14; // x21
  const MethodInfo *v15; // x3
  struct UIButton_o *grandServantListButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v17; // x20
  EventDelegate_Callback_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2

  if ( (byte_4AFCE5B & 1) == 0 )
  {
    sub_1BC3008(&EventDelegate_Callback_TypeInfo, data);
    sub_1BC3008(&EventDelegate_TypeInfo, v4);
    sub_1BC3008(&Method_GrandQuestRootComponent_OnClickGrandClassScore__, v5);
    sub_1BC3008(&Method_GrandQuestRootComponent_OnClickGrandServantList__, v6);
    sub_1BC3008(&StringLiteral_17335/*"btn_grand_grandclassscore"*/, v7);
    sub_1BC3008(&StringLiteral_17334/*"btn_grand_grandclass"*/, v8);
    byte_4AFCE5B = 1;
  }
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandClassScoreSprite,
    (System_String_o *)StringLiteral_17335/*"btn_grand_grandclassscore"*/,
    v9);
  grandClassScoreButton = this->fields.grandClassScoreButton;
  if ( !grandClassScoreButton )
    goto LABEL_9;
  onClick = grandClassScoreButton->fields.onClick;
  v14 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandQuestRootComponent_OnClickGrandClassScore__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_48350136(onClick, v14, 0LL);
  GrandQuestRootComponent__SetImage(
    this,
    this->fields.grandServantListSprite,
    (System_String_o *)StringLiteral_17334/*"btn_grand_grandclass"*/,
    v15);
  grandServantListButton = this->fields.grandServantListButton;
  if ( !grandServantListButton
    || (v17 = grandServantListButton->fields.onClick,
        v18 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandQuestRootComponent_OnClickGrandServantList__,
          0LL),
        EventDelegate__Set_48350136(v17, v18, 0LL),
        GrandQuestRootComponent__SetImage(
          this,
          this->fields.grandScoreDisableMask,
          (System_String_o *)StringLiteral_17334/*"btn_grand_grandclass"*/,
          v19),
        (viewSwitcher = this->fields.viewSwitcher) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(viewSwitcher, v11);
  }
  GrandQuestViewSwitcher__StartUp(viewSwitcher, v11, v20);
}


void __fastcall GrandQuestRootComponent__Update(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *viewSwitcher; // x8
  TaskScheduler_o *taskScheduler; // x0

  viewSwitcher = this->fields.viewSwitcher;
  if ( !viewSwitcher )
    sub_1BC3264(this, method);
  taskScheduler = viewSwitcher->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
}


void __fastcall GrandQuestRootComponent__UpdateGrandScoreButton(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  GrandGraphMaster_o *Master_object; // x0
  const MethodInfo *v8; // x1
  GrandGraphMaster_o *v9; // x20
  GrandGraphEntity_o *EntityByParentClassBoardBaseId; // x0
  bool v11; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *grandScoreDisableMessageLabel; // x20
  System_String_o *v14; // x1
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_4AFCE62 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&LocalizationManager_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_6942/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4AFCE62 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !this->fields.viewSwitcher )
    goto LABEL_20;
  v9 = Master_object;
  Master_object = (GrandGraphMaster_o *)GrandQuestViewSwitcher__GetCurrentClassId(this->fields.viewSwitcher, v8);
  if ( !v9 )
    goto LABEL_20;
  EntityByParentClassBoardBaseId = GrandGraphMaster__GetEntityByParentClassBoardBaseId(v9, (int32_t)Master_object, 0LL);
  v11 = EntityByParentClassBoardBaseId && !GrandGraphEntity__IsOpen(EntityByParentClassBoardBaseId, 0LL);
  Master_object = (GrandGraphMaster_o *)this->fields.grandScoreDisableMask;
  if ( !Master_object )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( v11 )
  {
    GameObjectHelper__SetActiveSafely(gameObject, 1, 0LL);
    grandScoreDisableMessageLabel = this->fields.grandScoreDisableMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (GrandGraphMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6942/*"GRAND_QUEST_TO_GRAND_SCORE_DISABLE_MESSAGE"*/, 0LL);
    if ( grandScoreDisableMessageLabel )
    {
      v14 = (System_String_o *)Master_object;
      Master_object = (GrandGraphMaster_o *)grandScoreDisableMessageLabel;
      goto LABEL_18;
    }
LABEL_20:
    sub_1BC3264(Master_object, v8);
  }
  GameObjectHelper__SetActiveSafely(gameObject, 0, 0LL);
  Master_object = (GrandGraphMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UILabel__set_text((UILabel_o *)Master_object, v14, 0LL);
  Master_object = (GrandGraphMaster_o *)this->fields.grandScoreDisableMessageLabel;
  if ( !Master_object )
    goto LABEL_20;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectHelper__SetActiveSafely(v15, v11, 0LL);
}


void __fastcall GrandQuestRootComponent___Init_b__45_0(GrandQuestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestRootComponent__StartUp(this, (Il2CppObject *)this, v2);
}


GrandQuestClassBoardController_o *__fastcall GrandQuestRootComponent__get_ClassBoardController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classBoardController;
}


GrandQuestClassSelectController_o *__fastcall GrandQuestRootComponent__get_ClassSelectController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classSelectController;
}


UnityEngine_GameObject_o *__fastcall GrandQuestRootComponent__get_GrandQuest(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.grandQuestRoot;
}


GrandQuestBackground_o *__fastcall GrandQuestRootComponent__get_GrandQuestBackground(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.grandQuestBackground;
}


GrandQuestRootComponent_ResumeInfo_o *__fastcall GrandQuestRootComponent__get_GrandResumeInfo(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandResumeInfo_k__BackingField;
}


GrandQuestLevelSelectController_o *__fastcall GrandQuestRootComponent__get_LevelSelectController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.levelSelectController;
}


GrandQuestResourceCatalogAssetBundle_o *__fastcall GrandQuestRootComponent__get_ResourceCatalog(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.resourceCatalog;
}


GrandQuestSvtController_o *__fastcall GrandQuestRootComponent__get_SvtController(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.svtController;
}


ScrTerminalListTop_o *__fastcall GrandQuestRootComponent__get_TerminalList(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalListTop;
}


TerminalSceneComponent_o *__fastcall GrandQuestRootComponent__get_TerminalScene(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalScene;
}


GrandQuestViewSwitcher_o *__fastcall GrandQuestRootComponent__get_ViewSwitcher(
        GrandQuestRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.viewSwitcher;
}


void __fastcall GrandQuestRootComponent__set_GrandResumeInfo(
        GrandQuestRootComponent_o *this,
        GrandQuestRootComponent_ResumeInfo_o *value,
        const MethodInfo *method)
{
  this->fields._GrandResumeInfo_k__BackingField = value;
  sub_1BC2FAC(&this->fields._GrandResumeInfo_k__BackingField);
}


void __fastcall GrandQuestRootComponent_ResumeInfo___ctor(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestRootComponent_ResumeInfo__get_IsDirectTransitionToClassSelect(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDirectTransitionToClassSelect_k__BackingField;
}


bool __fastcall GrandQuestRootComponent_ResumeInfo__get_IsResume(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsResume_k__BackingField;
}


int32_t __fastcall GrandQuestRootComponent_ResumeInfo__get_QuestId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestId_k__BackingField;
}


int32_t __fastcall GrandQuestRootComponent_ResumeInfo__get_WarId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WarId_k__BackingField;
}


void __fastcall GrandQuestRootComponent_ResumeInfo__set_IsDirectTransitionToClassSelect(
        GrandQuestRootComponent_ResumeInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDirectTransitionToClassSelect_k__BackingField = value;
}


void __fastcall GrandQuestRootComponent_ResumeInfo__set_IsResume(
        GrandQuestRootComponent_ResumeInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsResume_k__BackingField = value;
}


void __fastcall GrandQuestRootComponent_ResumeInfo__set_QuestId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestId_k__BackingField = value;
}


void __fastcall GrandQuestRootComponent_ResumeInfo__set_WarId(
        GrandQuestRootComponent_ResumeInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._WarId_k__BackingField = value;
}