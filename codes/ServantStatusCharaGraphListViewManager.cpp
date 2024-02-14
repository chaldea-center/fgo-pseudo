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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4212DD5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v3);
    byte_4212DD5 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v4, v5);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  RandomLimitCountManager_c *RandomLimitCountOwn; // x0
  int v10; // w22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v12; // x21
  ListViewItem_o *v13; // x8
  __int64 v14; // x11
  int32_t manualSelectedIndex; // w1

  if ( (byte_4212DD4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, mainInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B0D8A4(&OptionManager_TypeInfo, v6);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v7);
    sub_B0D8A4(&ServantStatusCharaGraphListViewItem_TypeInfo, v8);
    byte_4212DD4 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4212D36 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4212D36 = 1;
  }
  RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  }
  if ( RandomLimitCountOwn->static_fields->enableRandomLimitCount )
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
    RandomLimitCountOwn = (RandomLimitCountManager_c *)OptionManager__GetRandomLimitCountOwn(0LL);
    if ( ((unsigned __int8)RandomLimitCountOwn & 1) != 0 )
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
      sub_B0D97C(RandomLimitCountOwn);
    v12 = 0LL;
    while ( (__int64)v12 < itemList->fields._size )
    {
      if ( v12 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  void *charaGraphViewer; // x0
  struct ListViewItem_o *centerItem; // x20
  __int64 v10; // x9
  int32_t SvtId; // w0
  int monitor; // w22
  int32_t v13; // w21
  const MethodInfo *v14; // x2
  int32_t v15; // w23
  bool v16; // zf
  const MethodInfo *v17; // x3
  ServantLimitAddMaster_o *v18; // x23
  const MethodInfo *v19; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  int32_t OverwriteCvId; // w24
  const MethodInfo *v22; // x2
  ListViewItem_c *klass; // x8
  ServantStatusCharaGraphListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212DD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&ServantStatusCharaGraphListViewItem_TypeInfo, v7);
    byte_4212DD6 = 1;
  }
  entity = 0LL;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_55;
  charaGraphViewer = ServantStatusCharaGraphViewer__GetCenterItem(
                       (ServantStatusCharaGraphViewer_o *)charaGraphViewer,
                       method);
  centerItem = (struct ListViewItem_o *)charaGraphViewer;
  if ( !charaGraphViewer )
  {
    centerItem = this->fields.centerItem;
    if ( centerItem )
    {
      v10 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&centerItem->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[v10 - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        v24 = (ServantStatusCharaGraphListViewManager_o *)sub_B0DC70(this->fields.centerItem);
        ServantStatusCharaGraphListViewManager__OnFinishedChangeCharaGraph(v24, v25);
        return;
      }
    }
    if ( !centerItem )
      goto LABEL_55;
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_55;
  SvtId = ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)charaGraphViewer, 0LL);
  monitor = (int)centerItem[1].monitor;
  v13 = SvtId;
  if ( monitor <= 10 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !charaGraphViewer )
      goto LABEL_55;
    monitor = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                (ServantLimitImageMaster_o *)charaGraphViewer,
                v13,
                monitor + 1,
                0LL);
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_55;
  if ( ServantStatusListViewItem__UpdateServantComment(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v13,
         monitor,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
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
    goto LABEL_55;
  if ( ServantStatusListViewItem__IsUpdateServantParameters(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v13,
         v15,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
    ServantStatusDialog__UpdateServantParameters((ServantStatusDialog_o *)charaGraphViewer, v13, v15, v17);
  }
  if ( monitor == 1 )
    monitor = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !charaGraphViewer )
    goto LABEL_55;
  v18 = (ServantLimitAddMaster_o *)charaGraphViewer;
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)charaGraphViewer, v13, 0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
    ServantStatusDialog__UpdateServantDetailName((ServantStatusDialog_o *)charaGraphViewer, monitor, v19);
  }
  if ( !ServantLimitAddMaster__IsOverwriteCv(v18, v13, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !centerItem[1].klass )
    goto LABEL_55;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)charaGraphViewer;
  charaGraphViewer = (void *)ServantStatusListViewItem__get_SvtId(
                               (ServantStatusListViewItem_o *)centerItem[1].klass,
                               0LL);
  if ( !v20 )
    goto LABEL_55;
  charaGraphViewer = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v20,
                       (int32_t)charaGraphViewer,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !charaGraphViewer )
    goto LABEL_55;
  OverwriteCvId = *((_DWORD *)charaGraphViewer + 51);
  if ( ServantLimitAddMaster__TryGetEntity(v18, &entity, v13, monitor, 0LL) )
  {
    charaGraphViewer = entity;
    if ( !entity )
      goto LABEL_55;
    OverwriteCvId = ServantLimitAddEntity__GetOverwriteCvId(entity, OverwriteCvId, 0LL);
  }
  charaGraphViewer = this->fields.servantStatusDialog;
  if ( !charaGraphViewer
    || (ServantStatusDialog__UpdateCv((ServantStatusDialog_o *)charaGraphViewer, OverwriteCvId, v22),
        (klass = centerItem[1].klass) == 0LL) )
  {
LABEL_55:
    sub_B0D97C(charaGraphViewer);
  }
  LODWORD(klass[1]._1.typeMetadataHandle) = monitor;
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
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v20; // x0
  struct System_Int32_array *cardSelectList; // x24
  __int64 v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x26
  int32_t v27; // w25
  int32_t v28; // w22
  signed __int64 v29; // x27
  int32_t v30; // w21
  __int64 v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UIDragDropListViewBackMask_o *Component_srcLineSprite; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  BattleServantConfConponent_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v67; // x24
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  RandomLimitCountManager_c *v75; // x0
  __int64 v76; // x0
  ServantStatusCharaGraphListViewManager_o *v77; // x0
  ServantStatusListViewItem_o *v78; // x1
  const MethodInfo *v79; // x2
  int32_t cardLimitCount; // [xsp+Ch] [xbp-54h]

  if ( (byte_4212DBD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, mainInfo);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&SpringPanel_OnFinished_TypeInfo, v9);
    sub_B0D8A4(&OptionManager_TypeInfo, v10);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v11);
    sub_B0D8A4(&ServantStatusCharaGraphListViewItem_TypeInfo, v12);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v13);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_4212DBD = 1;
  }
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    goto LABEL_54;
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !mainInfo )
    goto LABEL_54;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCardImageLimitCount(
                                            mainInfo,
                                            0LL);
    v20 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_54;
      v22 = *(_QWORD *)&cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, v22, 0LL);
      if ( (int)v22 >= 1 )
      {
        v26 = 0LL;
        v27 = 0;
        v28 = 0;
        v29 = (int)v22;
        while ( 1 )
        {
          if ( v26 >= cardSelectList->max_length )
          {
            v76 = sub_B0D9A8(v23);
            sub_B0D948(v76, 0LL);
          }
          v30 = cardSelectList->m_Items[v26 + 1];
          if ( (v30 & 0x80000000) == 0 )
          {
            v31 = sub_B0D974(ServantStatusCharaGraphListViewItem_TypeInfo, v24, v25);
            ListViewItem___ctor_23700744((ListViewItem_o *)v31, v28, 0LL);
            *(_QWORD *)(v31 + 112) = mainInfo;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v31 + 112),
              (System_Int32_array **)mainInfo,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            *(_DWORD *)(v31 + 120) = v30;
            if ( v30 == cardLimitCount )
            {
              if ( !v31 )
                goto LABEL_54;
              v27 = *(_DWORD *)(v31 + 20);
            }
            debugScaleLabel = (UILabel_o *)ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL);
            if ( v30 == (_DWORD)debugScaleLabel )
            {
              if ( !v31 )
                goto LABEL_54;
              this->fields.manualSelectedIndex = *(_DWORD *)(v31 + 20);
            }
            debugScaleLabel = (UILabel_o *)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_54;
            ++v28;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)debugScaleLabel,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          }
          if ( (__int64)++v26 >= v29 )
            goto LABEL_28;
        }
      }
      goto LABEL_27;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v20 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v38 = sub_B0D974(v20, v17, v18);
  ListViewItem___ctor_23700744((ListViewItem_o *)v38, 0, 0LL);
  *(_QWORD *)(v38 + 112) = mainInfo;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 112), (System_Int32_array **)mainInfo, v39, v40, v41, v42, v43, v44);
  *(_DWORD *)(v38 + 120) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (UILabel_o *)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_54;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)debugScaleLabel,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_27:
  v27 = 0;
