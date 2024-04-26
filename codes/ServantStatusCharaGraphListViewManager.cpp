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
  System_Action_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_434FF2E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    byte_434FF2E = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  RandomLimitCountManager_c *v5; // x0
  _BOOL4 isEnableOwnRandomSetting; // w22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x21
  ListViewItem_o *v9; // x8
  __int64 v10; // x11

  v3 = mainInfo;
  if ( (byte_434FF2D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434FF2D = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    if ( !v3 )
      goto LABEL_24;
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
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_24:
      sub_B7076C(v5, mainInfo);
    v8 = 0LL;
    while ( (__int64)v8 < itemList->fields._size )
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( v9 )
      {
        v10 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (ServantStatusCharaGraphListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo
          && LODWORD(v9[1].monitor) == v3->fields.cardLimitCount )
        {
          ListViewManager__MoveCenterItem((ListViewManager_o *)this, v8, 0, 0, 0.0, 0LL);
          if ( !isEnableOwnRandomSetting )
            this->fields.manualSelectedIndex = v8;
          return;
        }
      }
      itemList = this->fields.itemList;
      ++v8;
      if ( !itemList )
        goto LABEL_24;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__ChangeServantInfo(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  void *charaGraphViewer; // x0
  struct ListViewItem_o *centerItem; // x20
  __int64 v5; // x9
  int32_t SvtId; // w0
  int monitor; // w22
  int32_t v8; // w21
  const MethodInfo *v9; // x2
  int32_t v10; // w23
  bool v11; // zf
  const MethodInfo *v12; // x2
  ServantLimitAddMaster_o *v13; // x23
  const MethodInfo *v14; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x24
  int32_t OverwriteCvId; // w24
  const MethodInfo *v17; // x2
  ListViewItem_c *klass; // x8
  ServantStatusCharaGraphListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434FF2F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434FF2F = 1;
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
      method = (const MethodInfo *)ServantStatusCharaGraphListViewItem_TypeInfo;
      v5 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&centerItem->klass->_2.bitflags2 + 1) < (unsigned int)v5
        || (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        v19 = (ServantStatusCharaGraphListViewManager_o *)sub_B70A60(this->fields.centerItem);
        ServantStatusCharaGraphListViewManager__OnFinishedChangeCharaGraph(v19, v20);
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
  v8 = SvtId;
  if ( monitor <= 10 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !charaGraphViewer )
      goto LABEL_55;
    monitor = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                (ServantLimitImageMaster_o *)charaGraphViewer,
                v8,
                monitor + 1,
                0LL);
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_55;
  if ( ServantStatusListViewItem__UpdateServantComment(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v8,
         monitor,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
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
    goto LABEL_55;
  if ( ServantStatusListViewItem__IsUpdateServantParameters(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v8,
         v10,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
    ServantStatusDialog__UpdateServantParameters((ServantStatusDialog_o *)charaGraphViewer, v10, v12);
  }
  if ( monitor == 1 )
    monitor = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !charaGraphViewer )
    goto LABEL_55;
  v13 = (ServantLimitAddMaster_o *)charaGraphViewer;
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)charaGraphViewer, v8, 0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
    ServantStatusDialog__UpdateServantDetailName((ServantStatusDialog_o *)charaGraphViewer, monitor, v14);
  }
  if ( !ServantLimitAddMaster__IsOverwriteCv(v13, v8, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !centerItem[1].klass )
    goto LABEL_55;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)charaGraphViewer;
  charaGraphViewer = (void *)ServantStatusListViewItem__get_SvtId(
                               (ServantStatusListViewItem_o *)centerItem[1].klass,
                               0LL);
  if ( !v15 )
    goto LABEL_55;
  charaGraphViewer = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v15,
                       (int32_t)charaGraphViewer,
                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !charaGraphViewer )
    goto LABEL_55;
  OverwriteCvId = *((_DWORD *)charaGraphViewer + 51);
  if ( ServantLimitAddMaster__TryGetEntity(v13, &entity, v8, monitor, 0LL) )
  {
    charaGraphViewer = entity;
    if ( !entity )
      goto LABEL_55;
    OverwriteCvId = ServantLimitAddEntity__GetOverwriteCvId(entity, OverwriteCvId, 0LL);
  }
  charaGraphViewer = this->fields.servantStatusDialog;
  if ( !charaGraphViewer
    || (ServantStatusDialog__UpdateCv((ServantStatusDialog_o *)charaGraphViewer, OverwriteCvId, v17),
        (klass = centerItem[1].klass) == 0LL) )
  {
LABEL_55:
    sub_B7076C(charaGraphViewer, method);
  }
  LODWORD(klass[1]._1.interopData) = monitor;
}


