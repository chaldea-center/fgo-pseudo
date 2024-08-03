void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FEED5 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewManager_TypeInfo, method);
    byte_49FEED5 = 1;
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
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x24
  __int64 v29; // x1
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  GiftEntity_array *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEECB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, receiveMissionIds);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__, v15);
    sub_1B640C8(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v16);
    byte_49FEECB = 1;
  }
  entity = 0LL;
  v17 = sub_1B64314(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, receiveMissionIds, callback);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = callback;
  v21 = v17 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)callback, v19, v20);
  *(_QWORD *)(v17 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v22, v23);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v25 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         v26,
                                                         v27);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v30 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v30 )
          sub_1B6432C(Instance, v29);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v31 + 1],
                                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v25 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v25, HIDWORD(entity[5].klass), 0LL);
          if ( !v28 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v30) = receiveMissionIds->max_length;
        if ( (__int64)++v31 >= (int)v30 )
          goto LABEL_18;
      }
LABEL_22:
      sub_1B64324(Instance);
    }
LABEL_18:
    if ( !v28 )
      goto LABEL_22;
    v32 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v28,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v17,
      Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v32, 0, v35, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    if ( !*(_QWORD *)v21 )
      goto LABEL_22;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v21 + 64LL),
      *(_QWORD *)(*(_QWORD *)v21 + 40LL));
    MasterMissionListViewManager__afterReward(this, v36);
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
  UIWidget_o *bulkButtonTxt; // x0
  __int64 methodPtr_low; // x11
  struct UICommonButton_o *v11; // x0
  UIWidget_o *v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FEEC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FEEC8 = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
      || (v15.fields.r = 0.5,
          v15.fields.g = 0.5,
          v15.fields.b = 0.5,
          v15.fields.a = 1.0,
          UIWidget__set_color(bulkButtonTxt, v15, 0LL),
          (bulkButtonTxt = (UIWidget_o *)this->fields.itemSortList) == 0LL) )
    {
LABEL_20:
      sub_1B64324(bulkButtonTxt);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v14.fields._current )
      {
        methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v14.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MasterMissionListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v14.fields._current[17].klass) == 3 )
        {
          v11 = this->fields.bulkButton;
          if ( !v11 )
            sub_1B64324(0LL);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v11->klass->vtable._14_SetState.method)(
            v11,
            0LL,
            1LL,
            v11->klass->vtable._15_OnPress.methodPtr);
          v12 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v12 )
            sub_1B64324(0LL);
          v16.fields.r = 1.0;
          v16.fields.g = 1.0;
          v16.fields.b = 1.0;
          v16.fields.a = 1.0;
          UIWidget__set_color(v12, v16, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v28; // x23
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v40; // x8
  void *ObjectList; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x8
  UILabel_o *v44; // x21
  UILabel_o *v45; // x21
  UILabel_o *v46; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v48; // x8
  const MethodInfo *v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  int v52; // w22
  System_Collections_Generic_List_object__o *v53; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FEEBF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, missionList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_1B640C8(&StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, v21);
    byte_49FEEBF = 1;
  }
  memset(&v57, 0, sizeof(v57));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v57 = v56;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v57.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v28 = (MasterMissionListViewItem_o *)sub_1B64314(MasterMissionListViewItem_TypeInfo, v24, v25);
      MasterMissionListViewItem___ctor(v28, (EventMissionEntity_o *)current, type, v29);
      if ( !itemList )
        sub_1B64324(v30);
      items = itemList->fields._items;
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B64324(v30);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v28,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v28, v31, v32);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v22, v23);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_49FEEF0 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, sort);
        byte_49FEEF0 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v40 = &StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v40 = &StringLiteral_8609/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v40, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_49FEEF0 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, v42);
        byte_49FEEF0 = 1;
      }
      v43 = 20LL;
      break;
    case 1:
      v46 = this->fields.emptyMessageLabel;
      if ( !byte_49FEEF1 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, sort);
        byte_49FEEF1 = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v48 = &StringLiteral_8609/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v48, 0LL);
      if ( !v46 )
        goto LABEL_63;
      UILabel__set_text(v46, (System_String_o *)ObjectList, 0LL);
      if ( !byte_49FEEF1 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, v42);
        byte_49FEEF1 = 1;
      }
      v43 = 24LL;
      break;
    case 2:
      v44 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v44 )
        goto LABEL_63;
      UILabel__set_text(v44, (System_String_o *)ObjectList, 0LL);
      if ( !byte_49FEEF2 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, v42);
        byte_49FEEF2 = 1;
      }
      v43 = 28LL;
      break;
    case 3:
      v45 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v45 )
        goto LABEL_63;
      UILabel__set_text(v45, (System_String_o *)ObjectList, 0LL);
      if ( !byte_49FEEF3 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, v42);
        byte_49FEEF3 = 1;
      }
      v43 = 32LL;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v43);
  MasterMissionListViewManager__setList(this, v42);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v50, v51);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v49);
  if ( !ObjectList )
