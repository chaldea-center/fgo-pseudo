void __fastcall RoadmapDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct RoadmapDialog_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FFF4A & 1) == 0 )
  {
    sub_1B640C8(&RoadmapDialog_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20109/*"icon_summon_arrow2"*/, v4);
    sub_1B640C8(&StringLiteral_11331/*"Roadmap_bg"*/, v5);
    byte_49FFF4A = 1;
  }
  RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_11331/*"Roadmap_bg"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)RoadmapDialog_TypeInfo->static_fields, StringLiteral_11331/*"Roadmap_bg"*/, v2, v3);
  v6 = StringLiteral_20109/*"icon_summon_arrow2"*/;
  static_fields = RoadmapDialog_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_ARROW = (struct System_String_o *)StringLiteral_20109/*"icon_summon_arrow2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_ARROW, v6, v8, v9);
}


void __fastcall RoadmapDialog___ctor(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FFF49 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5);
    byte_49FFF49 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.roadmapAtlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.roadmapAtlasList, (int32_t)v6, v7, v8);
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
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49FFF46 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, onClosedCallback);
    sub_1B640C8(&Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__, v5);
    sub_1B640C8(&RoadmapDialog___c__DisplayClass25_0_TypeInfo, v6);
    byte_49FFF46 = 1;
  }
  v7 = sub_1B64314(RoadmapDialog___c__DisplayClass25_0_TypeInfo, onClosedCallback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = onClosedCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)onClosedCallback, v11, v12);
  this->fields.state = 3;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)v7, Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RoadmapDialog__CoOpen(
        RoadmapDialog_o *this,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FFF41 & 1) == 0 )
  {
    sub_1B640C8(&RoadmapDialog__CoOpen_d__19_TypeInfo, onOpenedCallback);
    byte_49FFF41 = 1;
  }
  v5 = sub_1B64314(RoadmapDialog__CoOpen_d__19_TypeInfo, onOpenedCallback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = onOpenedCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)onOpenedCallback, v8, v9);
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

  if ( (byte_49FFF47 & 1) == 0 )
  {
    sub_1B640C8(&Method_RoadmapDialog_OnClickClose__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FFF47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_RoadmapDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_RoadmapDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    CommonUI__CloseRoadmapDialog((CommonUI_o *)Instance, 0LL);
  }
}


void __fastcall RoadmapDialog__OnClickLeftButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  ListViewManager_o *listViewManager; // x19
  int32_t CenterIndex; // w20
  int32_t v9; // w1

  if ( (byte_49FFF44 & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    sub_1B640C8(&Method_RoadmapDialog_OnClickLeftButton__, v3);
    byte_49FFF44 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RoadmapDialog_OnClickLeftButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickLeftButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_RoadmapDialog_OnClickLeftButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1B64324(v6);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_62194036(CenterIndex - 1, 0, 0LL);
    ListViewManager__MoveCenterItem(listViewManager, v9, 1, 0, 0.0, 0LL);
  }
}


void __fastcall RoadmapDialog__OnClickRightButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 CenterIndex; // x0
  ListViewManager_o *listViewManager; // x20
  ListViewManager_o *v8; // x8
  int v9; // w19
  int32_t ItemSum; // w21
  int32_t v11; // w1

  if ( (byte_49FFF45 & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    sub_1B640C8(&Method_RoadmapDialog_OnClickRightButton__, v3);
    byte_49FFF45 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RoadmapDialog_OnClickRightButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickRightButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_RoadmapDialog_OnClickRightButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this->fields.listViewManager, 0LL),
          (v8 = (ListViewManager_o *)this->fields.listViewManager) == 0LL) )
    {
      sub_1B64324(CenterIndex);
    }
    v9 = CenterIndex;
    ItemSum = ListViewManager__get_ItemSum(v8, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = System_Math__Min_62194364(v9 + 1, ItemSum - 1, 0LL);
    ListViewManager__MoveCenterItem(listViewManager, v11, 1, 0, 0.0, 0LL);
  }
}


void __fastcall RoadmapDialog__Open(
        RoadmapDialog_o *this,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *basePanel; // x0
  UILabel_o *closeLabel; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_49FFF40 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, roadmapAtlasList);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v7);
    byte_49FFF40 = 1;
  }
  basePanel = (System_String_o *)this->fields.basePanel;
  this->fields.state = 1;
  if ( !basePanel )
    goto LABEL_10;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, System_Action_o *, const MethodInfo *, float))basePanel->klass->vtable._8_Equals.method)(
    basePanel,
    basePanel->klass->vtable._9_GetTypeCode.methodPtr,
    onOpenedCallback,
    method,
    0.0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  basePanel = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, basePanel, 0LL), (basePanel = (System_String_o *)this->fields.closeButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)basePanel, 0LL),
        AndroidBackKeyManager__AddBackBtn(gameObject, 0LL),
        this->fields.roadmapAtlasList = roadmapAtlasList,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.roadmapAtlasList,
          (int32_t)roadmapAtlasList,
          v11,
          v12),
        (basePanel = (System_String_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_10:
    sub_1B64324(basePanel);
  }
  this->fields.centerBoardIndex = RoadmapBoardListViewManager__CreateList(
                                    (RoadmapBoardListViewManager_o *)basePanel,
                                    roadmapAtlasList,
                                    v13);
  RoadmapDialog__UpdateLeftAndRightButton(this, v14);
  RoadmapDialog__SetUpUiSprites(this, v15);
  v17 = RoadmapDialog__CoOpen(this, onOpenedCallback, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
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
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FFF43 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, targetSprite);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v9);
    byte_49FFF43 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !roadmapAtlasList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v11 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1B64324(v11);
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)v14.fields._current, spriteName, 0LL);
    if ( Sprite )
    {
      if ( !targetSprite )
        sub_1B64324(Sprite);
      UISprite__set_atlas(targetSprite, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(targetSprite, spriteName, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


void __fastcall RoadmapDialog__SetUpUiSprites(RoadmapDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  RoadmapDialog_c *v4; // x0
  UISprite_o *bgSprite; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3

  if ( (byte_49FFF42 & 1) == 0 )
  {
    sub_1B640C8(&RoadmapDialog_TypeInfo, method);
    byte_49FFF42 = 1;
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
      sub_1B64324(0LL);
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
    sub_1B64324(leftScrollArrowComponent);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_49FFF48 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFF48 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3
  RoadmapDialog__CoOpen_d__19_o *v4; // x19
  __int64 v5; // x1
  int32_t _1__state; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct RoadmapDialog_o *_4__this; // x20
  ServantStatusBattleListViewItem_o *p_onOpenedCallback; // x19
  System_Delegate_o *onOpenedCallback; // t1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1

  v4 = this;
  if ( (byte_49FFF4B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (RoadmapDialog__CoOpen_d__19_o *)sub_1B640C8(&Method_RoadmapDialog__CoOpen_b__19_0__, v5);
    byte_49FFF4B = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (this = (RoadmapDialog__CoOpen_d__19_o *)_4__this->fields.listViewManager) == 0LL
      || (ListViewManager__MoveCenterItem((ListViewManager_o *)this, _4__this->fields.centerBoardIndex, 0, 0, 0.0, 0LL),
          (this = (RoadmapDialog__CoOpen_d__19_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL)) == 0LL) )
    {
      sub_1B64324(this);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    onOpenedCallback = (System_Delegate_o *)v4->fields.onOpenedCallback;
    p_onOpenedCallback = (ServantStatusBattleListViewItem_o *)&v4->fields.onOpenedCallback;
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)_4__this, Method_RoadmapDialog__CoOpen_b__19_0__, 0LL);
    v15 = System_Delegate__Combine(onOpenedCallback, (System_Delegate_o *)v14, 0LL);
    v18 = v15;
    if ( v15 )
    {
      v19 = System_Action_TypeInfo;
      if ( (System_Action_c *)v15->klass == System_Action_TypeInfo )
      {
        p_onOpenedCallback->klass = (ServantStatusBattleListViewItem_c *)v15;
        if ( (System_Action_c *)v15->klass == v19 )
          goto LABEL_14;
      }
      sub_1B645E4(v15);
    }
    p_onOpenedCallback->klass = (ServantStatusBattleListViewItem_c *)v18;
LABEL_14:
    sub_1B6406C(p_onOpenedCallback, (int32_t)v18, v16, v17);
    BaseDialog__Open((BaseDialog_o *)_4__this, (System_Action_o *)p_onOpenedCallback->klass, 0, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
    sub_1B6406C(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_RoadmapDialog__CoOpen_d__19_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
    sub_1B64324(0LL);
  onClosedCallback = this->fields.onClosedCallback;
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0LL);
  ActionExtensions__Call(onClosedCallback, 0LL);
}