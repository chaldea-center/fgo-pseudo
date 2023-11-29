void __fastcall ServantStatusCharaGraphListViewManager___ctor(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.manualSelectedIndex = -1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__AfterScrollCallback(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Action_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8747 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v3);
    byte_40F8747 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v4, v5, v6, v7);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  __int64 v8; // x1
  RandomLimitCountManager_c *v9; // x0
  int v10; // w22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v12; // x21
  ListViewItem_o *v13; // x8
  __int64 v14; // x11
  int32_t manualSelectedIndex; // w1

  if ( (byte_40F8746 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, mainInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&OptionManager_TypeInfo, v6);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v7);
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, v8);
    byte_40F8746 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_40F8215 = 1;
  }
  v9 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v9 = RandomLimitCountManager_TypeInfo;
  }
  if ( v9->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      goto LABEL_29;
    if ( mainInfo->fields.isEnableOwnRandomSetting )
      goto LABEL_18;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetRandomLimitCountOwn(0LL) )
    {
LABEL_18:
      v10 = 0;
    }
    else
    {
      manualSelectedIndex = this->fields.manualSelectedIndex;
      if ( manualSelectedIndex != -1 )
      {
        ListViewManager__MoveCenterItem((ListViewManager_o *)this, manualSelectedIndex, 0, 0, 0.0, 0LL);
        return;
      }
      v10 = 1;
    }
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_29:
      sub_B170D4();
    v12 = 0LL;
    while ( (__int64)v12 < itemList->fields._size )
    {
      if ( v12 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = itemList->fields._items->m_Items[v12];
      if ( v13 )
      {
        v14 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ServantStatusCharaGraphListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo
          && LODWORD(v13[1].monitor) == mainInfo->fields.cardLimitCount )
        {
          ListViewManager__MoveCenterItem((ListViewManager_o *)this, v12, 0, 0, 0.0, 0LL);
          if ( v10 )
            this->fields.manualSelectedIndex = v12;
          return;
        }
      }
      itemList = this->fields.itemList;
      ++v12;
      if ( !itemList )
        goto LABEL_29;
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
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusListViewItem_o **CenterItem; // x20
  __int64 v10; // x9
  ServantStatusListViewItem_o *v11; // x0
  int32_t SvtId; // w0
  int ServantLimitCountSealAfter; // w22
  int32_t v14; // w21
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantStatusListViewItem_o *v16; // x0
  const MethodInfo *v17; // x2
  ServantStatusDialog_o *servantStatusDialog; // x0
  ServantStatusListViewItem_o *v19; // x0
  const MethodInfo *v20; // x3
  ServantStatusDialog_o *v21; // x0
  ServantLimitAddMaster_o *v22; // x0
  ServantLimitAddMaster_o *v23; // x23
  const MethodInfo *v24; // x2
  ServantStatusDialog_o *v25; // x0
  WarQuestSelectionMaster_o *v26; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x24
  int32_t v28; // w0
  WarEntity_o *v29; // x0
  int32_t emptyMessage_high; // w24
  const MethodInfo *v31; // x2
  ServantStatusDialog_o *v32; // x0
  ServantStatusListViewItem_o *v33; // x8
  ServantStatusCharaGraphListViewManager_o *v34; // x0
  const MethodInfo *v35; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8748 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_40F8748 = 1;
  }
  entity = 0LL;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_47;
  CenterItem = (ServantStatusListViewItem_o **)ServantStatusCharaGraphViewer__GetCenterItem(charaGraphViewer, method);
  if ( !CenterItem )
  {
    CenterItem = (ServantStatusListViewItem_o **)this->fields.centerItem;
    if ( CenterItem )
    {
      v10 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*CenterItem)->fields.maxPortraitLimitCount) < (unsigned int)v10
        || *((ServantStatusCharaGraphListViewItem_c **)(*CenterItem)->fields.commandCodeIdList + v10 - 1) != ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        v34 = (ServantStatusCharaGraphListViewManager_o *)sub_B173C8(this->fields.centerItem);
        ServantStatusCharaGraphListViewManager__OnFinishedChangeCharaGraph(v34, v35);
        return;
      }
    }
    if ( !CenterItem )
      goto LABEL_47;
  }
  v11 = CenterItem[14];
  if ( !v11 )
    goto LABEL_47;
  SvtId = ServantStatusListViewItem__get_SvtId(v11, 0LL);
  ServantLimitCountSealAfter = *((_DWORD *)CenterItem + 30);
  v14 = SvtId;
  if ( ServantLimitCountSealAfter <= 10 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_47;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   Master_WarQuestSelectionMaster,
                                   v14,
                                   ServantLimitCountSealAfter + 1,
                                   0LL);
  }
  v16 = CenterItem[14];
  if ( !v16 )
    goto LABEL_47;
  if ( ServantStatusListViewItem__UpdateServantComment(v16, v14, ServantLimitCountSealAfter, 0LL) )
  {
    servantStatusDialog = this->fields.servantStatusDialog;
    if ( !servantStatusDialog )
      goto LABEL_47;
    ServantStatusDialog__UpdateProfileList(servantStatusDialog, 1, v17);
  }
  v19 = CenterItem[14];
  if ( !v19 )
    goto LABEL_47;
  if ( ServantStatusListViewItem__IsUpdateServantParameters(v19, v14, ServantLimitCountSealAfter, 0LL) )
  {
    v21 = this->fields.servantStatusDialog;
    if ( !v21 )
      goto LABEL_47;
    ServantStatusDialog__UpdateServantParameters(v21, v14, ServantLimitCountSealAfter, v20);
  }
  if ( ServantLimitCountSealAfter == 1 )
    ServantLimitCountSealAfter = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v22 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !v22 )
    goto LABEL_47;
  v23 = v22;
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v22, v14, 0LL) )
  {
    v25 = this->fields.servantStatusDialog;
    if ( !v25 )
      goto LABEL_47;
    ServantStatusDialog__UpdateServantDetailName(v25, ServantLimitCountSealAfter, v24);
  }
  if ( !ServantLimitAddMaster__IsOverwriteCv(v23, v14, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v26 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !CenterItem[14] )
    goto LABEL_47;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)v26;
  v28 = ServantStatusListViewItem__get_SvtId(CenterItem[14], 0LL);
  if ( !v27 )
    goto LABEL_47;
  v29 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v27,
          v28,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v29 )
    goto LABEL_47;
  emptyMessage_high = HIDWORD(v29[1].fields.emptyMessage);
  if ( ServantLimitAddMaster__TryGetEntity(v23, &entity, v14, ServantLimitCountSealAfter, 0LL) )
  {
    if ( !entity )
      goto LABEL_47;
    emptyMessage_high = ServantLimitAddEntity__GetOverwriteCvId(entity, emptyMessage_high, 0LL);
  }
  v32 = this->fields.servantStatusDialog;
  if ( !v32 || (ServantStatusDialog__UpdateCv(v32, emptyMessage_high, v31), (v33 = CenterItem[14]) == 0LL) )
