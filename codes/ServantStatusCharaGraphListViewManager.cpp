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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E6E32 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v5, v6, v7);
    byte_42E6E32 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v8;
  sub_B5D560(
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
  __int64 v3; // x3
  ServantStatusListViewItem_o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  RandomLimitCountManager_c *v15; // x0
  _BOOL4 isEnableOwnRandomSetting; // w22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v18; // x21
  ListViewItem_o *v19; // x8
  __int64 v20; // x11

  v4 = mainInfo;
  if ( (byte_42E6E31 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)mainInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantStatusCharaGraphListViewItem_TypeInfo, v12, v13, v14);
    byte_42E6E31 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    byte_42E6BE7 = 1;
  }
  v15 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v15 = RandomLimitCountManager_TypeInfo;
  }
  if ( v15->static_fields->enableRandomLimitCount )
  {
    if ( !v4 )
      goto LABEL_24;
    isEnableOwnRandomSetting = v4->fields.isEnableOwnRandomSetting;
    if ( !v4->fields.isEnableOwnRandomSetting )
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
      sub_B5D69C(v15, mainInfo);
    v18 = 0LL;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( v19 )
      {
        v20 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (ServantStatusCharaGraphListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo
          && LODWORD(v19[1].monitor) == v4->fields.cardLimitCount )
        {
          ListViewManager__MoveCenterItem((ListViewManager_o *)this, v18, 0, 0, 0.0, 0LL);
          if ( !isEnableOwnRandomSetting )
            this->fields.manualSelectedIndex = v18;
          return;
        }
      }
      itemList = this->fields.itemList;
      ++v18;
      if ( !itemList )
        goto LABEL_24;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__ChangeServantInfo(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *charaGraphViewer; // x0
  struct ListViewItem_o *centerItem; // x20
  __int64 v22; // x9
  int32_t SvtId; // w0
  int monitor; // w22
  int32_t v25; // w21
  const MethodInfo *v26; // x2
  int32_t v27; // w23
  bool v28; // zf
  const MethodInfo *v29; // x3
  ServantLimitAddMaster_o *v30; // x23
  const MethodInfo *v31; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x24
  int32_t OverwriteCvId; // w24
  const MethodInfo *v34; // x2
  ListViewItem_c *klass; // x8
  ServantStatusCharaGraphListViewManager_o *v36; // x0
  const MethodInfo *v37; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6E33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&ServantStatusCharaGraphListViewItem_TypeInfo, v17, v18, v19);
    byte_42E6E33 = 1;
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
      v22 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&centerItem->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[v22 - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        v36 = (ServantStatusCharaGraphListViewManager_o *)sub_B5D990(this->fields.centerItem);
        ServantStatusCharaGraphListViewManager__OnFinishedChangeCharaGraph(v36, v37);
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
  v25 = SvtId;
  if ( monitor <= 10 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !charaGraphViewer )
      goto LABEL_55;
    monitor = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                (ServantLimitImageMaster_o *)charaGraphViewer,
                v25,
                monitor + 1,
                0LL);
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_55;
  if ( ServantStatusListViewItem__UpdateServantComment(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v25,
         monitor,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
    ServantStatusDialog__UpdateProfileList((ServantStatusDialog_o *)charaGraphViewer, 1, v26);
  }
  if ( monitor == 1 )
  {
    v27 = 0;
  }
  else
  {
    v28 = this->fields.cardLimitCount == 1 && monitor == 2;
    v27 = v28 ? 1 : monitor;
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_55;
  if ( ServantStatusListViewItem__IsUpdateServantParameters(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v25,
         v27,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
    ServantStatusDialog__UpdateServantParameters((ServantStatusDialog_o *)charaGraphViewer, v25, v27, v29);
  }
  if ( monitor == 1 )
    monitor = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !charaGraphViewer )
    goto LABEL_55;
  v30 = (ServantLimitAddMaster_o *)charaGraphViewer;
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)charaGraphViewer, v25, 0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_55;
    ServantStatusDialog__UpdateServantDetailName((ServantStatusDialog_o *)charaGraphViewer, monitor, v31);
  }
  if ( !ServantLimitAddMaster__IsOverwriteCv(v30, v25, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  charaGraphViewer = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !centerItem[1].klass )
    goto LABEL_55;
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)charaGraphViewer;
  charaGraphViewer = (void *)ServantStatusListViewItem__get_SvtId(
                               (ServantStatusListViewItem_o *)centerItem[1].klass,
                               0LL);
  if ( !v32 )
    goto LABEL_55;
  charaGraphViewer = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v32,
                       (int32_t)charaGraphViewer,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !charaGraphViewer )
    goto LABEL_55;
  OverwriteCvId = *((_DWORD *)charaGraphViewer + 51);
  if ( ServantLimitAddMaster__TryGetEntity(v30, &entity, v25, monitor, 0LL) )
  {
    charaGraphViewer = entity;
    if ( !entity )
      goto LABEL_55;
    OverwriteCvId = ServantLimitAddEntity__GetOverwriteCvId(entity, OverwriteCvId, 0LL);
  }
  charaGraphViewer = this->fields.servantStatusDialog;
  if ( !charaGraphViewer
    || (ServantStatusDialog__UpdateCv((ServantStatusDialog_o *)charaGraphViewer, OverwriteCvId, v34),
        (klass = centerItem[1].klass) == 0LL) )
  {
LABEL_55:
    sub_B5D69C(charaGraphViewer, method);
  }
  LODWORD(klass[1]._1.interopData) = monitor;
}


