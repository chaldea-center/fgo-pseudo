void GalleryFullScreenListViewIndicator___ctor(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pageSpriteMax = 0x404000000000001ELL;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void GalleryFullScreenListViewIndicator__Awake(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButton, 0);
}


void GalleryFullScreenListViewIndicator__Close(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  this->fields.status = 3;
}


void GalleryFullScreenListViewIndicator__Closed(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct UIPanel_o *uiRootPanel; // x0

  this->fields.status = 0;
  GalleryFullScreenListViewIndicator__SetActiveObject(this, 0, v2);
  uiRootPanel = this->fields.uiRootPanel;
  if ( !uiRootPanel )
    sub_21FFECC(0, v4);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double))uiRootPanel->klass->vtable._8_set_alpha.methodPtr)(
    uiRootPanel,
    uiRootPanel->klass->vtable._8_set_alpha.method,
    0.0);
}


void GalleryFullScreenListViewIndicator__GetCanScrollList(
        GalleryFullScreenListViewIndicator_o *this,
        bool *isLeft,
        bool *isRight,
        const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  ListViewManager_o *v8; // x8
  int v9; // w21
  int v10; // w8

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (listViewManager = (ListViewManager_o *)ListViewManager__GetCenterIndex(listViewManager, 0),
        (v8 = this->fields.listViewManager) == 0) )
  {
    sub_21FFECC(listViewManager, isLeft);
  }
  v9 = (int)listViewManager;
  v10 = ListViewManager__get_ItemSum(v8, 0) - 1;
  *isLeft = v9 > 0;
  *isRight = v9 < v10;
}


int32_t GalleryFullScreenListViewIndicator__GetStatus(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.status;
}


bool GalleryFullScreenListViewIndicator__IsOpen(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.status - 1) < 2;
}


