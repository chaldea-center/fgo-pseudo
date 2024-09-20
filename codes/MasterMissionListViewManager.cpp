void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5DC43 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    byte_4A5DC43 = 1;
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
  __int64 v7; // x21
  GiftEntity_array *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v16; // x23
  System_Collections_Generic_List_object__o *v17; // x24
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  GiftEntity_array *v20; // x20
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5DC39 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__);
    sub_1B885B0(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
    byte_4A5DC39 = 1;
  }
  entity = 0LL;
  v7 = sub_1B887FC(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 16) = callback;
  v12 = v7 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  *(_QWORD *)(v7 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v13, v14);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
    v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v18 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v18 )
          sub_1B88814(Instance, v9);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v19 + 1],
                                         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v16 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v16, HIDWORD(entity[5].klass), 0LL);
          if ( !v17 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v17,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v18) = receiveMissionIds->max_length;
        if ( (__int64)++v19 >= (int)v18 )
          goto LABEL_18;
      }
LABEL_22:
      sub_1B8880C(Instance, v9);
    }
LABEL_18:
    if ( !v17 )
      goto LABEL_22;
    v20 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v17,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v7,
      Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v20, 0, v21, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    if ( !*(_QWORD *)v12 )
      goto LABEL_22;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v12 + 64LL),
      *(_QWORD *)(*(_QWORD *)v12 + 40LL));
    MasterMissionListViewManager__afterReward(this, v22);
  }
}


void __fastcall MasterMissionListViewManager__CheckBulkButton(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bulkButton; // x20
  __int64 v4; // x1
  UIWidget_o *bulkButtonTxt; // x0
  __int64 v6; // x1
  __int64 methodPtr_low; // x11
  struct UICommonButton_o *v8; // x0
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DC36 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC36 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
      || (v13.fields.r = 0.5,
          v13.fields.g = 0.5,
          v13.fields.b = 0.5,
          v13.fields.a = 1.0,
          UIWidget__set_color(bulkButtonTxt, v13, 0LL),
          (bulkButtonTxt = (UIWidget_o *)this->fields.itemSortList) == 0LL) )
    {
LABEL_20:
      sub_1B8880C(bulkButtonTxt, v4);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v12.fields._current )
      {
        methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v12.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MasterMissionListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v12.fields._current[17].klass) == 3 )
        {
          v8 = this->fields.bulkButton;
          if ( !v8 )
            sub_1B8880C(0LL, v6);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
            v8,
            0LL,
            1LL,
            v8->klass->vtable._15_OnPress.methodPtr);
          v10 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v10 )
            sub_1B8880C(0LL, v9);
          v14.fields.r = 1.0;
          v14.fields.g = 1.0;
          v14.fields.b = 1.0;
          v14.fields.a = 1.0;
          UIWidget__set_color(v10, v14, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v14; // x23
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v27; // x8
  void *ObjectList; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x8
  UILabel_o *v32; // x21
  UILabel_o *v33; // x21
  UILabel_o *v34; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v36; // x8
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  int v40; // w22
  System_Collections_Generic_List_object__o *v41; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5DC2D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1B885B0(&StringLiteral_8649/*"MISSION_EMPTY_TXT"*/);
    byte_4A5DC2D = 1;
  }
  memset(&v45, 0, sizeof(v45));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v45.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v14 = (MasterMissionListViewItem_o *)sub_1B887FC(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v14, (EventMissionEntity_o *)current, type, v15);
      if ( !itemList )
        sub_1B8880C(v16, v17);
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B8880C(v16, v17);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v14,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v10, v11);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4A5DC5E )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC5E = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v27 = &StringLiteral_8649/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v27, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A5DC5E )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC5E = 1;
      }
      v31 = 20LL;
      break;
    case 1:
      v34 = this->fields.emptyMessageLabel;
      if ( !byte_4A5DC5F )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC5F = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = &StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v36 = &StringLiteral_8649/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v36, 0LL);
      if ( !v34 )
        goto LABEL_63;
      UILabel__set_text(v34, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A5DC5F )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC5F = 1;
      }
      v31 = 24LL;
      break;
    case 2:
      v32 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v32 )
        goto LABEL_63;
      UILabel__set_text(v32, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A5DC60 )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC60 = 1;
      }
      v31 = 28LL;
      break;
    case 3:
      v33 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v33 )
        goto LABEL_63;
      UILabel__set_text(v33, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4A5DC61 )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC61 = 1;
      }
      v31 = 32LL;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v31);
  MasterMissionListViewManager__setList(this, v30);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v38, v39);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v37);
  if ( !ObjectList )
