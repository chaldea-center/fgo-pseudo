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
  __int64 v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49F8128 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v3);
    byte_49F8128 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v4, v5);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterScroll, (int32_t)v6, v7, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL4 isEnableOwnRandomSetting; // w22
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int32_t manualSelectedIndex; // w1

  if ( (byte_49F8127 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, mainInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v6);
    sub_1B640C8(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_49F8127 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_49F81D6 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)RandomLimitCountManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&itemList[4].fields._size + 8LL) )
  {
    if ( !mainInfo )
      goto LABEL_20;
    isEnableOwnRandomSetting = mainInfo->fields.isEnableOwnRandomSetting;
    if ( !mainInfo->fields.isEnableOwnRandomSetting )
    {
      manualSelectedIndex = this->fields.manualSelectedIndex;
      if ( manualSelectedIndex != -1 )
      {
        ListViewManager__MoveCenterItem((ListViewManager_o *)this, manualSelectedIndex, 0, 0, 0.0, 0LL);
        return;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_20:
      sub_1B64324(itemList);
    v10 = 0;
    while ( v10 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v10,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantStatusCharaGraphListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo
          && LODWORD(Item[7].monitor) == mainInfo->fields.cardLimitCount )
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

  if ( (byte_49F8129 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_49F8129 = 1;
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
      methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(centerItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        v24 = (ServantStatusCharaGraphListViewManager_o *)sub_1B645E4(this->fields.centerItem);
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
    charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
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
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1B64324(charaGraphViewer);
  }
  LODWORD(klass[1]._1.interopData) = monitor;
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
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v19; // x0
  struct System_Int32_array *cardSelectList; // x26
  __int64 v21; // x23
  int32_t cardLimitCount; // w27
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x28
  int32_t v27; // w25
  int32_t v28; // w22
  __int64 v29; // x29
  int32_t v30; // w21
  __int64 v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  __int64 v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  Il2CppObject *Component_object; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  const MethodInfo *v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_o *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *ComponentInChildren_object__48431348; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  ServantStatusBattleListViewItem_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v63; // x24
  System_Delegate_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_Delegate_o *v67; // x8
  SpringPanel_OnFinished_c *v68; // x1
  RandomLimitCountManager_c *v69; // x0

  if ( (byte_49F8110 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, mainInfo);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&SpringPanel_OnFinished_TypeInfo, v9);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v10);
    sub_1B640C8(&ServantStatusCharaGraphListViewItem_TypeInfo, v11);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v12);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49F8110 = 1;
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
    v19 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_54;
      v21 = *(_QWORD *)&cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, v21, 0LL);
      if ( (int)v21 >= 1 )
      {
        v26 = 0LL;
        v27 = 0;
        v28 = 0;
        v29 = (unsigned int)v21;
        while ( 1 )
        {
          if ( v26 >= cardSelectList->max_length )
            sub_1B6432C(v23, v24);
          v30 = cardSelectList->m_Items[v26 + 1];
          if ( (v30 & 0x80000000) == 0 )
          {
            v31 = sub_1B64314(ServantStatusCharaGraphListViewItem_TypeInfo, v24, v25);
            ListViewItem___ctor_40370988((ListViewItem_o *)v31, v28, 0LL);
            *(_QWORD *)(v31 + 112) = mainInfo;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 112), (int32_t)mainInfo, v32, v33);
            *(_DWORD *)(v31 + 120) = v30;
            if ( v30 == cardLimitCount )
              v27 = *(_DWORD *)(v31 + 20);
            if ( v30 == ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL) )
              this->fields.manualSelectedIndex = *(_DWORD *)(v31 + 20);
            debugScaleLabel = (__int64)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_54;
            v36 = *(_QWORD *)(debugScaleLabel + 16);
            v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(debugScaleLabel + 28);
            if ( !v36 )
              goto LABEL_54;
            v38 = *(int *)(debugScaleLabel + 24);
            ++v28;
            if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)debugScaleLabel,
                (Il2CppObject *)v31,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = v36 + 8 * v38;
              *(_DWORD *)(debugScaleLabel + 24) = v38 + 1;
              *(_QWORD *)(v39 + 32) = v31;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 32), v31, v34, v35);
            }
          }
          if ( v29 == ++v26 )
            goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v19 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v40 = sub_1B64314(v19, v16, v17);
  ListViewItem___ctor_40370988((ListViewItem_o *)v40, 0, 0LL);
  *(_QWORD *)(v40 + 112) = mainInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 112), (int32_t)mainInfo, v41, v42);
  *(_DWORD *)(v40 + 120) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (__int64)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_54;
  v45 = *(_QWORD *)(debugScaleLabel + 16);
  v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(debugScaleLabel + 28);
  if ( !v45 )
    goto LABEL_54;
  v47 = *(int *)(debugScaleLabel + 24);
  if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)debugScaleLabel,
      (Il2CppObject *)v40,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = v45 + 8 * v47;
    *(_DWORD *)(debugScaleLabel + 24) = v47 + 1;
    *(_QWORD *)(v48 + 32) = v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 32), v40, v43, v44);
  }
LABEL_31:
  v27 = 0;
