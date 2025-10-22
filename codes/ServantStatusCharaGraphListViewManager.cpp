void ServantStatusCharaGraphListViewManager___ctor(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.manualSelectedIndex = -1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantStatusCharaGraphListViewManager__AfterScrollCallback(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C52874 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    byte_4C52874 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v3, v4, v5);
}


void ServantStatusCharaGraphListViewManager__Awake(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusCharaGraphListViewManager__ChangeImageImmediately(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL4 isEnableOwnRandomSetting; // w22
  int32_t v7; // w21
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10

  v3 = mainInfo;
  if ( (byte_4C52873 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    sub_1C3E564(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4C52873 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C5292E )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    byte_4C5292E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)RandomLimitCountManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&itemList[4].fields._size + 8LL) )
  {
    if ( !v3 )
      goto LABEL_20;
    isEnableOwnRandomSetting = v3->fields.isEnableOwnRandomSetting;
    if ( !v3->fields.isEnableOwnRandomSetting )
    {
      mainInfo = (ServantStatusListViewItem_o *)(unsigned int)this->fields.manualSelectedIndex;
      if ( (_DWORD)mainInfo != -1 )
      {
        ListViewManager__MoveCenterItem((ListViewManager_o *)this, (int32_t)mainInfo, 0, 0, 0.0, 0);
        return;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_20:
      sub_1C3E7C0(itemList, mainInfo);
    v7 = 0;
    while ( v7 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v7,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (ServantStatusCharaGraphListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo
          && LODWORD(Item[8].klass) == v3->fields.cardLimitCount )
        {
          ListViewManager__MoveCenterItem((ListViewManager_o *)this, v7, 0, 0, 0.0, 0);
          if ( !isEnableOwnRandomSetting )
            this->fields.manualSelectedIndex = v7;
          return;
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v7;
      if ( !itemList )
        goto LABEL_20;
    }
  }
}


void ServantStatusCharaGraphListViewManager__ChangeServantInfo(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  void *charaGraphViewer; // x0
  struct ListViewItem_o *centerItem; // x20
  __int64 naturalAligment; // x9
  int32_t SvtId; // w0
  int monitor; // w22
  int32_t v8; // w21
  const MethodInfo *v9; // x2
  int32_t v10; // w23
  bool v11; // zf
  const MethodInfo *v12; // x2
  ServantLimitAddMaster_o *v13; // x23
  const MethodInfo *v14; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x24
  int32_t OverwriteCvId; // w24
  const MethodInfo *v17; // x2
  ListViewItem_c *klass; // x8
  ServantStatusCharaGraphListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C52875 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4C52875 = 1;
  }
  entity = 0;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_52;
  charaGraphViewer = ServantStatusCharaGraphViewer__GetCenterItem(
                       (ServantStatusCharaGraphViewer_o *)charaGraphViewer,
                       method);
  centerItem = (struct ListViewItem_o *)charaGraphViewer;
  if ( !charaGraphViewer )
  {
    centerItem = this->fields.centerItem;
    if ( centerItem )
    {
      method = (const MethodInfo *)ServantStatusCharaGraphListViewItem_TypeInfo;
      naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( centerItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        v19 = (ServantStatusCharaGraphListViewManager_o *)sub_1C3EA80(this->fields.centerItem);
        ServantStatusCharaGraphListViewManager__OnFinishedChangeCharaGraph(v19, v20);
        return;
      }
    }
    if ( !centerItem )
      goto LABEL_52;
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  SvtId = ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)charaGraphViewer, 0);
  monitor = (int)centerItem[1].monitor;
  v8 = SvtId;
  if ( monitor <= 10 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !charaGraphViewer )
      goto LABEL_52;
    monitor = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                (ServantLimitImageMaster_o *)charaGraphViewer,
                v8,
                monitor + 1,
                0);
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  if ( ServantStatusListViewItem__UpdateServantComment((ServantStatusListViewItem_o *)charaGraphViewer, v8, monitor, 0) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateProfileList((ServantStatusDialog_o *)charaGraphViewer, 1, v9);
  }
  if ( monitor == 1 )
  {
    v10 = 0;
  }
  else
  {
    v11 = this->fields.cardLimitCount == 1 && monitor == 2;
    v10 = v11 ? 1 : monitor;
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  if ( ServantStatusListViewItem__IsUpdateServantParameters((ServantStatusListViewItem_o *)charaGraphViewer, v8, v10, 0) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateServantParameters((ServantStatusDialog_o *)charaGraphViewer, v10, v12);
  }
  if ( monitor == 1 )
    monitor = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !charaGraphViewer )
    goto LABEL_52;
  v13 = (ServantLimitAddMaster_o *)charaGraphViewer;
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)charaGraphViewer, v8, 0) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateServantDetailName((ServantStatusDialog_o *)charaGraphViewer, monitor, v14);
  }
  if ( !ServantLimitAddMaster__IsOverwriteCv(v13, v8, 0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !centerItem[1].klass )
    goto LABEL_52;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)charaGraphViewer;
  charaGraphViewer = (void *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)centerItem[1].klass, 0);
  if ( !v15 )
    goto LABEL_52;
  charaGraphViewer = DataMasterBase_object__object__int___GetEntity(
                       v15,
                       (int32_t)charaGraphViewer,
                       (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !charaGraphViewer )
    goto LABEL_52;
  OverwriteCvId = *((_DWORD *)charaGraphViewer + 51);
  if ( ServantLimitAddMaster__TryGetEntity(v13, &entity, v8, monitor, 0) )
  {
    charaGraphViewer = entity;
    if ( !entity )
      goto LABEL_52;
    OverwriteCvId = ServantLimitAddEntity__GetOverwriteCvId(entity, OverwriteCvId, 0);
  }
  charaGraphViewer = this->fields.servantStatusDialog;
  if ( !charaGraphViewer
    || (ServantStatusDialog__UpdateCv((ServantStatusDialog_o *)charaGraphViewer, OverwriteCvId, v17),
        (klass = centerItem[1].klass) == 0) )
  {
LABEL_52:
    sub_1C3E7C0(charaGraphViewer, method);
  }
  LODWORD(klass[1]._2.typeHierarchy) = monitor;
}


