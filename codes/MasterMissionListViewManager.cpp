void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A0B752 & 1) == 0 )
  {
    sub_1B686D4(&MissionListViewManager_TypeInfo, method);
    byte_4A0B752 = 1;
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
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x24
  __int64 v28; // x8
  unsigned __int64 v29; // x25
  GiftEntity_array *v30; // x20
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A0B748 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, receiveMissionIds);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_1B686D4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_1B686D4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B686D4(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__, v15);
    sub_1B686D4(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v16);
    byte_4A0B748 = 1;
  }
  entity = 0LL;
  v17 = sub_1B68920(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = callback;
  v22 = v17 + 16;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)callback, v20, v21);
  *(_QWORD *)(v17 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v23, v24);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v26 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_GiftMaster___);
    v27 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v28 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v28 >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( v29 >= (unsigned int)v28 )
          sub_1B68938(Instance, v19);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v29 + 1],
                                         (const MethodInfo_30E4514 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v26 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v26, HIDWORD(entity[5].klass), 0LL);
          if ( !v27 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v27,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v28) = receiveMissionIds->max_length;
        if ( (__int64)++v29 >= (int)v28 )
          goto LABEL_18;
      }
LABEL_22:
      sub_1B68930(Instance, v19);
    }
LABEL_18:
    if ( !v27 )
      goto LABEL_22;
    v30 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v27,
                                (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v31 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v17,
      Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v30, 0, v31, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    if ( !*(_QWORD *)v22 )
      goto LABEL_22;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v22 + 64LL),
      *(_QWORD *)(*(_QWORD *)v22 + 40LL));
    MasterMissionListViewManager__afterReward(this, v32);
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

  if ( (byte_4A0B745 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    byte_4A0B745 = 1;
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
      sub_1B68930(bulkButtonTxt, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v17 = v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
            sub_1B68930(0LL, v11);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
            v13,
            0LL,
            1LL,
            v13->klass->vtable._15_OnPress.methodPtr);
          v15 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v15 )
            sub_1B68930(0LL, v14);
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
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v26; // x23
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v39; // x8
  void *ObjectList; // x0
  __int64 v41; // x1
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

  if ( (byte_4A0B73C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, missionList);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v16);
    sub_1B686D4(&LocalizationManager_TypeInfo, v17);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v18);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v19);
    sub_1B686D4(&StringLiteral_8734/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_1B686D4(&StringLiteral_8614/*"MISSION_EMPTY_TXT"*/, v21);
    byte_4A0B73C = 1;
  }
  memset(&v57, 0, sizeof(v57));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v57 = v56;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v57.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v26 = (MasterMissionListViewItem_o *)sub_1B68920(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v26, (EventMissionEntity_o *)current, type, v27);
      if ( !itemList )
        sub_1B68930(v28, v29);
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B68930(v28, v29);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v26,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v26;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v26, v30, v31);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v22, v23);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4A0B76D )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, sort);
        byte_4A0B76D = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = &StringLiteral_8734/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v39 = &StringLiteral_8614/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v39, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A0B76D )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, v42);
        byte_4A0B76D = 1;
      }
      v43 = 20LL;
      break;
    case 1:
      v46 = this->fields.emptyMessageLabel;
      if ( !byte_4A0B76E )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, sort);
        byte_4A0B76E = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_8734/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v48 = &StringLiteral_8614/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v48, 0LL);
      if ( !v46 )
        goto LABEL_63;
      UILabel__set_text(v46, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A0B76E )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, v42);
        byte_4A0B76E = 1;
      }
      v43 = 24LL;
      break;
    case 2:
      v44 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8614/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v44 )
        goto LABEL_63;
      UILabel__set_text(v44, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A0B76F )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, v42);
        byte_4A0B76F = 1;
      }
      v43 = 28LL;
      break;
    case 3:
      v45 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8614/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v45 )
        goto LABEL_63;
      UILabel__set_text(v45, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A0B770 )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, v42);
        byte_4A0B770 = 1;
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v50, v51);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v49);
  if ( !ObjectList )
