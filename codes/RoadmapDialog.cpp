void RoadmapDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct RoadmapDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59326E0 & 1) == 0 )
  {
    sub_21FFC50(&RoadmapDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_21178/*"icon_summon_arrow2"*/);
    sub_21FFC50(&StringLiteral_11894/*"Roadmap_bg"*/);
    byte_59326E0 = 1;
  }
  v7 = StringLiteral_11894/*"Roadmap_bg"*/;
  RoadmapDialog_TypeInfo->static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_11894/*"Roadmap_bg"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)RoadmapDialog_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_21178/*"icon_summon_arrow2"*/;
  static_fields = RoadmapDialog_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_ARROW = (struct System_String_o *)StringLiteral_21178/*"icon_summon_arrow2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->SPRITE_NAME_ARROW, v8, v10, v11, v12, v13, v14, v15);
}


void RoadmapDialog___ctor(RoadmapDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_59326DF & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59326DF = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.centerBoardIndex = -1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RoadmapDialog__CheckAssert(RoadmapDialog_o *this, const MethodInfo *method)
{
  ;
}


void RoadmapDialog__Close(RoadmapDialog_o *this, System_Action_o *onClosedCallback, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x20

  if ( (byte_59326DB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RoadmapDialog___c__DisplayClass26_0__Close_b__0__);
    sub_21FFC50(&RoadmapDialog___c__DisplayClass26_0_TypeInfo);
    byte_59326DB = 1;
  }
  v5 = sub_21FFEBC(RoadmapDialog___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = onClosedCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)onClosedCallback, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  this->fields.state = 3;
  v21 = (System_Action_o *)sub_21FFEBC(v20);
  System_Action___ctor(v21, (Il2CppObject *)v5, Method_RoadmapDialog___c__DisplayClass26_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0);
}


System_Collections_IEnumerator_o *RoadmapDialog__CoOpen(
        RoadmapDialog_o *this,
        System_Action_o *onOpenedCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
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

  if ( (byte_59326D6 & 1) == 0 )
  {
    sub_21FFC50(&RoadmapDialog__CoOpen_d__20_TypeInfo);
    byte_59326D6 = 1;
  }
  v5 = sub_21FFEBC(RoadmapDialog__CoOpen_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = onOpenedCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)onOpenedCallback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void RoadmapDialog__EndClose(RoadmapDialog_o *this, System_Action_o *onClosedCallback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_59326DC & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11893/*"RoadMap"*/);
    byte_59326DC = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_11893/*"RoadMap"*/, 0);
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

  if ( (byte_59326DD & 1) == 0 )
  {
    sub_21FFC50(&Method_RoadmapDialog_OnClickClose__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59326DD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RoadmapDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RoadmapDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v6);
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
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t CenterIndex; // w20
  int32_t v11; // w1

  if ( (byte_59326D9 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&Method_RoadmapDialog_OnClickLeftButton__);
    byte_59326D9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RoadmapDialog_OnClickLeftButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickLeftButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RoadmapDialog_OnClickLeftButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_21FFECC(v5, v6);
    CenterIndex = ListViewManager__GetCenterIndex(listViewManager, 0);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8, v9);
    v11 = System_Math__Max_76939956(CenterIndex - 1, 0, 0);
    ListViewManager__MoveCenterItem(listViewManager, v11, 1, 0, 0.0, 0, 0);
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
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t ItemSum; // w21
  int32_t v13; // w1

  if ( (byte_59326DA & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&Method_RoadmapDialog_OnClickRightButton__);
    byte_59326DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RoadmapDialog_OnClickRightButton__;
    if ( (*((_BYTE *)Method_RoadmapDialog_OnClickRightButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RoadmapDialog_OnClickRightButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this->fields.listViewManager, 0),
          (v8 = (ListViewManager_o *)this->fields.listViewManager) == 0) )
    {
      sub_21FFECC(CenterIndex, v6);
    }
    v9 = CenterIndex;
    ItemSum = ListViewManager__get_ItemSum(v8, 0);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10, v11);
    v13 = System_Math__Min_76940292(v9 + 1, ItemSum - 1, 0);
    ListViewManager__MoveCenterItem(listViewManager, v13, 1, 0, 0.0, 0, 0);
  }
}