LABEL_63:
    sub_1B64324(ObjectList);
  v52 = *((_DWORD *)ObjectList + 6);
  v53 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v52 >= 1 )
  {
    for ( i = 0; i != v52; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v53,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FEEC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v5);
    byte_49FEEC2 = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  unsigned __int64 v22; // x29
  __int64 v23; // x25
  __int64 v24; // x1
  int32_t v25; // w1
  int64_t UserId; // x2
  int32_t missionProgressType; // w23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_object__o *v29; // x27
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 methodPtr_low; // x11
  MissionListViewItem_o *current; // x26
  int32_t v34; // w27
  UnityEngine_Object_o *viewObject; // x27
  struct ListViewObject_o *v36; // x0
  UserEventMissionMaster_o *v37; // [xsp+0h] [xbp-B0h]
  int64_t Time; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49FEED0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__, v16);
    sub_1B640C8(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo, v17);
    byte_49FEED0 = 1;
  }
  entity = 0LL;
  memset(&v41, 0, sizeof(v41));
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    v37 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        v23 = sub_1B64314(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo, v20, v21);
        System_Object___ctor((Il2CppObject *)v23, 0LL);
        if ( v22 >= receiveMissionIds->max_length )
          sub_1B6432C(Instance, v24);
        if ( !v23 )
          break;
        v25 = receiveMissionIds->m_Items[v22 + 1];
        *(_DWORD *)(v23 + 16) = v25;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v25,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( Time > (__int64)Instance->fields.saveNameList && Time <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v37;
          if ( !v37 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v37,
                                        &entity,
                                        UserId,
                                        *(_DWORD *)(v23 + 16),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v29 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ListViewItem__TypeInfo, v20, v21);
            System_Predicate_object____ctor(
              v29,
              (Il2CppObject *)v23,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0LL);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v29,
                                          (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v40,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v41 = v40;
            while ( 1 )
            {
              v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v41,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v30 & 1) == 0 )
                break;
              if ( v41.fields._current
                && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (MasterMissionListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v41.fields._current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              v34 = *(_DWORD *)(v23 + 16);
              if ( !byte_49F934E )
              {
                v30 = sub_1B640C8(&EventRewardSaveData_TypeInfo, v31);
                byte_49F934E = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v34;
              if ( !current )
                sub_1B64324(v30);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v36 = current->fields.viewObject;
                if ( !v36 )
                  sub_1B64324(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._5_SetItem.method)(
                  v36,
                  current,
                  v36->klass->vtable._6_SetItem.methodPtr);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v41,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v22 >= (int)receiveMissionIds->max_length )
          return;
      }
LABEL_47:
      sub_1B64324(Instance);
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
  const MethodInfo *v8; // x1

  if ( (byte_49FEED3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v3);
    byte_49FEED3 = 1;
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v8);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B64324(ObjectList);
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

  if ( (byte_49FEEC6 & 1) == 0 )
  {
    sub_1B640C8(&Method_MasterMissionListViewManager_OnClickFilterList__, method);
    byte_49FEEC6 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_BDB44C[filterStatus];
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
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v16; // x1
  __int64 methodPtr_low; // x10
  int32_t listType; // w21
  MasterMissionListViewItem_o *v19; // x20
  char v20; // w0
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v27; // x2
  Il2CppObject *Instance; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *v31; // x20
  MasterMissionListViewManager___c_c *v32; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v34; // x21
  Il2CppObject *v35; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_49FEEC3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_MasterMissionListViewManager_OnClickListView__, v6);
    sub_1B640C8(&MasterMissionListViewObject_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, v9);
    sub_1B640C8(&MasterMissionListViewManager___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_4997/*"DIALOG_OUT_OF_TERM"*/, v11);
    sub_1B640C8(&StringLiteral_15498/*"Wait_Action"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FEEC3 = 1;
  }
  naviAction = 0LL;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_40;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15498/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj )
    goto LABEL_40;
  methodPtr_low = LOBYTE(MasterMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_40;
  if ( (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewObject_TypeInfo )
    goto LABEL_40;
  targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)obj, v16);
  if ( !targetFSM )
    goto LABEL_40;
  listType = this->fields.listType;
  v19 = (MasterMissionListViewItem_o *)targetFSM;
  v20 = (*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data);
  if ( listType != 3 )
  {
    if ( (v20 & 1) != 0 && !MasterMissionListViewItem__get_IsHideReward(v19, v21) && !v19->fields.isHideRewardDetail )
      goto LABEL_25;
LABEL_23:
    if ( v19->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.receiveItem, (int32_t)v19, v22, v23);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v19, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v27);
      return;
    }
    goto LABEL_36;
  }
  if ( (v20 & 1) == 0 || MasterMissionListViewItem__get_IsHideReward(v19, v21) || v19->fields.isHideRewardDetail )
    goto LABEL_23;
  if ( v19->fields.progStatus != 2
    || !ListViewManager__TryGetMissionCondNaviAction(
          (ListViewManager_o *)this,
          (MissionListViewItem_o *)v19,
          &naviAction,
          0LL) )
  {
LABEL_25:
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v19, 0, 0LL);
    return;
  }
  targetFSM = (PlayMakerFSM_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v19, 0LL);
  if ( !targetFSM )
    goto LABEL_40;
  if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0LL) )
  {
    v24 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1B640E0(Method_MasterMissionListViewManager_OnClickListView__);
    v25 = (System_Reflection_MethodBase_o *)sub_1B640AC(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    ActionExtensions__Call(naviAction, 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4997/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v31 = (System_String_o *)targetFSM;
  v32 = MasterMissionListViewManager___c_TypeInfo;
  if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo);
    v32 = MasterMissionListViewManager___c_TypeInfo;
  }
  _9__27_0 = v32->static_fields->__9__27_0;
  v34 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__27_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = MasterMissionListViewManager___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__27_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(_9__27_0, v35, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0LL);
    static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = _9__27_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v37, v38);
  }
  if ( !Instance )
LABEL_40:
    sub_1B64324(targetFSM);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v34, v31, _9__27_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
LABEL_36:
  v39 = Method_MasterMissionListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v39 = (_QWORD *)sub_1B640E0(Method_MasterMissionListViewManager_OnClickListView__);
  v40 = (System_Reflection_MethodBase_o *)sub_1B640AC(v39, v39[4]);
  OverwriteAssetSoundName__PlaySystemSe(v40, 2, 0LL);
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
  const MethodInfo *v11; // x1
  MasterMissionListViewItem_o *Item; // x0
  MasterMissionListViewItem_o *v13; // x20
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_49FEEC4 & 1) == 0 )
  {
    sub_1B640C8(&Method_MasterMissionListViewManager_OnClickRewardIcon__, obj);
    sub_1B640C8(&MasterMissionListViewObject_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15498/*"Wait_Action"*/, v7);
    byte_49FEEC4 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15498/*"Wait_Action"*/, 0LL) )
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
    sub_1B64324(targetFSM);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, v11);
  if ( Item )
  {
    v13 = Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, void *))Item->klass->vtable._8_get_IsShowRewardInfo.method)(
            Item,
            Item->klass[1]._1.image) & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward(v13, v14)
      && !v13->fields.isHideRewardDetail )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v13,
        0,
        0LL);
      return;
    }
    if ( v13->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.receiveItem, (int32_t)v13, v15, v16);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v13, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v18);
      return;
    }
  }
