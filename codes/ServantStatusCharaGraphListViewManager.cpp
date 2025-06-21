void __fastcall ServantStatusCharaGraphListViewManager___ctor(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.manualSelectedIndex = -1LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__AfterScrollCallback(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1833C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v3);
    byte_4B1833C = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v4, v5, v6);
}


void __fastcall ServantStatusCharaGraphListViewManager__Awake(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusCharaGraphListViewManager__ChangeImageImmediately(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL4 isEnableOwnRandomSetting; // w22
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  v3 = mainInfo;
  if ( (byte_4B1833B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, mainInfo);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, v6);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_4B1833B = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B1825A )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4B1825A = 1;
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
        ListViewManager__MoveCenterItem((ListViewManager_o *)this, (int32_t)mainInfo, 0, 0, 0.0, 0LL);
        return;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_20:
      sub_1BCB254(itemList, mainInfo);
    v10 = 0;
    while ( v10 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v10,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantStatusCharaGraphListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo
          && LODWORD(Item[7].monitor) == v3->fields.cardLimitCount )
        {
          ListViewManager__MoveCenterItem((ListViewManager_o *)this, v10, 0, 0, 0.0, 0LL);
          if ( !isEnableOwnRandomSetting )
            this->fields.manualSelectedIndex = v10;
          return;
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
      if ( !itemList )
        goto LABEL_20;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__ChangeServantInfo(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *charaGraphViewer; // x0
  struct ListViewItem_o *centerItem; // x20
  __int64 methodPtr_low; // x9
  int32_t SvtId; // w0
  int monitor; // w22
  int32_t v13; // w21
  const MethodInfo *v14; // x2
  int32_t v15; // w23
  bool v16; // zf
  const MethodInfo *v17; // x2
  ServantLimitAddMaster_o *v18; // x23
  const MethodInfo *v19; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  int32_t OverwriteCvId; // w24
  const MethodInfo *v22; // x2
  ListViewItem_c *klass; // x8
  ServantStatusCharaGraphListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1833D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_4B1833D = 1;
  }
  entity = 0LL;
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
      methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(centerItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        v24 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCB514(this->fields.centerItem);
        ServantStatusCharaGraphListViewManager__OnFinishedChangeCharaGraph(v24, v25);
        return;
      }
    }
    if ( !centerItem )
      goto LABEL_52;
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  SvtId = ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)charaGraphViewer, 0LL);
  monitor = (int)centerItem[1].monitor;
  v13 = SvtId;
  if ( monitor <= 10 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !charaGraphViewer )
      goto LABEL_52;
    monitor = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                (ServantLimitImageMaster_o *)charaGraphViewer,
                v13,
                monitor + 1,
                0LL);
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  if ( ServantStatusListViewItem__UpdateServantComment(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v13,
         monitor,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateProfileList((ServantStatusDialog_o *)charaGraphViewer, 1, v14);
  }
  if ( monitor == 1 )
  {
    v15 = 0;
  }
  else
  {
    v16 = this->fields.cardLimitCount == 1 && monitor == 2;
    v15 = v16 ? 1 : monitor;
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  if ( ServantStatusListViewItem__IsUpdateServantParameters(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v13,
         v15,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateServantParameters((ServantStatusDialog_o *)charaGraphViewer, v15, v17);
  }
  if ( monitor == 1 )
    monitor = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !charaGraphViewer )
    goto LABEL_52;
  v18 = (ServantLimitAddMaster_o *)charaGraphViewer;
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)charaGraphViewer, v13, 0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateServantDetailName((ServantStatusDialog_o *)charaGraphViewer, monitor, v19);
  }
  if ( !ServantLimitAddMaster__IsOverwriteCv(v18, v13, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !centerItem[1].klass )
    goto LABEL_52;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)charaGraphViewer;
  charaGraphViewer = (void *)ServantStatusListViewItem__get_SvtId(
                               (ServantStatusListViewItem_o *)centerItem[1].klass,
                               0LL);
  if ( !v20 )
    goto LABEL_52;
  charaGraphViewer = DataMasterBase_object__object__int___GetEntity(
                       v20,
                       (int32_t)charaGraphViewer,
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !charaGraphViewer )
    goto LABEL_52;
  OverwriteCvId = *((_DWORD *)charaGraphViewer + 51);
  if ( ServantLimitAddMaster__TryGetEntity(v18, &entity, v13, monitor, 0LL) )
  {
    charaGraphViewer = entity;
    if ( !entity )
      goto LABEL_52;
    OverwriteCvId = ServantLimitAddEntity__GetOverwriteCvId(entity, OverwriteCvId, 0LL);
  }
  charaGraphViewer = this->fields.servantStatusDialog;
  if ( !charaGraphViewer
    || (ServantStatusDialog__UpdateCv((ServantStatusDialog_o *)charaGraphViewer, OverwriteCvId, v22),
        (klass = centerItem[1].klass) == 0LL) )
  {
LABEL_52:
    sub_1BCB254(charaGraphViewer, method);
  }
  LODWORD(klass[1]._1.nestedTypes) = monitor;
}