void RoadmapDialog__Open(RoadmapDialog_o *this, System_Action_o *onOpenedCallback, const MethodInfo *method)
{
  __int64 v5; // x19
  CommonUI_o *basePanel; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  AssetLoader_LoadEndDataHandler_o *v22; // x20

  if ( (byte_59326D4 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_RoadmapDialog___c__DisplayClass18_0__Open_b__0__);
    sub_21FFC50(&RoadmapDialog___c__DisplayClass18_0_TypeInfo);
    sub_21FFC50(&StringLiteral_11893/*"RoadMap"*/);
    byte_59326D4 = 1;
  }
  v5 = sub_21FFEBC(RoadmapDialog___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = onOpenedCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)onOpenedCallback, v14, v15, v16, v17, v18, v19);
  basePanel = (CommonUI_o *)this->fields.basePanel;
  this->fields.state = 1;
  if ( !basePanel
    || (((void (__fastcall *)(CommonUI_o *, Il2CppClass *, double))basePanel->klass[1]._1.element_class)(
          basePanel,
          basePanel->klass[1]._1.castClass,
          0.0),
        (basePanel = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_9:
    sub_21FFECC(basePanel, v7);
  }
  CommonUI__SetLoadMode(basePanel, 1, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20, v21);
  AssetManager__SetAssetBundleUnload((System_String_o *)StringLiteral_11893/*"RoadMap"*/, 0);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_RoadmapDialog___c__DisplayClass18_0__Open_b__0__,
    0);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_11893/*"RoadMap"*/, v22, 1, 0, 0);
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
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59326D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    this = (RoadmapDialog_o *)sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_59326D8 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !roadmapAtlasList )
    sub_21FFECC(this, roadmapAtlasList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v13 = 0;
  v14 = &v15;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_21FFECC(v8, v9);
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)v15.fields._current, spriteName, 0);
    if ( Sprite )
    {
      if ( !targetSprite )
        sub_21FFECC(Sprite, v12);
      UISprite__set_atlas(targetSprite, (UIAtlas_o *)current, 0);
      UISprite__set_spriteName(targetSprite, spriteName, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_59326D7 & 1) == 0 )
  {
    sub_21FFC50(&RoadmapDialog_TypeInfo);
    byte_59326D7 = 1;
  }
  v6 = RoadmapDialog_TypeInfo;
  bgSprite = this->fields.bgSprite;
  if ( !*(&RoadmapDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapDialog_TypeInfo, roadmapAtlasList, method);
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
  __int64 v12; // x1
  __int64 v13; // x2
  RoadmapDialog___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  struct RoadmapDialog___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__19_0; // x23
  Il2CppObject *v18; // x24
  struct RoadmapDialog___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_UIAtlas__o *v29; // x22
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x1

  if ( (byte_59326D5 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObjectList_GameObject___);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_UIAtlas___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_UIAtlas___);
    sub_21FFC50(&System_Func_GameObject__UIAtlas__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_RoadmapDialog___c__Setup_b__19_0__);
    sub_21FFC50(&RoadmapDialog___c_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_59326D5 = 1;
  }
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, roadmapAssetData, onOpenedCallback);
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
                        (const MethodInfo_379F258 *)Method_AssetData_GetObjectList_GameObject___);
  v14 = RoadmapDialog___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !*(&RoadmapDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapDialog___c_TypeInfo, v12, v13);
    v14 = RoadmapDialog___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__19_0 = (System_Func_object__object__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v12, v13);
      static_fields = RoadmapDialog___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_GameObject__UIAtlas__TypeInfo);
    System_Func_object__object____ctor(_9__19_0, v18, Method_RoadmapDialog___c__Setup_b__19_0__, 0);
    v19 = RoadmapDialog___c_TypeInfo->static_fields;
    v19->__9__19_0 = (struct System_Func_GameObject__UIAtlas__o *)_9__19_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->__9__19_0, (int32_t)_9__19_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v15,
                                                         (System_Func_TSource__TResult__o *)_9__19_0,
                                                         (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v27 = BasicHelper__ExcludeNull_object_(v26, (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_UIAtlas___);
  closeButton = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                     (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  if ( !this->fields.listViewManager )
LABEL_16:
    sub_21FFECC(closeButton, v9);
  v29 = (System_Collections_Generic_List_UIAtlas__o *)closeButton;
  this->fields.centerBoardIndex = RoadmapBoardListViewManager__CreateList(
                                    this->fields.listViewManager,
                                    roadmapAssetData,
                                    (System_Collections_Generic_List_UIAtlas__o *)closeButton,
                                    v28);
  RoadmapDialog__UpdateLeftAndRightButton(this, v30);
  RoadmapDialog__SetUpUiSprites(this, v29, v31);
  v33 = RoadmapDialog__CoOpen(this, onOpenedCallback, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v33, 0);
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
      sub_21FFECC(0, method);
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
    sub_21FFECC(leftScrollArrowComponent, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_59326DE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59326DE = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w23
  struct RoadmapDialog_o *_4__this; // x20
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  System_Delegate_o *onOpenedCallback; // t1
  System_Action_o *v14; // x22
  RoadmapDialog__CoOpen_d__20_c *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Action_c *v22; // x1
  Il2CppObject **p__2__current; // x19

  if ( (byte_59326E3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RoadmapDialog__CoOpen_b__20_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59326E3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
    goto LABEL_14;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_21FFECC(Instance, v12);
    }
    ListViewManager__CheckHorizontalScrollBar((ListViewManager_o *)Instance, 0);
    onOpenedCallback = (System_Delegate_o *)this->fields.onOpenedCallback;
    this = (RoadmapDialog__CoOpen_d__20_o *)((char *)this + 40);
    v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)_4__this, Method_RoadmapDialog__CoOpen_b__20_0__, 0);
    v15 = (RoadmapDialog__CoOpen_d__20_c *)System_Delegate__Combine(onOpenedCallback, (System_Delegate_o *)v14, 0);
    if ( v15 )
    {
      v22 = System_Action_TypeInfo;
      if ( v15->_1.image != System_Action_TypeInfo || (this->klass = v15, v15->_1.image != v22) )
      {
        sub_220024C(v15, v22, v16, v17);
LABEL_14:
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        *((_DWORD *)p__2__current - 2) = -1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
        *((_DWORD *)p__2__current - 2) = 1;
        return _1__state == 0;
      }
    }
    else
    {
      this->klass = 0;
    }
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)this, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    BaseDialog__Open((BaseDialog_o *)_4__this, (System_Action_o *)this->klass, 0, 0, 0);
  }
  return _1__state == 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_RoadmapDialog__CoOpen_d__20_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59326E1 & 1) == 0 )
  {
    sub_21FFC50(&RoadmapDialog___c_TypeInfo);
    byte_59326E1 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RoadmapDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapDialog___c_TypeInfo->static_fields->__9 = (struct RoadmapDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RoadmapDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_59326E2 & 1) == 0 )
  {
    this = (RoadmapDialog___c_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_59326E2 = 1;
  }
  if ( !assetObject )
    sub_21FFECC(this, assetObject);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_21FFECC(this, data);
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
    sub_21FFECC(this, method);
  RoadmapDialog__EndClose(this->fields.__4__this, this->fields.onClosedCallback, v2);
}