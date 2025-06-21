void __fastcall GrandQuestClassSelectController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct GrandQuestClassSelectController_StaticFields *static_fields; // x8

  if ( (byte_4B17313 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestClassSelectController_TypeInfo, v1);
    byte_4B17313 = 1;
  }
  static_fields = GrandQuestClassSelectController_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->UpdateInfoTimeInterval = 0x3F00000040400000LL;
  static_fields->EXIT_TIME = 0.25;
}


void __fastcall GrandQuestClassSelectController___ctor(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController__Awake(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_EventDelegate__o *typeHierarchy; // x20
  EventDelegate_Callback_o *v9; // x21
  void *monitor; // x8
  System_Collections_Generic_List_EventDelegate__o *v11; // x20
  EventDelegate_Callback_o *v12; // x21
  void *v13; // x8
  System_Collections_Generic_List_EventDelegate__o *v14; // x20
  EventDelegate_Callback_o *v15; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4B172F8 & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, method);
    sub_1BCAFF8(&EventDelegate_TypeInfo, v3);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController__Awake_b__42_0__, v4);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController__Awake_b__42_1__, v5);
    this = (GrandQuestClassSelectController_o *)sub_1BCAFF8(
                                                  &Method_GrandQuestClassSelectController__Awake_b__42_2__,
                                                  v6);
    byte_4B172F8 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_9;
  typeHierarchy = (System_Collections_Generic_List_EventDelegate__o *)klass->_2.typeHierarchy;
  v9 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, v2, Method_GrandQuestClassSelectController__Awake_b__42_0__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (GrandQuestClassSelectController_o *)EventDelegate__Add(typeHierarchy, v9, 0LL);
  monitor = v2[4].monitor;
  if ( !monitor
    || (v11 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)monitor + 25),
        v12 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v12, v2, Method_GrandQuestClassSelectController__Awake_b__42_1__, 0LL),
        this = (GrandQuestClassSelectController_o *)EventDelegate__Add(v11, v12, 0LL),
        (v13 = v2[7].monitor) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(this, method);
  }
  v14 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)v13 + 25);
  v15 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, v2, Method_GrandQuestClassSelectController__Awake_b__42_2__, 0LL);
  EventDelegate__Add(v14, v15, 0LL);
}


void __fastcall GrandQuestClassSelectController__ClearBoardList(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *folderBoardGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B17307 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B17307 = 1;
  }
  folderBoardGrid = (UnityEngine_Component_o *)this->fields.folderBoardGrid;
  if ( !folderBoardGrid )
    goto LABEL_16;
  folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardGrid, 0LL);
  if ( !folderBoardGrid )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardGrid, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      folderBoardGrid = (UnityEngine_Component_o *)this->fields.folderBoardGrid;
      if ( !folderBoardGrid )
        break;
      folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardGrid, 0LL);
      if ( !folderBoardGrid )
        break;
      folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)folderBoardGrid,
                                                     v5 - 2,
                                                     0LL);
      if ( !folderBoardGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(folderBoardGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1BCB254(folderBoardGrid, method);
  }
LABEL_13:
  folderBoardGrid = (UnityEngine_Component_o *)this->fields.folderBoardGrid;
  if ( !folderBoardGrid )
    goto LABEL_16;
  folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardGrid, 0LL);
  if ( !folderBoardGrid )
    goto LABEL_16;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)folderBoardGrid, 0LL);
}