void __fastcall ServantStatusCharaGraphListViewManager__CreateList(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 debugScaleLabel; // x0
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v17; // x0
  struct System_Int32_array *cardSelectList; // x26
  __int64 v19; // x23
  int32_t cardLimitCount; // w27
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  unsigned __int64 v24; // x28
  int32_t v25; // w25
  int32_t v26; // w22
  __int64 v27; // x29
  int32_t v28; // w21
  __int64 v29; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  __int64 v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  Il2CppObject *Component_object; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  System_Action_o *v51; // x22
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *ComponentInChildren_object__50402520; // x22
  CGThumbnailListItem_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v57; // x24
  System_Delegate_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Delegate_o *v61; // x8
  SpringPanel_OnFinished_c *v62; // x1
  RandomLimitCountManager_c *v63; // x0

  if ( (byte_4B18323 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, mainInfo);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&SpringPanel_OnFinished_TypeInfo, v9);
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, v10);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewItem_TypeInfo, v11);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v12);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__, v13);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    byte_4B18323 = 1;
  }
  debugScaleLabel = (__int64)this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !mainInfo )
    goto LABEL_54;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCardImageLimitCount(
                                            mainInfo,
                                            0LL);
    v17 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_54;
      v19 = *(_QWORD *)&cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, v19, 0LL);
      if ( (int)v19 >= 1 )
      {
        v24 = 0LL;
        v25 = 0;
        v26 = 0;
        v27 = (unsigned int)v19;
        while ( 1 )
        {
          if ( v24 >= cardSelectList->max_length )
            sub_1BCB25C(v21, v22, v23);
          v28 = cardSelectList->m_Items[v24 + 1];
          if ( (v28 & 0x80000000) == 0 )
          {
            v29 = sub_1BCB244(ServantStatusCharaGraphListViewItem_TypeInfo);
            ListViewItem___ctor_42932312((ListViewItem_o *)v29, v26, 0LL);
            *(_QWORD *)(v29 + 112) = mainInfo;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 112), (int32_t)mainInfo, v30, v31);
            *(_DWORD *)(v29 + 120) = v28;
            if ( v28 == cardLimitCount )
              v25 = *(_DWORD *)(v29 + 20);
            if ( v28 == ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL) )
              this->fields.manualSelectedIndex = *(_DWORD *)(v29 + 20);
            debugScaleLabel = (__int64)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_54;
            v34 = *(_QWORD *)(debugScaleLabel + 16);
            v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(debugScaleLabel + 28);
            if ( !v34 )
              goto LABEL_54;
            v36 = *(int *)(debugScaleLabel + 24);
            ++v26;
            if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)debugScaleLabel,
                (Il2CppObject *)v29,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = v34 + 8 * v36;
              *(_DWORD *)(debugScaleLabel + 24) = v36 + 1;
              *(_QWORD *)(v37 + 32) = v29;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v37 + 32), v29, v32, v33);
            }
          }
          if ( v27 == ++v24 )
            goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v17 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v38 = sub_1BCB244(v17);
  ListViewItem___ctor_42932312((ListViewItem_o *)v38, 0, 0LL);
  *(_QWORD *)(v38 + 112) = mainInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 112), (int32_t)mainInfo, v39, v40);
  *(_DWORD *)(v38 + 120) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (__int64)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_54;
  v43 = *(_QWORD *)(debugScaleLabel + 16);
  v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(debugScaleLabel + 28);
  if ( !v43 )
    goto LABEL_54;
  v45 = *(int *)(debugScaleLabel + 24);
  if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)debugScaleLabel,
      (Il2CppObject *)v38,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = v43 + 8 * v45;
    *(_DWORD *)(debugScaleLabel + 24) = v45 + 1;
    *(_QWORD *)(v46 + 32) = v38;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v46 + 32), v38, v41, v42);
  }
LABEL_31:
  v25 = 0;
LABEL_32:
  debugScaleLabel = ((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._7_GetDragRoot.method)(
                      this,
                      this->klass->vtable._8_ItemDragStart.methodPtr);
  if ( !debugScaleLabel )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)debugScaleLabel,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.backMask, (int32_t)Component_object, v48, v49);
  ListViewManager__SortItem((ListViewManager_o *)this, v25, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v50);
  v51 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v51;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v51, v52, v53);
  debugScaleLabel = (__int64)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_54;
  ComponentInChildren_object__50402520 = UnityEngine_Component__GetComponentInChildren_object__50402520(
                                           (UnityEngine_Component_o *)debugScaleLabel,
                                           (const MethodInfo_30114D8 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  debugScaleLabel = UnityEngine_Object__op_Inequality(
                      (UnityEngine_Object_o *)ComponentInChildren_object__50402520,
                      0LL,
                      0LL);
  if ( (debugScaleLabel & 1) != 0 )
  {
    if ( ComponentInChildren_object__50402520 )
    {
      monitor = (System_Delegate_o *)ComponentInChildren_object__50402520[2].monitor;
      p_monitor = (CGThumbnailListItem_o *)&ComponentInChildren_object__50402520[2].monitor;
      v57 = (SpringPanel_OnFinished_o *)sub_1BCB244(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(
        v57,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
        0LL);
      v58 = System_Delegate__Combine(monitor, (System_Delegate_o *)v57, 0LL);
      v61 = v58;
      if ( v58 )
      {
        v62 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v58->klass == SpringPanel_OnFinished_TypeInfo )
        {
          p_monitor->klass = (CGThumbnailListItem_c *)v58;
          if ( (SpringPanel_OnFinished_c *)v58->klass == v62 )
            goto LABEL_43;
        }
        sub_1BCB514(v58);
      }
      p_monitor->klass = (CGThumbnailListItem_c *)v61;
LABEL_43:
      sub_1BCAF9C(p_monitor, (int32_t)v61, v59, v60);
      goto LABEL_44;
    }
LABEL_54:
    sub_1BCB254(debugScaleLabel, mainInfo);
  }
LABEL_44:
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B1825A )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4B1825A = 1;
  }
  v63 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v63 = RandomLimitCountManager_TypeInfo;
  }
  if ( v63->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
    this->fields.manualSelectedIndex = v25;
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_4B18324 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B18324 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_1BCB254(0LL, v3);
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DragBackFadein(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0LL),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0LL),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0LL) )
  {
    sub_1BCB254(dragBackSprite, method);
  }
  gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0LL);
  TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DragBackFadeout(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0LL),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0LL),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0LL) )
  {
    sub_1BCB254(dragBackSprite, method);
  }
  gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0LL);
  TweenAlpha__Begin(gameObject, duration, 1.0, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DragBackOff(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0LL),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0LL) )
  {
    sub_1BCB254(dragBackSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetItem(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusCharaGraphListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B18327 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_4B18327 = 1;
  }
  result = (ServantStatusCharaGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusCharaGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ServantStatusCharaGraphListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetManualSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v4; // x19
  __int64 v5; // x1
  struct ListViewIndicator_o *indicator; // x8
  __int64 methodPtr_low; // x11
  int32_t monitor_high; // w21

  v4 = this;
  if ( (byte_4B18326 & 1) == 0 )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCAFF8(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         v5);
    byte_4B18326 = 1;
  }
  indicator = v4->fields.indicator;
  if ( !indicator )
    goto LABEL_19;
  methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    goto LABEL_19;
  }
  monitor_high = HIDWORD(indicator[2].monitor);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B1825A )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4B1825A = 1;
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
    sub_1BCB254(this, mainInfo);
  }
