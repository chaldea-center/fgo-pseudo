void __fastcall GalleryFullScreenListViewIndicator___ctor(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pageSpriteMax = 0x404000000000001ELL;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewIndicator__Awake(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButton, 0LL);
}


void __fastcall GalleryFullScreenListViewIndicator__Close(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  this->fields.status = 3;
}


void __fastcall GalleryFullScreenListViewIndicator__Closed(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct UIPanel_o *uiRootPanel; // x0

  this->fields.status = 0;
  GalleryFullScreenListViewIndicator__SetActiveObject(this, 0, v2);
  uiRootPanel = this->fields.uiRootPanel;
  if ( !uiRootPanel )
    sub_1B4D1EC(0LL, v4);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))uiRootPanel->klass->vtable._8_set_alpha.method)(
    uiRootPanel,
    uiRootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall GalleryFullScreenListViewIndicator__GetCanScrollList(
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
    || (listViewManager = (ListViewManager_o *)ListViewManager__GetCenterIndex(listViewManager, 0LL),
        (v8 = this->fields.listViewManager) == 0LL) )
  {
    sub_1B4D1EC(listViewManager, isLeft);
  }
  v9 = (int)listViewManager;
  v10 = ListViewManager__get_ItemSum(v8, 0LL) - 1;
  *isLeft = v9 > 0;
  *isRight = v9 < v10;
}


int32_t __fastcall GalleryFullScreenListViewIndicator__GetStatus(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.status;
}


bool __fastcall GalleryFullScreenListViewIndicator__IsOpen(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  return (unsigned int)(this->fields.status - 1) < 2;
}


void __fastcall GalleryFullScreenListViewIndicator__OnClickLeft(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t CenterIndex; // w0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_49B6078 & 1) == 0 )
  {
    sub_1B4CF90(&Method_GalleryFullScreenListViewIndicator_OnClickLeft__, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B6078 = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0LL, 0LL) )
  {
    v6 = this->fields.listViewManager;
    if ( !v6 )
      goto LABEL_13;
    CenterIndex = ListViewManager__GetCenterIndex(v6, 0LL);
    v5 = (unsigned int)(CenterIndex - 1);
    if ( CenterIndex < 1 )
      return;
    v6 = this->fields.listViewManager;
    if ( !v6 )
LABEL_13:
      sub_1B4D1EC(v6, v5);
    ListViewManager__MoveCenterItem(v6, v5, 1, 0, 0.0, 0LL);
    v8 = Method_GalleryFullScreenListViewIndicator_OnClickLeft__;
    if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B4CFA8(Method_GalleryFullScreenListViewIndicator_OnClickLeft__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0LL);
  }
}


