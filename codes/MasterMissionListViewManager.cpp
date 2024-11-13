void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18BE5 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, method, v2);
    byte_4B18BE5 = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall MasterMissionListViewManager__AcceptReward(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        System_Action_o *callback,
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  GiftEntity_array *Instance; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_List_object__o *v48; // x24
  __int64 v49; // x8
  unsigned __int64 v50; // x25
  GiftEntity_array *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x22
  const MethodInfo *v56; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B18BDB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, receiveMissionIds, callback);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__, v23, v24);
    sub_1BCA7E0(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v25, v26);
    byte_4B18BDB = 1;
  }
  entity = 0LL;
  v27 = sub_1BCAA2C(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, receiveMissionIds, callback, method);
  MasterMissionListViewManager___c__DisplayClass38_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass38_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_22;
  *(_QWORD *)(v27 + 16) = callback;
  v36 = v27 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)this, v37, v38, v39, v40, v41, v42);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v44 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    v48 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         v45,
                                                         v46,
                                                         v47);
    System_Collections_Generic_List_object____ctor(
      v48,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v49 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v49 >= 1 )
    {
      v50 = 0LL;
      while ( 1 )
      {
        if ( v50 >= (unsigned int)v49 )
          sub_1BCAA44(Instance, v29);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v50 + 1],
                                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v44 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v44, HIDWORD(entity[5].klass), 0LL);
          if ( !v48 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v48,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v49) = receiveMissionIds->max_length;
        if ( (__int64)++v50 >= (int)v49 )
          goto LABEL_18;
      }
LABEL_22:
      sub_1BCAA3C(Instance, v29);
    }
LABEL_18:
    if ( !v48 )
      goto LABEL_22;
    v51 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v48,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
    System_Action___ctor(
      v55,
      (Il2CppObject *)v27,
      Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v51, 0, v55, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    if ( !*(_QWORD *)v36 )
      goto LABEL_22;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v36 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v36 + 64LL),
      *(_QWORD *)(*(_QWORD *)v36 + 40LL));
    MasterMissionListViewManager__afterReward(this, v56);
  }
}


void __fastcall MasterMissionListViewManager__CheckBulkButton(
        MasterMissionListViewManager_o *this,
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
  UnityEngine_Object_o *bulkButton; // x20
  __int64 v15; // x1
  UIWidget_o *bulkButtonTxt; // x0
  __int64 v17; // x1
  __int64 methodPtr_low; // x11
  struct UICommonButton_o *v19; // x0
  __int64 v20; // x1
  UIWidget_o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18BD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B18BD8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  bulkButton = (UnityEngine_Object_o *)this->fields.bulkButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      || (v24.fields.r = 0.5,
          v24.fields.g = 0.5,
          v24.fields.b = 0.5,
          v24.fields.a = 1.0,
          UIWidget__set_color(bulkButtonTxt, v24, 0LL),
          (bulkButtonTxt = (UIWidget_o *)this->fields.itemSortList) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(bulkButtonTxt, v15);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v23.fields._current )
      {
        methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v23.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MasterMissionListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v23.fields._current[17].klass) == 3 )
        {
          v19 = this->fields.bulkButton;
          if ( !v19 )
            sub_1BCAA3C(0LL, v17);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v19->klass->vtable._14_SetState.method)(
            v19,
            0LL,
            1LL,
            v19->klass->vtable._15_OnPress.methodPtr);
          v21 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v21 )
            sub_1BCAA3C(0LL, v20);
          v25.fields.r = 1.0;
          v25.fields.g = 1.0;
          v25.fields.b = 1.0;
          v25.fields.a = 1.0;
          UIWidget__set_color(v21, v25, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v45; // x23
  const MethodInfo *v46; // x3
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v62; // x8
  void *ObjectList; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x1
  __int64 v66; // x2
  __int64 v67; // x8
  UILabel_o *v68; // x21
  __int64 v69; // x2
  UILabel_o *v70; // x21
  __int64 v71; // x2
  UILabel_o *v72; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v74; // x8
  __int64 v75; // x2
  const MethodInfo *v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int v83; // w22
  System_Collections_Generic_List_object__o *v84; // x19
  int32_t i; // w20
  __int64 v86; // x1
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B18BCF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__,
      missionList,
      mstMissionIdList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v32, v33);
    byte_4B18BCF = 1;
  }
  memset(&v89, 0, sizeof(v89));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v88,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v89 = v88;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v89,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v89.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v45 = (MasterMissionListViewItem_o *)sub_1BCAA2C(MasterMissionListViewItem_TypeInfo, v40, v41, v42);
      MasterMissionListViewItem___ctor(v45, (EventMissionEntity_o *)current, type, v46);
      if ( !itemList )
        sub_1BCAA3C(v47, v48);
      items = itemList->fields._items;
      v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BCAA3C(v47, v48);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v45,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v45;
        sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v45, v49, v50, v51, v52, v53, v54);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v89,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v34, v35, v36, v37, v38, v39);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4B18BE9 )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, sort, v34);
        byte_4B18BE9 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
      v62 = &StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v62 = &StringLiteral_8775/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v62, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B18BE9 )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v65, v66);
        byte_4B18BE9 = 1;
      }
      v67 = 20LL;
      break;
    case 1:
      v72 = this->fields.emptyMessageLabel;
      if ( !byte_4B18BEA )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, sort, v34);
        byte_4B18BEA = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
      v74 = &StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v74 = &StringLiteral_8775/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v74, 0LL);
      if ( !v72 )
        goto LABEL_63;
      UILabel__set_text(v72, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B18BEA )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v65, v75);
        byte_4B18BEA = 1;
      }
      v67 = 24LL;
      break;
    case 2:
      v68 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v68 )
        goto LABEL_63;
      UILabel__set_text(v68, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B18BEB )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v65, v69);
        byte_4B18BEB = 1;
      }
      v67 = 28LL;
      break;
    case 3:
      v70 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v70 )
        goto LABEL_63;
      UILabel__set_text(v70, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4B18BEC )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v65, v71);
        byte_4B18BEC = 1;
      }
      v67 = 32LL;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v67);
  MasterMissionListViewManager__setList(this, v65);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.reDispAct,
      (int64_t)redispCallBack,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v76);
  if ( !ObjectList )