LABEL_47:
    sub_B170D4();
  v33->fields.currentCardLimitCount = ServantLimitCountSealAfter;
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
  __int64 v15; // x1
  UILabel_o *debugScaleLabel; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v22; // x0
  struct System_Int32_array *cardSelectList; // x24
  __int64 v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  unsigned __int64 v30; // x26
  int32_t v31; // w25
  int32_t v32; // w22
  signed __int64 v33; // x27
  int32_t v34; // w21
  __int64 v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  struct UIDragDropListViewBackMask_o *Component_srcLineSprite; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Action_o *v64; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  BattleServantConfConponent_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v79; // x24
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  RandomLimitCountManager_c *v87; // x0
  ServantStatusCharaGraphListViewManager_o *v88; // x0
  ServantStatusListViewItem_o *v89; // x1
  const MethodInfo *v90; // x2
  int32_t cardLimitCount; // [xsp+Ch] [xbp-54h]

  if ( (byte_40F872F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, mainInfo);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SpringPanel_OnFinished_TypeInfo, v9);
    sub_B16FFC(&OptionManager_TypeInfo, v10);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v11);
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v13);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__, v14);
    sub_B16FFC(&StringLiteral_1, v15);
    byte_40F872F = 1;
  }
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    goto LABEL_54;
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1, 0LL);
  if ( !mainInfo )
    goto LABEL_54;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCardImageLimitCount(
                                            mainInfo,
                                            0LL);
    v22 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_54;
      v24 = *(_QWORD *)&cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, v24, 0LL);
      if ( (int)v24 >= 1 )
      {
        v30 = 0LL;
        v31 = 0;
        v32 = 0;
        v33 = (int)v24;
        while ( 1 )
        {
          if ( v30 >= cardSelectList->max_length )
          {
            sub_B17100(v25, v26, v27);
            sub_B170A0();
          }
          v34 = cardSelectList->m_Items[v30 + 1];
          if ( (v34 & 0x80000000) == 0 )
          {
            v35 = sub_B170CC(ServantStatusCharaGraphListViewItem_TypeInfo, v26, v27, v28, v29);
            ListViewItem___ctor_30173668((ListViewItem_o *)v35, v32, 0LL);
            *(_QWORD *)(v35 + 112) = mainInfo;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v35 + 112),
              (System_Int32_array **)mainInfo,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            *(_DWORD *)(v35 + 120) = v34;
            if ( v34 == cardLimitCount )
            {
              if ( !v35 )
                goto LABEL_54;
              v31 = *(_DWORD *)(v35 + 20);
            }
            if ( v34 == ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL) )
            {
              if ( !v35 )
                goto LABEL_54;
              this->fields.manualSelectedIndex = *(_DWORD *)(v35 + 20);
            }
            itemList = this->fields.itemList;
            if ( !itemList )
              goto LABEL_54;
            ++v32;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          }
          if ( (__int64)++v30 >= v33 )
            goto LABEL_28;
        }
      }
      goto LABEL_27;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v22 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v43 = sub_B170CC(v22, v17, v18, v19, v20);
  ListViewItem___ctor_30173668((ListViewItem_o *)v43, 0, 0LL);
  *(_QWORD *)(v43 + 112) = mainInfo;
  sub_B16F98((BattleServantConfConponent_o *)(v43 + 112), (System_Int32_array **)mainInfo, v44, v45, v46, v47, v48, v49);
  *(_DWORD *)(v43 + 120) = ConvertOverwriteCardImageLimitCount;
  v50 = this->fields.itemList;
  if ( !v50 )
    goto LABEL_54;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v50,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_27:
  v31 = 0;