void __fastcall GalleryFullScreenListViewIndicator__OnClickPageSprite(
        GalleryFullScreenListViewIndicator_o *this,
        UnityEngine_Transform_o *pageTransform,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *listViewManager; // x21
  __int64 SiblingIndex; // x0
  __int64 v8; // x1
  struct ListViewManager_o *v9; // x8
  struct ListViewItem_o *centerItem; // x8
  int32_t index; // w21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_49B607A & 1) == 0 )
  {
    sub_1B4CF90(&Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__, pageTransform);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B607A = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SiblingIndex = UnityEngine_Object__op_Equality(listViewManager, 0LL, 0LL);
  if ( (SiblingIndex & 1) == 0 )
  {
    v9 = this->fields.listViewManager;
    if ( !v9
      || (centerItem = v9->fields.centerItem) == 0LL
      || !pageTransform
      || (index = centerItem->fields.index,
          SiblingIndex = UnityEngine_Transform__GetSiblingIndex(pageTransform, 0LL),
          !this->fields.listViewManager) )
    {
      sub_1B4D1EC(SiblingIndex, v8);
    }
    ListViewManager__MoveCenterItem(
      this->fields.listViewManager,
      SiblingIndex + index - this->fields.pageIndex,
      1,
      0,
      0.0,
      0LL);
    v12 = Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__;
    if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B4CFA8(Method_GalleryFullScreenListViewIndicator_OnClickPageSprite__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  }
}


void __fastcall GalleryFullScreenListViewIndicator__OnClickRight(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *CenterIndex; // x0
  int v7; // w20
  int32_t ItemSum; // w0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_49B6079 & 1) == 0 )
  {
    sub_1B4CF90(&Method_GalleryFullScreenListViewIndicator_OnClickRight__, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B6079 = 1;
  }
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0LL, 0LL) )
  {
    CenterIndex = this->fields.listViewManager;
    if ( CenterIndex )
    {
      CenterIndex = (ListViewManager_o *)ListViewManager__GetCenterIndex(CenterIndex, 0LL);
      if ( this->fields.listViewManager )
      {
        v7 = (int)CenterIndex;
        ItemSum = ListViewManager__get_ItemSum(this->fields.listViewManager, 0LL);
        if ( (v7 & 0x80000000) != 0 )
          return;
        if ( v7 >= ItemSum - 1 )
          goto LABEL_12;
        CenterIndex = this->fields.listViewManager;
        if ( CenterIndex )
        {
          ListViewManager__MoveCenterItem(CenterIndex, v7 + 1, 1, 0, 0.0, 0LL);
LABEL_12:
          v9 = Method_GalleryFullScreenListViewIndicator_OnClickRight__;
          if ( (*((_BYTE *)Method_GalleryFullScreenListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1B4CFA8(Method_GalleryFullScreenListViewIndicator_OnClickRight__);
          v10 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0LL);
          return;
        }
      }
    }
    sub_1B4D1EC(CenterIndex, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewIndicator__OnModifyCenterItem(
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
  __int64 v25; // x1
  UnityEngine_GameObject_o *leftObject; // x0
  _BOOL4 isEnableArrowObj; // w24
  struct System_Collections_Generic_List_UISprite__o **p_pageSpriteList; // x22
  UnityEngine_Transform_o *transform; // x23
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_object__o *v31; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int v34; // w25
  Il2CppObject *pageSpriteSeed; // x24
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x8
  struct System_Object_array *items; // x9
  _QWORD *v40; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v42; // x1
  Il2CppClass **v43; // x0
  __int64 methodPtr_low; // x10
  __int64 v45; // x10
  _DWORD *monitor; // x8
  UILabel_o *titleLabel; // x23
  QuestEntity_o *v48; // x22
  GalleryResourceEntity_o *v49; // x0
  int32_t v50; // w1
  Il2CppObject *ChapterSubStr; // x21
  UILabel_o *v52; // x22
  struct UILabel_o *v53; // x8

  v8 = isRight;
  if ( (byte_49B6073 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestMaster___, manager);
    sub_1B4CF90(&DataManager_TypeInfo, v13);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14);
    sub_1B4CF90(&GalleryFullScreenListViewItem_TypeInfo, v15);
    sub_1B4CF90(&GalleryFullScreenListViewManager_TypeInfo, v16);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UISprite__Add__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UISprite___ctor__, v19);
    sub_1B4CF90(&System_Collections_Generic_List_UISprite__TypeInfo, v20);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v21);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v22);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v23);
    sub_1B4CF90(&StringLiteral_8392/*"MATERIAL_MAP_QUEST_TITLE"*/, v24);
    byte_49B6073 = 1;
  }
  this->fields.listViewManager = manager;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.listViewManager,
    (int32_t)manager,
    (int32_t)item,
    (const MethodInfo *)isTop);
  leftObject = this->fields.leftObject;
  if ( !leftObject )
    goto LABEL_42;
  isEnableArrowObj = this->fields.isEnableArrowObj;
  UnityEngine_GameObject__SetActive(leftObject, isLeft && isEnableArrowObj, 0LL);
  leftObject = this->fields.rightObject;
  if ( !leftObject )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(leftObject, v8 && isEnableArrowObj, 0LL);
  leftObject = (UnityEngine_GameObject_o *)this->fields.pageGrid;
  if ( !leftObject )
    goto LABEL_42;
  p_pageSpriteList = &this->fields.pageSpriteList;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)leftObject, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.pageSpriteList, 0LL) )
  {
    v31 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UISprite__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UISprite___ctor__);
    this->fields.pageSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v31;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.pageSpriteList, (int32_t)v31, v32, v33);
    if ( this->fields.pageSpriteMax >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        pageSpriteSeed = (Il2CppObject *)this->fields.pageSpriteSeed;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        leftObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49839864(
                                                   pageSpriteSeed,
                                                   transform,
                                                   (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
        if ( !leftObject )
          break;
        leftObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   leftObject,
                                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v38 = (System_Collections_Generic_List_object__o *)*p_pageSpriteList;
        if ( !*p_pageSpriteList )
          break;
        items = v38->fields._items;
        v40 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v38->fields._version;
        if ( !items )
          break;
        size = v38->fields._size;
        v42 = leftObject;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            (Il2CppObject *)leftObject,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v38->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v42;
          sub_1B4CF34((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v42, v36, v37);
        }
        if ( ++v34 >= this->fields.pageSpriteMax )
          goto LABEL_18;
      }
LABEL_42:
      sub_1B4D1EC(leftObject, v25);
    }
  }
