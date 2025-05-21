void __fastcall GrandQuestClassSelectController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3F806 & 1) == 0 )
  {
    sub_1BDB878(&GrandQuestClassSelectController_TypeInfo, v1);
    byte_4B3F806 = 1;
  }
  *GrandQuestClassSelectController_TypeInfo->static_fields = (struct GrandQuestClassSelectController_StaticFields)0x3E8000003F000000LL;
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
  if ( (byte_4B3F7F5 & 1) == 0 )
  {
    sub_1BDB878(&EventDelegate_Callback_TypeInfo, method);
    sub_1BDB878(&EventDelegate_TypeInfo, v3);
    sub_1BDB878(&Method_GrandQuestClassSelectController__Awake_b__30_0__, v4);
    sub_1BDB878(&Method_GrandQuestClassSelectController__Awake_b__30_1__, v5);
    this = (GrandQuestClassSelectController_o *)sub_1BDB878(
                                                  &Method_GrandQuestClassSelectController__Awake_b__30_2__,
                                                  v6);
    byte_4B3F7F5 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_9;
  typeHierarchy = (System_Collections_Generic_List_EventDelegate__o *)klass->_2.typeHierarchy;
  v9 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, v2, Method_GrandQuestClassSelectController__Awake_b__30_0__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (GrandQuestClassSelectController_o *)EventDelegate__Add(typeHierarchy, v9, 0LL);
  monitor = v2[4].monitor;
  if ( !monitor
    || (v11 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)monitor + 25),
        v12 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v12, v2, Method_GrandQuestClassSelectController__Awake_b__30_1__, 0LL),
        this = (GrandQuestClassSelectController_o *)EventDelegate__Add(v11, v12, 0LL),
        (v13 = v2[6].monitor) == 0LL) )
  {
LABEL_9:
    sub_1BDBAD4(this, method);
  }
  v14 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)v13 + 25);
  v15 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, v2, Method_GrandQuestClassSelectController__Awake_b__30_2__, 0LL);
  EventDelegate__Add(v14, v15, 0LL);
}


void __fastcall GrandQuestClassSelectController__ClearBoardList(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *folderBoardLoopCtr; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B3F7FF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F7FF = 1;
  }
  folderBoardLoopCtr = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr;
  if ( !folderBoardLoopCtr )
    goto LABEL_16;
  folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardLoopCtr, 0LL);
  if ( !folderBoardLoopCtr )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardLoopCtr, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      folderBoardLoopCtr = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr;
      if ( !folderBoardLoopCtr )
        break;
      folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardLoopCtr, 0LL);
      if ( !folderBoardLoopCtr )
        break;
      folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                        (UnityEngine_Transform_o *)folderBoardLoopCtr,
                                                        v5 - 2,
                                                        0LL);
      if ( !folderBoardLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(folderBoardLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1BDBAD4(folderBoardLoopCtr, method);
  }
LABEL_13:
  folderBoardLoopCtr = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr;
  if ( !folderBoardLoopCtr )
    goto LABEL_16;
  folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardLoopCtr, 0LL);
  if ( !folderBoardLoopCtr )
    goto LABEL_16;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)folderBoardLoopCtr, 0LL);
}


