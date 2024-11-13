void __fastcall RoadmapDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct RoadmapDialog_StaticFields *static_fields; // x0

  if ( (byte_4B10FB9 & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20403/*"icon_summon_arrow2"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_11522/*"Roadmap_bg"*/, v5, v6);
    byte_4B10FB9 = 1;
  }
  RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_11522/*"Roadmap_bg"*/;
  sub_1BCA784(RoadmapDialog_TypeInfo->static_fields, StringLiteral_11522/*"Roadmap_bg"*/);
  v7 = StringLiteral_20403/*"icon_summon_arrow2"*/;
  static_fields = RoadmapDialog_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_ARROW = (struct System_String_o *)StringLiteral_20403/*"icon_summon_arrow2"*/;
  sub_1BCA784(&static_fields->SPRITE_NAME_ARROW, v7);
}


void __fastcall RoadmapDialog___ctor(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B10FB8 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v7, v8);
    byte_4B10FB8 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.roadmapAtlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v9;
  sub_1BCA784(&this->fields.roadmapAtlasList, v9);
  this->fields.centerBoardIndex = -1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4B10FB5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, onClosedCallback, method);
    sub_1BCA7E0(&Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__, v6, v7);
    sub_1BCA7E0(&RoadmapDialog___c__DisplayClass25_0_TypeInfo, v8, v9);
    byte_4B10FB5 = 1;
  }
  v10 = (Il2CppObject *)sub_1BCAA2C(RoadmapDialog___c__DisplayClass25_0_TypeInfo, onClosedCallback, method, v3);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  v10[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v10[1], this);
  v10[1].monitor = onClosedCallback;
  sub_1BCA784(&v10[1].monitor, onClosedCallback);
  this->fields.state = 3;
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(v16, v10, Method_RoadmapDialog___c__DisplayClass25_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RoadmapDialog__CoOpen(
        RoadmapDialog_o *this,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21

  if ( (byte_4B10FB0 & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapDialog__CoOpen_d__19_TypeInfo, onOpenedCallback, method);
    byte_4B10FB0 = 1;
  }
  v6 = sub_1BCAA2C(RoadmapDialog__CoOpen_d__19_TypeInfo, onOpenedCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784(v6 + 32, this);
  *(_QWORD *)(v6 + 40) = onOpenedCallback;
  sub_1BCA784(v6 + 40, onOpenedCallback);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B10FB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RoadmapDialog_OnClickClose__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B10FB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v6 = Method_RoadmapDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickClose__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_RoadmapDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v9);
    CommonUI__CloseRoadmapDialog((CommonUI_o *)Instance, 0LL);
  }
}


void __fastcall RoadmapDialog__OnClickLeftButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  ListViewManager_o *listViewManager; // x19
  __int64 v11; // x1
  int32_t CenterIndex; // w20
  int32_t v13; // w1

  if ( (byte_4B10FB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RoadmapDialog_OnClickLeftButton__, v4, v5);
    byte_4B10FB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_RoadmapDialog_OnClickLeftButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickLeftButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_RoadmapDialog_OnClickLeftButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0LL);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1BCAA3C(v8, v9);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11);
    v13 = System_Math__Max_63220196(CenterIndex - 1, 0, 0LL);
    ListViewManager__MoveCenterItem(listViewManager, v13, 1, 0, 0.0, 0LL);
  }
}


