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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B121C2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v4, v5);
    byte_4B121C2 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL4 isEnableOwnRandomSetting; // w22
  int32_t v13; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  v3 = mainInfo;
  if ( (byte_4B121C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, mainInfo, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, v9, v10);
    byte_4B121C1 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, method);
    byte_4B12177 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
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
      sub_1BCAA3C(itemList, mainInfo);
    v13 = 0;
    while ( v13 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v13,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantStatusCharaGraphListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo
          && LODWORD(Item[7].monitor) == v3->fields.cardLimitCount )
        {
          ListViewManager__MoveCenterItem((ListViewManager_o *)this, v13, 0, 0, 0.0, 0LL);
          if ( !isEnableOwnRandomSetting )
            this->fields.manualSelectedIndex = v13;
          return;
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v13;
      if ( !itemList )
        goto LABEL_20;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__ChangeServantInfo(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *charaGraphViewer; // x0
  struct ListViewItem_o *centerItem; // x20
  __int64 methodPtr_low; // x9
  int32_t SvtId; // w0
  int monitor; // w22
  int32_t v19; // w21
  const MethodInfo *v20; // x2
  int32_t v21; // w23
  bool v22; // zf
  const MethodInfo *v23; // x2
  ServantLimitAddMaster_o *v24; // x23
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x24
  int32_t OverwriteCvId; // w24
  const MethodInfo *v29; // x2
  ListViewItem_c *klass; // x8
  ServantStatusCharaGraphListViewManager_o *v31; // x0
  const MethodInfo *v32; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B121C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, v12, v13);
    byte_4B121C3 = 1;
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
        v31 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCACFC(this->fields.centerItem);
        ServantStatusCharaGraphListViewManager__OnFinishedChangeCharaGraph(v31, v32);
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
  v19 = SvtId;
  if ( monitor <= 10 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !charaGraphViewer )
      goto LABEL_52;
    monitor = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                (ServantLimitImageMaster_o *)charaGraphViewer,
                v19,
                monitor + 1,
                0LL);
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  if ( ServantStatusListViewItem__UpdateServantComment(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v19,
         monitor,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateProfileList((ServantStatusDialog_o *)charaGraphViewer, 1, v20);
  }
  if ( monitor == 1 )
  {
    v21 = 0;
  }
  else
  {
    v22 = this->fields.cardLimitCount == 1 && monitor == 2;
    v21 = v22 ? 1 : monitor;
  }
  charaGraphViewer = centerItem[1].klass;
  if ( !charaGraphViewer )
    goto LABEL_52;
  if ( ServantStatusListViewItem__IsUpdateServantParameters(
         (ServantStatusListViewItem_o *)charaGraphViewer,
         v19,
         v21,
         0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateServantParameters((ServantStatusDialog_o *)charaGraphViewer, v21, v23);
  }
  if ( monitor == 1 )
    monitor = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !charaGraphViewer )
    goto LABEL_52;
  v24 = (ServantLimitAddMaster_o *)charaGraphViewer;
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)charaGraphViewer, v19, 0LL) )
  {
    charaGraphViewer = this->fields.servantStatusDialog;
    if ( !charaGraphViewer )
      goto LABEL_52;
    ServantStatusDialog__UpdateServantDetailName((ServantStatusDialog_o *)charaGraphViewer, monitor, v25);
  }
  if ( !ServantLimitAddMaster__IsOverwriteCv(v24, v19, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
  charaGraphViewer = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !centerItem[1].klass )
    goto LABEL_52;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)charaGraphViewer;
  charaGraphViewer = (void *)ServantStatusListViewItem__get_SvtId(
                               (ServantStatusListViewItem_o *)centerItem[1].klass,
                               0LL);
  if ( !v27 )
    goto LABEL_52;
  charaGraphViewer = DataMasterBase_object__object__int___GetEntity(
                       v27,
                       (int32_t)charaGraphViewer,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !charaGraphViewer )
    goto LABEL_52;
  OverwriteCvId = *((_DWORD *)charaGraphViewer + 51);
  if ( ServantLimitAddMaster__TryGetEntity(v24, &entity, v19, monitor, 0LL) )
  {
    charaGraphViewer = entity;
    if ( !entity )
      goto LABEL_52;
    OverwriteCvId = ServantLimitAddEntity__GetOverwriteCvId(entity, OverwriteCvId, 0LL);
  }
  charaGraphViewer = this->fields.servantStatusDialog;
  if ( !charaGraphViewer
    || (ServantStatusDialog__UpdateCv((ServantStatusDialog_o *)charaGraphViewer, OverwriteCvId, v29),
        (klass = centerItem[1].klass) == 0LL) )
  {
LABEL_52:
    sub_1BCAA3C(charaGraphViewer, method);
  }
  LODWORD(klass[1]._1.interopData) = monitor;
}


