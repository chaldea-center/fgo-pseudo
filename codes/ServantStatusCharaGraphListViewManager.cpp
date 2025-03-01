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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BF962A & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v3);
    byte_4BF962A = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4BF9629 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, mainInfo);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v6);
    sub_1C2E12C(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_4BF9629 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BF96D8 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4BF96D8 = 1;
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
      sub_1C2E388(itemList, mainInfo);
    v10 = 0;
    while ( v10 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v10,
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4BF962B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1C2E12C(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_4BF962B = 1;
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
        v24 = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E648(this->fields.centerItem);
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
    charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
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
                       (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C2E388(charaGraphViewer, method);
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
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v17; // x0
  struct System_Int32_array *cardSelectList; // x26
  __int64 v19; // x23
  int32_t cardLimitCount; // w27
  __int64 v21; // x0
  __int64 v22; // x1
  unsigned __int64 v23; // x28
  int32_t v24; // w25
  int32_t v25; // w22
  __int64 v26; // x29
  int32_t v27; // w21
  int64_t v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  int64_t v45; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  Il2CppObject *Component_object; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x2
  System_Action_o *v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  Il2CppObject *ComponentInChildren_object__50103608; // x22
  PartyOrganizationUtility_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v80; // x24
  System_Delegate_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x8
  SpringPanel_OnFinished_c *v89; // x1
  RandomLimitCountManager_c *v90; // x0

  if ( (byte_4BF9612 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, mainInfo);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v5);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&SpringPanel_OnFinished_TypeInfo, v9);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v10);
    sub_1C2E12C(&ServantStatusCharaGraphListViewItem_TypeInfo, v11);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v12);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__, v13);
    sub_1C2E12C(&StringLiteral_1/*""*/, v14);
    byte_4BF9612 = 1;
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
        v23 = 0LL;
        v24 = 0;
        v25 = 0;
        v26 = (unsigned int)v19;
        while ( 1 )
        {
          if ( v23 >= cardSelectList->max_length )
            sub_1C2E390(v21, v22);
          v27 = cardSelectList->m_Items[v23 + 1];
          if ( (v27 & 0x80000000) == 0 )
          {
            v28 = sub_1C2E378(ServantStatusCharaGraphListViewItem_TypeInfo);
            ListViewItem___ctor_42081352((ListViewItem_o *)v28, v25, 0LL);
            *(_QWORD *)(v28 + 112) = mainInfo;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 112), (int64_t)mainInfo, v29, v30, v31, v32, v33, v34);
            *(_DWORD *)(v28 + 120) = v27;
            if ( v27 == cardLimitCount )
              v24 = *(_DWORD *)(v28 + 20);
            if ( v27 == ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL) )
              this->fields.manualSelectedIndex = *(_DWORD *)(v28 + 20);
            debugScaleLabel = (__int64)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_54;
            v41 = *(_QWORD *)(debugScaleLabel + 16);
            v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(debugScaleLabel + 28);
            if ( !v41 )
              goto LABEL_54;
            v43 = *(int *)(debugScaleLabel + 24);
            ++v25;
            if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)debugScaleLabel,
                (Il2CppObject *)v28,
                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = v41 + 8 * v43;
              *(_DWORD *)(debugScaleLabel + 24) = v43 + 1;
              *(_QWORD *)(v44 + 32) = v28;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v44 + 32), v28, v35, v36, v37, v38, v39, v40);
            }
          }
          if ( v26 == ++v23 )
            goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v17 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v45 = sub_1C2E378(v17);
  ListViewItem___ctor_42081352((ListViewItem_o *)v45, 0, 0LL);
  *(_QWORD *)(v45 + 112) = mainInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v45 + 112), (int64_t)mainInfo, v46, v47, v48, v49, v50, v51);
  *(_DWORD *)(v45 + 120) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (__int64)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_54;
  v58 = *(_QWORD *)(debugScaleLabel + 16);
  v59 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(debugScaleLabel + 28);
  if ( !v58 )
    goto LABEL_54;
  v60 = *(int *)(debugScaleLabel + 24);
  if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)debugScaleLabel,
      (Il2CppObject *)v45,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = v58 + 8 * v60;
    *(_DWORD *)(debugScaleLabel + 24) = v60 + 1;
    *(_QWORD *)(v61 + 32) = v45;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v61 + 32), v45, v52, v53, v54, v55, v56, v57);
  }
LABEL_31:
  v24 = 0;
