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
    sub_1C3E7C0(0, v4);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))uiRootPanel->klass->vtable._8_set_alpha.methodPtr)(
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
    sub_1C3E7C0(listViewManager, isLeft);
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
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  int32_t CenterIndex; // w0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C51D0E & 1) == 0 )
  {
    sub_1C3E564(&Method_GalleryFullScreenListViewIndicator_OnClickLeft__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D0E = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0, 0) )
  {
    v5 = this->fields.listViewManager;
    if ( !v5 )
      goto LABEL_13;
    CenterIndex = ListViewManager__GetCenterIndex(v5, 0);
    v4 = (unsigned int)(CenterIndex - 1);
    if ( CenterIndex < 1 )
      return;
    v5 = this->fields.listViewManager;
    if ( !v5 )
LABEL_13:
      sub_1C3E7C0(v5, v4);
    ListViewManager__MoveCenterItem(v5, v4, 1, 0, 0.0, 0);
    v7 = Method_GalleryFullScreenListViewIndicator_OnClickLeft__;
    if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C3E57C(Method_GalleryFullScreenListViewIndicator_OnClickLeft__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0);
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

  if ( (byte_4C51D10 & 1) == 0 )
  {
    sub_1C3E564(&Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D10 = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C3E7C0(SiblingIndex, v7);
    }
    ListViewManager__MoveCenterItem(
      this->fields.listViewManager,
      SiblingIndex + index - this->fields.pageIndex,
      1,
      0,
      0.0,
      0);
    v11 = Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__;
    if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C3E57C(Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C3E548(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
  }
}


void GalleryFullScreenListViewIndicator__OnClickRight(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *CenterIndex; // x0
  int v6; // w20
  int32_t ItemSum; // w0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4C51D0F & 1) == 0 )
  {
    sub_1C3E564(&Method_GalleryFullScreenListViewIndicator_OnClickRight__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D0F = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0, 0) )
  {
    CenterIndex = this->fields.listViewManager;
    if ( CenterIndex )
    {
      CenterIndex = (ListViewManager_o *)ListViewManager__GetCenterIndex(CenterIndex, 0);
      if ( this->fields.listViewManager )
      {
        v6 = (int)CenterIndex;
        ItemSum = ListViewManager__get_ItemSum(this->fields.listViewManager, 0);
        if ( v6 < 0 )
          return;
        if ( v6 >= ItemSum - 1 )
          goto LABEL_12;
        CenterIndex = this->fields.listViewManager;
        if ( CenterIndex )
        {
          ListViewManager__MoveCenterItem(CenterIndex, v6 + 1, 1, 0, 0.0, 0);
LABEL_12:
          v8 = Method_GalleryFullScreenListViewIndicator_OnClickRight__;
          if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1C3E57C(Method_GalleryFullScreenListViewIndicator_OnClickRight__);
          v9 = (System_Reflection_MethodBase_o *)sub_1C3E548(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
          return;
        }
      }
    }
    sub_1C3E7C0(CenterIndex, v4);
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
  _BOOL4 v8; // w22
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *leftObject; // x0
  _BOOL4 isEnableArrowObj; // w24
  struct System_Collections_Generic_List_UISprite__o **p_pageSpriteList; // x22
  UnityEngine_Transform_o *transform; // x23
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int v21; // w25
  Il2CppObject *pageSpriteSeed; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *v25; // x8
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v29; // x1
  Il2CppClass **v30; // x0
  __int64 naturalAligment; // x10
  __int64 v32; // x10
  UILabel_o *titleLabel; // x20

  v8 = isRight;
  if ( (byte_4C51D09 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C3E564(&GalleryFullScreenListViewManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D09 = 1;
  }
  this->fields.listViewManager = manager;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.listViewManager,
    (int32_t)manager,
    (int32_t)item,
    (const MethodInfo *)isTop);
  leftObject = this->fields.leftObject;
  if ( !leftObject )
    goto LABEL_30;
  isEnableArrowObj = this->fields.isEnableArrowObj;
  UnityEngine_GameObject__SetActive(leftObject, isLeft && isEnableArrowObj, 0);
  leftObject = this->fields.rightObject;
  if ( !leftObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(leftObject, v8 && isEnableArrowObj, 0);
  leftObject = (UnityEngine_GameObject_o *)this->fields.pageGrid;
  if ( !leftObject )
    goto LABEL_30;
  p_pageSpriteList = &this->fields.pageSpriteList;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)leftObject, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.pageSpriteList, 0) )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UISprite__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UISprite___ctor__);
    this->fields.pageSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v18;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.pageSpriteList, (int32_t)v18, v19, v20);
    if ( this->fields.pageSpriteMax >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        pageSpriteSeed = (Il2CppObject *)this->fields.pageSpriteSeed;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        leftObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51929056(
                                                   pageSpriteSeed,
                                                   transform,
                                                   (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
        if ( !leftObject )
          break;
        leftObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   leftObject,
                                                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v25 = (System_Collections_Generic_List_object__o *)*p_pageSpriteList;
        if ( !*p_pageSpriteList )
          break;
        items = v25->fields._items;
        v27 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v25->fields._version;
        if ( !items )
          break;
        size = v25->fields._size;
        v29 = leftObject;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)leftObject,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v29;
          sub_1C3E508((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v29, v23, v24);
        }
        if ( ++v21 >= this->fields.pageSpriteMax )
          goto LABEL_18;
      }
LABEL_30:
      sub_1C3E7C0(leftObject, v13);
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
    v32 = GalleryFullScreenListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment >= (unsigned int)v32
      && (GalleryFullScreenListViewManager_c *)manager->klass->_2.typeHierarchy[v32 - 1] == GalleryFullScreenListViewManager_TypeInfo )
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
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  UnityEngine_GameObject_o *leftObject; // x0
  _BOOL4 isEnableArrowObj; // w20
  _BOOL4 v9; // w21
  bool isRight; // [xsp+8h] [xbp-28h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-24h] BYREF

  isLeft = 0;
  isRight = 0;
  this->fields.listViewManager = manager;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listViewManager, (int32_t)manager, (int32_t)item, method);
  GalleryFullScreenListViewIndicator__GetCanScrollList(this, &isLeft, &isRight, v5);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (isEnableArrowObj = this->fields.isEnableArrowObj,
        v9 = isRight,
        UnityEngine_GameObject__SetActive(leftObject, isEnableArrowObj && isLeft, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
    sub_1C3E7C0(leftObject, v6);
  }
  UnityEngine_GameObject__SetActive(leftObject, v9 && isEnableArrowObj, 0);
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
    sub_1C3E7C0(0, method);
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
  int32_t pageMax; // w21
  int32_t v5; // w20
  struct System_Collections_Generic_List_UISprite__o *v6; // x19
  System_Action_object__o *v7; // x20
  Il2CppObject *v8; // x21
  struct GalleryFullScreenListViewIndicator___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C51D0D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_UISprite__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C3E564(&Method_GalleryFullScreenListViewIndicator___c__ResetPageSpriteList_b__25_0__);
    sub_1C3E564(&GalleryFullScreenListViewIndicator___c_TypeInfo);
    byte_4C51D0D = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  if ( this->fields.pageMax <= 1 )
    pageMax = 0;
  else
    pageMax = this->fields.pageMax;
  if ( !pageSpriteList )
    goto LABEL_22;
  v5 = 0;
  while ( v5 < *((_DWORD *)pageSpriteList + 6) )
  {
    pageSpriteList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)pageSpriteList,
                       v5,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( pageSpriteList )
    {
      pageSpriteList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pageSpriteList, 0);
      if ( pageSpriteList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageSpriteList, v5 < pageMax, 0);
        pageSpriteList = this->fields.pageSpriteList;
        ++v5;
        if ( pageSpriteList )
          continue;
      }
    }
    goto LABEL_22;
  }
  pageSpriteList = this->fields.pageGrid;
  if ( !pageSpriteList )
    goto LABEL_22;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)pageSpriteList + 440LL))(
    pageSpriteList,
    *(_QWORD *)(*(_QWORD *)pageSpriteList + 448LL));
  pageSpriteList = GalleryFullScreenListViewIndicator___c_TypeInfo;
  v6 = this->fields.pageSpriteList;
  if ( !GalleryFullScreenListViewIndicator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewIndicator___c_TypeInfo);
    pageSpriteList = GalleryFullScreenListViewIndicator___c_TypeInfo;
  }
  v7 = *(System_Action_object__o **)(*((_QWORD *)pageSpriteList + 23) + 8LL);
  if ( !v7 )
  {
    if ( !*((_DWORD *)pageSpriteList + 56) )
    {
      j_il2cpp_runtime_class_init_0(pageSpriteList);
      pageSpriteList = GalleryFullScreenListViewIndicator___c_TypeInfo;
    }
    v8 = (Il2CppObject *)**((_QWORD **)pageSpriteList + 23);
    v7 = (System_Action_object__o *)sub_1C3E7B0(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      v7,
      v8,
      Method_GalleryFullScreenListViewIndicator___c__ResetPageSpriteList_b__25_0__,
      0);
    static_fields = GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Action_UISprite__o *)v7;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)v7, v10, v11);
  }
  if ( !v6 )