LABEL_28:
  v51 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._6_GetDragRoot.method)(
                                      this,
                                      this->klass->vtable._7_ItemDragStart.methodPtr);
  if ( !v51 )
    goto LABEL_54;
  Component_srcLineSprite = (struct UIDragDropListViewBackMask_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v51,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.backMask,
    (System_Int32_array **)Component_srcLineSprite,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  ListViewManager__SortItem((ListViewManager_o *)this, v31, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v59);
  v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
  System_Action___ctor(
    v64,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v64;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                           scrollView,
                                                           (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(ComponentInChildren_UIWidget, 0LL, 0LL) )
    goto LABEL_38;
  if ( !ComponentInChildren_UIWidget )
LABEL_54:
    sub_B170D4();
  monitor = (System_Delegate_o *)ComponentInChildren_UIWidget[1].monitor;
  p_monitor = (BattleServantConfConponent_o *)&ComponentInChildren_UIWidget[1].monitor;
  v79 = (SpringPanel_OnFinished_o *)sub_B170CC(SpringPanel_OnFinished_TypeInfo, v73, v74, v75, v76);
  SpringPanel_OnFinished___ctor(
    v79,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
    0LL);
  v80 = (System_Int32_array **)System_Delegate__Combine(monitor, (System_Delegate_o *)v79, 0LL);
  if ( v80 && *v80 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v88 = (ServantStatusCharaGraphListViewManager_o *)sub_B173C8(v80);
    ServantStatusCharaGraphListViewManager__SetEnableScroll(v88, v89, v90);
    return;
  }
  p_monitor->klass = (BattleServantConfConponent_c *)v80;
  sub_B16F98(p_monitor, v80, v81, v82, v83, v84, v85, v86);
LABEL_38:
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v73);
    byte_40F8215 = 1;
  }
  v87 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v87 = RandomLimitCountManager_TypeInfo;
  }
  if ( v87->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetRandomLimitCountOwn(0LL) )
      this->fields.manualSelectedIndex = v31;
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_40F8730 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F8730 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_B170D4();
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DragBackFadein(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragMaskObject; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (dragMaskObject = this->fields.dragMaskObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(dragMaskObject, 1, 0LL),
        (v8 = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = UnityEngine_Component__get_gameObject(v8, 0LL);
  TweenAlpha__Begin(v9, duration, 0.0, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DragBackFadeout(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragMaskObject; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (dragMaskObject = this->fields.dragMaskObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(dragMaskObject, 1, 0LL),
        (v8 = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = UnityEngine_Component__get_gameObject(v8, 0LL);
  TweenAlpha__Begin(v9, duration, 1.0, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DragBackOff(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragMaskObject; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (dragMaskObject = this->fields.dragMaskObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(dragMaskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetItem(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F8733 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_40F8733 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetManualSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewIndicator_o *indicator; // x8
  __int64 v8; // x11
  int32_t manualSelectedIndex; // w21
  RandomLimitCountManager_c *v10; // x0

  if ( (byte_40F8732 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, mainInfo);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    sub_B16FFC(&ServantStatusCharaGraphListViewIndicator_TypeInfo, v6);
    byte_40F8732 = 1;
  }
  indicator = this->fields.indicator;
  if ( !indicator )
    goto LABEL_25;
  v8 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1);
  if ( *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v8 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    goto LABEL_25;
  }
  manualSelectedIndex = *((_DWORD *)&indicator[2].fields + 1);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_40F8215 = 1;
  }
  v10 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v10 = RandomLimitCountManager_TypeInfo;
  }
  if ( v10->static_fields->enableRandomLimitCount )
  {
    if ( mainInfo )
    {
      if ( mainInfo->fields.isEnableOwnRandomSetting )
        goto LABEL_21;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRandomLimitCountOwn(0LL) )
LABEL_21:
        manualSelectedIndex = this->fields.manualSelectedIndex;
      goto LABEL_22;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_22:
  if ( (manualSelectedIndex & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(this, manualSelectedIndex, method);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewIndicator_o *indicator; // x8
  __int64 v5; // x11
  int32_t v6; // w1

  if ( (byte_40F8731 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewIndicator_TypeInfo, method);
    byte_40F8731 = 1;
  }
  indicator = this->fields.indicator;
  if ( !indicator
    || (v5 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
        *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_B170D4();
  }
  v6 = *((_DWORD *)&indicator[2].fields + 1);
  if ( (v6 & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(this, v6, v2);
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
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_40F873C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, cam);
    byte_40F873C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) )
  {
    zero = UnityEngine_Vector2__get_zero(0LL);
    v9 = zero.fields.y;
    v8 = zero.fields.x;
  }
  else
  {
    if ( !cam )
      sub_B170D4();
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Camera__WorldToScreenPoint_40663544(cam, v12, 0LL);
  }
  result.fields.y = v9;
  result.fields.x = v8;
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
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_40F873B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, cam);
    byte_40F873B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  }
  else
  {
    if ( !cam )
      sub_B170D4();
    v10.fields.z = 0.0;
    v10.fields.x = x;
    v10.fields.y = y;
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Camera__ScreenToWorldPoint_40663568(cam, v10, 0LL);
  }
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickExViewer(
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
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_GameObject_o *dragObject; // x21
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x20
  const MethodInfo *v13; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  const MethodInfo *v16; // x2
  ServantStatusCharaGraphViewer_o *v17; // x0
  const MethodInfo *v18; // x1
  ServantStatusCharaGraphViewer_o *v19; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  EventDelegate_Callback_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  EventDelegate_Callback_o *v30; // x22
  UIDragDropListViewBackMask_o *v31; // x0
  ServantStatusCharaGraphListViewObject_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F8742 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v6);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40F8742 = 1;
  }
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_27;
  dragObject = actionObject->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dragObject, 0LL, 0LL) )
  {
    if ( !dragObject )
      goto LABEL_27;
    Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dragObject,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_27;
    ServantStatusCharaGraphListViewObject__SetItemDataType(Component_srcLineSprite, 0, v13);
  }
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_27;
  viewerListViewManager = charaGraphViewer->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    goto LABEL_27;
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(viewerListViewManager, 0, v13);
  v17 = this->fields.charaGraphViewer;
  if ( !v17 )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__SetDispType(v17, 1, v16);
  v19 = this->fields.charaGraphViewer;
  if ( !v19 )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(v19, v18);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  backMask = this->fields.backMask;
  v25 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v21, v22, v23, v24);
  EventDelegate_Callback___ctor(
    v25,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v30 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v26, v27, v28, v29);
  EventDelegate_Callback___ctor(
    v30,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v25, v30, 0LL), (v31 = this->fields.backMask) == 0LL)
    || (UIDragDropListViewBackMask__DragStart(v31, 0LL),
        v32 = this->fields.actionObject,
        v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36),
        System_Action___ctor(
          v37,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
          0LL),
        !v32) )
  {
LABEL_27:
    sub_B170D4();
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v32, 6, v37, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v38);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x9
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t SvtId; // w0
  WebViewManager_o *v24; // x0
  WarQuestSelectionMaster_o *v25; // x0
  ServantLimitImageMaster_o *v26; // x21
  int32_t v27; // w0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct ServantStatusCharaGraphViewer_o *v30; // x8
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_GameObject_o *dragObject; // x22
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x21
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  EventDelegate_Callback_o *v45; // x22
  ServantStatusCharaGraphListViewObject_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Action_o *v51; // x21
  const MethodInfo *v52; // x3
  int v53; // s1
  int32_t v56; // w1
  ServantStatusCharaGraphViewer_o *v57; // x0
  const MethodInfo *v58; // x1
  ServantStatusCharaGraphViewer_o *v59; // x0
  UIDragDropListViewBackMask_o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  EventDelegate_Callback_o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  EventDelegate_Callback_o *v70; // x22
  UIDragDropListViewBackMask_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  ServantStatusCharaGraphViewer_o *v76; // x0
  const MethodInfo *v77; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8740 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v10);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v11);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, v12);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    byte_40F8740 = 1;
  }
  entity = 0LL;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_49;
  CenterItem = ServantStatusCharaGraphViewer__GetCenterItem(charaGraphViewer, method);
  if ( CenterItem
    || (CenterItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.centerItem) == 0LL
    || (v18 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&CenterItem->klass->_2.bitflags2 + 1) >= (unsigned int)v18)
    && (ServantStatusCharaGraphListViewItem_c *)CenterItem->klass->_2.typeHierarchy[v18 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    entity = 0LL;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
        mainInfo = CenterItem->fields.mainInfo;
        if ( mainInfo )
        {
          SvtId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( v21 )
          {
            DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v21,
              &entity,
              SvtId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( v24 )
            {
              v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)v24,
                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
              if ( CenterItem->fields.mainInfo )
              {
                v26 = (ServantLimitImageMaster_o *)v25;
                v27 = ServantStatusListViewItem__get_SvtId(CenterItem->fields.mainInfo, 0LL);
                if ( v26 )
                {
                  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
                          v26,
                          v27,
                          CenterItem->fields.imageLimitCount,
                          0LL)
                    && entity
                    && ServantEntity__IsAdditionExpandImage(
                         (ServantEntity_o *)entity,
                         CenterItem->fields.imageLimitCount,
                         0LL) )
                  {
                    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !SoundManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    }
                    SoundManager__playSystemSe(0, 0LL);
                    v30 = this->fields.charaGraphViewer;
                    if ( v30 )
                    {
                      viewerListViewManager = v30->fields.viewerListViewManager;
                      if ( viewerListViewManager )
                      {
                        ServantStatusCharaGraphViewerListViewManager__SetItemDataType(viewerListViewManager, 1, v29);
                        actionObject = this->fields.actionObject;
                        if ( actionObject )
                        {
                          dragObject = actionObject->fields.dragObject;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          Component_srcLineSprite = 0LL;
                          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dragObject, 0LL, 0LL) )
                          {
                            if ( !dragObject )
                              goto LABEL_49;
                            Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                   dragObject,
                                                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
                          }
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          if ( UnityEngine_Object__op_Inequality(
                                 (UnityEngine_Object_o *)Component_srcLineSprite,
                                 0LL,
                                 0LL) )
                          {
                            if ( !Component_srcLineSprite )
                              goto LABEL_49;
                            ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
                              Component_srcLineSprite,
                              CenterItem,
                              v36);
                          }
                          backMask = this->fields.backMask;
                          v40 = (EventDelegate_Callback_o *)sub_B170CC(
                                                              EventDelegate_Callback_TypeInfo,
                                                              v35,
                                                              v36,
                                                              v37,
                                                              v38);
                          EventDelegate_Callback___ctor(
                            v40,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                            0LL);
                          v45 = (EventDelegate_Callback_o *)sub_B170CC(
                                                              EventDelegate_Callback_TypeInfo,
                                                              v41,
                                                              v42,
                                                              v43,
                                                              v44);
                          EventDelegate_Callback___ctor(
                            v45,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                            0LL);
                          if ( backMask )
                          {
                            UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v40, v45, 0LL);
                            v46 = this->fields.actionObject;
                            v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
                            System_Action___ctor(
                              v51,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                              0LL);
                            if ( v46 )
                            {
                              *(UnityEngine_Vector3_o *)(&v53 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v56 = 10;
LABEL_48:
                              ServantStatusCharaGraphListViewObject__Init(
                                v46,
                                v56,
                                v51,
                                0.1,
                                *(UnityEngine_Vector3_o *)&v53,
                                v52);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v57 = this->fields.charaGraphViewer;
                    if ( v57 )
                    {
                      ServantStatusCharaGraphViewer__SetDispType(v57, 1, v28);
                      v59 = this->fields.charaGraphViewer;
                      if ( v59 )
                      {
                        ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(v59, v58);
                        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(1, 0LL);
                        v60 = this->fields.backMask;
                        v65 = (EventDelegate_Callback_o *)sub_B170CC(
                                                            EventDelegate_Callback_TypeInfo,
                                                            v61,
                                                            v62,
                                                            v63,
                                                            v64);
                        EventDelegate_Callback___ctor(
                          v65,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v70 = (EventDelegate_Callback_o *)sub_B170CC(
                                                            EventDelegate_Callback_TypeInfo,
                                                            v66,
                                                            v67,
                                                            v68,
                                                            v69);
                        EventDelegate_Callback___ctor(
                          v70,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0LL);
                        if ( v60 )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(v60, v65, v70, 0LL);
                          v71 = this->fields.backMask;
                          if ( v71 )
                          {
                            UIDragDropListViewBackMask__DragStart(v71, 0LL);
                            v46 = this->fields.actionObject;
                            v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
                            System_Action___ctor(
                              v51,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                              0LL);
                            if ( v46 )
                            {
                              *(UnityEngine_Vector3_o *)(&v53 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v56 = 6;
                              goto LABEL_48;
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
LABEL_49:
    sub_B170D4();
  }
  v76 = (ServantStatusCharaGraphViewer_o *)sub_B173C8(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v76, v77);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ServantStatusCharaGraphListViewManager___c_c *v17; // x0
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__46_0; // x22
  Il2CppObject *v20; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v29; // x0
  const MethodInfo *v30; // x3
  ServantStatusCharaGraphListViewItem_array *v31; // x2
  struct ListViewItem_o *linkItem; // x8
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  const MethodInfo *v34; // x2
  ServantStatusCharaGraphViewer_o *v35; // x0
  UIDragDropListViewBackMask_o *backMask; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x10
  struct ServantStatusCharaGraphListViewObject_o *v44; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F8739 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___, v8);
    sub_B16FFC(&Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__, v9);
    sub_B16FFC(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo, v10);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, v11);
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__46_0__, v14);
    sub_B16FFC(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v15);
    byte_40F8739 = 1;
  }
  itemList = this->fields.itemList;
  v17 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v17 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo,
                                                                                                 obj,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__46_0,
      v20,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__46_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__);
    v21 = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    v21->__9__46_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__46_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v21->__9__46_0,
      (System_Int32_array **)_9__46_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__46_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  v29 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v28,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !v29 )
    goto LABEL_30;
  v31 = (ServantStatusCharaGraphListViewItem_array *)v29;
  if ( (int)v29->max_length >= 2 )
  {
    if ( !obj )
      goto LABEL_30;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_30;
    charaGraphViewer = this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_30;
    ServantStatusCharaGraphViewer__Setup(charaGraphViewer, linkItem->fields.index, v31, v30);
    v35 = this->fields.charaGraphViewer;
    if ( !v35 )
      goto LABEL_30;
    ServantStatusCharaGraphViewer__SetDispType(v35, 1, v34);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  backMask = this->fields.backMask;
  if ( !backMask )
    goto LABEL_30;
  UIDragDropListViewBackMask__DragStart(backMask, 0LL);
  if ( obj
    && (v43 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v43) )
  {
    v44 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v43 - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
        ? (struct ServantStatusCharaGraphListViewObject_o *)obj
        : 0LL;
  }
  else
  {
    v44 = 0LL;
  }
  this->fields.actionObject = v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actionObject,
    (System_Int32_array **)v44,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  actionObject = this->fields.actionObject;
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_30:
    sub_B170D4();
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(actionObject, 4, v50, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v51);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  EventDelegate_Callback_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  EventDelegate_Callback_o *v18; // x22
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F873E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v3);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40F873E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  backMask = this->fields.backMask;
  v13 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v9, v10, v11, v12);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v18 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v14, v15, v16, v17);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    goto LABEL_11;
  UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v13, v18, 0LL);
  actionObject = this->fields.actionObject;
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
    0LL);
  if ( !actionObject
    || (zero = UnityEngine_Vector3__get_zero(0LL),
        ServantStatusCharaGraphListViewObject__Init(
          actionObject,
          5,
          v24,
          0.1,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v25),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_GameObject_o *dragObject; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v9; // x8
  int32_t width; // w21
  int32_t height; // w22
  UnityEngine_Transform_o *v12; // x0
  float z; // s9
  float x; // s14
  float y; // s15
  int32_t touchCount; // w25
  float v17; // s8
  float v18; // s13
  float v19; // s12
  float v20; // s10
  float v21; // s11
  const MethodInfo *v22; // x1
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  const MethodInfo *v24; // x2
  _BOOL4 IsAbleToPinch; // w24
  float v26; // s15
  UnityEngine_Touch_array *touches; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  ServantStatusCharaGraphListViewManager_o *v30; // x0
  const MethodInfo *v31; // x2
  int v32; // s0
  ServantStatusCharaGraphListViewManager_o *v35; // x0
  const MethodInfo *v36; // x2
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s8
  float v41; // s9
  float v42; // s10
  int32_t v43; // w9
  _BOOL4 v44; // w8
  _BOOL4 v45; // w25
  int32_t v46; // w0
  float Axis; // s9
  UnityEngine_Vector2_o v48; // kr00_8
  UnityEngine_Vector2_o v49; // kr08_8
  ServantStatusCharaGraphListViewManager_o *v50; // x0
  const MethodInfo *v51; // x2
  float v52; // s0
  float v53; // s1
  float v54; // s2
  ServantStatusCharaGraphListViewManager_o *v55; // x0
  const MethodInfo *v56; // x2
  float v57; // s1
  float v58; // s2
  float v59; // s0
  float v60; // s12
  struct UnityEngine_Vector2_o *p_oldTouchPosition; // x25
  float *p_y; // x26
  float v63; // s15
  bool *p_isTouchScale; // x24
  int32_t oldTouchCount; // w8
  _BOOL4 v66; // w24
  _BOOL8 MouseButton; // x0
  float v68; // s0
  float v69; // s1
  float v70; // s2
  ServantStatusCharaGraphListViewManager_o *v71; // x0
  float v72; // s14
  float baseScale; // s8
  float v74; // s0
  _BOOL4 v75; // w8
  struct ServantStatusCharaGraphViewer_o *v76; // x0
  int32_t currentDispType; // w8
  int32_t v78; // w1
  UnityEngine_Transform_o *v79; // x0
  UnityEngine_Transform_o *v80; // x0
  float v81; // s8
  float v82; // s9
  float v83; // s10
  UnityEngine_Transform_o *v84; // x0
  UnityEngine_Transform_o *v85; // x0
  float v86; // s14
  float v87; // s13
  float v88; // s8
  float v89; // s9
  float v90; // s10
  ServantStatusCharaGraphListViewManager_o *v91; // x0
  const MethodInfo *v92; // x2
  float v93; // s12
  ServantStatusCharaGraphListViewManager_o *v94; // x0
  const MethodInfo *v95; // x2
  float v96; // s15
  float v97; // s11
  UnityEngine_Transform_o *v98; // x0
  float v99; // s9
  ServantStatusCharaGraphListViewManager_o *v100; // x0
  const MethodInfo *v101; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  UnityEngine_Transform_o *v103; // x21
  float m_XMin; // s8
  float yMax; // s0
  float v106; // s12
  ServantStatusCharaGraphListViewManager_o *v107; // x0
  const MethodInfo *v108; // x2
  UnityEngine_Vector2_o v109; // kr20_8
  UnityEngine_Transform_o *v110; // x21
  float v111; // s10
  float yMin; // s0
  float v113; // s10
  float v114; // s11
  ServantStatusCharaGraphListViewManager_o *v115; // x0
  const MethodInfo *v116; // x2
  UnityEngine_Vector2_o v117; // kr28_8
  int v118; // w8
  int v119; // w9
  float v120; // s0
  float v121; // s8
  float v122; // s12
  int v123; // w9
  float v124; // s0
  float v125; // s1
  float v126; // s0
  UnityEngine_Transform_o *v127; // x0
  UnityEngine_Transform_o *v128; // x0
  float v129; // s9
  float v130; // s10
  float v131; // s11
  UnityEngine_Transform_o *v132; // x0
  UnityEngine_Transform_o *v133; // x0
  int v134; // s0
  float v137; // s3
  UnityEngine_Vector2_o v138; // kr30_8
  UnityEngine_Vector2_o v139; // kr38_8
  float sqrMagnitude; // s0
  float baseTouchSqrMagnitude; // s8
  UnityEngine_Transform_o *v142; // x0
  float v143; // [xsp+0h] [xbp-1B0h]
  float v144; // [xsp+4h] [xbp-1ACh]
  float v145; // [xsp+14h] [xbp-19Ch]
  float v146; // [xsp+18h] [xbp-198h]
  float v147; // [xsp+1Ch] [xbp-194h]
  float v148; // [xsp+1Ch] [xbp-194h]
  float v149; // [xsp+20h] [xbp-190h]
  float v150; // [xsp+20h] [xbp-190h]
  float v151; // [xsp+24h] [xbp-18Ch]
  float v152; // [xsp+24h] [xbp-18Ch]
  float value; // [xsp+28h] [xbp-188h]
  float valuea; // [xsp+28h] [xbp-188h]
  float valueb; // [xsp+28h] [xbp-188h]
  float v156; // [xsp+2Ch] [xbp-184h]
  float v157; // [xsp+2Ch] [xbp-184h]
  float v158; // [xsp+2Ch] [xbp-184h]
  float v159; // [xsp+30h] [xbp-180h]
  float v160; // [xsp+34h] [xbp-17Ch]
  UnityEngine_Touch_o v161; // [xsp+38h] [xbp-178h] BYREF
  UnityEngine_Touch_o v162; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Touch_o v163; // [xsp+C8h] [xbp-E8h] BYREF
  MethodInfo methoda; // [xsp+110h] [xbp-A0h] BYREF
  MethodInfo var48; // [xsp+168h] [xbp-48h] BYREF
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v167; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v168; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v169; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v170; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v177; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v184; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v188; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v189; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v190; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v191; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v192; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v193; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v194; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v195; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v197; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v198; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v199; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v200; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v201; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v202; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v203; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F873D & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9171, v4);
    byte_40F873D = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v163, 0, sizeof(v163));
  memset(&v162, 0, sizeof(v162));
  memset(&v161, 0, sizeof(v161));
  var48.methodPointer = 0LL;
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_130;
  dragObject = actionObject->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dragObject, 0LL, 0LL) )
  {
    if ( !dragObject )
      goto LABEL_130;
    transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
    if ( !transform )
      goto LABEL_130;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    {
      v9 = this->fields.actionObject;
      if ( !v9 )
        goto LABEL_130;
      *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v9->fields.dragObjectRect;
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v12 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( !v12 )
        goto LABEL_130;
      localScale = UnityEngine_Transform__get_localScale(v12, 0LL);
      value = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0LL);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      v159 = zero.fields.x;
      v160 = zero.fields.y;
      v17 = zero.fields.z;
      v174 = UnityEngine_Vector3__get_zero(0LL);
      v18 = v174.fields.x;
      v19 = v174.fields.y;
      v20 = v174.fields.z;
      v175 = UnityEngine_Vector3__get_zero(0LL);
      v149 = v175.fields.y;
      v151 = v175.fields.x;
      v21 = v175.fields.z;
      UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Vector3__get_zero(0LL);
      charaGraphViewer = this->fields.charaGraphViewer;
      if ( !charaGraphViewer )
        goto LABEL_130;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch(charaGraphViewer, v22);
      if ( touchCount )
      {
        this->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          v26 = v17;
          if ( touchCount == 1 )
          {
            touches = UnityEngine_Input__get_touches(0LL);
            if ( !touches )
              goto LABEL_130;
            if ( touches->max_length )
            {
              memmove(&v163, &touches->m_Items[0].fields.m_Position, 0x44u);
              position = UnityEngine_Touch__get_position(&v163, 0LL);
              *(UnityEngine_Vector3_o *)&v32 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v30,
                                                 position,
                                                 this->fields.camera,
                                                 v31);
              if ( !parent )
                goto LABEL_130;
              *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__InverseTransformPoint(
                                                 parent,
                                                 *(UnityEngine_Vector3_o *)&v32,
                                                 0LL);
              if ( this->fields.oldTouchCount == 1 )
              {
                v40 = v37;
                v41 = v38;
                v42 = v39;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v35,
                                  this->fields.oldTouchPosition,
                                  this->fields.camera,
                                  v36);
                v177 = UnityEngine_Transform__InverseTransformPoint(parent, WorldPosition, 0LL);
                v159 = v40 - v177.fields.x;
                v160 = v41 - v177.fields.y;
                v26 = v42 - v177.fields.z;
              }
              else
              {
                this->fields.oldTouchCount = 1;
              }
              v45 = 0;
              v66 = 0;
              this->fields.oldTouchPosition = UnityEngine_Touch__get_position(&v163, 0LL);
              this->fields.isTouchScale = 0;
              Axis = 0.0;
              goto LABEL_58;
            }
LABEL_131:
            sub_B17100(touches, v28, v29);
            sub_B170A0();
          }
          oldTouchCount = this->fields.oldTouchCount;
          v66 = 0;
          this->fields.oldTouchCount = 0;
          this->fields.isTouchScale = 0;
          Axis = 0.0;
          v45 = oldTouchCount > 0;