LABEL_32:
  debugScaleLabel = ((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._7_GetDragRoot.method)(
                      this,
                      this->klass->vtable._8_ItemDragStart.methodPtr);
  if ( !debugScaleLabel )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)debugScaleLabel,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.backMask,
    (int64_t)Component_object,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  ListViewManager__SortItem((ListViewManager_o *)this, v24, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v69);
  v70 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v70;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll,
    (int64_t)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  debugScaleLabel = (__int64)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_54;
  ComponentInChildren_object__50103608 = UnityEngine_Component__GetComponentInChildren_object__50103608(
                                           (UnityEngine_Component_o *)debugScaleLabel,
                                           (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  debugScaleLabel = UnityEngine_Object__op_Inequality(
                      (UnityEngine_Object_o *)ComponentInChildren_object__50103608,
                      0LL,
                      0LL);
  if ( (debugScaleLabel & 1) != 0 )
  {
    if ( ComponentInChildren_object__50103608 )
    {
      monitor = (System_Delegate_o *)ComponentInChildren_object__50103608[2].monitor;
      p_monitor = (PartyOrganizationUtility_o *)&ComponentInChildren_object__50103608[2].monitor;
      v80 = (SpringPanel_OnFinished_o *)sub_1C2E378(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(
        v80,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
        0LL);
      v81 = System_Delegate__Combine(monitor, (System_Delegate_o *)v80, 0LL);
      v88 = (int64_t)v81;
      if ( v81 )
      {
        v89 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v81->klass == SpringPanel_OnFinished_TypeInfo )
        {
          p_monitor->klass = (PartyOrganizationUtility_c *)v81;
          if ( (SpringPanel_OnFinished_c *)v81->klass == v89 )
            goto LABEL_43;
        }
        sub_1C2E648(v81);
      }
      p_monitor->klass = (PartyOrganizationUtility_c *)v88;
LABEL_43:
      sub_1C2E0D0(p_monitor, v88, v82, v83, v84, v85, v86, v87);
      goto LABEL_44;
    }
LABEL_54:
    sub_1C2E388(debugScaleLabel, mainInfo);
  }
LABEL_44:
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BF96D8 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4BF96D8 = 1;
  }
  v90 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v90 = RandomLimitCountManager_TypeInfo;
  }
  if ( v90->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
    this->fields.manualSelectedIndex = v24;
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_4BF9613 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BF9613 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_1C2E388(0LL, v3);
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
    sub_1C2E388(dragBackSprite, method);
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
    sub_1C2E388(dragBackSprite, method);
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
    sub_1C2E388(dragBackSprite, method);
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

  if ( (byte_4BF9616 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C2E12C(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_4BF9616 = 1;
  }
  result = (ServantStatusCharaGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusCharaGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4BF9615 & 1) == 0 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E12C(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         v5);
    byte_4BF9615 = 1;
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
  if ( !byte_4BF96D8 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4BF96D8 = 1;
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
    sub_1C2E388(this, mainInfo);
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
  if ( (byte_4BF9614 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E12C(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         method);
    byte_4BF9614 = 1;
  }
  indicator = v3->fields.indicator;
  if ( !indicator
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_1C2E388(this, method);
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
  if ( (byte_4BF961F & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, cam);
    byte_4BF961F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v8 )
  {
    if ( !byte_4BF7C8A )
    {
      sub_1C2E12C(&UnityEngine_Vector2_TypeInfo, v9);
      byte_4BF7C8A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.x;
    v12 = static_fields->zeroVector.fields.y;
  }
  else
  {
    if ( !cam )
      sub_1C2E388(v8, v9);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToScreenPoint_70795692(cam, v14, 0LL);
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
  if ( (byte_4BF961E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, cam);
    byte_4BF961E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v7 )
  {
    if ( !byte_4BF7D91 )
    {
      sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4BF7D91 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v10 = static_fields->zeroVector.fields.x;
    v11 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !cam )
      sub_1C2E388(v7, v8);
    v13.fields.z = 0.0;
    v13.fields.x = x;
    v13.fields.y = y;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__ScreenToWorldPoint_70795716(cam, v13, 0LL);
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
  if ( (byte_4BF9625 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v6);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E12C(
                                                         &Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                                                         v8);
    byte_4BF9625 = 1;
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
                         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
    v15 = (_QWORD *)sub_1C2E144(Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C2E110(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0LL);
  backMask = v2->fields.backMask;
  v18 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)v2,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v19 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
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
        v21 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(v21, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0LL),
        !v20) )
  {
LABEL_24:
    sub_1C2E388(this, method);
  }
  ServantStatusCharaGraphListViewObject__Init_33390456(v20, 6, v21, 0.1, v22);
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
  const MethodInfo *v28; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v30; // x21
  EventDelegate_Callback_o *v31; // x22
  ServantStatusCharaGraphListViewObject_o *v32; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  UIDragDropListViewBackMask_o *v38; // x20
  EventDelegate_Callback_o *v39; // x21
  EventDelegate_Callback_o *v40; // x22
  ServantStatusCharaGraphViewer_o *v41; // x0
  const MethodInfo *v42; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BF9623 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, v3);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&ServantStatusCharaGraphListViewItem_TypeInfo, v9);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v10);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v11);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, v12);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BF9623 = 1;
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
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
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
              (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( charaGraphViewer )
            {
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)charaGraphViewer,
                                                                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                      v21 = (_QWORD *)sub_1C2E144(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                    v22 = (System_Reflection_MethodBase_o *)sub_1C2E110(v21, v21[4]);
                    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
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
                                                 (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
                              v28);
                          }
                          backMask = this->fields.backMask;
                          v30 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
                          EventDelegate_Callback___ctor(
                            v30,
                            (Il2CppObject *)this,
                            (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                            0LL);
                          v31 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
                          EventDelegate_Callback___ctor(
                            v31,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                            0LL);
                          if ( backMask )
                          {
                            UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v30, v31, 0LL);
                            v32 = this->fields.actionObject;
                            v33 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                            System_Action___ctor(
                              v33,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                              0LL);
                            if ( v32 )
                            {
                              v35 = 10;
LABEL_44:
                              ServantStatusCharaGraphListViewObject__Init_33390456(v32, v35, v33, 0.1, v34);
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
                        ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(charaGraphViewer, method);
                        v36 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                          v36 = (_QWORD *)sub_1C2E144(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                        v37 = (System_Reflection_MethodBase_o *)sub_1C2E110(v36, v36[4]);
                        OverwriteAssetSoundName__PlaySystemSe(v37, 1, 0, 0LL);
                        v38 = this->fields.backMask;
                        v39 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v39,
                          (Il2CppObject *)this,
                          (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v40 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v40,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0LL);
                        if ( v38 )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(v38, v39, v40, 0LL);
                          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)this->fields.backMask;
                          if ( charaGraphViewer )
                          {
                            UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
                            v32 = this->fields.actionObject;
                            v33 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                            System_Action___ctor(
                              v33,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                              0LL);
                            if ( v32 )
                            {
                              v35 = 6;
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
    sub_1C2E388(charaGraphViewer, method);
  }
  v41 = (ServantStatusCharaGraphViewer_o *)sub_1C2E648(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v41, v42);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  ServantStatusCharaGraphListViewItem_array *v28; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v30; // x2
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppClass *v39; // x8
  __int64 methodPtr_low; // x9
  struct ServantStatusCharaGraphListViewObject_o *v41; // x10
  ListViewObject_o *v42; // x1
  struct ServantStatusCharaGraphListViewObject_o **p_actionObject; // x0
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x3

  if ( (byte_4BF961C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, obj);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___, v6);
    sub_1C2E12C(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo, v7);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnClickListView__, v8);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, v9);
    sub_1C2E12C(&ServantStatusCharaGraphListViewObject_TypeInfo, v10);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__, v11);
    sub_1C2E12C(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v12);
    byte_4BF961C = 1;
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
    _9__47_0 = (System_Func_object__object__o *)sub_1C2E378(System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__47_0,
      v16,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      0LL);
    static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__47_0,
      (int64_t)_9__47_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_object_(
                                                                    v24,
                                                                    (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_33;
  v28 = charaGraphViewer;
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
      v28,
      v27);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_33;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v30);
  }
  v31 = Method_ServantStatusCharaGraphListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v31 = (_QWORD *)sub_1C2E144(Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
  v32 = (System_Reflection_MethodBase_o *)sub_1C2E110(v31, v31[4]);
  OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0LL);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_33;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
  if ( obj )
  {
    v39 = (Il2CppClass *)ServantStatusCharaGraphListViewObject_TypeInfo;
    methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v41 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
          ? (struct ServantStatusCharaGraphListViewObject_o *)obj
          : 0LL;
    else
      v41 = 0LL;
    this->fields.actionObject = v41;
    p_actionObject = &this->fields.actionObject;
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v42 = obj->klass->_2.typeHierarchy[methodPtr_low - 1] == v39 ? obj : 0LL;
    else
      v42 = 0LL;
  }
  else
  {
    v42 = 0LL;
    p_actionObject = &this->fields.actionObject;
    this->fields.actionObject = 0LL;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_actionObject, (int64_t)v42, v33, v34, v35, v36, v37, v38);
  actionObject = this->fields.actionObject;
  v45 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_33:
    sub_1C2E388(charaGraphViewer, v26);
  ServantStatusCharaGraphListViewObject__Init_33390456(actionObject, 4, v45, 0.1, v46);
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

  if ( (byte_4BF9621 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, v3);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, v6);
    byte_4BF9621 = 1;
  }
  v7 = Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C2E144(Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C2E110(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  backMask = this->fields.backMask;
  v10 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v11 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v10, v11, 0LL),
        actionObject = this->fields.actionObject,
        v15 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
          0LL),
        !actionObject)
    || (ServantStatusCharaGraphListViewObject__Init_33390456(actionObject, 5, v15, 0.1, v16),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
    sub_1C2E388(viewerListViewManager, v13);
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
  ServantStatusCharaGraphListViewManager_o *v23; // x0
  const MethodInfo *v24; // x2
  int v25; // s0
  ServantStatusCharaGraphListViewManager_o *v28; // x0
  const MethodInfo *v29; // x2
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s8
  float v34; // s9
  float v35; // s10
  int32_t v36; // w9
  _BOOL4 v37; // w8
  _BOOL4 v38; // w25
  int32_t v39; // w0
  float Axis; // s0
  UnityEngine_Vector2_o v41; // kr00_8
  UnityEngine_Vector2_o v42; // kr08_8
  float v43; // s12
  ServantStatusCharaGraphListViewManager_o *v44; // x0
  const MethodInfo *v45; // x2
  float v46; // s0
  float v47; // s1
  float v48; // s2
  ServantStatusCharaGraphListViewManager_o *v49; // x0
  const MethodInfo *v50; // x2
  float v51; // s0
  float v52; // s1
  float v53; // s9
  float v54; // s2
  float v55; // s10
  float v56; // s14
  float v57; // s11
  float v58; // s0
  int32_t oldTouchCount; // w8
  char v60; // w24
  _BOOL8 MouseButton; // x0
  float v62; // s14
  float v63; // s0
  float v64; // s1
  float v65; // s2
  ServantStatusCharaGraphListViewManager_o *v66; // x0
  float v67; // s9
  float v68; // s10
  float v69; // s11
  float v70; // s0
  float v71; // s3
  float v72; // s0
  float v73; // s12
  float v74; // s2
  float baseScale; // s8
  float v76; // s0
  _BOOL4 v77; // w8
  _BOOL4 v78; // w9
  int emptyMessageLabel; // w8
  int32_t v80; // w1
  float v81; // s8
  float v82; // s9
  float v83; // s10
  float v84; // s0
  float v85; // s10
  ServantStatusCharaGraphListViewManager_o *v86; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  float v89; // s8
  float v90; // s9
  ServantStatusCharaGraphListViewManager_o *v91; // x0
  const MethodInfo *v92; // x2
  float v93; // s8
  ServantStatusCharaGraphListViewManager_o *v94; // x0
  const MethodInfo *v95; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  float v97; // s9
  ServantStatusCharaGraphListViewManager_o *v98; // x0
  const MethodInfo *v99; // x2
  UnityEngine_Vector2_o v100; // kr20_8
  float v101; // s13
  float v102; // s11
  ServantStatusCharaGraphListViewManager_o *v103; // x0
  const MethodInfo *v104; // x2
  UnityEngine_Vector2_o v105; // kr28_8
  int v106; // w8
  int v107; // w9
  float v108; // s3
  float v109; // s10
  float v110; // s0
  float v111; // s9
  float v112; // s0
  bool v113; // nf
  int v114; // w9
  float v115; // s0
  float v116; // s1
  float v117; // s1
  float v118; // s0
  float v119; // s0
  float v120; // s11
  int v121; // s0
  UnityEngine_Vector2_o v124; // kr30_8
  UnityEngine_Vector2_o v125; // kr38_8
  float baseTouchSqrMagnitude; // s8
  float v127; // s0
  float v128; // [xsp+8h] [xbp-1B8h]
  float v129; // [xsp+Ch] [xbp-1B4h]
  float v130; // [xsp+14h] [xbp-1ACh]
  float v131; // [xsp+18h] [xbp-1A8h]
  float v132; // [xsp+18h] [xbp-1A8h]
  float v133; // [xsp+1Ch] [xbp-1A4h]
  float v134; // [xsp+1Ch] [xbp-1A4h]
  float v135; // [xsp+1Ch] [xbp-1A4h]
  UnityEngine_Vector3_o v136; // [xsp+20h] [xbp-1A0h]
  float v137; // [xsp+20h] [xbp-1A0h]
  float value; // [xsp+24h] [xbp-19Ch]
  float position; // [xsp+28h] [xbp-198h]
  float positiona; // [xsp+28h] [xbp-198h]
  float v141; // [xsp+2Ch] [xbp-194h]
  float v142; // [xsp+2Ch] [xbp-194h]
  float v143; // [xsp+2Ch] [xbp-194h]
  float z; // [xsp+30h] [xbp-190h]
  float v145; // [xsp+30h] [xbp-190h]
  float v146; // [xsp+34h] [xbp-18Ch]
  float v147; // [xsp+38h] [xbp-188h]
  UnityEngine_Vector3_o v148[7]; // [xsp+3Ch] [xbp-184h] BYREF
  UnityEngine_Touch_o v149; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Touch_o dest; // [xsp+E0h] [xbp-E0h] BYREF
  float v151; // [xsp+178h] [xbp-48h]
  float v152; // [xsp+17Ch] [xbp-44h]
  UnityEngine_Vector2_o v153; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v154; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v155; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
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

  v2 = this;
  if ( (byte_4BF9620 & 1) == 0 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E12C(&StringLiteral_9324/*"Mouse ScrollWheel"*/, v4);
    byte_4BF9620 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v149, 0, sizeof(v149));
  memset(&v148[0].fields.y, 0, 68);
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
      v148[0].fields.x = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0LL);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !byte_4BF7D91 )
      {
        sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
        byte_4BF7D91 = 1;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
      v146 = m_Width;
      v147 = m_XMin;
      if ( !this )
        goto LABEL_136;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v19 = static_fields->zeroVector.fields.x;
      v20 = static_fields->zeroVector.fields.y;
      v152 = static_fields->zeroVector.fields.z;
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
              v153 = UnityEngine_Touch__get_position(&dest, 0LL);
              *(UnityEngine_Vector3_o *)&v25 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v23,
                                                 v153,
                                                 v2->fields.camera,
                                                 v24);
              if ( !parent )
                goto LABEL_136;
              *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v25,
                                                 0LL);
              if ( v2->fields.oldTouchCount == 1 )
              {
                v33 = v30;
                v34 = v31;
                v35 = v32;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v28,
                                  v2->fields.oldTouchPosition,
                                  v2->fields.camera,
                                  v29);
                v159 = UnityEngine_Transform__InverseTransformPoint(
                         (UnityEngine_Transform_o *)parent,
                         WorldPosition,
                         0LL);
                v19 = v33 - v159.fields.x;
                v20 = v34 - v159.fields.y;
                v152 = v35 - v159.fields.z;
              }
              else
              {
                v2->fields.oldTouchCount = 1;
              }
              v2->fields.oldTouchPosition = UnityEngine_Touch__get_position(&dest, 0LL);
              v38 = 0;
              v60 = 0;
              v2->fields.isTouchScale = 0;
              v151 = 0.0;
              goto LABEL_58;
            }