LABEL_63:
    sub_1B68930(ObjectList, v41);
  v52 = *((_DWORD *)ObjectList + 6);
  v53 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v52 >= 1 )
  {
    for ( i = 0; i != v52; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v53,
               i,
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
    sub_1B68930(0LL, method);
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

  if ( (byte_4A0B73F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v5);
    byte_4A0B73F = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v22; // x25
  int64_t UserId; // x2
  int32_t missionProgressType; // w23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_object__o *v26; // x27
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x11
  MissionListViewItem_o *current; // x26
  int32_t v31; // w27
  UnityEngine_Object_o *viewObject; // x27
  __int64 v33; // x1
  struct ListViewObject_o *v34; // x0
  UserEventMissionMaster_o *v35; // [xsp+0h] [xbp-B0h]
  int64_t Time; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A0B74D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1B686D4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v11);
    sub_1B686D4(&NetworkManager_TypeInfo, v12);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v13);
    sub_1B686D4(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B686D4(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__, v16);
    sub_1B686D4(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo, v17);
    byte_4A0B74D = 1;
  }
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    v35 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        v22 = sub_1B68920(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v22, 0LL);
        if ( v21 >= receiveMissionIds->max_length )
          sub_1B68938(Instance, v19);
        if ( !v22 )
          break;
        v19 = (unsigned int)receiveMissionIds->m_Items[v21 + 1];
        *(_DWORD *)(v22 + 16) = v19;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v19,
                                      (const MethodInfo_30E44C0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( Time > (__int64)Instance->fields.saveNameList && Time <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v35;
          if ( !v35 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v35,
                                        &entity,
                                        UserId,
                                        *(_DWORD *)(v22 + 16),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v26 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v26,
              (Il2CppObject *)v22,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0LL);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v26,
                                          (const MethodInfo_34BC988 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v38,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v39 = v38;
            while ( 1 )
            {
              v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v39,
                      (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
              v31 = *(_DWORD *)(v22 + 16);
              if ( !byte_4A05B2E )
              {
                v27 = sub_1B686D4(&EventRewardSaveData_TypeInfo, v28);
                byte_4A05B2E = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v31;
              if ( !current )
                sub_1B68930(v27, v28);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v34 = current->fields.viewObject;
                if ( !v34 )
                  sub_1B68930(0LL, v33);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v34->klass->vtable._5_SetItem.method)(
                  v34,
                  current,
                  v34->klass->vtable._6_SetItem.methodPtr);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v39,
              (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v21 >= (int)receiveMissionIds->max_length )
          return;
      }
LABEL_47:
      sub_1B68930(Instance, v19);
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

  if ( (byte_4A0B750 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v3);
    byte_4A0B750 = 1;
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
                                                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B68930(ObjectList, v5);
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

  if ( (byte_4A0B743 & 1) == 0 )
  {
    sub_1B686D4(&Method_MasterMissionListViewManager_OnClickFilterList__, method);
    byte_4A0B743 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_BDE8D8[filterStatus];
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
  PlayMakerFSM_o *v19; // x20
  char v20; // w0
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  Il2CppObject *Instance; // x19
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
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A0B740 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, obj);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_MasterMissionListViewManager_OnClickListView__, v6);
    sub_1B686D4(&MasterMissionListViewObject_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v9);
    sub_1B686D4(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, v10);
    sub_1B686D4(&MasterMissionListViewManager___c_TypeInfo, v11);
    sub_1B686D4(&StringLiteral_4996/*"DIALOG_OUT_OF_TERM"*/, v12);
    sub_1B686D4(&StringLiteral_15500/*"Wait_Action"*/, v13);
    sub_1B686D4(&StringLiteral_1/*""*/, v14);
    byte_4A0B740 = 1;
  }
  naviAction = 0LL;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15500/*"Wait_Action"*/,
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
  v19 = targetFSM;
  v20 = (*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data);
  if ( listType == 3 )
  {
    if ( (v20 & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v19, v21)
      && !BYTE4(v19[4].fields.fsm) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0LL);
      if ( v19[4].fields.m_CachedPtr == 2
        && ListViewManager__TryGetMissionCondNaviAction(
             (ListViewManager_o *)this,
             (MissionListViewItem_o *)v19,
             &naviAction,
             0LL) )
      {
        targetFSM = (PlayMakerFSM_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v19, 0LL);
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0LL) )
          {
            v24 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v24 = (_QWORD *)sub_1B686EC(Method_MasterMissionListViewManager_OnClickListView__);
            v25 = (System_Reflection_MethodBase_o *)sub_1B686B8(v24, v24[4]);
            OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
            ActionExtensions__Call(naviAction, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4996/*"DIALOG_OUT_OF_TERM"*/, 0LL);
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
            _9__27_0 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
            System_Action___ctor(_9__27_0, v35, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0LL);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v37, v38);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v34,
              v31,
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
            v39 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v39 = (_QWORD *)sub_1B686EC(Method_MasterMissionListViewManager_OnClickListView__);
            v40 = (System_Reflection_MethodBase_o *)sub_1B686B8(v39, v39[4]);
            OverwriteAssetSoundName__PlaySystemSe(v40, 2, 0LL);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
              return;
            }
          }
        }
LABEL_46:
        sub_1B68930(targetFSM, obj);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
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
         && !BYTE4(v19[4].fields.fsm) )
  {
    goto LABEL_32;
  }
  if ( v19[4].fields.m_CachedPtr == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v19;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.receiveItem, (int32_t)v19, v22, v23);
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v19, 0LL);
    MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v27);
  }
  else
  {
    v28 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B686EC(Method_MasterMissionListViewManager_OnClickListView__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B686B8(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
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
  MasterMissionListViewItem_o *v12; // x20
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_4A0B741 & 1) == 0 )
  {
    sub_1B686D4(&Method_MasterMissionListViewManager_OnClickRewardIcon__, obj);
    sub_1B686D4(&MasterMissionListViewObject_TypeInfo, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_15500/*"Wait_Action"*/, v7);
    byte_4A0B741 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15500/*"Wait_Action"*/, 0LL) )
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
    sub_1B68930(targetFSM, obj);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, (const MethodInfo *)obj);
  if ( Item )
  {
    v12 = Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, void *))Item->klass->vtable._8_get_IsShowRewardInfo.method)(
            Item,
            Item->klass[1]._1.image) & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward(v12, v13)
      && !v12->fields.isHideRewardDetail )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v12,
        0,
        0LL);
      return;
    }
    if ( v12->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v12;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.receiveItem, (int32_t)v12, v14, v15);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v12, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v17);
      return;
    }
  }