void __fastcall ServantStatusCharaGraphListViewManager__CreateList(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UILabel_o *debugScaleLabel; // x0
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v38; // x0
  struct System_Int32_array *cardSelectList; // x24
  __int64 v40; // x23
  __int64 v41; // x0
  unsigned __int64 v42; // x26
  int32_t v43; // w25
  int32_t v44; // w22
  signed __int64 v45; // x27
  int32_t v46; // w21
  __int64 v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UIDragDropListViewBackMask_o *Component_srcLineSprite; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x2
  System_Action_o *v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x22
  int v77; // w2
  __int64 v78; // x3
  BattleServantConfConponent_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v81; // x24
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  RandomLimitCountManager_c *v89; // x0
  __int64 v90; // x0
  ServantStatusCharaGraphListViewManager_o *v91; // x0
  ServantStatusListViewItem_o *v92; // x1
  const MethodInfo *v93; // x2
  int32_t cardLimitCount; // [xsp+Ch] [xbp-54h]

  if ( (byte_42E6E1A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SpringPanel_OnFinished_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantStatusCharaGraphListViewItem_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v27, v28, v29);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    byte_42E6E1A = 1;
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
    v38 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_50;
      v40 = *(_QWORD *)&cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, v40, 0LL);
      if ( (int)v40 >= 1 )
      {
        v42 = 0LL;
        v43 = 0;
        v44 = 0;
        v45 = (int)v40;
        while ( 1 )
        {
          if ( v42 >= cardSelectList->max_length )
          {
            v90 = sub_B5D6C8(v41);
            sub_B5D668(v90, 0LL);
          }
          v46 = cardSelectList->m_Items[v42 + 1];
          if ( (v46 & 0x80000000) == 0 )
          {
            v47 = sub_B5D694(ServantStatusCharaGraphListViewItem_TypeInfo);
            ListViewItem___ctor_23901828((ListViewItem_o *)v47, v44, 0LL);
            *(_QWORD *)(v47 + 112) = mainInfo;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v47 + 112),
              (System_Int32_array **)mainInfo,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53);
            *(_DWORD *)(v47 + 120) = v46;
            if ( v46 == cardLimitCount )
            {
              if ( !v47 )
                goto LABEL_50;
              v43 = *(_DWORD *)(v47 + 20);
            }
            debugScaleLabel = (UILabel_o *)ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL);
            if ( v46 == (_DWORD)debugScaleLabel )
            {
              if ( !v47 )
                goto LABEL_50;
              this->fields.manualSelectedIndex = *(_DWORD *)(v47 + 20);
            }
            debugScaleLabel = (UILabel_o *)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_50;
            ++v44;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)debugScaleLabel,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          }
          if ( (__int64)++v42 >= v45 )
            goto LABEL_28;
        }
      }
      goto LABEL_27;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v38 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v54 = sub_B5D694(v38);
  ListViewItem___ctor_23901828((ListViewItem_o *)v54, 0, 0LL);
  *(_QWORD *)(v54 + 112) = mainInfo;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 112), (System_Int32_array **)mainInfo, v55, v56, v57, v58, v59, v60);
  *(_DWORD *)(v54 + 120) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (UILabel_o *)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_50;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)debugScaleLabel,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_27:
  v43 = 0;
LABEL_28:
  debugScaleLabel = (UILabel_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._6_GetDragRoot.method)(
                                   this,
                                   this->klass->vtable._7_ItemDragStart.methodPtr);
  if ( !debugScaleLabel )
    goto LABEL_50;
  Component_srcLineSprite = (struct UIDragDropListViewBackMask_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)debugScaleLabel,
                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.backMask,
    (System_Int32_array **)Component_srcLineSprite,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  ListViewManager__SortItem((ListViewManager_o *)this, v43, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v68);
  v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v69,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v69;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  debugScaleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_50;
  ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                           (UnityEngine_Component_o *)debugScaleLabel,
                                                           (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
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
    sub_B5D69C(debugScaleLabel, mainInfo);
  monitor = (System_Delegate_o *)ComponentInChildren_UIWidget[1].monitor;
  p_monitor = (BattleServantConfConponent_o *)&ComponentInChildren_UIWidget[1].monitor;
  v81 = (SpringPanel_OnFinished_o *)sub_B5D694(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(
    v81,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
    0LL);
  v82 = (System_Int32_array **)System_Delegate__Combine(monitor, (System_Delegate_o *)v81, 0LL);
  if ( v82 && *v82 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v91 = (ServantStatusCharaGraphListViewManager_o *)sub_B5D990(v82);
    ServantStatusCharaGraphListViewManager__SetEnableScroll(v91, v92, v93);
    return;
  }
  p_monitor->klass = (BattleServantConfConponent_c *)v82;
  sub_B5D560(p_monitor, v82, v83, v84, v85, v86, v87, v88);
LABEL_38:
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, v77, v78);
    byte_42E6BE7 = 1;
  }
  v89 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v89 = RandomLimitCountManager_TypeInfo;
  }
  if ( v89->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
    this->fields.manualSelectedIndex = v43;
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_42E6E1B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E6E1B = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_B5D69C(0LL, v5);
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
    sub_B5D69C(dragBackSprite, method);
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
    sub_B5D69C(dragBackSprite, method);
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
    sub_B5D69C(dragBackSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0LL);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetItem(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E6E1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusCharaGraphListViewItem_TypeInfo, v6, v7, v8);
    byte_42E6E1E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetManualSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusCharaGraphListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ListViewIndicator_o *indicator; // x8
  __int64 v10; // x11
  int32_t manualSelectedIndex; // w21

  v5 = this;
  if ( (byte_42E6E1D & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B5D5C4(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         v6,
                                                         v7,
                                                         v8);
    byte_42E6E1D = 1;
  }
  indicator = v5->fields.indicator;
  if ( !indicator )
    goto LABEL_21;
  v10 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1);
  if ( *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v10 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    goto LABEL_21;
  }
  manualSelectedIndex = *((_DWORD *)&indicator[2].fields + 1);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    byte_42E6BE7 = 1;
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
        manualSelectedIndex = v5->fields.manualSelectedIndex;
      goto LABEL_18;
    }
LABEL_21:
    sub_B5D69C(this, mainInfo);
  }