void ServantStatusCharaGraphListViewManager__CreateList(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 debugScaleLabel; // x0
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v7; // x0
  struct System_Int32_array *cardSelectList; // x26
  il2cpp_array_size_t max_length; // x23
  int32_t cardLimitCount; // w27
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned __int64 v13; // x28
  int32_t v14; // w25
  int32_t v15; // w22
  __int64 v16; // x29
  int32_t v17; // w21
  __int64 v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  __int64 v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  Il2CppObject *Component_object; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *ComponentInChildren_object__51315876; // x22
  CGThumbnailListItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // t1
  SpringPanel_OnFinished_o *v46; // x24
  System_Delegate_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Delegate_o *v50; // x8
  SpringPanel_OnFinished_c *v51; // x1
  RandomLimitCountManager_c *v52; // x0

  if ( (byte_4C5285B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SpringPanel_OnFinished_TypeInfo);
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    sub_1C3E564(&ServantStatusCharaGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5285B = 1;
  }
  debugScaleLabel = (__int64)this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !mainInfo )
    goto LABEL_54;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0);
    ConvertOverwriteCardImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCardImageLimitCount(
                                            mainInfo,
                                            0);
    v7 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_54;
      max_length = cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
      if ( (int)max_length >= 1 )
      {
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = (unsigned int)max_length;
        while ( 1 )
        {
          if ( v13 >= LODWORD(cardSelectList->max_length) )
            sub_1C3E7C8(v11, v12);
          v17 = cardSelectList->m_Items[v13];
          if ( (v17 & 0x80000000) == 0 )
          {
            v18 = sub_1C3E7B0(ServantStatusCharaGraphListViewItem_TypeInfo);
            ListViewItem___ctor_43860152((ListViewItem_o *)v18, v15, 0);
            *(_QWORD *)(v18 + 120) = mainInfo;
            sub_1C3E508((CGThumbnailListItem_o *)(v18 + 120), (int32_t)mainInfo, v19, v20);
            *(_DWORD *)(v18 + 128) = v17;
            if ( v17 == cardLimitCount )
              v14 = *(_DWORD *)(v18 + 20);
            if ( v17 == ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0) )
              this->fields.manualSelectedIndex = *(_DWORD *)(v18 + 20);
            debugScaleLabel = (__int64)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_54;
            v23 = *(_QWORD *)(debugScaleLabel + 16);
            v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(debugScaleLabel + 28);
            if ( !v23 )
              goto LABEL_54;
            v25 = *(int *)(debugScaleLabel + 24);
            ++v15;
            if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)debugScaleLabel,
                (Il2CppObject *)v18,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = v23 + 8 * v25;
              *(_DWORD *)(debugScaleLabel + 24) = v25 + 1;
              *(_QWORD *)(v26 + 32) = v18;
              sub_1C3E508((CGThumbnailListItem_o *)(v26 + 32), v18, v21, v22);
            }
          }
          if ( v16 == ++v13 )
            goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v7 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v27 = sub_1C3E7B0(v7);
  ListViewItem___ctor_43860152((ListViewItem_o *)v27, 0, 0);
  *(_QWORD *)(v27 + 120) = mainInfo;
  sub_1C3E508((CGThumbnailListItem_o *)(v27 + 120), (int32_t)mainInfo, v28, v29);
  *(_DWORD *)(v27 + 128) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (__int64)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_54;
  v32 = *(_QWORD *)(debugScaleLabel + 16);
  v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(debugScaleLabel + 28);
  if ( !v32 )
    goto LABEL_54;
  v34 = *(int *)(debugScaleLabel + 24);
  if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)debugScaleLabel,
      (Il2CppObject *)v27,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = v32 + 8 * v34;
    *(_DWORD *)(debugScaleLabel + 24) = v34 + 1;
    *(_QWORD *)(v35 + 32) = v27;
    sub_1C3E508((CGThumbnailListItem_o *)(v35 + 32), v27, v30, v31);
  }
LABEL_31:
  v14 = 0;
LABEL_32:
  debugScaleLabel = ((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                      this,
                      this->klass->vtable._7_GetDragRoot.method);
  if ( !debugScaleLabel )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)debugScaleLabel,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.backMask, (int32_t)Component_object, v37, v38);
  ListViewManager__SortItem((ListViewManager_o *)this, v14, 0, -1, 0);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v39);
  v40 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0);
  this->fields.callbackAfterScroll = v40;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v40, v41, v42);
  debugScaleLabel = (__int64)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_54;
  ComponentInChildren_object__51315876 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_object__51315876(
                                                                   (UnityEngine_Component_o *)debugScaleLabel,
                                                                   (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  debugScaleLabel = UnityEngine_Object__op_Inequality(ComponentInChildren_object__51315876, 0, 0);
  if ( (debugScaleLabel & 1) != 0 )
  {
    if ( ComponentInChildren_object__51315876 )
    {
      m_CachedPtr = (System_Delegate_o *)ComponentInChildren_object__51315876[1].fields.m_CachedPtr;
      p_fields = (CGThumbnailListItem_o *)&ComponentInChildren_object__51315876[1].fields;
      v46 = (SpringPanel_OnFinished_o *)sub_1C3E7B0(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(
        v46,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
        0);
      v47 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v46, 0);
      v50 = v47;
      if ( v47 )
      {
        v51 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v47->klass == SpringPanel_OnFinished_TypeInfo )
        {
          p_fields->klass = (CGThumbnailListItem_c *)v47;
          if ( (SpringPanel_OnFinished_c *)v47->klass == v51 )
            goto LABEL_43;
        }
        sub_1C3EA80(v47);
      }
      p_fields->klass = (CGThumbnailListItem_c *)v50;
LABEL_43:
      sub_1C3E508(p_fields, (int32_t)v50, v48, v49);
      goto LABEL_44;
    }
LABEL_54:
    sub_1C3E7C0(debugScaleLabel, mainInfo);
  }
LABEL_44:
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C5292E )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    byte_4C5292E = 1;
  }
  v52 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v52 = RandomLimitCountManager_TypeInfo;
  }
  if ( v52->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
    this->fields.manualSelectedIndex = v14;
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
}


void ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_4C5285C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5285C = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_1C3E7C0(0, v3);
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ServantStatusCharaGraphListViewManager__DragBackFadein(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0) )
  {
    sub_1C3E7C0(dragBackSprite, method);
  }
  gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0);
  TweenAlpha__Begin(gameObject, duration, 0.0, 0);
}


void ServantStatusCharaGraphListViewManager__DragBackFadeout(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0) )
  {
    sub_1C3E7C0(dragBackSprite, method);
  }
  gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0);
  TweenAlpha__Begin(gameObject, duration, 1.0, 0);
}