LABEL_20:
  v19 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B640E0(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
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
  int32_t v34; // w2
  int32_t v35; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  System_Text_StringBuilder_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x25
  int max_length; // w22
  const MethodInfo_36EC03C **v45; // x29
  __int64 v46; // x1
  __int64 v47; // x2
  il2cpp_array_size_t v48; // w21
  Il2CppClass **v49; // x26
  Il2CppClass *v50; // x8
  char *v51; // x26
  Il2CppClass *v52; // t1
  int32_t name_high; // w19
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_List_object__o *v56; // x28
  __int64 v57; // x2
  il2cpp_array_size_t v58; // w26
  Il2CppClass **v59; // x27
  Il2CppClass *v60; // x8
  Il2CppObject **v61; // x27
  Il2CppClass *v62; // t1
  int32_t v63; // w19
  ServantEntity_o *v64; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v66; // x0
  Il2CppObject *v67; // x19
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x19
  System_String_o *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x1
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  const MethodInfo_36EC03C **v78; // x20
  Il2CppObject *CountableString; // x19
  __int64 v80; // x1
  __int64 v81; // x2
  System_Text_StringBuilder_o *v82; // x29
  System_String_o *v83; // x21
  Il2CppObject *v84; // x0
  System_Text_StringBuilder_o *v85; // x19
  System_String_o *v86; // x1
  __int64 v87; // x8
  System_Collections_Generic_List_object__o *v88; // x0
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  System_Collections_Generic_List_object__o *v92; // x23
  __int64 v93; // x1
  __int64 v94; // x2
  System_Text_StringBuilder_o *v95; // x21
  System_String_o *v96; // x19
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  System_String_o *v99; // x19
  System_String_o *v100; // x0
  Il2CppObject *v101; // x19
  GiftEntity_array *v102; // x20
  System_String_o *v103; // x21
  __int64 v104; // x1
  __int64 v105; // x2
  MissionRewardGetDialog_ClickDelegate_o *v106; // x22
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

  if ( (byte_49FEECC & 1) == 0 )
  {
    sub_1B640C8(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor___75655800, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v21);
    sub_1B640C8(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__, v22);
    sub_1B640C8(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_8602/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v24);
    sub_1B640C8(&StringLiteral_8606/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v25);
    sub_1B640C8(&StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, v26);
    sub_1B640C8(&StringLiteral_3742/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v27);
    sub_1B640C8(&StringLiteral_51/*"\n \n "*/, v28);
    sub_1B640C8(&StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, v29);
    sub_1B640C8(&StringLiteral_49/*"\n "*/, v30);
    sub_1B640C8(&StringLiteral_8608/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v31);
    byte_49FEECC = 1;
  }
  v116 = 0LL;
  entity = 0LL;
  v32 = sub_1B64314(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_114;
  *(_QWORD *)(v32 + 16) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 16), (int32_t)callback, v34, v35);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v40 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v38, v39);
  System_Text_StringBuilder___ctor(v40, 0LL);
  v111 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v41, v42);
  System_Text_StringBuilder___ctor(v111, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v45 = (const MethodInfo_36EC03C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v48 = 0;
    v112 = 0;
    while ( 1 )
    {
      if ( v48 >= GiftListById->max_length )
LABEL_115:
        sub_1B6432C(Instance, v46);
      v49 = &GiftListById->obj.klass + (int)v48;
      v52 = v49[4];
      v51 = (char *)(v49 + 4);
      v50 = v52;
      if ( !v52 )
        goto LABEL_114;
      name_high = HIDWORD(v50->_1.name);
      Instance = Gift__IsServant_37376332(name_high, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_37376724(name_high, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v48 >= GiftListById->max_length )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v51 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v51 + 24LL),
                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0LL);
              v112 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v48 )
        goto LABEL_29;
    }
  }
  v112 = 0;