System_Collections_IEnumerator_o *__fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4B3F7F7 & 1) == 0 )
  {
    sub_1BDB878(&GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_TypeInfo, endCallback);
    byte_4B3F7F7 = 1;
  }
  v5 = sub_1BDBAC4(GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C(v5 + 32);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1BDB81C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall GrandQuestClassSelectController__CreateBoardList(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v23; // x21
  struct UIWrapContent_o **p_folderBoardLoopCtr; // x21
  UnityEngine_Object_o *folderBoardLoopCtr; // x22
  const MethodInfo *v26; // x1
  __int64 folderBoardScrollView; // x0
  struct UICenterOnChild_o **p_folderBoardCenterChild; // x22
  UnityEngine_Object_o *folderBoardCenterChild; // x23
  struct UICenterOnChild_o *v30; // x22
  _QWORD *p_onFinished; // x22
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v33; // x24
  System_Delegate_o *v34; // x0
  System_Delegate_o *v35; // x8
  SpringPanel_OnFinished_c *v36; // x1
  struct UIScrollView_o *v37; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v39; // x24
  System_Delegate_o *v40; // x0
  UIScrollView_OnDragNotification_c *v41; // x1
  System_Collections_Generic_List_object__o *v42; // x22
  int32_t v43; // w23
  __int64 v44; // x25
  WarEntity_o *v45; // x27
  struct GrandQuestResourceCatalogAssetBundle_o *resourceAssetBundle; // x8
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  Il2CppObject *GrandQuestFolderBoardPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v50; // x26
  UnityEngine_Transform_o *v51; // x29
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  const MethodInfo *v58; // x2
  BlankEarthSpotEntity_o *SpotEntityByWarId; // x0
  GrandQuestViewSwitcher_c *v60; // x8
  BlankEarthSpotEntity_o *v61; // x29
  int32_t DefaultGrandClassIconId; // w28
  int32_t bannerId; // w24
  int v64; // w21
  int32_t v65; // w29
  System_String_o *PrioredName; // x20
  __int64 v67; // x27
  struct GrandQuestResourceCatalogAssetBundle_o *v68; // x8
  struct GrandQuestResourceContents_o *v69; // x8
  AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x20
  System_Action_o *v71; // x28
  const MethodInfo *v72; // x4
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o **p_folderBoardList; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3F7F8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___, v3);
    sub_1BDB878(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v5);
    sub_1BDB878(&Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__, v6);
    sub_1BDB878(&Method_GrandQuestClassSelectController_OnDragStarted__, v7);
    sub_1BDB878(&GrandQuestFolderBoardItem_TypeInfo, v8);
    sub_1BDB878(&GrandQuestViewSwitcher_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__, v15);
    sub_1BDB878(&System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo, v16);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v17);
    sub_1BDB878(&UIScrollView_OnDragNotification_TypeInfo, v18);
    sub_1BDB878(&SpringPanel_OnFinished_TypeInfo, v19);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass36_0__CreateBoardList_b__0__, v20);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass36_0_TypeInfo, v21);
    sub_1BDB878(&StringLiteral_17337/*"board_"*/, v22);
    byte_4B3F7F8 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__);
  this->fields.folderBoardList = (struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *)v23;
  p_folderBoardList = &this->fields.folderBoardList;
  sub_1BDB81C(&this->fields.folderBoardList);
  p_folderBoardLoopCtr = &this->fields.folderBoardLoopCtr;
  folderBoardLoopCtr = (UnityEngine_Object_o *)this->fields.folderBoardLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(folderBoardLoopCtr, 0LL, 0LL) )
  {
    folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
    if ( !folderBoardScrollView )
      goto LABEL_72;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0LL);
    if ( !folderBoardScrollView )
      goto LABEL_72;
    *p_folderBoardLoopCtr = (struct UIWrapContent_o *)UnityEngine_GameObject__AddComponent_object_(
                                                        (UnityEngine_GameObject_o *)folderBoardScrollView,
                                                        (const MethodInfo_3088438 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_1BDB81C(&this->fields.folderBoardLoopCtr);
  }
  p_folderBoardCenterChild = &this->fields.folderBoardCenterChild;
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  folderBoardScrollView = UnityEngine_Object__op_Equality(folderBoardCenterChild, 0LL, 0LL);
  if ( (folderBoardScrollView & 1) != 0 )
  {
    folderBoardScrollView = (__int64)*p_folderBoardLoopCtr;
    if ( !*p_folderBoardLoopCtr )
      goto LABEL_72;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0LL);
    if ( !folderBoardScrollView )
      goto LABEL_72;
    *p_folderBoardCenterChild = (struct UICenterOnChild_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)folderBoardScrollView,
                                                              (const MethodInfo_3088438 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    folderBoardScrollView = sub_1BDB81C(&this->fields.folderBoardCenterChild);
  }
  v30 = *p_folderBoardCenterChild;
  if ( !v30 )
    goto LABEL_72;
  onFinished = (System_Delegate_o *)v30->fields.onFinished;
  p_onFinished = &v30->fields.onFinished;
  v33 = (SpringPanel_OnFinished_o *)sub_1BDBAC4(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(
    v33,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__,
    0LL);
  v34 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v33, 0LL);
  v35 = v34;
  if ( v34 )
  {
    v36 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v34->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_25;
    *p_onFinished = v34;
    if ( (SpringPanel_OnFinished_c *)v34->klass != v36 )
      goto LABEL_25;
  }
  else
  {
    *p_onFinished = 0LL;
  }
  folderBoardScrollView = sub_1BDB81C(p_onFinished);
  v37 = this->fields.folderBoardScrollView;
  if ( !v37 )
    goto LABEL_72;
  onDragStarted = (System_Delegate_o *)v37->fields.onDragStarted;
  p_onFinished = &v37->fields.onDragStarted;
  v39 = (UIScrollView_OnDragNotification_o *)sub_1BDBAC4(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v39,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnDragStarted__,
    0LL);
  v40 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v39, 0LL);
  v35 = v40;
  if ( !v40 )
    goto LABEL_26;
  v41 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v40->klass != UIScrollView_OnDragNotification_TypeInfo
    || (*p_onFinished = v40, (UIScrollView_OnDragNotification_c *)v40->klass != v41) )
  {
LABEL_25:
    sub_1BDBD94(v35);
LABEL_26:
    *p_onFinished = v35;
  }
  folderBoardScrollView = sub_1BDB81C(p_onFinished);
  if ( !this->fields.rootComponent )
    goto LABEL_72;
  folderBoardScrollView = (__int64)GrandQuestRootComponent__GetGrandWarInfoList(
                                     (GrandQuestRootComponent_o *)folderBoardScrollView,
                                     v26);
  if ( !folderBoardScrollView )
    goto LABEL_72;
  v42 = (System_Collections_Generic_List_object__o *)folderBoardScrollView;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      v44 = sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass36_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v44, 0LL);
      if ( !v44 )
        break;
      *(_QWORD *)(v44 + 24) = this;
      sub_1BDB81C(v44 + 24);
      folderBoardScrollView = (__int64)System_Collections_Generic_List_object___get_Item(
                                         v42,
                                         v43,
                                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__);
      if ( !folderBoardScrollView )
        break;
      folderBoardScrollView = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)folderBoardScrollView, 0LL);
      if ( !folderBoardScrollView )
        break;
      v45 = (WarEntity_o *)folderBoardScrollView;
      *(_DWORD *)(v44 + 20) = *(_DWORD *)(folderBoardScrollView + 16);
      resourceAssetBundle = this->fields.resourceAssetBundle;
      if ( !resourceAssetBundle )
        break;
      Contents_k__BackingField = resourceAssetBundle->fields._Contents_k__BackingField;
      if ( !Contents_k__BackingField )
        break;
      folderBoardScrollView = (__int64)*p_folderBoardLoopCtr;
      if ( !*p_folderBoardLoopCtr )
        break;
      GrandQuestFolderBoardPrefab_k__BackingField = (Il2CppObject *)Contents_k__BackingField->fields._GrandQuestFolderBoardPrefab_k__BackingField;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardScrollView, 0LL);
      folderBoardScrollView = (__int64)BaseMonoBehaviour__createObject_object_(
                                         (BaseMonoBehaviour_o *)this,
                                         GrandQuestFolderBoardPrefab_k__BackingField,
                                         transform,
                                         0LL,
                                         (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___);
      if ( !folderBoardScrollView )
        break;
      v50 = (UnityEngine_Object_o *)folderBoardScrollView;
      folderBoardScrollView = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)folderBoardScrollView,
                                         0LL);
      v51 = (UnityEngine_Transform_o *)folderBoardScrollView;
      if ( !byte_4B3E916 )
      {
        folderBoardScrollView = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v26);
        byte_4B3E916 = 1;
      }
      if ( !v51 )
        break;
      UnityEngine_Transform__set_localScale(v51, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      folderBoardScrollView = (__int64)*p_folderBoardLoopCtr;
      if ( !*p_folderBoardLoopCtr )
        break;
      folderBoardScrollView = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)folderBoardScrollView,
                                         0LL);
      if ( !folderBoardScrollView )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)folderBoardScrollView, 0LL);
      UnityEngine_Transform__set_localPosition(v51, localPosition, 0LL);
      v52 = System_Int32__ToString((int)v44 + 20, 0LL);
      v53 = System_String__Concat_62572260((System_String_o *)StringLiteral_17337/*"board_"*/, v52, 0LL);
      UnityEngine_Object__set_name(v50, v53, 0LL);
      folderBoardScrollView = (__int64)*p_folderBoardList;
      if ( !*p_folderBoardList )
        break;
      v54 = *(_QWORD *)(folderBoardScrollView + 16);
      v55 = Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__;
      ++*(_DWORD *)(folderBoardScrollView + 28);
      if ( !v54 )
        break;
      v56 = *(int *)(folderBoardScrollView + 24);
      if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)folderBoardScrollView,
          (Il2CppObject *)v50,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = v54 + 8 * v56;
        *(_DWORD *)(folderBoardScrollView + 24) = v56 + 1;
        *(_QWORD *)(v57 + 32) = v50;
        folderBoardScrollView = sub_1BDB81C(v57 + 32);
      }
      *(_DWORD *)(v44 + 16) = v43;
      if ( !this->fields.rootComponent )
        break;
      SpotEntityByWarId = GrandQuestRootComponent__GetSpotEntityByWarId(
                            (GrandQuestRootComponent_o *)folderBoardScrollView,
                            *(_DWORD *)(v44 + 20),
                            v58);
      v60 = GrandQuestViewSwitcher_TypeInfo;
      v61 = SpotEntityByWarId;
      if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
        v60 = GrandQuestViewSwitcher_TypeInfo;
      }
      DefaultGrandClassIconId = v60->static_fields->DefaultGrandClassIconId;
      if ( v61 && BlankEarthSpotEntity__GetGrandClassIconId(v61, -1, 0LL) >= 1 )
        DefaultGrandClassIconId = BlankEarthSpotEntity__GetGrandClassIconId(v61, -1, 0LL);
      bannerId = v45->fields.bannerId;
      v65 = *(_DWORD *)(v44 + 16);
      v64 = *(_DWORD *)(v44 + 20);
      PrioredName = WarEntity__GetPrioredName(v45, 0LL);
      v67 = sub_1BDBAC4(GrandQuestFolderBoardItem_TypeInfo);
      ListViewItem___ctor_42734232((ListViewItem_o *)v67, v65, 0LL);
      *(_DWORD *)(v67 + 112) = bannerId;
      *(_DWORD *)(v67 + 116) = v64;
      *(_QWORD *)(v67 + 120) = PrioredName;
      folderBoardScrollView = sub_1BDB81C(v67 + 120);
      *(_DWORD *)(v67 + 128) = DefaultGrandClassIconId;
      v68 = this->fields.resourceAssetBundle;
      if ( !v68 )
        break;
      v69 = v68->fields._Contents_k__BackingField;
      p_folderBoardLoopCtr = &this->fields.folderBoardLoopCtr;
      if ( !v69 )
        break;
      BoardUiAtlasManagerUnit_k__BackingField = v69->fields._BoardUiAtlasManagerUnit_k__BackingField;
      v71 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v71,
        (Il2CppObject *)v44,
        Method_GrandQuestClassSelectController___c__DisplayClass36_0__CreateBoardList_b__0__,
        0LL);
      GrandQuestFolderBoardComponent__SetBoardInfo(
        (GrandQuestFolderBoardComponent_o *)v50,
        (GrandQuestFolderBoardItem_o *)v67,
        BoardUiAtlasManagerUnit_k__BackingField,
        v71,
        v72);
      if ( ++v43 >= v42->fields._size )
        goto LABEL_57;
    }