LABEL_137:
            sub_1C2E390(this, method);
          }
          oldTouchCount = v2->fields.oldTouchCount;
          v60 = 0;
          v2->fields.oldTouchCount = 0;
          v2->fields.isTouchScale = 0;
          v151 = 0.0;
          v38 = oldTouchCount > 0;
LABEL_58:
          v73 = 0.0;
          goto LABEL_64;
        }
        v151 = 0.0;
        if ( !IsAbleToPinch )
        {
          v38 = 0;
          v60 = 0;
          goto LABEL_58;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_137;
        memmove(&v149, &this->fields.dropObjectList, 0x44u);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_137;
        memmove(&v148[0].fields.y, (char *)&this->fields.seed + 4, 0x44u);
        v41 = UnityEngine_Touch__get_position(&v149, 0LL);
        v42 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v148[0].fields.y, 0LL);
        v43 = (float)(v41.fields.y + v42.fields.y) * 0.5;
        v154.fields.x = (float)(v41.fields.x + v42.fields.x) * 0.5;
        v154.fields.y = v43;
        *(UnityEngine_Vector3_o *)&v46 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v44,
                                           v154,
                                           v2->fields.camera,
                                           v45);
        if ( !parent )
          goto LABEL_136;
        v136.fields.z = v48;
        v141 = m_Height;
        v136.fields.x = v46;
        v136.fields.y = v47;
        *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__InverseTransformPoint(
                                           (UnityEngine_Transform_o *)parent,
                                           *(UnityEngine_Vector3_o *)&v46,
                                           0LL);
        v53 = v52;
        v55 = v54;
        v131 = v51;
        if ( v2->fields.oldTouchCount == 2 )
        {
          v56 = m_YMin;
          v57 = v51;
          v160 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v49,
                   v2->fields.oldTouchPosition,
                   v2->fields.camera,
                   v50);
          v161 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v160, 0LL);
          v19 = v57 - v161.fields.x;
          v20 = v53 - v161.fields.y;
          v58 = v55 - v161.fields.z;
        }
        else
        {
          v58 = v152;
          v56 = m_YMin;
          v2->fields.oldTouchCount = 2;
          v2->fields.isTouchScale = 0;
        }
        v135 = v58;
        v2->fields.oldTouchPosition.fields.x = (float)(v41.fields.x + v42.fields.x) * 0.5;
        v2->fields.oldTouchPosition.fields.y = v43;
        v124 = UnityEngine_Touch__get_position(&v149, 0LL);
        v125 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v148[0].fields.y, 0LL);
        v73 = (float)((float)(v124.fields.x - v125.fields.x) * (float)(v124.fields.x - v125.fields.x))
            + (float)((float)(v124.fields.y - v125.fields.y) * (float)(v124.fields.y - v125.fields.y));
        if ( !v2->fields.isTouchScale )
        {
          m_YMin = v56;
          v38 = 0;
          v60 = 0;
          if ( v73 > 0.0 )
          {
            v2->fields.isTouchScale = 1;
            v2->fields.baseTouchSqrMagnitude = v73;
            v2->fields.baseTouchScale = v148[0].fields.x;
          }
          v127 = v135;
          m_Height = v141;
          goto LABEL_133;
        }
        baseTouchSqrMagnitude = v2->fields.baseTouchSqrMagnitude;
        m_YMin = v56;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        m_Height = v141;
        v38 = 0;
        v74 = (float)(sqrtf(v73 / baseTouchSqrMagnitude) * v2->fields.baseTouchScale) - v148[0].fields.x;
        v72 = v55;
        v68 = v53;
        v67 = v131;
        v71 = v135;
      }
      else
      {
        v36 = v2->fields.oldTouchCount;
        v37 = 0;
        v2->fields.isTouchScale = 0;
        v2->fields.oldTouchCount = 0;
        v38 = v36 > 0;
        if ( x >= 0.0 )
        {
          v39 = UnityEngine_Screen__get_width(0LL);
          v37 = 0;
          if ( y >= 0.0 && x <= (float)v39 )
            v37 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        if ( IsAbleToPinch && v37 )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9324/*"Mouse ScrollWheel"*/, 0LL);
        else
          Axis = 0.0;
        v151 = Axis;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v155.fields.x = x;
          v155.fields.y = y;
          v142 = m_Height;
          v62 = m_YMin;
          *(UnityEngine_Vector3_o *)&v63 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v155,
                                             v2->fields.camera,
                                             v21);
          if ( !parent )
            goto LABEL_136;
          v136.fields.x = v63;
          v136.fields.y = v64;
          v136.fields.z = v65;
          v162 = UnityEngine_Transform__InverseTransformPoint(
                   (UnityEngine_Transform_o *)parent,
                   *(UnityEngine_Vector3_o *)&v63,
                   0LL);
          v67 = v162.fields.x;
          v68 = v162.fields.y;
          v69 = v162.fields.z;
          if ( v2->fields.isOldMousePosition )
          {
            v163 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v66,
                     v2->fields.oldMousePosition,
                     v2->fields.camera,
                     v21);
            v164 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v163, 0LL);
            v19 = v67 - v164.fields.x;
            v20 = v68 - v164.fields.y;
            v70 = v69 - v164.fields.z;
          }
          else
          {
            v70 = v152;
            v2->fields.isOldMousePosition = 1;
          }
          v71 = v70;
          v72 = v69;
          m_YMin = v62;
          m_Height = v142;
          v2->fields.oldMousePosition.fields.x = x;
          v2->fields.oldMousePosition.fields.y = y;
          v73 = 0.0;
        }
        else
        {
          v72 = v152;
          v73 = 0.0;
          v68 = v20;
          v67 = v19;
          v71 = v152;
          v2->fields.isOldMousePosition = 0;
          v136.fields.y = v20;
          v136.fields.z = v71;
          v136.fields.x = v19;
        }
        v74 = v151;
      }
      v151 = v74;
      if ( v74 == 0.0 )
      {
        v60 = 0;
LABEL_63:
        v152 = v71;
        goto LABEL_64;
      }
      v152 = v72;
      baseScale = v2->fields.baseScale;
      v76 = v148[0].fields.x + v74;
      if ( v74 >= 0.0 || v76 >= baseScale )
      {
        v77 = v76 > (float)(baseScale * 3.0);
        v78 = v74 > 0.0;
        v60 = v78 && v77;
        if ( v78 && v77 )
          baseScale = baseScale * 3.0;
        else
          baseScale = v148[0].fields.x + v74;
      }
      else
      {
        v60 = 1;
      }
      if ( v148[0].fields.x == baseScale )
        goto LABEL_63;
      v134 = v71;
      if ( v2->fields.oldTouchCount > 0 || v2->fields.isOldMousePosition )
      {
        v143 = m_YMin;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v176 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v136, 0LL);
        v148[0].fields.x = v176.fields.x;
        positiona = v176.fields.y;
        v120 = v176.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v177.fields.z = z;
        v177.fields.x = baseScale;
        v177.fields.y = baseScale;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v177, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v178.fields.x = v148[0].fields.x;
        v178.fields.y = positiona;
        v178.fields.z = v120;
        *(UnityEngine_Vector3_o *)&v121 = UnityEngine_Transform__TransformPoint(
                                            (UnityEngine_Transform_o *)this,
                                            v178,
                                            0LL);
        if ( !parent )
          goto LABEL_136;
        v179 = UnityEngine_Transform__InverseTransformPoint(
                 (UnityEngine_Transform_o *)parent,
                 *(UnityEngine_Vector3_o *)&v121,
                 0LL);
        v19 = v19 + (float)(v67 - v179.fields.x);
        m_YMin = v143;
        v20 = v20 + (float)(v68 - v179.fields.y);
        v152 = v134 + (float)(v152 - v179.fields.z);
        v148[0].fields.x = baseScale;