LABEL_63:
    sub_1B8880C(ObjectList, v29);
  v40 = *((_DWORD *)ObjectList + 6);
  v41 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v40 >= 1 )
  {
    for ( i = 0; i != v40; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v41,
               i,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
    sub_1B8880C(0LL, method);
  return MissionListViewItem__get_MissionId(receiveItem, 0LL);
}


MasterMissionListViewItem_o *__fastcall MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5DC30 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    byte_4A5DC30 = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  unsigned __int64 v7; // x29
  __int64 v8; // x25
  int64_t UserId; // x2
  int32_t missionProgressType; // w23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_object__o *v12; // x27
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 methodPtr_low; // x11
  MissionListViewItem_o *current; // x26
  int32_t v17; // w27
  UnityEngine_Object_o *viewObject; // x27
  __int64 v19; // x1
  struct ListViewObject_o *v20; // x0
  UserEventMissionMaster_o *v21; // [xsp+0h] [xbp-B0h]
  int64_t Time; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A5DC3E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__);
    sub_1B885B0(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
    byte_4A5DC3E = 1;
  }
  entity = 0LL;
  memset(&v25, 0, sizeof(v25));
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    v21 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        v8 = sub_1B887FC(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v8, 0LL);
        if ( v7 >= receiveMissionIds->max_length )
          sub_1B88814(Instance, v5);
        if ( !v8 )
          break;
        v5 = (unsigned int)receiveMissionIds->m_Items[v7 + 1];
        *(_DWORD *)(v8 + 16) = v5;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v5,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( Time > (__int64)Instance->fields.saveNameList && Time <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v21;
          if ( !v21 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v21,
                                        &entity,
                                        UserId,
                                        *(_DWORD *)(v8 + 16),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v12,
              (Il2CppObject *)v8,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0LL);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v24,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v25 = v24;
            while ( 1 )
            {
              v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v25,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v13 & 1) == 0 )
                break;
              if ( v25.fields._current
                && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v25.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (MasterMissionListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v25.fields._current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              v17 = *(_DWORD *)(v8 + 16);
              if ( !byte_4A57FF7 )
              {
                v13 = sub_1B885B0(&EventRewardSaveData_TypeInfo);
                byte_4A57FF7 = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v17;
              if ( !current )
                sub_1B8880C(v13, v14);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v20 = current->fields.viewObject;
                if ( !v20 )
                  sub_1B8880C(0LL, v19);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v20->klass->vtable._5_SetItem.method)(
                  v20,
                  current,
                  v20->klass->vtable._6_SetItem.methodPtr);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v7 >= (int)receiveMissionIds->max_length )
          return;
      }
LABEL_47:
      sub_1B8880C(Instance, v5);
    }
  }
}


void __fastcall MasterMissionListViewManager__OnChangeAlphaAnim(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4A5DC41 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    byte_4A5DC41 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v4);
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

  if ( (byte_4A5DC34 & 1) == 0 )
  {
    sub_1B885B0(&Method_MasterMissionListViewManager_OnClickFilterList__);
    byte_4A5DC34 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_BECDE4[filterStatus];
  MasterMissionListViewManager__setList(this, v5);
}