void __fastcall RoadmapDialog__OnClickRightButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 CenterIndex; // x0
  __int64 v9; // x1
  ListViewManager_o *listViewManager; // x20
  ListViewManager_o *v11; // x8
  int v12; // w19
  __int64 v13; // x1
  int32_t ItemSum; // w21
  int32_t v15; // w1

  if ( (byte_4B10FB4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RoadmapDialog_OnClickRightButton__, v4, v5);
    byte_4B10FB4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_RoadmapDialog_OnClickRightButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickRightButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_RoadmapDialog_OnClickRightButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0LL);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this->fields.listViewManager, 0LL),
          (v11 = (ListViewManager_o *)this->fields.listViewManager) == 0LL) )
    {
      sub_1BCAA3C(CenterIndex, v9);
    }
    v12 = CenterIndex;
    ItemSum = ListViewManager__get_ItemSum(v11, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
    v15 = System_Math__Min_63220524(v12 + 1, ItemSum - 1, 0LL);
    ListViewManager__MoveCenterItem(listViewManager, v15, 1, 0, 0.0, 0LL);
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
  __int64 v10; // x2
  System_String_o *basePanel; // x0
  __int64 v12; // x1
  UILabel_o *closeLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *v19; // x1

  if ( (byte_4B10FAF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, roadmapAssetData, roadmapAtlasList);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v9, v10);
    byte_4B10FAF = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  basePanel = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, basePanel, 0LL), (basePanel = (System_String_o *)this->fields.closeButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)basePanel, 0LL),
        AndroidBackKeyManager__AddBackBtn(gameObject, 0LL),
        this->fields.roadmapAtlasList = roadmapAtlasList,
        sub_1BCA784(&this->fields.roadmapAtlasList, roadmapAtlasList),
        (basePanel = (System_String_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(basePanel, roadmapAssetData);
  }
  this->fields.centerBoardIndex = RoadmapBoardListViewManager__CreateList(
                                    (RoadmapBoardListViewManager_o *)basePanel,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    v15);
  RoadmapDialog__UpdateLeftAndRightButton(this, v16);
  RoadmapDialog__SetUpUiSprites(this, v17);
  v19 = RoadmapDialog__CoOpen(this, onOpenedCallback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
}


void __fastcall RoadmapDialog__SetRoadmapSprite(
        RoadmapDialog_o *this,
        UISprite_o *targetSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B10FB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, targetSprite, spriteName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v11, v12);
    byte_4B10FB2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !roadmapAtlasList )
    sub_1BCAA3C(0LL, targetSprite);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v14 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1BCAA3C(v14, v15);
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)v19.fields._current, spriteName, 0LL);
    if ( Sprite )
    {
      if ( !targetSprite )
        sub_1BCAA3C(Sprite, v18);
      UISprite__set_atlas(targetSprite, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(targetSprite, spriteName, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


void __fastcall RoadmapDialog__SetUpUiSprites(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  RoadmapDialog_c *v5; // x0
  UISprite_o *bgSprite; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( (byte_4B10FB1 & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapDialog_TypeInfo, method, v2);
    byte_4B10FB1 = 1;
  }
  v5 = RoadmapDialog_TypeInfo;
  bgSprite = this->fields.bgSprite;
  if ( !RoadmapDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapDialog_TypeInfo, method);
    v5 = RoadmapDialog_TypeInfo;
  }
  RoadmapDialog__SetRoadmapSprite(this, bgSprite, v5->static_fields->SPRITE_NAME_BG, v3);
  RoadmapDialog__SetRoadmapSprite(
    this,
    this->fields.leftButtonSprite,
    RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_ARROW,
    v7);
  RoadmapDialog__SetRoadmapSprite(
    this,
    this->fields.rightButtonSprite,
    RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_ARROW,
    v8);
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
      sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(leftScrollArrowComponent, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B10FB7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B10FB7 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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
  __int64 v2; // x2
  RoadmapDialog__CoOpen_d__19_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RoadmapDialog_o *_4__this; // x20
  System_Action_o **p_onOpenedCallback; // x19
  System_Delegate_o *onOpenedCallback; // t1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x22
  System_Delegate_o *v16; // x0
  System_Delegate_o *v17; // x8
  System_Action_c *v18; // x1

  v3 = this;
  if ( (byte_4B10FBA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (RoadmapDialog__CoOpen_d__19_o *)sub_1BCA7E0(&Method_RoadmapDialog__CoOpen_b__19_0__, v4, v5);
    byte_4B10FBA = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (RoadmapDialog__CoOpen_d__19_o *)_4__this->fields.listViewManager) == 0LL
      || (ListViewManager__MoveCenterItem((ListViewManager_o *)this, _4__this->fields.centerBoardIndex, 0, 0, 0.0, 0LL),
          (this = (RoadmapDialog__CoOpen_d__19_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL)) == 0LL) )
    {
      sub_1BCAA3C(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    onOpenedCallback = (System_Delegate_o *)v3->fields.onOpenedCallback;
    p_onOpenedCallback = &v3->fields.onOpenedCallback;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)_4__this, Method_RoadmapDialog__CoOpen_b__19_0__, 0LL);
    v16 = System_Delegate__Combine(onOpenedCallback, (System_Delegate_o *)v15, 0LL);
    v17 = v16;
    if ( v16 )
    {
      v18 = System_Action_TypeInfo;
      if ( (System_Action_c *)v16->klass == System_Action_TypeInfo )
      {
        *p_onOpenedCallback = (System_Action_o *)v16;
        if ( (System_Action_c *)v16->klass == v18 )
          goto LABEL_14;
      }
      sub_1BCACFC(v16);
    }
    *p_onOpenedCallback = (System_Action_o *)v17;
LABEL_14:
    sub_1BCA784(p_onOpenedCallback, v17);
    BaseDialog__Open((BaseDialog_o *)_4__this, *p_onOpenedCallback, 0, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = &v3->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1BCA784(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_RoadmapDialog__CoOpen_d__19_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(0LL, method);
  onClosedCallback = this->fields.onClosedCallback;
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0LL);
  ActionExtensions__Call(onClosedCallback, 0LL);
}