LABEL_16:
  if ( (monitor_high & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v4, monitor_high, method);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusCharaGraphListViewManager_o *v3; // x19
  struct ListViewIndicator_o *indicator; // x8
  __int64 methodPtr_low; // x11
  int32_t monitor_high; // w1

  v3 = this;
  if ( (byte_4B18325 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCAFF8(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         method);
    byte_4B18325 = 1;
  }
  indicator = v3->fields.indicator;
  if ( !indicator
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_1BCB254(this, method);
  }
  monitor_high = HIDWORD(indicator[2].monitor);
  if ( (monitor_high & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v3, monitor_high, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantStatusCharaGraphListViewManager__GetSreenPosition(
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
  float v11; // s0
  float v12; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4B18330 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, cam);
    byte_4B18330 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v8 )
  {
    if ( !byte_4B1608A )
    {
      sub_1BCAFF8(&UnityEngine_Vector2_TypeInfo, v9);
      byte_4B1608A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.x;
    v12 = static_fields->zeroVector.fields.y;
  }
  else
  {
    if ( !cam )
      sub_1BCB254(v8, v9);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToScreenPoint_69942344(cam, v14, 0LL);
  }
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ServantStatusCharaGraphListViewManager__GetWorldPosition(
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
  float v10; // s0
  float v11; // s1
  float z; // s2
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4B1832F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, cam);
    byte_4B1832F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v7 )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4B16191 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v10 = static_fields->zeroVector.fields.x;
    v11 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !cam )
      sub_1BCB254(v7, v8);
    v13.fields.z = 0.0;
    v13.fields.x = x;
    v13.fields.y = y;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__ScreenToWorldPoint_69942368(cam, v13, 0LL);
  }
  result.fields.z = z;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickExViewer(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  Il2CppObject *Component_object; // x20
  const MethodInfo *v12; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v18; // x21
  EventDelegate_Callback_o *v19; // x22
  ServantStatusCharaGraphListViewObject_o *v20; // x20
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x3

  v2 = this;
  if ( (byte_4B18337 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v6);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCAFF8(
                                                         &Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                                                         v8);
    byte_4B18337 = 1;
  }
  actionObject = v2->fields.actionObject;
  if ( !actionObject )
    goto LABEL_24;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL);
  Component_object = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)dragObject,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_24;
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)Component_object,
      0,
      v12);
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
    v12);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v14);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, method);
  v15 = Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BCB010(Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0LL);
  backMask = v2->fields.backMask;
  v18 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)v2,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v19 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v19,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v18, v19, 0LL),
        (this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask) == 0LL)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0LL),
        v20 = v2->fields.actionObject,
        v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v21, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0LL),
        !v20) )
  {
LABEL_24:
    sub_1BCB254(this, method);
  }
  ServantStatusCharaGraphListViewObject__Init_33935756(v20, 6, v21, 0.1, v22);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusCharaGraphListViewItem_o *CenterItem; // x20
  __int64 methodPtr_low; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  ServantLimitImageMaster_o *v20; // x21
  const MethodInfo *v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x2
  struct ServantStatusCharaGraphViewer_o *v25; // x8
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v29; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v31; // x21
  EventDelegate_Callback_o *v32; // x22
  ServantStatusCharaGraphListViewObject_o *v33; // x20
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  UIDragDropListViewBackMask_o *v39; // x20
  EventDelegate_Callback_o *v40; // x21
  EventDelegate_Callback_o *v41; // x22
  ServantStatusCharaGraphViewer_o *v42; // x0
  const MethodInfo *v43; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B18334 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewItem_TypeInfo, v10);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v11);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v12);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, v13);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B18334 = 1;
  }
  entity = 0LL;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_46;
  CenterItem = ServantStatusCharaGraphViewer__GetCenterItem(charaGraphViewer, method);
  if ( CenterItem
    || (CenterItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.centerItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(CenterItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ServantStatusCharaGraphListViewItem_c *)CenterItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    entity = 0LL;
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)charaGraphViewer;
        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)CenterItem->fields.mainInfo;
        if ( charaGraphViewer )
        {
          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                  (ServantStatusListViewItem_o *)charaGraphViewer,
                                                                  0LL);
          if ( v19 )
          {
            DataMasterBase_object__object__int___TryGetEntity(
              v19,
              &entity,
              (int32_t)charaGraphViewer,
              (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            if ( CenterItem->fields.mainInfo )
            {
              v20 = (ServantLimitImageMaster_o *)charaGraphViewer;
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                      CenterItem->fields.mainInfo,
                                                                      0LL);
              if ( v20 )
              {
                if ( !ServantLimitImageMaster__IsServantImageLimitSeal(
                        v20,
                        (int32_t)charaGraphViewer,
                        CenterItem->fields.imageLimitCount,
                        0LL)
                  && entity
                  && ServantEntity__IsAdditionExpandImage(
                       (ServantEntity_o *)entity,
                       CenterItem->fields.imageLimitCount,
                       0LL) )
                {
                  v22 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                    v22 = (_QWORD *)sub_1BCB010(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                  v23 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v22, v22[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
                  v25 = this->fields.charaGraphViewer;
                  if ( v25 )
                  {
                    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)v25->fields.viewerListViewManager;
                    if ( charaGraphViewer )
                    {
                      ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
                        (ServantStatusCharaGraphViewerListViewManager_o *)charaGraphViewer,
                        1,
                        v24);
                      actionObject = this->fields.actionObject;
                      if ( actionObject )
                      {
                        dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)UnityEngine_Object__op_Inequality(
                                                                                dragObject,
                                                                                0LL,
                                                                                0LL);
                        Component_object = 0LL;
                        if ( ((unsigned __int8)charaGraphViewer & 1) != 0 )
                        {
                          if ( !dragObject )
                            goto LABEL_46;
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)dragObject,
                                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
                        }
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)UnityEngine_Object__op_Inequality(
                                                                                (UnityEngine_Object_o *)Component_object,
                                                                                0LL,
                                                                                0LL);
                        if ( ((unsigned __int8)charaGraphViewer & 1) != 0 )
                        {
                          if ( !Component_object )
                            goto LABEL_46;
                          ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
                            (ServantStatusCharaGraphListViewObject_o *)Component_object,
                            CenterItem,
                            v29);
                        }
                        backMask = this->fields.backMask;
                        v31 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v31,
                          (Il2CppObject *)this,
                          (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v32 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v32,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0LL);
                        if ( backMask )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v31, v32, 0LL);
                          v33 = this->fields.actionObject;
                          v34 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                          System_Action___ctor(
                            v34,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                            0LL);
                          if ( v33 )
                          {
                            v36 = 10;
LABEL_45:
                            ServantStatusCharaGraphListViewObject__Init_33935756(v33, v36, v34, 0.1, v35);
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
                    ServantStatusCharaGraphViewer__SetDispType(charaGraphViewer, 1, v21);
                    charaGraphViewer = this->fields.charaGraphViewer;
                    if ( charaGraphViewer )
                    {
                      ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(charaGraphViewer, method);
                      v37 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                        v37 = (_QWORD *)sub_1BCB010(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                      v38 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v37, v37[4]);
                      OverwriteAssetSoundName__PlaySystemSe(v38, 1, 0, 0LL);
                      v39 = this->fields.backMask;
                      v40 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
                      EventDelegate_Callback___ctor(
                        v40,
                        (Il2CppObject *)this,
                        (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                        0LL);
                      v41 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
                      EventDelegate_Callback___ctor(
                        v41,
                        (Il2CppObject *)this,
                        Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                        0LL);
                      if ( v39 )
                      {
                        UIDragDropListViewBackMask__DragEndMultiTouch(v39, v40, v41, 0LL);
                        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)this->fields.backMask;
                        if ( charaGraphViewer )
                        {
                          UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
                          v33 = this->fields.actionObject;
                          v34 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                          System_Action___ctor(
                            v34,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                            0LL);
                          if ( v33 )
                          {
                            v36 = 6;
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
    sub_1BCB254(charaGraphViewer, method);
  }
  v42 = (ServantStatusCharaGraphViewer_o *)sub_1BCB514(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v42, v43);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ServantStatusCharaGraphListViewManager___c_c *v14; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__object__o *_9__47_0; // x22
  Il2CppObject *v17; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  ServantStatusCharaGraphListViewItem_array *v25; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppClass *v32; // x8
  __int64 methodPtr_low; // x9
  struct ServantStatusCharaGraphListViewObject_o *v34; // x10
  int32_t v35; // w1
  struct ServantStatusCharaGraphListViewObject_o **p_actionObject; // x0
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  ServantStatusDialog_c *v41; // x0

  if ( (byte_4B1832D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, obj);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___, v6);
    sub_1BCAFF8(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo, v7);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnClickListView__, v8);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, v9);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewObject_TypeInfo, v10);
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v11);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__, v12);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v13);
    byte_4B1832D = 1;
  }
  v14 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v14 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  _9__47_0 = (System_Func_object__object__o *)v14->static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__47_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__47_0,
      v17,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      0LL);
    static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__47_0, (int32_t)_9__47_0, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_304EFCC *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_object_(
                                                                    v21,
                                                                    (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_39;
  v25 = charaGraphViewer;
  if ( (int)charaGraphViewer->max_length >= 2 )
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
      v25,
      v24);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_39;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v27);
  }
  v28 = Method_ServantStatusCharaGraphListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1BCB010(Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0LL);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_39;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
  if ( obj )
  {
    v32 = (Il2CppClass *)ServantStatusCharaGraphListViewObject_TypeInfo;
    methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v34 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
          ? (struct ServantStatusCharaGraphListViewObject_o *)obj
          : 0LL;
    else
      v34 = 0LL;
    this->fields.actionObject = v34;
    p_actionObject = &this->fields.actionObject;
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v35 = obj->klass->_2.typeHierarchy[methodPtr_low - 1] == v32 ? (int)obj : 0;
    else
      v35 = 0;
  }
  else
  {
    v35 = 0;
    p_actionObject = &this->fields.actionObject;
    this->fields.actionObject = 0LL;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)p_actionObject, v35, v30, v31);
  actionObject = this->fields.actionObject;
  v38 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_39:
    sub_1BCB254(charaGraphViewer, v23);
  ServantStatusCharaGraphListViewObject__Init_33935756(actionObject, 4, v38, 0.1, v39);
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4B183F1 )
  {
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v40);
    byte_4B183F1 = 1;
  }
  v41 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v41 = ServantStatusDialog_TypeInfo;
  }
  v41->static_fields->_IsViewCharaGraph_k__BackingField = 1;
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v10; // x21
  EventDelegate_Callback_o *v11; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  const MethodInfo *v13; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8

  if ( (byte_4B18332 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, v6);
    byte_4B18332 = 1;
  }
  v7 = Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCB010(Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  backMask = this->fields.backMask;
  v10 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v11 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v10, v11, 0LL),
        actionObject = this->fields.actionObject,
        v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
          0LL),
        !actionObject)
    || (ServantStatusCharaGraphListViewObject__Init_33935756(actionObject, 5, v15, 0.1, v16),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
    sub_1BCB254(viewerListViewManager, v13);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v8; // x8
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
  float v19; // s13
  float v20; // s15
  const MethodInfo *v21; // x2
  _BOOL4 IsAbleToPinch; // w24
  __int64 v23; // x2
  ServantStatusCharaGraphListViewManager_o *v24; // x0
  const MethodInfo *v25; // x2
  int v26; // s0
  ServantStatusCharaGraphListViewManager_o *v29; // x0
  const MethodInfo *v30; // x2
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s8
  float v35; // s9
  float v36; // s10
  int32_t v37; // w9
  _BOOL4 v38; // w8
  _BOOL4 v39; // w25
  int32_t v40; // w0
  float Axis; // s0
  UnityEngine_Vector2_o v42; // kr00_8
  UnityEngine_Vector2_o v43; // kr08_8
  float v44; // s12
  ServantStatusCharaGraphListViewManager_o *v45; // x0
  const MethodInfo *v46; // x2
  float v47; // s0
  float v48; // s1
  float v49; // s2
  ServantStatusCharaGraphListViewManager_o *v50; // x0
  const MethodInfo *v51; // x2
  float v52; // s0
  float v53; // s1
  float v54; // s9
  float v55; // s2
  float v56; // s10
  float v57; // s14
  float v58; // s11
  float v59; // s0
  int32_t oldTouchCount; // w8
  char v61; // w24
  _BOOL8 MouseButton; // x0
  float v63; // s14
  float v64; // s0
  float v65; // s1
  float v66; // s2
  ServantStatusCharaGraphListViewManager_o *v67; // x0
  float v68; // s9
  float v69; // s10
  float v70; // s11
  float v71; // s0
  float v72; // s3
  float v73; // s0
  float v74; // s12
  float v75; // s2
  float baseScale; // s8
  float v77; // s0
  _BOOL4 v78; // w8
  _BOOL4 v79; // w9
  int emptyMessageLabel; // w8
  int32_t v81; // w1
  float v82; // s8
  float v83; // s9
  float v84; // s10
  float v85; // s0
  float v86; // s10
  ServantStatusCharaGraphListViewManager_o *v87; // x0
  __int64 v88; // x1
  const MethodInfo *v89; // x2
  float v90; // s8
  float v91; // s9
  ServantStatusCharaGraphListViewManager_o *v92; // x0
  const MethodInfo *v93; // x2
  float v94; // s8
  ServantStatusCharaGraphListViewManager_o *v95; // x0
  const MethodInfo *v96; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  float v98; // s9
  ServantStatusCharaGraphListViewManager_o *v99; // x0
  const MethodInfo *v100; // x2
  UnityEngine_Vector2_o v101; // kr20_8
  float v102; // s13
  float v103; // s11
  ServantStatusCharaGraphListViewManager_o *v104; // x0
  const MethodInfo *v105; // x2
  UnityEngine_Vector2_o v106; // kr28_8
  int v107; // w8
  int v108; // w9
  float v109; // s3
  float v110; // s10
  float v111; // s0
  float v112; // s9
  float v113; // s0
  bool v114; // nf
  int v115; // w9
  float v116; // s0
  float v117; // s1
  float v118; // s1
  float v119; // s0
  float v120; // s0
  float v121; // s11
  int v122; // s0
  UnityEngine_Vector2_o v125; // kr30_8
  UnityEngine_Vector2_o v126; // kr38_8
  float baseTouchSqrMagnitude; // s8
  float v128; // s0
  float v129; // [xsp+8h] [xbp-1B8h]
  float v130; // [xsp+Ch] [xbp-1B4h]
  float v131; // [xsp+14h] [xbp-1ACh]
  float v132; // [xsp+18h] [xbp-1A8h]
  float v133; // [xsp+18h] [xbp-1A8h]
  float v134; // [xsp+1Ch] [xbp-1A4h]
  float v135; // [xsp+1Ch] [xbp-1A4h]
  float v136; // [xsp+1Ch] [xbp-1A4h]
  UnityEngine_Vector3_o v137; // [xsp+20h] [xbp-1A0h]
  float v138; // [xsp+20h] [xbp-1A0h]
  float value; // [xsp+24h] [xbp-19Ch]
  float position; // [xsp+28h] [xbp-198h]
  float positiona; // [xsp+28h] [xbp-198h]
  float v142; // [xsp+2Ch] [xbp-194h]
  float v143; // [xsp+2Ch] [xbp-194h]
  float v144; // [xsp+2Ch] [xbp-194h]
  float z; // [xsp+30h] [xbp-190h]
  float v146; // [xsp+30h] [xbp-190h]
  float v147; // [xsp+34h] [xbp-18Ch]
  float v148; // [xsp+38h] [xbp-188h]
  UnityEngine_Vector3_o v149[7]; // [xsp+3Ch] [xbp-184h] BYREF
  UnityEngine_Touch_o v150; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Touch_o dest; // [xsp+E0h] [xbp-E0h] BYREF
  float v152; // [xsp+178h] [xbp-48h]
  float v153; // [xsp+17Ch] [xbp-44h]
  UnityEngine_Vector2_o v154; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v155; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v156; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v170; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v172; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v173; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v176; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v177; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B18331 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCAFF8(&StringLiteral_9096/*"Mouse ScrollWheel"*/, v4);
    byte_4B18331 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v150, 0, sizeof(v150));
  memset(&v149[0].fields.y, 0, 68);
  actionObject = v2->fields.actionObject;
  if ( !actionObject )
    goto LABEL_136;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !dragObject )
      goto LABEL_136;
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)dragObject,
                                                         0LL);
    if ( !this )
      goto LABEL_136;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(parent, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v8 = v2->fields.actionObject;
      if ( !v8 )
        goto LABEL_136;
      m_XMin = v8->fields.dragObjectRect.fields.m_XMin;
      m_YMin = v8->fields.dragObjectRect.fields.m_YMin;
      m_Width = v8->fields.dragObjectRect.fields.m_Width;
      m_Height = v8->fields.dragObjectRect.fields.m_Height;
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0LL);
      if ( !this )
        goto LABEL_136;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      v149[0].fields.x = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0LL);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !byte_4B16191 )
      {
        sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
        byte_4B16191 = 1;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
      v147 = m_Width;
      v148 = m_XMin;
      if ( !this )
        goto LABEL_136;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v19 = static_fields->zeroVector.fields.x;
      v20 = static_fields->zeroVector.fields.y;
      v153 = static_fields->zeroVector.fields.z;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)this, method);
      if ( touchCount )
      {
        v2->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          if ( touchCount == 1 )
          {
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
            if ( !this )
              goto LABEL_136;
            if ( LODWORD(this->fields.m_CancellationTokenSource) )
            {
              memmove(&dest, &this->fields.dropObjectList, 0x44u);
              v154 = UnityEngine_Touch__get_position(&dest, 0LL);
              *(UnityEngine_Vector3_o *)&v26 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v24,
                                                 v154,
                                                 v2->fields.camera,
                                                 v25);
              if ( !parent )
                goto LABEL_136;
              *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v26,
                                                 0LL);
              if ( v2->fields.oldTouchCount == 1 )
              {
                v34 = v31;
                v35 = v32;
                v36 = v33;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v29,
                                  v2->fields.oldTouchPosition,
                                  v2->fields.camera,
                                  v30);
                v160 = UnityEngine_Transform__InverseTransformPoint(
                         (UnityEngine_Transform_o *)parent,
                         WorldPosition,
                         0LL);
                v19 = v34 - v160.fields.x;
                v20 = v35 - v160.fields.y;
                v153 = v36 - v160.fields.z;
              }
              else
              {
                v2->fields.oldTouchCount = 1;
              }
              v2->fields.oldTouchPosition = UnityEngine_Touch__get_position(&dest, 0LL);
              v39 = 0;
              v61 = 0;
              v2->fields.isTouchScale = 0;
              v152 = 0.0;
              goto LABEL_58;
            }