LABEL_64:
        this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
        if ( !this )
          goto LABEL_136;
        if ( BYTE4(this->fields.emptyMessageLabel) )
        {
          emptyMessageLabel = (int)this->fields.emptyMessageLabel;
          if ( v148[0].fields.x == v2->fields.baseScale )
          {
            if ( emptyMessageLabel == 1 )
            {
              v80 = 2;
LABEL_71:
              ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, v80, v21);
            }
          }
          else if ( emptyMessageLabel == 2 )
          {
            v80 = 1;
            goto LABEL_71;
          }
        }
        if ( (v60 & 1) != 0 && v73 > 0.0 && v2->fields.isTouchScale )
        {
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( !this )
            goto LABEL_136;
          LODWORD(v2->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(
                                                               (UnityEngine_Transform_o *)this,
                                                               0LL);
          v2->fields.baseTouchSqrMagnitude = v73;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v81 = localPosition.fields.x;
        v82 = localPosition.fields.y;
        v83 = localPosition.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v84 = v152;
        v166.fields.y = v20 + v82;
        v152 = v19;
        v166.fields.z = v84 + v83;
        v166.fields.x = v19 + v81;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v166, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v85 = (float)width;
        v167 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v89 = v167.fields.x;
        v90 = v167.fields.z;
        v145 = v167.fields.y;
        if ( !byte_4BF7C8A )
        {
          v86 = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E12C(&UnityEngine_Vector2_TypeInfo, v87);
          byte_4BF7C8A = 1;
        }
        v168 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v86,
                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                 v2->fields.camera,
                 v88);
        v133 = v168.fields.x;
        v137 = v168.fields.y;
        v168.fields.x = (float)width;
        v168.fields.y = (float)height;
        v169 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v91,
                 *(UnityEngine_Vector2_o *)&v168.fields.x,
                 v2->fields.camera,
                 v92);
        v130 = v169.fields.x;
        v132 = v169.fields.y;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        value = v90;
        position = v89;
        v170 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v93 = v170.fields.x;
        v129 = v170.fields.y;
        SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v94, v170, v2->fields.camera, v95);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v171.fields.y = m_YMin + m_Height;
        v171.fields.z = 0.0;
        v171.fields.x = v147;
        v172 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v171, 0LL);
        v97 = v172.fields.x;
        v128 = v172.fields.y;
        v100 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v98, v172, v2->fields.camera, v99);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
