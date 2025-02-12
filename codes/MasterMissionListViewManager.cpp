void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BCACEF & 1) == 0 )
  {
    sub_1C1ABD4(&MissionListViewManager_TypeInfo, method);
    byte_4BCACEF = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, method);
}


void __fastcall MasterMissionListViewManager__AcceptReward(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  GiftEntity_array *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v34; // x23
  System_Collections_Generic_List_object__o *v35; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x25
  GiftEntity_array *v38; // x20
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BCACE5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, receiveMissionIds);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C1ABD4(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__, v15);
    sub_1C1ABD4(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v16);
    byte_4BCACE5 = 1;
  }
  entity = 0LL;
  v17 = sub_1C1AE20(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = callback;
  v26 = v17 + 16;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v27, v28, v29, v30, v31, v32);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v34 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_GiftMaster___);
    v35 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v36 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v36 >= 1 )
    {
      v37 = 0LL;
      while ( 1 )
      {
        if ( v37 >= (unsigned int)v36 )
          sub_1C1AE38(Instance, v19);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v37 + 1],
                                         (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v34 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v34, HIDWORD(entity[5].klass), 0LL);
          if ( !v35 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v35,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v36) = receiveMissionIds->max_length;
        if ( (__int64)++v37 >= (int)v36 )
          goto LABEL_18;
      }
LABEL_22:
      sub_1C1AE30(Instance, v19);
    }
LABEL_18:
    if ( !v35 )
      goto LABEL_22;
    v38 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v35,
                                (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v39 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v17,
      Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v38, 0, v39, v40);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    if ( !*(_QWORD *)v26 )
      goto LABEL_22;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v26 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v26 + 64LL),
      *(_QWORD *)(*(_QWORD *)v26 + 40LL));
    MasterMissionListViewManager__afterReward(this, v41);
  }
}


void __fastcall MasterMissionListViewManager__CheckBulkButton(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *bulkButton; // x20
  __int64 v9; // x1
  UIWidget_o *bulkButtonTxt; // x0
  __int64 v11; // x1
  __int64 methodPtr_low; // x11
  struct UICommonButton_o *v13; // x0
  __int64 v14; // x1
  UIWidget_o *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCACE2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BCACE2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  bulkButton = (UnityEngine_Object_o *)this->fields.bulkButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bulkButton, 0LL, 0LL) )
  {
    bulkButtonTxt = (UIWidget_o *)this->fields.bulkButton;
    if ( !bulkButtonTxt )
      goto LABEL_20;
    ((void (__fastcall *)(UIWidget_o *, __int64, __int64, Il2CppMethodPointer))bulkButtonTxt->klass->vtable._14_OnEnable.method)(
      bulkButtonTxt,
      3LL,
      1LL,
      bulkButtonTxt->klass->vtable._15_OnInit.methodPtr);
    bulkButtonTxt = (UIWidget_o *)this->fields.bulkButtonTxt;
    if ( !bulkButtonTxt
      || (v18.fields.r = 0.5,
          v18.fields.g = 0.5,
          v18.fields.b = 0.5,
          v18.fields.a = 1.0,
          UIWidget__set_color(bulkButtonTxt, v18, 0LL),
          (bulkButtonTxt = (UIWidget_o *)this->fields.itemSortList) == 0LL) )
    {
LABEL_20:
      sub_1C1AE30(bulkButtonTxt, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v17 = v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v17.fields._current )
      {
        methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v17.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MasterMissionListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v17.fields._current[17].klass) == 3 )
        {
          v13 = this->fields.bulkButton;
          if ( !v13 )
            sub_1C1AE30(0LL, v11);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
            v13,
            0LL,
            1LL,
            v13->klass->vtable._15_OnPress.methodPtr);
          v15 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v15 )
            sub_1C1AE30(0LL, v14);
          v19.fields.r = 1.0;
          v19.fields.g = 1.0;
          v19.fields.b = 1.0;
          v19.fields.a = 1.0;
          UIWidget__set_color(v15, v19, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall MasterMissionListViewManager__CreateList(
        MasterMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v46; // x8
  void *ObjectList; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x1
  __int64 v50; // x8
  UILabel_o *v51; // x21
  UILabel_o *v52; // x21
  UILabel_o *v53; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v55; // x8
  const MethodInfo *v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int v63; // w22
  System_Collections_Generic_List_object__o *v64; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BCACD9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, missionList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v16);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v17);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v18);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v19);
    sub_1C1ABD4(&StringLiteral_8950/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_1C1ABD4(&StringLiteral_8824/*"MISSION_EMPTY_TXT"*/, v21);
    byte_4BCACD9 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v67,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v68 = v67;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v68,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v68.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v30 = (MasterMissionListViewItem_o *)sub_1C1AE20(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v30, (EventMissionEntity_o *)current, type, 0LL);
      if ( !itemList )
        sub_1C1AE30(v31, v32);
      items = itemList->fields._items;
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C1AE30(v31, v32);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v30;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v68,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v22, v23, v24, v25, v26, v27);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4BCAD9B )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, sort);
        byte_4BCAD9B = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v46 = &StringLiteral_8950/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v46 = &StringLiteral_8824/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v46, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4BCAD9B )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v49);
        byte_4BCAD9B = 1;
      }
      v50 = 20LL;
      break;
    case 1:
      v53 = this->fields.emptyMessageLabel;
      if ( !byte_4BCAD9C )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, sort);
        byte_4BCAD9C = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_8950/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v55 = &StringLiteral_8824/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v55, 0LL);
      if ( !v53 )
        goto LABEL_63;
      UILabel__set_text(v53, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4BCAD9C )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v49);
        byte_4BCAD9C = 1;
      }
      v50 = 24LL;
      break;
    case 2:
      v51 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8824/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v51 )
        goto LABEL_63;
      UILabel__set_text(v51, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4BCAD9D )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v49);
        byte_4BCAD9D = 1;
      }
      v50 = 28LL;
      break;
    case 3:
      v52 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8824/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v52 )
        goto LABEL_63;
      UILabel__set_text(v52, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4BCAD9E )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v49);
        byte_4BCAD9E = 1;
      }
      v50 = 32LL;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v50);
  MasterMissionListViewManager__setList(this, v49);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.reDispAct,
      (int64_t)redispCallBack,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v56);
  if ( !ObjectList )