LABEL_32:
  debugScaleLabel = ((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._6_GetDragRoot.method)(
                      this,
                      this->klass->vtable._7_ItemDragStart.methodPtr);
  if ( !debugScaleLabel )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)debugScaleLabel,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.backMask, (int32_t)Component_object, v50, v51);
  ListViewManager__SortItem((ListViewManager_o *)this, v27, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v52);
  v55 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterScroll, (int32_t)v55, v56, v57);
  debugScaleLabel = (__int64)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_54;
  ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                           (UnityEngine_Component_o *)debugScaleLabel,
                                           (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  debugScaleLabel = UnityEngine_Object__op_Inequality(
                      (UnityEngine_Object_o *)ComponentInChildren_object__48431348,
                      0LL,
                      0LL);
  if ( (debugScaleLabel & 1) != 0 )
  {
    if ( ComponentInChildren_object__48431348 )
    {
      monitor = (System_Delegate_o *)ComponentInChildren_object__48431348[2].monitor;
      p_monitor = (ServantStatusBattleListViewItem_o *)&ComponentInChildren_object__48431348[2].monitor;
      v63 = (SpringPanel_OnFinished_o *)sub_1B64314(SpringPanel_OnFinished_TypeInfo, v59, v60);
      SpringPanel_OnFinished___ctor(
        v63,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
        0LL);
      v64 = System_Delegate__Combine(monitor, (System_Delegate_o *)v63, 0LL);
      v67 = v64;
      if ( v64 )
      {
        v68 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v64->klass == SpringPanel_OnFinished_TypeInfo )
        {
          p_monitor->klass = (ServantStatusBattleListViewItem_c *)v64;
          if ( (SpringPanel_OnFinished_c *)v64->klass == v68 )
            goto LABEL_43;
        }
        sub_1B645E4(v64);
      }
      p_monitor->klass = (ServantStatusBattleListViewItem_c *)v67;
LABEL_43:
      sub_1B6406C(p_monitor, (int32_t)v67, v65, v66);
      goto LABEL_44;
    }
LABEL_54:
    sub_1B64324(debugScaleLabel);
  }