LABEL_137:
            sub_1BCB25C(this, method, v23);
          }
          oldTouchCount = v2->fields.oldTouchCount;
          v61 = 0;
          v2->fields.oldTouchCount = 0;
          v2->fields.isTouchScale = 0;
          v152 = 0.0;
          v39 = oldTouchCount > 0;
LABEL_58:
          v74 = 0.0;
          goto LABEL_64;
        }
        v152 = 0.0;
        if ( !IsAbleToPinch )
        {
          v39 = 0;
          v61 = 0;
          goto LABEL_58;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_137;
        memmove(&v150, &this->fields.dropObjectList, 0x44u);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_137;
        memmove(&v149[0].fields.y, (char *)&this->fields.seed + 4, 0x44u);
        v42 = UnityEngine_Touch__get_position(&v150, 0LL);
        v43 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v149[0].fields.y, 0LL);
        v44 = (float)(v42.fields.y + v43.fields.y) * 0.5;
        v155.fields.x = (float)(v42.fields.x + v43.fields.x) * 0.5;
        v155.fields.y = v44;
        *(UnityEngine_Vector3_o *)&v47 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v45,
                                           v155,
                                           v2->fields.camera,
                                           v46);
        if ( !parent )
          goto LABEL_136;
        v137.fields.z = v49;
        v142 = m_Height;
        v137.fields.x = v47;
        v137.fields.y = v48;
        *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Transform__InverseTransformPoint(
                                           (UnityEngine_Transform_o *)parent,
                                           *(UnityEngine_Vector3_o *)&v47,
                                           0LL);
        v54 = v53;
        v56 = v55;
        v132 = v52;
        if ( v2->fields.oldTouchCount == 2 )
        {
          v57 = m_YMin;
          v58 = v52;
          v161 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v50,
                   v2->fields.oldTouchPosition,
                   v2->fields.camera,
                   v51);
          v162 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v161, 0LL);
          v19 = v58 - v162.fields.x;
          v20 = v54 - v162.fields.y;
          v59 = v56 - v162.fields.z;
        }
        else
        {
          v59 = v153;
          v57 = m_YMin;
          v2->fields.oldTouchCount = 2;
          v2->fields.isTouchScale = 0;
        }
        v136 = v59;
        v2->fields.oldTouchPosition.fields.x = (float)(v42.fields.x + v43.fields.x) * 0.5;
        v2->fields.oldTouchPosition.fields.y = v44;
        v125 = UnityEngine_Touch__get_position(&v150, 0LL);
        v126 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v149[0].fields.y, 0LL);
        v74 = (float)((float)(v125.fields.x - v126.fields.x) * (float)(v125.fields.x - v126.fields.x))
            + (float)((float)(v125.fields.y - v126.fields.y) * (float)(v125.fields.y - v126.fields.y));
        if ( !v2->fields.isTouchScale )
        {
          m_YMin = v57;
          v39 = 0;
          v61 = 0;
          if ( v74 > 0.0 )
          {
            v2->fields.isTouchScale = 1;
            v2->fields.baseTouchSqrMagnitude = v74;
            v2->fields.baseTouchScale = v149[0].fields.x;
          }
          v128 = v136;
          m_Height = v142;
          goto LABEL_133;
        }
        baseTouchSqrMagnitude = v2->fields.baseTouchSqrMagnitude;
        m_YMin = v57;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        m_Height = v142;
        v39 = 0;
        v75 = (float)(sqrtf(v74 / baseTouchSqrMagnitude) * v2->fields.baseTouchScale) - v149[0].fields.x;
        v73 = v56;
        v69 = v54;
        v68 = v132;
        v72 = v136;
      }
      else
      {
        v37 = v2->fields.oldTouchCount;
        v38 = 0;
        v2->fields.isTouchScale = 0;
        v2->fields.oldTouchCount = 0;
        v39 = v37 > 0;
        if ( x >= 0.0 )
        {
          v40 = UnityEngine_Screen__get_width(0LL);
          v38 = 0;
          if ( y >= 0.0 && x <= (float)v40 )
            v38 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        if ( IsAbleToPinch && v38 )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9096/*"Mouse ScrollWheel"*/, 0LL);
        else
          Axis = 0.0;
        v152 = Axis;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v156.fields.x = x;
          v156.fields.y = y;
          v143 = m_Height;
          v63 = m_YMin;
          *(UnityEngine_Vector3_o *)&v64 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v156,
                                             v2->fields.camera,
                                             v21);
          if ( !parent )
            goto LABEL_136;
          v137.fields.x = v64;
          v137.fields.y = v65;
          v137.fields.z = v66;
          v163 = UnityEngine_Transform__InverseTransformPoint(
                   (UnityEngine_Transform_o *)parent,
                   *(UnityEngine_Vector3_o *)&v64,
                   0LL);
          v68 = v163.fields.x;
          v69 = v163.fields.y;
          v70 = v163.fields.z;
          if ( v2->fields.isOldMousePosition )
          {
            v164 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v67,
                     v2->fields.oldMousePosition,
                     v2->fields.camera,
                     v21);
            v165 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v164, 0LL);
            v19 = v68 - v165.fields.x;
            v20 = v69 - v165.fields.y;
            v71 = v70 - v165.fields.z;
          }
          else
          {
            v71 = v153;
            v2->fields.isOldMousePosition = 1;
          }
          v72 = v71;
          v73 = v70;
          m_YMin = v63;
          m_Height = v143;
          v2->fields.oldMousePosition.fields.x = x;
          v2->fields.oldMousePosition.fields.y = y;
          v74 = 0.0;
        }
        else
        {
          v73 = v153;
          v74 = 0.0;
          v69 = v20;
          v68 = v19;
          v72 = v153;
          v2->fields.isOldMousePosition = 0;
          v137.fields.y = v20;
          v137.fields.z = v72;
          v137.fields.x = v19;
        }
        v75 = v152;
      }
      v152 = v75;
      if ( v75 == 0.0 )
      {
        v61 = 0;
LABEL_63:
        v153 = v72;
        goto LABEL_64;
      }
      v153 = v73;
      baseScale = v2->fields.baseScale;
      v77 = v149[0].fields.x + v75;
      if ( v75 >= 0.0 || v77 >= baseScale )
      {
        v78 = v77 > (float)(baseScale * 3.0);
        v79 = v75 > 0.0;
        v61 = v79 && v78;
        if ( v79 && v78 )
          baseScale = baseScale * 3.0;
        else
          baseScale = v149[0].fields.x + v75;
      }
      else
      {
        v61 = 1;
      }
      if ( v149[0].fields.x == baseScale )
        goto LABEL_63;
      v135 = v72;
      if ( v2->fields.oldTouchCount > 0 || v2->fields.isOldMousePosition )
      {
        v144 = m_YMin;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v177 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v137, 0LL);
        v149[0].fields.x = v177.fields.x;
        positiona = v177.fields.y;
        v121 = v177.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v178.fields.z = z;
        v178.fields.x = baseScale;
        v178.fields.y = baseScale;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v178, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v179.fields.x = v149[0].fields.x;
        v179.fields.y = positiona;
        v179.fields.z = v121;
        *(UnityEngine_Vector3_o *)&v122 = UnityEngine_Transform__TransformPoint(
                                            (UnityEngine_Transform_o *)this,
                                            v179,
                                            0LL);
        if ( !parent )
          goto LABEL_136;
        v180 = UnityEngine_Transform__InverseTransformPoint(
                 (UnityEngine_Transform_o *)parent,
                 *(UnityEngine_Vector3_o *)&v122,
                 0LL);
        v19 = v19 + (float)(v68 - v180.fields.x);
        m_YMin = v144;
        v20 = v20 + (float)(v69 - v180.fields.y);
        v153 = v135 + (float)(v153 - v180.fields.z);
        v149[0].fields.x = baseScale;