LABEL_18:
  if ( (manualSelectedIndex & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v5, manualSelectedIndex, method);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewManager__GetSelectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  ServantStatusCharaGraphListViewManager_o *v4; // x19
  struct ListViewIndicator_o *indicator; // x8
  __int64 v6; // x11
  int32_t v7; // w1

  v4 = this;
  if ( (byte_42E6E1C & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B5D5C4(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         (_DWORD)method,
                                                         (_DWORD)v2,
                                                         v3);
    byte_42E6E1C = 1;
  }
  indicator = v4->fields.indicator;
  if ( !indicator
    || (v6 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
        *(&indicator->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_B5D69C(this, method);
  }
  v7 = *((_DWORD *)&indicator[2].fields + 1);
  if ( (v7 & 0x80000000) != 0 )
    return 0LL;
  else
    return ServantStatusCharaGraphListViewManager__GetItem(v4, v7, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantStatusCharaGraphListViewManager__GetSreenPosition(
        ServantStatusCharaGraphListViewManager_o *this,
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v9; // x0
  __int64 v10; // x1
  float v11; // s0
  float v12; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_42E6E27 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)cam, (_DWORD)method, v4);
    byte_42E6E27 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v9 )
  {
    zero = UnityEngine_Vector2__get_zero(0LL);
    v12 = zero.fields.y;
    v11 = zero.fields.x;
  }
  else
  {
    if ( !cam )
      sub_B5D69C(v9, v10);
    v15.fields.x = x;
    v15.fields.y = y;
    v15.fields.z = z;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToScreenPoint_41565348(cam, v15, 0LL);
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
  __int64 v4; // x3
  float y; // s8
  float x; // s9
  _BOOL8 v8; // x0
  __int64 v9; // x1
  float v10; // s0
  float v11; // s1
  float v12; // s2
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_42E6E26 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)cam, (_DWORD)method, v4);
    byte_42E6E26 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v8 )
  {
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  }
  else
  {
    if ( !cam )
      sub_B5D69C(v8, v9);
    v13.fields.z = 0.0;
    v13.fields.x = x;
    v13.fields.y = y;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__ScreenToWorldPoint_41565372(cam, v13, 0LL);
  }
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickExViewer(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusCharaGraphListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v29; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  const MethodInfo *v31; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v33; // x21
  EventDelegate_Callback_o *v34; // x22
  ServantStatusCharaGraphListViewObject_o *v35; // x20
  System_Action_o *v36; // x21
  const MethodInfo *v37; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v4 = this;
  if ( (byte_42E6E2D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v14, v15, v16);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v17, v18, v19);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v20, v21, v22);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v23, v24, v25);
    byte_42E6E2D = 1;
  }
  actionObject = v4->fields.actionObject;
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
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
      v29);
  }
  charaGraphViewer = v4->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_27;
  this = (ServantStatusCharaGraphListViewManager_o *)charaGraphViewer->fields.viewerListViewManager;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
    (ServantStatusCharaGraphViewerListViewManager_o *)this,
    0,
    v29);
  this = (ServantStatusCharaGraphListViewManager_o *)v4->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v31);
  this = (ServantStatusCharaGraphListViewManager_o *)v4->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_27;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  backMask = v4->fields.backMask;
  v33 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v34 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v34,
    (Il2CppObject *)v4,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v33, v34, 0LL),
        (this = (ServantStatusCharaGraphListViewManager_o *)v4->fields.backMask) == 0LL)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0LL),
        v35 = v4->fields.actionObject,
        v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v36, (Il2CppObject *)v4, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0LL),
        !v35) )
  {
LABEL_27:
    sub_B5D69C(this, method);
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v35, 6, v36, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusCharaGraphListViewItem_o *CenterItem; // x20
  __int64 v46; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x21
  ServantLimitImageMaster_o *v48; // x21
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  struct ServantStatusCharaGraphViewer_o *v51; // x8
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v55; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v57; // x21
  EventDelegate_Callback_o *v58; // x22
  ServantStatusCharaGraphListViewObject_o *v59; // x20
  System_Action_o *v60; // x21
  const MethodInfo *v61; // x3
  int v62; // s1
  int32_t v65; // w1
  UIDragDropListViewBackMask_o *v66; // x20
  EventDelegate_Callback_o *v67; // x21
  EventDelegate_Callback_o *v68; // x22
  ServantStatusCharaGraphViewer_o *v69; // x0
  const MethodInfo *v70; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E6E2B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ServantStatusCharaGraphListViewItem_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v26, v27, v28);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v29, v30, v31);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, v32, v33, v34);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&SoundManager_TypeInfo, v41, v42, v43);
    byte_42E6E2B = 1;
  }
  entity = 0LL;
  charaGraphViewer = this->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_49;
  CenterItem = ServantStatusCharaGraphViewer__GetCenterItem(charaGraphViewer, method);
  if ( CenterItem
    || (CenterItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.centerItem) == 0LL
    || (v46 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&CenterItem->klass->_2.bitflags2 + 1) >= (unsigned int)v46)
    && (ServantStatusCharaGraphListViewItem_c *)CenterItem->klass->_2.typeHierarchy[v46 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    entity = 0LL;
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)charaGraphViewer;
        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)CenterItem->fields.mainInfo;
        if ( charaGraphViewer )
        {
          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                  (ServantStatusListViewItem_o *)charaGraphViewer,
                                                                  0LL);
          if ( v47 )
          {
            DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v47,
              &entity,
              (int32_t)charaGraphViewer,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( charaGraphViewer )
            {
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)charaGraphViewer,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
              if ( CenterItem->fields.mainInfo )
              {
                v48 = (ServantLimitImageMaster_o *)charaGraphViewer;
                charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                        CenterItem->fields.mainInfo,
                                                                        0LL);
                if ( v48 )
                {
                  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
                          v48,
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
                    v51 = this->fields.charaGraphViewer;
                    if ( v51 )
                    {
                      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)v51->fields.viewerListViewManager;
                      if ( charaGraphViewer )
                      {
                        ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
                          (ServantStatusCharaGraphViewerListViewManager_o *)charaGraphViewer,
                          1,
                          v50);
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
                                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
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
                              v55);
                          }
                          backMask = this->fields.backMask;
                          v57 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
                          EventDelegate_Callback___ctor(
                            v57,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                            0LL);
                          v58 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
                          EventDelegate_Callback___ctor(
                            v58,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                            0LL);
                          if ( backMask )
                          {
                            UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v57, v58, 0LL);
                            v59 = this->fields.actionObject;
                            v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                            System_Action___ctor(
                              v60,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                              0LL);
                            if ( v59 )
                            {
                              *(UnityEngine_Vector3_o *)(&v62 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v65 = 10;
LABEL_48:
                              ServantStatusCharaGraphListViewObject__Init(
                                v59,
                                v65,
                                v60,
                                0.1,
                                *(UnityEngine_Vector3_o *)&v62,
                                v61);
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
                      ServantStatusCharaGraphViewer__SetDispType(charaGraphViewer, 1, v49);
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
                        v66 = this->fields.backMask;
                        v67 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v67,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v68 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
                        EventDelegate_Callback___ctor(
                          v68,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0LL);
                        if ( v66 )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(v66, v67, v68, 0LL);
                          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)this->fields.backMask;
                          if ( charaGraphViewer )
                          {
                            UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
                            v59 = this->fields.actionObject;
                            v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                            System_Action___ctor(
                              v60,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                              0LL);
                            if ( v59 )
                            {
                              *(UnityEngine_Vector3_o *)(&v62 - 1) = UnityEngine_Vector3__get_zero(0LL);
                              v65 = 6;
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
    sub_B5D69C(charaGraphViewer, method);
  }
  v69 = (ServantStatusCharaGraphViewer_o *)sub_B5D990(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v69, v70);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ServantStatusCharaGraphListViewManager___c_c *v34; // x0
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_0; // x22
  Il2CppObject *v37; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  ServantStatusCharaGraphListViewItem_array *v49; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v51; // x2
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x10
  struct ServantStatusCharaGraphListViewObject_o *v59; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6E24 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, v18, v19, v20);
    sub_B5D5C4(&ServantStatusCharaGraphListViewObject_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__, v27, v28, v29);
    sub_B5D5C4(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v30, v31, v32);
    byte_42E6E24 = 1;
  }
  itemList = this->fields.itemList;
  v34 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v34 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__47_0,
      v37,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_ListViewItem__ServantStatusCharaGraphListViewItem___ctor__);
    v38 = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    v38->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v38->__9__47_0,
      (System_Int32_array **)_9__47_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                    v45,
                                                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_30;
  v49 = charaGraphViewer;
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
      v49,
      v48);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_30;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v51);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_30;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
  if ( obj
    && (v58 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v58) )
  {
    v59 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v58 - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
        ? (struct ServantStatusCharaGraphListViewObject_o *)obj
        : 0LL;
  }
  else
  {
    v59 = 0LL;
  }
  this->fields.actionObject = v59;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actionObject,
    (System_Int32_array **)v59,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  actionObject = this->fields.actionObject;
  v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_30:
    sub_B5D69C(charaGraphViewer, v47);
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(actionObject, 4, v61, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v62);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnClickMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v21; // x21
  EventDelegate_Callback_o *v22; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  const MethodInfo *v24; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x3
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6E29 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v8, v9, v10);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    byte_42E6E29 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  backMask = this->fields.backMask;
  v21 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v22 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    goto LABEL_11;
  UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v21, v22, 0LL);
  actionObject = this->fields.actionObject;
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
    0LL);
  if ( !actionObject
    || (zero = UnityEngine_Vector3__get_zero(0LL),
        ServantStatusCharaGraphListViewObject__Init(
          actionObject,
          5,
          v26,
          0.1,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v27),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
LABEL_11:
    sub_B5D69C(viewerListViewManager, v24);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v16; // x8
  int32_t width; // w21
  int32_t height; // w22
  float z; // s9
  float x; // s14
  float y; // s15
  int32_t touchCount; // w25
  float v23; // s8
  float v24; // s13
  float v25; // s12
  float v26; // s10
  float v27; // s11
  const MethodInfo *v28; // x2
  _BOOL4 IsAbleToPinch; // w24
  float v30; // s15
  ServantStatusCharaGraphListViewManager_o *v31; // x0
  const MethodInfo *v32; // x2
  int v33; // s0
  ServantStatusCharaGraphListViewManager_o *v36; // x0
  const MethodInfo *v37; // x2
  float v38; // s0
  float v39; // s1
  float v40; // s2
  float v41; // s8
  float v42; // s9
  float v43; // s10
  int32_t v44; // w9
  _BOOL4 v45; // w8
  _BOOL4 v46; // w25
  int32_t v47; // w0
  float Axis; // s9
  UnityEngine_Vector2_o v49; // kr00_8
  UnityEngine_Vector2_o v50; // kr08_8
  ServantStatusCharaGraphListViewManager_o *v51; // x0
  const MethodInfo *v52; // x2
  float v53; // s0
  float v54; // s1
  float v55; // s2
  ServantStatusCharaGraphListViewManager_o *v56; // x0
  const MethodInfo *v57; // x2
  float v58; // s1
  float v59; // s2
  float v60; // s0
  float v61; // s12
  struct UnityEngine_Vector2_o *p_oldTouchPosition; // x25
  float *p_y; // x26
  float v64; // s15
  bool *p_isTouchScale; // x24
  int32_t oldTouchCount; // w8
  _BOOL4 v67; // w24
  _BOOL8 MouseButton; // x0
  float v69; // s0
  float v70; // s1
  float v71; // s2
  ServantStatusCharaGraphListViewManager_o *v72; // x0
  float v73; // s14
  float baseScale; // s8
  float v75; // s0
  _BOOL4 v76; // w8
  int klass; // w8
  int32_t v78; // w1
  float v79; // s8
  float v80; // s9
  float v81; // s10
  float v82; // s14
  float v83; // s13
  float v84; // s8
  float v85; // s9
  float v86; // s10
  ServantStatusCharaGraphListViewManager_o *v87; // x0
  const MethodInfo *v88; // x2
  float v89; // s12
  ServantStatusCharaGraphListViewManager_o *v90; // x0
  const MethodInfo *v91; // x2
  float v92; // s15
  float v93; // s11
  float v94; // s9
  ServantStatusCharaGraphListViewManager_o *v95; // x0
  const MethodInfo *v96; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  UnityEngine_Transform_o *v98; // x21
  float m_XMin; // s8
  float yMax; // s0
  float v101; // s12
  ServantStatusCharaGraphListViewManager_o *v102; // x0
  const MethodInfo *v103; // x2
  UnityEngine_Vector2_o v104; // kr20_8
  UnityEngine_Transform_o *v105; // x21
  float v106; // s10
  float yMin; // s0
  float v108; // s10
  float v109; // s11
  ServantStatusCharaGraphListViewManager_o *v110; // x0
  const MethodInfo *v111; // x2
  UnityEngine_Vector2_o v112; // kr28_8
  int v113; // w8
  int v114; // w9
  float v115; // s0
  float v116; // s8
  float v117; // s12
  int v118; // w9
  float v119; // s0
  float v120; // s1
  float v121; // s0
  float v122; // s9
  float v123; // s10
  float v124; // s11
  int v125; // s0
  float v128; // s3
  UnityEngine_Vector2_o v129; // kr30_8
  UnityEngine_Vector2_o v130; // kr38_8
  float sqrMagnitude; // s0
  float baseTouchSqrMagnitude; // s8
  __int64 v133; // x0
  float v134; // [xsp+0h] [xbp-1B0h]
  float v135; // [xsp+4h] [xbp-1ACh]
  float v136; // [xsp+14h] [xbp-19Ch]
  float v137; // [xsp+18h] [xbp-198h]
  float v138; // [xsp+1Ch] [xbp-194h]
  float v139; // [xsp+1Ch] [xbp-194h]
  float v140; // [xsp+20h] [xbp-190h]
  float v141; // [xsp+20h] [xbp-190h]
  float v142; // [xsp+24h] [xbp-18Ch]
  float v143; // [xsp+24h] [xbp-18Ch]
  float value; // [xsp+28h] [xbp-188h]
  float valuea; // [xsp+28h] [xbp-188h]
  float valueb; // [xsp+28h] [xbp-188h]
  float v147; // [xsp+2Ch] [xbp-184h]
  float v148; // [xsp+2Ch] [xbp-184h]
  float v149; // [xsp+2Ch] [xbp-184h]
  float v150; // [xsp+30h] [xbp-180h]
  float v151; // [xsp+34h] [xbp-17Ch]
  UnityEngine_Touch_o v152; // [xsp+38h] [xbp-178h] BYREF
  UnityEngine_Touch_o v153; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Touch_o v154; // [xsp+C8h] [xbp-E8h] BYREF
  MethodInfo methoda; // [xsp+110h] [xbp-A0h] BYREF
  MethodInfo var48; // [xsp+168h] [xbp-48h] BYREF
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v158; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v159; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v160; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v161; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v170; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v172; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v173; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v188; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v189; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v190; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v191; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v192; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v193; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v194; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E6E28 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9295/*"Mouse ScrollWheel"*/, v8, v9, v10);
    byte_42E6E28 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v154, 0, sizeof(v154));
  memset(&v153, 0, sizeof(v153));
  transform = (UnityEngine_Transform_o *)memset(&v152, 0, sizeof(v152));
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
      v16 = this->fields.actionObject;
      if ( !v16 )
        goto LABEL_130;
      *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v16->fields.dragObjectRect;
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
      v150 = zero.fields.x;
      v151 = zero.fields.y;
      v23 = zero.fields.z;
      v165 = UnityEngine_Vector3__get_zero(0LL);
      v24 = v165.fields.x;
      v25 = v165.fields.y;
      v26 = v165.fields.z;
      v166 = UnityEngine_Vector3__get_zero(0LL);
      v140 = v166.fields.y;
      v142 = v166.fields.x;
      v27 = v166.fields.z;
      UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Vector3__get_zero(0LL);
      transform = (UnityEngine_Transform_o *)this->fields.charaGraphViewer;
      if ( !transform )
        goto LABEL_130;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)transform, v12);
      if ( touchCount )
      {
        this->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          v30 = v23;
          if ( touchCount == 1 )
          {
            transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
            if ( !transform )
              goto LABEL_130;
            if ( LODWORD(transform[1].klass) )
            {
              memmove(&v154, &transform[1].monitor, 0x44u);
              position = UnityEngine_Touch__get_position(&v154, 0LL);
              *(UnityEngine_Vector3_o *)&v33 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v31,
                                                 position,
                                                 this->fields.camera,
                                                 v32);
              if ( !parent )
                goto LABEL_130;
              *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v33,
                                                 0LL);
              if ( this->fields.oldTouchCount == 1 )
              {
                v41 = v38;
                v42 = v39;
                v43 = v40;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v36,
                                  this->fields.oldTouchPosition,
                                  this->fields.camera,
                                  v37);
                v168 = UnityEngine_Transform__InverseTransformPoint(
                         (UnityEngine_Transform_o *)parent,
                         WorldPosition,
                         0LL);
                v150 = v41 - v168.fields.x;
                v151 = v42 - v168.fields.y;
                v30 = v43 - v168.fields.z;
              }
              else
              {
                this->fields.oldTouchCount = 1;
              }
              v46 = 0;
              v67 = 0;
              this->fields.oldTouchPosition = UnityEngine_Touch__get_position(&v154, 0LL);
              this->fields.isTouchScale = 0;
              Axis = 0.0;
              goto LABEL_58;
            }
