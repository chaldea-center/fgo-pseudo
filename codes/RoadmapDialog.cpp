void RoadmapDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct RoadmapDialog_StaticFields *static_fields; // x0

  if ( (byte_4C31A52 & 1) == 0 )
  {
    sub_1C32C20(&RoadmapDialog_TypeInfo);
    sub_1C32C20(&StringLiteral_20238/*"icon_summon_arrow2"*/);
    sub_1C32C20(&StringLiteral_11415/*"Roadmap_bg"*/);
    byte_4C31A52 = 1;
  }
  RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_11415/*"Roadmap_bg"*/;
  sub_1C32BC4(RoadmapDialog_TypeInfo->static_fields, StringLiteral_11415/*"Roadmap_bg"*/);
  v1 = StringLiteral_20238/*"icon_summon_arrow2"*/;
  static_fields = RoadmapDialog_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_ARROW = (struct System_String_o *)StringLiteral_20238/*"icon_summon_arrow2"*/;
  sub_1C32BC4(&static_fields->SPRITE_NAME_ARROW, v1);
}


void RoadmapDialog___ctor(RoadmapDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C31A51 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4C31A51 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.roadmapAtlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C32BC4(&this->fields.roadmapAtlasList, v3);
  this->fields.centerBoardIndex = -1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RoadmapDialog__CheckAssert(RoadmapDialog_o *this, const MethodInfo *method)
{
  ;
}


void RoadmapDialog__Close(RoadmapDialog_o *this, System_Action_o *onClosedCallback, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C31A4E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__);
    sub_1C32C20(&RoadmapDialog___c__DisplayClass25_0_TypeInfo);
    byte_4C31A4E = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(RoadmapDialog___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  v5[1].monitor = onClosedCallback;
  sub_1C32BC4(&v5[1].monitor, onClosedCallback);
  this->fields.state = 3;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, v5, Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0);
}


System_Collections_IEnumerator_o *RoadmapDialog__CoOpen(
        RoadmapDialog_o *this,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C31A49 & 1) == 0 )
  {
    sub_1C32C20(&RoadmapDialog__CoOpen_d__19_TypeInfo);
    byte_4C31A49 = 1;
  }
  v5 = sub_1C32E6C(RoadmapDialog__CoOpen_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = onOpenedCallback;
  sub_1C32BC4(v5 + 40, onOpenedCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


void RoadmapDialog__EndClose(RoadmapDialog_o *this, System_Action_o *onClosedCallback, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  ActionExtensions__Call(onClosedCallback, 0);
}


void RoadmapDialog__Init(RoadmapDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RoadmapDialog__OnClickClose(RoadmapDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C31A4F & 1) == 0 )
  {
    sub_1C32C20(&Method_RoadmapDialog_OnClickClose__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31A4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RoadmapDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RoadmapDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    CommonUI__CloseRoadmapDialog((CommonUI_o *)Instance, 0);
  }
}


void RoadmapDialog__OnClickLeftButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  ListViewManager_o *listViewManager; // x19
  int32_t CenterIndex; // w20
  int32_t v8; // w1

  if ( (byte_4C31A4C & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Method_RoadmapDialog_OnClickLeftButton__);
    byte_4C31A4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RoadmapDialog_OnClickLeftButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickLeftButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RoadmapDialog_OnClickLeftButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C32E7C(v5);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v8 = System_Math__Max_65041976(CenterIndex - 1, 0, 0);
    ListViewManager__MoveCenterItem(listViewManager, v8, 1, 0, 0.0, 0);
  }
}


void RoadmapDialog__OnClickRightButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 CenterIndex; // x0
  ListViewManager_o *listViewManager; // x20
  ListViewManager_o *v7; // x8
  int v8; // w19
  int32_t ItemSum; // w21
  int32_t v10; // w1

  if ( (byte_4C31A4D & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Method_RoadmapDialog_OnClickRightButton__);
    byte_4C31A4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RoadmapDialog_OnClickRightButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickRightButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RoadmapDialog_OnClickRightButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this->fields.listViewManager, 0),
          (v7 = (ListViewManager_o *)this->fields.listViewManager) == 0) )
    {
      sub_1C32E7C(CenterIndex);
    }
    v8 = CenterIndex;
    ItemSum = ListViewManager__get_ItemSum(v7, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v10 = System_Math__Min_65042304(v8 + 1, ItemSum - 1, 0);
    ListViewManager__MoveCenterItem(listViewManager, v10, 1, 0, 0.0, 0);
  }
}


