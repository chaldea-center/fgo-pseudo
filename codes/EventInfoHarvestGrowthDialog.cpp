void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDB4C & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDDB4C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v14; // w21

  if ( (byte_4BDDB49 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDB49 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C2209C(titleLabel, v3);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v14];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C22094(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BDDB4B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    sub_1C21E38(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__);
    byte_4BDDB4B = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestGrowthDialog__Open(
        EventInfoHarvestGrowthDialog_o *this,
        EventHarvestGrowthInfo_o *harvestGrowthInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v7; // x1
  DataManager_o *v8; // x23
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v10; // x25
  System_String_o *v11; // x19
  _DWORD *v12; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v14; // x25
  System_Collections_Generic_List_object__o *v15; // x23
  int64_t v16; // x29
  int64_t v17; // x19
  __int64 v18; // x27
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *current; // x1
  __int64 v28; // x26
  int64_t v29; // x25
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 IconImageId; // x0
  __int64 v33; // x1
  System_Predicate_object__o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int v55; // w19
  unsigned int v56; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v61; // x25
  int64_t v62; // x1
  UnityEngine_GameObject_o *v63; // x8
  struct UILabel_array *v64; // x20
  int32_t v65; // w8
  UILabel_o *v66; // x24
  __int64 v67; // x26
  ItemIconComponent_o *v68; // x28
  _DWORD *v69; // x29
  UILabel_o *v70; // x27
  int32_t v71; // w3
  System_String_o **v72; // x8
  System_Text_StringBuilder_o *v73; // x28
  System_String_o *v74; // x21
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  __int64 *v78; // x8
  System_String_o *v79; // x29
  long double inited; // q0
  _QWORD *v81; // x21
  __int64 v82; // x8
  __int64 v83; // x0
  __int64 v84; // x0
  System_String_o *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x0
  UILabel_o *messageLabel; // x21
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  UnityEngine_GameObject_o *v97; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v101; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BDDB4A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_object___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C21E38(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Predicate_GiftEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__);
    sub_1C21E38(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    sub_1C21E38(&StringLiteral_5748/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/);
    sub_1C21E38(&StringLiteral_20652/*"img_common_frame01"*/);
    sub_1C21E38(&StringLiteral_20231/*"harvestGrowthTitle"*/);
    sub_1C21E38(&StringLiteral_5747/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/);
    sub_1C21E38(&StringLiteral_5745/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/);
    sub_1C21E38(&StringLiteral_5749/*"EVENT_HARVEST_GROWTH_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_5746/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/);
    byte_4BDDB4A = 1;
  }
  memset(&v103, 0, sizeof(v103));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v8 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = DataManager__GetMasterData_object_(
          v8,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_97;
  if ( !Instance )
    goto LABEL_97;
  Instance = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)Instance,
               harvestGrowthInfo->fields.questId,
               harvestGrowthInfo->fields.phase,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  Instance = QuestPhaseEntity__getScriptStr(
               (QuestPhaseEntity_o *)Instance,
               (System_String_o *)StringLiteral_20231/*"harvestGrowthTitle"*/,
               0LL,
               0LL);
  if ( !MasterData_object )
    goto LABEL_97;
  v11 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  v101 = this;
  if ( !v10 )
    goto LABEL_97;
  v12 = Instance;
  ListById = GiftMaster__GetListById((GiftMaster_o *)v10, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  value = v11;
  v14 = GiftMaster__GetListById((GiftMaster_o *)v10, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v12[12],
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v14 )
    goto LABEL_97;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v102,
    (System_Collections_Generic_List_object__o *)v14,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v16 = 0LL;
  v17 = 0LL;
  v103 = v102;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v103,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v18 = sub_1C22084(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( !v18 )
      sub_1C22094(v19, v20);
    current = v103.fields._current;
    *(_QWORD *)(v18 + 16) = v103.fields._current;
    v28 = v18 + 16;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)current, v21, v22, v23, v24, v25, v26);
    v29 = sub_1C22084(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0LL);
    v31 = *(_QWORD *)(v18 + 16);
    if ( !v31 )
      sub_1C22094(0LL, v30);
    if ( !v29 )
      sub_1C22094(v31, v30);
    *(_QWORD *)(v29 + 16) = *(_QWORD *)(v31 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v31, 0LL);
    *(_DWORD *)(v29 + 24) = IconImageId;
    if ( !*(_QWORD *)v28 )
      sub_1C22094(IconImageId, v33);
    *(_DWORD *)(v29 + 28) = *(_DWORD *)(*(_QWORD *)v28 + 28LL);
    v34 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_object____ctor(
      v34,
      (Il2CppObject *)v18,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0LL);
    if ( !ListById )
      sub_1C22094(v35, v36);
    v37 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v34,
            (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( !v37 )
      v16 = v29;
    if ( v37 )
      v17 = v29;
    if ( v37 )
    {
      if ( !*(_QWORD *)v28 )
        sub_1C22094(v37, v38);
      if ( !v17 )
LABEL_104:
        sub_1C22094(v37, v38);
      *(_DWORD *)(v17 + 32) = *(_DWORD *)(*(_QWORD *)v28 + 28LL) - HIDWORD(v37[1].monitor);
    }
    else
    {
      if ( !v16 )
        goto LABEL_104;
      *(_DWORD *)(v16 + 32) = 0;
      if ( *(_DWORD *)(v29 + 16) == 1 )
        *(_BYTE *)(v29 + 36) = 1;
      else
        *(_BYTE *)(v29 + 37) = 1;
    }
    if ( !v15 )
      sub_1C22094(v37, v38);
    items = v15->fields._items;
    v46 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1C22094(v37, v38);
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v29,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v29;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), v29, v39, v40, v41, v42, v43, v44);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v103,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v15 )
LABEL_97:
    sub_1C22094(Instance, v7);
  v55 = v15->fields._size;
  if ( v55 <= 0 )
  {
LABEL_41:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v56 = v55 - 1;
  switch ( v55 )
  {
    case 1:
      p_countIconList01 = &v101->fields.countIconList01;
      p_countLabelList01 = &v101->fields.countLabelList01;
      goto LABEL_45;
    case 2:
      p_countIconList01 = &v101->fields.countIconList02;
      p_countLabelList01 = &v101->fields.countLabelList02;
      goto LABEL_45;
    case 3:
      p_countIconList01 = &v101->fields.countIconList03;
      p_countLabelList01 = &v101->fields.countLabelList03;
      goto LABEL_45;
    case 4:
      p_countIconList01 = &v101->fields.countIconList04;
      p_countLabelList01 = &v101->fields.countLabelList04;
LABEL_45:
      dispObjList = v101->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_97;
      if ( v56 >= dispObjList->max_length )
        goto LABEL_98;
      messageList = v101->fields.messageList;
      if ( !messageList )
        goto LABEL_97;
      if ( v56 >= messageList->max_length )
        goto LABEL_98;
      v61 = *p_countIconList01;
      v62 = (int64_t)messageList->m_Items[v56];
      v63 = dispObjList->m_Items[v56];
      v64 = *p_countLabelList01;
      v101->fields.messageLabel = (struct UILabel_o *)v62;
      v97 = v63;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v101->fields.messageLabel, v62, v49, v50, v51, v52, v53, v54);
      if ( !v61 )
        goto LABEL_97;
      v65 = 0;
      v66 = 0LL;
      break;
    default:
      goto LABEL_41;
  }
  do
  {
    if ( v65 >= v61->max_length )
      goto LABEL_98;
    v67 = v65;
    v68 = v61->m_Items[v65];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v65,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v64 )
      goto LABEL_97;
    if ( (unsigned int)v67 >= v64->max_length )
LABEL_98:
      sub_1C2209C(Instance, v7);
    v69 = Instance;
    if ( !Instance || !v68 )
      goto LABEL_97;
    v70 = v64->m_Items[v67];
    if ( *((int *)Instance + 7) <= 1 )
      v71 = -1;
    else
      v71 = *((_DWORD *)Instance + 7);
    ItemIconComponent__SetGift_39386620(v68, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v71, 0, 0LL);
    v72 = (System_String_o **)&StringLiteral_20652/*"img_common_frame01"*/;
    if ( v69[4] != 1 )
      v72 = (System_String_o **)&StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v68, v69[4] == 1, *v72, 0LL);
    v73 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v73, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_5746/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v102.fields._list) = v69[7];
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v75, v76, v77);
    if ( !v73 )
      goto LABEL_97;
    System_Text_StringBuilder__AppendFormat(v73, v74, (Il2CppObject *)Instance, 0LL);
    if ( !*((_BYTE *)v69 + 36) )
      v66 = v70;
    if ( *((_BYTE *)v69 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v78 = &StringLiteral_5747/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_74:
      v79 = LocalizationManager__Get((System_String_o *)*v78, 0LL);
      v81 = Method_System_Array_Empty_object___;
      v82 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v82 )
      {
        sub_1C73D70(Method_System_Array_Empty_object___);
        v82 = v81[7];
      }
      v83 = *(_QWORD *)(v82 + 16);
      if ( (*(_BYTE *)(v83 + 309) & 1) == 0 )
        v83 = sub_1C73D14(inited);
      if ( !*(_DWORD *)(v83 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v83);
      v84 = *(_QWORD *)(v81[7] + 16LL);
      if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
        v84 = sub_1C73D14(inited);
      System_Text_StringBuilder__AppendFormat_62283168(v73, v79, **(System_Object_array ***)(v84 + 184), 0LL);
      goto LABEL_83;
    }
    if ( *((_BYTE *)v69 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v78 = &StringLiteral_5748/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_74;
    }
    v70 = v66;
    if ( (int)v69[8] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_5745/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v102.fields._list) = v69[8];
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v86, v87, v88);
      System_Text_StringBuilder__AppendFormat(v73, v85, v89, 0LL);
      v70 = v66;
    }