void __fastcall ServantStatusCharaGraphListViewManager__CreateList(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 debugScaleLabel; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  int32_t ConvertOverwriteCardImageLimitCount; // w22
  ServantStatusCharaGraphListViewItem_c *v30; // x0
  struct System_Int32_array *cardSelectList; // x26
  __int64 v32; // x23
  int32_t cardLimitCount; // w27
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  unsigned __int64 v38; // x28
  int32_t v39; // w25
  int32_t v40; // w22
  __int64 v41; // x29
  int32_t v42; // w21
  int64_t v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  int64_t v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  Il2CppObject *Component_object; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  const MethodInfo *v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  System_Action_o *v88; // x22
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  __int64 v95; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x22
  __int64 v97; // x2
  __int64 v98; // x3
  PartyOrganizationUtility_o *p_monitor; // x22
  System_Delegate_o *monitor; // t1
  SpringPanel_OnFinished_o *v101; // x24
  System_Delegate_o *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x8
  SpringPanel_OnFinished_c *v110; // x1
  RandomLimitCountManager_c *v111; // x0

  if ( (byte_4B121AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mainInfo, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&SpringPanel_OnFinished_TypeInfo, v13, v14);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, v19, v20);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    byte_4B121AA = 1;
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
    v30 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  else
  {
    if ( mainInfo->fields.userGameEntity && mainInfo->fields.userSvtCollectionEntity )
    {
      cardSelectList = mainInfo->fields.cardSelectList;
      if ( !cardSelectList )
        goto LABEL_54;
      v32 = *(_QWORD *)&cardSelectList->max_length;
      cardLimitCount = mainInfo->fields.cardLimitCount;
      ListViewManager__CreateList((ListViewManager_o *)this, v32, 0LL);
      if ( (int)v32 >= 1 )
      {
        v38 = 0LL;
        v39 = 0;
        v40 = 0;
        v41 = (unsigned int)v32;
        while ( 1 )
        {
          if ( v38 >= cardSelectList->max_length )
            sub_1BCAA44(v34, v35);
          v42 = cardSelectList->m_Items[v38 + 1];
          if ( (v42 & 0x80000000) == 0 )
          {
            v43 = sub_1BCAA2C(ServantStatusCharaGraphListViewItem_TypeInfo, v35, v36, v37);
            ListViewItem___ctor_41447164((ListViewItem_o *)v43, v40, 0LL);
            *(_QWORD *)(v43 + 112) = mainInfo;
            sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 112), (int64_t)mainInfo, v44, v45, v46, v47, v48, v49);
            *(_DWORD *)(v43 + 120) = v42;
            if ( v42 == cardLimitCount )
              v39 = *(_DWORD *)(v43 + 20);
            if ( v42 == ServantStatusListViewItem__get_ManualSetCardLimitCount(mainInfo, 0LL) )
              this->fields.manualSelectedIndex = *(_DWORD *)(v43 + 20);
            debugScaleLabel = (__int64)this->fields.itemList;
            if ( !debugScaleLabel )
              goto LABEL_54;
            v56 = *(_QWORD *)(debugScaleLabel + 16);
            v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(debugScaleLabel + 28);
            if ( !v56 )
              goto LABEL_54;
            v58 = *(int *)(debugScaleLabel + 24);
            ++v40;
            if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)debugScaleLabel,
                (Il2CppObject *)v43,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = v56 + 8 * v58;
              *(_DWORD *)(debugScaleLabel + 24) = v58 + 1;
              *(_QWORD *)(v59 + 32) = v43;
              sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 32), v43, v50, v51, v52, v53, v54, v55);
            }
          }
          if ( v41 == ++v38 )
            goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    ListViewManager__CreateList((ListViewManager_o *)this, 1, 0LL);
    ConvertOverwriteCardImageLimitCount = mainInfo->fields.cardLimitCount;
    v30 = ServantStatusCharaGraphListViewItem_TypeInfo;
  }
  v60 = sub_1BCAA2C(v30, v26, v27, v28);
  ListViewItem___ctor_41447164((ListViewItem_o *)v60, 0, 0LL);
  *(_QWORD *)(v60 + 112) = mainInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 112), (int64_t)mainInfo, v61, v62, v63, v64, v65, v66);
  *(_DWORD *)(v60 + 120) = ConvertOverwriteCardImageLimitCount;
  debugScaleLabel = (__int64)this->fields.itemList;
  if ( !debugScaleLabel )
    goto LABEL_54;
  v73 = *(_QWORD *)(debugScaleLabel + 16);
  v74 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(debugScaleLabel + 28);
  if ( !v73 )
    goto LABEL_54;
  v75 = *(int *)(debugScaleLabel + 24);
  if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)debugScaleLabel,
      (Il2CppObject *)v60,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
  }
  else
  {
    v76 = v73 + 8 * v75;
    *(_DWORD *)(debugScaleLabel + 24) = v75 + 1;
    *(_QWORD *)(v76 + 32) = v60;
    sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 32), v60, v67, v68, v69, v70, v71, v72);
  }
LABEL_31:
  v39 = 0;
LABEL_32:
  debugScaleLabel = ((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._7_GetDragRoot.method)(
                      this,
                      this->klass->vtable._8_ItemDragStart.methodPtr);
  if ( !debugScaleLabel )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)debugScaleLabel,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.backMask,
    (int64_t)Component_object,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  ListViewManager__SortItem((ListViewManager_o *)this, v39, 0, -1, 0LL);
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, mainInfo, v84);
  v88 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v85, v86, v87);
  System_Action___ctor(
    v88,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0LL);
  this->fields.callbackAfterScroll = v88;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll,
    (int64_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  debugScaleLabel = (__int64)this->fields.scrollView;
  if ( !debugScaleLabel )
    goto LABEL_54;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)debugScaleLabel,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
  debugScaleLabel = UnityEngine_Object__op_Inequality(
                      (UnityEngine_Object_o *)ComponentInChildren_object__49322392,
                      0LL,
                      0LL);
  if ( (debugScaleLabel & 1) != 0 )
  {
    if ( ComponentInChildren_object__49322392 )
    {
      monitor = (System_Delegate_o *)ComponentInChildren_object__49322392[2].monitor;
      p_monitor = (PartyOrganizationUtility_o *)&ComponentInChildren_object__49322392[2].monitor;
      v101 = (SpringPanel_OnFinished_o *)sub_1BCAA2C(SpringPanel_OnFinished_TypeInfo, mainInfo, v97, v98);
      SpringPanel_OnFinished___ctor(
        v101,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
        0LL);
      v102 = System_Delegate__Combine(monitor, (System_Delegate_o *)v101, 0LL);
      v109 = (int64_t)v102;
      if ( v102 )
      {
        v110 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v102->klass == SpringPanel_OnFinished_TypeInfo )
        {
          p_monitor->klass = (PartyOrganizationUtility_c *)v102;
          if ( (SpringPanel_OnFinished_c *)v102->klass == v110 )
            goto LABEL_43;
        }
        sub_1BCACFC(v102);
      }
      p_monitor->klass = (PartyOrganizationUtility_c *)v109;
LABEL_43:
      sub_1BCA784(p_monitor, v109, v103, v104, v105, v106, v107, v108);
      goto LABEL_44;
    }
LABEL_54:
    sub_1BCAA3C(debugScaleLabel, mainInfo);
  }