LABEL_72:
    sub_1BDBAD4(folderBoardScrollView, v26);
  }
LABEL_57:
  folderBoardScrollView = (__int64)*p_folderBoardLoopCtr;
  if ( !*p_folderBoardLoopCtr )
    goto LABEL_72;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)folderBoardScrollView, 0LL);
  folderBoardScrollView = (__int64)*p_folderBoardLoopCtr;
  if ( !*p_folderBoardLoopCtr )
    goto LABEL_72;
  UIWrapContent__resetScroll((UIWrapContent_o *)folderBoardScrollView, 0LL);
  folderBoardScrollView = (__int64)*p_folderBoardLoopCtr;
  if ( !*p_folderBoardLoopCtr )
    goto LABEL_72;
  UIWrapContent__WrapContent((UIWrapContent_o *)folderBoardScrollView, 0LL);
  folderBoardScrollView = (__int64)*p_folderBoardList;
  if ( !*p_folderBoardList )
    goto LABEL_72;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    this->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                                   (System_Collections_Generic_List_object__o *)folderBoardScrollView,
                                                                                   0,
                                                                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    sub_1BDB81C(&this->fields.currentFolderBoard);
    folderBoardScrollView = (__int64)this->fields.selectedFrame;
    if ( !folderBoardScrollView )
      goto LABEL_72;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0LL);
    if ( !folderBoardScrollView )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)folderBoardScrollView, 1, 0LL);
    folderBoardScrollView = (__int64)*p_folderBoardList;
    if ( !*p_folderBoardList )
      goto LABEL_72;
  }
  if ( *(int *)(folderBoardScrollView + 24) <= 1 )
  {
    folderBoardScrollView = (__int64)this->fields.upArrowBtn;
    if ( !folderBoardScrollView )
      goto LABEL_72;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0LL);
    if ( !folderBoardScrollView )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)folderBoardScrollView, 0, 0LL);
    folderBoardScrollView = (__int64)this->fields.downArrowBtn;
    if ( !folderBoardScrollView )
      goto LABEL_72;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0LL);
    if ( !folderBoardScrollView )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)folderBoardScrollView, 0, 0LL);
  }
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

  if ( (byte_4B3F7FD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___, *(_QWORD *)&warId);
    sub_1BDB878(&System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo, v5);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass43_0__GetFolderBoardByWarId_b__0__, v6);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass43_0_TypeInfo, v7);
    byte_4B3F7FD = 1;
  }
  v8 = sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BDBAD4(v9, v10);
  *(_DWORD *)(v8 + 16) = warId;
  folderBoardList = this->fields.folderBoardList;
  v12 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass43_0__GetFolderBoardByWarId_b__0__,
    0LL);
  return (GrandQuestFolderBoardComponent_o *)System_Linq_Enumerable__Single_object__50778768(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)folderBoardList,
                                               (System_Func_TSource__bool__o *)v12,
                                               (const MethodInfo_306D290 *)Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___);
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

  if ( (byte_4B3F805 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, *(_QWORD *)&classId);
    sub_1BDB878(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BDB878(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass51_0__GetTaskOfChangeClassTab_b__0__, v7);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass51_0__GetTaskOfChangeClassTab_b__1__, v8);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass51_0_TypeInfo, v9);
    byte_4B3F805 = 1;
  }
  v10 = sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 24) = this;
  sub_1BDB81C(v10 + 24);
  *(_DWORD *)(v10 + 32) = classId;
  *(_BYTE *)(v10 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_GrandQuestClassSelectController___c__DisplayClass51_0__GetTaskOfChangeClassTab_b__0__,
    0LL);
  v14 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v14, v13, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_GrandQuestClassSelectController___c__DisplayClass51_0__GetTaskOfChangeClassTab_b__1__,
    0LL);
  if ( !v14 )
