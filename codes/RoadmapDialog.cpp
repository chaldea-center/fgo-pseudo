void __fastcall RoadmapDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct RoadmapDialog_StaticFields *static_fields; // x0

  if ( (byte_4B3EF8B & 1) == 0 )
  {
    sub_1BDB878(&RoadmapDialog_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_20259/*"icon_summon_arrow2"*/, v2);
    sub_1BDB878(&StringLiteral_11386/*"Roadmap_bg"*/, v3);
    byte_4B3EF8B = 1;
  }
  RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_11386/*"Roadmap_bg"*/;
  sub_1BDB81C(RoadmapDialog_TypeInfo->static_fields);
  static_fields = RoadmapDialog_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_ARROW = (struct System_String_o *)StringLiteral_20259/*"icon_summon_arrow2"*/;
  sub_1BDB81C(&static_fields->SPRITE_NAME_ARROW);
}


void __fastcall RoadmapDialog___ctor(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20

  if ( (byte_4B3EF8A & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_UIAtlas__TypeInfo, v4);
    byte_4B3EF8A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.roadmapAtlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v5;
  sub_1BDB81C(&this->fields.roadmapAtlasList);
  this->fields.centerBoardIndex = -1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RoadmapDialog__CheckAssert(RoadmapDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RoadmapDialog__Close(
        RoadmapDialog_o *this,
        System_Action_o *onClosedCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4B3EF87 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, onClosedCallback);
    sub_1BDB878(&Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__, v5);
    sub_1BDB878(&RoadmapDialog___c__DisplayClass25_0_TypeInfo, v6);
    byte_4B3EF87 = 1;
  }
  v7 = (Il2CppObject *)sub_1BDBAC4(RoadmapDialog___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    sub_1BDBAD4(v8, v9);
  v7[1].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v7[1]);
  v7[1].monitor = onClosedCallback;
  sub_1BDB81C(&v7[1].monitor);
  this->fields.state = 3;
  v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v10, v7, Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RoadmapDialog__CoOpen(
        RoadmapDialog_o *this,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4B3EF82 & 1) == 0 )
  {
    sub_1BDB878(&RoadmapDialog__CoOpen_d__19_TypeInfo, onOpenedCallback);
    byte_4B3EF82 = 1;
  }
  v5 = sub_1BDBAC4(RoadmapDialog__CoOpen_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C(v5 + 32);
  *(_QWORD *)(v5 + 40) = onOpenedCallback;
  sub_1BDB81C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall RoadmapDialog__EndClose(
        RoadmapDialog_o *this,
        System_Action_o *onClosedCallback,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ActionExtensions__Call(onClosedCallback, 0LL);
}


void __fastcall RoadmapDialog__Init(RoadmapDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RoadmapDialog__OnClickClose(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B3EF88 & 1) == 0 )
  {
    sub_1BDB878(&Method_RoadmapDialog_OnClickClose__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B3EF88 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_RoadmapDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_RoadmapDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BDBAD4(0LL, v7);
    CommonUI__CloseRoadmapDialog((CommonUI_o *)Instance, 0LL);
  }
}


void __fastcall RoadmapDialog__OnClickLeftButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  ListViewManager_o *listViewManager; // x19
  int32_t CenterIndex; // w20
  int32_t v10; // w1

  if ( (byte_4B3EF85 & 1) == 0 )
  {
    sub_1BDB878(&System_Math_TypeInfo, method);
    sub_1BDB878(&Method_RoadmapDialog_OnClickLeftButton__, v3);
    byte_4B3EF85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RoadmapDialog_OnClickLeftButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickLeftButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_RoadmapDialog_OnClickLeftButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0LL);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1BDBAD4(v6, v7);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v10 = System_Math__Max_64100580(CenterIndex - 1, 0, 0LL);
    ListViewManager__MoveCenterItem(listViewManager, v10, 1, 0, 0.0, 0LL);
  }
}


void __fastcall RoadmapDialog__OnClickRightButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 CenterIndex; // x0
  __int64 v7; // x1
  ListViewManager_o *listViewManager; // x20
  ListViewManager_o *v9; // x8
  int v10; // w19
  int32_t ItemSum; // w21
  int32_t v12; // w1

  if ( (byte_4B3EF86 & 1) == 0 )
  {
    sub_1BDB878(&System_Math_TypeInfo, method);
    sub_1BDB878(&Method_RoadmapDialog_OnClickRightButton__, v3);
    byte_4B3EF86 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RoadmapDialog_OnClickRightButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickRightButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_RoadmapDialog_OnClickRightButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0LL);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this->fields.listViewManager, 0LL),
          (v9 = (ListViewManager_o *)this->fields.listViewManager) == 0LL) )
    {
      sub_1BDBAD4(CenterIndex, v7);
    }
    v10 = CenterIndex;
    ItemSum = ListViewManager__get_ItemSum(v9, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = System_Math__Min_64100908(v10 + 1, ItemSum - 1, 0LL);
    ListViewManager__MoveCenterItem(listViewManager, v12, 1, 0, 0.0, 0LL);
  }
}