LABEL_131:
            v133 = sub_B5D6C8(transform);
            sub_B5D668(v133, 0LL);
          }
          oldTouchCount = this->fields.oldTouchCount;
          v67 = 0;
          this->fields.oldTouchCount = 0;
          this->fields.isTouchScale = 0;
          Axis = 0.0;
          v46 = oldTouchCount > 0;
LABEL_58:
          v73 = 0.0;
          goto LABEL_59;
        }
        v138 = z;
        Axis = 0.0;
        v30 = v23;
        if ( !IsAbleToPinch )
        {
          v46 = 0;
          v67 = 0;
          goto LABEL_58;
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
        if ( !transform )
          goto LABEL_130;
        if ( !LODWORD(transform[1].klass) )
          goto LABEL_131;
        memmove(&v153, &transform[1].monitor, 0x44u);
        transform = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
        if ( !transform )
          goto LABEL_130;
        if ( LODWORD(transform[1].klass) <= 1 )
          goto LABEL_131;
        memmove(&v152, (char *)&transform[4].klass + 4, 0x44u);
        v49 = UnityEngine_Touch__get_position(&v153, 0LL);
        v50 = UnityEngine_Touch__get_position(&v152, 0LL);
        v158.fields.x = (float)(v49.fields.x + v50.fields.x) * 0.5;
        v158.fields.y = (float)(v49.fields.y + v50.fields.y) * 0.5;
        *(UnityEngine_Vector3_o *)&v53 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v51,
                                           v158,
                                           this->fields.camera,
                                           v52);
        if ( !parent )
          goto LABEL_130;
        v27 = v55;
        v140 = v54;
        v142 = v53;
        *(UnityEngine_Vector3_o *)(&v58 - 1) = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v53,
                                                 0LL);
        v24 = v60;
        v147 = v58;
        if ( this->fields.oldTouchCount == 2 )
        {
          v61 = v58;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          v64 = v59;
          v169 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v56,
                   this->fields.oldTouchPosition,
                   this->fields.camera,
                   v57);
          v170 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v169, 0LL);
          v150 = v24 - v170.fields.x;
          v151 = v61 - v170.fields.y;
          v26 = v64;
          v30 = v64 - v170.fields.z;
          p_isTouchScale = &this->fields.isTouchScale;
        }
        else
        {
          v26 = v59;
          p_isTouchScale = &this->fields.isTouchScale;
          p_oldTouchPosition = &this->fields.oldTouchPosition;
          p_y = &this->fields.oldTouchPosition.fields.y;
          this->fields.isTouchScale = 0;
          this->fields.oldTouchCount = 2;
        }
        p_oldTouchPosition->fields.x = (float)(v49.fields.x + v50.fields.x) * 0.5;
        *p_y = (float)(v49.fields.y + v50.fields.y) * 0.5;
        v129 = UnityEngine_Touch__get_position(&v153, 0LL);
        v130 = UnityEngine_Touch__get_position(&v152, 0LL);
        v161.fields.x = v129.fields.x - v130.fields.x;
        v161.fields.y = v129.fields.y - v130.fields.y;
        var48.methodPointer = (Il2CppMethodPointer)v161;
        sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v161, &var48);
        v73 = sqrMagnitude;
        if ( !*p_isTouchScale )
        {
          v46 = 0;
          v67 = 0;
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
        v46 = 0;
        v25 = v147;
        Axis = (float)(sqrtf(v73 / baseTouchSqrMagnitude) * this->fields.baseTouchScale) - value;
      }
      else
      {
        v44 = this->fields.oldTouchCount;
        v45 = 0;
        this->fields.isTouchScale = 0;
        this->fields.oldTouchCount = 0;
        v46 = v44 > 0;
        if ( x >= 0.0 )
        {
          v47 = UnityEngine_Screen__get_width(0LL);
          v45 = 0;
          if ( y >= 0.0 && x <= (float)v47 )
            v45 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        v138 = z;
        if ( v45 && IsAbleToPinch )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9295/*"Mouse ScrollWheel"*/, 0LL);
        else
          Axis = 0.0;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v159.fields.x = x;
          v159.fields.y = y;
          *(UnityEngine_Vector3_o *)&v69 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v159,
                                             this->fields.camera,
                                             v28);
          if ( !parent )
            goto LABEL_130;
          v27 = v71;
          v140 = v70;
          v142 = v69;
          v171 = UnityEngine_Transform__InverseTransformPoint(
                   (UnityEngine_Transform_o *)parent,
                   *(UnityEngine_Vector3_o *)&v69,
                   0LL);
          v24 = v171.fields.x;
          v25 = v171.fields.y;
          v26 = v171.fields.z;
          if ( this->fields.isOldMousePosition )
          {
            v172 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v72,
                     this->fields.oldMousePosition,
                     this->fields.camera,
                     v28);
            v173 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v172, 0LL);
            v150 = v24 - v173.fields.x;
            v151 = v25 - v173.fields.y;
            v23 = v26 - v173.fields.z;
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
        v73 = 0.0;
        v30 = v23;
      }
      if ( Axis == 0.0 )
      {
        v67 = 0;
      }
      else
      {
        baseScale = this->fields.baseScale;
        v75 = value + Axis;
        if ( Axis >= 0.0 || v75 >= baseScale )
        {
          v76 = Axis > 0.0 && v75 > (float)(baseScale * 3.0);
          if ( Axis > 0.0 && v75 > (float)(baseScale * 3.0) )
            baseScale = baseScale * 3.0;
          else
            baseScale = value + Axis;
        }
        else
        {
          v76 = 1;
        }
        v67 = v76;
        if ( value != baseScale )
        {
          if ( this->fields.oldTouchCount > 0 || this->fields.isOldMousePosition )
          {
            valueb = v26;
            v149 = Axis;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v185.fields.y = v140;
            v185.fields.x = v142;
            v185.fields.z = v27;
            v186 = UnityEngine_Transform__InverseTransformPoint(transform, v185, 0LL);
            v122 = v186.fields.x;
            v123 = v186.fields.y;
            v124 = v186.fields.z;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v187.fields.z = v138;
            v187.fields.x = baseScale;
            v187.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(transform, v187, 0LL);
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v188.fields.x = v122;
            v188.fields.y = v123;
            v188.fields.z = v124;
            *(UnityEngine_Vector3_o *)&v125 = UnityEngine_Transform__TransformPoint(transform, v188, 0LL);
            if ( !parent )
              goto LABEL_130;
            v189 = UnityEngine_Transform__InverseTransformPoint(
                     (UnityEngine_Transform_o *)parent,
                     *(UnityEngine_Vector3_o *)&v125,
                     0LL);
            v128 = valueb;
            Axis = v149;
            value = baseScale;
            v30 = v30 + (float)(v128 - v189.fields.z);
            v150 = v150 + (float)(v24 - v189.fields.x);
            v151 = v151 + (float)(v25 - v189.fields.y);
          }
          else
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
            if ( !transform )
              goto LABEL_130;
            v190.fields.z = v138;
            v190.fields.x = baseScale;
            v190.fields.y = baseScale;
            UnityEngine_Transform__set_localScale(transform, v190, 0LL);
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
            v78 = 2;
LABEL_66:
            ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)transform, v78, v28);
          }
        }
        else if ( klass == 2 )
        {
          v78 = 1;
          goto LABEL_66;
        }
      }
      if ( v67 && v73 > 0.0 && this->fields.isTouchScale )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
        if ( !transform )
          goto LABEL_130;
        LODWORD(this->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
        this->fields.baseTouchSqrMagnitude = v73;
      }
      v148 = Axis;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v79 = localPosition.fields.x;
      v80 = localPosition.fields.y;
      v81 = localPosition.fields.z;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v175.fields.z = v30 + v81;
      v175.fields.x = v150 + v79;
      v175.fields.y = v151 + v80;
      UnityEngine_Transform__set_localPosition(transform, v175, 0LL);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v82 = (float)width;
      v83 = (float)height;
      v176 = UnityEngine_Transform__get_position(transform, 0LL);
      v84 = v176.fields.x;
      v85 = v176.fields.y;
      v86 = v176.fields.z;
      v160 = UnityEngine_Vector2__get_zero(0LL);
      v177 = ServantStatusCharaGraphListViewManager__GetWorldPosition(v87, v160, this->fields.camera, v88);
      v137 = v177.fields.x;
      v89 = v177.fields.y;
      v177.fields.x = (float)width;
      v177.fields.y = (float)height;
      v178 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
               v90,
               *(UnityEngine_Vector2_o *)&v177.fields.x,
               this->fields.camera,
               v91);
      v92 = v178.fields.x;
      v93 = v178.fields.y;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( !transform )
        goto LABEL_130;
      v139 = v89;
      v141 = v85;
      v143 = v84;
      v179 = UnityEngine_Transform__get_position(transform, 0LL);
      v94 = v179.fields.x;
      v135 = v179.fields.y;
      SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v95, v179, this->fields.camera, v96);
      v98 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      v192.fields.m_XMin = UnityEngine_Rect__get_xMin(v191, &methoda);
      m_XMin = v192.fields.m_XMin;
      yMax = UnityEngine_Rect__get_yMax(v192, &methoda);
      if ( !v98 )
        goto LABEL_130;
      v180.fields.y = yMax;
      v180.fields.z = 0.0;
      v180.fields.x = m_XMin;
      v136 = v93;
      valuea = v86;
      v181 = UnityEngine_Transform__TransformPoint(v98, v180, 0LL);
      v101 = v181.fields.x;
      v134 = v181.fields.y;
      v104 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v102, v181, this->fields.camera, v103);
      v105 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      v194.fields.m_XMin = UnityEngine_Rect__get_xMax(v193, &methoda);
      v106 = v194.fields.m_XMin;
      yMin = UnityEngine_Rect__get_yMin(v194, &methoda);
      if ( !v105 )