LABEL_28:
  debugScaleLabel = (UILabel_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._6_GetDragRoot.method)(
                                   this,
                                   this->klass->vtable._7_ItemDragStart.methodPtr);
  if ( !debugScaleLabel )
    goto LABEL_54;
  Component_srcLineSprite = (struct UIDragDropListViewBackMask_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)debugScaleLabel,
                                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.backMask,
    (System_Int32_array **)Component_srcLineSprite,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  ListViewManager__SortItem((ListViewManager_o *)this, v27, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v52);
  v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v55;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  debugScaleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                           (UnityEngine_Component_o *)debugScaleLabel,
                                                           (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  debugScaleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_UIWidget, 0LL, 0LL);
  if ( ((unsigned __int8)debugScaleLabel & 1) == 0 )
    goto LABEL_38;
  if ( !ComponentInChildren_UIWidget )
LABEL_54:
    sub_B0D97C(debugScaleLabel);
  monitor = (System_Delegate_o *)ComponentInChildren_UIWidget[1].monitor;
  p_monitor = (BattleServantConfConponent_o *)&ComponentInChildren_UIWidget[1].monitor;
  v67 = (SpringPanel_OnFinished_o *)sub_B0D974(SpringPanel_OnFinished_TypeInfo, v63, v64);
  SpringPanel_OnFinished___ctor(
    v67,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
    0LL);
  v68 = (System_Int32_array **)System_Delegate__Combine(monitor, (System_Delegate_o *)v67, 0LL);
  if ( v68 && *v68 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v77 = (ServantStatusCharaGraphListViewManager_o *)sub_B0DC70(v68);
    ServantStatusCharaGraphListViewManager__SetEnableScroll(v77, v78, v79);
    return;
  }
  p_monitor->klass = (BattleServantConfConponent_c *)v68;
  sub_B0D840(p_monitor, v68, v69, v70, v71, v72, v73, v74);
LABEL_38:
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4212D36 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v63);
    byte_4212D36 = 1;
  }
  v75 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v75 = RandomLimitCountManager_TypeInfo;
  }
  if ( v75->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetRandomLimitCountOwn(0LL) )
      this->fields.manualSelectedIndex = v27;
  }
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_4212DBE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4212DBE = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_B0D97C(0LL);
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
    sub_B0D97C(dragBackSprite);
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
    sub_B0D97C(dragBackSprite);
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
    sub_B0D97C(dragBackSprite);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4212DC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_4212DC1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  ServantStatusCharaGraphListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewIndicator_o *indicator; // x8
  __int64 v8; // x11
  int32_t manualSelectedIndex; // w21

  v4 = this;
  if ( (byte_4212DC0 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, mainInfo);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v5);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B0D8A4(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         v6);
    byte_4212DC0 = 1;
  }
  indicator = v4->fields.indicator;
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
  if ( !byte_4212D36 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4212D36 = 1;
  }
  this = (ServantStatusCharaGraphListViewManager_o *)RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)RandomLimitCountManager_TypeInfo;
  }
  if ( LOBYTE(this->fields.itemList->monitor) )
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
        manualSelectedIndex = v4->fields.manualSelectedIndex;
      goto LABEL_22;
    }