LABEL_63:
    sub_1BCAA3C(ObjectList, v64);
  v83 = *((_DWORD *)ObjectList + 6);
  v84 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v83 >= 1 )
  {
    for ( i = 0; i != v83; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v84,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
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
    sub_1BCAA3C(0LL, method);
  return MissionListViewItem__get_MissionId(receiveItem, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MasterMissionListViewItem_o *__fastcall MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  MasterMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B18BD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v5, v6);
    byte_4B18BD2 = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  unsigned __int64 v38; // x29
  MasterMissionListViewManager___c__DisplayClass43_0_o *v39; // x25
  int64_t UserId; // x2
  int32_t missionProgressType; // w23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_object__o *v43; // x27
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 methodPtr_low; // x11
  MissionListViewItem_o *current; // x26
  int32_t missionId; // w27
  __int64 v50; // x1
  UnityEngine_Object_o *viewObject; // x27
  __int64 v52; // x1
  struct ListViewObject_o *v53; // x0
  UserEventMissionMaster_o *v54; // [xsp+0h] [xbp-B0h]
  int64_t Time; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B18BE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__, v28, v29);
    sub_1BCA7E0(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo, v30, v31);
    byte_4B18BE0 = 1;
  }
  entity = 0LL;
  memset(&v58, 0, sizeof(v58));
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    v54 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v38 = 0LL;
      while ( 1 )
      {
        v39 = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1BCAA2C(
                                                                        MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo,
                                                                        v33,
                                                                        v36,
                                                                        v37);
        MasterMissionListViewManager___c__DisplayClass43_0___ctor(v39, 0LL);
        if ( v38 >= receiveMissionIds->max_length )
          sub_1BCAA44(Instance, v33);
        if ( !v39 )
          break;
        v33 = (unsigned int)receiveMissionIds->m_Items[v38 + 1];
        v39->fields.missionId = v33;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v33,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( Time > (__int64)Instance->fields.saveNameList && Time <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v54;
          if ( !v54 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v54,
                                        &entity,
                                        UserId,
                                        v39->fields.missionId,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v43 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v33, v36, v37);
            System_Predicate_object____ctor(
              v43,
              (Il2CppObject *)v39,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0LL);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v43,
                                          (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v57,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v58 = v57;
            while ( 1 )
            {
              v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v58,
                      (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v44 & 1) == 0 )
                break;
              if ( v58.fields._current
                && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v58.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (MasterMissionListViewItem_c *)v58.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v58.fields._current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              missionId = v39->fields.missionId;
              if ( !byte_4B12FAA )
              {
                v44 = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v45, v46);
                byte_4B12FAA = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = missionId;
              if ( !current )
                sub_1BCAA3C(v44, v45);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v53 = current->fields.viewObject;
                if ( !v53 )
                  sub_1BCAA3C(0LL, v52);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v53->klass->vtable._5_SetItem.method)(
                  v53,
                  current,
                  v53->klass->vtable._6_SetItem.methodPtr);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v58,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v38 >= (int)receiveMissionIds->max_length )
          return;
      }
LABEL_47:
      sub_1BCAA3C(Instance, v33);
    }
  }
}