void ServantStatusCharaGraphListViewManager__DragBackOff(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0) )
  {
    sub_1C3E7C0(dragBackSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0);
}


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphListViewManager__GetItem(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C5285F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4C5285F = 1;
  }
  result = (ServantStatusCharaGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusCharaGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ServantStatusCharaGraphListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphListViewManager__GetManualSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v4; // x19
  struct ListViewIndicator_o *indicator; // x8
  __int64 naturalAligment; // x11
  int32_t monitor_high; // w21

  v4 = this;
  if ( (byte_4C5285E & 1) == 0 )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C3E564(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_4C5285E = 1;
  }
  indicator = v4->fields.indicator;
  if ( !indicator )
    goto LABEL_19;
  naturalAligment = ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.naturalAligment;
  if ( indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    goto LABEL_19;
  }
  monitor_high = HIDWORD(indicator[2].monitor);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C5292E )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    byte_4C5292E = 1;
  }
  this = (ServantStatusCharaGraphListViewManager_o *)RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)RandomLimitCountManager_TypeInfo;
  }
  if ( LOBYTE(this->fields.sort->monitor) )
  {
    if ( mainInfo )
    {
      if ( mainInfo->fields.isEnableOwnRandomSetting )
        monitor_high = v4->fields.manualSelectedIndex;
      goto LABEL_16;
    }
LABEL_19:
    sub_1C3E7C0(this, mainInfo);
  }
LABEL_16:
  if ( monitor_high < 0 )
    return 0;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v4, monitor_high, method);
}


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphListViewManager__GetSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusCharaGraphListViewManager_o *v3; // x19
  struct ListViewIndicator_o *indicator; // x8
  __int64 naturalAligment; // x11
  int32_t monitor_high; // w1

  v3 = this;
  if ( (byte_4C5285D & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C3E564(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_4C5285D = 1;
  }
  indicator = v3->fields.indicator;
  if ( !indicator
    || (naturalAligment = ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_1C3E7C0(this, method);
  }
  monitor_high = HIDWORD(indicator[2].monitor);
  if ( monitor_high < 0 )
    return 0;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v3, monitor_high, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o ServantStatusCharaGraphListViewManager__GetSreenPosition(
        ServantStatusCharaGraphListViewManager_o *this,
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v11; // s0 OVERLAPPED
  float v12; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4C52868 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52868 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( v8 )
  {
    if ( !byte_4C5059A )
    {
      sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
      byte_4C5059A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.x;
    v12 = static_fields->zeroVector.fields.y;
  }
  else
  {
    if ( !cam )
      sub_1C3E7C0(v8, v9);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToScreenPoint_71147832(cam, v14, 0);
  }
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o ServantStatusCharaGraphListViewManager__GetWorldPosition(
        ServantStatusCharaGraphListViewManager_o *this,
        UnityEngine_Vector2_o screenPos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v10; // s0 OVERLAPPED
  float v11; // s1
  float z; // s2
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4C52867 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52867 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( v7 )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v10 = static_fields->zeroVector.fields.x;
    v11 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !cam )
      sub_1C3E7C0(v7, v8);
    v13.fields.z = 0.0;
    v13.fields.x = x;
    v13.fields.y = y;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__ScreenToWorldPoint_71147856(cam, v13, 0);
  }
  result.fields.z = z;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


void ServantStatusCharaGraphListViewManager__OnClickExViewer(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x19
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  Il2CppObject *Component_object; // x20
  const MethodInfo *v6; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  const MethodInfo *v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v12; // x21
  EventDelegate_Callback_o *v13; // x22
  ServantStatusCharaGraphListViewObject_o *v14; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_4C5286F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    byte_4C5286F = 1;
  }
  actionObject = v2->fields.actionObject;
  if ( !actionObject )
    goto LABEL_24;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
  Component_object = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)dragObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_24;
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)Component_object,
      0,
      v6);
  }
  charaGraphViewer = v2->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_24;
  this = (ServantStatusCharaGraphListViewManager_o *)charaGraphViewer->fields.viewerListViewManager;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
    (ServantStatusCharaGraphViewerListViewManager_o *)this,
    0,
    v6);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v8);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, method);
  v9 = Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C3E57C(Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C3E548(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
  backMask = v2->fields.backMask;
  v12 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)v2,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0);
  v13 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v12, v13, 0),
        (this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask) == 0)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0),
        v14 = v2->fields.actionObject,
        v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0),
        !v14) )
  {
LABEL_24:
    sub_1C3E7C0(this, method);
  }
  ServantStatusCharaGraphListViewObject__Init_34389640(v14, 6, v15, 0.1, v16);
}