System_Collections_IEnumerator_o *__fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4B172FA & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_TypeInfo, endCallback);
    byte_4B172FA = 1;
  }
  v5 = sub_1BCB244(GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C(v5 + 32);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1BCAF9C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall GrandQuestClassSelectController__CoWaitUntilCenterChildStart(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4B172FC & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_TypeInfo, endCallback);
    byte_4B172FC = 1;
  }
  v5 = sub_1BCB244(GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C(v5 + 32);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1BCAF9C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__CreateBoardList(
        GrandQuestClassSelectController_o *this,
        int32_t focusWarId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x20
  UnityEngine_Object_o *folderBoardGrid; // x20
  struct UIGrid_o **p_folderBoardGrid; // x23
  const MethodInfo *v28; // x1
  __int64 folderBoardScrollView; // x0
  struct UICenterOnChild_o **p_folderBoardCenterChild; // x20
  UnityEngine_Object_o *folderBoardCenterChild; // x21
  struct UICenterOnChild_o *v32; // x20
  _QWORD *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v35; // x22
  System_Delegate_o *v36; // x0
  System_Delegate_o *v37; // x8
  SpringPanel_OnFinished_c *v38; // x1
  struct UIScrollView_o *v39; // x20
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v41; // x22
  System_Delegate_o *v42; // x0
  UIScrollView_OnDragNotification_c *v43; // x1
  System_Collections_Generic_List_object__o *v44; // x25
  int32_t v45; // w26
  int32_t v46; // w24
  __int64 v47; // x28
  WarEntity_o *v48; // x20
  struct GrandQuestResourceCatalogAssetBundle_o *resourceAssetBundle; // x8
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  Il2CppObject *GrandQuestFolderBoardPrefab_k__BackingField; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v53; // x29
  UnityEngine_Transform_o *v54; // x22
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  const MethodInfo *v61; // x2
  BlankEarthSpotEntity_o *SpotEntityByWarId; // x0
  GrandQuestViewSwitcher_c *v63; // x8
  BlankEarthSpotEntity_o *v64; // x21
  int32_t DefaultGrandClassIconId; // w22
  int32_t v66; // w21
  int32_t bannerId; // w23
  int32_t v68; // w25
  System_String_o *PrioredName; // x27
  __int64 v70; // x20
  struct GrandQuestResourceCatalogAssetBundle_o *v71; // x8
  struct GrandQuestResourceContents_o *v72; // x8
  AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x21
  System_Action_o *v74; // x22
  const MethodInfo *v75; // x4
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x2
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x8
  System_Collections_Generic_List_object__o *v79; // [xsp+0h] [xbp-90h]
  int64_t Time; // [xsp+10h] [xbp-80h]
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o **p_folderBoardList; // [xsp+20h] [xbp-70h]
  int32_t warId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B172FE & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&focusWarId);
    sub_1BCAFF8(&Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_UIGrid___, v6);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__, v7);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController_OnDragStarted__, v8);
    sub_1BCAFF8(&GrandQuestFolderBoardItem_TypeInfo, v9);
    sub_1BCAFF8(&GrandQuestViewSwitcher_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__, v16);
    sub_1BCAFF8(&System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo, v17);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v19);
    sub_1BCAFF8(&UIScrollView_OnDragNotification_TypeInfo, v20);
    sub_1BCAFF8(&SpringPanel_OnFinished_TypeInfo, v21);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass51_0__CreateBoardList_b__0__, v22);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass51_0_TypeInfo, v23);
    sub_1BCAFF8(&StringLiteral_17183/*"board_"*/, v24);
    byte_4B172FE = 1;
  }
  warId = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__);
  this->fields.folderBoardList = (struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *)v25;
  p_folderBoardList = &this->fields.folderBoardList;
  sub_1BCAF9C(&this->fields.folderBoardList);
  p_folderBoardGrid = &this->fields.folderBoardGrid;
  folderBoardGrid = (UnityEngine_Object_o *)this->fields.folderBoardGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(folderBoardGrid, 0LL, 0LL) )
  {
    folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
    if ( !folderBoardScrollView )
      goto LABEL_78;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0LL);
    if ( !folderBoardScrollView )
      goto LABEL_78;
    *p_folderBoardGrid = (struct UIGrid_o *)UnityEngine_GameObject__AddComponent_object_(
                                              (UnityEngine_GameObject_o *)folderBoardScrollView,
                                              (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_UIGrid___);
    sub_1BCAF9C(&this->fields.folderBoardGrid);
  }
  p_folderBoardCenterChild = &this->fields.folderBoardCenterChild;
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(folderBoardCenterChild, 0LL, 0LL) )
  {
    folderBoardScrollView = (__int64)*p_folderBoardGrid;
    if ( !*p_folderBoardGrid )
      goto LABEL_78;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0LL);
    if ( !folderBoardScrollView )
      goto LABEL_78;
    *p_folderBoardCenterChild = (struct UICenterOnChild_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)folderBoardScrollView,
                                                              (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1BCAF9C(&this->fields.folderBoardCenterChild);
  }
  folderBoardScrollView = (__int64)*p_folderBoardCenterChild;
  if ( !*p_folderBoardCenterChild )
    goto LABEL_78;
  *(_QWORD *)(folderBoardScrollView + 40) = 0LL;
  folderBoardScrollView = sub_1BCAF9C(folderBoardScrollView + 40);
  v32 = *p_folderBoardCenterChild;
  if ( !v32 )
    goto LABEL_78;
  onFinished = (System_Delegate_o *)v32->fields.onFinished;
  p_onFinished = &v32->fields.onFinished;
  v35 = (SpringPanel_OnFinished_o *)sub_1BCB244(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(
    v35,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__,
    0LL);
  v36 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v35, 0LL);
  v37 = v36;
  if ( v36 )
  {
    v38 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v36->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_29;
    *p_onFinished = v36;
    if ( (SpringPanel_OnFinished_c *)v36->klass != v38 )
      goto LABEL_29;
  }
  else
  {
    *p_onFinished = 0LL;
  }
  sub_1BCAF9C(p_onFinished);
  folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
  if ( !folderBoardScrollView )
    goto LABEL_78;
  *(_QWORD *)(folderBoardScrollView + 88) = 0LL;
  folderBoardScrollView = sub_1BCAF9C(folderBoardScrollView + 88);
  v39 = this->fields.folderBoardScrollView;
  if ( !v39 )
    goto LABEL_78;
  onDragStarted = (System_Delegate_o *)v39->fields.onDragStarted;
  p_onFinished = &v39->fields.onDragStarted;
  v41 = (UIScrollView_OnDragNotification_o *)sub_1BCB244(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v41,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnDragStarted__,
    0LL);
  v42 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v41, 0LL);
  v37 = v42;
  if ( !v42 )
    goto LABEL_30;
  v43 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v42->klass != UIScrollView_OnDragNotification_TypeInfo
    || (*p_onFinished = v42, (UIScrollView_OnDragNotification_c *)v42->klass != v43) )
  {
LABEL_29:
    sub_1BCB514(v37);
LABEL_30:
    *p_onFinished = v37;
  }
  folderBoardScrollView = sub_1BCAF9C(p_onFinished);
  if ( !this->fields.rootComponent )
    goto LABEL_78;
  folderBoardScrollView = (__int64)GrandQuestRootComponent__GetGrandWarInfoList(
                                     (GrandQuestRootComponent_o *)folderBoardScrollView,
                                     v28);
  if ( !folderBoardScrollView )
    goto LABEL_78;
  v44 = (System_Collections_Generic_List_object__o *)folderBoardScrollView;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    v45 = 0;
    v46 = 0;
    v79 = (System_Collections_Generic_List_object__o *)folderBoardScrollView;
    while ( 1 )
    {
      v47 = sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass51_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v47, 0LL);
      if ( !v47 )
        goto LABEL_78;
      *(_QWORD *)(v47 + 24) = this;
      sub_1BCAF9C(v47 + 24);
      folderBoardScrollView = (__int64)System_Collections_Generic_List_object___get_Item(
                                         v44,
                                         v45,
                                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__);
      if ( !folderBoardScrollView )
        goto LABEL_78;
      folderBoardScrollView = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)folderBoardScrollView, 0LL);
      if ( !folderBoardScrollView )
        goto LABEL_78;
      v48 = (WarEntity_o *)folderBoardScrollView;
      warId = *(_DWORD *)(folderBoardScrollView + 16);
      resourceAssetBundle = this->fields.resourceAssetBundle;
      if ( !resourceAssetBundle )
        goto LABEL_78;
      Contents_k__BackingField = resourceAssetBundle->fields._Contents_k__BackingField;
      if ( !Contents_k__BackingField )
        goto LABEL_78;
      folderBoardScrollView = (__int64)*p_folderBoardGrid;
      if ( !*p_folderBoardGrid )
        goto LABEL_78;
      GrandQuestFolderBoardPrefab_k__BackingField = (Il2CppObject *)Contents_k__BackingField->fields._GrandQuestFolderBoardPrefab_k__BackingField;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardScrollView, 0LL);
      folderBoardScrollView = (__int64)BaseMonoBehaviour__createObject_object_(
                                         (BaseMonoBehaviour_o *)this,
                                         GrandQuestFolderBoardPrefab_k__BackingField,
                                         transform,
                                         0LL,
                                         (const MethodInfo_30037F4 *)Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___);
      if ( !folderBoardScrollView )
        goto LABEL_78;
      v53 = (UnityEngine_Object_o *)folderBoardScrollView;
      folderBoardScrollView = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)folderBoardScrollView,
                                         0LL);
      v54 = (UnityEngine_Transform_o *)folderBoardScrollView;
      if ( !byte_4B16196 )
      {
        folderBoardScrollView = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v28);
        byte_4B16196 = 1;
      }
      if ( !v54 )
        goto LABEL_78;
      UnityEngine_Transform__set_localScale(v54, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      folderBoardScrollView = (__int64)*p_folderBoardGrid;
      if ( !*p_folderBoardGrid )
        goto LABEL_78;
      folderBoardScrollView = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)folderBoardScrollView,
                                         0LL);
      if ( !folderBoardScrollView )
        goto LABEL_78;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)folderBoardScrollView, 0LL);
      UnityEngine_Transform__set_localPosition(v54, localPosition, 0LL);
      v55 = System_Int32__ToString((int32_t)&warId, 0LL);
      v56 = System_String__Concat_62450424((System_String_o *)StringLiteral_17183/*"board_"*/, v55, 0LL);
      UnityEngine_Object__set_name(v53, v56, 0LL);
      folderBoardScrollView = (__int64)*p_folderBoardList;
      if ( !*p_folderBoardList )
        goto LABEL_78;
      v57 = *(_QWORD *)(folderBoardScrollView + 16);
      v58 = Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__;
      ++*(_DWORD *)(folderBoardScrollView + 28);
      if ( !v57 )
        goto LABEL_78;
      v59 = *(int *)(folderBoardScrollView + 24);
      if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)folderBoardScrollView,
          (Il2CppObject *)v53,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = v57 + 8 * v59;
        *(_DWORD *)(folderBoardScrollView + 24) = v59 + 1;
        *(_QWORD *)(v60 + 32) = v53;
        folderBoardScrollView = sub_1BCAF9C(v60 + 32);
      }
      v28 = (const MethodInfo *)(unsigned int)warId;
      *(_DWORD *)(v47 + 16) = v45;
      if ( (_DWORD)v28 == focusWarId )
        v46 = v45;
      if ( !this->fields.rootComponent )
        goto LABEL_78;
      SpotEntityByWarId = GrandQuestRootComponent__GetSpotEntityByWarId(
                            (GrandQuestRootComponent_o *)folderBoardScrollView,
                            (int32_t)v28,
                            v61);
      v63 = GrandQuestViewSwitcher_TypeInfo;
      v64 = SpotEntityByWarId;
      if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
        v63 = GrandQuestViewSwitcher_TypeInfo;
      }
      DefaultGrandClassIconId = v63->static_fields->DefaultGrandClassIconId;
      if ( v64 && BlankEarthSpotEntity__GetGrandClassIconId(v64, -1, 0LL) >= 1 )
        DefaultGrandClassIconId = BlankEarthSpotEntity__GetGrandClassIconId(v64, -1, 0LL);
      v66 = *(_DWORD *)(v47 + 16);
      bannerId = v48->fields.bannerId;
      v68 = warId;
      PrioredName = WarEntity__GetPrioredName(v48, 0LL);
      v70 = sub_1BCB244(GrandQuestFolderBoardItem_TypeInfo);
      ListViewItem___ctor_42932312((ListViewItem_o *)v70, v66, 0LL);
      *(_DWORD *)(v70 + 112) = bannerId;
      *(_DWORD *)(v70 + 116) = v68;
      *(_QWORD *)(v70 + 120) = PrioredName;
      folderBoardScrollView = sub_1BCAF9C(v70 + 120);
      *(_DWORD *)(v70 + 128) = DefaultGrandClassIconId;
      *(_QWORD *)(v70 + 136) = Time;
      v71 = this->fields.resourceAssetBundle;
      if ( !v71 )
        goto LABEL_78;
      v72 = v71->fields._Contents_k__BackingField;
      v44 = v79;
      p_folderBoardGrid = &this->fields.folderBoardGrid;
      if ( !v72 )
        goto LABEL_78;
      BoardUiAtlasManagerUnit_k__BackingField = v72->fields._BoardUiAtlasManagerUnit_k__BackingField;
      v74 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v74,
        (Il2CppObject *)v47,
        Method_GrandQuestClassSelectController___c__DisplayClass51_0__CreateBoardList_b__0__,
        0LL);
      GrandQuestFolderBoardComponent__SetBoardInfo(
        (GrandQuestFolderBoardComponent_o *)v53,
        (GrandQuestFolderBoardItem_o *)v70,
        BoardUiAtlasManagerUnit_k__BackingField,
        v74,
        v75);
      if ( ++v45 >= v79->fields._size )
        goto LABEL_65;
    }
  }
  v46 = 0;