LABEL_58:
          v72 = 0.0;
          goto LABEL_59;
        }
        v147 = z;
        Axis = 0.0;
        v26 = v17;
        if ( !IsAbleToPinch )
        {
          v45 = 0;
          v66 = 0;
          goto LABEL_58;
        }
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          goto LABEL_130;
        if ( !touches->max_length )
          goto LABEL_131;
        memmove(&v162, &touches->m_Items[0].fields.m_Position, 0x44u);
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          goto LABEL_130;
        if ( touches->max_length <= 1 )
          goto LABEL_131;
        memmove(&v161, &touches->m_Items[1].fields.m_Position, 0x44u);
        v48 = UnityEngine_Touch__get_position(&v162, 0LL);
        v49 = UnityEngine_Touch__get_position(&v161, 0LL);
        v167.fields.x = (float)(v48.fields.x + v49.fields.x) * 0.5;
        v167.fields.y = (float)(v48.fields.y + v49.fields.y) * 0.5;
        *(UnityEngine_Vector3_o *)&v52 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v50,
                                           v167,
                                           this->fields.camera,
                                           v51);
        if ( !parent )
          goto LABEL_130;
        v21 = v54;
        v149 = v53;
        v151 = v52;
        *(UnityEngine_Vector3_o *)(&v57 - 1) = UnityEngine_Transform__InverseTransformPoint(
                                                 parent,
                                                 *(UnityEngine_Vector3_o *)&v52,
                                                 0LL);
        v18 = v59;
        v156 = v57;
        if ( this->fields.oldTouchCount == 2 )
        {
          v60 = v57;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          v63 = v58;
          v178 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v55,
                   this->fields.oldTouchPosition,
                   this->fields.camera,
                   v56);
          v179 = UnityEngine_Transform__InverseTransformPoint(parent, v178, 0LL);
          v159 = v18 - v179.fields.x;
          v160 = v60 - v179.fields.y;
          v20 = v63;
          v26 = v63 - v179.fields.z;
          p_isTouchScale = &this->fields.isTouchScale;
        }
        else
        {
          v20 = v58;
          p_isTouchScale = &this->fields.isTouchScale;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          this->fields.isTouchScale = 0;
          this->fields.oldTouchCount = 2;
        }
        p_oldTouchPosition->fields.x = (float)(v48.fields.x + v49.fields.x) * 0.5;
        *p_y = (float)(v48.fields.y + v49.fields.y) * 0.5;
        v138 = UnityEngine_Touch__get_position(&v162, 0LL);
        v139 = UnityEngine_Touch__get_position(&v161, 0LL);
        v170.fields.x = v138.fields.x - v139.fields.x;
        v170.fields.y = v138.fields.y - v139.fields.y;
        var48.methodPointer = (Il2CppMethodPointer)v170;
        sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v170, &var48);
        v72 = sqrMagnitude;
        if ( !*p_isTouchScale )
        {
          v45 = 0;
          v66 = 0;
          if ( sqrMagnitude > 0.0 )
          {
            this->fields.isTouchScale = 1;
            this->fields.baseTouchSqrMagnitude = sqrMagnitude;
            this->fields.baseTouchScale = value;
          }
          Axis = 0.0;
          goto LABEL_59;
        }
        baseTouchSqrMagnitude = this->fields.baseTouchSqrMagnitude;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v45 = 0;
        v19 = v156;
        Axis = (float)(sqrtf(v72 / baseTouchSqrMagnitude) * this->fields.baseTouchScale) - value;
      }
      else
      {
        v43 = this->fields.oldTouchCount;
        v44 = 0;
        this->fields.isTouchScale = 0;
        this->fields.oldTouchCount = 0;
        v45 = v43 > 0;
        if ( x >= 0.0 )
        {
          v46 = UnityEngine_Screen__get_width(0LL);
          v44 = 0;
          if ( y >= 0.0 && x <= (float)v46 )
            v44 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        v147 = z;
        if ( v44 && IsAbleToPinch )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9171, 0LL);
        else
          Axis = 0.0;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v168.fields.x = x;
          v168.fields.y = y;
          *(UnityEngine_Vector3_o *)&v68 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v168,
                                             this->fields.camera,
                                             v24);
          if ( !parent )
            goto LABEL_130;
          v21 = v70;
          v149 = v69;
          v151 = v68;
          v180 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v68, 0LL);
          v18 = v180.fields.x;
          v19 = v180.fields.y;
          v20 = v180.fields.z;
          if ( this->fields.isOldMousePosition )
          {
            v181 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v71,
                     this->fields.oldMousePosition,
                     this->fields.camera,
                     v24);
            v182 = UnityEngine_Transform__InverseTransformPoint(parent, v181, 0LL);
            v159 = v18 - v182.fields.x;
            v160 = v19 - v182.fields.y;
            v17 = v20 - v182.fields.z;
          }
          else
          {
            this->fields.isOldMousePosition = 1;
          }
          this->fields.oldMousePosition.fields.x = x;
          this->fields.oldMousePosition.fields.y = y;
        }
        else
        {
          this->fields.isOldMousePosition = 0;
        }
        v72 = 0.0;
        v26 = v17;
      }
      if ( Axis == 0.0 )
      {
        v66 = 0;
      }
      else
      {
        baseScale = this->fields.baseScale;
        v74 = value + Axis;
        if ( Axis >= 0.0 || v74 >= baseScale )
        {
          v75 = Axis > 0.0 && v74 > (float)(baseScale * 3.0);
          if ( Axis > 0.0 && v74 > (float)(baseScale * 3.0) )
            baseScale = baseScale * 3.0;
          else
            baseScale = value + Axis;
        }
        else
        {
          v75 = 1;
        }
        v66 = v75;
        if ( value != baseScale )
        {
          if ( this->fields.oldTouchCount > 0 || this->fields.isOldMousePosition )
          {
            valueb = v20;
            v158 = Axis;
            v128 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
            if ( !v128 )
              goto LABEL_130;
            v194.fields.y = v149;
            v194.fields.x = v151;
            v194.fields.z = v21;
            v195 = UnityEngine_Transform__InverseTransformPoint(v128, v194, 0LL);
            v129 = v195.fields.x;
            v130 = v195.fields.y;
            v131 = v195.fields.z;
            v132 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
            if ( !v132 )
              goto LABEL_130;
            v196.fields.z = v147;
            v196.fields.x = baseScale;
            v196.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(v132, v196, 0LL);
            v133 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
            if ( !v133 )
              goto LABEL_130;
            v197.fields.x = v129;
            v197.fields.y = v130;
            v197.fields.z = v131;
            *(UnityEngine_Vector3_o *)&v134 = UnityEngine_Transform__TransformPoint(v133, v197, 0LL);
            if ( !parent )
              goto LABEL_130;
            v198 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v134, 0LL);
            v137 = valueb;
            Axis = v158;
            value = baseScale;
            v26 = v26 + (float)(v137 - v198.fields.z);
            v159 = v159 + (float)(v18 - v198.fields.x);
            v160 = v160 + (float)(v19 - v198.fields.y);
          }
          else
          {
            v142 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
            if ( !v142 )
              goto LABEL_130;
            v199.fields.z = v147;
            v199.fields.x = baseScale;
            v199.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(v142, v199, 0LL);
            value = baseScale;
          }
        }
      }