void __fastcall ServantStatusCharaGraphListViewManager__CreateList(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UILabel_o *debugScaleLabel; // x0
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v7; // x0
  struct System_Int32_array *cardSelectList; // x24
  __int64 v9; // x23
  __int64 v10; // x0
  unsigned __int64 v11; // x26
  int32_t v12; // w25
  int32_t v13; // w22
  signed __int64 v14; // x27
  int32_t v15; // w21
  __int64 v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UIDragDropListViewBackMask_o *Component_srcLineSprite; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  System_Action_o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x22
  BattleServantConfConponent_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v48; // x24
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  RandomLimitCountManager_c *v56; // x0
  __int64 v57; // x0
  ServantStatusCharaGraphListViewManager_o *v58; // x0
  ServantStatusListViewItem_o *v59; // x1
  const MethodInfo *v60; // x2
  int32_t cardLimitCount; // [xsp+Ch] [xbp-54h]

  if ( (byte_434FF16 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SpringPanel_OnFinished_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FF16 = 1;
  }
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    goto LABEL_50;
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !mainInfo )
    goto LABEL_50;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCardImageLimitCount(
                                            mainInfo,
                                            0LL);
    v7 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_50;
      v9 = *(_QWORD *)&cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, v9, 0LL);
      if ( (int)v9 >= 1 )
      {
        v11 = 0LL;
        v12 = 0;
        v13 = 0;
        v14 = (int)v9;
        while ( 1 )
        {
          if ( v11 >= cardSelectList->max_length )
          {
            v57 = sub_B70798(v10);
            sub_B70738(v57, 0LL);
          }
          v15 = cardSelectList->m_Items[v11 + 1];
          if ( (v15 & 0x80000000) == 0 )
          {
            v16 = sub_B70764(ServantStatusCharaGraphListViewItem_TypeInfo);
            ListViewItem___ctor_23967088((ListViewItem_o *)v16, v13, 0LL);
            *(_QWORD *)(v16 + 112) = mainInfo;
            sub_B70630(
              (BattleServantConfConponent_o *)(v16 + 112),
              (System_Int32_array **)mainInfo,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
            *(_DWORD *)(v16 + 120) = v15;
            if ( v15 == cardLimitCount )
            {
              if ( !v16 )
                goto LABEL_50;
              v12 = *(_DWORD *)(v16 + 20);
            }
            debugScaleLabel = (UILabel_o *)ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL);
            if ( v15 == (_DWORD)debugScaleLabel )
            {
              if ( !v16 )
                goto LABEL_50;
              this->fields.manualSelectedIndex = *(_DWORD *)(v16 + 20);
            }
            debugScaleLabel = (UILabel_o *)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_50;
            ++v13;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)debugScaleLabel,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          }
          if ( (__int64)++v11 >= v14 )
            goto LABEL_28;
        }
      }
      goto LABEL_27;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v7 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v23 = sub_B70764(v7);
  ListViewItem___ctor_23967088((ListViewItem_o *)v23, 0, 0LL);
  *(_QWORD *)(v23 + 112) = mainInfo;
  sub_B70630((BattleServantConfConponent_o *)(v23 + 112), (System_Int32_array **)mainInfo, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v23 + 120) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (UILabel_o *)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_50;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)debugScaleLabel,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_27:
  v12 = 0;
LABEL_28:
  debugScaleLabel = (UILabel_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._6_GetDragRoot.method)(
                                   this,
                                   this->klass->vtable._7_ItemDragStart.methodPtr);
  if ( !debugScaleLabel )
    goto LABEL_50;
  Component_srcLineSprite = (struct UIDragDropListViewBackMask_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)debugScaleLabel,
                                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.backMask,
    (System_Int32_array **)Component_srcLineSprite,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewManager__SortItem((ListViewManager_o *)this, v12, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v37);
  v38 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v38;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  debugScaleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_50;
  ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                           (UnityEngine_Component_o *)debugScaleLabel,
                                                           (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  debugScaleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_UIWidget, 0LL, 0LL);
  if ( ((unsigned __int8)debugScaleLabel & 1) == 0 )
    goto LABEL_38;
  if ( !ComponentInChildren_UIWidget )