void __fastcall MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  int32_t listType; // w21
  PlayMakerFSM_o *v9; // x20
  char v10; // w0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x19
  System_String_o *v21; // x20
  MasterMissionListViewManager___c_c *v22; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v24; // x21
  Il2CppObject *v25; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A5DC31 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_MasterMissionListViewManager_OnClickListView__);
    sub_1B885B0(&MasterMissionListViewObject_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1B885B0(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__);
    sub_1B885B0(&MasterMissionListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_5020/*"DIALOG_OUT_OF_TERM"*/);
    sub_1B885B0(&StringLiteral_15566/*"Wait_Action"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DC31 = 1;
  }
  naviAction = 0LL;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15566/*"Wait_Action"*/,
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
  v9 = targetFSM;
  v10 = (*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data);
  if ( listType == 3 )
  {
    if ( (v10 & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v9, v11)
      && !BYTE4(v9[4].fields.fsm) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0LL);
      if ( v9[4].fields.m_CachedPtr == 2
        && ListViewManager__TryGetMissionCondNaviAction(
             (ListViewManager_o *)this,
             (MissionListViewItem_o *)v9,
             &naviAction,
             0LL) )
      {
        targetFSM = (PlayMakerFSM_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v9, 0LL);
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0LL) )
          {
            v14 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v14 = (_QWORD *)sub_1B885C8(Method_MasterMissionListViewManager_OnClickListView__);
            v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
            OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
            ActionExtensions__Call(naviAction, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5020/*"DIALOG_OUT_OF_TERM"*/, 0LL);
          v21 = (System_String_o *)targetFSM;
          v22 = MasterMissionListViewManager___c_TypeInfo;
          if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo);
            v22 = MasterMissionListViewManager___c_TypeInfo;
          }
          _9__27_0 = v22->static_fields->__9__27_0;
          v24 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__27_0 )
          {
            if ( !v22->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v22);
              v22 = MasterMissionListViewManager___c_TypeInfo;
            }
            v25 = (Il2CppObject *)v22->static_fields->__9;
            _9__27_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(_9__27_0, v25, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0LL);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v27, v28);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v24,
              v21,
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
            v29 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v29 = (_QWORD *)sub_1B885C8(Method_MasterMissionListViewManager_OnClickListView__);
            v30 = (System_Reflection_MethodBase_o *)sub_1B88594(v29, v29[4]);
            OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0LL);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
              return;
            }
          }
        }
LABEL_46:
        sub_1B8880C(targetFSM, obj);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0LL);
LABEL_32:
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v9,
        0,
        0LL);
      return;
    }
  }
  else if ( (v10 & 1) != 0
         && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v9, v11)
         && !BYTE4(v9[4].fields.fsm) )
  {
    goto LABEL_32;
  }
  if ( v9[4].fields.m_CachedPtr == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.receiveItem, (int32_t)v9, v12, v13);
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v9, 0LL);
    MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v17);
  }
  else
  {
    v18 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B885C8(Method_MasterMissionListViewManager_OnClickListView__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__OnClickRewardIcon(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  MasterMissionListViewItem_o *Item; // x0
  MasterMissionListViewItem_o *v9; // x20
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_4A5DC32 & 1) == 0 )
  {
    sub_1B885B0(&Method_MasterMissionListViewManager_OnClickRewardIcon__);
    sub_1B885B0(&MasterMissionListViewObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_15566/*"Wait_Action"*/);
    byte_4A5DC32 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15566/*"Wait_Action"*/, 0LL) )
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
    sub_1B8880C(targetFSM, obj);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, (const MethodInfo *)obj);
  if ( Item )
  {
    v9 = Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, void *))Item->klass->vtable._8_get_IsShowRewardInfo.method)(
            Item,
            Item->klass[1]._1.image) & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward(v9, v10)
      && !v9->fields.isHideRewardDetail )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v9,
        0,
        0LL);
      return;
    }
    if ( v9->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.receiveItem, (int32_t)v9, v11, v12);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v9, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v14);
      return;
    }
  }
LABEL_20:
  v15 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B885C8(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
}