LABEL_65:
  folderBoardScrollView = (__int64)*p_folderBoardGrid;
  if ( !*p_folderBoardGrid )
    goto LABEL_78;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)folderBoardScrollView + 440LL))(
    folderBoardScrollView,
    *(_QWORD *)(*(_QWORD *)folderBoardScrollView + 448LL));
  folderBoardScrollView = (__int64)*p_folderBoardList;
  if ( !*p_folderBoardList )
    goto LABEL_78;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    this->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                                   (System_Collections_Generic_List_object__o *)folderBoardScrollView,
                                                                                   v46,
                                                                                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    sub_1BCAF9C(&this->fields.currentFolderBoard);
    GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v76);
    GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 1, v77);
  }
  folderBoardScrollView = (__int64)this->fields.upArrowBtn;
  if ( !folderBoardScrollView
    || (folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)folderBoardScrollView,
                                           0LL),
        !*p_folderBoardList)
    || !folderBoardScrollView
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)folderBoardScrollView,
          (*p_folderBoardList)->fields._size > 1,
          0LL),
        (folderBoardScrollView = (__int64)this->fields.downArrowBtn) == 0)
    || (folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)folderBoardScrollView,
                                           0LL),
        !*p_folderBoardList)
    || !folderBoardScrollView
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)folderBoardScrollView,
          (*p_folderBoardList)->fields._size > 1,
          0LL),
        (folderBoardList = this->fields.folderBoardList) == 0LL)
    || (folderBoardScrollView = (__int64)this->fields.folderBoardScrollView) == 0 )
  {
LABEL_78:
    sub_1BCB254(folderBoardScrollView, v28);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)folderBoardScrollView,
    folderBoardList->fields._size > 1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
GrandQuestFolderBoardComponent_o *__fastcall GrandQuestClassSelectController__GetFolderBoardByWarId(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B17305 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___, *(_QWORD *)&warId);
    sub_1BCAFF8(&System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass61_0__GetFolderBoardByWarId_b__0__, v6);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass61_0_TypeInfo, v7);
    byte_4B17305 = 1;
  }
  v8 = sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_DWORD *)(v8 + 16) = warId;
  folderBoardList = this->fields.folderBoardList;
  v12 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass61_0__GetFolderBoardByWarId_b__0__,
    0LL);
  return (GrandQuestFolderBoardComponent_o *)System_Linq_Enumerable__Single_object__50674912(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)folderBoardList,
                                               (System_Func_TSource__bool__o *)v12,
                                               (const MethodInfo_3053CE0 *)Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___);
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall GrandQuestClassSelectController__GetTaskOfChangeClassTab(
        GrandQuestClassSelectController_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_bool__o *v13; // x20
  SchedulerTaskWaitWhile_o *v14; // x19
  SchedulerTaskBase_TaskCallback_o *v15; // x20

  if ( (byte_4B1730D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, *(_QWORD *)&classId);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass69_0__GetTaskOfChangeClassTab_b__0__, v7);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass69_0__GetTaskOfChangeClassTab_b__1__, v8);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass69_0_TypeInfo, v9);
    byte_4B1730D = 1;
  }
  v10 = sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 24) = this;
  sub_1BCAF9C(v10 + 24);
  *(_DWORD *)(v10 + 32) = classId;
  *(_BYTE *)(v10 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_GrandQuestClassSelectController___c__DisplayClass69_0__GetTaskOfChangeClassTab_b__0__,
    0LL);
  v14 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v14, v13, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_GrandQuestClassSelectController___c__DisplayClass69_0__GetTaskOfChangeClassTab_b__1__,
    0LL);
  if ( !v14 )
LABEL_6:
    sub_1BCB254(v11, v12);
  v14->fields.StartCallback = v15;
  sub_1BCAF9C(&v14->fields.StartCallback);
  return (SchedulerTaskBase_o *)v14;
}


SchedulerTaskBase_o *__fastcall GrandQuestClassSelectController__GetTaskOfRelease(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_bool__o *v11; // x21
  SchedulerTaskWaitWhile_o *v12; // x19
  SchedulerTaskBase_TaskCallback_o *v13; // x21

  if ( (byte_4B17309 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v3);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v4);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass65_0__GetTaskOfRelease_b__0__, v5);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass65_0__GetTaskOfRelease_b__1__, v6);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass65_0_TypeInfo, v7);
    byte_4B17309 = 1;
  }
  v8 = sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_6;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BCAF9C(v8 + 24);
  *(_BYTE *)(v8 + 16) = 1;
  v11 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass65_0__GetTaskOfRelease_b__0__,
    0LL);
  v12 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v12, v11, 0LL);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass65_0__GetTaskOfRelease_b__1__,
    0LL);
  if ( !v12 )
LABEL_6:
    sub_1BCB254(v9, v10);
  v12->fields.StartCallback = v13;
  sub_1BCAF9C(&v12->fields.StartCallback);
  return (SchedulerTaskBase_o *)v12;
}


SchedulerTaskBase_o *__fastcall GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_bool__o *v11; // x21
  SchedulerTaskWaitWhile_o *v12; // x19
  SchedulerTaskBase_TaskCallback_o *v13; // x21

  if ( (byte_4B1730B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v3);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v4);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass67_0__GetTaskOfSlideInClassTab_b__0__, v5);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass67_0__GetTaskOfSlideInClassTab_b__1__, v6);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass67_0_TypeInfo, v7);
    byte_4B1730B = 1;
  }
  v8 = sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_6;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BCAF9C(v8 + 24);
  *(_BYTE *)(v8 + 16) = 1;
  v11 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass67_0__GetTaskOfSlideInClassTab_b__0__,
    0LL);
  v12 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v12, v11, 0LL);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass67_0__GetTaskOfSlideInClassTab_b__1__,
    0LL);
  if ( !v12 )
LABEL_6:
    sub_1BCB254(v9, v10);
  v12->fields.StartCallback = v13;
  sub_1BCAF9C(&v12->fields.StartCallback);
  return (SchedulerTaskBase_o *)v12;
}


void __fastcall GrandQuestClassSelectController__Init(
        GrandQuestClassSelectController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        GrandQuestResourceCatalogAssetBundle_o *resourceCatalog,
        System_Action_bool__o *setTouchBlockAct,
        System_Action_int__o *selectClassAct,
        System_Action_int__o *changeClassAct,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v7; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  struct UISprite_o *selectClassSprite; // x8

  v7 = this;
  this->fields.rootComponent = grandQuestRoot;
  sub_1BCAF9C(&this->fields.rootComponent);
  v7->fields.setTouchBlockAction = setTouchBlockAct;
  sub_1BCAF9C(&v7->fields.setTouchBlockAction);
  v7->fields.selectClassAction = selectClassAct;
  sub_1BCAF9C(&v7->fields.selectClassAction);
  v7->fields.changeClassAction = changeClassAct;
  sub_1BCAF9C(&v7->fields.changeClassAction);
  v7->fields.resourceAssetBundle = resourceCatalog;
  v7 = (GrandQuestClassSelectController_o *)((char *)v7 + 168);
  v12 = sub_1BCAF9C(v7);
  selectClassSprite = v7[-1].fields.selectClassSprite;
  LOBYTE(v7->fields.upArrowBtn) = 0;
  if ( !selectClassSprite )
    sub_1BCB254(v12, v13);
  LODWORD(selectClassSprite->fields.leftAnchor) = 1106247680;
}