LABEL_25:
    sub_B0D97C(this);
  }
LABEL_22:
  if ( (manualSelectedIndex & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v4, manualSelectedIndex, method);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusCharaGraphListViewManager_o *v3; // x19
  struct ListViewIndicator_o *indicator; // x8
  __int64 v5; // x11
  int32_t v6; // w1

  v3 = this;
  if ( (byte_4212DBF & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B0D8A4(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         method);
    byte_4212DBF = 1;
  }
  indicator = v3->fields.indicator;
  if ( !indicator
    || (v5 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
        *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_B0D97C(this);
  }
  v6 = *((_DWORD *)&indicator[2].fields + 1);
  if ( (v6 & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v3, v6, v2);
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
  float v9; // s0
  float v10; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4212DCA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, cam);
    byte_4212DCA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v8 )
  {
    zero = UnityEngine_Vector2__get_zero(0LL);
    v10 = zero.fields.y;
    v9 = zero.fields.x;
  }
  else
  {
    if ( !cam )
      sub_B0D97C(v8);
    v13.fields.x = x;
    v13.fields.y = y;
    v13.fields.z = z;
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Camera__WorldToScreenPoint_40755056(cam, v13, 0LL);
  }
  result.fields.y = v10;
  result.fields.x = v9;
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
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4212DC9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, cam);
    byte_4212DC9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v7 )
  {
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  }
  else
  {
    if ( !cam )
      sub_B0D97C(v7);
    v11.fields.z = 0.0;
    v11.fields.x = x;
    v11.fields.y = y;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Camera__ScreenToWorldPoint_40755080(cam, v11, 0LL);
  }
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v9; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v13; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  EventDelegate_Callback_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  EventDelegate_Callback_o *v23; // x22
  ServantStatusCharaGraphListViewObject_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v2 = this;
  if ( (byte_4212DD0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v6);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v8);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B0D8A4(&SoundManager_TypeInfo, v9);
    byte_4212DD0 = 1;
  }
  actionObject = v2->fields.actionObject;
  if ( !actionObject )
    goto LABEL_27;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL);
  Component_srcLineSprite = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_27;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)dragObject,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                       Component_srcLineSprite,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_27;
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)Component_srcLineSprite,
      0,
      v13);
  }
  charaGraphViewer = v2->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_27;
  this = (ServantStatusCharaGraphListViewManager_o *)charaGraphViewer->fields.viewerListViewManager;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
    (ServantStatusCharaGraphViewerListViewManager_o *)this,
    0,
    v13);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v15);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, v16);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  backMask = v2->fields.backMask;
  v20 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v18, v19);
  EventDelegate_Callback___ctor(
    v20,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v23 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v21, v22);
  EventDelegate_Callback___ctor(
    v23,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v20, v23, 0LL),
        (this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask) == 0LL)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0LL),
        v24 = v2->fields.actionObject,
        v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26),
        System_Action___ctor(v27, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0LL),
        !v24) )
  {
LABEL_27:
    sub_B0D97C(this);
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v24, 6, v27, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v28);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x21
  ServantLimitImageMaster_o *v20; // x21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  struct ServantStatusCharaGraphViewer_o *v23; // x8
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  EventDelegate_Callback_o *v33; // x22
  ServantStatusCharaGraphListViewObject_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x3
  int v39; // s1
  int32_t v42; // w1
  const MethodInfo *v43; // x1
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
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212DCE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&ServantStatusCharaGraphListViewItem_TypeInfo, v9);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v10);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v11);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, v12);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    byte_4212DCE = 1;
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
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)charaGraphViewer;
        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)CenterItem->fields.mainInfo;
        if ( charaGraphViewer )
        {
          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                  (ServantStatusListViewItem_o *)charaGraphViewer,
                                                                  0LL);
          if ( v19 )
          {
            DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v19,
              &entity,
              (int32_t)charaGraphViewer,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( charaGraphViewer )
            {
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)charaGraphViewer,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
              if ( CenterItem->fields.mainInfo )
              {
                v20 = (ServantLimitImageMaster_o *)charaGraphViewer;
                charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                        CenterItem->fields.mainInfo,
                                                                        0LL);
                if ( v20 )
                {
                  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
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
                    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !SoundManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    }
                    SoundManager__playSystemSe(0, 0LL);
                    v23 = this->fields.charaGraphViewer;
                    if ( v23 )
                    {
                      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)v23->fields.viewerListViewManager;
                      if ( charaGraphViewer )
                      {
                        ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
                          (ServantStatusCharaGraphViewerListViewManager_o *)charaGraphViewer,
                          1,
                          v22);
                        actionObject = this->fields.actionObject;
                        if ( actionObject )
                        {
                          dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)UnityEngine_Object__op_Inequality(
                                                                                  dragObject,
                                                                                  0LL,
                                                                                  0LL);
                          Component_srcLineSprite = 0LL;
                          if ( ((unsigned __int8)charaGraphViewer & 1) != 0 )
                          {
                            if ( !dragObject )
                              goto LABEL_49;
                            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                (UnityEngine_GameObject_o *)dragObject,
                                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
                          }
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)UnityEngine_Object__op_Inequality(
                                                                                  Component_srcLineSprite,
                                                                                  0LL,
                                                                                  0LL);
                          if ( ((unsigned __int8)charaGraphViewer & 1) != 0 )
                          {
                            if ( !Component_srcLineSprite )
                              goto LABEL_49;
                            ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
                              (ServantStatusCharaGraphListViewObject_o *)Component_srcLineSprite,
                              CenterItem,
                              v28);
                          }
                          backMask = this->fields.backMask;
                          v30 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v27, v28);
                          EventDelegate_Callback___ctor(
                            v30,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                            0LL);
                          v33 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v31, v32);
                          EventDelegate_Callback___ctor(
                            v33,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                            0LL);
                          if ( backMask )
                          {
                            UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v30, v33, 0LL);
                            v34 = this->fields.actionObject;
                            v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
                            System_Action___ctor(
                              v37,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                              0LL);
                            if ( v34 )
                            {
                              *(UnityEngine_Vector3_o *)(&v39 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v42 = 10;
LABEL_48:
                              ServantStatusCharaGraphListViewObject__Init(
                                v34,
                                v42,
                                v37,
                                0.1,
                                *(UnityEngine_Vector3_o *)&v39,
                                v38);
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
                        ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(charaGraphViewer, v43);
                        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(1, 0LL);
                        v44 = this->fields.backMask;
                        v47 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v45, v46);
                        EventDelegate_Callback___ctor(
                          v47,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v50 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v48, v49);
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
                            v34 = this->fields.actionObject;
                            v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
                            System_Action___ctor(
                              v37,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                              0LL);
                            if ( v34 )
                            {
                              *(UnityEngine_Vector3_o *)(&v39 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v42 = 6;
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
    sub_B0D97C(charaGraphViewer);
  }
  v53 = (ServantStatusCharaGraphViewer_o *)sub_B0DC70(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v53, v54);
}


// local variable allocation has failed, the output may be wrong!
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ServantStatusCharaGraphListViewManager___c_c *v15; // x0
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_0; // x22
  Il2CppObject *v18; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  const MethodInfo *v28; // x3
  ServantStatusCharaGraphListViewItem_array *v29; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x10
  struct ServantStatusCharaGraphListViewObject_o *v39; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x21
  const MethodInfo *v44; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4212DC7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___, v6);
    sub_B0D8A4(&Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__, v7);
    sub_B0D8A4(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo, v8);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, v9);
    sub_B0D8A4(&ServantStatusCharaGraphListViewObject_TypeInfo, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__, v12);
    sub_B0D8A4(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v13);
    byte_4212DC7 = 1;
  }
  itemList = this->fields.itemList;
  v15 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v15 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo,
                                                                                                 obj,
                                                                                                 method);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__47_0,
      v18,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      (const MethodInfo_261A104 *)Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__);
    v19 = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    v19->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v19->__9__47_0,
      (System_Int32_array **)_9__47_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                    v26,
                                                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_30;
  v29 = charaGraphViewer;
  if ( (int)charaGraphViewer->max_length >= 2 )
  {
    if ( !obj )
      goto LABEL_30;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_30;
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_30;
    ServantStatusCharaGraphViewer__Setup(
      (ServantStatusCharaGraphViewer_o *)charaGraphViewer,
      linkItem->fields.index,
      v29,
      v28);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_30;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v31);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_30;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
  if ( obj
    && (v38 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v38) )
  {
    v39 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v38 - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
        ? (struct ServantStatusCharaGraphListViewObject_o *)obj
        : 0LL;
  }
  else
  {
    v39 = 0LL;
  }
  this->fields.actionObject = v39;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.actionObject,
    (System_Int32_array **)v39,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  actionObject = this->fields.actionObject;
  v43 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_30:
    sub_B0D97C(charaGraphViewer);
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(actionObject, 4, v43, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v44);
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
  EventDelegate_Callback_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  EventDelegate_Callback_o *v14; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4212DCC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v3);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_4212DCC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  backMask = this->fields.backMask;
  v11 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v9, v10);
  EventDelegate_Callback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v14 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v12, v13);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    goto LABEL_11;
  UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v11, v14, 0LL);
  actionObject = this->fields.actionObject;
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
    0LL);
  if ( !actionObject
    || (zero = UnityEngine_Vector3__get_zero(0LL),
        ServantStatusCharaGraphListViewObject__Init(
          actionObject,
          5,
          v19,
          0.1,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v20),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
LABEL_11:
    sub_B0D97C(viewerListViewManager);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v9; // x8
  int32_t width; // w21
  int32_t height; // w22
  float z; // s9
  float x; // s14
  float y; // s15
  int32_t touchCount; // w25
  float v16; // s8
  float v17; // s13
  float v18; // s12
  float v19; // s10
  float v20; // s11
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  _BOOL4 IsAbleToPinch; // w24
  float v24; // s15
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
  float Axis; // s9
  UnityEngine_Vector2_o v43; // kr00_8
  UnityEngine_Vector2_o v44; // kr08_8
  ServantStatusCharaGraphListViewManager_o *v45; // x0
  const MethodInfo *v46; // x2
  float v47; // s0
  float v48; // s1
  float v49; // s2
  ServantStatusCharaGraphListViewManager_o *v50; // x0
  const MethodInfo *v51; // x2
  float v52; // s1
  float v53; // s2
  float v54; // s0
  float v55; // s12
  struct UnityEngine_Vector2_o *p_oldTouchPosition; // x25
  float *p_y; // x26
  float v58; // s15
  bool *p_isTouchScale; // x24
  int32_t oldTouchCount; // w8
  _BOOL4 v61; // w24
  _BOOL8 MouseButton; // x0
  float v63; // s0
  float v64; // s1
  float v65; // s2
  ServantStatusCharaGraphListViewManager_o *v66; // x0
  float v67; // s14
  float baseScale; // s8
  float v69; // s0
  _BOOL4 v70; // w8
  int klass; // w8
  int32_t v72; // w1
  float v73; // s8
  float v74; // s9
  float v75; // s10
  float v76; // s14
  float v77; // s13
  float v78; // s8
  float v79; // s9
  float v80; // s10
  ServantStatusCharaGraphListViewManager_o *v81; // x0
  const MethodInfo *v82; // x2
  float v83; // s12
  ServantStatusCharaGraphListViewManager_o *v84; // x0
  const MethodInfo *v85; // x2
  float v86; // s15
  float v87; // s11
  float v88; // s9
  ServantStatusCharaGraphListViewManager_o *v89; // x0
  const MethodInfo *v90; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  UnityEngine_Transform_o *v92; // x21
  float m_XMin; // s8
  float yMax; // s0
  float v95; // s12
  ServantStatusCharaGraphListViewManager_o *v96; // x0
  const MethodInfo *v97; // x2
  UnityEngine_Vector2_o v98; // kr20_8
  UnityEngine_Transform_o *v99; // x21
  float v100; // s10
  float yMin; // s0
  float v102; // s10
  float v103; // s11
  ServantStatusCharaGraphListViewManager_o *v104; // x0
  const MethodInfo *v105; // x2
  UnityEngine_Vector2_o v106; // kr28_8
  int v107; // w8
  int v108; // w9
  float v109; // s0
  float v110; // s8
  float v111; // s12
  int v112; // w9
  float v113; // s0
  float v114; // s1
  float v115; // s0
  float v116; // s9
  float v117; // s10
  float v118; // s11
  int v119; // s0
  float v122; // s3
  UnityEngine_Vector2_o v123; // kr30_8
  UnityEngine_Vector2_o v124; // kr38_8
  float sqrMagnitude; // s0
  float baseTouchSqrMagnitude; // s8
  __int64 v127; // x0
  float v128; // [xsp+0h] [xbp-1B0h]
  float v129; // [xsp+4h] [xbp-1ACh]
  float v130; // [xsp+14h] [xbp-19Ch]
  float v131; // [xsp+18h] [xbp-198h]
  float v132; // [xsp+1Ch] [xbp-194h]
  float v133; // [xsp+1Ch] [xbp-194h]
  float v134; // [xsp+20h] [xbp-190h]
  float v135; // [xsp+20h] [xbp-190h]
  float v136; // [xsp+24h] [xbp-18Ch]
  float v137; // [xsp+24h] [xbp-18Ch]
  float value; // [xsp+28h] [xbp-188h]
  float valuea; // [xsp+28h] [xbp-188h]
  float valueb; // [xsp+28h] [xbp-188h]
  float v141; // [xsp+2Ch] [xbp-184h]
  float v142; // [xsp+2Ch] [xbp-184h]
  float v143; // [xsp+2Ch] [xbp-184h]
  float v144; // [xsp+30h] [xbp-180h]
  float v145; // [xsp+34h] [xbp-17Ch]
  UnityEngine_Touch_o v146; // [xsp+38h] [xbp-178h] BYREF
  UnityEngine_Touch_o v147; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Touch_o v148; // [xsp+C8h] [xbp-E8h] BYREF
  MethodInfo methoda; // [xsp+110h] [xbp-A0h] BYREF
  MethodInfo var48; // [xsp+168h] [xbp-48h] BYREF
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v152; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v153; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v154; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v155; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v184; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v185; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v186; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v187; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v188; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4212DCB & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_9224/*"Mouse ScrollWheel"*/, v4);
    byte_4212DCB = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v148, 0, sizeof(v148));
  memset(&v147, 0, sizeof(v147));
  transform = (UnityEngine_Transform_o *)memset(&v146, 0, sizeof(v146));
  var48.methodPointer = 0LL;
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_130;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !dragObject )
      goto LABEL_130;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
    if ( !transform )
      goto LABEL_130;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(parent, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      v9 = this->fields.actionObject;
      if ( !v9 )
        goto LABEL_130;
      *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v9->fields.dragObjectRect;
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
      value = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0LL);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      v144 = zero.fields.x;
      v145 = zero.fields.y;
      v16 = zero.fields.z;
      v159 = UnityEngine_Vector3__get_zero(0LL);
      v17 = v159.fields.x;
      v18 = v159.fields.y;
      v19 = v159.fields.z;
      v160 = UnityEngine_Vector3__get_zero(0LL);
      v134 = v160.fields.y;
      v136 = v160.fields.x;
      v20 = v160.fields.z;
      UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Vector3__get_zero(0LL);
      transform = (UnityEngine_Transform_o *)this->fields.charaGraphViewer;
      if ( !transform )
        goto LABEL_130;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)transform, v21);
      if ( touchCount )
      {
        this->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          v24 = v16;
          if ( touchCount == 1 )
          {
            transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
            if ( !transform )
              goto LABEL_130;
            if ( LODWORD(transform[1].klass) )
            {
              memmove(&v148, &transform[1].monitor, 0x44u);
              position = UnityEngine_Touch__get_position(&v148, 0LL);
              *(UnityEngine_Vector3_o *)&v27 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v25,
                                                 position,
                                                 this->fields.camera,
                                                 v26);
              if ( !parent )
                goto LABEL_130;
              *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v27,
                                                 0LL);
              if ( this->fields.oldTouchCount == 1 )
              {
                v35 = v32;
                v36 = v33;
                v37 = v34;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v30,
                                  this->fields.oldTouchPosition,
                                  this->fields.camera,
                                  v31);
                v162 = UnityEngine_Transform__InverseTransformPoint(
                         (UnityEngine_Transform_o *)parent,
                         WorldPosition,
                         0LL);
                v144 = v35 - v162.fields.x;
                v145 = v36 - v162.fields.y;
                v24 = v37 - v162.fields.z;
              }
              else
              {
                this->fields.oldTouchCount = 1;
              }
              v40 = 0;
              v61 = 0;
              this->fields.oldTouchPosition = UnityEngine_Touch__get_position(&v148, 0LL);
              this->fields.isTouchScale = 0;
              Axis = 0.0;
              goto LABEL_58;
            }
