void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B39BC0 & 1) == 0 )
  {
    sub_1BD3458(&MissionListViewManager_TypeInfo, method);
    byte_4B39BC0 = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
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
  const MethodInfo *v40; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B39BB6 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, receiveMissionIds);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_1BD3458(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BD3458(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__, v15);
    sub_1BD3458(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v16);
    byte_4B39BB6 = 1;
  }
  entity = 0LL;
  v17 = sub_1BD36A4(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass38_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass38_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = callback;
  v26 = v17 + 16;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v27, v28, v29, v30, v31, v32);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v34 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_GiftMaster___);
    v35 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v36 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v36 >= 1 )
    {
      v37 = 0LL;
      while ( 1 )
      {
        if ( v37 >= (unsigned int)v36 )
          sub_1BD36BC(Instance, v19);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v37 + 1],
                                         (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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
            (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v36) = receiveMissionIds->max_length;
        if ( (__int64)++v37 >= (int)v36 )
          goto LABEL_18;
      }
LABEL_22:
      sub_1BD36B4(Instance, v19);
    }
LABEL_18:
    if ( !v35 )
      goto LABEL_22;
    v38 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v35,
                                (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v39 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v17,
      Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v38, 0, v39, 0LL);
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
    MasterMissionListViewManager__afterReward(this, v40);
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

  if ( (byte_4B39BB3 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    byte_4B39BB3 = 1;
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
      sub_1BD36B4(bulkButtonTxt, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v17 = v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
            sub_1BD36B4(0LL, v11);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
            v13,
            0LL,
            1LL,
            v13->klass->vtable._15_OnPress.methodPtr);
          v15 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v15 )
            sub_1BD36B4(0LL, v14);
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
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v47; // x8
  void *ObjectList; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x1
  __int64 v51; // x8
  UILabel_o *v52; // x21
  UILabel_o *v53; // x21
  UILabel_o *v54; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v56; // x8
  const MethodInfo *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int v64; // w22
  System_Collections_Generic_List_object__o *v65; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B39BAA & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, missionList);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v16);
    sub_1BD3458(&LocalizationManager_TypeInfo, v17);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v18);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v19);
    sub_1BD3458(&StringLiteral_8914/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_1BD3458(&StringLiteral_8789/*"MISSION_EMPTY_TXT"*/, v21);
    byte_4B39BAA = 1;
  }
  memset(&v69, 0, sizeof(v69));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v69 = v68;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v69,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v69.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v30 = (MasterMissionListViewItem_o *)sub_1BD36A4(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v30, (EventMissionEntity_o *)current, type, v31);
      if ( !itemList )
        sub_1BD36B4(v32, v33);
      items = itemList->fields._items;
      v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BD36B4(v32, v33);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v30;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v30, v34, v35, v36, v37, v38, v39);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v69,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v22, v23, v24, v25, v26, v27);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4B39BC4 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, sort);
        byte_4B39BC4 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = &StringLiteral_8914/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v47 = &StringLiteral_8789/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v47, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B39BC4 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, v50);
        byte_4B39BC4 = 1;
      }
      v51 = 20LL;
      break;
    case 1:
      v54 = this->fields.emptyMessageLabel;
      if ( !byte_4B39BC5 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, sort);
        byte_4B39BC5 = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = &StringLiteral_8914/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v56 = &StringLiteral_8789/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v56, 0LL);
      if ( !v54 )
        goto LABEL_63;
      UILabel__set_text(v54, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B39BC5 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, v50);
        byte_4B39BC5 = 1;
      }
      v51 = 24LL;
      break;
    case 2:
      v52 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8789/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v52 )
        goto LABEL_63;
      UILabel__set_text(v52, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B39BC6 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, v50);
        byte_4B39BC6 = 1;
      }
      v51 = 28LL;
      break;
    case 3:
      v53 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8789/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v53 )
        goto LABEL_63;
      UILabel__set_text(v53, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B39BC7 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, v50);
        byte_4B39BC7 = 1;
      }
      v51 = 32LL;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v51);
  MasterMissionListViewManager__setList(this, v50);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.reDispAct,
      (int64_t)redispCallBack,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v57);
  if ( !ObjectList )