LABEL_22:
    sub_1C3E7C0(pageSpriteList, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)v6,
    (System_Action_T__o *)v7,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_UISprite__ForEach__);
}


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
  bool v10; // w20
  bool isRight; // [xsp+8h] [xbp-28h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C51D0A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D0A = 1;
  }
  isLeft = 0;
  isRight = 0;
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0, 0) )
  {
    pageGrid = (UnityEngine_Component_o *)this->fields.pageGrid;
    this->fields.isEnableArrowObj = active;
    if ( !pageGrid )
      goto LABEL_15;
    pageGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pageGrid, 0);
    if ( !pageGrid )
      goto LABEL_15;
    v8 = active;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, active, 0);
    GalleryFullScreenListViewIndicator__GetCanScrollList(this, &isLeft, &isRight, v9);
    pageGrid = (UnityEngine_Component_o *)this->fields.leftObject;
    if ( !pageGrid )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, isLeft && v8, 0);
    pageGrid = (UnityEngine_Component_o *)this->fields.rightObject;
    if ( !pageGrid
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, isRight && v8, 0),
          (pageGrid = (UnityEngine_Component_o *)this->fields.titleLabel) == 0)
      || (pageGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pageGrid, 0)) == 0
      || (v10 = active,
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, v10, 0),
          (pageGrid = (UnityEngine_Component_o *)this->fields.closeButton) == 0) )
    {
LABEL_15:
      sub_1C3E7C0(pageGrid, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, v10, 0);
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
    sub_1C3E7C0(leftObject, *(_QWORD *)&max);
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

  if ( (byte_4C51D0C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C3E564(&StringLiteral_20598/*"img_slider_on"*/);
    byte_4C51D0C = 1;
  }
  this->fields.pageIndex = index;
  GalleryFullScreenListViewIndicator__ResetPageSpriteList(this, *(const MethodInfo **)&index);
  pageSpriteList = (System_Collections_Generic_List_object__o *)this->fields.pageSpriteList;
  if ( !pageSpriteList
    || (pageSpriteList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        pageSpriteList,
                                                                        index,
                                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UISprite__get_Item__)) == 0 )
  {
    sub_1C3E7C0(pageSpriteList, v5);
  }
  UISprite__set_spriteName((UISprite_o *)pageSpriteList, (System_String_o *)StringLiteral_20598/*"img_slider_on"*/, 0);
}