LABEL_131:
            v127 = sub_B0D9A8(transform);
            sub_B0D948(v127, 0LL);
          }
          oldTouchCount = this->fields.oldTouchCount;
          v61 = 0;
          this->fields.oldTouchCount = 0;
          this->fields.isTouchScale = 0;
          Axis = 0.0;
          v40 = oldTouchCount > 0;
LABEL_58:
          v67 = 0.0;
          goto LABEL_59;
        }
        v132 = z;
        Axis = 0.0;
        v24 = v16;
        if ( !IsAbleToPinch )
        {
          v40 = 0;
          v61 = 0;
          goto LABEL_58;
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
        if ( !transform )
          goto LABEL_130;
        if ( !LODWORD(transform[1].klass) )
          goto LABEL_131;
        memmove(&v147, &transform[1].monitor, 0x44u);
        transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
        if ( !transform )
          goto LABEL_130;
        if ( LODWORD(transform[1].klass) <= 1 )
          goto LABEL_131;
        memmove(&v146, (char *)&transform[4].klass + 4, 0x44u);
        v43 = UnityEngine_Touch__get_position(&v147, 0LL);
        v44 = UnityEngine_Touch__get_position(&v146, 0LL);
        v152.fields.x = (float)(v43.fields.x + v44.fields.x) * 0.5;
        v152.fields.y = (float)(v43.fields.y + v44.fields.y) * 0.5;
        *(UnityEngine_Vector3_o *)&v47 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v45,
                                           v152,
                                           this->fields.camera,
                                           v46);
        if ( !parent )
          goto LABEL_130;
        v20 = v49;
        v134 = v48;
        v136 = v47;
        *(UnityEngine_Vector3_o *)(&v52 - 1) = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v47,
                                                 0LL);
        v17 = v54;
        v141 = v52;
        if ( this->fields.oldTouchCount == 2 )
        {
          v55 = v52;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          v58 = v53;
          v163 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v50,
                   this->fields.oldTouchPosition,
                   this->fields.camera,
                   v51);
          v164 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v163, 0LL);
          v144 = v17 - v164.fields.x;
          v145 = v55 - v164.fields.y;
          v19 = v58;
          v24 = v58 - v164.fields.z;
          p_isTouchScale = &this->fields.isTouchScale;
        }
        else
        {
          v19 = v53;
          p_isTouchScale = &this->fields.isTouchScale;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          this->fields.isTouchScale = 0;
          this->fields.oldTouchCount = 2;
        }
        p_oldTouchPosition->fields.x = (float)(v43.fields.x + v44.fields.x) * 0.5;
        *p_y = (float)(v43.fields.y + v44.fields.y) * 0.5;
        v123 = UnityEngine_Touch__get_position(&v147, 0LL);
        v124 = UnityEngine_Touch__get_position(&v146, 0LL);
        v155.fields.x = v123.fields.x - v124.fields.x;
        v155.fields.y = v123.fields.y - v124.fields.y;
        var48.methodPointer = (Il2CppMethodPointer)v155;
        sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v155, &var48);
        v67 = sqrMagnitude;
        if ( !*p_isTouchScale )
        {
          v40 = 0;
          v61 = 0;
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
        v40 = 0;
        v18 = v141;
        Axis = (float)(sqrtf(v67 / baseTouchSqrMagnitude) * this->fields.baseTouchScale) - value;
      }
      else
      {
        v38 = this->fields.oldTouchCount;
        v39 = 0;
        this->fields.isTouchScale = 0;
        this->fields.oldTouchCount = 0;
        v40 = v38 > 0;
        if ( x >= 0.0 )
        {
          v41 = UnityEngine_Screen__get_width(0LL);
          v39 = 0;
          if ( y >= 0.0 && x <= (float)v41 )
            v39 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        v132 = z;
        if ( v39 && IsAbleToPinch )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9224/*"Mouse ScrollWheel"*/, 0LL);
        else
          Axis = 0.0;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v153.fields.x = x;
          v153.fields.y = y;
          *(UnityEngine_Vector3_o *)&v63 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v153,
                                             this->fields.camera,
                                             v22);
          if ( !parent )
            goto LABEL_130;
          v20 = v65;
          v134 = v64;
          v136 = v63;
          v165 = UnityEngine_Transform__InverseTransformPoint(
                   (UnityEngine_Transform_o *)parent,
                   *(UnityEngine_Vector3_o *)&v63,
                   0LL);
          v17 = v165.fields.x;
          v18 = v165.fields.y;
          v19 = v165.fields.z;
          if ( this->fields.isOldMousePosition )
          {
            v166 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v66,
                     this->fields.oldMousePosition,
                     this->fields.camera,
                     v22);
            v167 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v166, 0LL);
            v144 = v17 - v167.fields.x;
            v145 = v18 - v167.fields.y;
            v16 = v19 - v167.fields.z;
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
        v67 = 0.0;
        v24 = v16;
      }
      if ( Axis == 0.0 )
      {
        v61 = 0;
      }
      else
      {
        baseScale = this->fields.baseScale;
        v69 = value + Axis;
        if ( Axis >= 0.0 || v69 >= baseScale )
        {
          v70 = Axis > 0.0 && v69 > (float)(baseScale * 3.0);
          if ( Axis > 0.0 && v69 > (float)(baseScale * 3.0) )
            baseScale = baseScale * 3.0;
          else
            baseScale = value + Axis;
        }
        else
        {
          v70 = 1;
        }
        v61 = v70;
        if ( value != baseScale )
        {
          if ( this->fields.oldTouchCount > 0 || this->fields.isOldMousePosition )
          {
            valueb = v19;
            v143 = Axis;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v179.fields.y = v134;
            v179.fields.x = v136;
            v179.fields.z = v20;
            v180 = UnityEngine_Transform__InverseTransformPoint(transform, v179, 0LL);
            v116 = v180.fields.x;
            v117 = v180.fields.y;
            v118 = v180.fields.z;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v181.fields.z = v132;
            v181.fields.x = baseScale;
            v181.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(transform, v181, 0LL);
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v182.fields.x = v116;
            v182.fields.y = v117;
            v182.fields.z = v118;
            *(UnityEngine_Vector3_o *)&v119 = UnityEngine_Transform__TransformPoint(transform, v182, 0LL);
            if ( !parent )
              goto LABEL_130;
            v183 = UnityEngine_Transform__InverseTransformPoint(
                     (UnityEngine_Transform_o *)parent,
                     *(UnityEngine_Vector3_o *)&v119,
                     0LL);
            v122 = valueb;
            Axis = v143;
            value = baseScale;
            v24 = v24 + (float)(v122 - v183.fields.z);
            v144 = v144 + (float)(v17 - v183.fields.x);
            v145 = v145 + (float)(v18 - v183.fields.y);
          }
          else
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v184.fields.z = v132;
            v184.fields.x = baseScale;
            v184.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(transform, v184, 0LL);
            value = baseScale;
          }
        }
      }