void __fastcall MasterMissionListViewManager__OnChangeAlphaAnim(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  int size; // w21
  int32_t v9; // w20

  if ( (byte_4B18BE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v4, v5);
    byte_4B18BE3 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, v7);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, 0LL);
      if ( size == ++v9 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v7);
  }
}


void __fastcall MasterMissionListViewManager__OnClickFilterList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  __int64 filterStatus; // x8

  if ( (byte_4B18BD6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionListViewManager_OnClickFilterList__, method, v2);
    byte_4B18BD6 = 1;
  }
  v4 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionListViewManager_OnClickFilterList__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_C0B604[filterStatus];
  MasterMissionListViewManager__setList(this, v6);
}


void __fastcall MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
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
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  int32_t listType; // w21
  int64_t v29; // x20
  char v30; // w0
  const MethodInfo *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v41; // x2
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  __int64 v44; // x1
  Il2CppObject *Instance; // x19
  __int64 v46; // x2
  __int64 v47; // x3
  System_String_o *v48; // x20
  MasterMissionListViewManager___c_c *v49; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v51; // x21
  Il2CppObject *v52; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B18BD3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MasterMissionListViewManager_OnClickListView__, v7, v8);
    sub_1BCA7E0(&MasterMissionListViewObject_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, v15, v16);
    sub_1BCA7E0(&MasterMissionListViewManager___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    byte_4B18BD3 = 1;
  }
  naviAction = 0LL;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15733/*"Wait_Action"*/,
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
  v29 = (int64_t)targetFSM;
  v30 = (*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data);
  if ( listType == 3 )
  {
    if ( (v30 & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v29, v31)
      && !*(_BYTE *)(v29 + 292) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0LL);
      if ( *(_DWORD *)(v29 + 272) == 2
        && MissionListViewManager__TrySetupMissionCondNaviAction(
             (MissionListViewManager_o *)this,
             (MissionListViewItem_o *)v29,
             &naviAction,
             0LL) )
      {
        targetFSM = (PlayMakerFSM_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v29, 0LL);
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0LL) )
          {
            v38 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v38 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionListViewManager_OnClickListView__);
            v39 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v38, v38[4]);
            OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
            ActionExtensions__Call(naviAction, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, 0LL);
          v48 = (System_String_o *)targetFSM;
          v49 = MasterMissionListViewManager___c_TypeInfo;
          if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo, obj);
            v49 = MasterMissionListViewManager___c_TypeInfo;
          }
          _9__27_0 = v49->static_fields->__9__27_0;
          v51 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__27_0 )
          {
            if ( !v49->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v49, obj);
              v49 = MasterMissionListViewManager___c_TypeInfo;
            }
            v52 = (Il2CppObject *)v49->static_fields->__9;
            _9__27_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, obj, v46, v47);
            System_Action___ctor(_9__27_0, v52, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0LL);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
              (int64_t)_9__27_0,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v51,
              v48,
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
            v60 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v60 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionListViewManager_OnClickListView__);
            v61 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v60, v60[4]);
            OverwriteAssetSoundName__PlaySystemSe(v61, 2, 0LL);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
              return;
            }
          }
        }
LABEL_46:
        sub_1BCAA3C(targetFSM, obj);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
LABEL_32:
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v29,
        0,
        0LL);
      return;
    }
  }
  else if ( (v30 & 1) != 0
         && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v29, v31)
         && !*(_BYTE *)(v29 + 292) )
  {
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v29 + 272) == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v29;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.receiveItem, v29, v32, v33, v34, v35, v36, v37);
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v29, 0LL);
    MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v41);
  }
  else
  {
    v42 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionListViewManager_OnClickListView__);
    v43 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v42, v42[4]);
    OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__OnClickRewardIcon(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x10
  MasterMissionListViewItem_o *Item; // x0
  int64_t v16; // x20
  const MethodInfo *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v25; // x2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_4B18BD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionListViewManager_OnClickRewardIcon__, obj, method);
    sub_1BCA7E0(&MasterMissionListViewObject_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, v9, v10);
    byte_4B18BD4 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15733/*"Wait_Action"*/, 0LL) )
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  targetFSM = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v3, 0LL, 0LL);
  if ( ((unsigned __int8)targetFSM & 1) == 0 )
    goto LABEL_20;
  if ( !v3 )