LABEL_44:
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, v97);
    byte_4B12177 = 1;
  }
  v111 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
    v111 = RandomLimitCountManager_TypeInfo;
  }
  if ( v111->static_fields->enableRandomLimitCount && !mainInfo->fields.isEnableOwnRandomSetting )
    this->fields.manualSelectedIndex = v39;
  this->fields.cardLimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_4B121AB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B121AB = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(dragBackSprite, method);
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
    sub_1BCAA3C(dragBackSprite, method);
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
    sub_1BCAA3C(dragBackSprite, method);
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
  __int64 v6; // x2
  ServantStatusCharaGraphListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B121AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, v5, v6);
    byte_4B121AE = 1;
  }
  result = (ServantStatusCharaGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusCharaGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v6; // x2
  struct ListViewIndicator_o *indicator; // x8
  __int64 methodPtr_low; // x11
  int32_t monitor_high; // w21

  v4 = this;
  if ( (byte_4B121AD & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, method);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCA7E0(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         v5,
                                                         v6);
    byte_4B121AD = 1;
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
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, method);
    byte_4B12177 = 1;
  }
  this = (ServantStatusCharaGraphListViewManager_o *)RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
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
    sub_1BCAA3C(this, mainInfo);
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
  if ( (byte_4B121AC & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCA7E0(
                                                         &ServantStatusCharaGraphListViewIndicator_TypeInfo,
                                                         method,
                                                         v2);
    byte_4B121AC = 1;
  }
  indicator = v3->fields.indicator;
  if ( !indicator
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo )
  {
    sub_1BCAA3C(this, method);
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
  __int64 v10; // x2
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v12; // s0
  float v13; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4B121B7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, cam, method);
    byte_4B121B7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, cam);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v8 )
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v9, v10);
      byte_4B108BA = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v12 = static_fields->zeroVector.fields.x;
    v13 = static_fields->zeroVector.fields.y;
  }
  else
  {
    if ( !cam )
      sub_1BCAA3C(v8, v9);
    v15.fields.x = x;
    v15.fields.y = y;
    v15.fields.z = z;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Camera__WorldToScreenPoint_69960448(cam, v15, 0LL);
  }
  result.fields.y = v13;
  result.fields.x = v12;
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
  __int64 v9; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v11; // s0
  float v12; // s1
  float z; // s2
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4B121B6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, cam, method);
    byte_4B121B6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, cam);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( v7 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v9);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.x;
    v12 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !cam )
      sub_1BCAA3C(v7, v8);
    v14.fields.z = 0.0;
    v14.fields.x = x;
    v14.fields.y = y;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__ScreenToWorldPoint_69960472(cam, v14, 0LL);
  }
  result.fields.z = z;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickExViewer(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusCharaGraphListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  Il2CppObject *Component_object; // x20
  const MethodInfo *v19; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  const MethodInfo *v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  EventDelegate_Callback_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  EventDelegate_Callback_o *v32; // x22
  ServantStatusCharaGraphListViewObject_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x3

  v3 = this;
  if ( (byte_4B121BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v10, v11);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v12, v13);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCA7E0(
                                                         &Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                                                         v14,
                                                         v15);
    byte_4B121BD = 1;
  }
  actionObject = v3->fields.actionObject;
  if ( !actionObject )
    goto LABEL_24;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL);
  Component_object = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)dragObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      v19);
  }
  charaGraphViewer = v3->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_24;
  this = (ServantStatusCharaGraphListViewManager_o *)charaGraphViewer->fields.viewerListViewManager;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
    (ServantStatusCharaGraphViewerListViewManager_o *)this,
    0,
    v19);
  this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v21);
  this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, method);
  v22 = Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 1, 0LL);
  backMask = v3->fields.backMask;
  v28 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v25, v26, v27);
  EventDelegate_Callback___ctor(
    v28,
    (Il2CppObject *)v3,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v32 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v29, v30, v31);
  EventDelegate_Callback___ctor(
    v32,
    (Il2CppObject *)v3,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v28, v32, 0LL),
        (this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.backMask) == 0LL)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0LL),
        v33 = v3->fields.actionObject,
        v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36),
        System_Action___ctor(v37, (Il2CppObject *)v3, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0LL),
        !v33) )
  {
LABEL_24:
    sub_1BCAA3C(this, method);
  }
  ServantStatusCharaGraphListViewObject__Init_32914288(v33, 6, v37, 0.1, v38);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  ServantStatusCharaGraphListViewItem_o *CenterItem; // x20
  __int64 methodPtr_low; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  ServantLimitImageMaster_o *v32; // x21
  const MethodInfo *v33; // x2
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  struct ServantStatusCharaGraphViewer_o *v37; // x8
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v41; // x2
  __int64 v42; // x3
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  EventDelegate_Callback_o *v48; // x22
  ServantStatusCharaGraphListViewObject_o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_o *v53; // x21
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  UIDragDropListViewBackMask_o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  EventDelegate_Callback_o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  EventDelegate_Callback_o *v66; // x22
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  ServantStatusCharaGraphViewer_o *v70; // x0
  const MethodInfo *v71; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B121BB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v18, v19);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v20, v21);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, v22, v23);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    byte_4B121BB = 1;
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
    charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( charaGraphViewer )
    {
      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)charaGraphViewer,
                                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( CenterItem )
      {
        v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)charaGraphViewer;
        charaGraphViewer = (ServantStatusCharaGraphViewer_o *)CenterItem->fields.mainInfo;
        if ( charaGraphViewer )
        {
          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                  (ServantStatusListViewItem_o *)charaGraphViewer,
                                                                  0LL);
          if ( v31 )
          {
            DataMasterBase_object__object__int___TryGetEntity(
              v31,
              &entity,
              (int32_t)charaGraphViewer,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            charaGraphViewer = (ServantStatusCharaGraphViewer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( charaGraphViewer )
            {
              charaGraphViewer = (ServantStatusCharaGraphViewer_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)charaGraphViewer,
                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
              if ( CenterItem->fields.mainInfo )
              {
                v32 = (ServantLimitImageMaster_o *)charaGraphViewer;
                charaGraphViewer = (ServantStatusCharaGraphViewer_o *)ServantStatusListViewItem__get_SvtId(
                                                                        CenterItem->fields.mainInfo,
                                                                        0LL);
                if ( v32 )
                {
                  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
                          v32,
                          (int32_t)charaGraphViewer,
                          CenterItem->fields.imageLimitCount,
                          0LL)
                    && entity
                    && ServantEntity__IsAdditionExpandImage(
                         (ServantEntity_o *)entity,
                         CenterItem->fields.imageLimitCount,
                         0LL) )
                  {
                    v34 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                    if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                      v34 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                    v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
                    OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
                    v37 = this->fields.charaGraphViewer;
                    if ( v37 )
                    {
                      charaGraphViewer = (ServantStatusCharaGraphViewer_o *)v37->fields.viewerListViewManager;
                      if ( charaGraphViewer )
                      {
                        ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
                          (ServantStatusCharaGraphViewerListViewManager_o *)charaGraphViewer,
                          1,
                          v36);
                        actionObject = this->fields.actionObject;
                        if ( actionObject )
                        {
                          dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
                          }
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                              v41);
                          }
                          backMask = this->fields.backMask;
                          v44 = (EventDelegate_Callback_o *)sub_1BCAA2C(
                                                              EventDelegate_Callback_TypeInfo,
                                                              method,
                                                              v41,
                                                              v42);
                          EventDelegate_Callback___ctor(
                            v44,
                            (Il2CppObject *)this,
                            (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                            0LL);
                          v48 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v45, v46, v47);
                          EventDelegate_Callback___ctor(
                            v48,
                            (Il2CppObject *)this,
                            Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                            0LL);
                          if ( backMask )
                          {
                            UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v44, v48, 0LL);
                            v49 = this->fields.actionObject;
                            v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v50, v51, v52);
                            System_Action___ctor(
                              v53,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndAnother__,
                              0LL);
                            if ( v49 )
                            {
                              v55 = 10;
LABEL_44:
                              ServantStatusCharaGraphListViewObject__Init_32914288(v49, v55, v53, 0.1, v54);
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
                      ServantStatusCharaGraphViewer__SetDispType(charaGraphViewer, 1, v33);
                      charaGraphViewer = this->fields.charaGraphViewer;
                      if ( charaGraphViewer )
                      {
                        ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(charaGraphViewer, method);
                        v56 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
                        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
                          v56 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
                        v57 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v56, v56[4]);
                        OverwriteAssetSoundName__PlaySystemSe(v57, 1, 0LL);
                        v58 = this->fields.backMask;
                        v62 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v59, v60, v61);
                        EventDelegate_Callback___ctor(
                          v62,
                          (Il2CppObject *)this,
                          (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
                          0LL);
                        v66 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v63, v64, v65);
                        EventDelegate_Callback___ctor(
                          v66,
                          (Il2CppObject *)this,
                          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
                          0LL);
                        if ( v58 )
                        {
                          UIDragDropListViewBackMask__DragEndMultiTouch(v58, v62, v66, 0LL);
                          charaGraphViewer = (ServantStatusCharaGraphViewer_o *)this->fields.backMask;
                          if ( charaGraphViewer )
                          {
                            UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
                            v49 = this->fields.actionObject;
                            v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
                            System_Action___ctor(
                              v53,
                              (Il2CppObject *)this,
                              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
                              0LL);
                            if ( v49 )
                            {
                              v55 = 6;
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
    sub_1BCAA3C(charaGraphViewer, method);
  }
  v70 = (ServantStatusCharaGraphViewer_o *)sub_1BCACFC(this->fields.centerItem);
  ServantStatusCharaGraphViewer__GetCenterItem(v70, v71);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusCharaGraphListViewManager___c_c *v22; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__object__o *_9__47_0; // x22
  Il2CppObject *v25; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  ServantStatusCharaGraphListViewItem_array *v37; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v39; // x2
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppClass *v48; // x8
  __int64 methodPtr_low; // x9
  struct ServantStatusCharaGraphListViewObject_o *v50; // x10
  ListViewObject_o *v51; // x1
  struct ServantStatusCharaGraphListViewObject_o **p_actionObject; // x0
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x21
  const MethodInfo *v58; // x3

  if ( (byte_4B121B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___, v8, v9);
    sub_1BCA7E0(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnClickListView__, v12, v13);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, v14, v15);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewObject_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__, v18, v19);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v20, v21);
    byte_4B121B4 = 1;
  }
  v22 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo, obj);
    v22 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  _9__47_0 = (System_Func_object__object__o *)v22->static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, obj);
      v22 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__47_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo,
                                                  obj,
                                                  method,
                                                  v3);
    System_Func_object__object____ctor(
      _9__47_0,
      v25,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__47_0__,
      0LL);
    static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__47_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__47_0,
      (int64_t)_9__47_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__47_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_object_(
                                                                    v33,
                                                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_33;
  v37 = charaGraphViewer;
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
      v37,
      v36);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_33;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v39);
  }
  v40 = Method_ServantStatusCharaGraphListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v40 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
  v41 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v40, v40[4]);
  OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_33;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0LL);
  if ( obj )
  {
    v48 = (Il2CppClass *)ServantStatusCharaGraphListViewObject_TypeInfo;
    methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v50 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
          ? (struct ServantStatusCharaGraphListViewObject_o *)obj
          : 0LL;
    else
      v50 = 0LL;
    this->fields.actionObject = v50;
    p_actionObject = &this->fields.actionObject;
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v51 = obj->klass->_2.typeHierarchy[methodPtr_low - 1] == v48 ? obj : 0LL;
    else
      v51 = 0LL;
  }
  else
  {
    v51 = 0LL;
    p_actionObject = &this->fields.actionObject;
    this->fields.actionObject = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_actionObject, (int64_t)v51, v42, v43, v44, v45, v46, v47);
  actionObject = this->fields.actionObject;
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0LL);
  if ( !actionObject )