LABEL_136:
          sub_1C2E388(this, method);
        v173.fields.z = 0.0;
        v173.fields.y = m_YMin;
        v173.fields.x = v147 + v146;
        v174 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v173, 0LL);
        v101 = v174.fields.x;
        v102 = v174.fields.y;
        v105 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v103, v174, v2->fields.camera, v104);
        v106 = v151 < 0.0 || v38;
        v107 = v106 | (v152 > 0.0);
        if ( (float)(v105.fields.x - v100.fields.x) <= v85 )
        {
          v112 = v85 * 0.5;
          if ( (v107 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v85 * 0.5)) )
          {
            v111 = position;
            v109 = v145;
            if ( ((v152 >= 0.0) & ~v106) == 0 )
            {
              v108 = (float)height;
              if ( SreenPosition.fields.x >= v112 )
                goto LABEL_99;
              v110 = (float)((float)(v133 + v130) * 0.5) - v93;
              goto LABEL_97;
            }
          }
          else
          {
            v109 = v145;
            v111 = position + (float)((float)((float)(v133 + v130) * 0.5) - v93);
          }
          v108 = (float)height;
        }
        else
        {
          v108 = (float)height;
          if ( !((v107 ^ 1) & 1 | (v100.fields.x <= 0.0)) )
          {
            v109 = v145;
            v110 = v133 - v97;
            v111 = position;
LABEL_97:
            v111 = v111 + v110;
            goto LABEL_99;
          }
          if ( ((v152 >= 0.0) & ~v106) != 0 )
          {
            v111 = position;
            v109 = v145;
          }
          else
          {
            v113 = v105.fields.x < v85;
            v111 = position;
            v109 = v145;
            if ( v113 )
            {
              v110 = v130 - v101;
              goto LABEL_97;
            }
          }
        }