LABEL_50:
    sub_B7076C(debugScaleLabel, mainInfo);
  monitor = (System_Delegate_o *)ComponentInChildren_UIWidget[1].monitor;
  p_monitor = (BattleServantConfConponent_o *)&ComponentInChildren_UIWidget[1].monitor;
  v48 = (SpringPanel_OnFinished_o *)sub_B70764(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(
    v48,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
    0LL);
  v49 = (System_Int32_array **)System_Delegate__Combine(monitor, (System_Delegate_o *)v48, 0LL);
  if ( v49 && *v49 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v58 = (ServantStatusCharaGraphListViewManager_o *)sub_B70A60(v49);
    ServantStatusCharaGraphListViewManager__SetEnableScroll(v58, v59, v60);
    return;
  }
  p_monitor->klass = (BattleServantConfConponent_c *)v49;
  sub_B70630(p_monitor, v49, v50, v51, v52, v53, v54, v55);
LABEL_38:
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v56 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v56 = RandomLimitCountManager_TypeInfo;
  }
  if ( v56->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
    this->fields.manualSelectedIndex = v12;
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_434FF17 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FF17 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_B7076C(0LL, v3);
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
    sub_B7076C(dragBackSprite, method);
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
    sub_B7076C(dragBackSprite, method);
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
    sub_B7076C(dragBackSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0LL);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetItem(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_434FF1A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434FF1A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetManualSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v4; // x19
  struct ListViewIndicator_o *indicator; // x8
  __int64 v6; // x11
  int32_t manualSelectedIndex; // w21

  v4 = this;
  if ( (byte_434FF19 & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B70694(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_434FF19 = 1;
  }
  indicator = v4->fields.indicator;
  if ( !indicator )
    goto LABEL_21;
  v6 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1);
  if ( *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    goto LABEL_21;
  }
  manualSelectedIndex = *((_DWORD *)&indicator[2].fields + 1);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
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
        manualSelectedIndex = v4->fields.manualSelectedIndex;
      goto LABEL_18;
    }
LABEL_21:
    sub_B7076C(this, mainInfo);
  }
LABEL_18:
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
  if ( (byte_434FF18 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B70694(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_434FF18 = 1;
  }
  indicator = v3->fields.indicator;
  if ( !indicator
    || (v5 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
        *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_B7076C(this, method);
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
  __int64 v9; // x1
  float v10; // s0
  float v11; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_434FF23 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF23 = 1;
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
    v11 = zero.fields.y;
    v10 = zero.fields.x;
  }
  else
  {
    if ( !cam )
      sub_B7076C(v8, v9);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__WorldToScreenPoint_41062476(cam, v14, 0LL);
  }
  result.fields.y = v11;
  result.fields.x = v10;
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
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_434FF22 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF22 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v7 )
  {
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  }
  else
  {
    if ( !cam )
      sub_B7076C(v7, v8);
    v12.fields.z = 0.0;
    v12.fields.x = x;
    v12.fields.y = y;
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Camera__ScreenToWorldPoint_41062500(cam, v12, 0LL);
  }
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v9;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickExViewer(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x19
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v6; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  const MethodInfo *v8; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v10; // x21
  EventDelegate_Callback_o *v11; // x22
  ServantStatusCharaGraphListViewObject_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v2 = this;
  if ( (byte_434FF29 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B70694(&SoundManager_TypeInfo);
    byte_434FF29 = 1;
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
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
      v6);
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
    v6);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v8);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  backMask = v2->fields.backMask;
  v10 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v11 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v11,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v10, v11, 0LL),
        (this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask) == 0LL)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0LL),
        v12 = v2->fields.actionObject,
        v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0LL),
        !v12) )
  {
LABEL_27:
    sub_B7076C(this, method);
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v12, 6, v13, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusCharaGraphListViewItem_o *CenterItem; // x20
  __int64 v5; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  ServantLimitImageMaster_o *v7; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct ServantStatusCharaGraphViewer_o *v10; // x8
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v14; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v16; // x21
  EventDelegate_Callback_o *v17; // x22
  ServantStatusCharaGraphListViewObject_o *v18; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x3
  int v21; // s1
  int32_t v24; // w1
  UIDragDropListViewBackMask_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  EventDelegate_Callback_o *v27; // x22
  ServantStatusCharaGraphViewer_o *v28; // x0
  const MethodInfo *v29; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434FF27 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FF27 = 1;
  }
  entity = 0LL;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_49;
  CenterItem = ServantStatusCharaGraphViewer__GetCenterItem(charaGraphViewer, method);
  if ( CenterItem
    || (CenterItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.centerItem) == 0LL
    || (v5 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&CenterItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
    && (ServantStatusCharaGraphListViewItem_c *)CenterItem->klass->_2.typeHierarchy[v5 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    entity = 0LL;
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)charaGraphViewer;
        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)CenterItem->fields.mainInfo;
        if ( charaGraphViewer )
        {
          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                  (ServantStatusListViewItem_o *)charaGraphViewer,
                                                                  0LL);
          if ( v6 )
          {
            DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v6,
              &entity,
              (int32_t)charaGraphViewer,
              (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( charaGraphViewer )
            {
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)charaGraphViewer,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
              if ( CenterItem->fields.mainInfo )
              {
                v7 = (ServantLimitImageMaster_o *)charaGraphViewer;
                charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                        CenterItem->fields.mainInfo,
                                                                        0LL);
                if ( v7 )
                {
                  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
                          v7,
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
                    v10 = this->fields.charaGraphViewer;
                    if ( v10 )
                    {
                      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)v10->fields.viewerListViewManager;
                      if ( charaGraphViewer )
                      {
                        ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
                          (ServantStatusCharaGraphViewerListViewManager_o *)charaGraphViewer,
                          1,
                          v9);
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
                                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
                              v14);
                          }
                          backMask = this->fields.backMask;
                          v16 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
                          EventDelegate_Callback___ctor(
                            v16,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                            0LL);
                          v17 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
                          EventDelegate_Callback___ctor(
                            v17,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                            0LL);
                          if ( backMask )
                          {
                            UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v16, v17, 0LL);
                            v18 = this->fields.actionObject;
                            v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                            System_Action___ctor(
                              v19,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                              0LL);
                            if ( v18 )
                            {
                              *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v24 = 10;
LABEL_48:
                              ServantStatusCharaGraphListViewObject__Init(
                                v18,
                                v24,
                                v19,
                                0.1,
                                *(UnityEngine_Vector3_o *)&v21,
                                v20);
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
                        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(1, 0LL);
                        v25 = this->fields.backMask;
                        v26 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v26,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v27 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v27,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0LL);
                        if ( v25 )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(v25, v26, v27, 0LL);
                          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)this->fields.backMask;
                          if ( charaGraphViewer )
                          {
                            UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
                            v18 = this->fields.actionObject;
                            v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                            System_Action___ctor(
                              v19,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                              0LL);
                            if ( v18 )
                            {
                              *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v24 = 6;
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
    sub_B7076C(charaGraphViewer, method);
  }
  v28 = (ServantStatusCharaGraphViewer_o *)sub_B70A60(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ServantStatusCharaGraphListViewManager___c_c *v6; // x0
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_0; // x22
  Il2CppObject *v9; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  ServantStatusCharaGraphListViewItem_array *v21; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v23; // x2
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x10
  struct ServantStatusCharaGraphListViewObject_o *v31; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FF20 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
    sub_B70694(&Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__);
    sub_B70694(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__);
    sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__);
    sub_B70694(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_434FF20 = 1;
  }
  itemList = this->fields.itemList;
  v6 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v6 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__47_0,
      v9,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__);
    v10 = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    v10->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->__9__47_0,
      (System_Int32_array **)_9__47_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                    v17,
                                                                    (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_30;
  v21 = charaGraphViewer;
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
      v21,
      v20);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_30;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v23);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_30;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
  if ( obj
    && (v30 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v30) )
  {
    v31 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v30 - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
        ? (struct ServantStatusCharaGraphListViewObject_o *)obj
        : 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  this->fields.actionObject = v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.actionObject,
    (System_Int32_array **)v31,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  actionObject = this->fields.actionObject;
  v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_30:
    sub_B7076C(charaGraphViewer, v19);
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(actionObject, 4, v33, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  const MethodInfo *v7; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FF25 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FF25 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v5 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    goto LABEL_11;
  UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v4, v5, 0LL);
  actionObject = this->fields.actionObject;
  v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, 0LL);
  if ( !actionObject
    || (zero = UnityEngine_Vector3__get_zero(0LL),
        ServantStatusCharaGraphListViewObject__Init(
          actionObject,
          5,
          v9,
          0.1,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v10),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
LABEL_11:
    sub_B7076C(viewerListViewManager, v7);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v8; // x8
  int32_t width; // w21
  int32_t height; // w22
  float z; // s9
  float x; // s14
  float y; // s15
  int32_t touchCount; // w25
  float v15; // s8
  float v16; // s13
  float v17; // s12
  float v18; // s10
  float v19; // s11
  const MethodInfo *v20; // x2
  _BOOL4 IsAbleToPinch; // w24
  float v22; // s15
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
  float Axis; // s9
  UnityEngine_Vector2_o v41; // kr00_8
  UnityEngine_Vector2_o v42; // kr08_8
  ServantStatusCharaGraphListViewManager_o *v43; // x0
  const MethodInfo *v44; // x2
  float v45; // s0
  float v46; // s1
  float v47; // s2
  ServantStatusCharaGraphListViewManager_o *v48; // x0
  const MethodInfo *v49; // x2
  float v50; // s1
  float v51; // s2
  float v52; // s0
  float v53; // s12
  struct UnityEngine_Vector2_o *p_oldTouchPosition; // x25
  float *p_y; // x26
  float v56; // s15
  bool *p_isTouchScale; // x24
  int32_t oldTouchCount; // w8
  _BOOL4 v59; // w24
  _BOOL8 MouseButton; // x0
  float v61; // s0
  float v62; // s1
  float v63; // s2
  ServantStatusCharaGraphListViewManager_o *v64; // x0
  float v65; // s14
  float baseScale; // s8
  float v67; // s0
  _BOOL4 v68; // w8
  int klass; // w8
  int32_t v70; // w1
  float v71; // s8
  float v72; // s9
  float v73; // s10
  float v74; // s14
  float v75; // s13
  float v76; // s8
  float v77; // s9
  float v78; // s10
  ServantStatusCharaGraphListViewManager_o *v79; // x0
  const MethodInfo *v80; // x2
  float v81; // s12
  ServantStatusCharaGraphListViewManager_o *v82; // x0
  const MethodInfo *v83; // x2
  float v84; // s15
  float v85; // s11
  float v86; // s9
  ServantStatusCharaGraphListViewManager_o *v87; // x0
  const MethodInfo *v88; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  UnityEngine_Transform_o *v90; // x21
  float m_XMin; // s8
  float yMax; // s0
  float v93; // s12
  ServantStatusCharaGraphListViewManager_o *v94; // x0
  const MethodInfo *v95; // x2
  UnityEngine_Vector2_o v96; // kr20_8
  UnityEngine_Transform_o *v97; // x21
  float v98; // s10
  float yMin; // s0
  float v100; // s10
  float v101; // s11
  ServantStatusCharaGraphListViewManager_o *v102; // x0
  const MethodInfo *v103; // x2
  UnityEngine_Vector2_o v104; // kr28_8
  int v105; // w8
  int v106; // w9
  float v107; // s0
  float v108; // s8
  float v109; // s12
  int v110; // w9
  float v111; // s0
  float v112; // s1
  float v113; // s0
  float v114; // s9
  float v115; // s10
  float v116; // s11
  int v117; // s0
  float v120; // s3
  UnityEngine_Vector2_o v121; // kr30_8
  UnityEngine_Vector2_o v122; // kr38_8
  float sqrMagnitude; // s0
  float baseTouchSqrMagnitude; // s8
  __int64 v125; // x0
  float v126; // [xsp+0h] [xbp-1B0h]
  float v127; // [xsp+4h] [xbp-1ACh]
  float v128; // [xsp+14h] [xbp-19Ch]
  float v129; // [xsp+18h] [xbp-198h]
  float v130; // [xsp+1Ch] [xbp-194h]
  float v131; // [xsp+1Ch] [xbp-194h]
  float v132; // [xsp+20h] [xbp-190h]
  float v133; // [xsp+20h] [xbp-190h]
  float v134; // [xsp+24h] [xbp-18Ch]
  float v135; // [xsp+24h] [xbp-18Ch]
  float value; // [xsp+28h] [xbp-188h]
  float valuea; // [xsp+28h] [xbp-188h]
  float valueb; // [xsp+28h] [xbp-188h]
  float v139; // [xsp+2Ch] [xbp-184h]
  float v140; // [xsp+2Ch] [xbp-184h]
  float v141; // [xsp+2Ch] [xbp-184h]
  float v142; // [xsp+30h] [xbp-180h]
  float v143; // [xsp+34h] [xbp-17Ch]
  UnityEngine_Touch_o v144; // [xsp+38h] [xbp-178h] BYREF
  UnityEngine_Touch_o v145; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Touch_o v146; // [xsp+C8h] [xbp-E8h] BYREF
  MethodInfo methoda; // [xsp+110h] [xbp-A0h] BYREF
  MethodInfo var48; // [xsp+168h] [xbp-48h] BYREF
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v150; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v151; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v152; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v153; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v183; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v184; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v185; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v186; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434FF24 & 1) == 0 )
  {
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_9310/*"Mouse ScrollWheel"*/);
    byte_434FF24 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v146, 0, sizeof(v146));
  memset(&v145, 0, sizeof(v145));
  transform = (UnityEngine_Transform_o *)memset(&v144, 0, sizeof(v144));
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
      v8 = this->fields.actionObject;
      if ( !v8 )
        goto LABEL_130;
      *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v8->fields.dragObjectRect;
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
      v142 = zero.fields.x;
      v143 = zero.fields.y;
      v15 = zero.fields.z;
      v157 = UnityEngine_Vector3__get_zero(0LL);
      v16 = v157.fields.x;
      v17 = v157.fields.y;
      v18 = v157.fields.z;
      v158 = UnityEngine_Vector3__get_zero(0LL);
      v132 = v158.fields.y;
      v134 = v158.fields.x;
      v19 = v158.fields.z;
      UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Vector3__get_zero(0LL);
      transform = (UnityEngine_Transform_o *)this->fields.charaGraphViewer;
      if ( !transform )
        goto LABEL_130;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)transform, v4);
      if ( touchCount )
      {
        this->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          v22 = v15;
          if ( touchCount == 1 )
          {
            transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
            if ( !transform )
              goto LABEL_130;
            if ( LODWORD(transform[1].klass) )
            {
              memmove(&v146, &transform[1].monitor, 0x44u);
              position = UnityEngine_Touch__get_position(&v146, 0LL);
              *(UnityEngine_Vector3_o *)&v25 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v23,
                                                 position,
                                                 this->fields.camera,
                                                 v24);
              if ( !parent )
                goto LABEL_130;
              *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v25,
                                                 0LL);
              if ( this->fields.oldTouchCount == 1 )
              {
                v33 = v30;
                v34 = v31;
                v35 = v32;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v28,
                                  this->fields.oldTouchPosition,
                                  this->fields.camera,
                                  v29);
                v160 = UnityEngine_Transform__InverseTransformPoint(
                         (UnityEngine_Transform_o *)parent,
                         WorldPosition,
                         0LL);
                v142 = v33 - v160.fields.x;
                v143 = v34 - v160.fields.y;
                v22 = v35 - v160.fields.z;
              }
              else
              {
                this->fields.oldTouchCount = 1;
              }
              v38 = 0;
              v59 = 0;
              this->fields.oldTouchPosition = UnityEngine_Touch__get_position(&v146, 0LL);
              this->fields.isTouchScale = 0;
              Axis = 0.0;
              goto LABEL_58;
            }