LABEL_63:
    sub_1C1AE30(ObjectList, v48);
  v63 = *((_DWORD *)ObjectList + 6);
  v64 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v63 >= 1 )
  {
    for ( i = 0; i != v63; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v64,
               i,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_63;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)Item, 0LL);
      }
    }
  }
}


void __fastcall MasterMissionListViewManager__DestroyList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall MasterMissionListViewManager__GetBoardTouchMissionId(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItem_o *receiveItem; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8

  receiveItem = this->fields.receiveItem;
  if ( !receiveItem || (eventMissionEnt = receiveItem->fields.eventMissionEnt) == 0LL )
    sub_1C1AE30(this, method);
  return eventMissionEnt->fields.id;
}


// local variable allocation has failed, the output may be wrong!
MasterMissionListViewItem_o *__fastcall MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MasterMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BCACDC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v5);
    byte_4BCACDC = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
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


void __fastcall MasterMissionListViewManager__ModifyItem(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t Time; // x0
  int64_t v22; // x24
  unsigned __int64 v23; // x29
  __int64 v24; // x26
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_Predicate_object__o *v26; // x28
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  __int64 methodPtr_low; // x11
  MissionListViewItem_o *current; // x27
  int32_t v32; // w28
  UnityEngine_Object_o *viewObject; // x28
  __int64 v34; // x1
  struct ListViewObject_o *v35; // x0
  UserEventMissionMaster_o *v36; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4BCACEA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v11);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v13);
    sub_1C1ABD4(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C1ABD4(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__, v16);
    sub_1C1ABD4(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo, v17);
    byte_4BCACEA = 1;
  }
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    v36 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v22 = Time;
      v23 = 0LL;
      while ( 1 )
      {
        v24 = sub_1C1AE20(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v24, 0LL);
        if ( v23 >= receiveMissionIds->max_length )
          sub_1C1AE38(Instance, v19);
        if ( !v24 )
          break;
        v19 = (unsigned int)receiveMissionIds->m_Items[v23 + 1];
        *(_DWORD *)(v24 + 16) = v19;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v19,
                                      (const MethodInfo_3248678 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( v22 > (__int64)Instance->fields.saveNameList && v22 <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v19);
            byte_4BC2585 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v36 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v36,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v24 + 16),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            itemList = this->fields.itemList;
            v26 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v26,
              (Il2CppObject *)v24,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0LL);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v26,
                                          (const MethodInfo_363CFA0 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v38,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v39 = v38;
            while ( 1 )
            {
              v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v39,
                      (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v27 & 1) == 0 )
                break;
              if ( v39.fields._current
                && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v39.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (MasterMissionListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v39.fields._current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              v32 = *(_DWORD *)(v24 + 16);
              if ( !byte_4BC47ED )
              {
                v27 = sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v28);
                byte_4BC47ED = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v32;
              if ( !current )
                sub_1C1AE30(v27, v28);
              MissionListViewItem__ModifyItem(current, 0, v29);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v35 = current->fields.viewObject;
                if ( !v35 )
                  sub_1C1AE30(0LL, v34);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v35->klass->vtable._5_SetItem.method)(
                  v35,
                  current,
                  v35->klass->vtable._6_SetItem.methodPtr);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v39,
              (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v23 >= (int)receiveMissionIds->max_length )
          return;
      }
LABEL_51:
      sub_1C1AE30(Instance, v19);
    }
  }
}


void __fastcall MasterMissionListViewManager__OnChangeAlphaAnim(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  int32_t v7; // w20

  if ( (byte_4BCACED & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v3);
    byte_4BCACED = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1C1AE30(ObjectList, v5);
  }
}