void __fastcall RoadmapDialog__Open(
        RoadmapDialog_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *basePanel; // x0
  UILabel_o *closeLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_4B3EF81 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, roadmapAssetData);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v9);
    byte_4B3EF81 = 1;
  }
  basePanel = (System_String_o *)this->fields.basePanel;
  this->fields.state = 1;
  if ( !basePanel )
    goto LABEL_10;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, System_Collections_Generic_List_UIAtlas__o *, System_Action_o *, const MethodInfo *, float))basePanel->klass->vtable._8_Equals.method)(
    basePanel,
    basePanel->klass->vtable._9_GetTypeCode.methodPtr,
    roadmapAtlasList,
    onOpenedCallback,
    method,
    0.0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  basePanel = LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, basePanel, 0LL), (basePanel = (System_String_o *)this->fields.closeButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)basePanel, 0LL),
        AndroidBackKeyManager__AddBackBtn(gameObject, 0LL),
        this->fields.roadmapAtlasList = roadmapAtlasList,
        sub_1BDB81C(&this->fields.roadmapAtlasList),
        (basePanel = (System_String_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(basePanel, roadmapAssetData);
  }
  this->fields.centerBoardIndex = RoadmapBoardListViewManager__CreateList(
                                    (RoadmapBoardListViewManager_o *)basePanel,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    v13);
  RoadmapDialog__UpdateLeftAndRightButton(this, v14);
  RoadmapDialog__SetUpUiSprites(this, v15);
  v17 = RoadmapDialog__CoOpen(this, onOpenedCallback, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
}


void __fastcall RoadmapDialog__SetRoadmapSprite(
        RoadmapDialog_o *this,
        UISprite_o *targetSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3EF84 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, targetSprite);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v9);
    byte_4B3EF84 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !roadmapAtlasList )
    sub_1BDBAD4(0LL, targetSprite);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v11 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1BDBAD4(v11, v12);
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0LL);
    if ( Sprite )
    {
      if ( !targetSprite )
        sub_1BDBAD4(Sprite, v15);
      UISprite__set_atlas(targetSprite, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(targetSprite, spriteName, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


void __fastcall RoadmapDialog__SetUpUiSprites(RoadmapDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  RoadmapDialog_c *v4; // x0
  UISprite_o *bgSprite; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3

  if ( (byte_4B3EF83 & 1) == 0 )
  {
    sub_1BDB878(&RoadmapDialog_TypeInfo, method);
    byte_4B3EF83 = 1;
  }
  v4 = RoadmapDialog_TypeInfo;
  bgSprite = this->fields.bgSprite;
  if ( !RoadmapDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapDialog_TypeInfo);
    v4 = RoadmapDialog_TypeInfo;
  }
  RoadmapDialog__SetRoadmapSprite(this, bgSprite, v4->static_fields->SPRITE_NAME_BG, v2);
  RoadmapDialog__SetRoadmapSprite(
    this,
    this->fields.leftButtonSprite,
    RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_ARROW,
    v6);
  RoadmapDialog__SetRoadmapSprite(
    this,
    this->fields.rightButtonSprite,
    RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_ARROW,
    v7);
}


void __fastcall RoadmapDialog__Update(RoadmapDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t CenterIndex; // w0
  const MethodInfo *v5; // x1

  if ( this->fields.state == 2 )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1BDBAD4(0LL, method);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0LL);
    if ( this->fields.centerBoardIndex != CenterIndex )
    {
      this->fields.centerBoardIndex = CenterIndex;
      RoadmapDialog__UpdateLeftAndRightButton(this, v5);
    }
  }
}