void __fastcall GrandQuestClassSelectController__OnCenterOnChildFinishedFolderBoard(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v2; // x19
  __int64 v3; // x1
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  GrandQuestClassSelectController_o *v5; // x20
  int32_t selectButtonOptionInfoLb; // w22
  System_Action_o *initBoardCenterCallback; // x0
  _BOOL4 v8; // w23
  _BOOL4 v9; // w8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct System_Action_bool__o *setTouchBlockAction; // x8
  int32_t currentMoveIdx; // w8
  const MethodInfo *v14; // x2
  UICenterOnChild_o *v15; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  struct System_Action_int__o *changeClassAction; // x20
  struct UIButton_o *selectClassButton; // x8
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct UICenterOnChild_o *v22; // x8

  v2 = this;
  if ( (byte_4B172FF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___, method);
    this = (GrandQuestClassSelectController_o *)sub_1BCAFF8(
                                                  &Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___,
                                                  v3);
    byte_4B172FF = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild )
    goto LABEL_34;
  this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_34;
  this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
  if ( !this )
    goto LABEL_34;
  v5 = this;
  selectButtonOptionInfoLb = (int32_t)this->fields.selectButtonOptionInfoLb;
  initBoardCenterCallback = v2->fields.initBoardCenterCallback;
  if ( initBoardCenterCallback )
    v8 = 1;
  else
    v8 = v2->fields.currentState == 0;
  ActionExtensions__Call(initBoardCenterCallback, 0LL);
  v2->fields.initBoardCenterCallback = 0LL;
  this = (GrandQuestClassSelectController_o *)sub_1BCAF9C(&v2->fields.initBoardCenterCallback);
  v9 = !v2->fields.isDragging && selectButtonOptionInfoLb == v2->fields.currentMoveIdx;
  if ( !v9 && !v8 )
  {
    rootComponent = v2->fields.rootComponent;
    if ( rootComponent )
    {
      mTerminalScene = rootComponent->fields.mTerminalScene;
      if ( mTerminalScene )
      {
        this = (GrandQuestClassSelectController_o *)mTerminalScene->fields.mTitleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
          MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
          setTouchBlockAction = v2->fields.setTouchBlockAction;
          if ( setTouchBlockAction )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))setTouchBlockAction->fields.m_target)(
              setTouchBlockAction->fields.original_method_info,
              0LL,
              *(_QWORD *)&setTouchBlockAction->fields.extra_arg);
          currentMoveIdx = v2->fields.currentMoveIdx;
          v2->fields.isDragging = 0;
          v2->fields.isMovePositiveIndex = currentMoveIdx < selectButtonOptionInfoLb;
          v2->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)v5;
          sub_1BCAF9C(&v2->fields.currentFolderBoard);
          v2->fields.currentMoveIdx = selectButtonOptionInfoLb;
          GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(v2, 1, v14);
          this = (GrandQuestClassSelectController_o *)v2->fields.folderBoardGrid;
          if ( this )
          {
            v15 = v2->fields.folderBoardCenterChild;
            this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
            if ( this )
            {
              this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__GetChild(
                                                            (UnityEngine_Transform_o *)this,
                                                            v2->fields.currentMoveIdx,
                                                            0LL);
              if ( v15 )
              {
                UICenterOnChild__CenterOn_48341632(v15, (UnityEngine_Transform_o *)this, 1, 0LL);
                GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(v2, v16);
                this = (GrandQuestClassSelectController_o *)v2->fields.selectClassButton;
                if ( this )
                {
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
                  this = (GrandQuestClassSelectController_o *)v2->fields.rootComponent;
                  if ( this )
                  {
                    GrandQuestRootComponent__SetButtonEnabled((GrandQuestRootComponent_o *)this, 1, v17);
                    if ( !v2->fields.onClickMove )
                    {
                      this = (GrandQuestClassSelectController_o *)v2->fields.folderBoardGrid;
                      if ( !this )
                        goto LABEL_34;
                      changeClassAction = v2->fields.changeClassAction;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
                      if ( !this )
                        goto LABEL_34;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__GetChild(
                                                                    (UnityEngine_Transform_o *)this,
                                                                    v2->fields.currentMoveIdx,
                                                                    0LL);
                      if ( !this )
                        goto LABEL_34;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
                      if ( !this )
                        goto LABEL_34;
                      selectClassButton = this->fields.selectClassButton;
                      if ( !selectClassButton || !changeClassAction )
                        goto LABEL_34;
                      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))changeClassAction->fields.m_target)(
                        changeClassAction->fields.original_method_info,
                        LODWORD(selectClassButton->fields.mDefaultColor.fields.b),
                        *(_QWORD *)&changeClassAction->fields.extra_arg);
                      GrandQuestClassSelectController__RefreshUpDownChangeBoardDisplay(
                        v2,
                        v2->fields.currentMoveIdx,
                        v20);
                      GrandQuestClassSelectController__RefreshBoardListMaskDisplay(v2, v2->fields.currentMoveIdx, v21);
                    }
                    v22 = v2->fields.folderBoardCenterChild;
                    v2->fields.onClickMove = 0;
                    if ( v22 )
                    {
                      v22->fields.springStrength = 30.0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCB254(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__OnClickBoard(
        GrandQuestClassSelectController_o *this,
        int32_t moveIdx,
        bool isPlaySe,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4B17303 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandQuestClassSelectController_OnClickBoard__, *(_QWORD *)&moveIdx);
    byte_4B17303 = 1;
  }
  if ( !this->fields.isTouchBoard && this->fields.currentMoveIdx != moveIdx )
  {
    if ( isPlaySe )
    {
      v7 = Method_GrandQuestClassSelectController_OnClickBoard__;
      if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickBoard__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCB010(Method_GrandQuestClassSelectController_OnClickBoard__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0LL);
    }
    this->fields.isDragging = 1;
    GrandQuestClassSelectController__OnMoveBoardByClick(this, moveIdx, (const MethodInfo *)isPlaySe);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__OnClickChallengeButton(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Action_int__o *selectClassAction; // x8

  if ( (byte_4B17302 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandQuestClassSelectController_OnClickChallengeButton__, *(_QWORD *)&warId);
    byte_4B17302 = 1;
  }
  if ( this->fields.selectClassAction )
  {
    v5 = Method_GrandQuestClassSelectController_OnClickChallengeButton__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickChallengeButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_GrandQuestClassSelectController_OnClickChallengeButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    selectClassAction = this->fields.selectClassAction;
    this->fields.isTouchBoard = 1;
    if ( !selectClassAction )
      sub_1BCB254(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))selectClassAction->fields.m_target)(
      selectClassAction->fields.original_method_info,
      (unsigned int)warId,
      *(_QWORD *)&selectClassAction->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__OnClickUpDownChangeBoard(
        GrandQuestClassSelectController_o *this,
        bool isUp,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *folderBoardGrid; // x0
  int v9; // w20
  int32_t currentMoveIdx; // w21
  int v11; // w20
  const MethodInfo *v12; // x2
  int v13; // w8
  int32_t v14; // w1

  if ( (byte_4B17301 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__, isUp);
    byte_4B17301 = 1;
  }
  if ( !this->fields.isDragging )
  {
    v5 = Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0LL);
    folderBoardGrid = (UnityEngine_Component_o *)this->fields.folderBoardGrid;
    if ( isUp )
      v9 = -1;
    else
      v9 = 1;
    if ( !folderBoardGrid
      || (currentMoveIdx = this->fields.currentMoveIdx,
          (folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardGrid, 0LL)) == 0LL) )
    {
      sub_1BCB254(folderBoardGrid, v7);
    }
    v11 = currentMoveIdx + v9;
    v13 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardGrid, 0LL) - 1;
    if ( v11 <= v13 )
      v13 = v11;
    if ( v11 >= 0 )
      v14 = v13;
    else
      v14 = 0;
    GrandQuestClassSelectController__OnMoveBoardByClick(this, v14, v12);
  }
}


void __fastcall GrandQuestClassSelectController__OnDragStarted(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassSelectController_o *v4; // x19
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 0;
  if ( !folderBoardCenterChild )
    goto LABEL_9;
  folderBoardCenterChild->fields.springStrength = 30.0;
  rootComponent = this->fields.rootComponent;
  v4 = this;
  if ( !rootComponent )
    goto LABEL_9;
  mTerminalScene = rootComponent->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_9;
  this = (GrandQuestClassSelectController_o *)mTerminalScene->fields.mTitleInfo;
  if ( !this )
    goto LABEL_9;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  this = (GrandQuestClassSelectController_o *)v4->fields.folderBoardScrollView;
  if ( !this
    || (UIScrollView__DisableSpring((UIScrollView_o *)this, 0LL),
        v4->fields.isDragging = 1,
        GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(v4, 0, v6),
        (this = (GrandQuestClassSelectController_o *)v4->fields.selectClassButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (GrandQuestClassSelectController_o *)v4->fields.rootComponent) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(this, method);
  }
  GrandQuestRootComponent__SetButtonEnabled((GrandQuestRootComponent_o *)this, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__OnMoveBoardByClick(
        GrandQuestClassSelectController_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *upArrowBtn; // x0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  const MethodInfo *v9; // x2
  struct System_Action_bool__o *setTouchBlockAction; // x8
  const MethodInfo *v11; // x2
  UnityEngine_Transform_o *v12; // x20
  struct GrandQuestFolderBoardComponent_o *Component_object; // x21
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  struct GrandQuestFolderBoardItem_o *boardInfo; // x8
  struct System_Action_int__o *changeClassAction; // x9
  const MethodInfo *v17; // x1

  if ( (byte_4B17304 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___, *(_QWORD *)&moveIndex);
    byte_4B17304 = 1;
  }
  GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 0, method);
  upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.upArrowBtn;
  if ( !upArrowBtn )
    goto LABEL_19;
  UnityEngine_Behaviour__set_enabled(upArrowBtn, 0, 0LL);
  upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.downArrowBtn;
  if ( !upArrowBtn )
    goto LABEL_19;
  UnityEngine_Behaviour__set_enabled(upArrowBtn, 0, 0LL);
  rootComponent = this->fields.rootComponent;
  this->fields.isMovePositiveIndex = this->fields.currentMoveIdx < moveIndex;
  if ( !rootComponent )
    goto LABEL_19;
  mTerminalScene = rootComponent->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_19;
  upArrowBtn = (UnityEngine_Behaviour_o *)mTerminalScene->fields.mTitleInfo;
  if ( !upArrowBtn )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)upArrowBtn, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  setTouchBlockAction = this->fields.setTouchBlockAction;
  if ( setTouchBlockAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))setTouchBlockAction->fields.m_target)(
      setTouchBlockAction->fields.original_method_info,
      1LL,
      *(_QWORD *)&setTouchBlockAction->fields.extra_arg);
  GrandQuestClassSelectController__RefreshUpDownChangeBoardDisplay(this, moveIndex, v9);
  GrandQuestClassSelectController__RefreshBoardListMaskDisplay(this, moveIndex, v11);
  upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.folderBoardGrid;
  if ( !upArrowBtn )
    goto LABEL_19;
  upArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)upArrowBtn,
                                            0LL);
  if ( !upArrowBtn )
    goto LABEL_19;
  upArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                            (UnityEngine_Transform_o *)upArrowBtn,
                                            moveIndex,
                                            0LL);
  if ( !upArrowBtn )
    goto LABEL_19;
  v12 = (UnityEngine_Transform_o *)upArrowBtn;
  Component_object = (struct GrandQuestFolderBoardComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)upArrowBtn,
                                                                  (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
  this->fields.currentFolderBoard = Component_object;
  upArrowBtn = (UnityEngine_Behaviour_o *)sub_1BCAF9C(&this->fields.currentFolderBoard);
  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 1;
  if ( !folderBoardCenterChild
    || (folderBoardCenterChild->fields.springStrength = 6.0, !Component_object)
    || (boardInfo = Component_object->fields.boardInfo) == 0LL
    || (changeClassAction = this->fields.changeClassAction) == 0LL
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))changeClassAction->fields.m_target)(
          changeClassAction->fields.original_method_info,
          (unsigned int)boardInfo->fields._WarId_k__BackingField,
          *(_QWORD *)&changeClassAction->fields.extra_arg),
        GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v17),
        (upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.folderBoardCenterChild) == 0LL) )
  {
LABEL_19:
    sub_1BCB254(upArrowBtn, v5);
  }
  UICenterOnChild__CenterOn_48341632((UICenterOnChild_o *)upArrowBtn, v12, 1, 0LL);
}