LABEL_99:
        v114 = v106 | (v20 > 0.0);
        if ( (float)(v105.fields.y - v100.fields.y) > v108 )
        {
          if ( !((v114 ^ 1) & 1 | (v100.fields.y <= 0.0)) )
          {
            v115 = v137;
            v116 = v128;
LABEL_111:
            v119 = v115 - v116;
            goto LABEL_112;
          }
          if ( ((v20 >= 0.0) & ~v106) == 0 && v105.fields.y < v108 )
          {
            v119 = v132 - v102;
LABEL_112:
            v109 = v109 + v119;
          }
LABEL_113:
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( this )
          {
            v175.fields.z = value;
            v175.fields.x = v111;
            v175.fields.y = v109;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v175, 0LL);
            return;
          }
          goto LABEL_136;
        }
        v117 = 0.5;
        if ( (v114 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v108 * 0.5)) )
        {
          if ( ((v20 >= 0.0) & ~v106) != 0 || SreenPosition.fields.y >= (float)(v108 * 0.5) )
            goto LABEL_113;
          v118 = v137 + v132;
          v117 = 0.5;
        }
        else
        {
          v118 = v137 + v132;
        }
        v115 = v118 * v117;
        v116 = v129;
        goto LABEL_111;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0LL);
      if ( !this )
        goto LABEL_136;
      v180.fields.z = z;
      v180.fields.x = baseScale;
      v180.fields.y = baseScale;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v180, 0LL);
      v127 = v134;
      v148[0].fields.x = baseScale;