LABEL_33:
    sub_1BCAA3C(charaGraphViewer, v35);
  ServantStatusCharaGraphListViewObject__Init_32914288(actionObject, 4, v57, 0.1, v58);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnClickMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  EventDelegate_Callback_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  EventDelegate_Callback_o *v22; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  const MethodInfo *v24; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8

  if ( (byte_4B121B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v6, v7);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v8, v9);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__, v10, v11);
    byte_4B121B9 = 1;
  }
  v12 = Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  backMask = this->fields.backMask;
  v18 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v15, v16, v17);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v22 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v19, v20, v21);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v18, v22, 0LL),
        actionObject = this->fields.actionObject,
        v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28),
        System_Action___ctor(
          v29,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
          0LL),
        !actionObject)
    || (ServantStatusCharaGraphListViewObject__Init_32914288(actionObject, 5, v29, 0.1, v30),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0LL)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0LL )
  {
    sub_1BCAA3C(viewerListViewManager, v24);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusCharaGraphListViewManager_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  __int64 v10; // x1
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v12; // x8
  float m_XMin; // s9
  float m_YMin; // s11
  float m_Width; // s10
  float m_Height; // s14
  int32_t width; // w21
  int32_t height; // w22
  float x; // s8
  float y; // s12
  __int64 v21; // x2
  int32_t touchCount; // w25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v24; // s13
  float v25; // s15
  const MethodInfo *v26; // x2
  _BOOL4 IsAbleToPinch; // w24
  ServantStatusCharaGraphListViewManager_o *v28; // x0
  const MethodInfo *v29; // x2
  int v30; // s0
  ServantStatusCharaGraphListViewManager_o *v33; // x0
  const MethodInfo *v34; // x2
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s8
  float v39; // s9
  float v40; // s10
  int32_t v41; // w9
  _BOOL4 v42; // w8
  _BOOL4 v43; // w25
  int32_t v44; // w0
  float Axis; // s0
  UnityEngine_Vector2_o v46; // kr00_8
  UnityEngine_Vector2_o v47; // kr08_8
  float v48; // s12
  ServantStatusCharaGraphListViewManager_o *v49; // x0
  const MethodInfo *v50; // x2
  float v51; // s0
  float v52; // s1
  float v53; // s2
  ServantStatusCharaGraphListViewManager_o *v54; // x0
  const MethodInfo *v55; // x2
  float v56; // s0
  float v57; // s1
  float v58; // s9
  float v59; // s2
  float v60; // s10
  float v61; // s14
  float v62; // s11
  float v63; // s0
  int32_t oldTouchCount; // w8
  char v65; // w24
  _BOOL8 MouseButton; // x0
  float v67; // s14
  float v68; // s0
  float v69; // s1
  float v70; // s2
  ServantStatusCharaGraphListViewManager_o *v71; // x0
  float v72; // s9
  float v73; // s10
  float v74; // s11
  float v75; // s0
  float v76; // s3
  float v77; // s0
  float v78; // s12
  float v79; // s2
  float baseScale; // s8
  float v81; // s0
  _BOOL4 v82; // w8
  _BOOL4 v83; // w9
  int emptyMessageLabel; // w8
  int32_t v85; // w1
  float v86; // s8
  float v87; // s9
  float v88; // s10
  float v89; // s0
  float v90; // s10
  ServantStatusCharaGraphListViewManager_o *v91; // x0
  __int64 v92; // x1
  const MethodInfo *v93; // x2
  float v94; // s8
  float v95; // s9
  ServantStatusCharaGraphListViewManager_o *v96; // x0
  const MethodInfo *v97; // x2
  float v98; // s8
  ServantStatusCharaGraphListViewManager_o *v99; // x0
  const MethodInfo *v100; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  float v102; // s9
  ServantStatusCharaGraphListViewManager_o *v103; // x0
  const MethodInfo *v104; // x2
  UnityEngine_Vector2_o v105; // kr20_8
  float v106; // s13
  float v107; // s11
  ServantStatusCharaGraphListViewManager_o *v108; // x0
  const MethodInfo *v109; // x2
  UnityEngine_Vector2_o v110; // kr28_8
  int v111; // w8
  int v112; // w9
  float v113; // s3
  float v114; // s10
  float v115; // s0
  float v116; // s9
  float v117; // s0
  bool v118; // nf
  int v119; // w9
  float v120; // s0
  float v121; // s1
  float v122; // s1
  float v123; // s0
  float v124; // s0
  float v125; // s11
  int v126; // s0
  UnityEngine_Vector2_o v129; // kr30_8
  UnityEngine_Vector2_o v130; // kr38_8
  float baseTouchSqrMagnitude; // s8
  float v132; // s0
  float v133; // [xsp+8h] [xbp-1B8h]
  float v134; // [xsp+Ch] [xbp-1B4h]
  float v135; // [xsp+14h] [xbp-1ACh]
  float v136; // [xsp+18h] [xbp-1A8h]
  float v137; // [xsp+18h] [xbp-1A8h]
  float v138; // [xsp+1Ch] [xbp-1A4h]
  float v139; // [xsp+1Ch] [xbp-1A4h]
  float v140; // [xsp+1Ch] [xbp-1A4h]
  UnityEngine_Vector3_o v141; // [xsp+20h] [xbp-1A0h]
  float v142; // [xsp+20h] [xbp-1A0h]
  float value; // [xsp+24h] [xbp-19Ch]
  float position; // [xsp+28h] [xbp-198h]
  float positiona; // [xsp+28h] [xbp-198h]
  float v146; // [xsp+2Ch] [xbp-194h]
  float v147; // [xsp+2Ch] [xbp-194h]
  float v148; // [xsp+2Ch] [xbp-194h]
  float z; // [xsp+30h] [xbp-190h]
  float v150; // [xsp+30h] [xbp-190h]
  float v151; // [xsp+34h] [xbp-18Ch]
  float v152; // [xsp+38h] [xbp-188h]
  UnityEngine_Vector3_o v153[7]; // [xsp+3Ch] [xbp-184h] BYREF
  UnityEngine_Touch_o v154; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Touch_o dest; // [xsp+E0h] [xbp-E0h] BYREF
  float v156; // [xsp+178h] [xbp-48h]
  float v157; // [xsp+17Ch] [xbp-44h]
  UnityEngine_Vector2_o v158; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v159; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v160; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B121B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCA7E0(&StringLiteral_9269/*"Mouse ScrollWheel"*/, v6, v7);
    byte_4B121B8 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v154, 0, sizeof(v154));
  memset(&v153[0].fields.y, 0, 68);
  actionObject = v3->fields.actionObject;
  if ( !actionObject )
    goto LABEL_136;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(parent, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v12 = v3->fields.actionObject;
      if ( !v12 )
        goto LABEL_136;
      m_XMin = v12->fields.dragObjectRect.fields.m_XMin;
      m_YMin = v12->fields.dragObjectRect.fields.m_YMin;
      m_Width = v12->fields.dragObjectRect.fields.m_Width;
      m_Height = v12->fields.dragObjectRect.fields.m_Height;
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0LL);
      if ( !this )
        goto LABEL_136;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      v153[0].fields.x = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0LL);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v21);
        byte_4B109C1 = 1;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
      v151 = m_Width;
      v152 = m_XMin;
      if ( !this )
        goto LABEL_136;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v24 = static_fields->zeroVector.fields.x;
      v25 = static_fields->zeroVector.fields.y;
      v157 = static_fields->zeroVector.fields.z;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)this, method);
      if ( touchCount )
      {
        v3->fields.isOldMousePosition = 0;
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
              v158 = UnityEngine_Touch__get_position(&dest, 0LL);
              *(UnityEngine_Vector3_o *)&v30 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                                 v28,
                                                 v158,
                                                 v3->fields.camera,
                                                 v29);
              if ( !parent )
                goto LABEL_136;
              *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__InverseTransformPoint(
                                                 (UnityEngine_Transform_o *)parent,
                                                 *(UnityEngine_Vector3_o *)&v30,
                                                 0LL);
              if ( v3->fields.oldTouchCount == 1 )
              {
                v38 = v35;
                v39 = v36;
                v40 = v37;
                WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                  v33,
                                  v3->fields.oldTouchPosition,
                                  v3->fields.camera,
                                  v34);
                v164 = UnityEngine_Transform__InverseTransformPoint(
                         (UnityEngine_Transform_o *)parent,
                         WorldPosition,
                         0LL);
                v24 = v38 - v164.fields.x;
                v25 = v39 - v164.fields.y;
                v157 = v40 - v164.fields.z;
              }
              else
              {
                v3->fields.oldTouchCount = 1;
              }
              v3->fields.oldTouchPosition = UnityEngine_Touch__get_position(&dest, 0LL);
              v43 = 0;
              v65 = 0;
              v3->fields.isTouchScale = 0;
              v156 = 0.0;
              goto LABEL_58;
            }