LABEL_44:
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v59);
    byte_49F81D6 = 1;
  }
  v69 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v69 = RandomLimitCountManager_TypeInfo;
  }
  if ( v69->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
    this->fields.manualSelectedIndex = v27;
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_49F8111 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F8111 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_1B64324(0LL);
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
    sub_1B64324(dragBackSprite);
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
    sub_1B64324(dragBackSprite);
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
    sub_1B64324(dragBackSprite);
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

  if ( (byte_49F8114 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_49F8114 = 1;
  }
  result = (ServantStatusCharaGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusCharaGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_49F8113 & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, mainInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1B640C8(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         v5);
    byte_49F8113 = 1;
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
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_49F81D6 = 1;
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
    sub_1B64324(this);
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
  if ( (byte_49F8112 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1B640C8(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         method);
    byte_49F8112 = 1;
  }
  indicator = v3->fields.indicator;
  if ( !indicator
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_1B64324(this);
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
  if ( (byte_49F811D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, cam);
    byte_49F811D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v8 )
  {
    if ( !byte_49F700A )
    {
      sub_1B640C8(&UnityEngine_Vector2_TypeInfo, v9);
      byte_49F700A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.x;
    v12 = static_fields->zeroVector.fields.y;
  }
  else
  {
    if ( !cam )
      sub_1B64324(v8);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToScreenPoint_68934028(cam, v14, 0LL);
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
  if ( (byte_49F811C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, cam);
    byte_49F811C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v7 )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v10 = static_fields->zeroVector.fields.x;
    v11 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !cam )
      sub_1B64324(v7);
    v13.fields.z = 0.0;
    v13.fields.x = x;
    v13.fields.y = y;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__ScreenToWorldPoint_68934052(cam, v13, 0LL);
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
  const MethodInfo *v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  EventDelegate_Callback_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  EventDelegate_Callback_o *v24; // x22
  ServantStatusCharaGraphListViewObject_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x21
  const MethodInfo *v29; // x3

  v2 = this;
  if ( (byte_49F8123 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v6);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1B640C8(
                                                         &Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                                                         v8);
    byte_49F8123 = 1;
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
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, v15);
  v16 = Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B640E0(Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0LL);
  backMask = v2->fields.backMask;
  v21 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v19, v20);
  EventDelegate_Callback___ctor(
    v21,
    (Il2CppObject *)v2,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v24 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v22, v23);
  EventDelegate_Callback___ctor(
    v24,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v21, v24, 0LL),
        (this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask) == 0LL)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0LL),
        v25 = v2->fields.actionObject,
        v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27),
        System_Action___ctor(v28, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0LL),
        !v25) )
  {
LABEL_24:
    sub_1B64324(this);
  }
  ServantStatusCharaGraphListViewObject__Init_31490520(v25, 6, v28, 0.1, v29);
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
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusCharaGraphListViewItem_o *CenterItem; // x20
  __int64 methodPtr_low; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  ServantLimitImageMaster_o *v19; // x21
  const MethodInfo *v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x2
  struct ServantStatusCharaGraphViewer_o *v24; // x8
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x22
  Il2CppObject *Component_object; // x21
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  EventDelegate_Callback_o *v34; // x22
  ServantStatusCharaGraphListViewObject_o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  const MethodInfo *v41; // x1
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  UIDragDropListViewBackMask_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  EventDelegate_Callback_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  EventDelegate_Callback_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  ServantStatusCharaGraphViewer_o *v53; // x0
  const MethodInfo *v54; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F8121 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&ServantStatusCharaGraphListViewItem_TypeInfo, v9);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v10);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v11);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, v12);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F8121 = 1;
  }
  entity = 0LL;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_45;
  CenterItem = ServantStatusCharaGraphViewer__GetCenterItem(charaGraphViewer, method);
  if ( CenterItem
    || (CenterItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.centerItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(CenterItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ServantStatusCharaGraphListViewItem_c *)CenterItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    entity = 0LL;
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)charaGraphViewer;
        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)CenterItem->fields.mainInfo;
        if ( charaGraphViewer )
        {
          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                  (ServantStatusListViewItem_o *)charaGraphViewer,
                                                                  0LL);
          if ( v18 )
          {
            DataMasterBase_object__object__int___TryGetEntity(
              v18,
              &entity,
              (int32_t)charaGraphViewer,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( charaGraphViewer )
            {
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)charaGraphViewer,
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
              if ( CenterItem->fields.mainInfo )
              {
                v19 = (ServantLimitImageMaster_o *)charaGraphViewer;
                charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                        CenterItem->fields.mainInfo,
                                                                        0LL);
                if ( v19 )
                {
                  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
                          v19,
                          (int32_t)charaGraphViewer,
                          CenterItem->fields.imageLimitCount,
                          0LL)
                    && entity
                    && ServantEntity__IsAdditionExpandImage(
                         (ServantEntity_o *)entity,
                         CenterItem->fields.imageLimitCount,
                         0LL) )
                  {
                    v21 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                    if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                      v21 = (_QWORD *)sub_1B640E0(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                    v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
                    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
                    v24 = this->fields.charaGraphViewer;
                    if ( v24 )
                    {
                      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)v24->fields.viewerListViewManager;
                      if ( charaGraphViewer )
                      {
                        ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
                          (ServantStatusCharaGraphViewerListViewManager_o *)charaGraphViewer,
                          1,
                          v23);
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
                              goto LABEL_45;
                            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)dragObject,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
                              goto LABEL_45;
                            ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
                              (ServantStatusCharaGraphListViewObject_o *)Component_object,
                              CenterItem,
                              v29);
                          }
                          backMask = this->fields.backMask;
                          v31 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v28, v29);
                          EventDelegate_Callback___ctor(
                            v31,
                            (Il2CppObject *)this,
                            (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                            0LL);
                          v34 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v32, v33);
                          EventDelegate_Callback___ctor(
                            v34,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                            0LL);
                          if ( backMask )
                          {
                            UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v31, v34, 0LL);
                            v35 = this->fields.actionObject;
                            v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
                            System_Action___ctor(
                              v38,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                              0LL);
                            if ( v35 )
                            {
                              v40 = 10;
LABEL_44:
                              ServantStatusCharaGraphListViewObject__Init_31490520(v35, v40, v38, 0.1, v39);
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
                      ServantStatusCharaGraphViewer__SetDispType(charaGraphViewer, 1, v20);
                      charaGraphViewer = this->fields.charaGraphViewer;
                      if ( charaGraphViewer )
                      {
                        ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(charaGraphViewer, v41);
                        v42 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                          v42 = (_QWORD *)sub_1B640E0(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                        v43 = (System_Reflection_MethodBase_o *)sub_1B640AC(v42, v42[4]);
                        OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0LL);
                        v44 = this->fields.backMask;
                        v47 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v45, v46);
                        EventDelegate_Callback___ctor(
                          v47,
                          (Il2CppObject *)this,
                          (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v50 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v48, v49);
                        EventDelegate_Callback___ctor(
                          v50,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0LL);
                        if ( v44 )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(v44, v47, v50, 0LL);
                          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)this->fields.backMask;
                          if ( charaGraphViewer )
                          {
                            UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
                            v35 = this->fields.actionObject;
                            v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
                            System_Action___ctor(
                              v38,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                              0LL);
                            if ( v35 )
                            {
                              v40 = 6;
                              goto LABEL_44;
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
    }
LABEL_45:
    sub_1B64324(charaGraphViewer);
  }
  v53 = (ServantStatusCharaGraphViewer_o *)sub_1B645E4(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v53, v54);
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
  ServantStatusCharaGraphListViewManager___c_c *v13; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__object__o *_9__47_0; // x22
  Il2CppObject *v16; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  const MethodInfo *v22; // x3
  ServantStatusCharaGraphListViewItem_array *v23; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v25; // x2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppClass *v30; // x8
  __int64 methodPtr_low; // x9
  struct ServantStatusCharaGraphListViewObject_o *v32; // x10
  int32_t v33; // w1
  struct ServantStatusCharaGraphListViewObject_o **p_actionObject; // x0
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x3

  if ( (byte_49F811A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___, v6);
    sub_1B640C8(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo, v7);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnClickListView__, v8);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, v9);
    sub_1B640C8(&ServantStatusCharaGraphListViewObject_TypeInfo, v10);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__, v11);
    sub_1B640C8(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v12);
    byte_49F811A = 1;
  }
  v13 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v13 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  _9__47_0 = (System_Func_object__object__o *)v13->static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__47_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo,
                                                  obj,
                                                  method);
    System_Func_object__object____ctor(
      _9__47_0,
      v16,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      0LL);
    static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__47_0, (int32_t)_9__47_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_object_(
                                                                    v20,
                                                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_33;
  v23 = charaGraphViewer;
  if ( (int)charaGraphViewer->max_length >= 2 )
  {
    if ( !obj )
      goto LABEL_33;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_33;
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_33;
    ServantStatusCharaGraphViewer__Setup(
      (ServantStatusCharaGraphViewer_o *)charaGraphViewer,
      linkItem->fields.index,
      v23,
      v22);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_33;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v25);
  }
  v26 = Method_ServantStatusCharaGraphListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B640E0(Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_33;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
  if ( obj )
  {
    v30 = (Il2CppClass *)ServantStatusCharaGraphListViewObject_TypeInfo;
    methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v32 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
          ? (struct ServantStatusCharaGraphListViewObject_o *)obj
          : 0LL;
    else
      v32 = 0LL;
    this->fields.actionObject = v32;
    p_actionObject = &this->fields.actionObject;
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v33 = obj->klass->_2.typeHierarchy[methodPtr_low - 1] == v30 ? (int)obj : 0;
    else
      v33 = 0;
  }
  else
  {
    v33 = 0;
    p_actionObject = &this->fields.actionObject;
    this->fields.actionObject = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_actionObject, v33, v28, v29);
  actionObject = this->fields.actionObject;
  v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_33:
    sub_1B64324(charaGraphViewer);
  ServantStatusCharaGraphListViewObject__Init_31490520(actionObject, 4, v38, 0.1, v39);
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
  __int64 v10; // x1
  __int64 v11; // x2
  EventDelegate_Callback_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  EventDelegate_Callback_o *v15; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8

  if ( (byte_49F811F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, v6);
    byte_49F811F = 1;
  }
  v7 = Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  backMask = this->fields.backMask;
  v12 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v10, v11);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v15 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v13, v14);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v12, v15, 0LL),
        actionObject = this->fields.actionObject,
        v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
          0LL),
        !actionObject)
    || (ServantStatusCharaGraphListViewObject__Init_31490520(actionObject, 5, v20, 0.1, v21),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
    sub_1B64324(viewerListViewManager);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v22);
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
  const MethodInfo *v17; // x1
  int32_t touchCount; // w25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v20; // s13
  float v21; // s15
  const MethodInfo *v22; // x2
  _BOOL4 IsAbleToPinch; // w24
  __int64 v24; // x1
  ServantStatusCharaGraphListViewManager_o *v25; // x0
  const MethodInfo *v26; // x2
  int v27; // s0
  ServantStatusCharaGraphListViewManager_o *v30; // x0
  const MethodInfo *v31; // x2
  float v32; // s0
  float v33; // s1
  float v34; // s2
  float v35; // s8
  float v36; // s9
  float v37; // s10
  int32_t v38; // w9
  _BOOL4 v39; // w8
  _BOOL4 v40; // w25
  int32_t v41; // w0
  float Axis; // s0
  UnityEngine_Vector2_o v43; // kr00_8
  UnityEngine_Vector2_o v44; // kr08_8
  float v45; // s12
  ServantStatusCharaGraphListViewManager_o *v46; // x0
  const MethodInfo *v47; // x2
  float v48; // s0
  float v49; // s1
  float v50; // s2
  ServantStatusCharaGraphListViewManager_o *v51; // x0
  const MethodInfo *v52; // x2
  float v53; // s0
  float v54; // s1
  float v55; // s9
  float v56; // s2
  float v57; // s10
  float v58; // s14
  float v59; // s11
  float v60; // s0
  int32_t oldTouchCount; // w8
  char v62; // w24
  _BOOL8 MouseButton; // x0
  float v64; // s14
  float v65; // s0
  float v66; // s1
  float v67; // s2
  ServantStatusCharaGraphListViewManager_o *v68; // x0
  float v69; // s9
  float v70; // s10
  float v71; // s11
  float v72; // s0
  float v73; // s3
  float v74; // s0
  float v75; // s12
  float v76; // s2
  float baseScale; // s8
  float v78; // s0
  _BOOL4 v79; // w8
  _BOOL4 v80; // w9
  int emptyMessageLabel; // w8
  int32_t v82; // w1
  float v83; // s8
  float v84; // s9
  float v85; // s10
  float v86; // s0
  float v87; // s10
  ServantStatusCharaGraphListViewManager_o *v88; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x2
  float v91; // s8
  float v92; // s9
  ServantStatusCharaGraphListViewManager_o *v93; // x0
  const MethodInfo *v94; // x2
  float v95; // s8
  ServantStatusCharaGraphListViewManager_o *v96; // x0
  const MethodInfo *v97; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  float v99; // s9
  ServantStatusCharaGraphListViewManager_o *v100; // x0
  const MethodInfo *v101; // x2
  UnityEngine_Vector2_o v102; // kr20_8
  float v103; // s13
  float v104; // s11
  ServantStatusCharaGraphListViewManager_o *v105; // x0
  const MethodInfo *v106; // x2
  UnityEngine_Vector2_o v107; // kr28_8
  int v108; // w8
  int v109; // w9
  float v110; // s3
  float v111; // s10
  float v112; // s0
  float v113; // s9
  float v114; // s0
  bool v115; // nf
  int v116; // w9
  float v117; // s0
  float v118; // s1
  float v119; // s1
  float v120; // s0
  float v121; // s0
  float v122; // s11
  int v123; // s0
  UnityEngine_Vector2_o v126; // kr30_8
  UnityEngine_Vector2_o v127; // kr38_8
  float baseTouchSqrMagnitude; // s8
  float v129; // s0
  float v130; // [xsp+8h] [xbp-1B8h]
  float v131; // [xsp+Ch] [xbp-1B4h]
  float v132; // [xsp+14h] [xbp-1ACh]
  float v133; // [xsp+18h] [xbp-1A8h]
  float v134; // [xsp+18h] [xbp-1A8h]
  float v135; // [xsp+1Ch] [xbp-1A4h]
  float v136; // [xsp+1Ch] [xbp-1A4h]
  float v137; // [xsp+1Ch] [xbp-1A4h]
  UnityEngine_Vector3_o v138; // [xsp+20h] [xbp-1A0h]
  float v139; // [xsp+20h] [xbp-1A0h]
  float value; // [xsp+24h] [xbp-19Ch]
  float position; // [xsp+28h] [xbp-198h]
  float positiona; // [xsp+28h] [xbp-198h]
  float v143; // [xsp+2Ch] [xbp-194h]
  float v144; // [xsp+2Ch] [xbp-194h]
  float v145; // [xsp+2Ch] [xbp-194h]
  float z; // [xsp+30h] [xbp-190h]
  float v147; // [xsp+30h] [xbp-190h]
  float v148; // [xsp+34h] [xbp-18Ch]
  float v149; // [xsp+38h] [xbp-188h]
  UnityEngine_Vector3_o v150[7]; // [xsp+3Ch] [xbp-184h] BYREF
  UnityEngine_Touch_o v151; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Touch_o dest; // [xsp+E0h] [xbp-E0h] BYREF
  float v153; // [xsp+178h] [xbp-48h]
  float v154; // [xsp+17Ch] [xbp-44h]
  UnityEngine_Vector2_o v155; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v156; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v157; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49F811E & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1B640C8(&StringLiteral_9097/*"Mouse ScrollWheel"*/, v4);
    byte_49F811E = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v151, 0, sizeof(v151));
  memset(&v150[0].fields.y, 0, 68);
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
      v150[0].fields.x = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0LL);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
        byte_49F7111 = 1;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
      v148 = m_Width;
      v149 = m_XMin;
      if ( !this )
        goto LABEL_136;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v20 = static_fields->zeroVector.fields.x;
      v21 = static_fields->zeroVector.fields.y;
      v154 = static_fields->zeroVector.fields.z;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)this, v17);
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
              v155 = UnityEngine_Touch__get_position(&dest, 0LL);
              *(UnityEngine_Vector3_o *)&v27 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v25,
                                                 v155,
                                                 v2->fields.camera,
                                                 v26);
              if ( !parent )
                goto LABEL_136;
              *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v27,
                                                 0LL);
              if ( v2->fields.oldTouchCount == 1 )
              {
                v35 = v32;
                v36 = v33;
                v37 = v34;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v30,
                                  v2->fields.oldTouchPosition,
                                  v2->fields.camera,
                                  v31);
                v161 = UnityEngine_Transform__InverseTransformPoint(
                         (UnityEngine_Transform_o *)parent,
                         WorldPosition,
                         0LL);
                v20 = v35 - v161.fields.x;
                v21 = v36 - v161.fields.y;
                v154 = v37 - v161.fields.z;
              }
              else
              {
                v2->fields.oldTouchCount = 1;
              }
              v2->fields.oldTouchPosition = UnityEngine_Touch__get_position(&dest, 0LL);
              v40 = 0;
              v62 = 0;
              v2->fields.isTouchScale = 0;
              v153 = 0.0;
              goto LABEL_58;
            }