void __fastcall GrandQuestClassSelectController__Quit(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *folderBoardPanel; // x0
  UnityEngine_Transform_o *v4; // x20
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4B17308 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Clear__, method);
    byte_4B17308 = 1;
  }
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    goto LABEL_11;
  folderBoardPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(folderBoardPanel, 0LL);
  v4 = (UnityEngine_Transform_o *)folderBoardPanel;
  if ( !byte_4B16191 )
  {
    folderBoardPanel = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16191 = 1;
  }
  if ( !v4 )
LABEL_11:
    sub_1BCB254(folderBoardPanel, method);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  GrandQuestClassSelectController__ClearBoardList(this, v5);
  folderBoardList = this->fields.folderBoardList;
  this->fields.currentState = 0;
  if ( folderBoardList )
  {
    size = folderBoardList->fields._size;
    v8 = folderBoardList->fields._version + 1;
    folderBoardList->fields._size = 0;
    folderBoardList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)folderBoardList->fields._items, 0, size, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__RefreshBoardListMaskDisplay(
        GrandQuestClassSelectController_o *this,
        int32_t selectedBoardIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B17300 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__,
      *(_QWORD *)&selectedBoardIndex);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__, v7);
    byte_4B17300 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( !folderBoardList )
    sub_1BCB254(0LL, *(_QWORD *)&selectedBoardIndex);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    folderBoardList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    if ( !v9 )
      break;
    if ( !v11.fields._current )
      sub_1BCB254(v9, v10);
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)v11.fields._current[5].monitor,
      LODWORD(v11.fields._current[8].monitor) != selectedBoardIndex,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__RefreshUpDownChangeBoardDisplay(
        GrandQuestClassSelectController_o *this,
        int32_t boardIndex,
        const MethodInfo *method)
{
  ScrollArrowComponent_o *upArrowComponent; // x0
  ScrollArrowComponent_o *downArrowComponent; // x21
  UnityEngine_Behaviour_o *downArrowBtn; // x20

  upArrowComponent = this->fields.upArrowComponent;
  if ( !upArrowComponent )
    goto LABEL_10;
  ScrollArrowComponent__SetDisp(upArrowComponent, boardIndex > 0, 0, 0LL);
  upArrowComponent = (ScrollArrowComponent_o *)this->fields.folderBoardGrid;
  if ( !upArrowComponent )
    goto LABEL_10;
  downArrowComponent = this->fields.downArrowComponent;
  upArrowComponent = (ScrollArrowComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)upArrowComponent,
                                                 0LL);
  if ( !upArrowComponent )
    goto LABEL_10;
  upArrowComponent = (ScrollArrowComponent_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)upArrowComponent,
                                                 0LL);
  if ( !downArrowComponent
    || (ScrollArrowComponent__SetDisp(downArrowComponent, (int)upArrowComponent - 1 > boardIndex, 0, 0LL),
        (upArrowComponent = (ScrollArrowComponent_o *)this->fields.upArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)upArrowComponent, boardIndex > 0, 0LL),
        (upArrowComponent = (ScrollArrowComponent_o *)this->fields.folderBoardGrid) == 0LL)
    || (downArrowBtn = (UnityEngine_Behaviour_o *)this->fields.downArrowBtn,
        (upArrowComponent = (ScrollArrowComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)upArrowComponent,
                                                        0LL)) == 0LL)
    || (upArrowComponent = (ScrollArrowComponent_o *)UnityEngine_Transform__get_childCount(
                                                       (UnityEngine_Transform_o *)upArrowComponent,
                                                       0LL),
        !downArrowBtn) )
  {
LABEL_10:
    sub_1BCB254(upArrowComponent, *(_QWORD *)&boardIndex);
  }
  UnityEngine_Behaviour__set_enabled(downArrowBtn, (int)upArrowComponent - 1 > boardIndex, 0LL);
}


void __fastcall GrandQuestClassSelectController__Release(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *folderBoardPanel; // x0
  __int64 v13; // x1
  System_Action_o **p_monitor; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x20
  float v17; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  SlideFadeObject_o *v20; // x19
  float OutPosOffsetX; // s9
  float EXIT_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_4B1730A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_1BCAFF8(&GrandQuestClassSelectController_TypeInfo, v8);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass66_0__Release_b__0__, v9);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass66_0_TypeInfo, v10);
    byte_4B1730A = 1;
  }
  v11 = (Il2CppObject *)sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v11[1]);
  v11[1].monitor = callback;
  p_monitor = (System_Action_o **)&v11[1].monitor;
  sub_1BCAF9C(&v11[1].monitor);
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    goto LABEL_13;
  if ( !isQuick )
  {
    gameObject = UnityEngine_GameObject__get_gameObject(folderBoardPanel, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    v20 = (SlideFadeObject_o *)Component_object;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
    OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)Component_object);
    EXIT_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->EXIT_TIME;
    v23 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v23, v11, Method_GrandQuestClassSelectController___c__DisplayClass66_0__Release_b__0__, 0LL);
    if ( v20 )
    {
      SlideFadeObject__SlideOut_35373228(v20, OutPosOffsetX, EXIT_TIME, 0.0, v23, 0LL);
      return;
    }
LABEL_13:
    sub_1BCB254(folderBoardPanel, v13);
  }
  transform = UnityEngine_GameObject__get_transform(folderBoardPanel, 0LL);
  v16 = transform;
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
  v17 = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)transform);
  TransformHelper__SetLocalPositionX(v16, v17, 0LL);
  this->fields.currentState = 1;
  ActionExtensions__Call(*p_monitor, 0LL);
}