LABEL_29:
  v107 = v32 + 16;
  v108 = (Il2CppObject *)v32;
  collection = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                              System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                              v46,
                                                              v47);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v56 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v58 = 0;
    v109 = v40;
    do
    {
      if ( v58 >= GiftListById->max_length )
        goto LABEL_115;
      v59 = &GiftListById->obj.klass + (int)v58;
      v62 = v59[4];
      v61 = (Il2CppObject **)(v59 + 4);
      v60 = v62;
      if ( !v62 )
        goto LABEL_114;
      v63 = HIDWORD(v60->_1.name);
      Instance = Gift__IsServant_37376332(v63, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( v58 >= GiftListById->max_length )
          goto LABEL_115;
        if ( !*v61 )
          goto LABEL_114;
        if ( !v43 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v43,
                              (int32_t)(*v61)[1].monitor,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v64 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
        Instance = SvtType__IsStatusUp(v64->fields.type, 0LL);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v40 )
            goto LABEL_114;
          v66 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v40->klass->vtable._3_ToString.method)(
                                     v40,
                                     v40->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v66, 0LL) )
            System_Text_StringBuilder__Append_60536548(v40, (System_String_o *)StringLiteral_49/*"\n "*/, 0LL);
          Instance = (__int64)ServantEntity__getName(v64, -1, -1, 0LL);
          if ( v58 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !*v61 )
            goto LABEL_114;
          v67 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v61)[1].monitor);
          v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
          v69 = (Il2CppObject *)System_String__Format_61389768(format, v67, v68, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v40, v70, v69, 0LL);
          if ( v58 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !v56 )
            goto LABEL_114;
          v73 = *v61;
          items = v56->fields._items;
          v75 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v56->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v56->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v87 = v75[4];
            v88 = v56;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v88,
              v73,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v87 + 192) + 112LL));
            goto LABEL_73;
          }
          v77 = &items->obj.klass + size;
          v56->fields._size = size + 1;