LABEL_63:
    sub_1BD36B4(ObjectList, v49);
  v64 = *((_DWORD *)ObjectList + 6);
  v65 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v64 >= 1 )
  {
    for ( i = 0; i != v64; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v65,
               i,
               (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
  MissionListViewItem_o *receiveItem; // x0

  receiveItem = (MissionListViewItem_o *)this->fields.receiveItem;
  if ( !receiveItem )
    sub_1BD36B4(0LL, method);
  return MissionListViewItem__get_MissionId(receiveItem, 0LL);
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

  if ( (byte_4B39BAD & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v5);
    byte_4B39BAD = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  unsigned __int64 v21; // x29
  MasterMissionListViewManager___c__DisplayClass43_0_o *v22; // x26
  int32_t missionProgressType; // w24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_Predicate_object__o *v25; // x28
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x11
  MissionListViewItem_o *current; // x27
  int32_t missionId; // w28
  UnityEngine_Object_o *viewObject; // x28
  __int64 v32; // x1
  struct ListViewObject_o *v33; // x0
  UserEventMissionMaster_o *v34; // [xsp+0h] [xbp-B0h]
  int64_t Time; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B39BBB & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v11);
    sub_1BD3458(&NetworkManager_TypeInfo, v12);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v13);
    sub_1BD3458(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__, v16);
    sub_1BD3458(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo, v17);
    byte_4B39BBB = 1;
  }
  entity = 0LL;
  memset(&v38, 0, sizeof(v38));
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    v34 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        v22 = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1BD36A4(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        MasterMissionListViewManager___c__DisplayClass43_0___ctor(v22, 0LL);
        if ( v21 >= receiveMissionIds->max_length )
          sub_1BD36BC(Instance, v19);
        if ( !v22 )
          break;
        v19 = (unsigned int)receiveMissionIds->m_Items[v21 + 1];
        v22->fields.missionId = v19;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v19,
                                      (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( Time > (__int64)Instance->fields.saveNameList && Time <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B31D77 )
          {
            sub_1BD3458(&NetworkManager_TypeInfo, v19);
            byte_4B31D77 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v34 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v34,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v22->fields.missionId,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v25 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v25,
              (Il2CppObject *)v22,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0LL);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v25,
                                          (const MethodInfo_35C14A0 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v37,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v38 = v37;
            while ( 1 )
            {
              v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v38,
                      (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v26 & 1) == 0 )
                break;
              if ( v38.fields._current
                && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (MasterMissionListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v38.fields._current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              missionId = v22->fields.missionId;
              if ( !byte_4B33F34 )
              {
                v26 = sub_1BD3458(&EventRewardSaveData_TypeInfo, v27);
                byte_4B33F34 = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = missionId;
              if ( !current )
                sub_1BD36B4(v26, v27);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v33 = current->fields.viewObject;
                if ( !v33 )
                  sub_1BD36B4(0LL, v32);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v33->klass->vtable._5_SetItem.method)(
                  v33,
                  current,
                  v33->klass->vtable._6_SetItem.methodPtr);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v38,
              (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v21 >= (int)receiveMissionIds->max_length )
          return;
      }
LABEL_51:
      sub_1BD36B4(Instance, v19);
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

  if ( (byte_4B39BBE & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v3);
    byte_4B39BBE = 1;
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
                                                                  (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, 0LL);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1BD36B4(ObjectList, v5);
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

  if ( (byte_4B39BB1 & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionListViewManager_OnClickFilterList__, method);
    byte_4B39BB1 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BD3470(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_C10A14[filterStatus];
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
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  Il2CppObject *Instance; // x19
  System_String_o *v35; // x20
  MasterMissionListViewManager___c_c *v36; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v38; // x21
  Il2CppObject *v39; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B39BAE & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, obj);
    sub_1BD3458(&LocalizationManager_TypeInfo, v5);
    sub_1BD3458(&Method_MasterMissionListViewManager_OnClickListView__, v6);
    sub_1BD3458(&MasterMissionListViewObject_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v9);
    sub_1BD3458(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, v10);
    sub_1BD3458(&MasterMissionListViewManager___c_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_5102/*"DIALOG_OUT_OF_TERM"*/, v12);
    sub_1BD3458(&StringLiteral_15752/*"Wait_Action"*/, v13);
    sub_1BD3458(&StringLiteral_1/*""*/, v14);
    byte_4B39BAE = 1;
  }
  naviAction = 0LL;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15752/*"Wait_Action"*/,
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
  targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)obj, 0LL);
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
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v19, v21)
      && !*(_BYTE *)(v19 + 292) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0LL);
      if ( *(_DWORD *)(v19 + 272) == 2
        && MissionListViewManager__TrySetupMissionCondNaviAction(
             (MissionListViewManager_o *)this,
             (MissionListViewItem_o *)v19,
             &naviAction,
             0LL) )
      {
        targetFSM = (PlayMakerFSM_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v19, 0LL);
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0LL) )
          {
            v28 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v28 = (_QWORD *)sub_1BD3470(Method_MasterMissionListViewManager_OnClickListView__);
            v29 = (System_Reflection_MethodBase_o *)sub_1BD343C(v28, v28[4]);
            OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
            ActionExtensions__Call(naviAction, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5102/*"DIALOG_OUT_OF_TERM"*/, 0LL);
          v35 = (System_String_o *)targetFSM;
          v36 = MasterMissionListViewManager___c_TypeInfo;
          if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo);
            v36 = MasterMissionListViewManager___c_TypeInfo;
          }
          _9__27_0 = v36->static_fields->__9__27_0;
          v38 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__27_0 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = MasterMissionListViewManager___c_TypeInfo;
            }
            v39 = (Il2CppObject *)v36->static_fields->__9;
            _9__27_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
            System_Action___ctor(_9__27_0, v39, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0LL);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
              (int64_t)_9__27_0,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v38,
              v35,
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
            v47 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v47 = (_QWORD *)sub_1BD3470(Method_MasterMissionListViewManager_OnClickListView__);
            v48 = (System_Reflection_MethodBase_o *)sub_1BD343C(v47, v47[4]);
            OverwriteAssetSoundName__PlaySystemSe(v48, 2, 0LL);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
              return;
            }
          }
        }