void __fastcall GrandQuestClassSelectController__ResetOnClickMoveParam(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 0;
  if ( !folderBoardCenterChild )
    sub_1BCB254(this, method);
  folderBoardCenterChild->fields.springStrength = 30.0;
}


void __fastcall GrandQuestClassSelectController__SetActiveSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  bool v4; // w20

  v4 = isActive;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoLb, isActive, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoFrameSp, v4, 0LL);
}


void __fastcall GrandQuestClassSelectController__SetBoardCenter(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *folderBoardGrid; // x0
  Il2CppObject *Component_object; // x21
  UICenterOnChild_o *folderBoardCenterChild; // x20

  if ( (byte_4B17306 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_FixedSpringPanel___, callback);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B17306 = 1;
  }
  folderBoardGrid = (UnityEngine_Component_o *)this->fields.folderBoardGrid;
  if ( !folderBoardGrid )
    goto LABEL_15;
  folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardGrid, 0LL);
  if ( !folderBoardGrid )
    goto LABEL_15;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardGrid, 0LL) >= 1 )
  {
    folderBoardGrid = (UnityEngine_Component_o *)this->fields.folderBoardScrollView;
    if ( !folderBoardGrid )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         folderBoardGrid,
                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_FixedSpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      this->fields.initBoardCenterCallback = callback;
      sub_1BCAF9C(&this->fields.initBoardCenterCallback);
      folderBoardGrid = (UnityEngine_Component_o *)this->fields.folderBoardGrid;
      if ( folderBoardGrid )
      {
        folderBoardCenterChild = this->fields.folderBoardCenterChild;
        folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardGrid, 0LL);
        if ( folderBoardGrid )
        {
          folderBoardGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)folderBoardGrid,
                                                         this->fields.currentMoveIdx,
                                                         0LL);
          if ( folderBoardCenterChild )
          {
            UICenterOnChild__CenterOn_48341632(
              folderBoardCenterChild,
              (UnityEngine_Transform_o *)folderBoardGrid,
              1,
              0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_1BCB254(folderBoardGrid, callback);
    }
  }
  ActionExtensions__Call(callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__SetButtonActive(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectClassButton; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
  if ( !selectClassButton )
    goto LABEL_8;
  selectClassButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0LL);
  if ( !selectClassButton )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectClassButton, isActive, 0LL);
  if ( isActive )
  {
    GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v6);
  }
  else
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoLb, 0, 0LL);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoFrameSp, 0, 0LL);
  }
  selectClassButton = (UnityEngine_Component_o *)this->fields.rootComponent;
  if ( !selectClassButton )
LABEL_8:
    sub_1BCB254(selectClassButton, isActive);
  GrandQuestRootComponent__SetButtonActive((GrandQuestRootComponent_o *)selectClassButton, isActive, v7);
}


void __fastcall GrandQuestClassSelectController__SetClassTab(
        GrandQuestClassSelectController_o *this,
        int32_t classId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *folderBoardPanel; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x20

  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    sub_1BCB254(0LL, classId);
  transform = UnityEngine_GameObject__get_transform(folderBoardPanel, 0LL);
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4B16191 = 1;
  }
  TransformHelper__SetLocalPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ActionExtensions__Call(callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *currentFolderBoard; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct GrandQuestFolderBoardComponent_o *v16; // x8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B17312 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__, isActive);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B17312 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( folderBoardList && folderBoardList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      folderBoardList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
      if ( !v11 )
        break;
      if ( !v17.fields._current )
        sub_1BCB254(v11, v12);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v17.fields._current[7].klass, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    if ( isActive )
    {
      currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Equality(currentFolderBoard, 0LL, 0LL);
      if ( !v14 )
      {
        v16 = this->fields.currentFolderBoard;
        if ( !v16 )
          sub_1BCB254(v14, v15);
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v16->fields.selectedFrame, 1, 0LL);
      }
    }
  }
}


void __fastcall GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentFolderBoard; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4B17310 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B17310 = 1;
  }
  currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(currentFolderBoard, 0LL, 0LL) )
    GrandQuestClassSelectController__SetSelectButtonOptionText(this, this->fields.currentFolderBoard, v4);
}


void __fastcall GrandQuestClassSelectController__SetDispPosition(
        GrandQuestClassSelectController_o *this,
        int32_t currentIdx,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.currentMoveIdx = currentIdx;
  GrandQuestClassSelectController__RefreshUpDownChangeBoardDisplay(this, currentIdx, method);
  GrandQuestClassSelectController__RefreshBoardListMaskDisplay(this, this->fields.currentMoveIdx, v4);
}


void __fastcall GrandQuestClassSelectController__SetImage(
        GrandQuestClassSelectController_o *this,
        UISprite_o *uiSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct GrandQuestResourceCatalogAssetBundle_o *resourceAssetBundle; // x8
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8

  resourceAssetBundle = this->fields.resourceAssetBundle;
  if ( !resourceAssetBundle
    || (Contents_k__BackingField = resourceAssetBundle->fields._Contents_k__BackingField) == 0LL
    || (this = (GrandQuestClassSelectController_o *)Contents_k__BackingField->fields._BoardUiAtlasManagerUnit_k__BackingField) == 0LL
    || (this = (GrandQuestClassSelectController_o *)AtlasManagerUnit__SetUI(
                                                      (AtlasManagerUnit_o *)this,
                                                      uiSprite,
                                                      spriteName,
                                                      0LL),
        !uiSprite) )
  {
    sub_1BCB254(this, uiSprite);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))uiSprite->klass->vtable._33_MakePixelPerfect.method)(
    uiSprite,
    uiSprite->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall GrandQuestClassSelectController__SetOnClickMoveParam(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 1;
  if ( !folderBoardCenterChild )
    sub_1BCB254(this, method);
  folderBoardCenterChild->fields.springStrength = 6.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__SetPositionByWarId(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *folderBoardList; // x0
  int v7; // w22
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x8
  GrandQuestClassSelectController_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4B1730E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__, v5);
    byte_4B1730E = 1;
  }
  folderBoardList = this->fields.folderBoardList;
  if ( folderBoardList )
  {
    v7 = *((_DWORD *)folderBoardList + 6);
    if ( v7 < 1 )
    {
LABEL_14:
      v11 = this;
      v12 = 0;
      this->fields.currentMoveIdx = 0;
    }
    else
    {
      v8 = 0;
      while ( 1 )
      {
        folderBoardList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)folderBoardList,
                            v8,
                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
        if ( !folderBoardList )
LABEL_12:
          sub_1BCB254(folderBoardList, v9);
        v10 = *((_QWORD *)folderBoardList + 15);
        if ( !v10 )
          return;
        if ( warId < 1 || *(_DWORD *)(v10 + 116) == warId )
          break;
        if ( v7 == ++v8 )
          goto LABEL_14;
        folderBoardList = this->fields.folderBoardList;
        if ( !folderBoardList )
          goto LABEL_12;
      }
      v12 = *((_DWORD *)folderBoardList + 34);
      v11 = this;
      this->fields.currentMoveIdx = v12;
    }
    GrandQuestClassSelectController__RefreshUpDownChangeBoardDisplay(v11, v12, method);
    GrandQuestClassSelectController__RefreshBoardListMaskDisplay(this, this->fields.currentMoveIdx, v13);
  }
}


void __fastcall GrandQuestClassSelectController__SetSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        GrandQuestFolderBoardComponent_o *board,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // x8
  _BOOL4 v7; // w22
  GrandQuestBoardOptionTextComponent_o **p_selectButtonOptionInfoLb; // x21
  UISprite_o **p_selectButtonOptionInfoFrameSp; // x19
  UnityEngine_Component_o *selectButtonOptionInfoFrameSp; // t1
  const MethodInfo *v11; // x3

  v4 = this;
  if ( (byte_4B17311 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__, board);
    this = (GrandQuestClassSelectController_o *)sub_1BCAFF8(
                                                  &Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__,
                                                  v5);
    byte_4B17311 = 1;
  }
  if ( !board )
    goto LABEL_12;
  mInfoTextList = board->fields.mInfoTextList;
  if ( mInfoTextList )
    v7 = mInfoTextList->fields._size > 0;
  else
    v7 = 0;
  p_selectButtonOptionInfoLb = &v4->fields.selectButtonOptionInfoLb;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v4->fields.selectButtonOptionInfoLb, v7, 0LL);
  selectButtonOptionInfoFrameSp = (UnityEngine_Component_o *)v4->fields.selectButtonOptionInfoFrameSp;
  p_selectButtonOptionInfoFrameSp = &v4->fields.selectButtonOptionInfoFrameSp;
  BasicHelper__SetActiveSafely(selectButtonOptionInfoFrameSp, v7, 0LL);
  if ( v7 )
  {
    this = (GrandQuestClassSelectController_o *)board->fields.mInfoTextList;
    if ( this )
    {
      this = (GrandQuestClassSelectController_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    0,
                                                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
      if ( this )
      {
        GrandQuestFolderInformationText__SetTime(
          (GrandQuestFolderInformationText_o *)this,
          p_selectButtonOptionInfoLb,
          p_selectButtonOptionInfoFrameSp,
          v11);
        return;
      }
    }
LABEL_12:
    sub_1BCB254(this, board);
  }
}