LABEL_59:
      v76 = this->fields.charaGraphViewer;
      if ( !v76 )
        goto LABEL_130;
      if ( v76->fields._IsAbleToSwitchDispMode_k__BackingField )
      {
        currentDispType = v76->fields.currentDispType;
        if ( value == this->fields.baseScale )
        {
          if ( currentDispType == 1 )
          {
            v78 = 2;
LABEL_66:
            ServantStatusCharaGraphViewer__SetDispType(v76, v78, v24);
          }
        }
        else if ( currentDispType == 2 )
        {
          v78 = 1;
          goto LABEL_66;
        }
      }
      if ( v66 && v72 > 0.0 && this->fields.isTouchScale )
      {
        v79 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
        if ( !v79 )
          goto LABEL_130;
        LODWORD(this->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(v79, 0LL);
        this->fields.baseTouchSqrMagnitude = v72;
      }
      v157 = Axis;
      v80 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( !v80 )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition(v80, 0LL);
      v81 = localPosition.fields.x;
      v82 = localPosition.fields.y;
      v83 = localPosition.fields.z;
      v84 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( !v84 )
        goto LABEL_130;
      v184.fields.z = v26 + v83;
      v184.fields.x = v159 + v81;
      v184.fields.y = v160 + v82;
      UnityEngine_Transform__set_localPosition(v84, v184, 0LL);
      v85 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( !v85 )
        goto LABEL_130;
      v86 = (float)width;
      v87 = (float)height;
      v185 = UnityEngine_Transform__get_position(v85, 0LL);
      v88 = v185.fields.x;
      v89 = v185.fields.y;
      v90 = v185.fields.z;
      v169 = UnityEngine_Vector2__get_zero(0LL);
      v186 = ServantStatusCharaGraphListViewManager__GetWorldPosition(v91, v169, this->fields.camera, v92);
      v146 = v186.fields.x;
      v93 = v186.fields.y;
      v186.fields.x = (float)width;
      v186.fields.y = (float)height;
      v187 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
               v94,
               *(UnityEngine_Vector2_o *)&v186.fields.x,
               this->fields.camera,
               v95);
      v96 = v187.fields.x;
      v97 = v187.fields.y;
      v98 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( !v98 )
        goto LABEL_130;
      v148 = v93;
      v150 = v89;
      v152 = v88;
      v188 = UnityEngine_Transform__get_position(v98, 0LL);
      v99 = v188.fields.x;
      v144 = v188.fields.y;
      SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v100, v188, this->fields.camera, v101);
      v103 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      v201.fields.m_XMin = UnityEngine_Rect__get_xMin(v200, &methoda);
      m_XMin = v201.fields.m_XMin;
      yMax = UnityEngine_Rect__get_yMax(v201, &methoda);
      if ( !v103 )
        goto LABEL_130;
      v189.fields.y = yMax;
      v189.fields.z = 0.0;
      v189.fields.x = m_XMin;
      v145 = v97;
      valuea = v90;
      v190 = UnityEngine_Transform__TransformPoint(v103, v189, 0LL);
      v106 = v190.fields.x;
      v143 = v190.fields.y;
      v109 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v107, v190, this->fields.camera, v108);
      v110 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      v203.fields.m_XMin = UnityEngine_Rect__get_xMax(v202, &methoda);
      v111 = v203.fields.m_XMin;
      yMin = UnityEngine_Rect__get_yMin(v203, &methoda);
      if ( !v110 )