LABEL_20:
  v18 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1B686EC(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B686B8(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0LL);
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
  int32_t v35; // w2
  int32_t v36; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v39; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x25
  int max_length; // w22
  const MethodInfo_36F769C **v42; // x29
  il2cpp_array_size_t v43; // w21
  Il2CppClass **v44; // x26
  Il2CppClass *v45; // x8
  char *v46; // x26
  Il2CppClass *v47; // t1
  int32_t name_high; // w19
  System_Collections_Generic_List_object__o *v49; // x28
  il2cpp_array_size_t v50; // w26
  Il2CppClass **v51; // x27
  Il2CppClass *v52; // x8
  Il2CppObject **v53; // x27
  Il2CppClass *v54; // t1
  int32_t v55; // w19
  ServantEntity_o *v56; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v58; // x0
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x19
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x19
  System_String_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  const MethodInfo_36F769C **v72; // x20
  Il2CppObject *CountableString; // x19
  System_Text_StringBuilder_o *v74; // x29
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_String_o *v78; // x21
  Il2CppObject *v79; // x0
  System_Text_StringBuilder_o *v80; // x19
  System_String_o *v81; // x1
  __int64 v82; // x8
  System_Collections_Generic_List_object__o *v83; // x0
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  System_Collections_Generic_List_object__o *v87; // x23
  System_Text_StringBuilder_o *v88; // x21
  System_String_o *v89; // x19
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  System_String_o *v92; // x19
  System_String_o *v93; // x0
  Il2CppObject *v94; // x19
  GiftEntity_array *v95; // x20
  System_String_o *v96; // x21
  MissionRewardGetDialog_ClickDelegate_o *v97; // x22
  __int64 v98; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v99; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v100; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v102; // [xsp+28h] [xbp-98h]
  int v103; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v107; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A0B749 & 1) == 0 )
  {
    sub_1B686D4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback);
    sub_1B686D4(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B686D4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1B686D4(&int_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity___ctor___75704976, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16);
    sub_1B686D4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v17);
    sub_1B686D4(&LocalizationManager_TypeInfo, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v21);
    sub_1B686D4(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__, v22);
    sub_1B686D4(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo, v23);
    sub_1B686D4(&StringLiteral_8607/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v24);
    sub_1B686D4(&StringLiteral_8611/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v25);
    sub_1B686D4(&StringLiteral_8610/*"MISSION_ACTION_SUCCESS"*/, v26);
    sub_1B686D4(&StringLiteral_3741/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v27);
    sub_1B686D4(&StringLiteral_51/*"\n \n "*/, v28);
    sub_1B686D4(&StringLiteral_8606/*"MISSION_ACTION_ITEM_FORMAT"*/, v29);
    sub_1B686D4(&StringLiteral_49/*"\n "*/, v30);
    sub_1B686D4(&StringLiteral_8613/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v31);
    byte_4A0B749 = 1;
  }
  v107 = 0LL;
  entity = 0LL;
  v32 = sub_1B68920(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_114;
  *(_QWORD *)(v32 + 16) = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v32 + 16), (int32_t)callback, v35, v36);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v39 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v39, 0LL);
  v102 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v102, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v42 = (const MethodInfo_36F769C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v43 = 0;
    v103 = 0;
    while ( 1 )
    {
      if ( v43 >= GiftListById->max_length )
LABEL_115:
        sub_1B68938(Instance, v34);
      v44 = &GiftListById->obj.klass + (int)v43;
      v47 = v44[4];
      v46 = (char *)(v44 + 4);
      v45 = v47;
      if ( !v47 )
        goto LABEL_114;
      name_high = HIDWORD(v45->_1.name);
      Instance = Gift__IsServant_37438280(name_high, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_37438672(name_high, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v43 >= GiftListById->max_length )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v46 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v46 + 24LL),
                         (const MethodInfo_30E4514 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0LL);
              v103 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v43 )
        goto LABEL_29;
    }
  }
  v103 = 0;
