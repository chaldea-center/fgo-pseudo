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
  __int64 v6; // x1
  EventMissionEntity_array *EventMissionList_42094300; // x25
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v9; // x22
  int max_length; // w8
  System_String_o *v11; // x23
  unsigned int v12; // w27
  int v13; // w20
  EventMissionEntity_o *v14; // x8
  int v15; // w8
  void *v16; // x24
  int v17; // w29
  GiftEntity_o *v18; // x25
  Il2CppObject *CountableString; // x26
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x27
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  System_String_o *v30; // x27
  __int64 v31; // x26
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct ListViewSort_o *sort; // x8
  Il2CppObject *v41; // [xsp+0h] [xbp-90h]
  EventMissionEntity_array *v42; // [xsp+8h] [xbp-88h]
  unsigned int v43; // [xsp+10h] [xbp-80h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C59F1F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_8566/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/);
    byte_4C59F1F = 1;
  }
  nameText = 0;
  entity = 0;
  countText = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_42094300 = EventMissionMaster__getEventMissionList_42094300(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8566/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0);
  if ( !EventMissionList_42094300 )
    goto LABEL_36;
  max_length = EventMissionList_42094300->max_length;
  if ( max_length >= 1 )
  {
    v11 = (System_String_o *)Instance;
    v12 = 0;
    v13 = 0;
    v41 = MasterData_object;
    v42 = EventMissionList_42094300;
    while ( 1 )
    {
      if ( v12 >= max_length )
LABEL_37:
        sub_1C3E7C8(Instance, v6);
      v14 = EventMissionList_42094300->m_Items[v12];
      if ( !v14 )
        break;
      if ( !MasterData_object )
        break;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v14->fields.giftId, 0);
      if ( !Instance )
        break;
      v15 = *((_DWORD *)Instance + 6);
      v16 = Instance;
      if ( v15 >= 1 )
      {
        v17 = 0;
        v43 = v12;
        do
        {
          if ( v17 >= (unsigned int)v15 )
            goto LABEL_37;
          v18 = (GiftEntity_o *)*((_QWORD *)v16 + v17 + 4);
          Instance = ItemType__get_CrossOperatorString(0);
          if ( !v18 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v18, &nameText, &countText, 0);
          Instance = (void *)Gift__IsItem_40473368(v18->fields.type, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                                 &entity,
                                 v18->fields.objectId,
                                 (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0);
            }
          }
          v26 = (Il2CppObject *)nameText;
          num = v18->fields.num;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v20, v21, v22, v23, v24, v25);
          v28 = System_String__Format_63677828(v11, v26, CountableString, v27, 0);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v30 = v28;
          v31 = sub_1C3E7B0(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_43860152((ListViewItem_o *)v31, v13 + v17, 0);
          *(_QWORD *)(v31 + 120) = v30;
          sub_1C3E508((CGThumbnailListItem_o *)(v31 + 120), (int32_t)v30, v32, v33);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v31,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v31;
            sub_1C3E508((CGThumbnailListItem_o *)(v39 + 4), v31, v34, v35);
          }
          v15 = *((_DWORD *)v16 + 6);
          ++v17;
        }
        while ( v17 < v15 );
        MasterData_object = v41;
        EventMissionList_42094300 = v42;
        v12 = v43;
        v13 += v17;
      }
      max_length = EventMissionList_42094300->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_33;
    }
LABEL_36:
    sub_1C3E7C0(Instance, v6);
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

  if ( (byte_4C59F20 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_1C3E564(&MasterMissionReceiveResultListViewObject_TypeInfo);
    byte_4C59F20 = 1;
  }
  if ( !obj
    || (naturalAligment = MasterMissionReceiveResultListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
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
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C3E7C0(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}