LABEL_6:
    sub_1BDBAD4(v11, v12);
  v14->fields.StartCallback = v15;
  sub_1BDB81C(&v14->fields.StartCallback);
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

  if ( (byte_4B3F801 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&SchedulerTaskWaitWhile_TypeInfo, v3);
    sub_1BDB878(&SchedulerTaskBase_TaskCallback_TypeInfo, v4);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass47_0__GetTaskOfRelease_b__0__, v5);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass47_0__GetTaskOfRelease_b__1__, v6);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass47_0_TypeInfo, v7);
    byte_4B3F801 = 1;
  }
  v8 = sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_6;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BDB81C(v8 + 24);
  *(_BYTE *)(v8 + 16) = 1;
  v11 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass47_0__GetTaskOfRelease_b__0__,
    0LL);
  v12 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v12, v11, 0LL);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass47_0__GetTaskOfRelease_b__1__,
    0LL);
  if ( !v12 )
LABEL_6:
    sub_1BDBAD4(v9, v10);
  v12->fields.StartCallback = v13;
  sub_1BDB81C(&v12->fields.StartCallback);
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

  if ( (byte_4B3F803 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&SchedulerTaskWaitWhile_TypeInfo, v3);
    sub_1BDB878(&SchedulerTaskBase_TaskCallback_TypeInfo, v4);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass49_0__GetTaskOfSlideInClassTab_b__0__, v5);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass49_0__GetTaskOfSlideInClassTab_b__1__, v6);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass49_0_TypeInfo, v7);
    byte_4B3F803 = 1;
  }
  v8 = sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_6;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BDB81C(v8 + 24);
  *(_BYTE *)(v8 + 16) = 1;
  v11 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass49_0__GetTaskOfSlideInClassTab_b__0__,
    0LL);
  v12 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v12, v11, 0LL);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_GrandQuestClassSelectController___c__DisplayClass49_0__GetTaskOfSlideInClassTab_b__1__,
    0LL);
  if ( !v12 )
LABEL_6:
    sub_1BDBAD4(v9, v10);
  v12->fields.StartCallback = v13;
  sub_1BDB81C(&v12->fields.StartCallback);
  return (SchedulerTaskBase_o *)v12;
}


void __fastcall GrandQuestClassSelectController__Init(
        GrandQuestClassSelectController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        GrandQuestResourceCatalogAssetBundle_o *resourceCatalog,
        System_Action_bool__o *setTouchBlockAct,
        System_Action_int__o *selectClassAct,
        const MethodInfo *method)
{
  this->fields.rootComponent = grandQuestRoot;
  sub_1BDB81C(&this->fields.rootComponent);
  this->fields.setTouchBlockAction = setTouchBlockAct;
  sub_1BDB81C(&this->fields.setTouchBlockAction);
  this->fields.selectClassAction = selectClassAct;
  sub_1BDB81C(&this->fields.selectClassAction);
  this->fields.resourceAssetBundle = resourceCatalog;
  sub_1BDB81C(&this->fields.resourceAssetBundle);
}