LABEL_24:
    sub_1BCAA3C(targetFSM, obj);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, 0LL);
  if ( Item )
  {
    v16 = (int64_t)Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, void *))Item->klass->vtable._8_get_IsShowRewardInfo.method)(
            Item,
            Item->klass[1]._1.image) & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v16, v17)
      && !*(_BYTE *)(v16 + 292) )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v16,
        0,
        0LL);
      return;
    }
    if ( *(_DWORD *)(v16 + 272) == 3 )
    {
      this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v16;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.receiveItem, v16, v18, v19, v20, v21, v22, v23);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v16, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v25);
      return;
    }
  }
LABEL_20:
  v26 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0LL);
}


void __fastcall MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
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
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x27
  __int64 Instance; // x0
  Il2CppObject *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Text_StringBuilder_o *v74; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v78; // x25
  int max_length; // w22
  const MethodInfo_37DEB14 **v80; // x29
  __int64 v81; // x2
  __int64 v82; // x3
  il2cpp_array_size_t v83; // w21
  Il2CppClass **v84; // x26
  Il2CppClass *v85; // x8
  char *v86; // x26
  Il2CppClass *v87; // t1
  int32_t name_high; // w19
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Collections_Generic_List_object__o *v92; // x28
  __int64 v93; // x2
  __int64 v94; // x3
  il2cpp_array_size_t v95; // w26
  Il2CppClass **v96; // x27
  Il2CppClass *v97; // x8
  Il2CppObject **v98; // x27
  Il2CppClass *v99; // t1
  int32_t v100; // w19
  ServantEntity_o *v101; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v103; // x0
  Il2CppObject *v104; // x19
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  Il2CppObject *v107; // x19
  System_String_o *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct System_Object_array *items; // x8
  _QWORD *v116; // x9
  __int64 size; // x10
  Il2CppClass **v118; // x0
  const MethodInfo_37DEB14 **v119; // x20
  Il2CppObject *CountableString; // x19
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  System_Text_StringBuilder_o *v124; // x29
  __int64 v125; // x1
  System_String_o *v126; // x21
  Il2CppObject *v127; // x0
  __int64 v128; // x1
  System_Text_StringBuilder_o *v129; // x19
  System_String_o *v130; // x1
  __int64 v131; // x8
  System_Collections_Generic_List_object__o *v132; // x0
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  System_Collections_Generic_List_object__o *v136; // x23
  __int64 v137; // x2
  __int64 v138; // x3
  System_Text_StringBuilder_o *v139; // x21
  System_String_o *v140; // x19
  __int64 v141; // x1
  System_String_o *v142; // x0
  System_String_o *v143; // x0
  System_String_o *v144; // x19
  __int64 v145; // x1
  System_String_o *v146; // x0
  Il2CppObject *v147; // x19
  GiftEntity_array *v148; // x20
  System_String_o *v149; // x21
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  MissionRewardGetDialog_ClickDelegate_o *v153; // x22
  __int64 v154; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v155; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v156; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v158; // [xsp+28h] [xbp-98h]
  int v159; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v163; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B18BDC & 1) == 0 )
  {
    sub_1BCA7E0(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&int_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor___76786016, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v30, v31);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__, v40, v41);
    sub_1BCA7E0(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo, v42, v43);
    sub_1BCA7E0(&StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_3797/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_51/*"\n \n "*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_49/*"\n "*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_8774/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v58, v59);
    byte_4B18BDC = 1;
  }
  v163 = 0LL;
  entity = 0LL;
  v60 = sub_1BCAA2C(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo, callback, method, v3);
  MasterMissionListViewManager___c__DisplayClass39_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass39_0_o *)v60,
    0LL);
  if ( !v60 )
    goto LABEL_114;
  *(_QWORD *)(v60 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 16), (int64_t)callback, v63, v64, v65, v66, v67, v68);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v74 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v71, v72, v73);
  System_Text_StringBuilder___ctor(v74, 0LL);
  v158 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v75, v76, v77);
  System_Text_StringBuilder___ctor(v158, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v78 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
  v80 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v83 = 0;
    v159 = 0;
    while ( 1 )
    {
      if ( v83 >= GiftListById->max_length )
LABEL_115:
        sub_1BCAA44(Instance, v62);
      v84 = &GiftListById->obj.klass + (int)v83;
      v87 = v84[4];
      v86 = (char *)(v84 + 4);
      v85 = v87;
      if ( !v87 )
        goto LABEL_114;
      name_high = HIDWORD(v85->_1.name);
      Instance = Gift__IsServant_38401528(name_high, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_38401920(name_high, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v83 >= GiftListById->max_length )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v86 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v86 + 24LL),
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0LL);
              v159 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v83 )
        goto LABEL_29;
    }
  }
  v159 = 0;
LABEL_29:
  v154 = v60 + 16;
  v155 = (Il2CppObject *)v60;
  collection = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                              v62,
                                                              v81,
                                                              v82);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v92 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                       v89,
                                                       v90,
                                                       v91);
  System_Collections_Generic_List_object____ctor(
    v92,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v95 = 0;
    v156 = v74;
    do
    {
      if ( v95 >= GiftListById->max_length )
        goto LABEL_115;
      v96 = &GiftListById->obj.klass + (int)v95;
      v99 = v96[4];
      v98 = (Il2CppObject **)(v96 + 4);
      v97 = v99;
      if ( !v99 )
        goto LABEL_114;
      v100 = HIDWORD(v97->_1.name);
      Instance = Gift__IsServant_38401528(v100, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( v95 >= GiftListById->max_length )
          goto LABEL_115;
        if ( !*v98 )
          goto LABEL_114;
        if ( !v78 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v78,
                              (int32_t)(*v98)[1].monitor,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v101 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
        Instance = SvtType__IsStatusUp(v101->fields.type, 0LL);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v74 )
            goto LABEL_114;
          v103 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v74->klass->vtable._3_ToString.method)(
                                      v74,
                                      v74->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v103, 0LL) )
            System_Text_StringBuilder__Append_61563116(v74, (System_String_o *)StringLiteral_49/*"\n "*/, 0LL);
          Instance = (__int64)ServantEntity__getName(v101, -1, -1, 0LL);
          if ( v95 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !*v98 )
            goto LABEL_114;
          v104 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v98)[1].monitor);
          v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
          v107 = (Il2CppObject *)System_String__Format_62415592(format, v104, v105, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
          v108 = LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v74, v108, v107, 0LL);
          if ( v95 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !v92 )
            goto LABEL_114;
          v62 = *v98;
          items = v92->fields._items;
          v116 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v92->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v92->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v131 = v116[4];
            v132 = v92;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v132,
              v62,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v131 + 192) + 112LL));
            goto LABEL_73;
          }
          v118 = &items->obj.klass + size;
          v92->fields._size = size + 1;