void __fastcall MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x27
  __int64 Instance; // x0
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v12; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x25
  int max_length; // w22
  const MethodInfo_3739718 **v15; // x29
  il2cpp_array_size_t v16; // w21
  Il2CppClass **v17; // x26
  Il2CppClass *v18; // x8
  char *v19; // x26
  Il2CppClass *v20; // t1
  int32_t name_high; // w19
  System_Collections_Generic_List_object__o *v22; // x28
  il2cpp_array_size_t v23; // w26
  Il2CppClass **v24; // x27
  Il2CppClass *v25; // x8
  Il2CppObject **v26; // x27
  Il2CppClass *v27; // t1
  int32_t v28; // w19
  ServantEntity_o *v29; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x19
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x19
  System_String_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  const MethodInfo_3739718 **v45; // x20
  Il2CppObject *CountableString; // x19
  System_Text_StringBuilder_o *v47; // x29
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_String_o *v51; // x21
  Il2CppObject *v52; // x0
  System_Text_StringBuilder_o *v53; // x19
  System_String_o *v54; // x1
  __int64 v55; // x8
  System_Collections_Generic_List_object__o *v56; // x0
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  System_Collections_Generic_List_object__o *v60; // x23
  System_Text_StringBuilder_o *v61; // x21
  System_String_o *v62; // x19
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x19
  System_String_o *v66; // x0
  Il2CppObject *v67; // x19
  GiftEntity_array *v68; // x20
  System_String_o *v69; // x21
  MissionRewardGetDialog_ClickDelegate_o *v70; // x22
  __int64 v71; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v72; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v73; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v75; // [xsp+28h] [xbp-98h]
  int v76; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v80; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5DC3A & 1) == 0 )
  {
    sub_1B885B0(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor___76035112);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__);
    sub_1B885B0(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_1B885B0(&StringLiteral_8642/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8646/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1B885B0(&StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_3765/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1B885B0(&StringLiteral_51/*"\n \n "*/);
    sub_1B885B0(&StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1B885B0(&StringLiteral_49/*"\n "*/);
    sub_1B885B0(&StringLiteral_8648/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_4A5DC3A = 1;
  }
  v80 = 0LL;
  entity = 0LL;
  v5 = sub_1B887FC(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_114;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v12 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v12, 0LL);
  v75 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v75, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = (const MethodInfo_3739718 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v16 = 0;
    v76 = 0;
    while ( 1 )
    {
      if ( v16 >= GiftListById->max_length )
LABEL_115:
        sub_1B88814(Instance, v7);
      v17 = &GiftListById->obj.klass + (int)v16;
      v20 = v17[4];
      v19 = (char *)(v17 + 4);
      v18 = v20;
      if ( !v20 )
        goto LABEL_114;
      name_high = HIDWORD(v18->_1.name);
      Instance = Gift__IsServant_37687840(name_high, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_37688232(name_high, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v16 >= GiftListById->max_length )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v19 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v19 + 24LL),
                         (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0LL);
              v76 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v16 )
        goto LABEL_29;
    }
  }
  v76 = 0;
LABEL_29:
  v71 = v5 + 16;
  v72 = (Il2CppObject *)v5;
  collection = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v23 = 0;
    v73 = v12;
    do
    {
      if ( v23 >= GiftListById->max_length )
        goto LABEL_115;
      v24 = &GiftListById->obj.klass + (int)v23;
      v27 = v24[4];
      v26 = (Il2CppObject **)(v24 + 4);
      v25 = v27;
      if ( !v27 )
        goto LABEL_114;
      v28 = HIDWORD(v25->_1.name);
      Instance = Gift__IsServant_37687840(v28, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( v23 >= GiftListById->max_length )
          goto LABEL_115;
        if ( !*v26 )
          goto LABEL_114;
        if ( !v13 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v13,
                              (int32_t)(*v26)[1].monitor,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v29 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
        Instance = SvtType__IsStatusUp(v29->fields.type, 0LL);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_114;
          v31 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v12->klass->vtable._3_ToString.method)(
                                     v12,
                                     v12->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v31, 0LL) )
            System_Text_StringBuilder__Append_60868928(v12, (System_String_o *)StringLiteral_49/*"\n "*/, 0LL);
          Instance = (__int64)ServantEntity__getName(v29, -1, -1, 0LL);
          if ( v23 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !*v26 )
            goto LABEL_114;
          v35 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v26)[1].monitor);
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v32, v33, v34);
          v37 = (Il2CppObject *)System_String__Format_61721404(format, v35, v36, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v12, v38, v37, 0LL);
          if ( v23 >= GiftListById->max_length )
            goto LABEL_115;
          if ( !v22 )
            goto LABEL_114;
          v7 = *v26;
          items = v22->fields._items;
          v42 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v55 = v42[4];
            v56 = v22;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v56,
              v7,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v55 + 192) + 112LL));
            goto LABEL_73;
          }
          v44 = &items->obj.klass + size;
          v22->fields._size = size + 1;