LABEL_131:
            v125 = sub_B70798(transform);
            sub_B70738(v125, 0LL);
          }
          oldTouchCount = this->fields.oldTouchCount;
          v59 = 0;
          this->fields.oldTouchCount = 0;
          this->fields.isTouchScale = 0;
          Axis = 0.0;
          v38 = oldTouchCount > 0;
LABEL_58:
          v65 = 0.0;
          goto LABEL_59;
        }
        v130 = z;
        Axis = 0.0;
        v22 = v15;
        if ( !IsAbleToPinch )
        {
          v38 = 0;
          v59 = 0;
          goto LABEL_58;
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
        if ( !transform )
          goto LABEL_130;
        if ( !LODWORD(transform[1].klass) )
          goto LABEL_131;
        memmove(&v145, &transform[1].monitor, 0x44u);
        transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
        if ( !transform )
          goto LABEL_130;
        if ( LODWORD(transform[1].klass) <= 1 )
          goto LABEL_131;
        memmove(&v144, (char *)&transform[4].klass + 4, 0x44u);
        v41 = UnityEngine_Touch__get_position(&v145, 0LL);
        v42 = UnityEngine_Touch__get_position(&v144, 0LL);
        v150.fields.x = (float)(v41.fields.x + v42.fields.x) * 0.5;
        v150.fields.y = (float)(v41.fields.y + v42.fields.y) * 0.5;
        *(UnityEngine_Vector3_o *)&v45 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v43,
                                           v150,
                                           this->fields.camera,
                                           v44);
        if ( !parent )
          goto LABEL_130;
        v19 = v47;
        v132 = v46;
        v134 = v45;
        *(UnityEngine_Vector3_o *)(&v50 - 1) = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v45,
                                                 0LL);
        v16 = v52;
        v139 = v50;
        if ( this->fields.oldTouchCount == 2 )
        {
          v53 = v50;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          v56 = v51;
          v161 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v48,
                   this->fields.oldTouchPosition,
                   this->fields.camera,
                   v49);
          v162 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v161, 0LL);
          v142 = v16 - v162.fields.x;
          v143 = v53 - v162.fields.y;
          v18 = v56;
          v22 = v56 - v162.fields.z;
          p_isTouchScale = &this->fields.isTouchScale;
        }
        else
        {
          v18 = v51;
          p_isTouchScale = &this->fields.isTouchScale;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          this->fields.isTouchScale = 0;
          this->fields.oldTouchCount = 2;
        }
        p_oldTouchPosition->fields.x = (float)(v41.fields.x + v42.fields.x) * 0.5;
        *p_y = (float)(v41.fields.y + v42.fields.y) * 0.5;
        v121 = UnityEngine_Touch__get_position(&v145, 0LL);
        v122 = UnityEngine_Touch__get_position(&v144, 0LL);
        v153.fields.x = v121.fields.x - v122.fields.x;
        v153.fields.y = v121.fields.y - v122.fields.y;
        var48.methodPointer = (Il2CppMethodPointer)v153;
        sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v153, &var48);
        v65 = sqrMagnitude;
        if ( !*p_isTouchScale )
        {
          v38 = 0;
          v59 = 0;
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
        v38 = 0;
        v17 = v139;
        Axis = (float)(sqrtf(v65 / baseTouchSqrMagnitude) * this->fields.baseTouchScale) - value;
      }
      else
      {
        v36 = this->fields.oldTouchCount;
        v37 = 0;
        this->fields.isTouchScale = 0;
        this->fields.oldTouchCount = 0;
        v38 = v36 > 0;
        if ( x >= 0.0 )
        {
          v39 = UnityEngine_Screen__get_width(0LL);
          v37 = 0;
          if ( y >= 0.0 && x <= (float)v39 )
            v37 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        v130 = z;
        if ( v37 && IsAbleToPinch )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9310/*"Mouse ScrollWheel"*/, 0LL);
        else
          Axis = 0.0;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v151.fields.x = x;
          v151.fields.y = y;
          *(UnityEngine_Vector3_o *)&v61 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v151,
                                             this->fields.camera,
                                             v20);
          if ( !parent )
            goto LABEL_130;
          v19 = v63;
          v132 = v62;
          v134 = v61;
          v163 = UnityEngine_Transform__InverseTransformPoint(
                   (UnityEngine_Transform_o *)parent,
                   *(UnityEngine_Vector3_o *)&v61,
                   0LL);
          v16 = v163.fields.x;
          v17 = v163.fields.y;
          v18 = v163.fields.z;
          if ( this->fields.isOldMousePosition )
          {
            v164 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v64,
                     this->fields.oldMousePosition,
                     this->fields.camera,
                     v20);
            v165 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v164, 0LL);
            v142 = v16 - v165.fields.x;
            v143 = v17 - v165.fields.y;
            v15 = v18 - v165.fields.z;
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
        v65 = 0.0;
        v22 = v15;
      }
      if ( Axis == 0.0 )
      {
        v59 = 0;
      }
      else
      {
        baseScale = this->fields.baseScale;
        v67 = value + Axis;
        if ( Axis >= 0.0 || v67 >= baseScale )
        {
          v68 = Axis > 0.0 && v67 > (float)(baseScale * 3.0);
          if ( Axis > 0.0 && v67 > (float)(baseScale * 3.0) )
            baseScale = baseScale * 3.0;
          else
            baseScale = value + Axis;
        }
        else
        {
          v68 = 1;
        }
        v59 = v68;
        if ( value != baseScale )
        {
          if ( this->fields.oldTouchCount > 0 || this->fields.isOldMousePosition )
          {
            valueb = v18;
            v141 = Axis;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v177.fields.y = v132;
            v177.fields.x = v134;
            v177.fields.z = v19;
            v178 = UnityEngine_Transform__InverseTransformPoint(transform, v177, 0LL);
            v114 = v178.fields.x;
            v115 = v178.fields.y;
            v116 = v178.fields.z;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v179.fields.z = v130;
            v179.fields.x = baseScale;
            v179.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(transform, v179, 0LL);
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v180.fields.x = v114;
            v180.fields.y = v115;
            v180.fields.z = v116;
            *(UnityEngine_Vector3_o *)&v117 = UnityEngine_Transform__TransformPoint(transform, v180, 0LL);
            if ( !parent )
              goto LABEL_130;
            v181 = UnityEngine_Transform__InverseTransformPoint(
                     (UnityEngine_Transform_o *)parent,
                     *(UnityEngine_Vector3_o *)&v117,
                     0LL);
            v120 = valueb;
            Axis = v141;
            value = baseScale;
            v22 = v22 + (float)(v120 - v181.fields.z);
            v142 = v142 + (float)(v16 - v181.fields.x);
            v143 = v143 + (float)(v17 - v181.fields.y);
          }
          else
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v182.fields.z = v130;
            v182.fields.x = baseScale;
            v182.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(transform, v182, 0LL);
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
            v70 = 2;
LABEL_66:
            ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)transform, v70, v20);
          }
        }
        else if ( klass == 2 )
        {
          v70 = 1;
          goto LABEL_66;
        }
      }
      if ( v59 && v65 > 0.0 && this->fields.isTouchScale )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
        if ( !transform )
          goto LABEL_130;
        LODWORD(this->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
        this->fields.baseTouchSqrMagnitude = v65;
      }
      v140 = Axis;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v71 = localPosition.fields.x;
      v72 = localPosition.fields.y;
      v73 = localPosition.fields.z;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v167.fields.z = v22 + v73;
      v167.fields.x = v142 + v71;
      v167.fields.y = v143 + v72;
      UnityEngine_Transform__set_localPosition(transform, v167, 0LL);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v74 = (float)width;
      v75 = (float)height;
      v168 = UnityEngine_Transform__get_position(transform, 0LL);
      v76 = v168.fields.x;
      v77 = v168.fields.y;
      v78 = v168.fields.z;
      v152 = UnityEngine_Vector2__get_zero(0LL);
      v169 = ServantStatusCharaGraphListViewManager__GetWorldPosition(v79, v152, this->fields.camera, v80);
      v129 = v169.fields.x;
      v81 = v169.fields.y;
      v169.fields.x = (float)width;
      v169.fields.y = (float)height;
      v170 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
               v82,
               *(UnityEngine_Vector2_o *)&v169.fields.x,
               this->fields.camera,
               v83);
      v84 = v170.fields.x;
      v85 = v170.fields.y;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v131 = v81;
      v133 = v77;
      v135 = v76;
      v171 = UnityEngine_Transform__get_position(transform, 0LL);
      v86 = v171.fields.x;
      v127 = v171.fields.y;
      SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v87, v171, this->fields.camera, v88);
      v90 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      v184.fields.m_XMin = UnityEngine_Rect__get_xMin(v183, &methoda);
      m_XMin = v184.fields.m_XMin;
      yMax = UnityEngine_Rect__get_yMax(v184, &methoda);
      if ( !v90 )
        goto LABEL_130;
      v172.fields.y = yMax;
      v172.fields.z = 0.0;
      v172.fields.x = m_XMin;
      v128 = v85;
      valuea = v78;
      v173 = UnityEngine_Transform__TransformPoint(v90, v172, 0LL);
      v93 = v173.fields.x;
      v126 = v173.fields.y;
      v96 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v94, v173, this->fields.camera, v95);
      v97 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      v186.fields.m_XMin = UnityEngine_Rect__get_xMax(v185, &methoda);
      v98 = v186.fields.m_XMin;
      yMin = UnityEngine_Rect__get_yMin(v186, &methoda);
      if ( !v97 )