void __fastcall GrandQuestClassSelectController__SetTouchBlock(
        GrandQuestClassSelectController_o *this,
        bool isBlock,
        const MethodInfo *method)
{
  struct System_Action_bool__o *setTouchBlockAction; // x8

  setTouchBlockAction = this->fields.setTouchBlockAction;
  if ( setTouchBlockAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))setTouchBlockAction->fields.m_target)(
      setTouchBlockAction->fields.original_method_info,
      isBlock,
      *(_QWORD *)&setTouchBlockAction->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__SetupBoardList(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  UnityEngine_Behaviour_o *upArrowBtn; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_4B172F9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(
      &Method_GrandQuestClassSelectController___c__DisplayClass44_0__SetupBoardList_g__SetBoardCenterFunc_0__,
      v7);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass44_0_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_20337/*"img_questboard_selectbg"*/, v9);
    sub_1BCAFF8(&StringLiteral_17347/*"btn_grand_select"*/, v10);
    sub_1BCAFF8(&StringLiteral_20025/*"icon_grand_arrow"*/, v11);
    byte_4B172F9 = 1;
  }
  v12 = (Il2CppObject *)sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  v12[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v12[1]);
  v12[1].monitor = callback;
  sub_1BCAF9C(&v12[1].monitor);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.upArrowSprite,
    (System_String_o *)StringLiteral_20025/*"icon_grand_arrow"*/,
    v15);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.downArrowSprite,
    (System_String_o *)StringLiteral_20025/*"icon_grand_arrow"*/,
    v16);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectedMark,
    (System_String_o *)StringLiteral_20337/*"img_questboard_selectbg"*/,
    v17);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectClassSprite,
    (System_String_o *)StringLiteral_17347/*"btn_grand_select"*/,
    v18);
  this->fields.currentState = 0;
  GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 0, v19);
  upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.upArrowBtn;
  if ( !upArrowBtn
    || (UnityEngine_Behaviour__set_enabled(upArrowBtn, 1, 0LL),
        (upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.downArrowBtn) == 0LL) )
  {
LABEL_7:
    sub_1BCB254(upArrowBtn, v14);
  }
  UnityEngine_Behaviour__set_enabled(upArrowBtn, 1, 0LL);
  GrandQuestClassSelectController__CreateBoardList(this, warId, v20);
  GrandQuestClassSelectController__SetPositionByWarId(this, warId, v21);
  v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    v12,
    Method_GrandQuestClassSelectController___c__DisplayClass44_0__SetupBoardList_g__SetBoardCenterFunc_0__,
    0LL);
  GrandQuestClassSelectController__WaitCenterChildStart(this, v22, v23);
}


void __fastcall GrandQuestClassSelectController__SlideInClassTab(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  GrandQuestClassSelectController_c *v12; // x0
  SlideFadeObject_o *klass; // x20
  float OutPosOffsetX; // s9
  float INTO_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4B1730C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v5);
    sub_1BCAFF8(&GrandQuestClassSelectController_TypeInfo, v6);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController___c__DisplayClass68_0__SlideInClassTab_b__0__, v7);
    sub_1BCAFF8(&GrandQuestClassSelectController___c__DisplayClass68_0_TypeInfo, v8);
    byte_4B1730C = 1;
  }
  v9 = (Il2CppObject *)sub_1BCB244(GrandQuestClassSelectController___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  v9[1].monitor = callback;
  sub_1BCAF9C(&v9[1].monitor);
  v9[2].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v9[2]);
  v9[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_object_(
                                 this->fields.folderBoardPanel,
                                 (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  sub_1BCAF9C(&v9[1]);
  v12 = GrandQuestClassSelectController_TypeInfo;
  klass = (SlideFadeObject_o *)v9[1].klass;
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
  OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)v12);
  INTO_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->INTO_TIME;
  v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    v9,
    Method_GrandQuestClassSelectController___c__DisplayClass68_0__SlideInClassTab_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_1BCB254(v10, v11);
  SlideFadeObject__SlideIn_35372284(klass, OutPosOffsetX, INTO_TIME, 0.0, v16, 0LL);
}


void __fastcall GrandQuestClassSelectController__StartUp(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall GrandQuestClassSelectController__Update(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float realtimeSinceStartup; // s0
  GrandQuestClassSelectController_c *v6; // x0
  float mUpdateTimeOld; // s9
  float v8; // s8
  UnityEngine_Component_o *selectClassButton; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4B172FD & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestClassSelectController_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B172FD = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v6 = GrandQuestClassSelectController_TypeInfo;
    mUpdateTimeOld = this->fields.mUpdateTimeOld;
    v8 = realtimeSinceStartup;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
      v6 = GrandQuestClassSelectController_TypeInfo;
    }
    if ( (float)(v8 - mUpdateTimeOld) >= v6->static_fields->UpdateInfoTimeInterval )
    {
      selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
      if ( selectClassButton )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
          goto LABEL_15;
        selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
        if ( selectClassButton )
        {
          selectClassButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0LL);
          if ( selectClassButton )
          {
            if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)selectClassButton, 0LL) )
              return;
LABEL_15:
            this->fields.mUpdateTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            GrandQuestClassSelectController__UpdateBoardInfo(this, v11);
            GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v12);
            return;
          }
        }
      }
      sub_1BCB254(selectClassButton, v4);
    }
  }
}


void __fastcall GrandQuestClassSelectController__UpdateBoardInfo(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1730F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1730F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( folderBoardList && folderBoardList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      folderBoardList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
        break;
      if ( !current )
        sub_1BCB254(v10, v11);
      GrandQuestFolderBoardComponent__UpdateInfoText((GrandQuestFolderBoardComponent_o *)current, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
  }
}


void __fastcall GrandQuestClassSelectController__WaitCenterChildStart(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *folderBoardCenterChild; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UICenterOnChild_o *v8; // x0
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4B172FB & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, endCallback);
    byte_4B172FB = 1;
  }
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(folderBoardCenterChild, 0LL, 0LL) )
    goto LABEL_9;
  v8 = this->fields.folderBoardCenterChild;
  if ( !v8 )
    sub_1BCB254(0LL, v6);
  if ( UICenterOnChild__ExistScrollView(v8, 0LL) )
  {
    ActionExtensions__Call(endCallback, 0LL);
  }
  else
  {
LABEL_9:
    v9 = GrandQuestClassSelectController__CoWaitUntilCenterChildStart(this, endCallback, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
  }
}


void __fastcall GrandQuestClassSelectController___Awake_b__42_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestClassSelectController__OnClickUpDownChangeBoard(this, 1, v2);
}


void __fastcall GrandQuestClassSelectController___Awake_b__42_1(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestClassSelectController__OnClickUpDownChangeBoard(this, 0, v2);
}


void __fastcall GrandQuestClassSelectController___Awake_b__42_2(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v2; // x19
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  const MethodInfo *v4; // x2
  struct UIButton_o *selectClassButton; // x8

  v2 = this;
  if ( (byte_4B17314 & 1) == 0 )
  {
    this = (GrandQuestClassSelectController_o *)sub_1BCAFF8(
                                                  &Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___,
                                                  method);
    byte_4B17314 = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild
    || (this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject) == 0LL
    || (this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___)) == 0LL
    || (selectClassButton = this->fields.selectClassButton) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  GrandQuestClassSelectController__OnClickChallengeButton(
    v2,
    LODWORD(selectClassButton->fields.mDefaultColor.fields.b),
    v4);
}


bool __fastcall GrandQuestClassSelectController___CoWaitUntilBoardInit_b__46_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *currentFolderBoard; // x20
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *folderBoardList; // x0

  if ( (byte_4B17315 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B17315 = 1;
  }
  currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currentFolderBoard, 0LL, 0LL) )
    return 1;
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( !folderBoardList )
    goto LABEL_12;
  if ( folderBoardList->fields._size < 1 )
    return 1;
  folderBoardList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   folderBoardList,
                                                                   0,
                                                                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
  if ( !folderBoardList )