LABEL_46:
        sub_1BD36B4(targetFSM, obj);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
LABEL_32:
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v19,
        0,
        0LL);
      return;
    }
  }
  else if ( (v20 & 1) != 0
         && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v19, v21)
         && !*(_BYTE *)(v19 + 292) )
  {
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v19 + 272) == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v19;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.receiveItem, v19, v22, v23, v24, v25, v26, v27);
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v19, 0LL);
    MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v31);
  }
  else
  {
    v32 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_1BD3470(Method_MasterMissionListViewManager_OnClickListView__);
    v33 = (System_Reflection_MethodBase_o *)sub_1BD343C(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0LL);
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
  const MethodInfo *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_4B39BAF & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionListViewManager_OnClickRewardIcon__, obj);
    sub_1BD3458(&MasterMissionListViewObject_TypeInfo, v5);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    sub_1BD3458(&StringLiteral_15752/*"Wait_Action"*/, v7);
    byte_4B39BAF = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15752/*"Wait_Action"*/, 0LL) )
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
    sub_1BD36B4(targetFSM, obj);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, 0LL);
  if ( Item )
  {
    v12 = (int64_t)Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, void *))Item->klass->vtable._8_get_IsShowRewardInfo.method)(
            Item,
            Item->klass[1]._1.image) & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v12, v13)
      && !*(_BYTE *)(v12 + 292) )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v12,
        0,
        0LL);
      return;
    }
    if ( *(_DWORD *)(v12 + 272) == 3 )
    {
      this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v12;
      sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.receiveItem, v12, v14, v15, v16, v17, v18, v19);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v12, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v21);
      return;
    }
  }