void GalleryFullScreenListViewIndicator__SetPageMax(
        GalleryFullScreenListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  int32_t pageSpriteMax; // w21
  const MethodInfo *v6; // x1

  if ( (byte_4C51D0B & 1) == 0 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C51D0B = 1;
  }
  pageSpriteMax = this->fields.pageSpriteMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this->fields.pageMax = System_Math__Min_65160228(max, pageSpriteMax, 0);
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
    v8 = COERCE_FLOAT(
           COERCE_UNSIGNED_INT128(
             ((long double (__fastcall *)(struct UIPanel_o *, const MethodInfo *))uiRootPanel->klass->vtable._7_get_alpha.methodPtr)(
               this->fields.uiRootPanel,
               uiRootPanel->klass->vtable._7_get_alpha.method)));
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
    v5 = COERCE_FLOAT(
           COERCE_UNSIGNED_INT128(
             ((long double (__fastcall *)(struct UIPanel_o *, const MethodInfo *))v4->klass->vtable._7_get_alpha.methodPtr)(
               this->fields.uiRootPanel,
               v4->klass->vtable._7_get_alpha.method)));
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
      sub_1C3E7C0(this, method);
    }
  }
}


void GalleryFullScreenListViewIndicator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C51D11 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewIndicator___c_TypeInfo);
    byte_4C51D11 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(GalleryFullScreenListViewIndicator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields->__9 = (struct GalleryFullScreenListViewIndicator___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  if ( (byte_4C51D12 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewIndicator___c_o *)sub_1C3E564(&StringLiteral_20597/*"img_slider_off"*/);
    byte_4C51D12 = 1;
  }
  if ( !sprite )
    sub_1C3E7C0(this, sprite);
  UISprite__set_spriteName(sprite, (System_String_o *)StringLiteral_20597/*"img_slider_off"*/, 0);
}