LABEL_52:
          v118[4] = (Il2CppClass *)v62;
          sub_1BCA784((PartyOrganizationUtility_o *)(v118 + 4), (int64_t)v62, v109, v110, v111, v112, v113, v114);
        }
      }
      else
      {
        Instance = Gift__IsItem_38401476(v100, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v95 >= GiftListById->max_length )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v98 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v163,
                       (int32_t)(*v98)[1].monitor,
                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v80);
            if ( !v163 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v163[1].klass, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !v163 )
                goto LABEL_114;
              v119 = v80;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v163[3].klass, 0LL);
              v124 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v121, v122, v123);
              System_Text_StringBuilder___ctor(v124, 0LL);
              if ( !v163 || !v124 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_61563116(v124, (System_String_o *)v163[1].monitor, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v125);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( v95 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !*v98 )
                goto LABEL_114;
              v126 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v98)[1].monitor);
              v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
              System_Text_StringBuilder__AppendFormat_61569468(v124, v126, CountableString, v127, 0LL);
              if ( v159 >= 2 )
              {
                v129 = v158;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v158 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v158, (System_String_o *)Instance, (Il2CppObject *)v124, 0LL);
                v130 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v124->klass->vtable._3_ToString.method)(
                             v124,
                             v124->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                v129 = v158;
                if ( !v158 )
                  goto LABEL_114;
                v130 = (System_String_o *)Instance;
              }
              v80 = v119;
              Instance = (__int64)System_Text_StringBuilder__Append_61563116(v129, v130, 0LL);
              v74 = v156;
              if ( v95 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v62 = *v98;
              v133 = collection->fields._items;
              v134 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v133 )
                goto LABEL_114;
              v135 = collection->fields._size;
              if ( (unsigned int)v135 >= v133->max_length )
              {
                v131 = v134[4];
                v132 = collection;
                goto LABEL_72;
              }
              v118 = &v133->obj.klass + v135;
              collection->fields._size = v135 + 1;
              goto LABEL_52;
            }
          }
        }
      }