LABEL_137:
            sub_1BCAA44(this, method);
          }
          oldTouchCount = v3->fields.oldTouchCount;
          v65 = 0;
          v3->fields.oldTouchCount = 0;
          v3->fields.isTouchScale = 0;
          v156 = 0.0;
          v43 = oldTouchCount > 0;
LABEL_58:
          v78 = 0.0;
          goto LABEL_64;
        }
        v156 = 0.0;
        if ( !IsAbleToPinch )
        {
          v43 = 0;
          v65 = 0;
          goto LABEL_58;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_137;
        memmove(&v154, &this->fields.dropObjectList, 0x44u);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0LL);
        if ( !this )
          goto LABEL_136;
        if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_137;
        memmove(&v153[0].fields.y, (char *)&this->fields.seed + 4, 0x44u);
        v46 = UnityEngine_Touch__get_position(&v154, 0LL);
        v47 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v153[0].fields.y, 0LL);
        v48 = (float)(v46.fields.y + v47.fields.y) * 0.5;
        v159.fields.x = (float)(v46.fields.x + v47.fields.x) * 0.5;
        v159.fields.y = v48;
        *(UnityEngine_Vector3_o *)&v51 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v49,
                                           v159,
                                           v3->fields.camera,
                                           v50);
        if ( !parent )
          goto LABEL_136;
        v141.fields.z = v53;
        v146 = m_Height;
        v141.fields.x = v51;
        v141.fields.y = v52;
        *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Transform__InverseTransformPoint(
                                           (UnityEngine_Transform_o *)parent,
                                           *(UnityEngine_Vector3_o *)&v51,
                                           0LL);
        v58 = v57;
        v60 = v59;
        v136 = v56;
        if ( v3->fields.oldTouchCount == 2 )
        {
          v61 = m_YMin;
          v62 = v56;
          v165 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v54,
                   v3->fields.oldTouchPosition,
                   v3->fields.camera,
                   v55);
          v166 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v165, 0LL);
          v24 = v62 - v166.fields.x;
          v25 = v58 - v166.fields.y;
          v63 = v60 - v166.fields.z;
        }
        else
        {
          v63 = v157;
          v61 = m_YMin;
          v3->fields.oldTouchCount = 2;
          v3->fields.isTouchScale = 0;
        }
        v140 = v63;
        v3->fields.oldTouchPosition.fields.x = (float)(v46.fields.x + v47.fields.x) * 0.5;
        v3->fields.oldTouchPosition.fields.y = v48;
        v129 = UnityEngine_Touch__get_position(&v154, 0LL);
        v130 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v153[0].fields.y, 0LL);
        v78 = (float)((float)(v129.fields.x - v130.fields.x) * (float)(v129.fields.x - v130.fields.x))
            + (float)((float)(v129.fields.y - v130.fields.y) * (float)(v129.fields.y - v130.fields.y));
        if ( !v3->fields.isTouchScale )
        {
          m_YMin = v61;
          v43 = 0;
          v65 = 0;
          if ( v78 > 0.0 )
          {
            v3->fields.isTouchScale = 1;
            v3->fields.baseTouchSqrMagnitude = v78;
            v3->fields.baseTouchScale = v153[0].fields.x;
          }
          v132 = v140;
          m_Height = v146;
          goto LABEL_133;
        }
        baseTouchSqrMagnitude = v3->fields.baseTouchSqrMagnitude;
        m_YMin = v61;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
        m_Height = v146;
        v43 = 0;
        v79 = (float)(sqrtf(v78 / baseTouchSqrMagnitude) * v3->fields.baseTouchScale) - v153[0].fields.x;
        v77 = v60;
        v73 = v58;
        v72 = v136;
        v76 = v140;
      }
      else
      {
        v41 = v3->fields.oldTouchCount;
        v42 = 0;
        v3->fields.isTouchScale = 0;
        v3->fields.oldTouchCount = 0;
        v43 = v41 > 0;
        if ( x >= 0.0 )
        {
          v44 = UnityEngine_Screen__get_width(0LL);
          v42 = 0;
          if ( y >= 0.0 && x <= (float)v44 )
            v42 = y <= (float)UnityEngine_Screen__get_height(0LL);
        }
        if ( IsAbleToPinch && v42 )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9269/*"Mouse ScrollWheel"*/, 0LL);
        else
          Axis = 0.0;
        v156 = Axis;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
        {
          v160.fields.x = x;
          v160.fields.y = y;
          v147 = m_Height;
          v67 = m_YMin;
          *(UnityEngine_Vector3_o *)&v68 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                             (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                                             v160,
                                             v3->fields.camera,
                                             v26);
          if ( !parent )
            goto LABEL_136;
          v141.fields.x = v68;
          v141.fields.y = v69;
          v141.fields.z = v70;
          v167 = UnityEngine_Transform__InverseTransformPoint(
                   (UnityEngine_Transform_o *)parent,
                   *(UnityEngine_Vector3_o *)&v68,
                   0LL);
          v72 = v167.fields.x;
          v73 = v167.fields.y;
          v74 = v167.fields.z;
          if ( v3->fields.isOldMousePosition )
          {
            v168 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v71,
                     v3->fields.oldMousePosition,
                     v3->fields.camera,
                     v26);
            v169 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v168, 0LL);
            v24 = v72 - v169.fields.x;
            v25 = v73 - v169.fields.y;
            v75 = v74 - v169.fields.z;
          }
          else
          {
            v75 = v157;
            v3->fields.isOldMousePosition = 1;
          }
          v76 = v75;
          v77 = v74;
          m_YMin = v67;
          m_Height = v147;
          v3->fields.oldMousePosition.fields.x = x;
          v3->fields.oldMousePosition.fields.y = y;
          v78 = 0.0;
        }
        else
        {
          v77 = v157;
          v78 = 0.0;
          v73 = v25;
          v72 = v24;
          v76 = v157;
          v3->fields.isOldMousePosition = 0;
          v141.fields.y = v25;
          v141.fields.z = v76;
          v141.fields.x = v24;
        }
        v79 = v156;
      }
      v156 = v79;
      if ( v79 == 0.0 )
      {
        v65 = 0;
LABEL_63:
        v157 = v76;
        goto LABEL_64;
      }
      v157 = v77;
      baseScale = v3->fields.baseScale;
      v81 = v153[0].fields.x + v79;
      if ( v79 >= 0.0 || v81 >= baseScale )
      {
        v82 = v81 > (float)(baseScale * 3.0);
        v83 = v79 > 0.0;
        v65 = v83 && v82;
        if ( v83 && v82 )
          baseScale = baseScale * 3.0;
        else
          baseScale = v153[0].fields.x + v79;
      }
      else
      {
        v65 = 1;
      }
      if ( v153[0].fields.x == baseScale )
        goto LABEL_63;
      v139 = v76;
      if ( v3->fields.oldTouchCount > 0 || v3->fields.isOldMousePosition )
      {
        v148 = m_YMin;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v181 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v141, 0LL);
        v153[0].fields.x = v181.fields.x;
        positiona = v181.fields.y;
        v125 = v181.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v182.fields.z = z;
        v182.fields.x = baseScale;
        v182.fields.y = baseScale;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v182, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v183.fields.x = v153[0].fields.x;
        v183.fields.y = positiona;
        v183.fields.z = v125;
        *(UnityEngine_Vector3_o *)&v126 = UnityEngine_Transform__TransformPoint(
                                            (UnityEngine_Transform_o *)this,
                                            v183,
                                            0LL);
        if ( !parent )
          goto LABEL_136;
        v184 = UnityEngine_Transform__InverseTransformPoint(
                 (UnityEngine_Transform_o *)parent,
                 *(UnityEngine_Vector3_o *)&v126,
                 0LL);
        v24 = v24 + (float)(v72 - v184.fields.x);
        m_YMin = v148;
        v25 = v25 + (float)(v73 - v184.fields.y);
        v157 = v139 + (float)(v157 - v184.fields.z);
        v153[0].fields.x = baseScale;
