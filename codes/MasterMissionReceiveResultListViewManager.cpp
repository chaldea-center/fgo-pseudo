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
  EventMissionEntity_array *EventMissionList_41813268; // x25
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v9; // x22
  __int64 v10; // x2
  int max_length; // w8
  System_String_o *v12; // x23
  unsigned int v13; // w27
  int v14; // w20
  EventMissionEntity_o *v15; // x8
  int v16; // w8
  void *v17; // x24
  int v18; // w29
  GiftEntity_o *v19; // x25
  Il2CppObject *CountableString; // x26
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x27
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  System_String_o *v28; // x27
  __int64 v29; // x26
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct ListViewSort_o *sort; // x8
  Il2CppObject *v39; // [xsp+0h] [xbp-90h]
  EventMissionEntity_array *v40; // [xsp+8h] [xbp-88h]
  unsigned int v41; // [xsp+10h] [xbp-80h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C2A50A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8559/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/);
    byte_4C2A50A = 1;
  }
  nameText = 0;
  entity = 0;
  countText = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_41813268 = EventMissionMaster__getEventMissionList_41813268(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8559/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0);
  if ( !EventMissionList_41813268 )
    goto LABEL_36;
  max_length = EventMissionList_41813268->max_length;
  if ( max_length >= 1 )
  {
    v12 = (System_String_o *)Instance;
    v13 = 0;
    v14 = 0;
    v39 = MasterData_object;
    v40 = EventMissionList_41813268;
    while ( 1 )
    {
      if ( v13 >= max_length )
LABEL_37:
        sub_1C2D6F4(Instance, v6, v10);
      v15 = EventMissionList_41813268->m_Items[v13];
      if ( !v15 )
        break;
      if ( !MasterData_object )
        break;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v15->fields.giftId, 0);
      if ( !Instance )
        break;
      v16 = *((_DWORD *)Instance + 6);
      v17 = Instance;
      if ( v16 >= 1 )
      {
        v18 = 0;
        v41 = v13;
        do
        {
          if ( v18 >= (unsigned int)v16 )
            goto LABEL_37;
          v19 = (GiftEntity_o *)*((_QWORD *)v17 + v18 + 4);
          Instance = ItemType__get_CrossOperatorString(0);
          if ( !v19 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v19, &nameText, &countText, 0);
          Instance = (void *)Gift__IsItem_40205516(v19->fields.type, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                                 &entity,
                                 v19->fields.objectId,
                                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0);
            }
          }
          v24 = (Il2CppObject *)nameText;
          num = v19->fields.num;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v21, v22, v23);
          v26 = System_String__Format_63499224(v12, v24, CountableString, v25, 0);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v28 = v26;
          v29 = sub_1C2D6DC(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_43566844((ListViewItem_o *)v29, v14 + v18, 0);
          *(_QWORD *)(v29 + 120) = v28;
          sub_1C2D434((CGThumbnailListItem_o *)(v29 + 120), (int32_t)v28, v30, v31);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v29,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v29;
            sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), v29, v32, v33);
          }
          v16 = *((_DWORD *)v17 + 6);
          ++v18;
        }
        while ( v18 < v16 );
        MasterData_object = v39;
        EventMissionList_41813268 = v40;
        v13 = v41;
        v14 += v18;
      }
      max_length = EventMissionList_41813268->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_33;
    }
LABEL_36:
    sub_1C2D6EC(Instance, v6);
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

  if ( (byte_4C2A50B & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_1C2D490(&MasterMissionReceiveResultListViewObject_TypeInfo);
    byte_4C2A50B = 1;
  }
  if ( !obj
    || (naturalAligment = MasterMissionReceiveResultListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
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
    sub_1C2D6EC(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}