LABEL_83:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v73->klass->vtable._3_ToString.method)(
                         v73,
                         v73->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v70 )
      goto LABEL_97;
    UILabel__set_text(v70, (System_String_o *)Instance, 0LL);
    v65 = v67 + 1;
  }
  while ( v55 != (_DWORD)v67 + 1 );
  EventInfoHarvestGrowthDialog__Init(v101, v7);
  Instance = v97;
  if ( !v97 )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(v97, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v101, 0LL, 0, 0LL);
  Instance = v101->fields.titleLabel;
  v7 = (const MethodInfo *)value;
  if ( !Instance )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v101->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_97;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0LL);
  if ( !messageLabel )
    goto LABEL_97;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v101->fields.closeAction = closeAction;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v101->fields.closeAction,
    (int64_t)closeAction,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
}


void __fastcall EventInfoHarvestGrowthDialog___OnClickCloseButton_b__22_0(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  EventInfoHarvestGrowthDialog__Init(this, v3);
}


void __fastcall EventInfoHarvestGrowthDialog_GiftInfo___ctor(
        EventInfoHarvestGrowthDialog_GiftInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoHarvestGrowthDialog___c__DisplayClass21_0___Open_b__0(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEntity; // x8

  if ( !entity || (giftEntity = this->fields.giftEntity) == 0LL )
    sub_1C22094(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}