LABEL_64:
        this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
        if ( !this )
          goto LABEL_136;
        if ( BYTE4(this->fields.emptyMessageLabel) )
        {
          emptyMessageLabel = (int)this->fields.emptyMessageLabel;
          if ( v153[0].fields.x == v3->fields.baseScale )
          {
            if ( emptyMessageLabel == 1 )
            {
              v85 = 2;
LABEL_71:
              ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, v85, v26);
            }
          }
          else if ( emptyMessageLabel == 2 )
          {
            v85 = 1;
            goto LABEL_71;
          }
        }
        if ( (v65 & 1) != 0 && v78 > 0.0 && v3->fields.isTouchScale )
        {
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( !this )
            goto LABEL_136;
          LODWORD(v3->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(
                                                               (UnityEngine_Transform_o *)this,
                                                               0LL);
          v3->fields.baseTouchSqrMagnitude = v78;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v86 = localPosition.fields.x;
        v87 = localPosition.fields.y;
        v88 = localPosition.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v89 = v157;
        v171.fields.y = v25 + v87;
        v157 = v24;
        v171.fields.z = v89 + v88;
        v171.fields.x = v24 + v86;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v171, 0LL);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v90 = (float)width;
        v172 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v94 = v172.fields.x;
        v95 = v172.fields.z;
        v150 = v172.fields.y;
        if ( !byte_4B108BA )
        {
          v91 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v92, v93);
          byte_4B108BA = 1;
        }
        v173 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v91,
                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                 v3->fields.camera,
                 v93);
        v138 = v173.fields.x;
        v142 = v173.fields.y;
        v173.fields.x = (float)width;
        v173.fields.y = (float)height;
        v174 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v96,
                 *(UnityEngine_Vector2_o *)&v173.fields.x,
                 v3->fields.camera,
                 v97);
        v135 = v174.fields.x;
        v137 = v174.fields.y;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        value = v95;
        position = v94;
        v175 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        v98 = v175.fields.x;
        v134 = v175.fields.y;
        SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v99, v175, v3->fields.camera, v100);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
          goto LABEL_136;
        v176.fields.y = m_YMin + m_Height;
        v176.fields.z = 0.0;
        v176.fields.x = v152;
        v177 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v176, 0LL);
        v102 = v177.fields.x;
        v133 = v177.fields.y;
        v105 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v103, v177, v3->fields.camera, v104);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0LL);
        if ( !this )