void RoadmapDialog__Open(
        RoadmapDialog_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  System_String_o *basePanel; // x0
  UILabel_o *closeLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4C31A48 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C31A48 = 1;
  }
  basePanel = (System_String_o *)this->fields.basePanel;
  this->fields.state = 1;
  if ( !basePanel )
    goto LABEL_10;
  ((void (__fastcall *)(System_String_o *, const MethodInfo *, System_Collections_Generic_List_UIAtlas__o *, System_Action_o *, const MethodInfo *, float))basePanel->klass->vtable._8_Equals.methodPtr)(
    basePanel,
    basePanel->klass->vtable._8_Equals.method,
    roadmapAtlasList,
    onOpenedCallback,
    method,
    0.0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  basePanel = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, basePanel, 0), (basePanel = (System_String_o *)this->fields.closeButton) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)basePanel, 0),
        AndroidBackKeyManager__AddBackBtn(gameObject, 0),
        this->fields.roadmapAtlasList = roadmapAtlasList,
        sub_1C32BC4(&this->fields.roadmapAtlasList, roadmapAtlasList),
        (basePanel = (System_String_o *)this->fields.listViewManager) == 0) )
  {
LABEL_10:
    sub_1C32E7C(basePanel);
  }
  this->fields.centerBoardIndex = RoadmapBoardListViewManager__CreateList(
                                    (RoadmapBoardListViewManager_o *)basePanel,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    v12);
  RoadmapDialog__UpdateLeftAndRightButton(this, v13);
  RoadmapDialog__SetUpUiSprites(this, v14);
  v16 = RoadmapDialog__CoOpen(this, onOpenedCallback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void RoadmapDialog__SetRoadmapSprite(
        RoadmapDialog_o *this,
        UISprite_o *targetSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C31A4B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4C31A4B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !roadmapAtlasList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_1C32E7C(v8);
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)v11.fields._current, spriteName, 0);
    if ( Sprite )
    {
      if ( !targetSprite )
        sub_1C32E7C(Sprite);
      UISprite__set_atlas(targetSprite, (UIAtlas_o *)current, 0);
      UISprite__set_spriteName(targetSprite, spriteName, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


void RoadmapDialog__SetUpUiSprites(RoadmapDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  RoadmapDialog_c *v4; // x0
  UISprite_o *bgSprite; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3

  if ( (byte_4C31A4A & 1) == 0 )
  {
    sub_1C32C20(&RoadmapDialog_TypeInfo);
    byte_4C31A4A = 1;
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


void RoadmapDialog__Update(RoadmapDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t CenterIndex; // w0
  const MethodInfo *v5; // x1

  if ( this->fields.state == 2 )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C32E7C(0);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0);
    if ( this->fields.centerBoardIndex != CenterIndex )
    {
      this->fields.centerBoardIndex = CenterIndex;
      RoadmapDialog__UpdateLeftAndRightButton(this, v5);
    }
  }
}


void RoadmapDialog__UpdateLeftAndRightButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_o *leftScrollArrowComponent; // x0
  ScrollArrowComponent_o *rightScrollArrowComponent; // x20
  int32_t centerBoardIndex; // w21
  struct UIButton_o *rightButton; // x20
  int32_t v7; // w19

  leftScrollArrowComponent = this->fields.leftScrollArrowComponent;
  if ( !leftScrollArrowComponent )
    goto LABEL_8;
  ScrollArrowComponent__SetDisp(leftScrollArrowComponent, this->fields.centerBoardIndex > 0, 0, 0);
  leftScrollArrowComponent = (ScrollArrowComponent_o *)this->fields.listViewManager;
  if ( !leftScrollArrowComponent )
    goto LABEL_8;
  rightScrollArrowComponent = this->fields.rightScrollArrowComponent;
  centerBoardIndex = this->fields.centerBoardIndex;
  leftScrollArrowComponent = (ScrollArrowComponent_o *)ListViewManager__get_ItemSum(
                                                         (ListViewManager_o *)leftScrollArrowComponent,
                                                         0);
  if ( !rightScrollArrowComponent
    || (ScrollArrowComponent__SetDisp(
          rightScrollArrowComponent,
          centerBoardIndex < (int)leftScrollArrowComponent - 1,
          0,
          0),
        (leftScrollArrowComponent = (ScrollArrowComponent_o *)this->fields.leftButton) == 0)
    || (((void (__fastcall *)(ScrollArrowComponent_o *, bool, const char *))leftScrollArrowComponent->klass[1]._1.name)(
          leftScrollArrowComponent,
          this->fields.centerBoardIndex > 0,
          leftScrollArrowComponent->klass[1]._1.namespaze),
        (leftScrollArrowComponent = (ScrollArrowComponent_o *)this->fields.listViewManager) == 0)
    || (rightButton = this->fields.rightButton,
        v7 = this->fields.centerBoardIndex,
        leftScrollArrowComponent = (ScrollArrowComponent_o *)ListViewManager__get_ItemSum(
                                                               (ListViewManager_o *)leftScrollArrowComponent,
                                                               0),
        !rightButton) )
  {
LABEL_8:
    sub_1C32E7C(leftScrollArrowComponent);
  }
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))rightButton->klass->vtable._5_set_isEnabled.methodPtr)(
    rightButton,
    v7 < (int)leftScrollArrowComponent - 1,
    rightButton->klass->vtable._5_set_isEnabled.method);
}


