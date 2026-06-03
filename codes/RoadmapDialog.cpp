void RoadmapDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct RoadmapDialog_StaticFields *static_fields; // x0

  if ( (byte_4E71ABD & 1) == 0 )
  {
    sub_1D0F0B4(&RoadmapDialog_TypeInfo);
    sub_1D0F0B4(&StringLiteral_20624/*"icon_summon_arrow2"*/);
    sub_1D0F0B4(&StringLiteral_11583/*"Roadmap_bg"*/);
    byte_4E71ABD = 1;
  }
  RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_11583/*"Roadmap_bg"*/;
  sub_1D0F058(RoadmapDialog_TypeInfo->static_fields, StringLiteral_11583/*"Roadmap_bg"*/);
  v1 = StringLiteral_20624/*"icon_summon_arrow2"*/;
  static_fields = RoadmapDialog_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_ARROW = (struct System_String_o *)StringLiteral_20624/*"icon_summon_arrow2"*/;
  sub_1D0F058(&static_fields->SPRITE_NAME_ARROW, v1);
}


void RoadmapDialog___ctor(RoadmapDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4E71ABC & 1) == 0 )
  {
    sub_1D0F0B4(&BaseDialog_TypeInfo);
    byte_4E71ABC = 1;
  }
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
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_4E71AB8 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_RoadmapDialog___c__DisplayClass26_0__Close_b__0__);
    sub_1D0F0B4(&RoadmapDialog___c__DisplayClass26_0_TypeInfo);
    byte_4E71AB8 = 1;
  }
  v5 = (Il2CppObject *)sub_1D0F300(RoadmapDialog___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1D0F058(&v5[1], this);
  v5[1].monitor = onClosedCallback;
  sub_1D0F058(&v5[1].monitor, onClosedCallback);
  this->fields.state = 3;
  v8 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v8, v5, Method_RoadmapDialog___c__DisplayClass26_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


System_Collections_IEnumerator_o *RoadmapDialog__CoOpen(
        RoadmapDialog_o *this,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4E71AB3 & 1) == 0 )
  {
    sub_1D0F0B4(&RoadmapDialog__CoOpen_d__20_TypeInfo);
    byte_4E71AB3 = 1;
  }
  v5 = sub_1D0F300(RoadmapDialog__CoOpen_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1D0F058(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = onOpenedCallback;
  sub_1D0F058(v5 + 40, onOpenedCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


void RoadmapDialog__EndClose(RoadmapDialog_o *this, System_Action_o *onClosedCallback, const MethodInfo *method)
{
  if ( (byte_4E71AB9 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11582/*"RoadMap"*/);
    byte_4E71AB9 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_11582/*"RoadMap"*/, 0);
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
  __int64 v6; // x1

  if ( (byte_4E71ABA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_RoadmapDialog_OnClickClose__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71ABA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RoadmapDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RoadmapDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1D0F30C(0, v6);
    CommonUI__CloseRoadmapDialog((CommonUI_o *)Instance, 0);
  }
}


void RoadmapDialog__OnClickLeftButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  ListViewManager_o *listViewManager; // x19
  int32_t CenterIndex; // w20
  int32_t v9; // w1

  if ( (byte_4E71AB6 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Math_TypeInfo);
    sub_1D0F0B4(&Method_RoadmapDialog_OnClickLeftButton__);
    byte_4E71AB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RoadmapDialog_OnClickLeftButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickLeftButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RoadmapDialog_OnClickLeftButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1D0F30C(v5, v6);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_67084744(CenterIndex - 1, 0, 0);
    ListViewManager__MoveCenterItem(listViewManager, v9, 1, 0, 0.0, 0, 0);
  }
}


void RoadmapDialog__OnClickRightButton(RoadmapDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 CenterIndex; // x0
  __int64 v6; // x1
  ListViewManager_o *listViewManager; // x20
  ListViewManager_o *v8; // x8
  int v9; // w19
  int32_t ItemSum; // w21
  int32_t v11; // w1

  if ( (byte_4E71AB7 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Math_TypeInfo);
    sub_1D0F0B4(&Method_RoadmapDialog_OnClickRightButton__);
    byte_4E71AB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RoadmapDialog_OnClickRightButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickRightButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RoadmapDialog_OnClickRightButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this->fields.listViewManager, 0),
          (v8 = (ListViewManager_o *)this->fields.listViewManager) == 0) )
    {
      sub_1D0F30C(CenterIndex, v6);
    }
    v9 = CenterIndex;
    ItemSum = ListViewManager__get_ItemSum(v8, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = System_Math__Min_67085072(v9 + 1, ItemSum - 1, 0);
    ListViewManager__MoveCenterItem(listViewManager, v11, 1, 0, 0.0, 0, 0);
  }
}


void RoadmapDialog__Open(RoadmapDialog_o *this, System_Action_o *onOpenedCallback, const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  CommonUI_o *basePanel; // x0
  __int64 v7; // x1
  AssetLoader_LoadEndDataHandler_o *v8; // x20

  if ( (byte_4E71AB1 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_RoadmapDialog___c__DisplayClass18_0__Open_b__0__);
    sub_1D0F0B4(&RoadmapDialog___c__DisplayClass18_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11582/*"RoadMap"*/);
    byte_4E71AB1 = 1;
  }
  v5 = (Il2CppObject *)sub_1D0F300(RoadmapDialog___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5[1].klass = (Il2CppClass *)this;
  sub_1D0F058(&v5[1], this);
  v5[1].monitor = onOpenedCallback;
  sub_1D0F058(&v5[1].monitor, onOpenedCallback);
  basePanel = (CommonUI_o *)this->fields.basePanel;
  this->fields.state = 1;
  if ( !basePanel
    || (((void (__fastcall *)(CommonUI_o *, Il2CppClass *, float))basePanel->klass[1]._1.element_class)(
          basePanel,
          basePanel->klass[1]._1.castClass,
          0.0),
        (basePanel = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_9:
    sub_1D0F30C(basePanel, v7);
  }
  CommonUI__SetLoadMode(basePanel, 1, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__SetAssetBundleUnload((System_String_o *)StringLiteral_11582/*"RoadMap"*/, 0);
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v8, v5, Method_RoadmapDialog___c__DisplayClass18_0__Open_b__0__, 0);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_11582/*"RoadMap"*/, v8, 1, 0, 0);
}


void RoadmapDialog__SetRoadmapSprite(
        RoadmapDialog_o *this,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        UISprite_o *targetSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E71AB5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    this = (RoadmapDialog_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4E71AB5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !roadmapAtlasList )
    sub_1D0F30C(this, roadmapAtlasList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1D0F30C(v8, v9);
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)v13.fields._current, spriteName, 0);
    if ( Sprite )
    {
      if ( !targetSprite )
        sub_1D0F30C(Sprite, v12);
      UISprite__set_atlas(targetSprite, (UIAtlas_o *)current, 0);
      UISprite__set_spriteName(targetSprite, spriteName, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


void RoadmapDialog__SetUpUiSprites(
        RoadmapDialog_o *this,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  RoadmapDialog_c *v6; // x0
  UISprite_o *bgSprite; // x21
  RoadmapDialog_o *v8; // x0
  const MethodInfo *v9; // x4
  RoadmapDialog_o *v10; // x0
  const MethodInfo *v11; // x4

  if ( (byte_4E71AB4 & 1) == 0 )
  {
    sub_1D0F0B4(&RoadmapDialog_TypeInfo);
    byte_4E71AB4 = 1;
  }
  v6 = RoadmapDialog_TypeInfo;
  bgSprite = this->fields.bgSprite;
  if ( !RoadmapDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapDialog_TypeInfo);
    v6 = RoadmapDialog_TypeInfo;
  }
  RoadmapDialog__SetRoadmapSprite(
    (RoadmapDialog_o *)v6,
    roadmapAtlasList,
    bgSprite,
    v6->static_fields->SPRITE_NAME_BG,
    v3);
  RoadmapDialog__SetRoadmapSprite(
    v8,
    roadmapAtlasList,
    this->fields.leftButtonSprite,
    RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_ARROW,
    v9);
  RoadmapDialog__SetRoadmapSprite(
    v10,
    roadmapAtlasList,
    this->fields.rightButtonSprite,
    RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_ARROW,
    v11);
}


void RoadmapDialog__Setup(
        RoadmapDialog_o *this,
        AssetData_o *roadmapAssetData,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  UILabel_o *closeLabel; // x22
  System_String_o *closeButton; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Object_array *ObjectList_object; // x0
  RoadmapDialog___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Func_object__object__o *_9__19_0; // x23
  Il2CppObject *v15; // x24
  struct RoadmapDialog___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_UIAtlas__o *v20; // x22
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_4E71AB2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObjectList_GameObject___);
    sub_1D0F0B4(&Method_BasicHelper_ExcludeNull_UIAtlas___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_UIAtlas___);
    sub_1D0F0B4(&System_Func_GameObject__UIAtlas__TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_RoadmapDialog___c__Setup_b__19_0__);
    sub_1D0F0B4(&RoadmapDialog___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_3724/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4E71AB2 = 1;
  }
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_3724/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_16;
  UILabel__set_text(closeLabel, closeButton, 0);
  closeButton = (System_String_o *)this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeButton, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
  if ( !roadmapAssetData )
    goto LABEL_16;
  ObjectList_object = AssetData__GetObjectList_object_(
                        roadmapAssetData,
                        (const MethodInfo_322FDF4 *)Method_AssetData_GetObjectList_GameObject___);
  v12 = RoadmapDialog___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !RoadmapDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapDialog___c_TypeInfo);
    v12 = RoadmapDialog___c_TypeInfo;
  }
  _9__19_0 = (System_Func_object__object__o *)v12->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = RoadmapDialog___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__19_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_GameObject__UIAtlas__TypeInfo);
    System_Func_object__object____ctor(_9__19_0, v15, Method_RoadmapDialog___c__Setup_b__19_0__, 0);
    static_fields = RoadmapDialog___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_GameObject__UIAtlas__o *)_9__19_0;
    sub_1D0F058(&static_fields->__9__19_0, _9__19_0);
  }
  v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v13,
                                                         (System_Func_TSource__TResult__o *)_9__19_0,
                                                         (const MethodInfo_32866A4 *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v18 = BasicHelper__ExcludeNull_object_(v17, (const MethodInfo_3238C40 *)Method_BasicHelper_ExcludeNull_UIAtlas___);
  closeButton = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                     (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  if ( !this->fields.listViewManager )
LABEL_16:
    sub_1D0F30C(closeButton, v9);
  v20 = (System_Collections_Generic_List_UIAtlas__o *)closeButton;
  this->fields.centerBoardIndex = RoadmapBoardListViewManager__CreateList(
                                    this->fields.listViewManager,
                                    roadmapAssetData,
                                    (System_Collections_Generic_List_UIAtlas__o *)closeButton,
                                    v19);
  RoadmapDialog__UpdateLeftAndRightButton(this, v21);
  RoadmapDialog__SetUpUiSprites(this, v20, v22);
  v24 = RoadmapDialog__CoOpen(this, onOpenedCallback, v23);
  UnityEngine_MonoBehaviour__StartCoroutine_73344676((UnityEngine_MonoBehaviour_o *)this, v24, 0);
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
      sub_1D0F30C(0, method);
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
    sub_1D0F30C(leftScrollArrowComponent, method);
  }
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))rightButton->klass->vtable._5_set_isEnabled.methodPtr)(
    rightButton,
    v7 < (int)leftScrollArrowComponent - 1,
    rightButton->klass->vtable._5_set_isEnabled.method);
}