LABEL_64:
        this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
        if ( !this )
          goto LABEL_136;
        if ( BYTE4(this->fields.emptyMessageLabel) )
        {
          emptyMessageLabel = (int)this->fields.emptyMessageLabel;
          if ( v149[0].fields.x == v2->fields.baseScale )
          {
            if ( emptyMessageLabel == 1 )
            {
              v81 = 2;
LABEL_71:
              ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, v81, v21);
            }
          }
          else if ( emptyMessageLabel == 2 )
          {
            v81 = 1;
            goto LABEL_71;
          }
        }
        if ( (v61 & 1) != 0 && v74 > 0.0 && v2->fields.isTouchScale )
        {
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( !this )
            goto LABEL_136;
          LODWORD(v2->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(
                                                               (UnityEngine_Transform_o *)this,
                                                               0LL);
          v2->fields.baseTouchSqrMagnitude = v74;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v82 = localPosition.fields.x;
        v83 = localPosition.fields.y;
        v84 = localPosition.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v85 = v153;
        v167.fields.y = v20 + v83;
        v153 = v19;
        v167.fields.z = v85 + v84;
        v167.fields.x = v19 + v82;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v167, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v86 = (float)width;
        v168 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v90 = v168.fields.x;
        v91 = v168.fields.z;
        v146 = v168.fields.y;
        if ( !byte_4B1608A )
        {
          v87 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCAFF8(&UnityEngine_Vector2_TypeInfo, v88);
          byte_4B1608A = 1;
        }
        v169 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v87,
                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                 v2->fields.camera,
                 v89);
        v134 = v169.fields.x;
        v138 = v169.fields.y;
        v169.fields.x = (float)width;
        v169.fields.y = (float)height;
        v170 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v92,
                 *(UnityEngine_Vector2_o *)&v169.fields.x,
                 v2->fields.camera,
                 v93);
        v131 = v170.fields.x;
        v133 = v170.fields.y;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        value = v91;
        position = v90;
        v171 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v94 = v171.fields.x;
        v130 = v171.fields.y;
        SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v95, v171, v2->fields.camera, v96);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v172.fields.y = m_YMin + m_Height;
        v172.fields.z = 0.0;
        v172.fields.x = v148;
        v173 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v172, 0LL);
        v98 = v173.fields.x;
        v129 = v173.fields.y;
        v101 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v99, v173, v2->fields.camera, v100);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