LABEL_20:
  v22 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BD3470(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BD343C(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
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
  const MethodInfo_37FDC48 **v46; // x29
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
  const MethodInfo_37FDC48 **v80; // x20
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
  __int64 v106; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v107; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v108; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v110; // [xsp+28h] [xbp-98h]
  int v111; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v115; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B39BB7 & 1) == 0 )
  {
    sub_1BD3458(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback);
    sub_1BD3458(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1BD3458(&int_TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity___ctor___76918336, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16);
    sub_1BD3458(&System_Collections_Generic_List_GiftEntity__TypeInfo, v17);
    sub_1BD3458(&LocalizationManager_TypeInfo, v18);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BD3458(&System_Text_StringBuilder_TypeInfo, v21);
    sub_1BD3458(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__, v22);
    sub_1BD3458(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo, v23);
    sub_1BD3458(&StringLiteral_8782/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v24);
    sub_1BD3458(&StringLiteral_8786/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v25);
    sub_1BD3458(&StringLiteral_8785/*"MISSION_ACTION_SUCCESS"*/, v26);
    sub_1BD3458(&StringLiteral_3804/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v27);
    sub_1BD3458(&StringLiteral_51/*"\n \n "*/, v28);
    sub_1BD3458(&StringLiteral_8781/*"MISSION_ACTION_ITEM_FORMAT"*/, v29);
    sub_1BD3458(&StringLiteral_49/*"\n "*/, v30);
    sub_1BD3458(&StringLiteral_8788/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v31);
    byte_4B39BB7 = 1;
  }
  v115 = 0LL;
  entity = 0LL;
  v32 = sub_1BD36A4(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass39_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass39_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_114;
  *(_QWORD *)(v32 + 16) = callback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)callback, v35, v36, v37, v38, v39, v40);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v43 = (System_Text_StringBuilder_o *)sub_1BD36A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v43, 0LL);
  v110 = (System_Text_StringBuilder_o *)sub_1BD36A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v110, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = (const MethodInfo_37FDC48 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v47 = 0;
    v111 = 0;
    while ( 1 )
    {
      if ( v47 >= GiftListById->max_length )
LABEL_115:
        sub_1BD36BC(Instance, v34);
      v48 = &GiftListById->obj.klass + (int)v47;
      v51 = v48[4];
      v50 = (char *)(v48 + 4);
      v49 = v51;
      if ( !v51 )
        goto LABEL_114;
      name_high = HIDWORD(v49->_1.name);
      Instance = Gift__IsServant_38469604(name_high, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_38469996(name_high, 0LL);
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
                         (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0LL);
              v111 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v47 )
        goto LABEL_29;
    }
  }
  v111 = 0;
LABEL_29:
  v106 = v32 + 16;
  v107 = (Il2CppObject *)v32;
  collection = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v53 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v54 = 0;
    v108 = v43;
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
      Instance = Gift__IsServant_38469604(v59, 0LL);
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
                              (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
            System_Text_StringBuilder__Append_61687144(v43, (System_String_o *)StringLiteral_49/*"\n "*/, 0LL);
          Instance = (__int64)ServantEntity__getName(v60, -1, -1, 0LL);
          if ( v54 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !*v57 )
            goto LABEL_114;
          v66 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v57)[1].monitor);
          v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v63, v64, v65);
          v68 = (Il2CppObject *)System_String__Format_62539620(format, v66, v67, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8781/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
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
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v90 + 192) + 112LL));
            goto LABEL_73;
          }
          v79 = &items->obj.klass + size;
          v53->fields._size = size + 1;