LABEL_52:
          v44[4] = (Il2CppClass *)v7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v7, v39, v40);
        }
      }
      else
      {
        Instance = Gift__IsItem_37687788(v28, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v23 >= GiftListById->max_length )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v26 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v80,
                       (int32_t)(*v26)[1].monitor,
                       (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v15);
            if ( !v80 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v80[1].klass, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !v80 )
                goto LABEL_114;
              v45 = v15;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v80[3].klass, 0LL);
              v47 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v47, 0LL);
              if ( !v80 || !v47 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_60868928(v47, (System_String_o *)v80[1].monitor, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8646/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( v23 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !*v26 )
                goto LABEL_114;
              v51 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v26)[1].monitor);
              v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v48, v49, v50);
              System_Text_StringBuilder__AppendFormat_60875280(v47, v51, CountableString, v52, 0LL);
              if ( v76 >= 2 )
              {
                v53 = v75;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v75 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v75, (System_String_o *)Instance, (Il2CppObject *)v47, 0LL);
                v54 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v47->klass->vtable._3_ToString.method)(
                             v47,
                             v47->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                v53 = v75;
                if ( !v75 )
                  goto LABEL_114;
                v54 = (System_String_o *)Instance;
              }
              v15 = v45;
              Instance = (__int64)System_Text_StringBuilder__Append_60868928(v53, v54, 0LL);
              v12 = v73;
              if ( v23 >= GiftListById->max_length )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v7 = *v26;
              v57 = collection->fields._items;
              v58 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v57 )
                goto LABEL_114;
              v59 = collection->fields._size;
              if ( (unsigned int)v59 >= v57->max_length )
              {
                v55 = v58[4];
                v56 = collection;
                goto LABEL_72;
              }
              v44 = &v57->obj.klass + v59;
              collection->fields._size = v59 + 1;
              goto LABEL_52;
            }
          }
        }
      }
LABEL_73:
      ++v23;
    }
    while ( max_length != v23 );
  }
  v60 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_GiftEntity___ctor___76035112);
  if ( !v60 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v60->fields._size >= 1 )
  {
    v61 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v61, 0LL);
    if ( !v75 )
      goto LABEL_114;
    v62 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v75->klass->vtable._3_ToString.method)(
                               v75,
                               v75->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v62, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_114;
    }
    else
    {
      if ( v76 >= 2 )
      {
        if ( !v62 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_61726036(v62, 0, v62->fields._stringLength - 2, 0LL);
        if ( !v61 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_60868928(v61, (System_String_o *)Instance, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_8642/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = (__int64)System_Text_StringBuilder__Append_60868928(v61, v63, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v61 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v61,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v62,
                              0LL);
      }
      if ( !v12 )
        goto LABEL_114;
      v64 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v12->klass->vtable._3_ToString.method)(
                                 v12,
                                 v12->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v64, 0LL) )
        System_Text_StringBuilder__Append_60868928(v61, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0LL);
    }
    v65 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v12->klass->vtable._3_ToString.method)(
                               v12,
                               v12->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = System_String__IsNullOrEmpty(v65, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !v61 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_60868928(v61, v65, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_60868928(v61, v66, 0LL);
    }
    v67 = SingletonMonoBehaviour_object___get_Instance(*v15);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v60,
                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v61 )
    {
      v68 = (GiftEntity_array *)Instance;
      v69 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v61->klass->vtable._3_ToString.method)(
                                 v61,
                                 v61->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v70 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B887FC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v70,
        v72,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v67 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v67, v68, v69, v70, 0, 0LL);
        return;
      }
    }
LABEL_114:
    sub_1B8880C(Instance, v7);
  }
  if ( !*(_QWORD *)v71 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v71 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v71 + 64LL),
    *(_QWORD *)(*(_QWORD *)v71 + 40LL));
}


System_Collections_Generic_List_MasterMissionListViewItem__o *__fastcall MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *receiveItem; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  _BOOL8 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5DC42 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    byte_4A5DC42 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = (Il2CppObject *)this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
    if ( v5 )
    {
      items = v5->fields._items;
      v20 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
      ++v5->fields._version;
      if ( items )
      {
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            receiveItem,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v22[4] = (Il2CppClass *)receiveItem;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)receiveItem, v8, v9);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
      }
    }
LABEL_26:
    sub_1B8880C(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v10 )
      break;
    current = v25.fields._current;
    if ( v25.fields._current )
    {
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v25.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (MasterMissionListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v25.fields._current[17].klass) == 3 )
      {
        if ( !v5 )
          sub_1B8880C(v10, v25.fields._current);
        v15 = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v5->fields._version;
        if ( !v15 )
          sub_1B8880C(v10, current);
        v17 = v5->fields._size;
        if ( (unsigned int)v17 >= v15->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &v15->obj.klass + v17;
          v5->fields._size = v17 + 1;
          v18[4] = (Il2CppClass *)current;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)current, v11, v12);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
}