LABEL_29:
  v98 = v32 + 16;
  v99 = (Il2CppObject *)v32;
  collection = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v49 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v50 = 0;
    v100 = v39;
    do
    {
      if ( v50 >= GiftListById->max_length )
        goto LABEL_115;
      v51 = &GiftListById->obj.klass + (int)v50;
      v54 = v51[4];
      v53 = (Il2CppObject **)(v51 + 4);
      v52 = v54;
      if ( !v54 )
        goto LABEL_114;
      v55 = HIDWORD(v52->_1.name);
      Instance = Gift__IsServant_37438280(v55, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( v50 >= GiftListById->max_length )
          goto LABEL_115;
        if ( !*v53 )
          goto LABEL_114;
        if ( !v40 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v40,
                              (int32_t)(*v53)[1].monitor,
                              (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v56 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
        Instance = SvtType__IsStatusUp(v56->fields.type, 0LL);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_114;
          v58 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                                     v39,
                                     v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v58, 0LL) )
            System_Text_StringBuilder__Append_60581364(v39, (System_String_o *)StringLiteral_49/*"\n "*/, 0LL);
          Instance = (__int64)ServantEntity__getName(v56, -1, -1, 0LL);
          if ( v50 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !*v53 )
            goto LABEL_114;
          v62 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v53)[1].monitor);
          v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v59, v60, v61);
          v64 = (Il2CppObject *)System_String__Format_61433840(format, v62, v63, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v39, v65, v64, 0LL);
          if ( v50 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !v49 )
            goto LABEL_114;
          v34 = *v53;
          items = v49->fields._items;
          v69 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v49->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v49->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v82 = v69[4];
            v83 = v49;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v83,
              v34,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v82 + 192) + 112LL));
            goto LABEL_73;
          }
          v71 = &items->obj.klass + size;
          v49->fields._size = size + 1;