LABEL_136:
          sub_1BCB254(this, method);
        v174.fields.z = 0.0;
        v174.fields.y = m_YMin;
        v174.fields.x = v148 + v147;
        v175 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v174, 0LL);
        v102 = v175.fields.x;
        v103 = v175.fields.y;
        v106 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v104, v175, v2->fields.camera, v105);
        v107 = v152 < 0.0 || v39;
        v108 = v107 | (v153 > 0.0);
        if ( (float)(v106.fields.x - v101.fields.x) <= v86 )
        {
          v113 = v86 * 0.5;
          if ( (v108 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v86 * 0.5)) )
          {
            v112 = position;
            v110 = v146;
            if ( ((v153 >= 0.0) & ~v107) == 0 )
            {
              v109 = (float)height;
              if ( SreenPosition.fields.x >= v113 )
                goto LABEL_99;
              v111 = (float)((float)(v134 + v131) * 0.5) - v94;
              goto LABEL_97;
            }
          }
          else
          {
            v110 = v146;
            v112 = position + (float)((float)((float)(v134 + v131) * 0.5) - v94);
          }
          v109 = (float)height;
        }
        else
        {
          v109 = (float)height;
          if ( !((v108 ^ 1) & 1 | (v101.fields.x <= 0.0)) )
          {
            v110 = v146;
            v111 = v134 - v98;
            v112 = position;
LABEL_97:
            v112 = v112 + v111;
            goto LABEL_99;
          }
          if ( ((v153 >= 0.0) & ~v107) != 0 )
          {
            v112 = position;
            v110 = v146;
          }
          else
          {
            v114 = v106.fields.x < v86;
            v112 = position;
            v110 = v146;
            if ( v114 )
            {
              v111 = v131 - v102;
              goto LABEL_97;
            }
          }
        }