LABEL_73:
      ++v95;
    }
    while ( max_length != v95 );
  }
  v136 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                        v62,
                                                        v93,
                                                        v94);
  System_Collections_Generic_List_object____ctor_56235344(
    v136,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_GiftEntity___ctor___76786016);
  if ( !v136 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v136,
    (System_Collections_Generic_IEnumerable_T__o *)v92,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v136->fields._size >= 1 )
  {
    v139 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v62, v137, v138);
    System_Text_StringBuilder___ctor(v139, 0LL);
    if ( !v158 )
      goto LABEL_114;
    v140 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v158->klass->vtable._3_ToString.method)(
                                v158,
                                v158->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v140, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v74 )
        goto LABEL_114;
    }
    else
    {
      if ( v159 >= 2 )
      {
        if ( !v140 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_62420224(v140, 0, v140->fields._stringLength - 2, 0LL);
        if ( !v139 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_61563116(v139, (System_String_o *)Instance, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v141);
        v142 = LocalizationManager__Get((System_String_o *)StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = (__int64)System_Text_StringBuilder__Append_61563116(v139, v142, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v139 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v139,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v140,
                              0LL);
      }
      if ( !v74 )
        goto LABEL_114;
      v143 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v74->klass->vtable._3_ToString.method)(
                                  v74,
                                  v74->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v143, 0LL) )
        System_Text_StringBuilder__Append_61563116(v139, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0LL);
    }
    v144 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v74->klass->vtable._3_ToString.method)(
                                v74,
                                v74->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v144, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !v139 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_61563116(v139, v144, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v145);
      v146 = LocalizationManager__Get((System_String_o *)StringLiteral_8774/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_61563116(v139, v146, 0LL);
    }
    v147 = SingletonMonoBehaviour_object___get_Instance(*v80);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v136,
                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v139 )
    {
      v148 = (GiftEntity_array *)Instance;
      v149 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v139->klass->vtable._3_ToString.method)(
                                  v139,
                                  v139->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v153 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                         v150,
                                                         v151,
                                                         v152);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v153,
        v155,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v147 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v147, v148, v149, v153, 0, 0LL);
        return;
      }
    }
LABEL_114:
    sub_1BCAA3C(Instance, v62);
  }
  if ( !*(_QWORD *)v154 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v154 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v154 + 64LL),
    *(_QWORD *)(*(_QWORD *)v154 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MasterMissionListViewItem__o *__fastcall MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
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
  System_Collections_Generic_List_object__o *v20; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *receiveItem; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  _BOOL8 v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18BE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v16, v17);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v18, v19);
    byte_4B18BE4 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo,
                                                       bulk,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = (Il2CppObject *)this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v20;
    if ( v20 )
    {
      items = v20->fields._items;
      v43 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
      ++v20->fields._version;
      if ( items )
      {
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            receiveItem,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v45[4] = (Il2CppClass *)receiveItem;
          sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)receiveItem, v23, v24, v25, v26, v27, v28);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v20;
      }
    }
LABEL_26:
    sub_1BCAA3C(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v29 )
      break;
    current = v48.fields._current;
    if ( v48.fields._current )
    {
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v48.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (MasterMissionListViewItem_c *)v48.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v48.fields._current[17].klass) == 3 )
      {
        if ( !v20 )
          sub_1BCAA3C(v29, v48.fields._current);
        v38 = v20->fields._items;
        v39 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v20->fields._version;
        if ( !v38 )
          sub_1BCAA3C(v29, current);
        v40 = v20->fields._size;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &v38->obj.klass + v40;
          v20->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)current;
          sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)current, v30, v31, v32, v33, v34, v35);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v20;
}


void __fastcall MasterMissionListViewManager__RefrashListDisp(
        MasterMissionListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v23; // w21
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18BD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v12, v13);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v14, v15);
    byte_4B18BD5 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v18 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v24;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
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
    sub_1BCAA3C(v19, v20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v18 )
    goto LABEL_17;
  size = v18->fields._size;
  if ( size >= 1 )
  {
    v23 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v18,
                                                                  v23,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v23 >= v18->fields._size )
        return;
    }
LABEL_17:
    sub_1BCAA3C(ObjectList, v17);
  }
}