LABEL_136:
          sub_1BCAA3C(this, method);
        v178.fields.z = 0.0;
        v178.fields.y = m_YMin;
        v178.fields.x = v152 + v151;
        v179 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v178, 0LL);
        v106 = v179.fields.x;
        v107 = v179.fields.y;
        v110 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v108, v179, v3->fields.camera, v109);
        v111 = v156 < 0.0 || v43;
        v112 = v111 | (v157 > 0.0);
        if ( (float)(v110.fields.x - v105.fields.x) <= v90 )
        {
          v117 = v90 * 0.5;
          if ( (v112 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v90 * 0.5)) )
          {
            v116 = position;
            v114 = v150;
            if ( ((v157 >= 0.0) & ~v111) == 0 )
            {
              v113 = (float)height;
              if ( SreenPosition.fields.x >= v117 )
                goto LABEL_99;
              v115 = (float)((float)(v138 + v135) * 0.5) - v98;
              goto LABEL_97;
            }
          }
          else
          {
            v114 = v150;
            v116 = position + (float)((float)((float)(v138 + v135) * 0.5) - v98);
          }
          v113 = (float)height;
        }
        else
        {
          v113 = (float)height;
          if ( !((v112 ^ 1) & 1 | (v105.fields.x <= 0.0)) )
          {
            v114 = v150;
            v115 = v138 - v102;
            v116 = position;
LABEL_97:
            v116 = v116 + v115;
            goto LABEL_99;
          }
          if ( ((v157 >= 0.0) & ~v111) != 0 )
          {
            v116 = position;
            v114 = v150;
          }
          else
          {
            v118 = v110.fields.x < v90;
            v116 = position;
            v114 = v150;
            if ( v118 )
            {
              v115 = v135 - v106;
              goto LABEL_97;
            }
          }
        }