LABEL_99:
        v115 = v107 | (v20 > 0.0);
        if ( (float)(v106.fields.y - v101.fields.y) > v109 )
        {
          if ( !((v115 ^ 1) & 1 | (v101.fields.y <= 0.0)) )
          {
            v116 = v138;
            v117 = v129;
LABEL_111:
            v120 = v116 - v117;
            goto LABEL_112;
          }
          if ( ((v20 >= 0.0) & ~v107) == 0 && v106.fields.y < v109 )
          {
            v120 = v133 - v103;
LABEL_112:
            v110 = v110 + v120;
          }
LABEL_113:
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( this )
          {
            v176.fields.z = value;
            v176.fields.x = v112;
            v176.fields.y = v110;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v176, 0LL);
            return;
          }
          goto LABEL_136;
        }
        v118 = 0.5;
        if ( (v115 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v109 * 0.5)) )
        {
          if ( ((v20 >= 0.0) & ~v107) != 0 || SreenPosition.fields.y >= (float)(v109 * 0.5) )
            goto LABEL_113;
          v119 = v138 + v133;
          v118 = 0.5;
        }
        else
        {
          v119 = v138 + v133;
        }
        v116 = v119 * v118;
        v117 = v130;
        goto LABEL_111;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0LL);
      if ( !this )
        goto LABEL_136;
      v181.fields.z = z;
      v181.fields.x = baseScale;
      v181.fields.y = baseScale;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v181, 0LL);
      v128 = v135;
      v149[0].fields.x = baseScale;