void __fastcall MasterMissionListViewManager__RefrashListDisp(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5DC33 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    byte_4A5DC33 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
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
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_1B8880C(ObjectList, v4);
  }
}


void __fastcall MasterMissionListViewManager__SetOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct MasterMissionListViewItem_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5DC3F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_18843/*"ef_mission_extric01"*/);
    sub_1B885B0(&StringLiteral_21503/*"modifyOpenItem"*/);
    byte_4A5DC3F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1B8880C(0LL, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        ObjectList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v17 = v16;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v17,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v17.fields._current;
        if ( !v17.fields._current )
          sub_1B8880C(v5, v6);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v17.fields._current,
                                          v6);
        v10 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1B8880C(0LL, v9);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4A57FF7 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A57FF7 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openTargetItem, (int32_t)v10, v11, v12);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v10, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18843/*"ef_mission_extric01"*/, transform, v15);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21503/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


void __fastcall MasterMissionListViewManager__SetReceiveReward(
        MasterMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4A5DC37 & 1) == 0 )
  {
    sub_1B885B0(&Method_MasterMissionListViewManager_SetReceiveReward__);
    sub_1B885B0(&StringLiteral_8680/*"MISSION_REWARD"*/);
    byte_4A5DC37 = 1;
  }
  v5 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_MasterMissionListViewManager_SetReceiveReward__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.missionToRecieve, (int32_t)missionEntity, v7, v8);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B8880C(0LL, v9);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8680/*"MISSION_REWARD"*/, 0LL);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (int32_t)cmds,
    (int32_t)method);
  this->fields.getCommandCodeList = cmds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
}


void __fastcall MasterMissionListViewManager___modifyOpenItem_b__45_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5DC44 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16646/*"actionAfterCallback"*/);
    byte_4A5DC44 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16646/*"actionAfterCallback"*/,
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
    sub_1B88554(p_actionCallback, 0, v2, v3);
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

  if ( (byte_4A5DC3B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5474/*"END_EFFECT"*/);
    byte_4A5DC3B = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5474/*"END_EFFECT"*/, 0LL);
}


UnityEngine_GameObject_o *__fastcall MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48635516; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4A5DC3D & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&MasterMissionListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC3D = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48635516,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE1 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE6 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1B8880C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v7;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5DC2C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC2C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5DC2B & 1) == 0 )
  {
    sub_1B885B0(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
    byte_4A5DC2B = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_2EFE89C *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v9; // x1
  void *v10; // x0
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5DC40 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC40 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B8880C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current
        || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterMissionListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1B8880C(v4, v5);
      }
      monitor = (UnityEngine_Object_o *)v13.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v10 = current[6].monitor;
        if ( !v10 )
          sub_1B8880C(0LL, v9);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v10 + 392LL))(
          v10,
          current,
          *(_QWORD *)(*(_QWORD *)v10 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v11, 0LL);
}