void ServantStatusCharaGraphListViewManager__OnClickFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusCharaGraphListViewItem_o *CenterItem; // x20
  __int64 naturalAligment; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  ServantLimitImageMaster_o *v7; // x21
  const MethodInfo *v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  struct ServantStatusCharaGraphViewer_o *v12; // x8
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v16; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v18; // x21
  EventDelegate_Callback_o *v19; // x22
  ServantStatusCharaGraphListViewObject_o *v20; // x20
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  UIDragDropListViewBackMask_o *v26; // x20
  EventDelegate_Callback_o *v27; // x21
  EventDelegate_Callback_o *v28; // x22
  ServantStatusCharaGraphViewer_o *v29; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C5286C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantStatusCharaGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5286C = 1;
  }
  entity = 0;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_46;
  CenterItem = ServantStatusCharaGraphViewer__GetCenterItem(charaGraphViewer, method);
  if ( CenterItem
    || (CenterItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.centerItem) == 0
    || (naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment,
        CenterItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ServantStatusCharaGraphListViewItem_c *)CenterItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    entity = 0;
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)charaGraphViewer;
        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)CenterItem->fields.mainInfo;
        if ( charaGraphViewer )
        {
          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                  (ServantStatusListViewItem_o *)charaGraphViewer,
                                                                  0);
          if ( v6 )
          {
            DataMasterBase_object__object__int___TryGetEntity(
              v6,
              &entity,
              (int32_t)charaGraphViewer,
              (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            if ( CenterItem->fields.mainInfo )
            {
              v7 = (ServantLimitImageMaster_o *)charaGraphViewer;
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                      CenterItem->fields.mainInfo,
                                                                      0);
              if ( v7 )
              {
                if ( !ServantLimitImageMaster__IsServantImageLimitSeal(
                        v7,
                        (int32_t)charaGraphViewer,
                        CenterItem->fields.imageLimitCount,
                        0)
                  && entity
                  && ServantEntity__IsAdditionExpandImage(
                       (ServantEntity_o *)entity,
                       CenterItem->fields.imageLimitCount,
                       0) )
                {
                  v9 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                    v9 = (_QWORD *)sub_1C3E57C(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                  v10 = (System_Reflection_MethodBase_o *)sub_1C3E548(v9, v9[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
                  v12 = this->fields.charaGraphViewer;
                  if ( v12 )
                  {
                    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)v12->fields.viewerListViewManager;
                    if ( charaGraphViewer )
                    {
                      ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
                        (ServantStatusCharaGraphViewerListViewManager_o *)charaGraphViewer,
                        1,
                        v11);
                      actionObject = this->fields.actionObject;
                      if ( actionObject )
                      {
                        dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)UnityEngine_Object__op_Inequality(
                                                                                dragObject,
                                                                                0,
                                                                                0);
                        Component_object = 0;
                        if ( ((unsigned __int8)charaGraphViewer & 1) != 0 )
                        {
                          if ( !dragObject )
                            goto LABEL_46;
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)dragObject,
                                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
                        }
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)UnityEngine_Object__op_Inequality(
                                                                                (UnityEngine_Object_o *)Component_object,
                                                                                0,
                                                                                0);
                        if ( ((unsigned __int8)charaGraphViewer & 1) != 0 )
                        {
                          if ( !Component_object )
                            goto LABEL_46;
                          ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
                            (ServantStatusCharaGraphListViewObject_o *)Component_object,
                            CenterItem,
                            v16);
                        }
                        backMask = this->fields.backMask;
                        v18 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v18,
                          (Il2CppObject *)this,
                          (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0);
                        v19 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v19,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0);
                        if ( backMask )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v18, v19, 0);
                          v20 = this->fields.actionObject;
                          v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
                          System_Action___ctor(
                            v21,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                            0);
                          if ( v20 )
                          {
                            v23 = 10;
LABEL_45:
                            ServantStatusCharaGraphListViewObject__Init_34389640(v20, v23, v21, 0.1, v22);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  charaGraphViewer = this->fields.charaGraphViewer;
                  if ( charaGraphViewer )
                  {
                    ServantStatusCharaGraphViewer__SetDispType(charaGraphViewer, 1, v8);
                    charaGraphViewer = this->fields.charaGraphViewer;
                    if ( charaGraphViewer )
                    {
                      ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(charaGraphViewer, method);
                      v24 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                        v24 = (_QWORD *)sub_1C3E57C(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                      v25 = (System_Reflection_MethodBase_o *)sub_1C3E548(v24, v24[4]);
                      OverwriteAssetSoundName__PlaySystemSe(v25, 1, 0, 0);
                      v26 = this->fields.backMask;
                      v27 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
                      EventDelegate_Callback___ctor(
                        v27,
                        (Il2CppObject *)this,
                        (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                        0);
                      v28 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
                      EventDelegate_Callback___ctor(
                        v28,
                        (Il2CppObject *)this,
                        Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                        0);
                      if ( v26 )
                      {
                        UIDragDropListViewBackMask__DragEndMultiTouch(v26, v27, v28, 0);
                        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)this->fields.backMask;
                        if ( charaGraphViewer )
                        {
                          UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0);
                          v20 = this->fields.actionObject;
                          v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
                          System_Action___ctor(
                            v21,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                            0);
                          if ( v20 )
                          {
                            v23 = 6;
                            goto LABEL_45;
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
      }
    }
LABEL_46:
    sub_1C3E7C0(charaGraphViewer, method);
  }
  v29 = (ServantStatusCharaGraphViewer_o *)sub_1C3EA80(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v29, v30);
}


void ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager___c_c *v5; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__object__o *_9__47_0; // x22
  Il2CppObject *v8; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  ServantStatusCharaGraphListViewItem_array *v16; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppClass *v23; // x8
  __int64 naturalAligment; // x9
  struct ServantStatusCharaGraphListViewObject_o *v25; // x10
  int32_t v26; // w1
  struct ServantStatusCharaGraphListViewObject_o **p_actionObject; // x0
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3
  ServantStatusDialog_c *v31; // x0

  if ( (byte_4C52865 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
    sub_1C3E564(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__);
    sub_1C3E564(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1C3E564(&ServantStatusDialog_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__);
    sub_1C3E564(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_4C52865 = 1;
  }
  v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  _9__47_0 = (System_Func_object__object__o *)v5->static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__47_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__47_0,
      v8,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      0);
    static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__47_0, (int32_t)_9__47_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_object_(
                                                                    v12,
                                                                    (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_39;
  v16 = charaGraphViewer;
  if ( SLODWORD(charaGraphViewer->max_length) >= 2 )
  {
    if ( !obj )
      goto LABEL_39;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_39;
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_39;
    ServantStatusCharaGraphViewer__Setup(
      (ServantStatusCharaGraphViewer_o *)charaGraphViewer,
      linkItem->fields.index,
      v16,
      v15);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_39;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v18);
  }
  v19 = Method_ServantStatusCharaGraphListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1C3E57C(Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C3E548(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_39;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0);
  if ( obj )
  {
    v23 = (Il2CppClass *)ServantStatusCharaGraphListViewObject_TypeInfo;
    naturalAligment = ServantStatusCharaGraphListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v25 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
          ? (struct ServantStatusCharaGraphListViewObject_o *)obj
          : 0LL;
    else
      v25 = 0;
    this->fields.actionObject = v25;
    p_actionObject = &this->fields.actionObject;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v26 = obj->klass->_2.typeHierarchy[naturalAligment - 1] == v23 ? (int)obj : 0;
    else
      v26 = 0;
  }
  else
  {
    v26 = 0;
    p_actionObject = &this->fields.actionObject;
    this->fields.actionObject = 0;
  }
  sub_1C3E508((CGThumbnailListItem_o *)p_actionObject, v26, v21, v22);
  actionObject = this->fields.actionObject;
  v29 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0);
  if ( !actionObject )
LABEL_39:
    sub_1C3E7C0(charaGraphViewer, v14);
  ServantStatusCharaGraphListViewObject__Init_34389640(actionObject, 4, v29, 0.1, v30);
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4C5292F )
  {
    sub_1C3E564(&ServantStatusDialog_TypeInfo);
    byte_4C5292F = 1;
  }
  v31 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v31 = ServantStatusDialog_TypeInfo;
  }
  v31->static_fields->_IsViewCharaGraph_k__BackingField = 1;
}


void ServantStatusCharaGraphListViewManager__OnClickMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v6; // x21
  EventDelegate_Callback_o *v7; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  const MethodInfo *v9; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x3
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8

  if ( (byte_4C5286A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__);
    byte_4C5286A = 1;
  }
  v3 = Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0);
  v7 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v6, v7, 0),
        actionObject = this->fields.actionObject,
        v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
          0),
        !actionObject)
    || (ServantStatusCharaGraphListViewObject__Init_34389640(actionObject, 5, v11, 0.1, v12),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0 )
  {
    sub_1C3E7C0(viewerListViewManager, v9);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v9);
}


void ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x20
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v6; // x8
  float m_XMin; // s9
  float m_YMin; // s11
  float m_Width; // s10
  float m_Height; // s14
  int32_t width; // w21
  int32_t height; // w22
  float x; // s8
  float y; // s12
  int32_t touchCount; // w25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v17; // s13
  float v18; // s15
  const MethodInfo *v19; // x2
  _BOOL4 IsAbleToPinch; // w24
  ServantStatusCharaGraphListViewManager_o *v21; // x0
  const MethodInfo *v22; // x2
  ServantStatusCharaGraphListViewManager_o *v23; // x0
  const MethodInfo *v24; // x2
  float v25; // s8
  float v26; // s9
  float v27; // s10
  int32_t v28; // w9
  _BOOL4 v29; // w8
  _BOOL4 v30; // w25
  int32_t v31; // w0
  float Axis; // s0
  UnityEngine_Vector2_o v33; // kr00_8
  UnityEngine_Vector2_o v34; // kr08_8
  float v35; // s12
  ServantStatusCharaGraphListViewManager_o *v36; // x0
  const MethodInfo *v37; // x2
  ServantStatusCharaGraphListViewManager_o *v38; // x0
  const MethodInfo *v39; // x2
  float v40; // s9
  float v41; // s10
  float v42; // s14
  float v43; // s11
  float v44; // s0
  int32_t oldTouchCount; // w8
  char v46; // w24
  _BOOL8 MouseButton; // x0
  float v48; // s14
  ServantStatusCharaGraphListViewManager_o *v49; // x0
  float v50; // s9
  float v51; // s10
  float v52; // s11
  float v53; // s0
  float v54; // s3
  float v55; // s0
  float v56; // s12
  float v57; // s2
  float baseScale; // s8
  float v59; // s0
  _BOOL4 v60; // w8
  _BOOL4 v61; // w9
  int emptyMessageLabel; // w8
  int32_t v63; // w1
  float v64; // s8
  float v65; // s9
  float v66; // s10
  float v67; // s0
  float v68; // s10
  ServantStatusCharaGraphListViewManager_o *v69; // x0
  const MethodInfo *v70; // x2
  float v71; // s8
  float v72; // s9
  ServantStatusCharaGraphListViewManager_o *v73; // x0
  const MethodInfo *v74; // x2
  float v75; // s8
  ServantStatusCharaGraphListViewManager_o *v76; // x0
  const MethodInfo *v77; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  float v79; // s9
  ServantStatusCharaGraphListViewManager_o *v80; // x0
  const MethodInfo *v81; // x2
  UnityEngine_Vector2_o v82; // kr20_8
  float v83; // s13
  float v84; // s11
  ServantStatusCharaGraphListViewManager_o *v85; // x0
  const MethodInfo *v86; // x2
  UnityEngine_Vector2_o v87; // kr28_8
  int v88; // w8
  int v89; // w9
  float v90; // s3
  float v91; // s10
  float v92; // s0
  float v93; // s9
  float v94; // s0
  bool v95; // nf
  int v96; // w9
  float v97; // s0
  float v98; // s1
  float v99; // s1
  float v100; // s0
  float v101; // s0
  float v102; // s11
  UnityEngine_Vector2_o v103; // kr30_8
  UnityEngine_Vector2_o v104; // kr38_8
  float baseTouchSqrMagnitude; // s8
  float v106; // s0
  float v107; // [xsp+8h] [xbp-1B8h]
  float v108; // [xsp+Ch] [xbp-1B4h]
  float v109; // [xsp+14h] [xbp-1ACh]
  float v110; // [xsp+18h] [xbp-1A8h]
  float v111; // [xsp+18h] [xbp-1A8h]
  float v112; // [xsp+1Ch] [xbp-1A4h]
  float v113; // [xsp+1Ch] [xbp-1A4h]
  float v114; // [xsp+1Ch] [xbp-1A4h]
  UnityEngine_Vector3_o v115; // [xsp+20h] [xbp-1A0h]
  float v116; // [xsp+20h] [xbp-1A0h]
  float value; // [xsp+24h] [xbp-19Ch]
  float position; // [xsp+28h] [xbp-198h]
  float positiona; // [xsp+28h] [xbp-198h]
  float v120; // [xsp+2Ch] [xbp-194h]
  float v121; // [xsp+2Ch] [xbp-194h]
  float v122; // [xsp+2Ch] [xbp-194h]
  float z; // [xsp+30h] [xbp-190h]
  float v124; // [xsp+30h] [xbp-190h]
  float v125; // [xsp+34h] [xbp-18Ch]
  float v126; // [xsp+38h] [xbp-188h]
  UnityEngine_Vector3_o v127[7]; // [xsp+3Ch] [xbp-184h] BYREF
  UnityEngine_Touch_o v128; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Touch_o dest; // [xsp+E0h] [xbp-E0h] BYREF
  float v130; // [xsp+178h] [xbp-48h]
  float v131; // [xsp+17Ch] [xbp-44h]
  UnityEngine_Vector2_o v132; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v133; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v134; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C52869 & 1) == 0 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C3E564(&StringLiteral_9167/*"Mouse ScrollWheel"*/);
    byte_4C52869 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v128, 0, sizeof(v128));
  memset(&v127[0].fields.y, 0, 68);
  actionObject = v2->fields.actionObject;
  if ( !actionObject )
    goto LABEL_136;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(dragObject, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !dragObject )
      goto LABEL_136;
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)dragObject,
                                                         0);
    if ( !this )
      goto LABEL_136;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(parent, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v6 = v2->fields.actionObject;
      if ( !v6 )
        goto LABEL_136;
      m_XMin = v6->fields.dragObjectRect.fields.m_XMin;
      m_YMin = v6->fields.dragObjectRect.fields.m_YMin;
      m_Width = v6->fields.dragObjectRect.fields.m_Width;
      m_Height = v6->fields.dragObjectRect.fields.m_Height;
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0);
      if ( !this )
        goto LABEL_136;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      v127[0].fields.x = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0);
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
      v125 = m_Width;
      v126 = m_XMin;
      if ( !this )
        goto LABEL_136;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v17 = static_fields->zeroVector.fields.x;
      v18 = static_fields->zeroVector.fields.y;
      v131 = static_fields->zeroVector.fields.z;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)this, method);
      if ( touchCount )
      {
        v2->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          if ( touchCount == 1 )
          {
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
            if ( !this )
              goto LABEL_136;
            if ( LODWORD(this->fields.m_CancellationTokenSource) )
            {
              memmove(&dest, &this->fields.dropObjectList, 0x44u);
              v132 = UnityEngine_Touch__get_position(&dest, 0);
              WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                v21,
                                v132,
                                v2->fields.camera,
                                v22);
              if ( !parent )
                goto LABEL_136;
              v138 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, WorldPosition, 0);
              if ( v2->fields.oldTouchCount == 1 )
              {
                v25 = v138.fields.x;
                v26 = v138.fields.y;
                v27 = v138.fields.z;
                v139 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                         v23,
                         v2->fields.oldTouchPosition,
                         v2->fields.camera,
                         v24);
                v140 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v139, 0);
                v17 = v25 - v140.fields.x;
                v18 = v26 - v140.fields.y;
                v131 = v27 - v140.fields.z;
              }
              else
              {
                v2->fields.oldTouchCount = 1;
              }
              v2->fields.oldTouchPosition = UnityEngine_Touch__get_position(&dest, 0);
              v30 = 0;
              v46 = 0;
              v2->fields.isTouchScale = 0;
              v130 = 0.0;
              goto LABEL_58;
            }