LABEL_133:
      v153 = v128;
      goto LABEL_64;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndAnother(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v6; // x21
  EventDelegate_Callback_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B18336 & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v3);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v4);
    byte_4B18336 = 1;
  }
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v7 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1BCB254(v8, v9);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v6, v7, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v6; // x21
  EventDelegate_Callback_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B18333 & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v3);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v4);
    byte_4B18333 = 1;
  }
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v7 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1BCB254(v8, v9);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v6, v7, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_Camera_o *main; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v11; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  const MethodInfo *v13; // x2
  float v14; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v20; // x21
  EventDelegate_Callback_o *v21; // x22

  if ( (byte_4B1832E & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, method);
    sub_1BCAFF8(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo, v3);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__, v6);
    byte_4B1832E = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.camera, (int32_t)main, v8, v9);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v14;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].monitor) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v13);
    charaGraphViewer = this->fields.charaGraphViewer;
    v16 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_1BCB244(ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      v17);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v16, v18);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v20 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v21 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_1BCB254(dragObject, v11);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v20, v21, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  ServantStatusDialog_c *v6; // x0

  if ( (byte_4B18335 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, method);
    byte_4B18335 = 1;
  }
  backMask = this->fields.backMask;
  if ( !backMask )
    sub_1BCB254(0LL, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_33934728(this, 3, v4);
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4B183F1 )
  {
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v5);
    byte_4B183F1 = 1;
  }
  v6 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v6 = ServantStatusDialog_TypeInfo;
  }
  v6->static_fields->_IsViewCharaGraph_k__BackingField = 0;
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4B1833A & 1) == 0 )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4B1833A = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B1825A )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4B1825A = 1;
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
      sub_1BCB254(v5, mainInfo);
    if ( !mainInfo->fields.isConvertOverwriteImage )
    {
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        this->fields.manualSelectedIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
      ServantStatusCharaGraphListViewManager__ChangeImageImmediately(this, mainInfo, method);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4B18339 & 1) == 0 )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4B18339 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B1825A )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4B1825A = 1;
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
      sub_1BCB254(v5, mainInfo);
    if ( !mainInfo->fields.isConvertOverwriteImage )
    {
      if ( mainInfo->fields.isEnableOwnRandomSetting )
        this->fields.manualSelectedIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
      ServantStatusCharaGraphListViewManager__ChangeImageImmediately(this, mainInfo, method);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyViewerCenter(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *actionObject; // x21
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  struct ServantStatusCharaGraphListViewObject_o *v9; // x8
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B1832C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1832C = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(actionObject, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v9 = this->fields.actionObject;
      if ( !v9 )
        goto LABEL_15;
      dragObject = (UnityEngine_Object_o *)v9->fields.dragObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) == 0
        || !dragObject
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)dragObject,
                                 (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_15:
        sub_1BCB254(Component_object, v8);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_object,
        item,
        v11);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnMoveEnd(
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

  if ( (byte_4B1832B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1832B = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BCB254(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B18329 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v11);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v12);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v13);
    byte_4B18329 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v19, v20);
      ServantStatusCharaGraphListViewObject__Init_33935756(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_33934728(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1832A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v9);
    sub_1BCAFF8(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v10);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v11);
    byte_4B1832A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v17, v18);
      ServantStatusCharaGraphListViewObject__Init_33935856(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetEnableScroll(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *statusItem,
        const MethodInfo *method)
{
  bool v5; // w19
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B18338 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusCharaGraphListViewIndicator_TypeInfo, statusItem);
    byte_4B18338 = 1;
  }
  if ( statusItem )
  {
    v5 = statusItem->fields.isCollection || !statusItem->fields.isEnableOwnRandomSetting;
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.indicator) == 0LL)
      || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(scrollView->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (ServantStatusCharaGraphListViewIndicator_c *)scrollView->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
    {
      sub_1BCB254(scrollView, statusItem);
    }
    ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
      (ServantStatusCharaGraphListViewIndicator_o *)scrollView,
      v5,
      0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusCharaGraphListViewManager__SetMode_33934572(this, mode, v6);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_33934572(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantStatusCharaGraphListViewManager__RequestListObject_33934728(this, dword_C1ABA8[mode - 1], v5);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_33934676(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusCharaGraphListViewManager__SetMode_33934572(this, mode, v6);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetObjectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B18328 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCAFF8(&ServantStatusCharaGraphListViewObject_TypeInfo, obj);
    byte_4B18328 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusCharaGraphListViewObject__Init_33934444(
    (ServantStatusCharaGraphListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetVisibleHighPriorityObject(
        ServantStatusCharaGraphListViewManager_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  ServantStatusDialog_o *servantStatusDialog; // x0

  servantStatusDialog = this->fields.servantStatusDialog;
  if ( !servantStatusDialog )
    sub_1BCB254(0LL, isVisible);
  ServantStatusDialog__SetVisibleHighPriorityObject(servantStatusDialog, isVisible, method);
}


void __fastcall ServantStatusCharaGraphListViewManager__add_callbackFunc(
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

  if ( (byte_4B1831D & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1831D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v7->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCB514(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantStatusCharaGraphListViewManager__add_callbackFunc2(
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

  if ( (byte_4B1831F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1831F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCB514(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B18322 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B18322 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BCB254(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BCB254(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42948252((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BCB254(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BCB254(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BCB254(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BCB254(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18321 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B18321 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v11;
}


void __fastcall ServantStatusCharaGraphListViewManager__remove_callbackFunc(
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

  if ( (byte_4B1831E & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1831E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v7->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCB514(v7);
  ServantStatusCharaGraphListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantStatusCharaGraphListViewManager__remove_callbackFunc2(
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

  if ( (byte_4B18320 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B18320 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCB514(v7);
  ServantStatusCharaGraphListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A10460;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A10418;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B1833E & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&result);
    byte_4B1833E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__Invoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantStatusCharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1833F & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v1);
    byte_4B1833F = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantStatusCharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantStatusCharaGraphListViewManager___c___ctor(
        ServantStatusCharaGraphListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager___c___OnClickListView_b__47_0(
        ServantStatusCharaGraphListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B18340 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusCharaGraphListViewItem_TypeInfo, x);
    byte_4B18340 = 1;
  }
  if ( !x )
    return 0LL;
  methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)x;
  return 0LL;
}