void __fastcall GrandQuestClassSelectController__OnCenterOnChildFinishedFolderBoard(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v2; // x19
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  GrandQuestClassSelectController_o *v4; // x20
  int32_t selectClassButton; // w22
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct System_Action_bool__o *setTouchBlockAction; // x8
  UICenterOnChild_o *v9; // x20

  v2 = this;
  if ( (byte_4B3F7F9 & 1) == 0 )
  {
    this = (GrandQuestClassSelectController_o *)sub_1BDB878(
                                                  &Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___,
                                                  method);
    byte_4B3F7F9 = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild )
    goto LABEL_21;
  this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_21;
  this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
  if ( !this )
    goto LABEL_21;
  v4 = this;
  selectClassButton = (int32_t)this->fields.selectClassButton;
  ActionExtensions__Call(v2->fields.initBoardCenterCallback, 0LL);
  v2->fields.initBoardCenterCallback = 0LL;
  sub_1BDB81C(&v2->fields.initBoardCenterCallback);
  if ( v2->fields.isDragging || selectClassButton != v2->fields.currentMoveIdx )
  {
    this = (GrandQuestClassSelectController_o *)v2->fields.upArrowBtn;
    if ( this )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (GrandQuestClassSelectController_o *)v2->fields.downArrowBtn;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
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
              v2->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)v4;
              v2->fields.isDragging = 0;
              sub_1BDB81C(&v2->fields.currentFolderBoard);
              this = (GrandQuestClassSelectController_o *)v2->fields.selectedFrame;
              v2->fields.currentMoveIdx = selectClassButton;
              if ( this )
              {
                this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  this = (GrandQuestClassSelectController_o *)v2->fields.folderBoardLoopCtr;
                  if ( this )
                  {
                    v9 = v2->fields.folderBoardCenterChild;
                    this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                    if ( this )
                    {
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__GetChild(
                                                                    (UnityEngine_Transform_o *)this,
                                                                    v2->fields.currentMoveIdx,
                                                                    0LL);
                      if ( v9 )
                      {
                        UICenterOnChild__CenterOn_48443604(v9, (UnityEngine_Transform_o *)this, 1, 0LL);
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
    }
LABEL_21:
    sub_1BDBAD4(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__OnClickBoard(
        GrandQuestClassSelectController_o *this,
        int32_t moveIdx,
        int32_t warId,
        bool isPlaySe,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectedFrame; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  UICenterOnChild_o *folderBoardCenterChild; // x20

  if ( (byte_4B3F7FC & 1) == 0 )
  {
    sub_1BDB878(&Method_GrandQuestClassSelectController_OnClickBoard__, *(_QWORD *)&moveIdx);
    byte_4B3F7FC = 1;
  }
  if ( !this->fields.isTouchBoard && this->fields.currentMoveIdx != moveIdx )
  {
    selectedFrame = (UnityEngine_Component_o *)this->fields.selectedFrame;
    if ( !selectedFrame )
      goto LABEL_21;
    selectedFrame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedFrame, 0LL);
    if ( !selectedFrame )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedFrame, 0, 0LL);
    selectedFrame = (UnityEngine_Component_o *)this->fields.upArrowBtn;
    if ( !selectedFrame )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectedFrame, 0, 0LL);
    selectedFrame = (UnityEngine_Component_o *)this->fields.downArrowBtn;
    if ( !selectedFrame )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectedFrame, 0, 0LL);
    if ( isPlaySe )
    {
      v9 = Method_GrandQuestClassSelectController_OnClickBoard__;
      if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickBoard__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BDB890(Method_GrandQuestClassSelectController_OnClickBoard__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0LL);
    }
    rootComponent = this->fields.rootComponent;
    if ( !rootComponent )
      goto LABEL_21;
    mTerminalScene = rootComponent->fields.mTerminalScene;
    if ( !mTerminalScene )
      goto LABEL_21;
    selectedFrame = (UnityEngine_Component_o *)mTerminalScene->fields.mTitleInfo;
    if ( !selectedFrame
      || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)selectedFrame, 0, 0LL),
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL),
          selectedFrame = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr,
          this->fields.isDragging = 1,
          !selectedFrame)
      || (folderBoardCenterChild = this->fields.folderBoardCenterChild,
          (selectedFrame = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectedFrame, 0LL)) == 0LL)
      || (selectedFrame = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                       (UnityEngine_Transform_o *)selectedFrame,
                                                       moveIdx,
                                                       0LL),
          !folderBoardCenterChild) )
    {
LABEL_21:
      sub_1BDBAD4(selectedFrame, *(_QWORD *)&moveIdx);
    }
    UICenterOnChild__CenterOn_48443604(folderBoardCenterChild, (UnityEngine_Transform_o *)selectedFrame, 1, 0LL);
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

  if ( (byte_4B3F7FB & 1) == 0 )
  {
    sub_1BDB878(&Method_GrandQuestClassSelectController_OnClickChallengeButton__, *(_QWORD *)&warId);
    byte_4B3F7FB = 1;
  }
  if ( this->fields.selectClassAction )
  {
    v5 = Method_GrandQuestClassSelectController_OnClickChallengeButton__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickChallengeButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_GrandQuestClassSelectController_OnClickChallengeButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    selectClassAction = this->fields.selectClassAction;
    this->fields.isTouchBoard = 1;
    if ( !selectClassAction )
      sub_1BDBAD4(v7, v8);
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
  UnityEngine_Component_o *selectedFrame; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int v8; // w10
  struct GrandQuestRootComponent_o *rootComponent; // x8
  int v10; // w9
  int v11; // w10
  int32_t v12; // w20
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct System_Action_bool__o *setTouchBlockAction; // x8
  UICenterOnChild_o *folderBoardCenterChild; // x19

  if ( (byte_4B3F7FA & 1) == 0 )
  {
    sub_1BDB878(&Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__, isUp);
    byte_4B3F7FA = 1;
  }
  if ( !this->fields.isDragging )
  {
    selectedFrame = (UnityEngine_Component_o *)this->fields.selectedFrame;
    if ( !selectedFrame )
      goto LABEL_30;
    selectedFrame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedFrame, 0LL);
    if ( !selectedFrame )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedFrame, 0, 0LL);
    selectedFrame = (UnityEngine_Component_o *)this->fields.upArrowBtn;
    if ( !selectedFrame )
      goto LABEL_30;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectedFrame, 0, 0LL);
    selectedFrame = (UnityEngine_Component_o *)this->fields.downArrowBtn;
    if ( !selectedFrame )
      goto LABEL_30;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectedFrame, 0, 0LL);
    v6 = Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0LL);
    selectedFrame = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr;
    if ( !selectedFrame )
      goto LABEL_30;
    selectedFrame = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectedFrame, 0LL);
    if ( !selectedFrame )
      goto LABEL_30;
    selectedFrame = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)selectedFrame,
                                                 0LL);
    v8 = isUp ? -1 : 1;
    rootComponent = this->fields.rootComponent;
    v10 = this->fields.currentMoveIdx + v8;
    v11 = v10 >= (int)selectedFrame ? 0 : this->fields.currentMoveIdx + v8;
    v12 = v10 < 0 ? (_DWORD)selectedFrame - 1 : v11;
    if ( !rootComponent )
      goto LABEL_30;
    mTerminalScene = rootComponent->fields.mTerminalScene;
    if ( !mTerminalScene )
      goto LABEL_30;
    selectedFrame = (UnityEngine_Component_o *)mTerminalScene->fields.mTitleInfo;
    if ( !selectedFrame )
      goto LABEL_30;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)selectedFrame, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    setTouchBlockAction = this->fields.setTouchBlockAction;
    if ( setTouchBlockAction )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))setTouchBlockAction->fields.m_target)(
        setTouchBlockAction->fields.original_method_info,
        1LL,
        *(_QWORD *)&setTouchBlockAction->fields.extra_arg);
    selectedFrame = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr;
    if ( !selectedFrame
      || (folderBoardCenterChild = this->fields.folderBoardCenterChild,
          (selectedFrame = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectedFrame, 0LL)) == 0LL)
      || (selectedFrame = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                       (UnityEngine_Transform_o *)selectedFrame,
                                                       v12,
                                                       0LL),
          !folderBoardCenterChild) )
    {
LABEL_30:
      sub_1BDBAD4(selectedFrame, isUp);
    }
    UICenterOnChild__CenterOn_48443604(folderBoardCenterChild, (UnityEngine_Transform_o *)selectedFrame, 1, 0LL);
  }
}