LABEL_137:
            sub_1B6432C(this, v24);
          }
          oldTouchCount = v2->fields.oldTouchCount;
          v62 = 0;
          v2->fields.oldTouchCount = 0;
          v2->fields.isTouchScale = 0;
          v153 = 0.0;
          v40 = oldTouchCount > 0;
LABEL_58:
          v75 = 0.0;
          goto LABEL_64;
        }
        v153 = 0.0;
        if ( !IsAbleToPinch )
        {
          v40 = 0;
          v62 = 0;
          goto LABEL_58;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_137;
        memmove(&v151, &this->fields.dropObjectList, 0x44u);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_137;
        memmove(&v150[0].fields.y, (char *)&this->fields.seed + 4, 0x44u);
        v43 = UnityEngine_Touch__get_position(&v151, 0LL);
        v44 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v150[0].fields.y, 0LL);
        v45 = (float)(v43.fields.y + v44.fields.y) * 0.5;
        v156.fields.x = (float)(v43.fields.x + v44.fields.x) * 0.5;
        v156.fields.y = v45;
        *(UnityEngine_Vector3_o *)&v48 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v46,
                                           v156,
                                           v2->fields.camera,
                                           v47);
        if ( !parent )
          goto LABEL_136;
        v138.fields.z = v50;
        v143 = m_Height;
        v138.fields.x = v48;
        v138.fields.y = v49;
        *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Transform__InverseTransformPoint(
                                           (UnityEngine_Transform_o *)parent,
                                           *(UnityEngine_Vector3_o *)&v48,
                                           0LL);
        v55 = v54;
        v57 = v56;
        v133 = v53;
        if ( v2->fields.oldTouchCount == 2 )
        {
          v58 = m_YMin;
          v59 = v53;
          v162 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v51,
                   v2->fields.oldTouchPosition,
                   v2->fields.camera,
                   v52);
          v163 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v162, 0LL);
          v20 = v59 - v163.fields.x;
          v21 = v55 - v163.fields.y;
          v60 = v57 - v163.fields.z;
        }
        else
        {
          v60 = v154;
          v58 = m_YMin;
          v2->fields.oldTouchCount = 2;
          v2->fields.isTouchScale = 0;
        }
        v137 = v60;
        v2->fields.oldTouchPosition.fields.x = (float)(v43.fields.x + v44.fields.x) * 0.5;
        v2->fields.oldTouchPosition.fields.y = v45;
        v126 = UnityEngine_Touch__get_position(&v151, 0LL);
        v127 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v150[0].fields.y, 0LL);
        v75 = (float)((float)(v126.fields.x - v127.fields.x) * (float)(v126.fields.x - v127.fields.x))
            + (float)((float)(v126.fields.y - v127.fields.y) * (float)(v126.fields.y - v127.fields.y));
        if ( !v2->fields.isTouchScale )
        {
          m_YMin = v58;
          v40 = 0;
          v62 = 0;
          if ( v75 > 0.0 )
          {
            v2->fields.isTouchScale = 1;
            v2->fields.baseTouchSqrMagnitude = v75;
            v2->fields.baseTouchScale = v150[0].fields.x;
          }
          v129 = v137;
          m_Height = v143;
          goto LABEL_133;
        }
        baseTouchSqrMagnitude = v2->fields.baseTouchSqrMagnitude;
        m_YMin = v58;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        m_Height = v143;
        v40 = 0;
        v76 = (float)(sqrtf(v75 / baseTouchSqrMagnitude) * v2->fields.baseTouchScale) - v150[0].fields.x;
        v74 = v57;
        v70 = v55;
        v69 = v133;
        v73 = v137;
      }
      else
      {
        v38 = v2->fields.oldTouchCount;
        v39 = 0;
        v2->fields.isTouchScale = 0;
        v2->fields.oldTouchCount = 0;
        v40 = v38 > 0;
        if ( x >= 0.0 )
        {
          v41 = UnityEngine_Screen__get_width(0LL);
          v39 = 0;
          if ( y >= 0.0 && x <= (float)v41 )
            v39 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        if ( IsAbleToPinch && v39 )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9097/*"Mouse ScrollWheel"*/, 0LL);
        else
          Axis = 0.0;
        v153 = Axis;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v157.fields.x = x;
          v157.fields.y = y;
          v144 = m_Height;
          v64 = m_YMin;
          *(UnityEngine_Vector3_o *)&v65 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v157,
                                             v2->fields.camera,
                                             v22);
          if ( !parent )
            goto LABEL_136;
          v138.fields.x = v65;
          v138.fields.y = v66;
          v138.fields.z = v67;
          v164 = UnityEngine_Transform__InverseTransformPoint(
                   (UnityEngine_Transform_o *)parent,
                   *(UnityEngine_Vector3_o *)&v65,
                   0LL);
          v69 = v164.fields.x;
          v70 = v164.fields.y;
          v71 = v164.fields.z;
          if ( v2->fields.isOldMousePosition )
          {
            v165 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v68,
                     v2->fields.oldMousePosition,
                     v2->fields.camera,
                     v22);
            v166 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v165, 0LL);
            v20 = v69 - v166.fields.x;
            v21 = v70 - v166.fields.y;
            v72 = v71 - v166.fields.z;
          }
          else
          {
            v72 = v154;
            v2->fields.isOldMousePosition = 1;
          }
          v73 = v72;
          v74 = v71;
          m_YMin = v64;
          m_Height = v144;
          v2->fields.oldMousePosition.fields.x = x;
          v2->fields.oldMousePosition.fields.y = y;
          v75 = 0.0;
        }
        else
        {
          v74 = v154;
          v75 = 0.0;
          v70 = v21;
          v69 = v20;
          v73 = v154;
          v2->fields.isOldMousePosition = 0;
          v138.fields.y = v21;
          v138.fields.z = v73;
          v138.fields.x = v20;
        }
        v76 = v153;
      }
      v153 = v76;
      if ( v76 == 0.0 )
      {
        v62 = 0;
LABEL_63:
        v154 = v73;
        goto LABEL_64;
      }
      v154 = v74;
      baseScale = v2->fields.baseScale;
      v78 = v150[0].fields.x + v76;
      if ( v76 >= 0.0 || v78 >= baseScale )
      {
        v79 = v78 > (float)(baseScale * 3.0);
        v80 = v76 > 0.0;
        v62 = v80 && v79;
        if ( v80 && v79 )
          baseScale = baseScale * 3.0;
        else
          baseScale = v150[0].fields.x + v76;
      }
      else
      {
        v62 = 1;
      }
      if ( v150[0].fields.x == baseScale )
        goto LABEL_63;
      v136 = v73;
      if ( v2->fields.oldTouchCount > 0 || v2->fields.isOldMousePosition )
      {
        v145 = m_YMin;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v178 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v138, 0LL);
        v150[0].fields.x = v178.fields.x;
        positiona = v178.fields.y;
        v122 = v178.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v179.fields.z = z;
        v179.fields.x = baseScale;
        v179.fields.y = baseScale;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v179, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v180.fields.x = v150[0].fields.x;
        v180.fields.y = positiona;
        v180.fields.z = v122;
        *(UnityEngine_Vector3_o *)&v123 = UnityEngine_Transform__TransformPoint(
                                            (UnityEngine_Transform_o *)this,
                                            v180,
                                            0LL);
        if ( !parent )
          goto LABEL_136;
        v181 = UnityEngine_Transform__InverseTransformPoint(
                 (UnityEngine_Transform_o *)parent,
                 *(UnityEngine_Vector3_o *)&v123,
                 0LL);
        v20 = v20 + (float)(v69 - v181.fields.x);
        m_YMin = v145;
        v21 = v21 + (float)(v70 - v181.fields.y);
        v154 = v136 + (float)(v154 - v181.fields.z);
        v150[0].fields.x = baseScale;