LABEL_130:
        sub_B5D69C(transform, v12);
      v182.fields.y = yMin;
      v182.fields.z = 0.0;
      v182.fields.x = v106;
      v183 = UnityEngine_Transform__TransformPoint(v105, v182, 0LL);
      v108 = v183.fields.x;
      v109 = v183.fields.y;
      v112 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v110, v183, this->fields.camera, v111);
      v113 = v148 < 0.0 || v46;
      v114 = v113 | (v150 > 0.0);
      if ( (float)(v112.fields.x - v104.fields.x) <= v82 )
      {
        if ( !((v114 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v82 * 0.5))) )
        {
          v115 = (float)((float)(v137 + v92) * 0.5) - v94;
          goto LABEL_83;
        }
        v117 = v141;
        v116 = v143;
        if ( (v113 | (v150 < 0.0)) == 1 && SreenPosition.fields.x < (float)(v82 * 0.5) )
        {
          v115 = (float)((float)(v137 + v92) * 0.5) - v94;
          goto LABEL_84;
        }
      }
      else
      {
        if ( !((v114 ^ 1) & 1 | (v104.fields.x <= 0.0)) )
        {
          v115 = v137 - v101;
LABEL_83:
          v117 = v141;
          v116 = v143;
LABEL_84:
          v116 = v116 + v115;
          goto LABEL_85;
        }
        if ( (v113 | (v150 < 0.0)) == 1 )
        {
          v117 = v141;
          v116 = v143;
          if ( v112.fields.x < v82 )
          {
            v115 = v92 - v108;
            goto LABEL_84;
          }
        }
        else
        {
          v117 = v141;
          v116 = v143;
        }
      }