LABEL_52:
          v77[4] = (Il2CppClass *)v73;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 4), (int32_t)v73, v71, v72);
        }
      }
      else
      {
        Instance = Gift__IsItem_37376280(v63, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v58 >= GiftListById->max_length )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v61 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v116,
                       (int32_t)(*v61)[1].monitor,
                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v45);
            if ( !v116 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v116[1].klass, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !v116 )
                goto LABEL_114;
              v78 = v45;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v116[3].klass, 0LL);
              v82 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v80, v81);
              System_Text_StringBuilder___ctor(v82, 0LL);
              if ( !v116 || !v82 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_60536548(v82, (System_String_o *)v116[1].monitor, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( v58 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !*v61 )
                goto LABEL_114;
              v83 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v61)[1].monitor);
              v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
              System_Text_StringBuilder__AppendFormat_60542900(v82, v83, CountableString, v84, 0LL);
              if ( v112 >= 2 )
              {
                v85 = v111;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v111 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v111, (System_String_o *)Instance, (Il2CppObject *)v82, 0LL);
                v86 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v82->klass->vtable._3_ToString.method)(
                             v82,
                             v82->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                v85 = v111;
                if ( !v111 )
                  goto LABEL_114;
                v86 = (System_String_o *)Instance;
              }
              v45 = v78;
              Instance = (__int64)System_Text_StringBuilder__Append_60536548(v85, v86, 0LL);
              v40 = v109;
              if ( v58 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v73 = *v61;
              v89 = collection->fields._items;
              v90 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v89 )
                goto LABEL_114;
              v91 = collection->fields._size;
              if ( (unsigned int)v91 >= v89->max_length )
              {
                v87 = v90[4];
                v88 = collection;
                goto LABEL_72;
              }
              v77 = &v89->obj.klass + v91;
              collection->fields._size = v91 + 1;
              goto LABEL_52;
            }
          }
        }
      }