LABEL_52:
          v79[4] = (Il2CppClass *)v34;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)v34, v70, v71, v72, v73, v74, v75);
        }
      }
      else
      {
        Instance = Gift__IsItem_38469552(v59, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v54 >= GiftListById->max_length )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v57 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v115,
                       (int32_t)(*v57)[1].monitor,
                       (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v46);
            if ( !v115 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v115[1].klass, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !v115 )
                goto LABEL_114;
              v80 = v46;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v115[3].klass, 0LL);
              v82 = (System_Text_StringBuilder_o *)sub_1BD36A4(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v82, 0LL);
              if ( !v115 || !v82 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_61687144(v82, (System_String_o *)v115[1].monitor, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8786/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( v54 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !*v57 )
                goto LABEL_114;
              v86 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v57)[1].monitor);
              v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v83, v84, v85);
              System_Text_StringBuilder__AppendFormat_61693496(v82, v86, CountableString, v87, 0LL);
              if ( v111 >= 2 )
              {
                v88 = v110;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8781/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v110 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v110, (System_String_o *)Instance, (Il2CppObject *)v82, 0LL);
                v89 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v82->klass->vtable._3_ToString.method)(
                             v82,
                             v82->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                v88 = v110;
                if ( !v110 )
                  goto LABEL_114;
                v89 = (System_String_o *)Instance;
              }
              v46 = v80;
              Instance = (__int64)System_Text_StringBuilder__Append_61687144(v88, v89, 0LL);
              v43 = v108;
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
  v95 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56362628(
    v95,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_35C0684 *)Method_System_Collections_Generic_List_GiftEntity___ctor___76918336);
  if ( !v95 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v95,
    (System_Collections_Generic_IEnumerable_T__o *)v53,
    (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v95->fields._size >= 1 )
  {
    v96 = (System_Text_StringBuilder_o *)sub_1BD36A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v96, 0LL);
    if ( !v110 )
      goto LABEL_114;
    v97 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v110->klass->vtable._3_ToString.method)(
                               v110,
                               v110->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v97, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_114;
    }
    else
    {
      if ( v111 >= 2 )
      {
        if ( !v97 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_62544252(v97, 0, v97->fields._stringLength - 2, 0LL);
        if ( !v96 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_61687144(v96, (System_String_o *)Instance, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8782/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = (__int64)System_Text_StringBuilder__Append_61687144(v96, v98, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8785/*"MISSION_ACTION_SUCCESS"*/, 0LL);
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
        System_Text_StringBuilder__Append_61687144(v96, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0LL);
    }
    v100 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v43->klass->vtable._3_ToString.method)(
                                v43,
                                v43->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v100, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !v96 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_61687144(v96, v100, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_8788/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_61687144(v96, v101, 0LL);
    }
    v102 = SingletonMonoBehaviour_object___get_Instance(*v46);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v95,
                          (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v96 )
    {
      v103 = (GiftEntity_array *)Instance;
      v104 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v96->klass->vtable._3_ToString.method)(
                                  v96,
                                  v96->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v105 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1BD36A4(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v105,
        v107,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v102 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v102, v103, v104, v105, 0, 0LL);
        return;
      }
    }
LABEL_114:
    sub_1BD36B4(Instance, v34);
  }
  if ( !*(_QWORD *)v106 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v106 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v106 + 64LL),
    *(_QWORD *)(*(_QWORD *)v106 + 40LL));
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

  if ( (byte_4B39BBF & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v10);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v11);
    byte_4B39BBF = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
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
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v37[4] = (Il2CppClass *)receiveItem;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)receiveItem, v15, v16, v17, v18, v19, v20);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
      }
    }