LABEL_133:
      v152 = v127;
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

  if ( (byte_4BF9624 & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, method);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v3);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v4);
    byte_4BF9624 = 1;
  }
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v7 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1C2E388(v8, v9);
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

  if ( (byte_4BF9622 & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, method);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v3);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v4);
    byte_4BF9622 = 1;
  }
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v7 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1C2E388(v8, v9);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v15; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  const MethodInfo *v17; // x2
  float v18; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v24; // x21
  EventDelegate_Callback_o *v25; // x22

  if ( (byte_4BF961D & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, method);
    sub_1C2E12C(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo, v3);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__, v6);
    byte_4BF961D = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.camera, (int64_t)main, v8, v9, v10, v11, v12, v13);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v18;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].monitor) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v17);
    charaGraphViewer = this->fields.charaGraphViewer;
    v20 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_1C2E378(ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v20,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      v21);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v20, v22);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v24 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v25 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v25,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_1C2E388(dragObject, v15);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v24, v25, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2

  backMask = this->fields.backMask;
  if ( !backMask )
    sub_1C2E388(0LL, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_33389428(this, 3, v4);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4BF9628 & 1) == 0 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4BF9628 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BF96D8 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4BF96D8 = 1;
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
      sub_1C2E388(v5, mainInfo);
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

  if ( (byte_4BF9627 & 1) == 0 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4BF9627 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BF96D8 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4BF96D8 = 1;
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
      sub_1C2E388(v5, mainInfo);
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

  if ( (byte_4BF961B & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, item);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BF961B = 1;
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
                                 (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_15:
        sub_1C2E388(Component_object, v8);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4BF961A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF961A = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C2E388(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BF9618 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v7);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v8);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v11);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v12);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v13);
    byte_4BF9618 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2E388(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C2E388(v19, v20);
      ServantStatusCharaGraphListViewObject__Init_33390456(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_33389428(
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

  if ( (byte_4BF9619 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v5);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v6);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v9);
    sub_1C2E12C(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v10);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v11);
    byte_4BF9619 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2E388(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C2E388(v17, v18);
      ServantStatusCharaGraphListViewObject__Init_33390556(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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

  if ( (byte_4BF9626 & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusCharaGraphListViewIndicator_TypeInfo, statusItem);
    byte_4BF9626 = 1;
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
      sub_1C2E388(scrollView, statusItem);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_33389272(this, mode, v10);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_33389272(
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
    ServantStatusCharaGraphListViewManager__RequestListObject_33389428(this, v6, v5);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_33389376(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_33389272(this, mode, v10);
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
  if ( (byte_4BF9617 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E12C(&ServantStatusCharaGraphListViewObject_TypeInfo, obj);
    byte_4BF9617 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_1C2E388(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusCharaGraphListViewObject__Init_33389144(
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
    sub_1C2E388(0LL, isVisible);
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

  if ( (byte_4BF960C & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BF960C = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E648(v7);
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

  if ( (byte_4BF960E & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BF960E = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E648(v7);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BF9611 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BF9611 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C2E388(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C2E388(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C2E388(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_42097292((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C2E388(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C2E388(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C2E388(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C2E388(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BF9610 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BF9610 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C2E388(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C2E388(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C2E388(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BF960D & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BF960D = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E648(v7);
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

  if ( (byte_4BF960F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BF960F = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1C2E648(v7);
  ServantStatusCharaGraphListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A6A004;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A69FBC;
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
  if ( (byte_4BF962C & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&result);
    byte_4BF962C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BF962D & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v1);
    byte_4BF962D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ServantStatusCharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BF962E & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusCharaGraphListViewItem_TypeInfo, x);
    byte_4BF962E = 1;
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