LABEL_73:
      ++v58;
    }
    while ( max_length != v58 );
  }
  v92 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                       v46,
                                                       v57);
  System_Collections_Generic_List_object____ctor_55234504(
    v92,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_GiftEntity___ctor___75655800);
  if ( !v92 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v92,
    (System_Collections_Generic_IEnumerable_T__o *)v56,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v92->fields._size >= 1 )
  {
    v95 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v93, v94);
    System_Text_StringBuilder___ctor(v95, 0LL);
    if ( !v111 )
      goto LABEL_114;
    v96 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v111->klass->vtable._3_ToString.method)(
                               v111,
                               v111->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v96, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_114;
    }
    else
    {
      if ( v112 >= 2 )
      {
        if ( !v96 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_61394392(v96, 0, v96->fields._stringLength - 2, 0LL);
        if ( !v95 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_60536548(v95, (System_String_o *)Instance, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_8602/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = (__int64)System_Text_StringBuilder__Append_60536548(v95, v97, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v95 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v95,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v96,
                              0LL);
      }
      if ( !v40 )
        goto LABEL_114;
      v98 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v40->klass->vtable._3_ToString.method)(
                                 v40,
                                 v40->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v98, 0LL) )
        System_Text_StringBuilder__Append_60536548(v95, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0LL);
    }
    v99 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v40->klass->vtable._3_ToString.method)(
                               v40,
                               v40->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v99, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !v95 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_60536548(v95, v99, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_8608/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_60536548(v95, v100, 0LL);
    }
    v101 = SingletonMonoBehaviour_object___get_Instance(*v45);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v92,
                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v95 )
    {
      v102 = (GiftEntity_array *)Instance;
      v103 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v95->klass->vtable._3_ToString.method)(
                                  v95,
                                  v95->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v106 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B64314(
                                                         MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                         v104,
                                                         v105);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v106,
        v108,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v101 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v101, v102, v103, v106, 0, 0LL);
        return;
      }
    }
LABEL_114:
    sub_1B64324(Instance);
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
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  Il2CppObject *receiveItem; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FEED4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v10);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v11);
    byte_49FEED4 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo,
                                                       bulk,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = (Il2CppObject *)this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
    if ( v12 )
    {
      items = v12->fields._items;
      v27 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            receiveItem,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v29[4] = (Il2CppClass *)receiveItem;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)receiveItem, v14, v15);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
      }
    }
LABEL_26:
    sub_1B64324(itemSortList);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v16 )
      break;
    current = v32.fields._current;
    if ( v32.fields._current )
    {
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v32.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (MasterMissionListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v32.fields._current[17].klass) == 3 )
      {
        if ( !v12 )
          sub_1B64324(v16);
        v21 = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v12->fields._version;
        if ( !v21 )
          sub_1B64324(v16);
        v23 = v12->fields._size;
        if ( (unsigned int)v23 >= v21->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            current,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &v21->obj.klass + v23;
          v12->fields._size = v23 + 1;
          v24[4] = (Il2CppClass *)current;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)current, v17, v18);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_Collections_Generic_List_object__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v14; // w21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FEEC5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v7);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v8);
    byte_49FEEC5 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v10 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v15;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
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
    sub_1B64324(v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_17;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v10,
                                                                  v14,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v14 >= v10->fields._size )
        return;
    }