LABEL_130:
        sub_B170D4();
      v191.fields.y = yMin;
      v191.fields.z = 0.0;
      v191.fields.x = v111;
      v192 = UnityEngine_Transform__TransformPoint(v110, v191, 0LL);
      v113 = v192.fields.x;
      v114 = v192.fields.y;
      v117 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v115, v192, this->fields.camera, v116);
      v118 = v157 < 0.0 || v45;
      v119 = v118 | (v159 > 0.0);
      if ( (float)(v117.fields.x - v109.fields.x) <= v86 )
      {
        if ( !((v119 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v86 * 0.5))) )
        {
          v120 = (float)((float)(v146 + v96) * 0.5) - v99;
          goto LABEL_83;
        }
        v122 = v150;
        v121 = v152;
        if ( (v118 | (v159 < 0.0)) == 1 && SreenPosition.fields.x < (float)(v86 * 0.5) )
        {
          v120 = (float)((float)(v146 + v96) * 0.5) - v99;
          goto LABEL_84;
        }
      }
      else
      {
        if ( !((v119 ^ 1) & 1 | (v109.fields.x <= 0.0)) )
        {
          v120 = v146 - v106;
LABEL_83:
          v122 = v150;
          v121 = v152;
LABEL_84:
          v121 = v121 + v120;
          goto LABEL_85;
        }
        if ( (v118 | (v159 < 0.0)) == 1 )
        {
          v122 = v150;
          v121 = v152;
          if ( v117.fields.x < v86 )
          {
            v120 = v96 - v113;
            goto LABEL_84;
          }
        }
        else
        {
          v122 = v150;
          v121 = v152;
        }
      }