void __fastcall MasterMissionListViewManager__SetOpenItem(
        MasterMissionListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v22; // x1
  struct MasterMissionListViewItem_o *v23; // x21
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18BE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v10, v11);
    sub_1BCA7E0(&StringLiteral_19037/*"ef_mission_extric01"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21735/*"modifyOpenItem"*/, v14, v15);
    byte_4B18BE1 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1BCAA3C(0LL, v17);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        ObjectList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v35 = v34;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v18 )
          break;
        current = v35.fields._current;
        if ( !v35.fields._current )
          sub_1BCAA3C(v18, v19);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v35.fields._current,
                                          0LL);
        v23 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1BCAA3C(0LL, v22);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4B12FAA )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v24, v25);
            byte_4B12FAA = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v23;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.openTargetItem,
            (int64_t)v23,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v23, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_19037/*"ef_mission_extric01"*/, transform, v33);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21735/*"modifyOpenItem"*/,
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
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4B18BD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionListViewManager_SetReceiveReward__, missionEntity, method);
    sub_1BCA7E0(&StringLiteral_8807/*"MISSION_REWARD"*/, v5, v6);
    byte_4B18BD9 = 1;
  }
  v7 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionListViewManager_SetReceiveReward__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.missionToRecieve,
    (int64_t)missionEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1BCAA3C(0LL, v15);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8807/*"MISSION_REWARD"*/, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.getSvtList,
    (int64_t)svts,
    (int64_t)cmds,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_1BCA784(
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
  __int64 v2; // x2

  if ( (byte_4B18BE6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16815/*"actionAfterCallback"*/, method, v2);
    byte_4B18BE6 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16815/*"actionAfterCallback"*/,
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
    sub_1BCA784(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionCallback->fields.m_target)(
      actionCallback->fields.original_method_info,
      *(_QWORD *)&actionCallback->fields.extra_arg);
  }
}


void __fastcall MasterMissionListViewManager__afterReward(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4B18BDD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5550/*"END_EFFECT"*/, method, v2);
    byte_4B18BDD = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5550/*"END_EFFECT"*/, 0LL);
}


UnityEngine_GameObject_o *__fastcall MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *effectAssetData; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49237568; // x19
  UnityEngine_GameObject_o *v14; // x19
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20

  if ( (byte_4B18BDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, parentTr, method);
    sub_1BCA7E0(&MasterMissionListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B18BDF = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              effectAssetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49237568,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v14 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C1 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C6 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v17);
    byte_4B109C6 = 1;
  }
  if ( !v18 )
LABEL_15:
    sub_1BCAA3C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v14;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
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
  __int64 v29; // x1
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

  if ( (byte_4B18BCE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B18BCE = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
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
    v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 0LL);
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
          v42 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
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
        v42 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
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
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v21;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18BCD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method, v2);
    byte_4B18BCD = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_2F927DC *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v25; // x1
  void *v26; // x0
  System_Action_o *v27; // x20
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18BE2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B18BE2 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v29 = v28;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v20 )
        break;
      current = v29.fields._current;
      if ( !v29.fields._current
        || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v29.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterMissionListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1BCAA3C(v20, v21);
      }
      monitor = (UnityEngine_Object_o *)v29.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v26 = current[6].monitor;
        if ( !v26 )
          sub_1BCAA3C(0LL, v25);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v26 + 392LL))(
          v26,
          current,
          *(_QWORD *)(*(_QWORD *)v26 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v27, 0LL);
}


void __fastcall MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
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
  MasterMissionListViewManager___c__DisplayClass41_0_o *v20; // x20
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  int64_t Time; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  bool v28; // w8
  System_Action_o *v29; // x21

  if ( (byte_4B18BDE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, receiveMissionIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__, v16, v17);
    sub_1BCA7E0(&MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo, v18, v19);
    byte_4B18BDE = 1;
  }
  v20 = (MasterMissionListViewManager___c__DisplayClass41_0_o *)sub_1BCAA2C(
                                                                  MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo,
                                                                  receiveMissionIds,
                                                                  method,
                                                                  v3);
  MasterMissionListViewManager___c__DisplayClass41_0___ctor(v20, 0LL);
  MasterMissionListViewManager__RefrashListDisp(this, v21);
  MasterMissionListViewManager__CheckBulkButton(this, v22);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
    Instance = (Il2CppObject *)UnityEngine_Random__Range_70113984(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)Instance >= receiveMissionIds->max_length )
      sub_1BCAA44(Instance, v24);
    if ( !v20 )
      goto LABEL_18;
    v20->fields.missionId = receiveMissionIds->m_Items[(int)Instance + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
    Time = NetworkManager__getTime(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v20->fields.missionId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
    {
LABEL_18:
      sub_1BCAA3C(Instance, v24);
    }
    v28 = Time > (__int64)Instance[4].klass && Time <= (__int64)Instance[4].monitor;
    v20->fields.endEvent = v28;
    v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v26, v27);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v20,
      Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__,
      0LL);
    MissionListViewManager__DisplayAfterMissionAchieveTutorial((MissionListViewManager_o *)this, v29, 0LL);
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
    sub_1BCAA3C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
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
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v20; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  UILabel_o *v34; // x21
  struct ListViewSort_o *v35; // x8
  int v36; // w9
  bool v37; // w2
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  int32_t filterStatus; // w20
  int32_t v41; // w20
  int32_t v42; // w20
  int32_t v43; // w20

  if ( (byte_4B18BD7 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17746/*"btn_txt_completed"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17779/*"btn_txt_receipt"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17778/*"btn_txt_progress"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17728/*"btn_txt_all"*/, v17, v18);
    byte_4B18BD7 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v20 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, method, v2, v3);
  ListViewSort___ctor_41481440(v20, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1BCAA3C(operationSortInfo, v31);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17728/*"btn_txt_all"*/, v32);
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
      v34 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v34 )
        goto LABEL_53;
      UILabel__set_text(v34, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17779/*"btn_txt_receipt"*/, v32);
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
      v35 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v36 = 1;
      goto LABEL_37;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17778/*"btn_txt_progress"*/, v32);
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
      v37 = 0;
      goto LABEL_33;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17746/*"btn_txt_completed"*/, v32);
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
      v37 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v37, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_35:
      v35 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v36 = 13;