LABEL_137:
            sub_1C3E7C8(this, method);
          }
          oldTouchCount = v2->fields.oldTouchCount;
          v46 = 0;
          v2->fields.oldTouchCount = 0;
          v2->fields.isTouchScale = 0;
          v130 = 0.0;
          v30 = oldTouchCount > 0;
LABEL_58:
          v56 = 0.0;
          goto LABEL_64;
        }
        v130 = 0.0;
        if ( !IsAbleToPinch )
        {
          v30 = 0;
          v46 = 0;
          goto LABEL_58;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
        if ( !this )
          goto LABEL_136;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_137;
        memmove(&v128, &this->fields.dropObjectList, 0x44u);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
        if ( !this )
          goto LABEL_136;
        if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_137;
        memmove(&v127[0].fields.y, (char *)&this->fields.seed + 4, 0x44u);
        v33 = UnityEngine_Touch__get_position(&v128, 0);
        v34 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v127[0].fields.y, 0);
        v35 = (float)(v33.fields.y + v34.fields.y) * 0.5;
        v133.fields.x = (float)(v33.fields.x + v34.fields.x) * 0.5;
        v133.fields.y = v35;
        v141 = ServantStatusCharaGraphListViewManager__GetWorldPosition(v36, v133, v2->fields.camera, v37);
        if ( !parent )
          goto LABEL_136;
        v115 = v141;
        v120 = m_Height;
        v142 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v141, 0);
        v40 = v142.fields.y;
        v41 = v142.fields.z;
        v110 = v142.fields.x;
        if ( v2->fields.oldTouchCount == 2 )
        {
          v42 = m_YMin;
          v43 = v142.fields.x;
          v143 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v38,
                   v2->fields.oldTouchPosition,
                   v2->fields.camera,
                   v39);
          v144 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v143, 0);
          v17 = v43 - v144.fields.x;
          v18 = v40 - v144.fields.y;
          v44 = v41 - v144.fields.z;
        }
        else
        {
          v44 = v131;
          v42 = m_YMin;
          v2->fields.oldTouchCount = 2;
          v2->fields.isTouchScale = 0;
        }
        v114 = v44;
        v2->fields.oldTouchPosition.fields.x = (float)(v33.fields.x + v34.fields.x) * 0.5;
        v2->fields.oldTouchPosition.fields.y = v35;
        v103 = UnityEngine_Touch__get_position(&v128, 0);
        v104 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v127[0].fields.y, 0);
        v56 = (float)((float)(v103.fields.x - v104.fields.x) * (float)(v103.fields.x - v104.fields.x))
            + (float)((float)(v103.fields.y - v104.fields.y) * (float)(v103.fields.y - v104.fields.y));
        if ( !v2->fields.isTouchScale )
        {
          m_YMin = v42;
          v30 = 0;
          v46 = 0;
          if ( v56 > 0.0 )
          {
            v2->fields.isTouchScale = 1;
            v2->fields.baseTouchSqrMagnitude = v56;
            v2->fields.baseTouchScale = v127[0].fields.x;
          }
          v106 = v114;
          m_Height = v120;
          goto LABEL_133;
        }
        baseTouchSqrMagnitude = v2->fields.baseTouchSqrMagnitude;
        m_YMin = v42;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        m_Height = v120;
        v30 = 0;
        v57 = (float)(sqrtf(v56 / baseTouchSqrMagnitude) * v2->fields.baseTouchScale) - v127[0].fields.x;
        v55 = v41;
        v51 = v40;
        v50 = v110;
        v54 = v114;
      }
      else
      {
        v28 = v2->fields.oldTouchCount;
        v29 = 0;
        v2->fields.isTouchScale = 0;
        v2->fields.oldTouchCount = 0;
        v30 = v28 > 0;
        if ( x >= 0.0 )
        {
          v31 = UnityEngine_Screen__get_width(0);
          v29 = 0;
          if ( y >= 0.0 && x <= (float)v31 )
            v29 = y <= (float)UnityEngine_Screen__get_height(0);
        }
        if ( IsAbleToPinch && v29 )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9167/*"Mouse ScrollWheel"*/, 0);
        else
          Axis = 0.0;
        v130 = Axis;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0)) )
        {
          v134.fields.x = x;
          v134.fields.y = y;
          v121 = m_Height;
          v48 = m_YMin;
          v145 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                   v134,
                   v2->fields.camera,
                   v19);
          if ( !parent )
            goto LABEL_136;
          v115 = v145;
          v146 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v145, 0);
          v50 = v146.fields.x;
          v51 = v146.fields.y;
          v52 = v146.fields.z;
          if ( v2->fields.isOldMousePosition )
          {
            v147 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v49,
                     v2->fields.oldMousePosition,
                     v2->fields.camera,
                     v19);
            v148 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v147, 0);
            v17 = v50 - v148.fields.x;
            v18 = v51 - v148.fields.y;
            v53 = v52 - v148.fields.z;
          }
          else
          {
            v53 = v131;
            v2->fields.isOldMousePosition = 1;
          }
          v54 = v53;
          v55 = v52;
          m_YMin = v48;
          m_Height = v121;
          v2->fields.oldMousePosition.fields.x = x;
          v2->fields.oldMousePosition.fields.y = y;
          v56 = 0.0;
        }
        else
        {
          v55 = v131;
          v56 = 0.0;
          v51 = v18;
          v50 = v17;
          v54 = v131;
          v2->fields.isOldMousePosition = 0;
          v115.fields.y = v18;
          v115.fields.z = v54;
          v115.fields.x = v17;
        }
        v57 = v130;
      }
      v130 = v57;
      if ( v57 == 0.0 )
      {
        v46 = 0;
LABEL_63:
        v131 = v54;
        goto LABEL_64;
      }
      v131 = v55;
      baseScale = v2->fields.baseScale;
      v59 = v127[0].fields.x + v57;
      if ( v57 >= 0.0 || v59 >= baseScale )
      {
        v60 = v59 > (float)(baseScale * 3.0);
        v61 = v57 > 0.0;
        v46 = v61 && v60;
        if ( v61 && v60 )
          baseScale = baseScale * 3.0;
        else
          baseScale = v127[0].fields.x + v57;
      }
      else
      {
        v46 = 1;
      }
      if ( v127[0].fields.x == baseScale )
        goto LABEL_63;
      v113 = v54;
      if ( v2->fields.oldTouchCount > 0 || v2->fields.isOldMousePosition )
      {
        v122 = m_YMin;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v160 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v115, 0);
        v127[0].fields.x = v160.fields.x;
        positiona = v160.fields.y;
        v102 = v160.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v161.fields.z = z;
        v161.fields.x = baseScale;
        v161.fields.y = baseScale;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v161, 0);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v162.fields.x = v127[0].fields.x;
        v162.fields.y = positiona;
        v162.fields.z = v102;
        v163 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v162, 0);
        if ( !parent )
          goto LABEL_136;
        v164 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v163, 0);
        v17 = v17 + (float)(v50 - v164.fields.x);
        m_YMin = v122;
        v18 = v18 + (float)(v51 - v164.fields.y);
        v131 = v113 + (float)(v131 - v164.fields.z);
        v127[0].fields.x = baseScale;