void GalleryFullScreenListViewIndicator__OnClickLeft(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t CenterIndex; // w0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_593341D & 1) == 0 )
  {
    sub_21FFC50(&Method_GalleryFullScreenListViewIndicator_OnClickLeft__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593341D = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0, 0) )
  {
    v6 = this->fields.listViewManager;
    if ( !v6 )
      goto LABEL_13;
    CenterIndex = ListViewManager__GetCenterIndex(v6, 0);
    v5 = (unsigned int)(CenterIndex - 1);
    if ( CenterIndex < 1 )
      return;
    v6 = this->fields.listViewManager;
    if ( !v6 )
LABEL_13:
      sub_21FFECC(v6, v5);
    ListViewManager__MoveCenterItem(v6, v5, 1, 0, 0.0, 0, 0);
    v8 = Method_GalleryFullScreenListViewIndicator_OnClickLeft__;
    if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_21FFC68(Method_GalleryFullScreenListViewIndicator_OnClickLeft__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
  }
}


void GalleryFullScreenListViewIndicator__OnClickPageSprite(
        GalleryFullScreenListViewIndicator_o *this,
        UnityEngine_Transform_o *pageTransform,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewManager; // x21
  __int64 SiblingIndex; // x0
  __int64 v7; // x1
  struct ListViewManager_o *v8; // x8
  struct ListViewItem_o *centerItem; // x8
  int32_t index; // w21
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_593341F & 1) == 0 )
  {
    sub_21FFC50(&Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593341F = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pageTransform, method);
  SiblingIndex = UnityEngine_Object__op_Equality(listViewManager, 0, 0);
  if ( (SiblingIndex & 1) == 0 )
  {
    v8 = this->fields.listViewManager;
    if ( !v8
      || (centerItem = v8->fields.centerItem) == 0
      || !pageTransform
      || (index = centerItem->fields.index,
          SiblingIndex = UnityEngine_Transform__GetSiblingIndex(pageTransform, 0),
          !this->fields.listViewManager) )
    {
      sub_21FFECC(SiblingIndex, v7);
    }
    ListViewManager__MoveCenterItem(
      this->fields.listViewManager,
      SiblingIndex + index - this->fields.pageIndex,
      1,
      0,
      0.0,
      0,
      0);
    v11 = Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__;
    if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_21FFC68(Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__);
    v12 = (System_Reflection_MethodBase_o *)sub_21FFC34(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
  }
}


void GalleryFullScreenListViewIndicator__OnClickRight(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *CenterIndex; // x0
  int v7; // w20
  int32_t ItemSum; // w0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_593341E & 1) == 0 )
  {
    sub_21FFC50(&Method_GalleryFullScreenListViewIndicator_OnClickRight__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593341E = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0, 0) )
  {
    CenterIndex = this->fields.listViewManager;
    if ( CenterIndex )
    {
      CenterIndex = (ListViewManager_o *)ListViewManager__GetCenterIndex(CenterIndex, 0);
      if ( this->fields.listViewManager )
      {
        v7 = (int)CenterIndex;
        ItemSum = ListViewManager__get_ItemSum(this->fields.listViewManager, 0);
        if ( v7 < 0 )
          return;
        if ( v7 >= ItemSum - 1 )
          goto LABEL_12;
        CenterIndex = this->fields.listViewManager;
        if ( CenterIndex )
        {
          ListViewManager__MoveCenterItem(CenterIndex, v7 + 1, 1, 0, 0.0, 0, 0);
LABEL_12:
          v9 = Method_GalleryFullScreenListViewIndicator_OnClickRight__;
          if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_21FFC68(Method_GalleryFullScreenListViewIndicator_OnClickRight__);
          v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0);
          return;
        }
      }
    }
    sub_21FFECC(CenterIndex, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewIndicator__OnModifyCenterItem(
        GalleryFullScreenListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *leftObject; // x0
  bool isEnableArrowObj; // w24
  UnityEngine_Transform_o *transform; // x23
  struct System_Collections_Generic_List_UISprite__o **p_pageSpriteList; // x22
  System_Collections_Generic_List_object__o *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  char v21; // w4
  char v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x2
  int v26; // w29
  Il2CppObject *pageSpriteSeed; // x24
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  char v30; // w4
  char v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_object__o *v34; // x8
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v38; // x1
  Il2CppClass **v39; // x0
  __int64 naturalAligment; // x10
  __int64 v41; // x10
  UILabel_o *titleLabel; // x20

  if ( (byte_5933418 & 1) == 0 )
  {
    sub_21FFC50(&GalleryFullScreenListViewItem_TypeInfo);
    sub_21FFC50(&GalleryFullScreenListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933418 = 1;
  }
  this->fields.listViewManager = manager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listViewManager,
    (int32_t)manager,
    (System_String_o *)item,
    (System_String_o *)isTop,
    isBottom,
    isLeft,
    isRight,
    (bool)method);
  leftObject = this->fields.leftObject;
  isEnableArrowObj = this->fields.isEnableArrowObj;
  if ( !leftObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(leftObject, this->fields.isEnableArrowObj && isLeft, 0);
  leftObject = this->fields.rightObject;
  if ( !leftObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(leftObject, isEnableArrowObj && isRight, 0);
  leftObject = (UnityEngine_GameObject_o *)this->fields.pageGrid;
  if ( !leftObject )
    goto LABEL_30;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)leftObject, 0);
  p_pageSpriteList = &this->fields.pageSpriteList;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.pageSpriteList, 0) )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UISprite__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UISprite___ctor__);
    this->fields.pageSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v18;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.pageSpriteList,
      (int32_t)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( this->fields.pageSpriteMax >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        pageSpriteSeed = (Il2CppObject *)this->fields.pageSpriteSeed;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v25);
        leftObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59506996(
                                                   pageSpriteSeed,
                                                   transform,
                                                   (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
        if ( !leftObject )
          break;
        leftObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   leftObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v34 = (System_Collections_Generic_List_object__o *)*p_pageSpriteList;
        if ( !*p_pageSpriteList )
          break;
        items = v34->fields._items;
        v36 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v34->fields._version;
        if ( !items )
          break;
        size = v34->fields._size;
        v38 = leftObject;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            (Il2CppObject *)leftObject,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v38;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v38, v28, v29, v30, v31, v32, v33);
        }
        if ( ++v26 >= this->fields.pageSpriteMax )
          goto LABEL_18;
      }
LABEL_30:
      sub_21FFECC(leftObject, v13);
    }
  }