LABEL_52:
          v71[4] = (Il2CppClass *)v34;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v34, v66, v67);
        }
      }
      else
      {
        Instance = Gift__IsItem_37438228(v55, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v50 >= GiftListById->max_length )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v53 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v107,
                       (int32_t)(*v53)[1].monitor,
                       (const MethodInfo_30E4514 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v42);
            if ( !v107 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v107[1].klass, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !v107 )
                goto LABEL_114;
              v72 = v42;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v107[3].klass, 0LL);
              v74 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v74, 0LL);
              if ( !v107 || !v74 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_60581364(v74, (System_String_o *)v107[1].monitor, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( v50 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !*v53 )
                goto LABEL_114;
              v78 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v53)[1].monitor);
              v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v75, v76, v77);
              System_Text_StringBuilder__AppendFormat_60587716(v74, v78, CountableString, v79, 0LL);
              if ( v103 >= 2 )
              {
                v80 = v102;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v102 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v102, (System_String_o *)Instance, (Il2CppObject *)v74, 0LL);
                v81 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v74->klass->vtable._3_ToString.method)(
                             v74,
                             v74->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                v80 = v102;
                if ( !v102 )
                  goto LABEL_114;
                v81 = (System_String_o *)Instance;
              }
              v42 = v72;
              Instance = (__int64)System_Text_StringBuilder__Append_60581364(v80, v81, 0LL);
              v39 = v100;
              if ( v50 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v34 = *v53;
              v84 = collection->fields._items;
              v85 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v84 )
                goto LABEL_114;
              v86 = collection->fields._size;
              if ( (unsigned int)v86 >= v84->max_length )
              {
                v82 = v85[4];
                v83 = collection;
                goto LABEL_72;
              }
              v71 = &v84->obj.klass + v86;
              collection->fields._size = v86 + 1;
              goto LABEL_52;
            }
          }
        }
      }
LABEL_73:
      ++v50;
    }
    while ( max_length != v50 );
  }
  v87 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55294828(
    v87,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_34BBB6C *)Method_System_Collections_Generic_List_GiftEntity___ctor___75704976);
  if ( !v87 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v87,
    (System_Collections_Generic_IEnumerable_T__o *)v49,
    (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v87->fields._size >= 1 )
  {
    v88 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v88, 0LL);
    if ( !v102 )
      goto LABEL_114;
    v89 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v102->klass->vtable._3_ToString.method)(
                               v102,
                               v102->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v89, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_114;
    }
    else
    {
      if ( v103 >= 2 )
      {
        if ( !v89 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_61438472(v89, 0, v89->fields._stringLength - 2, 0LL);
        if ( !v88 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_60581364(v88, (System_String_o *)Instance, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v90 = LocalizationManager__Get((System_String_o *)StringLiteral_8607/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = (__int64)System_Text_StringBuilder__Append_60581364(v88, v90, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8610/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v88 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v88,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v89,
                              0LL);
      }
      if ( !v39 )
        goto LABEL_114;
      v91 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                                 v39,
                                 v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v91, 0LL) )
        System_Text_StringBuilder__Append_60581364(v88, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0LL);
    }
    v92 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                               v39,
                               v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v92, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !v88 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_60581364(v88, v92, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8613/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_60581364(v88, v93, 0LL);
    }
    v94 = SingletonMonoBehaviour_object___get_Instance(*v42);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v87,
                          (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v88 )
    {
      v95 = (GiftEntity_array *)Instance;
      v96 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v88->klass->vtable._3_ToString.method)(
                                 v88,
                                 v88->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v97 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B68920(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v97,
        v99,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v94 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v94, v95, v96, v97, 0, 0LL);
        return;
      }
    }
LABEL_114:
    sub_1B68930(Instance, v34);
  }
  if ( !*(_QWORD *)v98 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v98 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v98 + 64LL),
    *(_QWORD *)(*(_QWORD *)v98 + 40LL));
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
  int32_t v15; // w2
  int32_t v16; // w3
  _BOOL8 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A0B751 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v10);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v11);
    byte_4A0B751 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
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
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v29[4] = (Il2CppClass *)receiveItem;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)receiveItem, v15, v16);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
      }
    }