void RoadmapDialog___CoOpen_b__19_0(RoadmapDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *RoadmapDialog__get_closeBtnObject(RoadmapDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C31A50 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31A50 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void RoadmapDialog__CoOpen_d__19___ctor(
        RoadmapDialog__CoOpen_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RoadmapDialog__CoOpen_d__19__MoveNext(RoadmapDialog__CoOpen_d__19_o *this, const MethodInfo *method)
{
  RoadmapDialog__CoOpen_d__19_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RoadmapDialog_o *_4__this; // x20
  System_Action_o **p_onOpenedCallback; // x19
  System_Delegate_o *onOpenedCallback; // t1
  System_Action_o *v9; // x22
  System_Delegate_o *v10; // x0
  System_Delegate_o *v11; // x8
  System_Action_c *v12; // x1

  v2 = this;
  if ( (byte_4C31A53 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (RoadmapDialog__CoOpen_d__19_o *)sub_1C32C20(&Method_RoadmapDialog__CoOpen_b__19_0__);
    byte_4C31A53 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (RoadmapDialog__CoOpen_d__19_o *)_4__this->fields.listViewManager) == 0
      || (ListViewManager__MoveCenterItem((ListViewManager_o *)this, _4__this->fields.centerBoardIndex, 0, 0, 0.0, 0),
          (this = (RoadmapDialog__CoOpen_d__19_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0)) == 0) )
    {
      sub_1C32E7C(this);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    onOpenedCallback = (System_Delegate_o *)v2->fields.onOpenedCallback;
    p_onOpenedCallback = &v2->fields.onOpenedCallback;
    v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)_4__this, Method_RoadmapDialog__CoOpen_b__19_0__, 0);
    v10 = System_Delegate__Combine(onOpenedCallback, (System_Delegate_o *)v9, 0);
    v11 = v10;
    if ( v10 )
    {
      v12 = System_Action_TypeInfo;
      if ( (System_Action_c *)v10->klass == System_Action_TypeInfo )
      {
        *p_onOpenedCallback = (System_Action_o *)v10;
        if ( (System_Action_c *)v10->klass == v12 )
          goto LABEL_14;
      }
      sub_1C3313C(v10);
    }
    *p_onOpenedCallback = (System_Action_o *)v11;
LABEL_14:
    sub_1C32BC4(p_onOpenedCallback, v11);
    BaseDialog__Open((BaseDialog_o *)_4__this, *p_onOpenedCallback, 0, 0, 0);
    return 0;
  }
  if ( !_1__state )
  {
    v2->fields.__2__current = 0;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1C32BC4(p__2__current, 0);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *RoadmapDialog__CoOpen_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RoadmapDialog__CoOpen_d__19__System_Collections_IEnumerator_Reset(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_RoadmapDialog__CoOpen_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *RoadmapDialog__CoOpen_d__19__System_Collections_IEnumerator_get_Current(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RoadmapDialog__CoOpen_d__19__System_IDisposable_Dispose(
        RoadmapDialog__CoOpen_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void RoadmapDialog___c__DisplayClass25_0___ctor(RoadmapDialog___c__DisplayClass25_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RoadmapDialog___c__DisplayClass25_0___Close_b__0(
        RoadmapDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  struct RoadmapDialog_o *_4__this; // x0
  System_Action_o *onClosedCallback; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  onClosedCallback = this->fields.onClosedCallback;
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0);
  ActionExtensions__Call(onClosedCallback, 0);
}