LABEL_37:
      v35->fields.sortKind = v36;
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
          if ( !byte_4B18BED )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v38, v39);
            byte_4B18BED = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v41 = this->fields.filterStatus;
          if ( !byte_4B18BEE )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v38, v39);
            byte_4B18BEE = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v41;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v42 = this->fields.filterStatus;
          if ( !byte_4B18BEF )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v38, v39);
            byte_4B18BEF = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v42;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v43 = this->fields.filterStatus;
          if ( !byte_4B18BF0 )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v38, v39);
            byte_4B18BF0 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v43;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v38);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v12; // w22
  int32_t v13; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4B18BD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v7, v8);
    byte_4B18BD1 = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4B18BE9 )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId, method);
        byte_4B18BE9 = 1;
      }
      v9 = 20LL;
      goto LABEL_16;
    case 1:
      if ( !byte_4B18BEA )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId, method);
        byte_4B18BEA = 1;
      }
      v9 = 24LL;
      goto LABEL_16;
    case 2:
      if ( !byte_4B18BEB )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId, method);
        byte_4B18BEB = 1;
      }
      v9 = 28LL;
      goto LABEL_16;
    case 3:
      if ( !byte_4B18BEC )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId, method);
        byte_4B18BEC = 1;
      }
      v9 = 32LL;
LABEL_16:
      if ( this->fields.listType != 1
        || *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField + v9) )
      {
        return;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_32;
      size = itemList->fields._size;
      v12 = size - 1;
      if ( size < 1 )
        goto LABEL_33;
      v13 = 0;
      break;
    default:
      return;
  }
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v13,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    if ( v12 == v13 )
    {
LABEL_33:
      v13 = 0;
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v13;
    if ( !itemList )
LABEL_32:
      sub_1BCAA3C(itemList, *(_QWORD *)&targetMissionId);
  }
  ListViewManager__SetTopItem((ListViewManager_o *)this, v13, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v21; // w22
  int32_t v22; // w21
  __int64 methodPtr_low; // x10
  System_Action_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B18BD0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&missionID, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, v17, v18);
    byte_4B18BD0 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1BCA784(
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
  v21 = size - 1;
  if ( size >= 1 )
  {
    v22 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v22,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( v21 == v22 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v22;
    }
    while ( itemList );
LABEL_15:
    sub_1BCAA3C(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v22 = 0;
LABEL_17:
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&missionID, callback, method);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
    0LL);
  this->fields.callbackAfterScroll = v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v22, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionListViewManager_o *v3; // x19
  struct System_Action_o *ShowMSG; // x8

  v3 = this;
  if ( (byte_4B18BDA & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1BCA7E0(&StringLiteral_5555/*"END_NOTICE"*/, method, v2);
    byte_4B18BDA = 1;
  }
  ShowMSG = v3->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (MasterMissionListViewManager_o *)v3->fields.targetFSM) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5555/*"END_NOTICE"*/, 0LL);
}


void __fastcall MasterMissionListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1934E & 1) == 0 )
  {
    sub_1BCA7E0(&MasterMissionListViewManager___c_TypeInfo, v1, v2);
    byte_4B1934E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MasterMissionListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MasterMissionListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1934F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B1934F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_4B19350 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B19350 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL), (callback = this->fields.callback) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
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
  __int64 v2; // x2
  _BOOL4 endEvent; // w21
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B19351 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method, v2);
    byte_4B19351 = 1;
  }
  endEvent = this->fields.endEvent;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  if ( (byte_4B19352 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1BCA7E0(
                                                                     &MasterMissionListViewItem_TypeInfo,
                                                                     x,
                                                                     method);
    byte_4B19352 = 1;
  }
  if ( !x
    || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo
    || (klass = x[1].klass) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  return LODWORD(klass->_1.name) == v4->fields.missionId;
}