LABEL_12:
    sub_1BCB254(folderBoardList, v6);
  return !GrandQuestFolderBoardComponent__ExistBoardImage((GrandQuestFolderBoardComponent_o *)folderBoardList, v6);
}


bool __fastcall GrandQuestClassSelectController___CoWaitUntilCenterChildStart_b__48_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *folderBoardCenterChild; // x20
  __int64 v4; // x1
  UICenterOnChild_o *v6; // x0

  if ( (byte_4B17316 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B17316 = 1;
  }
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(folderBoardCenterChild, 0LL, 0LL) )
  {
    return 1;
  }
  else
  {
    v6 = this->fields.folderBoardCenterChild;
    if ( !v6 )
      sub_1BCB254(0LL, v4);
    return !UICenterOnChild__ExistScrollView(v6, 0LL);
  }
}


int32_t __fastcall GrandQuestClassSelectController__get_CurrentState(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  return this->fields.currentState;
}


bool __fastcall GrandQuestClassSelectController__get_IsMovePositiveIndex(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  return this->fields.isMovePositiveIndex;
}


float __fastcall GrandQuestClassSelectController__get_OutPosOffsetX(const MethodInfo *method)
{
  int32_t width; // w19
  float v2; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v2 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  if ( v2 < 1.7778 )
    return -800.0;
  else
    return -800.0 - (float)((float)(v2 * 576.0) + -1024.0);
}


void __fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46___ctor(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46__MoveNext(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitWhile_o *v8; // x20
  bool result; // w0
  System_Action_o *endCallback; // x0

  if ( (byte_4B1731B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__46_0__, v3);
    sub_1BCAFF8(&UnityEngine_WaitWhile_TypeInfo, v4);
    byte_4B1731B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    endCallback = this->fields.endCallback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(endCallback, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v7 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__46_0__, 0LL);
    v8 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BCAF9C(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46__System_Collections_IEnumerator_Reset(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46__System_Collections_IEnumerator_get_Current(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46__System_IDisposable_Dispose(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48___ctor(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48__MoveNext(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitWhile_o *v8; // x20
  bool result; // w0
  System_Action_o *endCallback; // x0

  if ( (byte_4B1731C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_b__48_0__, v3);
    sub_1BCAFF8(&UnityEngine_WaitWhile_TypeInfo, v4);
    byte_4B1731C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    endCallback = this->fields.endCallback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(endCallback, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v7 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v7,
      _4__this,
      Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_b__48_0__,
      0LL);
    v8 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BCAF9C(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48__System_Collections_IEnumerator_Reset(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48__System_Collections_IEnumerator_get_Current(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48__System_IDisposable_Dispose(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass44_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass44_0___SetupBoardList_b__1(
        GrandQuestClassSelectController___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v4; // x1

  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  v4 = GrandQuestClassSelectController__CoWaitUntilBoardInit(this->fields.__4__this, this->fields.callback, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648(_4__this, v4, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass44_0___SetupBoardList_g__SetBoardCenterFunc_0(
        GrandQuestClassSelectController___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  GrandQuestClassSelectController_o *klass; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  v2 = (Il2CppObject *)this;
  if ( (byte_4B17317 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassSelectController___c__DisplayClass44_0_o *)sub_1BCAFF8(
                                                                        &Method_GrandQuestClassSelectController___c__DisplayClass44_0__SetupBoardList_b__1__,
                                                                        v3);
    byte_4B17317 = 1;
  }
  klass = (GrandQuestClassSelectController_o *)v2[1].klass;
  if ( !klass )
    sub_1BCB254(this, method);
  klass->fields.currentState = 2;
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, v2, Method_GrandQuestClassSelectController___c__DisplayClass44_0__SetupBoardList_b__1__, 0LL);
  GrandQuestClassSelectController__SetBoardCenter(klass, v5, v6);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass51_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass51_0___CreateBoardList_b__0(
        GrandQuestClassSelectController___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassSelectController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  GrandQuestClassSelectController__OnClickBoard(_4__this, this->fields.index, 1, v2);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass61_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass61_0___GetFolderBoardByWarId_b__0(
        GrandQuestClassSelectController___c__DisplayClass61_0_o *this,
        GrandQuestFolderBoardComponent_o *x,
        const MethodInfo *method)
{
  struct GrandQuestFolderBoardItem_o *boardInfo; // x8

  if ( !x || (boardInfo = x->fields.boardInfo) == 0LL )
    sub_1BCB254(this, x);
  return boardInfo->fields._WarId_k__BackingField == this->fields.warId;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass65_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass65_0___GetTaskOfRelease_b__0(
        GrandQuestClassSelectController___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotReleased;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass65_0___GetTaskOfRelease_b__1(
        GrandQuestClassSelectController___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  GrandQuestClassSelectController_o *monitor; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B17318 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassSelectController___c__DisplayClass65_0_o *)sub_1BCAFF8(
                                                                        &Method_GrandQuestClassSelectController___c__DisplayClass65_0__GetTaskOfRelease_b__2__,
                                                                        v4);
    byte_4B17318 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  monitor = (GrandQuestClassSelectController_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassSelectController___c__DisplayClass65_0__GetTaskOfRelease_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassSelectController___c__DisplayClass65_0_o *)sub_1BCAF9C(&v3[2]);
  }
  if ( !monitor )
    sub_1BCB254(this, method);
  GrandQuestClassSelectController__Release(monitor, klass, 0, v2);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass65_0___GetTaskOfRelease_b__2(
        GrandQuestClassSelectController___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNotReleased = 0;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass66_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass66_0___Release_b__0(
        GrandQuestClassSelectController___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassSelectController_o *_4__this; // x8
  struct GrandQuestClassSelectController_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isTouchBoard = 0,
        ActionExtensions__Call(this->fields.callback, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  v4->fields.currentState = 1;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass67_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass67_0___GetTaskOfSlideInClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isTabChange;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass67_0___GetTaskOfSlideInClassTab_b__1(
        GrandQuestClassSelectController___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  GrandQuestClassSelectController_o *monitor; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B17319 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassSelectController___c__DisplayClass67_0_o *)sub_1BCAFF8(
                                                                        &Method_GrandQuestClassSelectController___c__DisplayClass67_0__GetTaskOfSlideInClassTab_b__2__,
                                                                        v4);
    byte_4B17319 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  monitor = (GrandQuestClassSelectController_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassSelectController___c__DisplayClass67_0__GetTaskOfSlideInClassTab_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassSelectController___c__DisplayClass67_0_o *)sub_1BCAF9C(&v3[2]);
  }
  if ( !monitor )
    sub_1BCB254(this, method);
  GrandQuestClassSelectController__SlideInClassTab(monitor, klass, v2);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass67_0___GetTaskOfSlideInClassTab_b__2(
        GrandQuestClassSelectController___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTabChange = 0;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass68_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass68_0___SlideInClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  SlideFadeObject_o *sfo; // x0
  struct GrandQuestClassSelectController_o *_4__this; // x8

  sfo = this->fields.sfo;
  if ( !sfo
    || (SlideFadeObject__ResetPosition(sfo, 0LL),
        ActionExtensions__Call(this->fields.callback, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(sfo, method);
  }
  _4__this->fields.currentState = 2;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass69_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass69_0___GetTaskOfChangeClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isTabChange;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass69_0___GetTaskOfChangeClassTab_b__1(
        GrandQuestClassSelectController___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *monitor; // x22
  GrandQuestClassSelectController_o *v6; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B1731A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassSelectController___c__DisplayClass69_0_o *)sub_1BCAFF8(
                                                                        &Method_GrandQuestClassSelectController___c__DisplayClass69_0__GetTaskOfChangeClassTab_b__2__,
                                                                        v4);
    byte_4B1731A = 1;
  }
  monitor = (System_Action_o *)v3[2].monitor;
  v6 = (GrandQuestClassSelectController_o *)v3[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v3,
      Method_GrandQuestClassSelectController___c__DisplayClass69_0__GetTaskOfChangeClassTab_b__2__,
      0LL);
    v3[2].monitor = monitor;
    this = (GrandQuestClassSelectController___c__DisplayClass69_0_o *)sub_1BCAF9C(&v3[2].monitor);
  }
  if ( !v6 )
    sub_1BCB254(this, method);
  GrandQuestClassSelectController__SetClassTab(v6, (int32_t)method, monitor, v2);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass69_0___GetTaskOfChangeClassTab_b__2(
        GrandQuestClassSelectController___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTabChange = 0;
}