void __fastcall MasterMissionListViewManager__OnClickFilterList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4BCACE0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MasterMissionListViewManager_OnClickFilterList__, method);
    byte_4BCACE0 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_C33584[filterStatus];
  MasterMissionListViewManager__setList(this, v5);
}


void __fastcall MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
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
  __int64 v14; // x1
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  int32_t listType; // w21
  int64_t v19; // x20
  char v20; // w0
  int64_t v21; // x2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x3
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  const MethodInfo *v30; // x2
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  Il2CppObject *Instance; // x19
  System_String_o *v34; // x20
  MasterMissionListViewManager___c_c *v35; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v37; // x21
  Il2CppObject *v38; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4BCACDD & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, obj);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_MasterMissionListViewManager_OnClickListView__, v6);
    sub_1C1ABD4(&MasterMissionListViewObject_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v9);
    sub_1C1ABD4(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, v10);
    sub_1C1ABD4(&MasterMissionListViewManager___c_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_5119/*"DIALOG_OUT_OF_TERM"*/, v12);
    sub_1C1ABD4(&StringLiteral_15823/*"Wait_Action"*/, v13);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v14);
    byte_4BCACDD = 1;
  }
  naviAction = 0LL;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15823/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj )
    goto LABEL_46;
  methodPtr_low = LOBYTE(MasterMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_46;
  if ( (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewObject_TypeInfo )
    goto LABEL_46;
  targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem(
                                  (MasterMissionListViewObject_o *)obj,
                                  (const MethodInfo *)obj);
  if ( !targetFSM )
    goto LABEL_46;
  listType = this->fields.listType;
  v19 = (int64_t)targetFSM;
  v20 = (*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data);
  if ( listType == 3 )
  {
    if ( (v20 & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v19, 0LL)
      && !*(_BYTE *)(v19 + 292) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0LL);
      if ( *(_DWORD *)(v19 + 272) == 2
        && MissionListViewManager__TrySetupMissionCondNaviAction(
             (MissionListViewManager_o *)this,
             (MissionListViewItem_o *)v19,
             &naviAction,
             v27) )
      {
        targetFSM = *(PlayMakerFSM_o **)(v19 + 112);
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0LL) )
          {
            v28 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v28 = (_QWORD *)sub_1C1ABEC(Method_MasterMissionListViewManager_OnClickListView__);
            v29 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v28, v28[4]);
            OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0LL);
            ActionExtensions__Call(naviAction, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5119/*"DIALOG_OUT_OF_TERM"*/, 0LL);
          v34 = (System_String_o *)targetFSM;
          v35 = MasterMissionListViewManager___c_TypeInfo;
          if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo);
            v35 = MasterMissionListViewManager___c_TypeInfo;
          }
          _9__27_0 = v35->static_fields->__9__27_0;
          v37 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__27_0 )
          {
            if ( !v35->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v35);
              v35 = MasterMissionListViewManager___c_TypeInfo;
            }
            v38 = (Il2CppObject *)v35->static_fields->__9;
            _9__27_0 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(_9__27_0, v38, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0LL);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
              (int64_t)_9__27_0,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v37,
              v34,
              _9__27_0,
              -1,
              0,
              0,
              0,
              1,
              0,
              0,
              0,
              0LL,
              0.0,
              0LL);
            v46 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v46 = (_QWORD *)sub_1C1ABEC(Method_MasterMissionListViewManager_OnClickListView__);
            v47 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v46, v46[4]);
            OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0LL);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
              return;
            }
          }
        }
LABEL_46:
        sub_1C1AE30(targetFSM, obj);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
LABEL_32:
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v19,
        0,
        v22);
      return;
    }
  }
  else if ( (v20 & 1) != 0
         && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v19, 0LL)
         && !*(_BYTE *)(v19 + 292) )
  {
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v19 + 272) == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v19;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.receiveItem, v19, v21, (int32_t)v22, v23, v24, v25, v26);
    MasterMissionListViewManager__SetReceiveReward(this, *(EventMissionEntity_o **)(v19 + 112), v30);
  }
  else
  {
    v31 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1C1ABEC(Method_MasterMissionListViewManager_OnClickListView__);
    v32 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v31, v31[4]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__OnClickRewardIcon(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  MasterMissionListViewItem_o *Item; // x0
  int64_t v12; // x20
  int64_t v13; // x2
  const MethodInfo *v14; // x3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_4BCACDE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MasterMissionListViewManager_OnClickRewardIcon__, obj);
    sub_1C1ABD4(&MasterMissionListViewObject_TypeInfo, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_15823/*"Wait_Action"*/, v7);
    byte_4BCACDE = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15823/*"Wait_Action"*/, 0LL) )
    return;
  if ( v3 )
  {
    methodPtr_low = LOBYTE(MasterMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (MasterMissionListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewObject_TypeInfo )
        v3 = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  targetFSM = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v3, 0LL, 0LL);
  if ( ((unsigned __int8)targetFSM & 1) == 0 )
    goto LABEL_20;
  if ( !v3 )
LABEL_24:
    sub_1C1AE30(targetFSM, obj);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, (const MethodInfo *)obj);
  if ( Item )
  {
    v12 = (int64_t)Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, void *))Item->klass->vtable._8_get_IsShowRewardInfo.method)(
            Item,
            Item->klass[1]._1.image) & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v12, 0LL)
      && !*(_BYTE *)(v12 + 292) )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v12,
        0,
        v14);
      return;
    }
    if ( *(_DWORD *)(v12 + 272) == 3 )
    {
      this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v12;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.receiveItem, v12, v13, (int32_t)v14, v15, v16, v17, v18);
      MasterMissionListViewManager__SetReceiveReward(this, *(EventMissionEntity_o **)(v12 + 112), v19);
      return;
    }
  }