LABEL_64:
        this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
        if ( !this )
          goto LABEL_136;
        if ( BYTE4(this->fields.emptyMessageLabel) )
        {
          emptyMessageLabel = (int)this->fields.emptyMessageLabel;
          if ( v150[0].fields.x == v2->fields.baseScale )
          {
            if ( emptyMessageLabel == 1 )
            {
              v82 = 2;
LABEL_71:
              ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, v82, v22);
            }
          }
          else if ( emptyMessageLabel == 2 )
          {
            v82 = 1;
            goto LABEL_71;
          }
        }
        if ( (v62 & 1) != 0 && v75 > 0.0 && v2->fields.isTouchScale )
        {
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( !this )
            goto LABEL_136;
          LODWORD(v2->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(
                                                               (UnityEngine_Transform_o *)this,
                                                               0LL);
          v2->fields.baseTouchSqrMagnitude = v75;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v83 = localPosition.fields.x;
        v84 = localPosition.fields.y;
        v85 = localPosition.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v86 = v154;
        v168.fields.y = v21 + v84;
        v154 = v20;
        v168.fields.z = v86 + v85;
        v168.fields.x = v20 + v83;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v168, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v87 = (float)width;
        v169 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v91 = v169.fields.x;
        v92 = v169.fields.z;
        v147 = v169.fields.y;
        if ( !byte_49F700A )
        {
          v88 = (ServantStatusCharaGraphListViewManager_o *)sub_1B640C8(&UnityEngine_Vector2_TypeInfo, v89);
          byte_49F700A = 1;
        }
        v170 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v88,
                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                 v2->fields.camera,
                 v90);
        v135 = v170.fields.x;
        v139 = v170.fields.y;
        v170.fields.x = (float)width;
        v170.fields.y = (float)height;
        v171 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v93,
                 *(UnityEngine_Vector2_o *)&v170.fields.x,
                 v2->fields.camera,
                 v94);
        v132 = v171.fields.x;
        v134 = v171.fields.y;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        value = v92;
        position = v91;
        v172 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v95 = v172.fields.x;
        v131 = v172.fields.y;
        SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v96, v172, v2->fields.camera, v97);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v173.fields.y = m_YMin + m_Height;
        v173.fields.z = 0.0;
        v173.fields.x = v149;
        v174 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v173, 0LL);
        v99 = v174.fields.x;
        v130 = v174.fields.y;
        v102 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v100, v174, v2->fields.camera, v101);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