void __fastcall GrandQuestClassSelectController__OnDragStarted(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  GrandQuestClassSelectController_o *v4; // x19

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_8;
  mTerminalScene = rootComponent->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_8;
  v4 = this;
  this = (GrandQuestClassSelectController_o *)mTerminalScene->fields.mTitleInfo;
  if ( !this
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 0, 0LL),
        MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL),
        (this = (GrandQuestClassSelectController_o *)v4->fields.folderBoardScrollView) == 0LL)
    || (UIScrollView__DisableSpring((UIScrollView_o *)this, 0LL),
        this = (GrandQuestClassSelectController_o *)v4->fields.selectedFrame,
        v4->fields.isDragging = 1,
        !this)
    || (this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL)) == 0LL )
  {
LABEL_8:
    sub_1BDBAD4(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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

  if ( (byte_4B3F800 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Clear__, method);
    byte_4B3F800 = 1;
  }
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    goto LABEL_11;
  folderBoardPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(folderBoardPanel, 0LL);
  v4 = (UnityEngine_Transform_o *)folderBoardPanel;
  if ( !byte_4B3E911 )
  {
    folderBoardPanel = (UnityEngine_GameObject_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B3E911 = 1;
  }
  if ( !v4 )
LABEL_11:
    sub_1BDBAD4(folderBoardPanel, method);
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

  if ( (byte_4B3F802 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_1BDB878(&GrandQuestClassSelectController_TypeInfo, v8);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass48_0__Release_b__0__, v9);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass48_0_TypeInfo, v10);
    byte_4B3F802 = 1;
  }
  v11 = (Il2CppObject *)sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11[1].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v11[1]);
  v11[1].monitor = callback;
  p_monitor = (System_Action_o **)&v11[1].monitor;
  sub_1BDB81C(&v11[1].monitor);
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    goto LABEL_13;
  if ( !isQuick )
  {
    gameObject = UnityEngine_GameObject__get_gameObject(folderBoardPanel, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    v20 = (SlideFadeObject_o *)Component_object;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
    OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)Component_object);
    EXIT_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->EXIT_TIME;
    v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v23, v11, Method_GrandQuestClassSelectController___c__DisplayClass48_0__Release_b__0__, 0LL);
    if ( v20 )
    {
      SlideFadeObject__SlideOut_35227484(v20, OutPosOffsetX, EXIT_TIME, 0.0, v23, 0LL);
      return;
    }
LABEL_13:
    sub_1BDBAD4(folderBoardPanel, v13);
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


void __fastcall GrandQuestClassSelectController__SetBoardCenter(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *folderBoardLoopCtr; // x0
  Il2CppObject *Component_object; // x21
  float v8; // s9
  __int64 v9; // x1
  float y; // s8
  float v11; // s1
  float v12; // s2
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v14; // s0
  UICenterOnChild_o *folderBoardCenterChild; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3F7FE & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_SpringPanel___, callback);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B3F7FE = 1;
  }
  folderBoardLoopCtr = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr;
  if ( !folderBoardLoopCtr )
    goto LABEL_25;
  folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardLoopCtr, 0LL);
  if ( !folderBoardLoopCtr )
    goto LABEL_25;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardLoopCtr, 0LL) < 1 )
  {
LABEL_20:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  folderBoardLoopCtr = (UnityEngine_Component_o *)this->fields.folderBoardScrollView;
  if ( !folderBoardLoopCtr )
    goto LABEL_25;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       folderBoardLoopCtr,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)folderBoardLoopCtr & 1) == 0 )
    goto LABEL_20;
  if ( !Component_object )
    goto LABEL_25;
  folderBoardLoopCtr = (UnityEngine_Component_o *)this->fields.folderBoardScrollView;
  if ( !folderBoardLoopCtr )
    goto LABEL_25;
  v8 = *((float *)&Component_object[2].klass + 1);
  folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardLoopCtr, 0LL);
  if ( !folderBoardLoopCtr )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)folderBoardLoopCtr, 0LL);
  y = localPosition.fields.y;
  if ( !byte_4B3E915 )
  {
    sub_1BDB878(&UnityEngine_Mathf_TypeInfo, v9);
    byte_4B3E915 = 1;
  }
  v11 = fabsf(v8);
  v12 = fabsf(y);
  if ( v11 <= v12 )
    v11 = v12;
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  v14 = v11 * 0.000001;
  if ( (float)(v11 * 0.000001) <= (float)(static_fields->Epsilon * 8.0) )
    v14 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(y, v8) < v14 )
    goto LABEL_20;
  this->fields.initBoardCenterCallback = callback;
  sub_1BDB81C(&this->fields.initBoardCenterCallback);
  folderBoardLoopCtr = (UnityEngine_Component_o *)this->fields.folderBoardLoopCtr;
  if ( !folderBoardLoopCtr
    || (folderBoardCenterChild = this->fields.folderBoardCenterChild,
        (folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardLoopCtr, 0LL)) == 0LL)
    || (folderBoardLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                          (UnityEngine_Transform_o *)folderBoardLoopCtr,
                                                          this->fields.currentMoveIdx,
                                                          0LL),
        !folderBoardCenterChild) )
  {
LABEL_25:
    sub_1BDBAD4(folderBoardLoopCtr, callback);
  }
  UICenterOnChild__CenterOn_48443604(folderBoardCenterChild, (UnityEngine_Transform_o *)folderBoardLoopCtr, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassSelectController__SetButtonActive(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectClassButton; // x0
  bool v6; // w20
  const MethodInfo *v7; // x2

  selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
  if ( !selectClassButton
    || (selectClassButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0LL)) == 0LL
    || (v6 = isActive,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectClassButton, v6, 0LL),
        (selectClassButton = (UnityEngine_Component_o *)this->fields.rootComponent) == 0LL) )
  {
    sub_1BDBAD4(selectClassButton, isActive);
  }
  GrandQuestRootComponent__SetButtonActive((GrandQuestRootComponent_o *)selectClassButton, v6, v7);
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
    sub_1BDBAD4(0LL, classId);
  transform = UnityEngine_GameObject__get_transform(folderBoardPanel, 0LL);
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4B3E911 = 1;
  }
  TransformHelper__SetLocalPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ActionExtensions__Call(callback, 0LL);
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
    sub_1BDBAD4(this, uiSprite);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))uiSprite->klass->vtable._33_MakePixelPerfect.method)(
    uiSprite,
    uiSprite->klass->vtable._34_get_minWidth.methodPtr);
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