LABEL_20:
  v20 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C1ABEC(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0LL);
}


void __fastcall MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x27
  __int64 Instance; // x0
  Il2CppObject *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v43; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x25
  int max_length; // w22
  const MethodInfo_387A8A8 **v46; // x29
  il2cpp_array_size_t v47; // w21
  Il2CppClass **v48; // x26
  Il2CppClass *v49; // x8
  char *v50; // x26
  Il2CppClass *v51; // t1
  int32_t name_high; // w19
  System_Collections_Generic_List_object__o *v53; // x28
  il2cpp_array_size_t v54; // w26
  Il2CppClass **v55; // x27
  Il2CppClass *v56; // x8
  Il2CppObject **v57; // x27
  Il2CppClass *v58; // t1
  int32_t v59; // w19
  ServantEntity_o *v60; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v62; // x0
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x19
  Il2CppObject *v67; // x0
  Il2CppObject *v68; // x19
  System_String_o *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  const MethodInfo_387A8A8 **v80; // x20
  Il2CppObject *CountableString; // x19
  System_Text_StringBuilder_o *v82; // x29
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  System_String_o *v86; // x21
  Il2CppObject *v87; // x0
  System_Text_StringBuilder_o *v88; // x19
  System_String_o *v89; // x1
  __int64 v90; // x8
  System_Collections_Generic_List_object__o *v91; // x0
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  System_Collections_Generic_List_object__o *v95; // x23
  System_Text_StringBuilder_o *v96; // x21
  System_String_o *v97; // x19
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  System_String_o *v100; // x19
  System_String_o *v101; // x0
  Il2CppObject *v102; // x19
  GiftEntity_array *v103; // x20
  System_String_o *v104; // x21
  MissionRewardGetDialog_ClickDelegate_o *v105; // x22
  const MethodInfo *v106; // x3
  __int64 v107; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v108; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v109; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v111; // [xsp+28h] [xbp-98h]
  int v112; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v116; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BCACE6 & 1) == 0 )
  {
    sub_1C1ABD4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1C1ABD4(&int_TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity___ctor___77492592, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v17);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C1ABD4(&System_Text_StringBuilder_TypeInfo, v21);
    sub_1C1ABD4(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__, v22);
    sub_1C1ABD4(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo, v23);
    sub_1C1ABD4(&StringLiteral_8817/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v24);
    sub_1C1ABD4(&StringLiteral_8821/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v25);
    sub_1C1ABD4(&StringLiteral_8820/*"MISSION_ACTION_SUCCESS"*/, v26);
    sub_1C1ABD4(&StringLiteral_3812/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v27);
    sub_1C1ABD4(&StringLiteral_51/*"\n \n "*/, v28);
    sub_1C1ABD4(&StringLiteral_8816/*"MISSION_ACTION_ITEM_FORMAT"*/, v29);
    sub_1C1ABD4(&StringLiteral_49/*"\n "*/, v30);
    sub_1C1ABD4(&StringLiteral_8823/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v31);
    byte_4BCACE6 = 1;
  }
  v116 = 0LL;
  entity = 0LL;
  v32 = sub_1C1AE20(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_114;
  *(_QWORD *)(v32 + 16) = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)callback, v35, v36, v37, v38, v39, v40);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v43 = (System_Text_StringBuilder_o *)sub_1C1AE20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v43, 0LL);
  v111 = (System_Text_StringBuilder_o *)sub_1C1AE20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v111, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = (const MethodInfo_387A8A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v47 = 0;
    v112 = 0;
    while ( 1 )
    {
      if ( v47 >= GiftListById->max_length )
LABEL_115:
        sub_1C1AE38(Instance, v34);
      v48 = &GiftListById->obj.klass + (int)v47;
      v51 = v48[4];
      v50 = (char *)(v48 + 4);
      v49 = v51;
      if ( !v51 )
        goto LABEL_114;
      name_high = HIDWORD(v49->_1.name);
      Instance = Gift__IsServant_38884064(name_high, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_38884456(name_high, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v47 >= GiftListById->max_length )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v50 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v50 + 24LL),
                         (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0LL);
              v112 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v47 )
        goto LABEL_29;
    }
  }
  v112 = 0;