LABEL_18:
  if ( item )
  {
    methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (GalleryFullScreenListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewItem_TypeInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      leftObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestMaster___);
      monitor = item[1].monitor;
      if ( !monitor )
        goto LABEL_42;
      if ( !leftObject )
        goto LABEL_42;
      leftObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)leftObject,
                                                 monitor[12],
                                                 (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !leftObject )
        goto LABEL_42;
      titleLabel = this->fields.titleLabel;
      v48 = (QuestEntity_o *)leftObject;
      leftObject = (UnityEngine_GameObject_o *)QuestEntity__getQuestName((QuestEntity_o *)leftObject, 0LL);
      if ( !titleLabel )
        goto LABEL_42;
      UILabel__set_text(titleLabel, (System_String_o *)leftObject, 0LL);
      if ( v48->fields.chapterSubId >= 1 )
      {
        v49 = (GalleryResourceEntity_o *)item[1].monitor;
        v50 = v49 ? GalleryResourceEntity__GetWarId(v49, 0LL) : 0;
        ChapterSubStr = (Il2CppObject *)QuestEntity__getChapterSubStr(v48, v50, 0LL);
        if ( !System_String__IsNullOrEmpty((System_String_o *)ChapterSubStr, 0LL) )
        {
          v52 = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          leftObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8392/*"MATERIAL_MAP_QUEST_TITLE"*/, 0LL);
          v53 = this->fields.titleLabel;
          if ( !v53 )
            goto LABEL_42;
          leftObject = (UnityEngine_GameObject_o *)System_String__Format_61134760(
                                                     (System_String_o *)leftObject,
                                                     ChapterSubStr,
                                                     (Il2CppObject *)v53->fields.mText,
                                                     0LL);
          if ( !v52 )
            goto LABEL_42;
          UILabel__set_text(v52, (System_String_o *)leftObject, 0LL);
        }
      }
    }
  }
  if ( manager )
  {
    v45 = LOBYTE(GalleryFullScreenListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v45
      && (GalleryFullScreenListViewManager_c *)manager->klass->_2.typeHierarchy[v45 - 1] == GalleryFullScreenListViewManager_TypeInfo )
    {
      GalleryFullScreenListViewManager__OnModifyViewerCenter((GalleryFullScreenListViewManager_o *)manager, v30);
    }
  }
}


void __fastcall GalleryFullScreenListViewIndicator__OnModifyPosition(
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listViewManager, (int32_t)manager, (int32_t)item, method);
  GalleryFullScreenListViewIndicator__GetCanScrollList(this, &isLeft, &isRight, v5);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (isEnableArrowObj = this->fields.isEnableArrowObj,
        v9 = isRight,
        UnityEngine_GameObject__SetActive(leftObject, isEnableArrowObj && isLeft, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
    sub_1B4D1EC(leftObject, v6);
  }
  UnityEngine_GameObject__SetActive(leftObject, v9 && isEnableArrowObj, 0LL);
}


void __fastcall GalleryFullScreenListViewIndicator__Open(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.status = 1;
  GalleryFullScreenListViewIndicator__SetActiveObject(this, 1, v2);
}


void __fastcall GalleryFullScreenListViewIndicator__Opened(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  struct UIPanel_o *uiRootPanel; // x0

  uiRootPanel = this->fields.uiRootPanel;
  this->fields.status = 2;
  if ( !uiRootPanel )
    sub_1B4D1EC(0LL, method);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))uiRootPanel->klass->vtable._8_set_alpha.method)(
    uiRootPanel,
    uiRootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
}