LABEL_136:
          sub_1B64324(this);
        v175.fields.z = 0.0;
        v175.fields.y = m_YMin;
        v175.fields.x = v149 + v148;
        v176 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v175, 0LL);
        v103 = v176.fields.x;
        v104 = v176.fields.y;
        v107 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v105, v176, v2->fields.camera, v106);
        v108 = v153 < 0.0 || v40;
        v109 = v108 | (v154 > 0.0);
        if ( (float)(v107.fields.x - v102.fields.x) <= v87 )
        {
          v114 = v87 * 0.5;
          if ( (v109 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v87 * 0.5)) )
          {
            v113 = position;
            v111 = v147;
            if ( ((v154 >= 0.0) & ~v108) == 0 )
            {
              v110 = (float)height;
              if ( SreenPosition.fields.x >= v114 )
                goto LABEL_99;
              v112 = (float)((float)(v135 + v132) * 0.5) - v95;
              goto LABEL_97;
            }
          }
          else
          {
            v111 = v147;
            v113 = position + (float)((float)((float)(v135 + v132) * 0.5) - v95);
          }
          v110 = (float)height;
        }
        else
        {
          v110 = (float)height;
          if ( !((v109 ^ 1) & 1 | (v102.fields.x <= 0.0)) )
          {
            v111 = v147;
            v112 = v135 - v99;
            v113 = position;
LABEL_97:
            v113 = v113 + v112;
            goto LABEL_99;
          }
          if ( ((v154 >= 0.0) & ~v108) != 0 )
          {
            v113 = position;
            v111 = v147;
          }
          else
          {
            v115 = v107.fields.x < v87;
            v113 = position;
            v111 = v147;
            if ( v115 )
            {
              v112 = v132 - v103;
              goto LABEL_97;
            }
          }
        }