LABEL_59:
      transform = (UnityEngine_Transform_o *)this->fields.charaGraphViewer;
      if ( !transform )
        goto LABEL_130;
      if ( BYTE4(transform[2].klass) )
      {
        klass = (int)transform[2].klass;
        if ( value == this->fields.baseScale )
        {
          if ( klass == 1 )
          {
            v72 = 2;
LABEL_66:
            ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)transform, v72, v22);
          }
        }
        else if ( klass == 2 )
        {
          v72 = 1;
          goto LABEL_66;
        }
      }
      if ( v61 && v67 > 0.0 && this->fields.isTouchScale )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
        if ( !transform )
          goto LABEL_130;
        LODWORD(this->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
        this->fields.baseTouchSqrMagnitude = v67;
      }
      v142 = Axis;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v73 = localPosition.fields.x;
      v74 = localPosition.fields.y;
      v75 = localPosition.fields.z;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v169.fields.z = v24 + v75;
      v169.fields.x = v144 + v73;
      v169.fields.y = v145 + v74;
      UnityEngine_Transform__set_localPosition(transform, v169, 0LL);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v76 = (float)width;
      v77 = (float)height;
      v170 = UnityEngine_Transform__get_position(transform, 0LL);
      v78 = v170.fields.x;
      v79 = v170.fields.y;
      v80 = v170.fields.z;
      v154 = UnityEngine_Vector2__get_zero(0LL);
      v171 = ServantStatusCharaGraphListViewManager__GetWorldPosition(v81, v154, this->fields.camera, v82);
      v131 = v171.fields.x;
      v83 = v171.fields.y;
      v171.fields.x = (float)width;
      v171.fields.y = (float)height;
      v172 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
               v84,
               *(UnityEngine_Vector2_o *)&v171.fields.x,
               this->fields.camera,
               v85);
      v86 = v172.fields.x;
      v87 = v172.fields.y;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v133 = v83;
      v135 = v79;
      v137 = v78;
      v173 = UnityEngine_Transform__get_position(transform, 0LL);
      v88 = v173.fields.x;
      v129 = v173.fields.y;
      SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v89, v173, this->fields.camera, v90);
      v92 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      v186.fields.m_XMin = UnityEngine_Rect__get_xMin(v185, &methoda);
      m_XMin = v186.fields.m_XMin;
      yMax = UnityEngine_Rect__get_yMax(v186, &methoda);
      if ( !v92 )
        goto LABEL_130;
      v174.fields.y = yMax;
      v174.fields.z = 0.0;
      v174.fields.x = m_XMin;
      v130 = v87;
      valuea = v80;
      v175 = UnityEngine_Transform__TransformPoint(v92, v174, 0LL);
      v95 = v175.fields.x;
      v128 = v175.fields.y;
      v98 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v96, v175, this->fields.camera, v97);
      v99 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      v188.fields.m_XMin = UnityEngine_Rect__get_xMax(v187, &methoda);
      v100 = v188.fields.m_XMin;
      yMin = UnityEngine_Rect__get_yMin(v188, &methoda);
      if ( !v99 )