void __fastcall RoadmapDialog__UpdateLeftAndRightButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_o *leftScrollArrowComponent; // x0
  ScrollArrowComponent_o *rightScrollArrowComponent; // x20
  int32_t centerBoardIndex; // w21
  struct UIButton_o *rightButton; // x20
  int32_t v7; // w19

  leftScrollArrowComponent = this->fields.leftScrollArrowComponent;
  if ( !leftScrollArrowComponent )
    goto LABEL_8;
  ScrollArrowComponent__SetDisp(leftScrollArrowComponent, this->fields.centerBoardIndex > 0, 0, 0LL);
  leftScrollArrowComponent = (ScrollArrowComponent_o *)this->fields.listViewManager;
  if ( !leftScrollArrowComponent )
    goto LABEL_8;
  rightScrollArrowComponent = this->fields.rightScrollArrowComponent;
  centerBoardIndex = this->fields.centerBoardIndex;
  leftScrollArrowComponent = (ScrollArrowComponent_o *)ListViewManager__get_ItemSum(
                                                         (ListViewManager_o *)leftScrollArrowComponent,
                                                         0LL);
  if ( !rightScrollArrowComponent
    || (ScrollArrowComponent__SetDisp(
          rightScrollArrowComponent,
          centerBoardIndex < (int)leftScrollArrowComponent - 1,
          0,
          0LL),
        (leftScrollArrowComponent = (ScrollArrowComponent_o *)this->fields.leftButton) == 0LL)
    || (((void (__fastcall *)(ScrollArrowComponent_o *, bool, void *))leftScrollArrowComponent->klass[1]._1.namespaze)(
          leftScrollArrowComponent,
          this->fields.centerBoardIndex > 0,
          leftScrollArrowComponent->klass[1]._1.byval_arg.data),
        (leftScrollArrowComponent = (ScrollArrowComponent_o *)this->fields.listViewManager) == 0LL)
    || (rightButton = this->fields.rightButton,
        v7 = this->fields.centerBoardIndex,
        leftScrollArrowComponent = (ScrollArrowComponent_o *)ListViewManager__get_ItemSum(
                                                               (ListViewManager_o *)leftScrollArrowComponent,
                                                               0LL),
        !rightButton) )
  {
LABEL_8:
    sub_1BDBAD4(leftScrollArrowComponent, method);
  }
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))rightButton->klass->vtable._5_set_isEnabled.method)(
    rightButton,
    v7 < (int)leftScrollArrowComponent - 1,
    rightButton->klass->vtable._6_OnInit.methodPtr);
}


void __fastcall RoadmapDialog___CoOpen_b__19_0(RoadmapDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall RoadmapDialog__get_closeBtnObject(RoadmapDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B3EF89 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3EF89 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall RoadmapDialog__CoOpen_d__19___ctor(
        RoadmapDialog__CoOpen_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall RoadmapDialog__CoOpen_d__19__MoveNext(RoadmapDialog__CoOpen_d__19_o *this, const MethodInfo *method)
{
  RoadmapDialog__CoOpen_d__19_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RoadmapDialog_o *_4__this; // x20
  System_Action_o **p_onOpenedCallback; // x19
  System_Delegate_o *onOpenedCallback; // t1
  System_Action_o *v10; // x22
  System_Delegate_o *v11; // x0
  System_Delegate_o *v12; // x8
  System_Action_c *v13; // x1

  v2 = this;
  if ( (byte_4B3EF8C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (RoadmapDialog__CoOpen_d__19_o *)sub_1BDB878(&Method_RoadmapDialog__CoOpen_b__19_0__, v3);
    byte_4B3EF8C = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (RoadmapDialog__CoOpen_d__19_o *)_4__this->fields.listViewManager) == 0LL
      || (ListViewManager__MoveCenterItem((ListViewManager_o *)this, _4__this->fields.centerBoardIndex, 0, 0, 0.0, 0LL),
          (this = (RoadmapDialog__CoOpen_d__19_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL)) == 0LL) )
    {
      sub_1BDBAD4(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    onOpenedCallback = (System_Delegate_o *)v2->fields.onOpenedCallback;
    p_onOpenedCallback = &v2->fields.onOpenedCallback;
    v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)_4__this, Method_RoadmapDialog__CoOpen_b__19_0__, 0LL);
    v11 = System_Delegate__Combine(onOpenedCallback, (System_Delegate_o *)v10, 0LL);
    v12 = v11;
    if ( v11 )
    {
      v13 = System_Action_TypeInfo;
      if ( (System_Action_c *)v11->klass == System_Action_TypeInfo )
      {
        *p_onOpenedCallback = (System_Action_o *)v11;
        if ( (System_Action_c *)v11->klass == v13 )
          goto LABEL_14;
      }
      sub_1BDBD94(v11);
    }
    *p_onOpenedCallback = (System_Action_o *)v12;
LABEL_14:
    sub_1BDB81C(p_onOpenedCallback);
    BaseDialog__Open((BaseDialog_o *)_4__this, *p_onOpenedCallback, 0, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1BDB81C(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall RoadmapDialog__CoOpen_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RoadmapDialog__CoOpen_d__19__System_Collections_IEnumerator_Reset(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_RoadmapDialog__CoOpen_d__19_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall RoadmapDialog__CoOpen_d__19__System_Collections_IEnumerator_get_Current(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RoadmapDialog__CoOpen_d__19__System_IDisposable_Dispose(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RoadmapDialog___c__DisplayClass25_0___ctor(
        RoadmapDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RoadmapDialog___c__DisplayClass25_0___Close_b__0(
        RoadmapDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  struct RoadmapDialog_o *_4__this; // x0
  System_Action_o *onClosedCallback; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  onClosedCallback = this->fields.onClosedCallback;
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0LL);
  ActionExtensions__Call(onClosedCallback, 0LL);
}