LABEL_18:
  if ( !item
    || (naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment,
        item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (GalleryFullScreenListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewItem_TypeInfo )
  {
    if ( !manager )
      return;
    goto LABEL_22;
  }
  leftObject = (UnityEngine_GameObject_o *)item[1].monitor;
  if ( !leftObject )
    goto LABEL_30;
  titleLabel = this->fields.titleLabel;
  leftObject = (UnityEngine_GameObject_o *)GalleryResourceEntity__GetTitleName((GalleryResourceEntity_o *)leftObject, 0);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, (System_String_o *)leftObject, 0);
  if ( manager )
  {
LABEL_22:
    v41 = GalleryFullScreenListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment >= (unsigned int)v41
      && (GalleryFullScreenListViewManager_c *)manager->klass->_2.typeHierarchy[v41 - 1] == GalleryFullScreenListViewManager_TypeInfo )
    {
      GalleryFullScreenListViewManager__OnModifyViewerCenter((GalleryFullScreenListViewManager_o *)manager, v13);
    }
  }
}


void GalleryFullScreenListViewIndicator__OnModifyPosition(
        GalleryFullScreenListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  bool isEnableArrowObj; // w9
  UnityEngine_GameObject_o *leftObject; // x0
  int v13; // w8
  int v14; // w20
  bool isRight; // [xsp+8h] [xbp-18h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-14h] BYREF

  isLeft = 0;
  isRight = 0;
  this->fields.listViewManager = manager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listViewManager,
    (int32_t)manager,
    (System_String_o *)item,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  GalleryFullScreenListViewIndicator__GetCanScrollList(this, &isLeft, &isRight, v9);
  isEnableArrowObj = this->fields.isEnableArrowObj;
  leftObject = this->fields.leftObject;
  v13 = isEnableArrowObj && isLeft;
  v14 = isRight && isEnableArrowObj;
  isLeft &= isEnableArrowObj;
  isRight &= isEnableArrowObj;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, v13 != 0, 0), (leftObject = this->fields.rightObject) == 0) )
  {
    sub_21FFECC(leftObject, v10);
  }
  UnityEngine_GameObject__SetActive(leftObject, v14 != 0, 0);
}


void GalleryFullScreenListViewIndicator__Open(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.status = 1;
  GalleryFullScreenListViewIndicator__SetActiveObject(this, 1, v2);
}


void GalleryFullScreenListViewIndicator__Opened(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  struct UIPanel_o *uiRootPanel; // x0

  uiRootPanel = this->fields.uiRootPanel;
  this->fields.status = 2;
  if ( !uiRootPanel )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))uiRootPanel->klass->vtable._8_set_alpha.methodPtr)(
    uiRootPanel,
    uiRootPanel->klass->vtable._8_set_alpha.method,
    1.0);
}


void GalleryFullScreenListViewIndicator__ResetPageSpriteList(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  void *pageSpriteList; // x0
  int32_t pageMax; // w24
  int32_t v5; // w20
  bool v6; // cc
  bool v7; // w1
  __int64 v8; // x2
  struct System_Collections_Generic_List_UISprite__o *v9; // x19
  struct GalleryFullScreenListViewIndicator___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__25_0; // x20
  Il2CppObject *v12; // x21
  struct GalleryFullScreenListViewIndicator___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593341C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_21FFC50(&Method_GalleryFullScreenListViewIndicator___c__ResetPageSpriteList_b__25_0__);
    sub_21FFC50(&GalleryFullScreenListViewIndicator___c_TypeInfo);
    byte_593341C = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_15;
  pageMax = this->fields.pageMax;
  v5 = 0;
  while ( v5 < *((_DWORD *)pageSpriteList + 6) )
  {
    pageSpriteList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)pageSpriteList,
                       v5,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( pageSpriteList )
    {
      pageSpriteList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pageSpriteList, 0);
      if ( pageSpriteList )
      {
        v6 = pageMax <= 1 || pageMax <= v5;
        v7 = !v6;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageSpriteList, v7, 0);
        pageSpriteList = this->fields.pageSpriteList;
        ++v5;
        if ( pageSpriteList )
          continue;
      }
    }
    goto LABEL_15;
  }
  pageSpriteList = this->fields.pageGrid;
  if ( !pageSpriteList )
    goto LABEL_15;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)pageSpriteList + 440LL))(
    pageSpriteList,
    *(_QWORD *)(*(_QWORD *)pageSpriteList + 448LL));
  pageSpriteList = GalleryFullScreenListViewIndicator___c_TypeInfo;
  v9 = this->fields.pageSpriteList;
  if ( !*(&GalleryFullScreenListViewIndicator___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewIndicator___c_TypeInfo, method, v8);
    pageSpriteList = GalleryFullScreenListViewIndicator___c_TypeInfo;
  }
  static_fields = (struct GalleryFullScreenListViewIndicator___c_StaticFields *)*((_QWORD *)pageSpriteList + 23);
  _9__25_0 = (System_Action_object__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !*((_DWORD *)pageSpriteList + 57) )
    {
      j_il2cpp_runtime_class_init_0(pageSpriteList, method, v8);
      static_fields = GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__25_0,
      v12,
      Method_GalleryFullScreenListViewIndicator___c__ResetPageSpriteList_b__25_0__,
      0);
    v13 = GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields;
    v13->__9__25_0 = (struct System_Action_UISprite__o *)_9__25_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__25_0, (int32_t)_9__25_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !v9 )