LABEL_26:
    sub_1B68930(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
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
          sub_1B68930(v17, v32.fields._current);
        v22 = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v12->fields._version;
        if ( !v22 )
          sub_1B68930(v17, current);
        v24 = v12->fields._size;
        if ( (unsigned int)v24 >= v22->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            current,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &v22->obj.klass + v24;
          v12->fields._size = v24 + 1;
          v25[4] = (Il2CppClass *)current;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)current, v18, v19);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4A0B742 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v7);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v8);
    byte_4A0B742 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v11 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
    sub_1B68930(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
    sub_1B68930(ObjectList, v10);
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
  MissionListViewItem_o *Item; // x0
  __int64 v15; // x1
  struct MasterMissionListViewItem_o *v16; // x21
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A0B74E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_1B686D4(&StringLiteral_18775/*"ef_mission_extric01"*/, v7);
    sub_1B686D4(&StringLiteral_21432/*"modifyOpenItem"*/, v8);
    byte_4A0B74E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1B68930(0LL, v10);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        ObjectList,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v24 = v23;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v11 )
          break;
        current = v24.fields._current;
        if ( !v24.fields._current )
          sub_1B68930(v11, v12);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v24.fields._current,
                                          v12);
        v16 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1B68930(0LL, v15);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4A05B2E )
          {
            sub_1B686D4(&EventRewardSaveData_TypeInfo, v17);
            byte_4A05B2E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v16;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.openTargetItem, (int32_t)v16, v18, v19);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v16, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18775/*"ef_mission_extric01"*/, transform, v22);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21432/*"modifyOpenItem"*/,
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
  __int64 v10; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4A0B746 & 1) == 0 )
  {
    sub_1B686D4(&Method_MasterMissionListViewManager_SetReceiveReward__, missionEntity);
    sub_1B686D4(&StringLiteral_8645/*"MISSION_REWARD"*/, v5);
    byte_4A0B746 = 1;
  }
  v6 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B686EC(Method_MasterMissionListViewManager_SetReceiveReward__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.missionToRecieve, (int32_t)missionEntity, v8, v9);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B68930(0LL, v10);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8645/*"MISSION_REWARD"*/, 0LL);
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (int32_t)cmds,
    (int32_t)method);
  this->fields.getCommandCodeList = cmds;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
}