void __fastcall GalleryFullScreenListViewIndicator__ResetPageSpriteList(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *pageSpriteList; // x0
  int32_t pageMax; // w21
  int32_t v10; // w20
  struct System_Collections_Generic_List_UISprite__o *v11; // x19
  System_Action_object__o *v12; // x20
  Il2CppObject *v13; // x21
  struct GalleryFullScreenListViewIndicator___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_49B6077 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_UISprite__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UISprite__ForEach__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UISprite__get_Count__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UISprite__get_Item__, v5);
    sub_1B4CF90(&Method_GalleryFullScreenListViewIndicator___c__ResetPageSpriteList_b__25_0__, v6);
    sub_1B4CF90(&GalleryFullScreenListViewIndicator___c_TypeInfo, v7);
    byte_49B6077 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  if ( this->fields.pageMax <= 1 )
    pageMax = 0;
  else
    pageMax = this->fields.pageMax;
  if ( !pageSpriteList )
    goto LABEL_22;
  v10 = 0;
  while ( v10 < *((_DWORD *)pageSpriteList + 6) )
  {
    pageSpriteList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)pageSpriteList,
                       v10,
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( pageSpriteList )
    {
      pageSpriteList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pageSpriteList, 0LL);
      if ( pageSpriteList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageSpriteList, v10 < pageMax, 0LL);
        pageSpriteList = this->fields.pageSpriteList;
        ++v10;
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
  v11 = this->fields.pageSpriteList;
  if ( !GalleryFullScreenListViewIndicator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewIndicator___c_TypeInfo);
    pageSpriteList = GalleryFullScreenListViewIndicator___c_TypeInfo;
  }
  v12 = *(System_Action_object__o **)(*((_QWORD *)pageSpriteList + 23) + 8LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)pageSpriteList + 56) )
    {
      j_il2cpp_runtime_class_init_0(pageSpriteList);
      pageSpriteList = GalleryFullScreenListViewIndicator___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)pageSpriteList + 23);
    v12 = (System_Action_object__o *)sub_1B4D1DC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      v12,
      v13,
      Method_GalleryFullScreenListViewIndicator___c__ResetPageSpriteList_b__25_0__,
      0LL);
    static_fields = GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Action_UISprite__o *)v12;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)v12, v15, v16);
  }
  if ( !v11 )
