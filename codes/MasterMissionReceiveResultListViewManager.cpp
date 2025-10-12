void MasterMissionReceiveResultListViewManager___ctor(
        MasterMissionReceiveResultListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MasterMissionReceiveResultListViewManager__CreateList(
        MasterMissionReceiveResultListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  void *Instance; // x0
  EventMissionEntity_array *EventMissionList_41942948; // x25
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v8; // x22
  int max_length; // w8
  System_String_o *v10; // x23
  unsigned int v11; // w27
  int v12; // w20
  EventMissionEntity_o *v13; // x8
  int v14; // w8
  void *v15; // x24
  int v16; // w29
  GiftEntity_o *v17; // x25
  Il2CppObject *CountableString; // x26
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x27
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  System_String_o *v29; // x27
  __int64 v30; // x26
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct ListViewSort_o *sort; // x8
  Il2CppObject *v40; // [xsp+0h] [xbp-90h]
  EventMissionEntity_array *v41; // [xsp+8h] [xbp-88h]
  unsigned int v42; // [xsp+10h] [xbp-80h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3ABF7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_8565/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/);
    byte_4C3ABF7 = 1;
  }
  nameText = 0;
  entity = 0;
  countText = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_41942948 = EventMissionMaster__getEventMissionList_41942948(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8565/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0);
  if ( !EventMissionList_41942948 )
    goto LABEL_36;
  max_length = EventMissionList_41942948->max_length;
  if ( max_length >= 1 )
  {
    v10 = (System_String_o *)Instance;
    v11 = 0;
    v12 = 0;
    v40 = MasterData_object;
    v41 = EventMissionList_41942948;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_37:
        sub_1C32E84(Instance);
      v13 = EventMissionList_41942948->m_Items[v11];
      if ( !v13 )
        break;
      if ( !MasterData_object )
        break;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v13->fields.giftId, 0);
      if ( !Instance )
        break;
      v14 = *((_DWORD *)Instance + 6);
      v15 = Instance;
      if ( v14 >= 1 )
      {
        v16 = 0;
        v42 = v11;
        do
        {
          if ( v16 >= (unsigned int)v14 )
            goto LABEL_37;
          v17 = (GiftEntity_o *)*((_QWORD *)v15 + v16 + 4);
          Instance = ItemType__get_CrossOperatorString(0);
          if ( !v17 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v17, &nameText, &countText, 0);
          Instance = (void *)Gift__IsItem_40327744(v17->fields.type, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                                 &entity,
                                 v17->fields.objectId,
                                 (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0);
            }
          }
          v25 = (Il2CppObject *)nameText;
          num = v17->fields.num;
          v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v19, v20, v21, v22, v23, v24);
          v27 = System_String__Format_63559904(v10, v25, CountableString, v26, 0);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v29 = v27;
          v30 = sub_1C32E6C(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_43702564((ListViewItem_o *)v30, v12 + v16, 0);
          *(_QWORD *)(v30 + 120) = v29;
          sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 120), (int32_t)v29, v31, v32);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v30,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v30;
            sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 4), v30, v33, v34);
          }
          v14 = *((_DWORD *)v15 + 6);
          ++v16;
        }
        while ( v16 < v14 );
        MasterData_object = v40;
        EventMissionList_41942948 = v41;
        v11 = v42;
        v12 += v16;
      }
      max_length = EventMissionList_41942948->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_33;
    }
LABEL_36:
    sub_1C32E7C(Instance);
  }
LABEL_33:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_36;
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = this->fields.scrollView;
  if ( !Instance )
    goto LABEL_36;
  *((_DWORD *)Instance + 21) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
}


void MasterMissionReceiveResultListViewManager__SetObjectItem(
        MasterMissionReceiveResultListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C3ABF8 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_1C32C20(&MasterMissionReceiveResultListViewObject_TypeInfo);
    byte_4C3ABF8 = 1;
  }
  if ( !obj
    || (naturalAligment = MasterMissionReceiveResultListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  MasterMissionReceiveResultListViewObject__SetupDisp(
    (MasterMissionReceiveResultListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


float MasterMissionReceiveResultListViewManager__get_ListViewHeight(
        MasterMissionReceiveResultListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C32E7C(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}