LABEL_17:
    sub_1B64324(ObjectList);
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
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct MasterMissionListViewItem_o *v14; // x21
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FEED1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1B640C8(&StringLiteral_18770/*"ef_mission_extric01"*/, v7);
    sub_1B640C8(&StringLiteral_21421/*"modifyOpenItem"*/, v8);
    byte_49FEED1 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1B64324(0LL);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        ObjectList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v22 = v21;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v10 )
          break;
        current = v22.fields._current;
        if ( !v22.fields._current )
          sub_1B64324(v10);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v22.fields._current,
                                          v11);
        v14 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1B64324(0LL);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_49F934E )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v15);
            byte_49F934E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v14;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openTargetItem, (int32_t)v14, v16, v17);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v14, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18770/*"ef_mission_extric01"*/, transform, v20);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21421/*"modifyOpenItem"*/,
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
  int32_t v8; // w2
  int32_t v9; // w3
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_49FEEC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_MasterMissionListViewManager_SetReceiveReward__, missionEntity);
    sub_1B640C8(&StringLiteral_8640/*"MISSION_REWARD"*/, v5);
    byte_49FEEC9 = 1;
  }
  v6 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_MasterMissionListViewManager_SetReceiveReward__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.missionToRecieve, (int32_t)missionEntity, v8, v9);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8640/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall MasterMissionListViewManager__SetResultData(
        MasterMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.getSvtList = svts;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (int32_t)cmds,
    (int32_t)method);
  this->fields.getCommandCodeList = cmds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
}


void __fastcall MasterMissionListViewManager___modifyOpenItem_b__45_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FEED6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16577/*"actionAfterCallback"*/, method);
    byte_49FEED6 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16577/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0LL);
}


void __fastcall MasterMissionListViewManager__actionAfterCallback(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *actionCallback; // x19
  ServantStatusBattleListViewItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_1B6406C(p_actionCallback, 0, v2, v3);
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

  if ( (byte_49FEECD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5448/*"END_EFFECT"*/, method);
    byte_49FEECD = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5448/*"END_EFFECT"*/, 0LL);
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
  Il2CppObject *Object_object__48347676; // x19
  UnityEngine_GameObject_o *v10; // x19
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_49FEECF & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, parentTr);
    sub_1B640C8(&MasterMissionListViewManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FEECF = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48347676,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7111 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7111 = 1;
  }
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7116 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  if ( !v14 )
LABEL_15:
    sub_1B64324(effectAssetData);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FEEBE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FEEBE = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v12;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FEEBD & 1) == 0 )
  {
    sub_1B640C8(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method);
    byte_49FEEBD = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_2EB7894 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  void *v16; // x0
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FEED2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v8);
    sub_1B640C8(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FEED2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v12 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current
        || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterMissionListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1B64324(v12);
      }
      monitor = (UnityEngine_Object_o *)v19.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v16 = current[6].monitor;
        if ( !v16 )
          sub_1B64324(0LL);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v16 + 392LL))(
          v16,
          current,
          *(_QWORD *)(*(_QWORD *)v16 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v17, 0LL);
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
  const MethodInfo *v9; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w19
  int64_t Time; // x20
  AutomatedAction_c *klass; // x22
  bool v16; // w3
  int32_t v17; // w1

  if ( (byte_49FEECE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v8);
    byte_49FEECE = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v9);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
      v11 = UnityEngine_Random__Range_69087476(0, receiveMissionIds->max_length, 0LL);
      if ( (unsigned int)v11 >= receiveMissionIds->max_length )
        sub_1B6432C(v11, v12);
      v13 = receiveMissionIds->m_Items[(int)v11 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (AutomatedAction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
        if ( Instance )
        {
          Instance = (AutomatedAction_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            v13,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
          if ( Instance )
          {
            if ( Time <= (__int64)Instance->fields.shopActionObject )
            {
              Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( Instance )
                goto LABEL_18;
            }
            else
            {
              klass = Instance[1].klass;
              Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( Instance )
              {
                if ( Time <= (__int64)klass )
                {
                  v16 = 1;
                  v17 = v13;
LABEL_19:
                  AutomatedAction__SetMissionAction(Instance, v17, 5, v16, 0LL);
                  return;
                }
LABEL_18:
                v17 = v13;
                v16 = 0;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
    sub_1B64324(Instance);
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
    sub_1B64324(filterBtnTxt);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v12; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  const MethodInfo *v18; // x2
  UILabel_o *v19; // x21
  struct ListViewSort_o *v20; // x8
  int v21; // w9
  bool v22; // w2
  const MethodInfo *v23; // x1
  int32_t filterStatus; // w20
  int32_t v25; // w20
  int32_t v26; // w20
  int32_t v27; // w20

  if ( (byte_49FEEC7 & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/, v5);
    sub_1B640C8(&StringLiteral_17499/*"btn_txt_completed"*/, v6);
    sub_1B640C8(&StringLiteral_17532/*"btn_txt_receipt"*/, v7);
    sub_1B640C8(&StringLiteral_17531/*"btn_txt_progress"*/, v8);
    sub_1B640C8(&StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, v9);
    sub_1B640C8(&StringLiteral_17481/*"btn_txt_all"*/, v10);
    byte_49FEEC7 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v12 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor_40426860(v12, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v12, v14, v15);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1B64324(operationSortInfo);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17481/*"btn_txt_all"*/, v18);
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
      v19 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v19 )
        goto LABEL_53;
      UILabel__set_text(v19, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17532/*"btn_txt_receipt"*/, v18);
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
      v20 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v21 = 1;
      goto LABEL_37;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17531/*"btn_txt_progress"*/, v18);
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
      v22 = 0;
      goto LABEL_33;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17499/*"btn_txt_completed"*/, v18);
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
      v22 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v22, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_35:
      v20 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v21 = 13;
LABEL_37:
      v20->fields.sortKind = v21;
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
          if ( !byte_49FEEF4 )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v23);
            byte_49FEEF4 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v25 = this->fields.filterStatus;
          if ( !byte_49FEEF5 )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v23);
            byte_49FEEF5 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v25;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v26 = this->fields.filterStatus;
          if ( !byte_49FEEF6 )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v23);
            byte_49FEEF6 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v26;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v27 = this->fields.filterStatus;
          if ( !byte_49FEEF7 )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v23);
            byte_49FEEF7 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v27;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v23);
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

  if ( (byte_49FEEC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v6);
    byte_49FEEC1 = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_49FEEF0 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_49FEEF0 = 1;
      }
      v7 = 20LL;
      goto LABEL_16;
    case 1:
      if ( !byte_49FEEF1 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_49FEEF1 = 1;
      }
      v7 = 24LL;
      goto LABEL_16;
    case 2:
      if ( !byte_49FEEF2 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_49FEEF2 = 1;
      }
      v7 = 28LL;
      goto LABEL_16;
    case 3:
      if ( !byte_49FEEF3 )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_49FEEF3 = 1;
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
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1B64324(itemList);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v13; // w22
  int32_t v14; // w21
  __int64 methodPtr_low; // x10
  System_Action_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FEEC0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v9);
    sub_1B640C8(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, v10);
    byte_49FEEC0 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v13 = size - 1;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v14,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( v13 == v14 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v14;
    }
    while ( itemList );