LABEL_22:
    sub_1B4D1EC(pageSpriteList, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)v11,
    (System_Action_T__o *)v12,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_UISprite__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewIndicator__SetActiveObject(
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

  if ( (byte_49B6074 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, active);
    byte_49B6074 = 1;
  }
  isLeft = 0;
  isRight = 0;
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(listViewManager, 0LL, 0LL) )
  {
    pageGrid = (UnityEngine_Component_o *)this->fields.pageGrid;
    this->fields.isEnableArrowObj = active;
    if ( !pageGrid )
      goto LABEL_15;
    pageGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pageGrid, 0LL);
    if ( !pageGrid )
      goto LABEL_15;
    v8 = active;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, active, 0LL);
    GalleryFullScreenListViewIndicator__GetCanScrollList(this, &isLeft, &isRight, v9);
    pageGrid = (UnityEngine_Component_o *)this->fields.leftObject;
    if ( !pageGrid )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, isLeft && v8, 0LL);
    pageGrid = (UnityEngine_Component_o *)this->fields.rightObject;
    if ( !pageGrid
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, isRight && v8, 0LL),
          (pageGrid = (UnityEngine_Component_o *)this->fields.titleLabel) == 0LL)
      || (pageGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pageGrid, 0LL)) == 0LL
      || (v10 = active,
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, v10, 0LL),
          (pageGrid = (UnityEngine_Component_o *)this->fields.closeButton) == 0LL) )
    {
LABEL_15:
      sub_1B4D1EC(pageGrid, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pageGrid, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewIndicator__SetIndexMax(
        GalleryFullScreenListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0

  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (leftObject = this->fields.rightObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL),
        (leftObject = (UnityEngine_GameObject_o *)this->fields.pageGrid) == 0LL)
    || (leftObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)leftObject, 0LL)) == 0LL )
  {
    sub_1B4D1EC(leftObject, *(_QWORD *)&max);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewIndicator__SetPageIndex(
        GalleryFullScreenListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *pageSpriteList; // x0

  if ( (byte_49B6076 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UISprite__get_Item__, *(_QWORD *)&index);
    sub_1B4CF90(&StringLiteral_20177/*"img_slider_on"*/, v5);
    byte_49B6076 = 1;
  }
  this->fields.pageIndex = index;
  GalleryFullScreenListViewIndicator__ResetPageSpriteList(this, *(const MethodInfo **)&index);
  pageSpriteList = (System_Collections_Generic_List_object__o *)this->fields.pageSpriteList;
  if ( !pageSpriteList
    || (pageSpriteList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        pageSpriteList,
                                                                        index,
                                                                        (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_UISprite__get_Item__)) == 0LL )
  {
    sub_1B4D1EC(pageSpriteList, v6);
  }
  UISprite__set_spriteName((UISprite_o *)pageSpriteList, (System_String_o *)StringLiteral_20177/*"img_slider_on"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewIndicator__SetPageMax(
        GalleryFullScreenListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  int32_t pageSpriteMax; // w21
  const MethodInfo *v6; // x1

  if ( (byte_49B6075 & 1) == 0 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, *(_QWORD *)&max);
    byte_49B6075 = 1;
  }
  pageSpriteMax = this->fields.pageSpriteMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this->fields.pageMax = System_Math__Min_62622116(max, pageSpriteMax, 0LL);
  this->fields.pageIndex = -1;
  GalleryFullScreenListViewIndicator__ResetPageSpriteList(this, v6);
}


// attributes: thunk
void __fastcall GalleryFullScreenListViewIndicator__Update(
        GalleryFullScreenListViewIndicator_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewIndicator__UpdateStatus(this, method);
}


void __fastcall GalleryFullScreenListViewIndicator__UpdateStatus(
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
             ((long double (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))uiRootPanel->klass->vtable._7_get_alpha.method)(
               this->fields.uiRootPanel,
               uiRootPanel->klass->vtable._8_set_alpha.methodPtr)));
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))uiRootPanel->klass->vtable._8_set_alpha.method)(
      uiRootPanel,
      uiRootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v8 - (float)(deltaTime * v3->fields.panelFadeVelocity));
    this = (GalleryFullScreenListViewIndicator_o *)v3->fields.uiRootPanel;
    if ( !this )
      goto LABEL_13;
    if ( ((float (__fastcall *)(GalleryFullScreenListViewIndicator_o *, const char *))this->klass[1]._1.gc_desc)(
           this,
           this->klass[1]._1.name) <= 0.01 )
      GalleryFullScreenListViewIndicator__Closed(v3, v10);
  }
  else if ( status == 1 )
  {
    v4 = this->fields.uiRootPanel;
    if ( !v4 )
      goto LABEL_13;
    v5 = COERCE_FLOAT(
           COERCE_UNSIGNED_INT128(
             ((long double (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))v4->klass->vtable._7_get_alpha.method)(
               this->fields.uiRootPanel,
               v4->klass->vtable._8_set_alpha.methodPtr)));
    v6 = UnityEngine_Time__get_deltaTime(0LL);
    ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v4->klass->vtable._8_set_alpha.method)(
      v4,
      v4->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v5 + (float)(v6 * v3->fields.panelFadeVelocity));
    this = (GalleryFullScreenListViewIndicator_o *)v3->fields.uiRootPanel;
    if ( !this )
      goto LABEL_13;
    if ( ((float (__fastcall *)(GalleryFullScreenListViewIndicator_o *, const char *))this->klass[1]._1.gc_desc)(
           this,
           this->klass[1]._1.name) >= 0.99 )
    {
      this = (GalleryFullScreenListViewIndicator_o *)v3->fields.uiRootPanel;
      v3->fields.status = 2;
      if ( this )
      {
        ((void (__fastcall *)(GalleryFullScreenListViewIndicator_o *, void *, float))this->klass[1]._1.namespaze)(
          this,
          this->klass[1]._1.byval_arg.data,
          1.0);
        return;
      }
LABEL_13:
      sub_1B4D1EC(this, method);
    }
  }
}


void __fastcall GalleryFullScreenListViewIndicator___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B607B & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewIndicator___c_TypeInfo, v1);
    byte_49B607B = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(GalleryFullScreenListViewIndicator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields->__9 = (struct GalleryFullScreenListViewIndicator___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)GalleryFullScreenListViewIndicator___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall GalleryFullScreenListViewIndicator___c___ctor(
        GalleryFullScreenListViewIndicator___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewIndicator___c___ResetPageSpriteList_b__25_0(
        GalleryFullScreenListViewIndicator___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( (byte_49B607C & 1) == 0 )
  {
    this = (GalleryFullScreenListViewIndicator___c_o *)sub_1B4CF90(&StringLiteral_20176/*"img_slider_off"*/, sprite);
    byte_49B607C = 1;
  }
  if ( !sprite )
    sub_1B4D1EC(this, sprite);
  UISprite__set_spriteName(sprite, (System_String_o *)StringLiteral_20176/*"img_slider_off"*/, 0LL);
}