void __fastcall GrandQuestClassSelectController__SetupBoardList(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  UnityEngine_Component_o *selectedFrame; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4B3F7F6 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass32_0__SetupBoardList_b__0__, v5);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass32_0_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_20531/*"img_questboard_selectbg"*/, v7);
    sub_1BDB878(&StringLiteral_17504/*"btn_grand_select"*/, v8);
    sub_1BDB878(&StringLiteral_20532/*"img_questboard_selectflame"*/, v9);
    sub_1BDB878(&StringLiteral_20223/*"icon_grand_arrow"*/, v10);
    byte_4B3F7F6 = 1;
  }
  v11 = (Il2CppObject *)sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v11[1].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v11[1]);
  v11[1].monitor = callback;
  sub_1BDB81C(&v11[1].monitor);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.upArrowSprite,
    (System_String_o *)StringLiteral_20223/*"icon_grand_arrow"*/,
    v14);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.downArrowSprite,
    (System_String_o *)StringLiteral_20223/*"icon_grand_arrow"*/,
    v15);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectedMark,
    (System_String_o *)StringLiteral_20531/*"img_questboard_selectbg"*/,
    v16);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectClassSprite,
    (System_String_o *)StringLiteral_17504/*"btn_grand_select"*/,
    v17);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectedFrame,
    (System_String_o *)StringLiteral_20532/*"img_questboard_selectflame"*/,
    v18);
  selectedFrame = (UnityEngine_Component_o *)this->fields.selectedFrame;
  this->fields.currentState = 2;
  if ( !selectedFrame
    || (selectedFrame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedFrame, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedFrame, 0, 0LL),
        (selectedFrame = (UnityEngine_Component_o *)this->fields.upArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectedFrame, 1, 0LL),
        (selectedFrame = (UnityEngine_Component_o *)this->fields.downArrowBtn) == 0LL) )
  {
LABEL_9:
    sub_1BDBAD4(selectedFrame, v13);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectedFrame, 1, 0LL);
  GrandQuestClassSelectController__CreateBoardList(this, v19);
  v20 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    v11,
    Method_GrandQuestClassSelectController___c__DisplayClass32_0__SetupBoardList_b__0__,
    0LL);
  GrandQuestClassSelectController__SetBoardCenter(this, v20, v21);
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

  if ( (byte_4B3F804 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v5);
    sub_1BDB878(&GrandQuestClassSelectController_TypeInfo, v6);
    sub_1BDB878(&Method_GrandQuestClassSelectController___c__DisplayClass50_0__SlideInClassTab_b__0__, v7);
    sub_1BDB878(&GrandQuestClassSelectController___c__DisplayClass50_0_TypeInfo, v8);
    byte_4B3F804 = 1;
  }
  v9 = (Il2CppObject *)sub_1BDBAC4(GrandQuestClassSelectController___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  v9[1].monitor = callback;
  sub_1BDB81C(&v9[1].monitor);
  v9[2].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v9[2]);
  v9[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_object_(
                                 this->fields.folderBoardPanel,
                                 (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  sub_1BDB81C(&v9[1]);
  v12 = GrandQuestClassSelectController_TypeInfo;
  klass = (SlideFadeObject_o *)v9[1].klass;
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
  OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)v12);
  INTO_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->INTO_TIME;
  v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    v9,
    Method_GrandQuestClassSelectController___c__DisplayClass50_0__SlideInClassTab_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_1BDBAD4(v10, v11);
  SlideFadeObject__SlideIn_35226540(klass, OutPosOffsetX, INTO_TIME, 0.0, v16, 0LL);
}


void __fastcall GrandQuestClassSelectController__StartUp(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall GrandQuestClassSelectController___Awake_b__30_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestClassSelectController__OnClickUpDownChangeBoard(this, 1, v2);
}


void __fastcall GrandQuestClassSelectController___Awake_b__30_1(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestClassSelectController__OnClickUpDownChangeBoard(this, 0, v2);
}


void __fastcall GrandQuestClassSelectController___Awake_b__30_2(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v2; // x19
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  const MethodInfo *v4; // x2
  struct UISprite_o *downArrowSprite; // x8

  v2 = this;
  if ( (byte_4B3F807 & 1) == 0 )
  {
    this = (GrandQuestClassSelectController_o *)sub_1BDB878(
                                                  &Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___,
                                                  method);
    byte_4B3F807 = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild
    || (this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject) == 0LL
    || (this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___)) == 0LL
    || (downArrowSprite = this->fields.downArrowSprite) == 0LL )
  {
    sub_1BDBAD4(this, method);
  }
  GrandQuestClassSelectController__OnClickChallengeButton(v2, HIDWORD(downArrowSprite->fields.mRoot), v4);
}