LABEL_64:
        this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
        if ( !this )
          goto LABEL_136;
        if ( BYTE4(this->fields.emptyMessageLabel) )
        {
          emptyMessageLabel = (int)this->fields.emptyMessageLabel;
          if ( v127[0].fields.x == v2->fields.baseScale )
          {
            if ( emptyMessageLabel == 1 )
            {
              v63 = 2;
LABEL_71:
              ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, v63, v19);
            }
          }
          else if ( emptyMessageLabel == 2 )
          {
            v63 = 1;
            goto LABEL_71;
          }
        }
        if ( (v46 & 1) != 0 && v56 > 0.0 && v2->fields.isTouchScale )
        {
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0);
          if ( !this )
            goto LABEL_136;
          LODWORD(v2->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(
                                                               (UnityEngine_Transform_o *)this,
                                                               0);
          v2->fields.baseTouchSqrMagnitude = v56;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        v64 = localPosition.fields.x;
        v65 = localPosition.fields.y;
        v66 = localPosition.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v67 = v131;
        v150.fields.y = v18 + v65;
        v131 = v17;
        v150.fields.z = v67 + v66;
        v150.fields.x = v17 + v64;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v150, 0);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v68 = (float)width;
        v151 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        v71 = v151.fields.x;
        v72 = v151.fields.z;
        v124 = v151.fields.y;
        if ( !byte_4C5059A )
        {
          v69 = (ServantStatusCharaGraphListViewManager_o *)sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
          byte_4C5059A = 1;
        }
        v152 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v69,
                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                 v2->fields.camera,
                 v70);
        v112 = v152.fields.x;
        v116 = v152.fields.y;
        v152.fields.x = (float)width;
        v152.fields.y = (float)height;
        v153 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v73,
                 *(UnityEngine_Vector2_o *)&v152.fields.x,
                 v2->fields.camera,
                 v74);
        v109 = v153.fields.x;
        v111 = v153.fields.y;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        value = v72;
        position = v71;
        v154 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        v75 = v154.fields.x;
        v108 = v154.fields.y;
        SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v76, v154, v2->fields.camera, v77);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v155.fields.y = m_YMin + m_Height;
        v155.fields.z = 0.0;
        v155.fields.x = v126;
        v156 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v155, 0);
        v79 = v156.fields.x;
        v107 = v156.fields.y;
        v82 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v80, v156, v2->fields.camera, v81);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
LABEL_136:
          sub_1C3E7C0(this, method);
        v157.fields.z = 0.0;
        v157.fields.y = m_YMin;
        v157.fields.x = v126 + v125;
        v158 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v157, 0);
        v83 = v158.fields.x;
        v84 = v158.fields.y;
        v87 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v85, v158, v2->fields.camera, v86);
        v88 = v130 < 0.0 || v30;
        v89 = v88 | (v131 > 0.0);
        if ( (float)(v87.fields.x - v82.fields.x) <= v68 )
        {
          v94 = v68 * 0.5;
          if ( (v89 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v68 * 0.5)) )
          {
            v93 = position;
            v91 = v124;
            if ( ((v131 >= 0.0) & ~v88) == 0 )
            {
              v90 = (float)height;
              if ( SreenPosition.fields.x >= v94 )
                goto LABEL_99;
              v92 = (float)((float)(v112 + v109) * 0.5) - v75;
              goto LABEL_97;
            }
          }
          else
          {
            v91 = v124;
            v93 = position + (float)((float)((float)(v112 + v109) * 0.5) - v75);
          }
          v90 = (float)height;
        }
        else
        {
          v90 = (float)height;
          if ( !((v89 ^ 1) & 1 | (v82.fields.x <= 0.0)) )
          {
            v91 = v124;
            v92 = v112 - v79;
            v93 = position;
LABEL_97:
            v93 = v93 + v92;
            goto LABEL_99;
          }
          if ( ((v131 >= 0.0) & ~v88) != 0 )
          {
            v93 = position;
            v91 = v124;
          }
          else
          {
            v95 = v87.fields.x < v68;
            v93 = position;
            v91 = v124;
            if ( v95 )
            {
              v92 = v109 - v83;
              goto LABEL_97;
            }
          }
        }
LABEL_99:
        v96 = v88 | (v18 > 0.0);
        if ( (float)(v87.fields.y - v82.fields.y) > v90 )
        {
          if ( !((v96 ^ 1) & 1 | (v82.fields.y <= 0.0)) )
          {
            v97 = v116;
            v98 = v107;
LABEL_111:
            v101 = v97 - v98;
            goto LABEL_112;
          }
          if ( ((v18 >= 0.0) & ~v88) == 0 && v87.fields.y < v90 )
          {
            v101 = v111 - v84;
LABEL_112:
            v91 = v91 + v101;
          }
LABEL_113:
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0);
          if ( this )
          {
            v159.fields.z = value;
            v159.fields.x = v93;
            v159.fields.y = v91;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v159, 0);
            return;
          }
          goto LABEL_136;
        }
        v99 = 0.5;
        if ( (v96 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v90 * 0.5)) )
        {
          if ( ((v18 >= 0.0) & ~v88) != 0 || SreenPosition.fields.y >= (float)(v90 * 0.5) )
            goto LABEL_113;
          v100 = v116 + v111;
          v99 = 0.5;
        }
        else
        {
          v100 = v116 + v111;
        }
        v97 = v100 * v99;
        v98 = v108;
        goto LABEL_111;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0);
      if ( !this )
        goto LABEL_136;
      v165.fields.z = z;
      v165.fields.x = baseScale;
      v165.fields.y = baseScale;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v165, 0);
      v106 = v113;
      v127[0].fields.x = baseScale;
LABEL_133:
      v131 = v106;
      goto LABEL_64;
    }
  }
}