LABEL_15:
    sub_21FFECC(pageSpriteList, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)v9,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_UISprite__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewIndicator__SetActiveObject(
        GalleryFullScreenListViewIndicator_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewManager; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *pageGrid; // x0
  bool v8; // w21
  const MethodInfo *v9; // x3
  bool isRight; // [xsp+8h] [xbp-28h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5933419 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933419 = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  isLeft = 0;
  isRight = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active, method);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0, 0) )
  {
    pageGrid = (UnityEngine_Component_o *)this->fields.pageGrid;
    this->fields.isEnableArrowObj = active;
    if ( !pageGrid )
      goto LABEL_14;
    pageGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pageGrid, 0);
    if ( !pageGrid )
      goto LABEL_14;
    v8 = active;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, active, 0);
    GalleryFullScreenListViewIndicator__GetCanScrollList(this, &isLeft, &isRight, v9);
    pageGrid = (UnityEngine_Component_o *)this->fields.leftObject;
    if ( !pageGrid
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, isLeft && v8, 0),
          (pageGrid = (UnityEngine_Component_o *)this->fields.rightObject) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, isRight && v8, 0),
          (pageGrid = (UnityEngine_Component_o *)this->fields.titleLabel) == 0)
      || (pageGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pageGrid, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, active, 0),
          (pageGrid = (UnityEngine_Component_o *)this->fields.closeButton) == 0) )
    {
LABEL_14:
      sub_21FFECC(pageGrid, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, active, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewIndicator__SetIndexMax(
        GalleryFullScreenListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0

  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0), (leftObject = this->fields.rightObject) == 0)
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0),
        (leftObject = (UnityEngine_GameObject_o *)this->fields.pageGrid) == 0)
    || (leftObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)leftObject, 0)) == 0 )
  {
    sub_21FFECC(leftObject, *(_QWORD *)&max);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewIndicator__SetPageIndex(
        GalleryFullScreenListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *pageSpriteList; // x0

  if ( (byte_593341B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_21FFC50(&StringLiteral_21533/*"img_slider_on"*/);
    byte_593341B = 1;
  }
  this->fields.pageIndex = index;
  GalleryFullScreenListViewIndicator__ResetPageSpriteList(this, *(const MethodInfo **)&index);
  pageSpriteList = (System_Collections_Generic_List_object__o *)this->fields.pageSpriteList;
  if ( !pageSpriteList
    || (pageSpriteList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        pageSpriteList,
                                                                        index,
                                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__)) == 0 )
  {
    sub_21FFECC(pageSpriteList, v5);
  }
  UISprite__set_spriteName((UISprite_o *)pageSpriteList, (System_String_o *)StringLiteral_21533/*"img_slider_on"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewIndicator__SetPageMax(
        GalleryFullScreenListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  int32_t pageSpriteMax; // w21
  const MethodInfo *v6; // x1

  if ( (byte_593341A & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593341A = 1;
  }
  pageSpriteMax = this->fields.pageSpriteMax;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&max, method);
  this->fields.pageMax = System_Math__Min_76940292(max, pageSpriteMax, 0);
  this->fields.pageIndex = -1;
  GalleryFullScreenListViewIndicator__ResetPageSpriteList(this, v6);
}


// attributes: thunk
void GalleryFullScreenListViewIndicator__Update(GalleryFullScreenListViewIndicator_o *this, const MethodInfo *method)
{
  GalleryFullScreenListViewIndicator__UpdateStatus(this, method);
}


void GalleryFullScreenListViewIndicator__UpdateStatus(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  int32_t status; // w8
  GalleryFullScreenListViewIndicator_o *v3; // x19
  struct UIPanel_o *v4; // x20
  float v5; // s8
  float v6; // s0
  struct UIPanel_o *uiRootPanel; // x20
  float v8; // s8
  float deltaTime; // s0
  const MethodInfo *v10; // x1

  status = this->fields.status;
  v3 = this;
  if ( status == 3 )
  {
    uiRootPanel = this->fields.uiRootPanel;
    if ( !uiRootPanel )
      goto LABEL_13;
    v8 = ((float (__fastcall *)(struct UIPanel_o *, const MethodInfo *))uiRootPanel->klass->vtable._7_get_alpha.methodPtr)(
           this->fields.uiRootPanel,
           uiRootPanel->klass->vtable._7_get_alpha.method);
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))uiRootPanel->klass->vtable._8_set_alpha.methodPtr)(
      uiRootPanel,
      uiRootPanel->klass->vtable._8_set_alpha.method,
      v8 - (float)(deltaTime * v3->fields.panelFadeVelocity));
    this = (GalleryFullScreenListViewIndicator_o *)v3->fields.uiRootPanel;
    if ( !this )
      goto LABEL_13;
    if ( ((float (__fastcall *)(GalleryFullScreenListViewIndicator_o *, void *))this->klass[1]._1.image)(
           this,
           this->klass[1]._1.gc_desc) <= 0.01 )
      GalleryFullScreenListViewIndicator__Closed(v3, v10);
  }
  else if ( status == 1 )
  {
    v4 = this->fields.uiRootPanel;
    if ( !v4 )
      goto LABEL_13;
    v5 = ((float (__fastcall *)(struct UIPanel_o *, const MethodInfo *))v4->klass->vtable._7_get_alpha.methodPtr)(
           this->fields.uiRootPanel,
           v4->klass->vtable._7_get_alpha.method);
    v6 = UnityEngine_Time__get_deltaTime(0);
    ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v4->klass->vtable._8_set_alpha.methodPtr)(
      v4,
      v4->klass->vtable._8_set_alpha.method,
      v5 + (float)(v6 * v3->fields.panelFadeVelocity));
    this = (GalleryFullScreenListViewIndicator_o *)v3->fields.uiRootPanel;
    if ( !this )
      goto LABEL_13;
    if ( ((float (__fastcall *)(GalleryFullScreenListViewIndicator_o *, void *))this->klass[1]._1.image)(
           this,
           this->klass[1]._1.gc_desc) >= 0.99 )
    {
      this = (GalleryFullScreenListViewIndicator_o *)v3->fields.uiRootPanel;
      v3->fields.status = 2;
      if ( this )
      {
        ((void (__fastcall *)(GalleryFullScreenListViewIndicator_o *, const char *, float))this->klass[1]._1.name)(
          this,
          this->klass[1]._1.namespaze,
          1.0);
        return;
      }
LABEL_13:
      sub_21FFECC(this, method);
    }
  }
}


void GalleryFullScreenListViewIndicator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933420 & 1) == 0 )
  {
    sub_21FFC50(&GalleryFullScreenListViewIndicator___c_TypeInfo);
    byte_5933420 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GalleryFullScreenListViewIndicator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields->__9 = (struct GalleryFullScreenListViewIndicator___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GalleryFullScreenListViewIndicator___c___ctor(
        GalleryFullScreenListViewIndicator___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GalleryFullScreenListViewIndicator___c___ResetPageSpriteList_b__25_0(
        GalleryFullScreenListViewIndicator___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( (byte_5933421 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewIndicator___c_o *)sub_21FFC50(&StringLiteral_21532/*"img_slider_off"*/);
    byte_5933421 = 1;
  }
  if ( !sprite )
    sub_21FFECC(this, sprite);
  UISprite__set_spriteName(sprite, (System_String_o *)StringLiteral_21532/*"img_slider_off"*/, 0);
}