void RoadmapDialog___CoOpen_b__20_0(RoadmapDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *RoadmapDialog__get_closeBtnObject(RoadmapDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4E71ABB & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71ABB = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1D0F30C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void RoadmapDialog__CoOpen_d__20___ctor(
        RoadmapDialog__CoOpen_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RoadmapDialog__CoOpen_d__20__MoveNext(RoadmapDialog__CoOpen_d__20_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RoadmapDialog_o *_4__this; // x20
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  System_Action_o **p_onOpenedCallback; // x19
  System_Delegate_o *onOpenedCallback; // t1
  System_Action_o *v11; // x22
  System_Delegate_o *v12; // x0
  System_Delegate_o *v13; // x8
  System_Action_c *v14; // x1

  if ( (byte_4E71AC0 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_RoadmapDialog__CoOpen_b__20_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71AC0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0), !_4__this)
      || (Instance = (CommonUI_o *)_4__this->fields.listViewManager) == 0
      || (ListViewManager__MoveCenterItem(
            (ListViewManager_o *)Instance,
            _4__this->fields.centerBoardIndex,
            0,
            0,
            0.0,
            0,
            0),
          (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0)) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
          (Instance = (CommonUI_o *)_4__this->fields.listViewManager) == 0) )
    {
      sub_1D0F30C(Instance, v8);
    }
    ListViewManager__CheckHorizontalScrollBar((ListViewManager_o *)Instance, 0);
    onOpenedCallback = (System_Delegate_o *)this->fields.onOpenedCallback;
    p_onOpenedCallback = &this->fields.onOpenedCallback;
    v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)_4__this, Method_RoadmapDialog__CoOpen_b__20_0__, 0);
    v12 = System_Delegate__Combine(onOpenedCallback, (System_Delegate_o *)v11, 0);
    v13 = v12;
    if ( v12 )
    {
      v14 = System_Action_TypeInfo;
      if ( (System_Action_c *)v12->klass == System_Action_TypeInfo )
      {
        *p_onOpenedCallback = (System_Action_o *)v12;
        if ( (System_Action_c *)v12->klass == v14 )
          goto LABEL_16;
      }
      sub_1D0F6A8(v12);
    }
    *p_onOpenedCallback = (System_Action_o *)v13;