LABEL_99:
        v116 = v108 | (v21 > 0.0);
        if ( (float)(v107.fields.y - v102.fields.y) > v110 )
        {
          if ( !((v116 ^ 1) & 1 | (v102.fields.y <= 0.0)) )
          {
            v117 = v139;
            v118 = v130;
LABEL_111:
            v121 = v117 - v118;
            goto LABEL_112;
          }
          if ( ((v21 >= 0.0) & ~v108) == 0 && v107.fields.y < v110 )
          {
            v121 = v134 - v104;
LABEL_112:
            v111 = v111 + v121;
          }
LABEL_113:
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( this )
          {
            v177.fields.z = value;
            v177.fields.x = v113;
            v177.fields.y = v111;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v177, 0LL);
            return;
          }
          goto LABEL_136;
        }
        v119 = 0.5;
        if ( (v116 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v110 * 0.5)) )
        {
          if ( ((v21 >= 0.0) & ~v108) != 0 || SreenPosition.fields.y >= (float)(v110 * 0.5) )
            goto LABEL_113;
          v120 = v139 + v134;
          v119 = 0.5;
        }
        else
        {
          v120 = v139 + v134;
        }
        v117 = v120 * v119;
        v118 = v131;
        goto LABEL_111;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0LL);
      if ( !this )
        goto LABEL_136;
      v182.fields.z = z;
      v182.fields.x = baseScale;
      v182.fields.y = baseScale;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v182, 0LL);
      v129 = v136;
      v150[0].fields.x = baseScale;