void ServantStatusCharaGraphListViewManager__OnEndAnother(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C5286E & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_4C5286E = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0);
  v5 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
    sub_1C3E7C0(v6, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v4, v5, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C5286B & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_4C5286B = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0);
  v5 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
    sub_1C3E7C0(v6, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v4, v5, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *main; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v7; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  const MethodInfo *v9; // x2
  float v10; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v16; // x21
  EventDelegate_Callback_o *v17; // x22

  if ( (byte_4C52866 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__);
    byte_4C52866 = 1;
  }
  main = UnityEngine_Camera__get_main(0);
  this->fields.camera = main;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.camera, (int32_t)main, v4, v5);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v10;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].monitor) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v9);
    charaGraphViewer = this->fields.charaGraphViewer;
    v12 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_1C3E7B0(ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      v13);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v12, v14);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v16 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0);
  v17 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
LABEL_12:
    sub_1C3E7C0(dragObject, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v16, v17, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2
  ServantStatusDialog_c *v5; // x0

  if ( (byte_4C5286D & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusDialog_TypeInfo);
    byte_4C5286D = 1;
  }
  backMask = this->fields.backMask;
  if ( !backMask )
    sub_1C3E7C0(0, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0);
  ServantStatusCharaGraphListViewManager__RequestListObject_34388612(this, 3, v4);
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4C5292F )
  {
    sub_1C3E564(&ServantStatusDialog_TypeInfo);
    byte_4C5292F = 1;
  }
  v5 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v5 = ServantStatusDialog_TypeInfo;
  }
  v5->static_fields->_IsViewCharaGraph_k__BackingField = 0;
}


void ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4C52872 & 1) == 0 )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    byte_4C52872 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C5292E )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    byte_4C5292E = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_1C3E7C0(v5, mainInfo);
    if ( !mainInfo->fields.isConvertOverwriteImage )
    {
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        this->fields.manualSelectedIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
      ServantStatusCharaGraphListViewManager__ChangeImageImmediately(this, mainInfo, method);
    }
  }
}


void ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4C52871 & 1) == 0 )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    byte_4C52871 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C5292E )
  {
    sub_1C3E564(&RandomLimitCountManager_TypeInfo);
    byte_4C5292E = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_1C3E7C0(v5, mainInfo);
    if ( !mainInfo->fields.isConvertOverwriteImage )
    {
      if ( mainInfo->fields.isEnableOwnRandomSetting )
        this->fields.manualSelectedIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
      ServantStatusCharaGraphListViewManager__ChangeImageImmediately(this, mainInfo, method);
    }
  }
}


void ServantStatusCharaGraphListViewManager__OnModifyViewerCenter(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actionObject; // x21
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  struct ServantStatusCharaGraphListViewObject_o *v8; // x8
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4C52864 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52864 = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(actionObject, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v8 = this->fields.actionObject;
      if ( !v8 )
        goto LABEL_15;
      dragObject = (UnityEngine_Object_o *)v8->fields.dragObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
      if ( ((unsigned __int8)Component_object & 1) == 0
        || !dragObject
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)dragObject,
                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0 )
      {
LABEL_15:
        sub_1C3E7C0(Component_object, v7);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_object,
        item,
        v10);
    }
  }
}


void ServantStatusCharaGraphListViewManager__OnMoveEnd(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C52863 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52863 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewManager__RequestListObject(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C52861 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C52861 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v12, v13);
      ServantStatusCharaGraphListViewObject__Init_34389640(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewManager__RequestListObject_34388612(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C52862 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__);
    sub_1C3E564(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C52862 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      ServantStatusCharaGraphListViewObject__Init_34389740(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void ServantStatusCharaGraphListViewManager__SetEnableScroll(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *statusItem,
        const MethodInfo *method)
{
  bool v5; // w19
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2
  __int64 naturalAligment; // x10

  if ( (byte_4C52870 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_4C52870 = 1;
  }
  if ( statusItem )
  {
    v5 = statusItem->fields.isCollection || !statusItem->fields.isEnableOwnRandomSetting;
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, v5, 0),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.indicator) == 0)
      || (naturalAligment = ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.naturalAligment,
          scrollView->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (ServantStatusCharaGraphListViewIndicator_c *)scrollView->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
    {
      sub_1C3E7C0(scrollView, statusItem);
    }
    ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
      (ServantStatusCharaGraphListViewIndicator_o *)scrollView,
      v5,
      v7);
  }
}


void ServantStatusCharaGraphListViewManager__SetMode(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusCharaGraphListViewManager__SetMode_34388456(this, mode, v6);
}


void ServantStatusCharaGraphListViewManager__SetMode_34388456(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantStatusCharaGraphListViewManager__RequestListObject_34388612(this, dword_C4A7EC[mode - 1], v5);
}


void ServantStatusCharaGraphListViewManager__SetMode_34388560(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusCharaGraphListViewManager__SetMode_34388456(this, mode, v6);
}


void ServantStatusCharaGraphListViewManager__SetObjectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C52860 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C3E564(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4C52860 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusCharaGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusCharaGraphListViewObject__Init_34388328(
    (ServantStatusCharaGraphListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewManager__SetVisibleHighPriorityObject(
        ServantStatusCharaGraphListViewManager_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  ServantStatusDialog_o *servantStatusDialog; // x0

  servantStatusDialog = this->fields.servantStatusDialog;
  if ( !servantStatusDialog )
    sub_1C3E7C0(0, isVisible);
  ServantStatusDialog__SetVisibleHighPriorityObject(servantStatusDialog, isVisible, method);
}


void ServantStatusCharaGraphListViewManager__add_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusCharaGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C52855 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C52855 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v7->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C3EA80(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc(v10, v11, v12);
}


void ServantStatusCharaGraphListViewManager__add_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C52857 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C52857 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C3EA80(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ServantStatusCharaGraphListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C5285A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5285A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C3E7C0(0, v10);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C3E7C0(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43876032((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C3E7C0(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C3E7C0(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C3E7C0(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C3E7C0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C52859 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52859 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}


void ServantStatusCharaGraphListViewManager__remove_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusCharaGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C52856 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C52856 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v7->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C3EA80(v7);
  ServantStatusCharaGraphListViewManager__add_callbackFunc2(v10, v11, v12);
}


void ServantStatusCharaGraphListViewManager__remove_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C52858 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C52858 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C3EA80(v7);
  ServantStatusCharaGraphListViewManager__get_ObjectList(v10, v11);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7D4E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7D49C;
}


System_IAsyncResult_o *ServantStatusCharaGraphListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C52876 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C52876 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc__Invoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ServantStatusCharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C52877 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_4C52877 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ServantStatusCharaGraphListViewManager___c___ctor(
        ServantStatusCharaGraphListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphListViewManager___c___OnClickListView_b__47_0(
        ServantStatusCharaGraphListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C52878 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4C52878 = 1;
  }
  if ( !x )
    return 0;
  naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
  if ( x->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantStatusCharaGraphListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)x;
  return 0;
}