LABEL_130:
        sub_B7076C(transform, v4);
      v174.fields.y = yMin;
      v174.fields.z = 0.0;
      v174.fields.x = v98;
      v175 = UnityEngine_Transform__TransformPoint(v97, v174, 0LL);
      v100 = v175.fields.x;
      v101 = v175.fields.y;
      v104 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v102, v175, this->fields.camera, v103);
      v105 = v140 < 0.0 || v38;
      v106 = v105 | (v142 > 0.0);
      if ( (float)(v104.fields.x - v96.fields.x) <= v74 )
      {
        if ( !((v106 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v74 * 0.5))) )
        {
          v107 = (float)((float)(v129 + v84) * 0.5) - v86;
          goto LABEL_83;
        }
        v109 = v133;
        v108 = v135;
        if ( (v105 | (v142 < 0.0)) == 1 && SreenPosition.fields.x < (float)(v74 * 0.5) )
        {
          v107 = (float)((float)(v129 + v84) * 0.5) - v86;
          goto LABEL_84;
        }
      }
      else
      {
        if ( !((v106 ^ 1) & 1 | (v96.fields.x <= 0.0)) )
        {
          v107 = v129 - v93;
LABEL_83:
          v109 = v133;
          v108 = v135;
LABEL_84:
          v108 = v108 + v107;
          goto LABEL_85;
        }
        if ( (v105 | (v142 < 0.0)) == 1 )
        {
          v109 = v133;
          v108 = v135;
          if ( v104.fields.x < v74 )
          {
            v107 = v84 - v100;
            goto LABEL_84;
          }
        }
        else
        {
          v109 = v133;
          v108 = v135;
        }
      }