LABEL_15:
    sub_1B64324(itemList);
  }
LABEL_16:
  v14 = 0;
LABEL_17:
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, *(_QWORD *)&missionID, callback);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
    0LL);
  this->fields.callbackAfterScroll = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterScroll, (int32_t)v16, v17, v18);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v14, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_49FEECA & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1B640C8(&StringLiteral_5453/*"END_NOTICE"*/, method);
    byte_49FEECA = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5453/*"END_NOTICE"*/, 0LL);
}


void __fastcall MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEED7 & 1) == 0 )
  {
    sub_1B640C8(&MasterMissionListViewManager___c_TypeInfo, v1);
    byte_49FEED7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MasterMissionListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)MasterMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FEED8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49FEED8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  const MethodInfo *v4; // x1

  callback = this->fields.callback;
  if ( !callback
    || (v3 = this,
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg),
        (this = (MasterMissionListViewManager___c__DisplayClass38_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_1B64324(this);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)this, v4);
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
  struct System_Action_o *callback; // x8

  if ( (byte_49FEED9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FEED9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL), (callback = this->fields.callback) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
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

  v4 = this;
  if ( (byte_49FEEDA & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1B640C8(&MasterMissionListViewItem_TypeInfo, x);
    byte_49FEEDA = 1;
  }
  if ( !x
    || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_1B64324(this);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == v4->fields.missionId;
}