LABEL_130:
        sub_B0D97C(transform);
      v176.fields.y = yMin;
      v176.fields.z = 0.0;
      v176.fields.x = v100;
      v177 = UnityEngine_Transform__TransformPoint(v99, v176, 0LL);
      v102 = v177.fields.x;
      v103 = v177.fields.y;
      v106 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v104, v177, this->fields.camera, v105);
      v107 = v142 < 0.0 || v40;
      v108 = v107 | (v144 > 0.0);
      if ( (float)(v106.fields.x - v98.fields.x) <= v76 )
      {
        if ( !((v108 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v76 * 0.5))) )
        {
          v109 = (float)((float)(v131 + v86) * 0.5) - v88;
          goto LABEL_83;
        }
        v111 = v135;
        v110 = v137;
        if ( (v107 | (v144 < 0.0)) == 1 && SreenPosition.fields.x < (float)(v76 * 0.5) )
        {
          v109 = (float)((float)(v131 + v86) * 0.5) - v88;
          goto LABEL_84;
        }
      }
      else
      {
        if ( !((v108 ^ 1) & 1 | (v98.fields.x <= 0.0)) )
        {
          v109 = v131 - v95;
LABEL_83:
          v111 = v135;
          v110 = v137;
LABEL_84:
          v110 = v110 + v109;
          goto LABEL_85;
        }
        if ( (v107 | (v144 < 0.0)) == 1 )
        {
          v111 = v135;
          v110 = v137;
          if ( v106.fields.x < v76 )
          {
            v109 = v86 - v102;
            goto LABEL_84;
          }
        }
        else
        {
          v111 = v135;
          v110 = v137;
        }
      }