LABEL_85:
      v110 = v105 | (v143 > 0.0);
      if ( (float)(v104.fields.y - v96.fields.y) <= v75 )
      {
        if ( !((v110 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v75 * 0.5)))
          || (v105 | (v143 < 0.0)) == 1 && SreenPosition.fields.y < (float)(v75 * 0.5) )
        {
          v111 = (float)(v131 + v128) * 0.5;
          v112 = v127;
          goto LABEL_92;
        }
      }
      else
      {
        if ( !((v110 ^ 1) & 1 | (v96.fields.y <= 0.0)) )
        {
          v111 = v131;
          v112 = v126;
LABEL_92:
          v113 = v111 - v112;
LABEL_93:
          v109 = v109 + v113;
          goto LABEL_94;
        }
        if ( (v105 | (v143 < 0.0)) == 1 && v104.fields.y < v75 )
        {
          v113 = v128 - v101;
          goto LABEL_93;
        }
      }
LABEL_94:
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( transform )
      {
        v176.fields.z = valuea;
        v176.fields.x = v108;
        v176.fields.y = v109;
        UnityEngine_Transform__set_position(transform, v176, 0LL);
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
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_434FF28 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_434FF28 = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v5 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B7076C(v6, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v4, v5, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_434FF26 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_434FF26 = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v5 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B7076C(v6, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v4, v5, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *main; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v11; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  const MethodInfo *v13; // x2
  float v14; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v16; // x21
  const MethodInfo *v17; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v19; // x21
  EventDelegate_Callback_o *v20; // x22

  if ( (byte_434FF21 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__);
    byte_434FF21 = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.camera, (System_Int32_array **)main, v4, v5, v6, v7, v8, v9);
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
  if ( BYTE4(dragObject[2].klass) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v13);
    charaGraphViewer = this->fields.charaGraphViewer;
    v16 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_B70764(ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      0LL);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v16, v17);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v19 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v19,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v20 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v20,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_B7076C(dragObject, v11);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v19, v20, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2

  backMask = this->fields.backMask;
  if ( !backMask )
    sub_B7076C(0LL, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_21899808(this, 3, v4);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_434FF2C & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FF2C = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_B7076C(v5, mainInfo);
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

  if ( (byte_434FF2B & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FF2B = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_B7076C(v5, mainInfo);
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
  UnityEngine_Object_o *actionObject; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v7; // x1
  struct ServantStatusCharaGraphListViewObject_o *v8; // x8
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v10; // x2

  if ( (byte_434FF1F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF1F = 1;
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
                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_17:
        sub_B7076C(Component_srcLineSprite, v7);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_434FF1E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF1E = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7076C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FF1C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_434FF1C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_21899808(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FF1D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__);
    sub_B70694(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_434FF1D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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
  __int64 v8; // x10

  if ( (byte_434FF2A & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_434FF2A = 1;
  }
  if ( statusItem )
  {
    v5 = statusItem->fields.isCollection || !statusItem->fields.isEnableOwnRandomSetting;
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.indicator) == 0LL)
      || (v8 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
          *(&scrollView->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (ServantStatusCharaGraphListViewIndicator_c *)scrollView->klass->_2.typeHierarchy[v8 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
    {
      sub_B7076C(scrollView, statusItem);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_21899640(this, mode, v10);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_21899640(
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
  ServantStatusCharaGraphListViewManager__RequestListObject_21899808(this, v6, v5);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_21899752(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_21899640(this, mode, v10);
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
  if ( (byte_434FF1B & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_434FF1B = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
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
    sub_B7076C(0LL, isVisible);
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

  if ( (byte_434FF10 & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_434FF10 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_434FF12 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_434FF12 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B70A60(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_434FF15 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF15 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)current,
                                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7076C(0LL, v10);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7076C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23985548((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7076C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7076C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_434FF14 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF14 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
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

  if ( (byte_434FF11 & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_434FF11 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_434FF13 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_434FF13 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_B70A60(v7);
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
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_434F84C & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_434F84C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v20) & 1) == 0 )
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
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
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
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B70744(v15, v20);
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
            v14 = sub_B08590(v19, class_0, v9);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F84A & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_434F84A = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantStatusCharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_434F84B & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434F84B = 1;
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