bool __fastcall GrandQuestClassSelectController___CoWaitUntilBoardInit_b__34_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *currentFolderBoard; // x20
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *folderBoardList; // x0

  if ( (byte_4B3F808 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B3F808 = 1;
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
                                                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
  if ( !folderBoardList )
LABEL_12:
    sub_1BDBAD4(folderBoardList, v6);
  return !GrandQuestFolderBoardComponent__ExistBoardImage((GrandQuestFolderBoardComponent_o *)folderBoardList, v6);
}


int32_t __fastcall GrandQuestClassSelectController__get_CurrentState(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  return this->fields.currentState;
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


void __fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34___ctor(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34__MoveNext(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_o *this,
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

  if ( (byte_4B3F80C & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__34_0__, v3);
    sub_1BDB878(&UnityEngine_WaitWhile_TypeInfo, v4);
    byte_4B3F80C = 1;
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
    v7 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__34_0__, 0LL);
    v8 = (UnityEngine_WaitWhile_o *)sub_1BDBAC4(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BDB81C(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34__System_Collections_IEnumerator_Reset(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34__System_Collections_IEnumerator_get_Current(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34__System_IDisposable_Dispose(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass32_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass32_0___SetupBoardList_b__0(
        GrandQuestClassSelectController___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v4; // x1

  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  v4 = GrandQuestClassSelectController__CoWaitUntilBoardInit(this->fields.__4__this, this->fields.callback, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772(_4__this, v4, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass36_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass36_0___CreateBoardList_b__0(
        GrandQuestClassSelectController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x4
  GrandQuestClassSelectController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  GrandQuestClassSelectController__OnClickBoard(_4__this, this->fields.index, v2, 1, v3);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass43_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass43_0___GetFolderBoardByWarId_b__0(
        GrandQuestClassSelectController___c__DisplayClass43_0_o *this,
        GrandQuestFolderBoardComponent_o *x,
        const MethodInfo *method)
{
  struct GrandQuestFolderBoardItem_o *boardInfo; // x8

  if ( !x || (boardInfo = x->fields.boardInfo) == 0LL )
    sub_1BDBAD4(this, x);
  return boardInfo->fields._WarId_k__BackingField == this->fields.warId;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass47_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass47_0___GetTaskOfRelease_b__0(
        GrandQuestClassSelectController___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotReleased;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass47_0___GetTaskOfRelease_b__1(
        GrandQuestClassSelectController___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  GrandQuestClassSelectController_o *monitor; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F809 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestClassSelectController___c__DisplayClass47_0_o *)sub_1BDB878(
                                                                        &Method_GrandQuestClassSelectController___c__DisplayClass47_0__GetTaskOfRelease_b__2__,
                                                                        v4);
    byte_4B3F809 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  monitor = (GrandQuestClassSelectController_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassSelectController___c__DisplayClass47_0__GetTaskOfRelease_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassSelectController___c__DisplayClass47_0_o *)sub_1BDB81C(&v3[2]);
  }
  if ( !monitor )
    sub_1BDBAD4(this, method);
  GrandQuestClassSelectController__Release(monitor, klass, 0, v2);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass47_0___GetTaskOfRelease_b__2(
        GrandQuestClassSelectController___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNotReleased = 0;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass48_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass48_0___Release_b__0(
        GrandQuestClassSelectController___c__DisplayClass48_0_o *this,
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
    sub_1BDBAD4(this, method);
  }
  v4->fields.currentState = 1;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass49_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass49_0___GetTaskOfSlideInClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isTabChange;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass49_0___GetTaskOfSlideInClassTab_b__1(
        GrandQuestClassSelectController___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  GrandQuestClassSelectController_o *monitor; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F80A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestClassSelectController___c__DisplayClass49_0_o *)sub_1BDB878(
                                                                        &Method_GrandQuestClassSelectController___c__DisplayClass49_0__GetTaskOfSlideInClassTab_b__2__,
                                                                        v4);
    byte_4B3F80A = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  monitor = (GrandQuestClassSelectController_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassSelectController___c__DisplayClass49_0__GetTaskOfSlideInClassTab_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassSelectController___c__DisplayClass49_0_o *)sub_1BDB81C(&v3[2]);
  }
  if ( !monitor )
    sub_1BDBAD4(this, method);
  GrandQuestClassSelectController__SlideInClassTab(monitor, klass, v2);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass49_0___GetTaskOfSlideInClassTab_b__2(
        GrandQuestClassSelectController___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTabChange = 0;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass50_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass50_0___SlideInClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass50_0_o *this,
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
    sub_1BDBAD4(sfo, method);
  }
  _4__this->fields.currentState = 2;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass51_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassSelectController___c__DisplayClass51_0___GetTaskOfChangeClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isTabChange;
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass51_0___GetTaskOfChangeClassTab_b__1(
        GrandQuestClassSelectController___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *monitor; // x22
  GrandQuestClassSelectController_o *v6; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F80B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestClassSelectController___c__DisplayClass51_0_o *)sub_1BDB878(
                                                                        &Method_GrandQuestClassSelectController___c__DisplayClass51_0__GetTaskOfChangeClassTab_b__2__,
                                                                        v4);
    byte_4B3F80B = 1;
  }
  monitor = (System_Action_o *)v3[2].monitor;
  v6 = (GrandQuestClassSelectController_o *)v3[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v3,
      Method_GrandQuestClassSelectController___c__DisplayClass51_0__GetTaskOfChangeClassTab_b__2__,
      0LL);
    v3[2].monitor = monitor;
    this = (GrandQuestClassSelectController___c__DisplayClass51_0_o *)sub_1BDB81C(&v3[2].monitor);
  }
  if ( !v6 )
    sub_1BDBAD4(this, method);
  GrandQuestClassSelectController__SetClassTab(v6, (int32_t)method, monitor, v2);
}


void __fastcall GrandQuestClassSelectController___c__DisplayClass51_0___GetTaskOfChangeClassTab_b__2(
        GrandQuestClassSelectController___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTabChange = 0;
}