LABEL_85:
      v118 = v113 | (v151 > 0.0);
      if ( (float)(v112.fields.y - v104.fields.y) <= v83 )
      {
        if ( !((v118 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v83 * 0.5)))
          || (v113 | (v151 < 0.0)) == 1 && SreenPosition.fields.y < (float)(v83 * 0.5) )
        {
          v119 = (float)(v139 + v136) * 0.5;
          v120 = v135;
          goto LABEL_92;
        }
      }
      else
      {
        if ( !((v118 ^ 1) & 1 | (v104.fields.y <= 0.0)) )
        {
          v119 = v139;
          v120 = v134;
LABEL_92:
          v121 = v119 - v120;
LABEL_93:
          v117 = v117 + v121;
          goto LABEL_94;
        }
        if ( (v113 | (v151 < 0.0)) == 1 && v112.fields.y < v83 )
        {
          v121 = v136 - v109;
          goto LABEL_93;
        }
      }
LABEL_94:
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
      if ( transform )
      {
        v184.fields.z = valuea;
        v184.fields.x = v116;
        v184.fields.y = v117;
        UnityEngine_Transform__set_position(transform, v184, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v12; // x21
  EventDelegate_Callback_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E6E2C & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v5, v6, v7);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v8, v9, v10);
    byte_42E6E2C = 1;
  }
  backMask = this->fields.backMask;
  v12 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v13 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B5D69C(v14, v15);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v12, v13, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v12; // x21
  EventDelegate_Callback_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E6E2A & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v5, v6, v7);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v8, v9, v10);
    byte_42E6E2A = 1;
  }
  backMask = this->fields.backMask;
  v12 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v13 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_B5D69C(v14, v15);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v12, v13, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UnityEngine_Camera_o *main; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v25; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  const MethodInfo *v27; // x2
  float v28; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v30; // x21
  const MethodInfo *v31; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v33; // x21
  EventDelegate_Callback_o *v34; // x22

  if ( (byte_42E6E25 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v8, v9, v10);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__, v14, v15, v16);
    byte_42E6E25 = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.camera,
    (System_Int32_array **)main,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v28) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v28;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].klass) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v27);
    charaGraphViewer = this->fields.charaGraphViewer;
    v30 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_B5D694(ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v30,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      0LL);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v30, v31);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v33 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v33,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v34 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v34,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_B5D69C(dragObject, v25);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v33, v34, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2

  backMask = this->fields.backMask;
  if ( !backMask )
    sub_B5D69C(0LL, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_22146544(this, 3, v4);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  RandomLimitCountManager_c *v6; // x0

  if ( (byte_42E6E30 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    byte_42E6E30 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    byte_42E6BE7 = 1;
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
      sub_B5D69C(v6, mainInfo);
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
  __int64 v3; // x3
  RandomLimitCountManager_c *v6; // x0

  if ( (byte_42E6E2F & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    byte_42E6E2F = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    byte_42E6BE7 = 1;
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
      sub_B5D69C(v6, mainInfo);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *actionObject; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct ServantStatusCharaGraphListViewObject_o *v12; // x8
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E6E23 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___,
      (_DWORD)item,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E6E23 = 1;
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
      v12 = this->fields.actionObject;
      if ( !v12 )
        goto LABEL_17;
      dragObject = (UnityEngine_Object_o *)v12->fields.dragObject;
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
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_17:
        sub_B5D69C(Component_srcLineSprite, v11);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_srcLineSprite,
        item,
        v14);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnMoveEnd(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42E6E22 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6E22 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6E20 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E6E20 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v33,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_22146544(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6E21 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42E6E21 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v31,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetEnableScroll(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *statusItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool v6; // w19
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x10

  if ( (byte_42E6E2E & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusCharaGraphListViewIndicator_TypeInfo, (_DWORD)statusItem, (_DWORD)method, v3);
    byte_42E6E2E = 1;
  }
  if ( statusItem )
  {
    v6 = statusItem->fields.isCollection || !statusItem->fields.isEnableOwnRandomSetting;
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, v6, 0LL),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.indicator) == 0LL)
      || (v9 = *(&ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.bitflags2 + 1),
          *(&scrollView->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (ServantStatusCharaGraphListViewIndicator_c *)scrollView->klass->_2.typeHierarchy[v9 - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
    {
      sub_B5D69C(scrollView, statusItem);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_22146376(this, mode, v10);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_22146376(
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
  ServantStatusCharaGraphListViewManager__RequestListObject_22146544(this, v6, v5);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_22146488(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_22146376(this, mode, v10);
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
  if ( (byte_42E6E1F & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_B5D5C4(
                                                         &ServantStatusCharaGraphListViewObject_TypeInfo,
                                                         (_DWORD)obj,
                                                         (_DWORD)item,
                                                         method);
    byte_42E6E1F = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
    sub_B5D69C(0LL, isVisible);
  ServantStatusDialog__SetVisibleHighPriorityObject(servantStatusDialog, isVisible, method);
}


void __fastcall ServantStatusCharaGraphListViewManager__add_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusCharaGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6E14 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6E14 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v8->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_B5D990(v8);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantStatusCharaGraphListViewManager__add_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6E16 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6E16 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_B5D990(v8);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E6E19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E6E19 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)current,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v29;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E6E18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E6E18 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v29;
}


void __fastcall ServantStatusCharaGraphListViewManager__remove_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusCharaGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6E15 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6E15 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v8->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_B5D990(v8);
  ServantStatusCharaGraphListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall ServantStatusCharaGraphListViewManager__remove_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E6E17 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6E17 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_B5D990(v8);
  ServantStatusCharaGraphListViewManager__get_ObjectList(v11, v12);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5D96 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5D96 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D94 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5D94 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantStatusCharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E5D95 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusCharaGraphListViewItem_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5D95 = 1;
  }
  if ( !x )
    return 0LL;
  v5 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&x->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)x->klass->_2.typeHierarchy[v5 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)x;
  return 0LL;
}