LABEL_29:
  v107 = v32 + 16;
  v108 = (Il2CppObject *)v32;
  collection = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v54 = 0;
    v109 = v43;
    do
    {
      if ( v54 >= GiftListById->max_length )
        goto LABEL_115;
      v55 = &GiftListById->obj.klass + (int)v54;
      v58 = v55[4];
      v57 = (Il2CppObject **)(v55 + 4);
      v56 = v58;
      if ( !v58 )
        goto LABEL_114;
      v59 = HIDWORD(v56->_1.name);
      Instance = Gift__IsServant_38884064(v59, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( v54 >= GiftListById->max_length )
          goto LABEL_115;
        if ( !*v57 )
          goto LABEL_114;
        if ( !v44 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v44,
                              (int32_t)(*v57)[1].monitor,
                              (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v60 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
        Instance = SvtType__IsStatusUp(v60->fields.type, 0LL);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v43 )
            goto LABEL_114;
          v62 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v43->klass->vtable._3_ToString.method)(
                                     v43,
                                     v43->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v62, 0LL) )
            System_Text_StringBuilder__Append_62201520(v43, (System_String_o *)StringLiteral_49/*"\n "*/, 0LL);
          Instance = (__int64)ServantEntity__getName(v60, -1, -1, 0, 0LL);
          if ( v54 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !*v57 )
            goto LABEL_114;
          v66 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v57)[1].monitor);
          v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v63, v64, v65);
          v68 = (Il2CppObject *)System_String__Format_63054740(format, v66, v67, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8816/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v43, v69, v68, 0LL);
          if ( v54 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !v53 )
            goto LABEL_114;
          v34 = *v57;
          items = v53->fields._items;
          v77 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v53->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v53->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v90 = v77[4];
            v91 = v53;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v91,
              v34,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v90 + 192) + 112LL));
            goto LABEL_73;
          }
          v79 = &items->obj.klass + size;
          v53->fields._size = size + 1;
LABEL_52:
          v79[4] = (Il2CppClass *)v34;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)v34, v70, v71, v72, v73, v74, v75);
        }
      }
      else
      {
        Instance = Gift__IsItem_38884012(v59, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v54 >= GiftListById->max_length )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v57 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v116,
                       (int32_t)(*v57)[1].monitor,
                       (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v46);
            if ( !v116 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v116[1].klass, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !v116 )
                goto LABEL_114;
              v80 = v46;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v116[3].klass, 0LL);
              v82 = (System_Text_StringBuilder_o *)sub_1C1AE20(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v82, 0LL);
              if ( !v116 || !v82 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_62201520(v82, (System_String_o *)v116[1].monitor, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8821/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( v54 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !*v57 )
                goto LABEL_114;
              v86 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v57)[1].monitor);
              v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v83, v84, v85);
              System_Text_StringBuilder__AppendFormat_62207872(v82, v86, CountableString, v87, 0LL);
              if ( v112 >= 2 )
              {
                v88 = v111;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8816/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v111 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v111, (System_String_o *)Instance, (Il2CppObject *)v82, 0LL);
                v89 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v82->klass->vtable._3_ToString.method)(
                             v82,
                             v82->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                v88 = v111;
                if ( !v111 )
                  goto LABEL_114;
                v89 = (System_String_o *)Instance;
              }
              v46 = v80;
              Instance = (__int64)System_Text_StringBuilder__Append_62201520(v88, v89, 0LL);
              v43 = v109;
              if ( v54 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v34 = *v57;
              v92 = collection->fields._items;
              v93 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v92 )
                goto LABEL_114;
              v94 = collection->fields._size;
              if ( (unsigned int)v94 >= v92->max_length )
              {
                v90 = v93[4];
                v91 = collection;
                goto LABEL_72;
              }
              v79 = &v92->obj.klass + v94;
              collection->fields._size = v94 + 1;
              goto LABEL_52;
            }
          }
        }
      }
LABEL_73:
      ++v54;
    }
    while ( max_length != v54 );
  }
  v95 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56869252(
    v95,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_GiftEntity___ctor___77492592);
  if ( !v95 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v95,
    (System_Collections_Generic_IEnumerable_T__o *)v53,
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v95->fields._size >= 1 )
  {
    v96 = (System_Text_StringBuilder_o *)sub_1C1AE20(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v96, 0LL);
    if ( !v111 )
      goto LABEL_114;
    v97 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v111->klass->vtable._3_ToString.method)(
                               v111,
                               v111->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v97, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_114;
    }
    else
    {
      if ( v112 >= 2 )
      {
        if ( !v97 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_63059372(v97, 0, v97->fields._stringLength - 2, 0LL);
        if ( !v96 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_62201520(v96, (System_String_o *)Instance, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = (__int64)System_Text_StringBuilder__Append_62201520(v96, v98, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8820/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v96 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v96,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v97,
                              0LL);
      }
      if ( !v43 )
        goto LABEL_114;
      v99 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v43->klass->vtable._3_ToString.method)(
                                 v43,
                                 v43->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v99, 0LL) )
        System_Text_StringBuilder__Append_62201520(v96, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0LL);
    }
    v100 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v43->klass->vtable._3_ToString.method)(
                                v43,
                                v43->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v100, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !v96 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_62201520(v96, v100, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_8823/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_62201520(v96, v101, 0LL);
    }
    v102 = SingletonMonoBehaviour_object___get_Instance(*v46);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v95,
                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v96 )
    {
      v103 = (GiftEntity_array *)Instance;
      v104 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v96->klass->vtable._3_ToString.method)(
                                  v96,
                                  v96->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v105 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C1AE20(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v105,
        v108,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        v106);
      if ( v102 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v102, v103, v104, v105, 0, 0LL);
        return;
      }
    }