LABEL_85:
      v123 = v118 | (v160 > 0.0);
      if ( (float)(v117.fields.y - v109.fields.y) <= v87 )
      {
        if ( !((v123 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v87 * 0.5)))
          || (v118 | (v160 < 0.0)) == 1 && SreenPosition.fields.y < (float)(v87 * 0.5) )
        {
          v124 = (float)(v148 + v145) * 0.5;
          v125 = v144;
          goto LABEL_92;
        }
      }
      else
      {
        if ( !((v123 ^ 1) & 1 | (v109.fields.y <= 0.0)) )
        {
          v124 = v148;
          v125 = v143;
LABEL_92:
          v126 = v124 - v125;
LABEL_93:
          v122 = v122 + v126;
          goto LABEL_94;
        }
        if ( (v118 | (v160 < 0.0)) == 1 && v117.fields.y < v87 )
        {
          v126 = v145 - v114;
          goto LABEL_93;
        }
      }
LABEL_94:
      v127 = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( v127 )
      {
        v193.fields.z = valuea;
        v193.fields.x = v121;
        v193.fields.y = v122;
        UnityEngine_Transform__set_position(v127, v193, 0LL);
        return;
      }
      goto LABEL_130;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndAnother(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  EventDelegate_Callback_o *v14; // x22

  if ( (byte_40F8741 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v6);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7);
    byte_40F8741 = 1;
  }
  backMask = this->fields.backMask;
  v9 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, method, v2, v3, v4);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v14 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v10, v11, v12, v13);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B170D4();
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v9, v14, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  EventDelegate_Callback_o *v14; // x22

  if ( (byte_40F873F & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v6);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7);
    byte_40F873F = 1;
  }
  backMask = this->fields.backMask;
  v9 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, method, v2, v3, v4);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v14 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v10, v11, v12, v13);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B170D4();
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v9, v14, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  float v21; // s0
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusCharaGraphViewer_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v28; // x21
  const MethodInfo *v29; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  EventDelegate_Callback_o *v36; // x22

  if ( (byte_40F873A & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo, v3);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__, v6);
    byte_40F873A = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.camera,
    (System_Int32_array **)main,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_12;
  LODWORD(v21) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
  charaGraphViewer = this->fields.charaGraphViewer;
  this->fields.baseScale = v21;
  if ( !charaGraphViewer )
    goto LABEL_12;
  if ( charaGraphViewer->fields._IsAbleToSwitchDispMode_k__BackingField )
  {
    ServantStatusCharaGraphViewer__SetDispType(charaGraphViewer, 2, v18);
    v23 = this->fields.charaGraphViewer;
    v28 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_B170CC(
                                                                                    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo,
                                                                                    v24,
                                                                                    v25,
                                                                                    v26,
                                                                                    v27);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v28,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      0LL);
    if ( !v23 )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(v23, v28, v29);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v31 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v17, v18, v19, v20);
  EventDelegate_Callback___ctor(
    v31,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v36 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v32, v33, v34, v35);
  EventDelegate_Callback___ctor(
    v36,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_B170D4();
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v31, v36, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2

  backMask = this->fields.backMask;
  if ( !backMask )
    sub_B170D4();
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_22365664(this, 3, v4);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  RandomLimitCountManager_c *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_40F8745 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, mainInfo);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    byte_40F8745 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_40F8215 = 1;
  }
  v6 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v6 = RandomLimitCountManager_TypeInfo;
  }
  if ( v6->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_B170D4();
    if ( !mainInfo->fields.isConvertOverwriteImage )
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRandomLimitCountOwn(0LL) && !mainInfo->fields.isEnableOwnRandomSetting )
        this->fields.manualSelectedIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
      ServantStatusCharaGraphListViewManager__ChangeImageImmediately(this, mainInfo, v7);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  RandomLimitCountManager_c *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_40F8744 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, mainInfo);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    byte_40F8744 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_40F8215 = 1;
  }
  v6 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v6 = RandomLimitCountManager_TypeInfo;
  }
  if ( v6->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_B170D4();
    if ( !mainInfo->fields.isConvertOverwriteImage )
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetRandomLimitCountOwn(0LL) && mainInfo->fields.isEnableOwnRandomSetting )
        this->fields.manualSelectedIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
      ServantStatusCharaGraphListViewManager__ChangeImageImmediately(this, mainInfo, v7);
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
  struct ServantStatusCharaGraphListViewObject_o *v7; // x8
  UnityEngine_Object_o *dragObject; // x20
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x2

  if ( (byte_40F8738 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F8738 = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionObject, 0LL, 0LL) )
    {
      v7 = this->fields.actionObject;
      if ( !v7 )
        goto LABEL_17;
      dragObject = (UnityEngine_Object_o *)v7->fields.dragObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL)
        || !dragObject
        || (Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                   (UnityEngine_GameObject_o *)dragObject,
                                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_17:
        sub_B170D4();
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(Component_srcLineSprite, item, v10);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40F8737 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8737 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F8735 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40F8735 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v21,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_22365664(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F8736 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40F8736 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v19,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetEnableScroll(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *statusItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w20
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v8; // x2
  struct ListViewIndicator_o *indicator; // x0
  __int64 v10; // x10

  if ( (byte_40F8743 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, statusItem);
    sub_B16FFC(&ServantStatusCharaGraphListViewIndicator_TypeInfo, v5);
    byte_40F8743 = 1;
  }
  if ( statusItem )
  {
    if ( statusItem->fields.isCollection )
    {
      v6 = 1;
    }
    else if ( statusItem->fields.isEnableOwnRandomSetting )
    {
      v6 = 0;
    }
    else
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      v6 = !OptionManager__GetRandomLimitCountOwn(0LL);
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, v6, 0LL), (indicator = this->fields.indicator) == 0LL)
      || (v10 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
          *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v10)
      || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v10 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
    {
      sub_B170D4();
    }
    ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
      (ServantStatusCharaGraphListViewIndicator_o *)indicator,
      v6,
      v8);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_22365496(this, mode, v10);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_22365496(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    v6 = 2;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 3;
  }
  ServantStatusCharaGraphListViewManager__RequestListObject_22365664(this, v6, v5);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_22365608(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_22365496(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__SetObjectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40F8734 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, obj);
    byte_40F8734 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  ServantStatusCharaGraphListViewObject__Init(
    (ServantStatusCharaGraphListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetVisibleHighPriorityObject(
        ServantStatusCharaGraphListViewManager_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  ServantStatusDialog_o *servantStatusDialog; // x0

  servantStatusDialog = this->fields.servantStatusDialog;
  if ( !servantStatusDialog )
    sub_B170D4();
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

  if ( (byte_40F8729 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F8729 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F872B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F872B = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B173C8(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F872E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F872E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)current,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v14;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F872D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F872D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v14;
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

  if ( (byte_40F872A & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F872A = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F872C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F872C = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B173C8(v7);
  ServantStatusCharaGraphListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_40F7661 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    byte_40F7661 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__Invoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantStatusCharaGraphListViewManager_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)result, v20);
    goto LABEL_37;
  }
}


void __fastcall ServantStatusCharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F765F & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v1);
    byte_40F765F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantStatusCharaGraphListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantStatusCharaGraphListViewManager___c___ctor(
        ServantStatusCharaGraphListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager___c___OnClickListView_b__46_0(
        ServantStatusCharaGraphListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F7660 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, x);
    byte_40F7660 = 1;
  }
  if ( !x )
    return 0LL;
  v4 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&x->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)x->klass->_2.typeHierarchy[v4 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)x;
  return 0LL;
}