LABEL_133:
      v154 = v129;
      goto LABEL_64;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndAnother(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  EventDelegate_Callback_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_49F8122 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v4);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    byte_49F8122 = 1;
  }
  backMask = this->fields.backMask;
  v7 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, method, v2);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v10 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v8, v9);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1B64324(v11);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v7, v10, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  EventDelegate_Callback_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_49F8120 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v4);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    byte_49F8120 = 1;
  }
  backMask = this->fields.backMask;
  v7 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, method, v2);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v10 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v8, v9);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1B64324(v11);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v7, v10, 0LL);
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
  int32_t v9; // w3
  UnityEngine_GameObject_o *dragObject; // x0
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  EventDelegate_Callback_o *v25; // x22

  if ( (byte_49F811B & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo, v3);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__, v6);
    byte_49F811B = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.camera, (int32_t)main, v8, v9);
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
    v18 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_1B64314(
                                                                                    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo,
                                                                                    v16,
                                                                                    v17);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      v19);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v18, v20);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v22 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v12, v13);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v25 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v23, v24);
  EventDelegate_Callback___ctor(
    v25,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_1B64324(dragObject);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v22, v25, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2

  backMask = this->fields.backMask;
  if ( !backMask )
    sub_1B64324(0LL);
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_31489492(this, 3, v4);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_49F8126 & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_49F8126 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_49F81D6 = 1;
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
      sub_1B64324(v5);
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

  if ( (byte_49F8125 & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_49F8125 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_49F81D6 = 1;
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
      sub_1B64324(v5);
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
  struct ServantStatusCharaGraphListViewObject_o *v8; // x8
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F8119 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F8119 = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(actionObject, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v8 = this->fields.actionObject;
      if ( !v8 )
        goto LABEL_15;
      dragObject = (UnityEngine_Object_o *)v8->fields.dragObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) == 0
        || !dragObject
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)dragObject,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_15:
        sub_1B64324(Component_object);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_object,
        item,
        v10);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F8118 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8118 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8116 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F8116 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      ServantStatusCharaGraphListViewObject__Init_31490520(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v19,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_31489492(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8117 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F8117 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      ServantStatusCharaGraphListViewObject__Init_31490620(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v17,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetEnableScroll(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *statusItem,
        const MethodInfo *method)
{
  bool v5; // w19
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2
  __int64 methodPtr_low; // x10

  if ( (byte_49F8124 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusCharaGraphListViewIndicator_TypeInfo, statusItem);
    byte_49F8124 = 1;
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
      sub_1B64324(scrollView);
    }
    ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
      (ServantStatusCharaGraphListViewIndicator_o *)scrollView,
      v5,
      v7);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusCharaGraphListViewManager__SetMode_31489336(this, mode, v6);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_31489336(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    ServantStatusCharaGraphListViewManager__RequestListObject_31489492(this, v6, v5);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_31489440(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusCharaGraphListViewManager__SetMode_31489336(this, mode, v6);
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
  if ( (byte_49F8115 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1B640C8(&ServantStatusCharaGraphListViewObject_TypeInfo, obj);
    byte_49F8115 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusCharaGraphListViewObject__Init_31489208(
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
    sub_1B64324(0LL);
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

  if ( (byte_49F810A & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F810A = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F810C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F810C = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1B645E4(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F810F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F810F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v12;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F810E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F810E = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v12;
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

  if ( (byte_49F810B & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F810B = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F810D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F810D = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A5DD4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A5D8C;
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
  if ( (byte_49F812A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    byte_49F812A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F812B & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v1);
    byte_49F812B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantStatusCharaGraphListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49F812C & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusCharaGraphListViewItem_TypeInfo, x);
    byte_49F812C = 1;
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