LABEL_99:
        v119 = v111 | (v25 > 0.0);
        if ( (float)(v110.fields.y - v105.fields.y) > v113 )
        {
          if ( !((v119 ^ 1) & 1 | (v105.fields.y <= 0.0)) )
          {
            v120 = v142;
            v121 = v133;
LABEL_111:
            v124 = v120 - v121;
            goto LABEL_112;
          }
          if ( ((v25 >= 0.0) & ~v111) == 0 && v110.fields.y < v113 )
          {
            v124 = v137 - v107;
LABEL_112:
            v114 = v114 + v124;
          }
LABEL_113:
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0LL);
          if ( this )
          {
            v180.fields.z = value;
            v180.fields.x = v116;
            v180.fields.y = v114;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v180, 0LL);
            return;
          }
          goto LABEL_136;
        }
        v122 = 0.5;
        if ( (v119 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v113 * 0.5)) )
        {
          if ( ((v25 >= 0.0) & ~v111) != 0 || SreenPosition.fields.y >= (float)(v113 * 0.5) )
            goto LABEL_113;
          v123 = v142 + v137;
          v122 = 0.5;
        }
        else
        {
          v123 = v142 + v137;
        }
        v120 = v123 * v122;
        v121 = v134;
        goto LABEL_111;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0LL);
      if ( !this )
        goto LABEL_136;
      v185.fields.z = z;
      v185.fields.x = baseScale;
      v185.fields.y = baseScale;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v185, 0LL);
      v132 = v139;
      v153[0].fields.x = baseScale;
LABEL_133:
      v157 = v132;
      goto LABEL_64;
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndAnother(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  EventDelegate_Callback_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B121BC & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__, v5, v6);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7, v8);
    byte_4B121BC = 1;
  }
  backMask = this->fields.backMask;
  v10 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v2, v3);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0LL);
  v14 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v11, v12, v13);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1BCAA3C(v15, v16);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v10, v14, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  EventDelegate_Callback_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B121BA & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__, v5, v6);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v7, v8);
    byte_4B121BA = 1;
  }
  backMask = this->fields.backMask;
  v10 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v2, v3);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0LL);
  v14 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v11, v12, v13);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
    sub_1BCAA3C(v15, v16);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v10, v14, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct UnityEngine_Camera_o *main; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v20; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  const MethodInfo *v22; // x2
  __int64 v23; // x3
  float v24; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v29; // x21
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  EventDelegate_Callback_o *v37; // x22

  if ( (byte_4B121B5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__, v6, v7);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__, v8, v9);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__, v10, v11);
    byte_4B121B5 = 1;
  }
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.camera = main;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.camera, (int64_t)main, v13, v14, v15, v16, v17, v18);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v24) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v24;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].monitor) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v22);
    charaGraphViewer = this->fields.charaGraphViewer;
    v29 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_1BCAA2C(
                                                                                    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo,
                                                                                    v26,
                                                                                    v27,
                                                                                    v28);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v29,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      v30);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v29, v31);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v33 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v20, v22, v23);
  EventDelegate_Callback___ctor(
    v33,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0LL);
  v37 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v34, v35, v36);
  EventDelegate_Callback___ctor(
    v37,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0LL);
  if ( !backMask )
LABEL_12:
    sub_1BCAA3C(dragObject, v20);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v33, v37, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2

  backMask = this->fields.backMask;
  if ( !backMask )
    sub_1BCAA3C(0LL, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0LL);
  ServantStatusCharaGraphListViewManager__RequestListObject_32913260(this, 3, v4);
}


void __fastcall ServantStatusCharaGraphListViewManager__OnModifyOptionRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4B121C0 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, method);
    byte_4B121C0 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, method);
    byte_4B12177 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_1BCAA3C(v5, mainInfo);
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

  if ( (byte_4B121BF & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, method);
    byte_4B121BF = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, mainInfo, method);
    byte_4B12177 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, mainInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    if ( !mainInfo )
      sub_1BCAA3C(v5, mainInfo);
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
  __int64 v6; // x2
  UnityEngine_Object_o *actionObject; // x21
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1
  struct ServantStatusCharaGraphListViewObject_o *v10; // x8
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4B121B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B121B3 = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(actionObject, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v10 = this->fields.actionObject;
      if ( !v10 )
        goto LABEL_15;
      dragObject = (UnityEngine_Object_o *)v10->fields.dragObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) == 0
        || !dragObject
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)dragObject,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
      {
LABEL_15:
        sub_1BCAA3C(Component_object, v9);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_object,
        item,
        v12);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__OnMoveEnd(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B121B2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B121B2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B121B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B121B0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      ServantStatusCharaGraphListViewObject__Init_32914288(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v28,
        delay,
        v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__RequestListObject_32913260(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B121B1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B121B1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      ServantStatusCharaGraphListViewObject__Init_32914388(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v26,
        v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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

  if ( (byte_4B121BE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewIndicator_TypeInfo, statusItem, method);
    byte_4B121BE = 1;
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
      sub_1BCAA3C(scrollView, statusItem);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_32913104(this, mode, v10);
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_32913104(
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
    ServantStatusCharaGraphListViewManager__RequestListObject_32913260(this, v6, v5);
  }
}


void __fastcall ServantStatusCharaGraphListViewManager__SetMode_32913208(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_32913104(this, mode, v10);
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
  if ( (byte_4B121AF & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1BCA7E0(
                                                         &ServantStatusCharaGraphListViewObject_TypeInfo,
                                                         obj,
                                                         item);
    byte_4B121AF = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusCharaGraphListViewObject__Init_32912976(
    (ServantStatusCharaGraphListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewManager__SetVisibleHighPriorityObject(
        ServantStatusCharaGraphListViewManager_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  ServantStatusDialog_o *servantStatusDialog; // x0

  servantStatusDialog = this->fields.servantStatusDialog;
  if ( !servantStatusDialog )
    sub_1BCAA3C(0LL, isVisible);
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

  if ( (byte_4B121A4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B121A4 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B121A6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B121A6 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCACFC(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B121A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B121A9 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v21;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B121A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B121A8 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v21;
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

  if ( (byte_4B121A5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B121A5 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B121A7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B121A7 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCACFC(v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0780C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A077C4;
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
  if ( (byte_4B121C4 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B121C4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B121C5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager___c_TypeInfo, v1, v2);
    byte_4B121C5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantStatusCharaGraphListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B121C6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, x, method);
    byte_4B121C6 = 1;
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