LABEL_85:
      v112 = v107 | (v145 > 0.0);
      if ( (float)(v106.fields.y - v98.fields.y) <= v77 )
      {
        if ( !((v112 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v77 * 0.5)))
          || (v107 | (v145 < 0.0)) == 1 && SreenPosition.fields.y < (float)(v77 * 0.5) )
        {
          v113 = (float)(v133 + v130) * 0.5;
          v114 = v129;
          goto LABEL_92;
        }
      }
      else
      {
        if ( !((v112 ^ 1) & 1 | (v98.fields.y <= 0.0)) )
        {
          v113 = v133;
          v114 = v128;
LABEL_92:
          v115 = v113 - v114;
LABEL_93:
          v111 = v111 + v115;
          goto LABEL_94;
        }
        if ( (v107 | (v145 < 0.0)) == 1 && v106.fields.y < v77 )
        {
          v115 = v130 - v103;
          goto LABEL_93;
        }
      }
LABEL_94:
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( transform )
      {
        v178.fields.z = valuea;
        v178.fields.x = v110;
        v178.fields.y = v111;
        UnityEngine_Transform__set_position(transform, v178, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  EventDelegate_Callback_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_4212DCF & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v4);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    byte_4212DCF = 1;
  }
  backMask = this->fields.backMask;
  v7 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, method, v2);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v10 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v8, v9);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B0D97C(v11);
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

  if ( (byte_4212DCD & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v4);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    byte_4212DCD = 1;
  }
  backMask = this->fields.backMask;
  v7 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, method, v2);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v10 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v8, v9);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B0D97C(v11);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  float v18; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v22; // x21
  const MethodInfo *v23; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  EventDelegate_Callback_o *v28; // x22

  if ( (byte_4212DC8 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo, v3);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v4);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v5);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__, v6);
    byte_4212DC8 = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_B0D840(
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
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v18;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].klass) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v17);
    charaGraphViewer = this->fields.charaGraphViewer;
    v22 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_B0D974(
                                                                                    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo,
                                                                                    v20,
                                                                                    v21);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v22,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      0LL);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v22, v23);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v25 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v16, v17);
  EventDelegate_Callback___ctor(
    v25,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v28 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v26, v27);
  EventDelegate_Callback___ctor(
    v28,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_B0D97C(dragObject);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v25, v28, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2

  backMask = this->fields.backMask;
  if ( !backMask )
    sub_B0D97C(0LL);
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_21350884(this, 3, v4);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  RandomLimitCountManager_c *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4212DD3 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, mainInfo);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v5);
    byte_4212DD3 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4212D36 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4212D36 = 1;
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
      sub_B0D97C(v6);
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

  if ( (byte_4212DD2 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, mainInfo);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v5);
    byte_4212DD2 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4212D36 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, mainInfo);
    byte_4212D36 = 1;
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
      sub_B0D97C(v6);
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct ServantStatusCharaGraphListViewObject_o *v8; // x8
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4212DC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4212DC6 = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(actionObject, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      v8 = this->fields.actionObject;
      if ( !v8 )
        goto LABEL_17;
      dragObject = (UnityEngine_Object_o *)v8->fields.dragObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0
        || !dragObject
        || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)dragObject,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_17:
        sub_B0D97C(Component_srcLineSprite);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_srcLineSprite,
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4212DC5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212DC5 = 1;
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
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4212DC3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__, v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4212DC3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v19,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_21350884(
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4212DC4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4212DC4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v17,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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
  __int64 v9; // x10

  if ( (byte_4212DD1 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, statusItem);
    sub_B0D8A4(&ServantStatusCharaGraphListViewIndicator_TypeInfo, v5);
    byte_4212DD1 = 1;
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
      || (UnityEngine_Behaviour__set_enabled(scrollView, v6, 0LL),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.indicator) == 0LL)
      || (v9 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
          *(&scrollView->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (ServantStatusCharaGraphListViewIndicator_c *)scrollView->klass->_2.typeHierarchy[v9 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
    {
      sub_B0D97C(scrollView);
    }
    ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
      (ServantStatusCharaGraphListViewIndicator_o *)scrollView,
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_21350716(this, mode, v10);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_21350716(
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
  ServantStatusCharaGraphListViewManager__RequestListObject_21350884(this, v6, v5);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_21350828(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_21350716(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__SetObjectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_4212DC2 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B0D8A4(&ServantStatusCharaGraphListViewObject_TypeInfo, obj);
    byte_4212DC2 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  initMode = v5->fields.initMode;
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
    sub_B0D97C(0LL);
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

  if ( (byte_4212DB7 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4212DB7 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4212DB9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4212DB9 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B0DC70(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4212DBC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4212DBC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)current,
                                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4212DBB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4212DBB = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4212DB8 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4212DB8 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4212DBA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4212DBA = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B0DC70(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  if ( (byte_4212264 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    byte_4212264 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__Invoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantStatusCharaGraphListViewManager_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)result, v21);
    goto LABEL_37;
  }
}


void __fastcall ServantStatusCharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212262 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v1);
    byte_4212262 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantStatusCharaGraphListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v4; // x10

  if ( (byte_4212263 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusCharaGraphListViewItem_TypeInfo, x);
    byte_4212263 = 1;
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