LABEL_114:
    sub_1C1AE30(Instance, v34);
  }
  if ( !*(_QWORD *)v107 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v107 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v107 + 64LL),
    *(_QWORD *)(*(_QWORD *)v107 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MasterMissionListViewItem__o *__fastcall MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *receiveItem; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  _BOOL8 v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BCACEE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v10);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v11);
    byte_4BCACEE = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = (Il2CppObject *)this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
    if ( v12 )
    {
      items = v12->fields._items;
      v35 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            receiveItem,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v37[4] = (Il2CppClass *)receiveItem;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)receiveItem, v15, v16, v17, v18, v19, v20);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
      }
    }
LABEL_26:
    sub_1C1AE30(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v21 )
      break;
    current = v40.fields._current;
    if ( v40.fields._current )
    {
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v40.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (MasterMissionListViewItem_c *)v40.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v40.fields._current[17].klass) == 3 )
      {
        if ( !v12 )
          sub_1C1AE30(v21, v40.fields._current);
        v30 = v12->fields._items;
        v31 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v12->fields._version;
        if ( !v30 )
          sub_1C1AE30(v21, current);
        v32 = v12->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            current,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &v30->obj.klass + v32;
          v12->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)current;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v22, v23, v24, v25, v26, v27);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
}


void __fastcall MasterMissionListViewManager__RefrashListDisp(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v16; // w21
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCACDF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v7);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v8);
    byte_4BCACDF = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v11 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    if ( i.fields._current )
    {
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (MasterMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1C1AE30(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v11 )
    goto LABEL_17;
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v16 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v11,
                                                                  v16,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v16 >= v11->fields._size )
        return;
    }
LABEL_17:
    sub_1C1AE30(ObjectList, v10);
  }
}


void __fastcall MasterMissionListViewManager__SetOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x20
  MasterMissionListViewItem_o *Item; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct MasterMissionListViewItem_o *v22; // x21
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t id; // w23
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BCACEB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1C1ABD4(&StringLiteral_19152/*"ef_mission_extric01"*/, v7);
    sub_1C1ABD4(&StringLiteral_21871/*"modifyOpenItem"*/, v8);
    byte_4BCACEB = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1C1AE30(0LL, v10);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        ObjectList,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v28 = v27;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v11 )
          break;
        current = v28.fields._current;
        if ( !v28.fields._current )
          sub_1C1AE30(v11, v12);
        Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v28.fields._current, v12);
        v22 = Item;
        if ( !Item )
          sub_1C1AE30(0LL, v15);
        eventMissionEnt = Item->fields.eventMissionEnt;
        if ( !eventMissionEnt )
          sub_1C1AE30(Item, v15);
        id = eventMissionEnt->fields.id;
        if ( id == this->fields.targetMissionId )
        {
          if ( !byte_4BC47ED )
          {
            sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v15);
            byte_4BC47ED = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          this->fields.openTargetItem = v22;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.openTargetItem,
            (int64_t)v22,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          if ( v22->fields.progStatus == 1 )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_19152/*"ef_mission_extric01"*/, transform, v26);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21871/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


void __fastcall MasterMissionListViewManager__SetReceiveReward(
        MasterMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4BCACE3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MasterMissionListViewManager_SetReceiveReward__, missionEntity);
    sub_1C1ABD4(&StringLiteral_8856/*"MISSION_REWARD"*/, v5);
    byte_4BCACE3 = 1;
  }
  v6 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C1ABEC(Method_MasterMissionListViewManager_SetReceiveReward__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.missionToRecieve,
    (int64_t)missionEntity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C1AE30(0LL, v14);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8856/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall MasterMissionListViewManager__SetResultData(
        MasterMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  this->fields.getSvtList = svts;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.getSvtList,
    (int64_t)svts,
    (int64_t)cmds,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.getCommandCodeList,
    (int64_t)cmds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall MasterMissionListViewManager___modifyOpenItem_b__45_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BCACF0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_16915/*"actionAfterCallback"*/, method);
    byte_4BCACF0 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16915/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0LL);
}


void __fastcall MasterMissionListViewManager__actionAfterCallback(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *actionCallback; // x19
  PartyOrganizationUtility_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (PartyOrganizationUtility_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_1C1AB78(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionCallback->fields.m_target)(
      actionCallback->fields.original_method_info,
      *(_QWORD *)&actionCallback->fields.extra_arg);
  }
}