LABEL_16:
    sub_1D0F058(p_onOpenedCallback, v13);
    BaseDialog__Open((BaseDialog_o *)_4__this, *p_onOpenedCallback, 0, 0, 0);
    return 0;
  }
  if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1D0F058(p__2__current, 0);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *RoadmapDialog__CoOpen_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RoadmapDialog__CoOpen_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RoadmapDialog__CoOpen_d__20__System_Collections_IEnumerator_Reset(
        RoadmapDialog__CoOpen_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_RoadmapDialog__CoOpen_d__20_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *RoadmapDialog__CoOpen_d__20__System_Collections_IEnumerator_get_Current(
        RoadmapDialog__CoOpen_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RoadmapDialog__CoOpen_d__20__System_IDisposable_Dispose(
        RoadmapDialog__CoOpen_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


void RoadmapDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4E71ABE & 1) == 0 )
  {
    sub_1D0F0B4(&RoadmapDialog___c_TypeInfo);
    byte_4E71ABE = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(RoadmapDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapDialog___c_TypeInfo->static_fields->__9 = (struct RoadmapDialog___c_o *)v1;
  sub_1D0F058(RoadmapDialog___c_TypeInfo->static_fields, v1);
}


void RoadmapDialog___c___ctor(RoadmapDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UIAtlas_o *RoadmapDialog___c___Setup_b__19_0(
        RoadmapDialog___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_4E71ABF & 1) == 0 )
  {
    this = (RoadmapDialog___c_o *)sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4E71ABF = 1;
  }
  if ( !assetObject )
    sub_1D0F30C(this, assetObject);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void RoadmapDialog___c__DisplayClass18_0___ctor(RoadmapDialog___c__DisplayClass18_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RoadmapDialog___c__DisplayClass18_0___Open_b__0(
        RoadmapDialog___c__DisplayClass18_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, data);
  RoadmapDialog__Setup(this->fields.__4__this, data, this->fields.onOpenedCallback, v3);
}


void RoadmapDialog___c__DisplayClass26_0___ctor(RoadmapDialog___c__DisplayClass26_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RoadmapDialog___c__DisplayClass26_0___Close_b__0(
        RoadmapDialog___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, method);
  RoadmapDialog__EndClose(this->fields.__4__this, this->fields.onClosedCallback, v2);
}