LABEL_26:
    sub_1BD36B4(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
          sub_1BD36B4(v21, v40.fields._current);
        v30 = v12->fields._items;
        v31 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v12->fields._version;
        if ( !v30 )
          sub_1BD36B4(v21, current);
        v32 = v12->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            current,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &v30->obj.klass + v32;
          v12->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)current;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v22, v23, v24, v25, v26, v27);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B39BB0 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v7);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v8);
    byte_4B39BB0 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v11 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
    sub_1BD36B4(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
    sub_1BD36B4(ObjectList, v10);
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
  __int64 v12; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v15; // x1
  struct MasterMissionListViewItem_o *v16; // x21
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B39BBC & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1BD3458(&StringLiteral_19066/*"ef_mission_extric01"*/, v7);
    sub_1BD3458(&StringLiteral_21767/*"modifyOpenItem"*/, v8);
    byte_4B39BBC = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1BD36B4(0LL, v10);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        ObjectList,
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v28 = v27;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v11 )
          break;
        current = v28.fields._current;
        if ( !v28.fields._current )
          sub_1BD36B4(v11, v12);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v28.fields._current,
                                          0LL);
        v16 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1BD36B4(0LL, v15);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4B33F34 )
          {
            sub_1BD3458(&EventRewardSaveData_TypeInfo, v17);
            byte_4B33F34 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v16;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&this->fields.openTargetItem,
            (int64_t)v16,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v16, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_19066/*"ef_mission_extric01"*/, transform, v26);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21767/*"modifyOpenItem"*/,
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

  if ( (byte_4B39BB4 & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionListViewManager_SetReceiveReward__, missionEntity);
    sub_1BD3458(&StringLiteral_8821/*"MISSION_REWARD"*/, v5);
    byte_4B39BB4 = 1;
  }
  v6 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BD3470(Method_MasterMissionListViewManager_SetReceiveReward__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BD343C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_1BD33FC(
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
    sub_1BD36B4(0LL, v14);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8821/*"MISSION_REWARD"*/, 0LL);
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
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.getSvtList,
    (int64_t)svts,
    (int64_t)cmds,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_1BD33FC(
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
  if ( (byte_4B39BC1 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_16836/*"actionAfterCallback"*/, method);
    byte_4B39BC1 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16836/*"actionAfterCallback"*/,
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
    sub_1BD33FC(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B39BB8 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5559/*"END_EFFECT"*/, method);
    byte_4B39BB8 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5559/*"END_EFFECT"*/, 0LL);
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
  Il2CppObject *Object_object__49362760; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B39BBA & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, parentTr);
    sub_1BD3458(&MasterMissionListViewManager_TypeInfo, v5);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    byte_4B39BBA = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              effectAssetData,
                              name,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49362760,
                                     (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4B31941 )
  {
    effectAssetData = (AssetData_o *)sub_1BD3458(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B31941 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B31946 )
  {
    effectAssetData = (AssetData_o *)sub_1BD3458(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B31946 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1BD36B4(effectAssetData, parentTr);
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
  __int64 v18; // x1
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

  if ( (byte_4B39BA9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    byte_4B39BA9 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BD36B4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1BD36B4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BD36B4(0LL, v18);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1BD36B4(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41563988((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1BD36B4(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BD36B4(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BD36B4(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BD36B4(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B39BA8 & 1) == 0 )
  {
    sub_1BD3458(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method);
    byte_4B39BA8 = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_2FB2818 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B39BBD & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v7);
    sub_1BD3458(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    byte_4B39BBD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1BD36B4(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields._current;
      if ( !v20.fields._current
        || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterMissionListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1BD36B4(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v20.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1BD36B4(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v18, 0LL);
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
  MasterMissionListViewManager___c__DisplayClass41_0_o *v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int64_t Time; // x21
  bool v18; // w8
  System_Action_o *v19; // x21

  if ( (byte_4B39BB9 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, receiveMissionIds);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v6);
    sub_1BD3458(&NetworkManager_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v9);
    sub_1BD3458(&Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__, v10);
    sub_1BD3458(&MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo, v11);
    byte_4B39BB9 = 1;
  }
  v12 = (MasterMissionListViewManager___c__DisplayClass41_0_o *)sub_1BD36A4(MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass41_0___ctor(v12, 0LL);
  MasterMissionListViewManager__RefrashListDisp(this, v13);
  MasterMissionListViewManager__CheckBulkButton(this, v14);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
    Instance = (Il2CppObject *)UnityEngine_Random__Range_70238012(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)Instance >= receiveMissionIds->max_length )
      sub_1BD36BC(Instance, v16);
    if ( !v12 )
      goto LABEL_18;
    v12->fields.missionId = receiveMissionIds->m_Items[(int)Instance + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v12->fields.missionId,
                       (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
    {
LABEL_18:
      sub_1BD36B4(Instance, v16);
    }
    v18 = Time > (__int64)Instance[4].klass && Time <= (__int64)Instance[4].monitor;
    v12->fields.endEvent = v18;
    v19 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v12,
      Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__,
      0LL);
    MissionListViewManager__DisplayAfterMissionAchieveTutorial((MissionListViewManager_o *)this, v19, 0LL);
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
    sub_1BD36B4(filterBtnTxt, targetFile);
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

  if ( (byte_4B39BB2 & 1) == 0 )
  {
    sub_1BD3458(&ListViewSort_TypeInfo, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_8914/*"MST_MISSION_EMPTY_TXT"*/, v4);
    sub_1BD3458(&StringLiteral_17772/*"btn_txt_completed"*/, v5);
    sub_1BD3458(&StringLiteral_17805/*"btn_txt_receipt"*/, v6);
    sub_1BD3458(&StringLiteral_17804/*"btn_txt_progress"*/, v7);
    sub_1BD3458(&StringLiteral_8789/*"MISSION_EMPTY_TXT"*/, v8);
    sub_1BD3458(&StringLiteral_17754/*"btn_txt_all"*/, v9);
    byte_4B39BB2 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v11 = (ListViewSort_o *)sub_1BD36A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_41582320(v11, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v11;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8789/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1BD36B4(operationSortInfo, v21);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17754/*"btn_txt_all"*/, v22);
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
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8914/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v23 )
        goto LABEL_53;
      UILabel__set_text(v23, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17805/*"btn_txt_receipt"*/, v22);
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
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17804/*"btn_txt_progress"*/, v22);
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
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17772/*"btn_txt_completed"*/, v22);
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
          if ( !byte_4B39BC8 )
          {
            sub_1BD3458(&EventRewardSaveData_TypeInfo, v27);
            byte_4B39BC8 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v29 = this->fields.filterStatus;
          if ( !byte_4B39BC9 )
          {
            sub_1BD3458(&EventRewardSaveData_TypeInfo, v27);
            byte_4B39BC9 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v29;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v30 = this->fields.filterStatus;
          if ( !byte_4B39BCA )
          {
            sub_1BD3458(&EventRewardSaveData_TypeInfo, v27);
            byte_4B39BCA = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v30;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v31 = this->fields.filterStatus;
          if ( !byte_4B39BCB )
          {
            sub_1BD3458(&EventRewardSaveData_TypeInfo, v27);
            byte_4B39BCB = 1;
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

  if ( (byte_4B39BAC & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v6);
    byte_4B39BAC = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4B39BC4 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4B39BC4 = 1;
      }
      v7 = 20LL;
      goto LABEL_16;
    case 1:
      if ( !byte_4B39BC5 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4B39BC5 = 1;
      }
      v7 = 24LL;
      goto LABEL_16;
    case 2:
      if ( !byte_4B39BC6 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4B39BC6 = 1;
      }
      v7 = 28LL;
      goto LABEL_16;
    case 3:
      if ( !byte_4B39BC7 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4B39BC7 = 1;
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
        goto LABEL_32;
      size = itemList->fields._size;
      v10 = size - 1;
      if ( size < 1 )
        goto LABEL_33;
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
                                                              (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
          itemList = 0LL;
      }
      else
      {
        itemList = 0LL;
      }
    }
    if ( targetMissionId >= 1 )
    {
      if ( !itemList )
        goto LABEL_32;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == targetMissionId )
        break;
    }
    if ( v10 == v11 )
    {
LABEL_33:
      v11 = 0;
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v11;
    if ( !itemList )
LABEL_32:
      sub_1BD36B4(itemList, *(_QWORD *)&targetMissionId);
  }
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
  System_Action_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B39BAB & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1BD3458(&MasterMissionListViewItem_TypeInfo, v13);
    sub_1BD3458(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, v14);
    byte_4B39BAB = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1BD33FC(
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
                                                                (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0LL);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v17 == v18 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v18;
    }
    while ( itemList );
LABEL_15:
    sub_1BD36B4(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v18 = 0;
LABEL_17:
  v20 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
    0LL);
  this->fields.callbackAfterScroll = v20;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v18, 1, 0.0, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4B39BB5 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1BD3458(&StringLiteral_5564/*"END_NOTICE"*/, method);
    byte_4B39BB5 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1BD36B4(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5564/*"END_NOTICE"*/, 0LL);
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

  if ( (byte_4B3A32F & 1) == 0 )
  {
    sub_1BD3458(&MasterMissionListViewManager___c_TypeInfo, v1);
    byte_4B3A32F = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v2;
  sub_1BD33FC(
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

  if ( (byte_4B3A330 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B3A330 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BD36B4(Instance, v4);
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
    sub_1BD36B4(this, method);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)this, 0LL);
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

  if ( (byte_4B3A331 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3A331 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL), (callback = this->fields.callback) == 0LL) )
  {
    sub_1BD36B4(Instance, v4);
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

  if ( (byte_4B3A332 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4B3A332 = 1;
  }
  endEvent = this->fields.endEvent;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v5);
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
  if ( (byte_4B3A333 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1BD3458(&MasterMissionListViewItem_TypeInfo, x);
    byte_4B3A333 = 1;
  }
  if ( !x
    || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo
    || (klass = x[1].klass) == 0LL )
  {
    sub_1BD36B4(this, x);
  }
  return LODWORD(klass->_1.name) == v4->fields.missionId;
}