void __fastcall MasterMissionListViewManager__afterReward(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4BCACE7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5579/*"END_EFFECT"*/, method);
    byte_4BCACE7 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5579/*"END_EFFECT"*/, 0LL);
}


UnityEngine_GameObject_o *__fastcall MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__49812820; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4BCACE9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, parentTr);
    sub_1C1ABD4(&MasterMissionListViewManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BCACE9 = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              effectAssetData,
                              name,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49812820,
                                     (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BC2141 )
  {
    effectAssetData = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4BC2141 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BC2146 )
  {
    effectAssetData = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4BC2146 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1C1AE30(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
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

  if ( (byte_4BCACD8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BCACD8 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C1AE30(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BCACD7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method);
    byte_4BCACD7 = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_3020B3C *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v16; // x1
  void *v17; // x0
  System_Action_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCACEC & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v7);
    sub_1C1ABD4(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    byte_4BCACEC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1C1AE30(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v27 = v26;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v27.fields._current;
      if ( !v27.fields._current
        || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterMissionListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1C1AE30(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v27.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1C1AE30(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0LL);
  this->fields.callbackFunc2 = v18;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  MissionListViewManager__SetMode_45463988((MissionListViewManager_o *)this, 3, v25);
}


void __fastcall MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int64_t Time; // x20
  bool v18; // w8
  System_Action_o *v19; // x20

  if ( (byte_4BCACE8 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, receiveMissionIds);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v9);
    sub_1C1ABD4(&Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__, v10);
    sub_1C1ABD4(&MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo, v11);
    byte_4BCACE8 = 1;
  }
  v12 = sub_1C1AE20(MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  MasterMissionListViewManager__RefrashListDisp(this, v13);
  MasterMissionListViewManager__CheckBulkButton(this, v14);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
    Instance = (Il2CppObject *)UnityEngine_Random__Range_70754152(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)Instance >= receiveMissionIds->max_length )
      sub_1C1AE38(Instance, v16);
    if ( !v12 )
      goto LABEL_18;
    *(_DWORD *)(v12 + 20) = receiveMissionIds->m_Items[(int)Instance + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       *(_DWORD *)(v12 + 20),
                       (const MethodInfo_3248678 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
    {
LABEL_18:
      sub_1C1AE30(Instance, v16);
    }
    v18 = Time > (__int64)Instance[4].klass && Time <= (__int64)Instance[4].monitor;
    *(_BYTE *)(v12 + 16) = v18;
    v19 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v12,
      Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 94, v19, 0, 0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__setFilterId(
        MasterMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  MasterMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void __fastcall MasterMissionListViewManager__setFilterName(
        MasterMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0LL), (filterBtnTxt = this->fields.filterBtnTxt) == 0LL) )
  {
    sub_1C1AE30(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v11; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *v23; // x21
  struct ListViewSort_o *v24; // x8
  int v25; // w9
  bool v26; // w2
  const MethodInfo *v27; // x1
  int32_t filterStatus; // w20
  int32_t v29; // w20
  int32_t v30; // w20
  int32_t v31; // w20

  if ( (byte_4BCACE1 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewSort_TypeInfo, method);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_8950/*"MST_MISSION_EMPTY_TXT"*/, v4);
    sub_1C1ABD4(&StringLiteral_17850/*"btn_txt_completed"*/, v5);
    sub_1C1ABD4(&StringLiteral_17883/*"btn_txt_receipt"*/, v6);
    sub_1C1ABD4(&StringLiteral_17882/*"btn_txt_progress"*/, v7);
    sub_1C1ABD4(&StringLiteral_8824/*"MISSION_EMPTY_TXT"*/, v8);
    sub_1C1ABD4(&StringLiteral_17832/*"btn_txt_all"*/, v9);
    byte_4BCACE1 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v11 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977792(v11, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8824/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1C1AE30(operationSortInfo, v21);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17832/*"btn_txt_all"*/, v22);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0LL);
      v23 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8950/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v23 )
        goto LABEL_53;
      UILabel__set_text(v23, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17883/*"btn_txt_receipt"*/, v22);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
      v24 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v25 = 1;
      goto LABEL_37;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17882/*"btn_txt_progress"*/, v22);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v26 = 0;
      goto LABEL_33;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17850/*"btn_txt_completed"*/, v22);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v26 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v26, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_35:
      v24 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v25 = 13;
LABEL_37:
      v24->fields.sortKind = v25;
LABEL_38:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      switch ( this->fields.listType )
      {
        case 0:
          filterStatus = this->fields.filterStatus;
          if ( !byte_4BCAD9F )
          {
            sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v27);
            byte_4BCAD9F = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v29 = this->fields.filterStatus;
          if ( !byte_4BCADA0 )
          {
            sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v27);
            byte_4BCADA0 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v29;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v30 = this->fields.filterStatus;
          if ( !byte_4BCADA1 )
          {
            sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v27);
            byte_4BCADA1 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v30;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v31 = this->fields.filterStatus;
          if ( !byte_4BCADA2 )
          {
            sub_1C1ABD4(&EventRewardSaveData_TypeInfo, v27);
            byte_4BCADA2 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v31;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v27);
      return;
    default:
      goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__setMissionListIdx(
        MasterMissionListViewManager_o *this,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v10; // w22
  int32_t v11; // w21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v13; // x8
  Il2CppObject *syncRoot; // x8

  if ( (byte_4BCACDB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v6);
    byte_4BCACDB = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4BCAD9B )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4BCAD9B = 1;
      }
      v7 = 20LL;
      goto LABEL_16;
    case 1:
      if ( !byte_4BCAD9C )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4BCAD9C = 1;
      }
      v7 = 24LL;
      goto LABEL_16;
    case 2:
      if ( !byte_4BCAD9D )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4BCAD9D = 1;
      }
      v7 = 28LL;
      goto LABEL_16;
    case 3:
      if ( !byte_4BCAD9E )
      {
        sub_1C1ABD4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4BCAD9E = 1;
      }
      v7 = 32LL;
LABEL_16:
      if ( this->fields.listType != 1
        || *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField + v7) )
      {
        return;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_34;
      size = itemList->fields._size;
      v10 = size - 1;
      if ( size < 1 )
        goto LABEL_35;
      v11 = 0;
      break;
    default:
      return;
  }
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList
      && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
        v13 = itemList;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( targetMissionId >= 1 )
    {
      if ( !v13 || (syncRoot = v13[2].fields._syncRoot) == 0LL )
LABEL_34:
        sub_1C1AE30(itemList, *(_QWORD *)&targetMissionId);
      if ( LODWORD(syncRoot[1].klass) == targetMissionId )
        goto LABEL_36;
    }
    if ( v10 == v11 )
      break;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v11;
    if ( !itemList )
      goto LABEL_34;
  }
LABEL_35:
  v11 = 0;
LABEL_36:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__setNextMissionInfo(
        MasterMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v17; // w22
  int32_t v18; // w21
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8
  System_Action_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BCACDA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, v13);
    sub_1C1ABD4(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, v14);
    byte_4BCACDA = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.actionCallback,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v17 = size - 1;
  if ( size >= 1 )
  {
    v18 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v18,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
        break;
      syncRoot = itemList[2].fields._syncRoot;
      if ( !syncRoot )
        break;
      if ( LODWORD(syncRoot[1].klass) == missionID )
        goto LABEL_17;
      if ( v17 == v18 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v18;
    }
    while ( itemList );
LABEL_15:
    sub_1C1AE30(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v18 = 0;
LABEL_17:
  v21 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
    0LL);
  this->fields.callbackAfterScroll = v21;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v18, 1, 0.0, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4BCACE4 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1C1ABD4(&StringLiteral_5584/*"END_NOTICE"*/, method);
    byte_4BCACE4 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1C1AE30(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5584/*"END_NOTICE"*/, 0LL);
}


void __fastcall MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCACF1 & 1) == 0 )
  {
    sub_1C1ABD4(&MasterMissionListViewManager___c_TypeInfo, v1);
    byte_4BCACF1 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)MasterMissionListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall MasterMissionListViewManager___c___ctor(
        MasterMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionListViewManager___c___OnClickListView_b__27_0(
        MasterMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BCACF2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4BCACF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C1AE30(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass38_0___ctor(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass38_0___AcceptReward_b__0(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MasterMissionListViewManager___c__DisplayClass38_0_o *v3; // x19

  callback = this->fields.callback;
  if ( !callback
    || (v3 = this,
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg),
        (this = (MasterMissionListViewManager___c__DisplayClass38_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_1C1AE30(this, method);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)this, method);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass39_0___ctor(
        MasterMissionListViewManager___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass39_0___OpenOneResultDialog_b__0(
        MasterMissionListViewManager___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_4BCACF3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BCACF3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL), (callback = this->fields.callback) == 0LL) )
  {
    sub_1C1AE30(Instance, v4);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass41_0___ctor(
        MasterMissionListViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass41_0___setAfterAction_b__0(
        MasterMissionListViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  _BOOL4 endEvent; // w21
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BCACF4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4BCACF4 = 1;
  }
  endEvent = this->fields.endEvent;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v5);
  AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, this->fields.missionId, 5, endEvent, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass43_0___ctor(
        MasterMissionListViewManager___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MasterMissionListViewManager___c__DisplayClass43_0___ModifyItem_b__0(
        MasterMissionListViewManager___c__DisplayClass43_0_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  MasterMissionListViewManager___c__DisplayClass43_0_o *v4; // x19
  __int64 methodPtr_low; // x10
  ListViewItem_c *klass; // x8

  v4 = this;
  if ( (byte_4BCACF5 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1C1ABD4(&MasterMissionListViewItem_TypeInfo, x);
    byte_4BCACF5 = 1;
  }
  if ( !x
    || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo
    || (klass = x[1].klass) == 0LL )
  {
    sub_1C1AE30(this, x);
  }
  return LODWORD(klass->_1.name) == v4->fields.missionId;
}