void __fastcall MasterMissionListViewManager___modifyOpenItem_b__45_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0B753 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_16580/*"actionAfterCallback"*/, method);
    byte_4A0B753 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16580/*"actionAfterCallback"*/,
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
    sub_1B68678(p_actionCallback, 0, v2, v3);
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

  if ( (byte_4A0B74A & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_5449/*"END_EFFECT"*/, method);
    byte_4A0B74A = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5449/*"END_EFFECT"*/, 0LL);
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
  Il2CppObject *Object_object__48415484; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4A0B74C & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, parentTr);
    sub_1B686D4(&MasterMissionListViewManager_TypeInfo, v5);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    byte_4A0B74C = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48415484 = AssetData__GetObject_object__48415484(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48415484,
                                     (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A03901 )
  {
    effectAssetData = (AssetData_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A03901 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A03906 )
  {
    effectAssetData = (AssetData_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A03906 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1B68930(effectAssetData, parentTr);
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
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A0B73B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A0B73B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B68930(0LL, v18);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B68930(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40459252((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B68930(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B68930(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B68930(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B68930(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0B73A & 1) == 0 )
  {
    sub_1B686D4(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method);
    byte_4A0B73A = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_2EC830C *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
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

  if ( (byte_4A0B74F & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v7);
    sub_1B686D4(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, v8);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v9);
    byte_4A0B74F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B68930(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields._current;
      if ( !v20.fields._current
        || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterMissionListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1B68930(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v20.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1B68930(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
  const MethodInfo *v9; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w19
  int64_t Time; // x20
  AutomatedAction_c *klass; // x22
  bool v17; // w3
  int32_t v18; // w1

  if ( (byte_4A0B74B & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1B686D4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v8);
    byte_4A0B74B = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v9);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
      v12 = UnityEngine_Random__Range_69131556(0, receiveMissionIds->max_length, 0LL);
      if ( (unsigned int)v12 >= receiveMissionIds->max_length )
        sub_1B68938(v12, v13);
      v14 = receiveMissionIds->m_Items[(int)v12 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (AutomatedAction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMissionMaster___);
        if ( Instance )
        {
          Instance = (AutomatedAction_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            v14,
                                            (const MethodInfo_30E44C0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
          if ( Instance )
          {
            if ( Time <= (__int64)Instance->fields.shopActionObject )
            {
              Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( Instance )
                goto LABEL_18;
            }
            else
            {
              klass = Instance[1].klass;
              Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( Instance )
              {
                if ( Time <= (__int64)klass )
                {
                  v17 = 1;
                  v18 = v14;
LABEL_19:
                  AutomatedAction__SetMissionAction(Instance, v18, 5, v17, 0LL);
                  return;
                }
LABEL_18:
                v18 = v14;
                v17 = 0;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
    sub_1B68930(Instance, v11);
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
    sub_1B68930(filterBtnTxt, targetFile);
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
  int32_t v13; // w2
  int32_t v14; // w3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v17; // x1
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

  if ( (byte_4A0B744 & 1) == 0 )
  {
    sub_1B686D4(&ListViewSort_TypeInfo, method);
    sub_1B686D4(&LocalizationManager_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_8734/*"MST_MISSION_EMPTY_TXT"*/, v4);
    sub_1B686D4(&StringLiteral_17504/*"btn_txt_completed"*/, v5);
    sub_1B686D4(&StringLiteral_17537/*"btn_txt_receipt"*/, v6);
    sub_1B686D4(&StringLiteral_17536/*"btn_txt_progress"*/, v7);
    sub_1B686D4(&StringLiteral_8614/*"MISSION_EMPTY_TXT"*/, v8);
    sub_1B686D4(&StringLiteral_17486/*"btn_txt_all"*/, v9);
    byte_4A0B744 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v11 = (ListViewSort_o *)sub_1B68920(ListViewSort_TypeInfo);
  ListViewSort___ctor_40496788(v11, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v11;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v11, v13, v14);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8614/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1B68930(operationSortInfo, v17);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17486/*"btn_txt_all"*/, v18);
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
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8734/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v19 )
        goto LABEL_53;
      UILabel__set_text(v19, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17537/*"btn_txt_receipt"*/, v18);
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
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17536/*"btn_txt_progress"*/, v18);
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
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17504/*"btn_txt_completed"*/, v18);
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
          if ( !byte_4A0B771 )
          {
            sub_1B686D4(&EventRewardSaveData_TypeInfo, v23);
            byte_4A0B771 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v25 = this->fields.filterStatus;
          if ( !byte_4A0B772 )
          {
            sub_1B686D4(&EventRewardSaveData_TypeInfo, v23);
            byte_4A0B772 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v25;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v26 = this->fields.filterStatus;
          if ( !byte_4A0B773 )
          {
            sub_1B686D4(&EventRewardSaveData_TypeInfo, v23);
            byte_4A0B773 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v26;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v27 = this->fields.filterStatus;
          if ( !byte_4A0B774 )
          {
            sub_1B686D4(&EventRewardSaveData_TypeInfo, v23);
            byte_4A0B774 = 1;
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

  if ( (byte_4A0B73E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v6);
    byte_4A0B73E = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4A0B76D )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4A0B76D = 1;
      }
      v7 = 20LL;
      goto LABEL_16;
    case 1:
      if ( !byte_4A0B76E )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4A0B76E = 1;
      }
      v7 = 24LL;
      goto LABEL_16;
    case 2:
      if ( !byte_4A0B76F )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4A0B76F = 1;
      }
      v7 = 28LL;
      goto LABEL_16;
    case 3:
      if ( !byte_4A0B770 )
      {
        sub_1B686D4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4A0B770 = 1;
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
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1B68930(itemList, *(_QWORD *)&targetMissionId);
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

  if ( (byte_4A0B73D & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B686D4(&MasterMissionListViewItem_TypeInfo, v9);
    sub_1B686D4(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, v10);
    byte_4A0B73D = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B68678(
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
                                                                (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B68930(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v14 = 0;
LABEL_17:
  v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
    0LL);
  this->fields.callbackAfterScroll = v16;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterScroll, (int32_t)v16, v17, v18);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v14, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4A0B747 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1B686D4(&StringLiteral_5454/*"END_NOTICE"*/, method);
    byte_4A0B747 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B68930(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5454/*"END_NOTICE"*/, 0LL);
}


void __fastcall MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0B754 & 1) == 0 )
  {
    sub_1B686D4(&MasterMissionListViewManager___c_TypeInfo, v1);
    byte_4A0B754 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)MasterMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A0B755 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4A0B755 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B68930(Instance, v4);
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
    sub_1B68930(this, method);
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

  if ( (byte_4A0B756 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0B756 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL), (callback = this->fields.callback) == 0LL) )
  {
    sub_1B68930(Instance, v4);
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
  if ( (byte_4A0B757 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1B686D4(&MasterMissionListViewItem_TypeInfo, x);
    byte_4A0B757 = 1;
  }
  if ( !x
    || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_1B68930(this, x);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == v4->fields.missionId;
}