void __fastcall MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w19
  int64_t Time; // x20
  AutomatedAction_c *klass; // x22
  bool v13; // w3
  int32_t v14; // w1

  if ( (byte_4A5DC3C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4A5DC3C = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v5);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
      v8 = UnityEngine_Random__Range_69419120(0, receiveMissionIds->max_length, 0LL);
      if ( (unsigned int)v8 >= receiveMissionIds->max_length )
        sub_1B88814(v8, v9);
      v10 = receiveMissionIds->m_Items[(int)v8 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (AutomatedAction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
        if ( Instance )
        {
          Instance = (AutomatedAction_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            v10,
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
          if ( Instance )
          {
            if ( Time <= (__int64)Instance->fields.shopActionObject )
            {
              Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( Instance )
                goto LABEL_18;
            }
            else
            {
              klass = Instance[1].klass;
              Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( Instance )
              {
                if ( Time <= (__int64)klass )
                {
                  v13 = 1;
                  v14 = v10;
LABEL_19:
                  AutomatedAction__SetMissionAction(Instance, v14, 5, v13, 0LL);
                  return;
                }
LABEL_18:
                v14 = v10;
                v13 = 0;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
    sub_1B8880C(Instance, v7);
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
    sub_1B8880C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UILabel_o *v12; // x21
  struct ListViewSort_o *v13; // x8
  int v14; // w9
  bool v15; // w2
  const MethodInfo *v16; // x1
  int32_t filterStatus; // w20
  int32_t v18; // w20
  int32_t v19; // w20
  int32_t v20; // w20

  if ( (byte_4A5DC35 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1B885B0(&StringLiteral_17569/*"btn_txt_completed"*/);
    sub_1B885B0(&StringLiteral_17602/*"btn_txt_receipt"*/);
    sub_1B885B0(&StringLiteral_17601/*"btn_txt_progress"*/);
    sub_1B885B0(&StringLiteral_8649/*"MISSION_EMPTY_TXT"*/);
    sub_1B885B0(&StringLiteral_17551/*"btn_txt_all"*/);
    byte_4A5DC35 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759792(v4, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1B8880C(operationSortInfo, v10);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17551/*"btn_txt_all"*/, v11);
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
      v12 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v12 )
        goto LABEL_53;
      UILabel__set_text(v12, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17602/*"btn_txt_receipt"*/, v11);
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
      v13 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v14 = 1;
      goto LABEL_37;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17601/*"btn_txt_progress"*/, v11);
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
      v15 = 0;
      goto LABEL_33;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17569/*"btn_txt_completed"*/, v11);
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
      v15 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v15, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_35:
      v13 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v14 = 13;
LABEL_37:
      v13->fields.sortKind = v14;
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
          if ( !byte_4A5DC62 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A5DC62 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v18 = this->fields.filterStatus;
          if ( !byte_4A5DC63 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A5DC63 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v18;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v19 = this->fields.filterStatus;
          if ( !byte_4A5DC64 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A5DC64 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v19;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v20 = this->fields.filterStatus;
          if ( !byte_4A5DC65 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A5DC65 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v20;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v16);
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
  __int64 v5; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v8; // w22
  int32_t v9; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4A5DC2F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    byte_4A5DC2F = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4A5DC5E )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC5E = 1;
      }
      v5 = 20LL;
      goto LABEL_16;
    case 1:
      if ( !byte_4A5DC5F )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC5F = 1;
      }
      v5 = 24LL;
      goto LABEL_16;
    case 2:
      if ( !byte_4A5DC60 )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC60 = 1;
      }
      v5 = 28LL;
      goto LABEL_16;
    case 3:
      if ( !byte_4A5DC61 )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5DC61 = 1;
      }
      v5 = 32LL;
LABEL_16:
      if ( this->fields.listType != 1
        || *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField + v5) )
      {
        return;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_32;
      size = itemList->fields._size;
      v8 = size - 1;
      if ( size < 1 )
        goto LABEL_33;
      v9 = 0;
      break;
    default:
      return;
  }
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    if ( v8 == v9 )
    {
LABEL_33:
      v9 = 0;
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v9;
    if ( !itemList )
LABEL_32:
      sub_1B8880C(itemList, *(_QWORD *)&targetMissionId);
  }
  ListViewManager__SetTopItem((ListViewManager_o *)this, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__setNextMissionInfo(
        MasterMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  __int64 methodPtr_low; // x10
  System_Action_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5DC2E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__);
    byte_4A5DC2E = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    v10 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( v9 == v10 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
    }
    while ( itemList );
LABEL_15:
    sub_1B8880C(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
    0LL);
  this->fields.callbackAfterScroll = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterScroll, (int32_t)v12, v13, v14);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v10, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4A5DC38 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1B885B0(&StringLiteral_5479/*"END_NOTICE"*/);
    byte_4A5DC38 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5479/*"END_NOTICE"*/, 0LL);
}


void __fastcall MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DC45 & 1) == 0 )
  {
    sub_1B885B0(&MasterMissionListViewManager___c_TypeInfo);
    byte_4A5DC45 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)MasterMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5DC46 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5DC46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v3);
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5DC47 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5DC47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL), (callback = this->fields.callback) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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
  if ( (byte_4A5DC48 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    byte_4A5DC48 = 1;
  }
  if ( !x
    || (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_1B8880C(this, x);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == v4->fields.missionId;
}