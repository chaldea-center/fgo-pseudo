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
  EventMissionEntity_array *EventMissionList_49055864; // x20
  Il2CppObject *MasterData_object; // x24
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  unsigned __int64 max_length_low; // x8
  System_String_o *v12; // x23
  unsigned __int64 v13; // x9
  int v14; // w28
  EventMissionEntity_o *v15; // x8
  int v16; // w8
  void *v17; // x24
  int i; // w20
  GiftEntity_o *v19; // x25
  Il2CppObject *CountableString; // x26
  int32_t num; // w8
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  System_String_o *v26; // x27
  __int64 v27; // x26
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  struct ListViewSort_o *sort; // x8
  EventMissionEntity_array *v45; // [xsp+8h] [xbp-98h]
  Il2CppObject *v46; // [xsp+10h] [xbp-90h]
  unsigned __int64 v47; // [xsp+18h] [xbp-88h]
  int32_t v48; // [xsp+24h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5974391 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_8929/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/);
    byte_5974391 = 1;
  }
  nameText = 0;
  entity = 0;
  countText = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_49055864 = EventMissionMaster__getEventMissionList_49055864(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v45 = EventMissionList_49055864;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8929/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0);
  if ( !EventMissionList_49055864 )
    goto LABEL_36;
  max_length_low = LODWORD(EventMissionList_49055864->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v12 = (System_String_o *)Instance;
    v13 = 0;
    v14 = 0;
    v46 = MasterData_object;
    while ( 1 )
    {
      if ( v13 >= max_length_low )
LABEL_37:
        sub_2213CE4(Instance);
      v47 = v13;
      v15 = EventMissionList_49055864->m_Items[v13];
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
        for ( i = 0; i < v16; ++i )
        {
          if ( i >= (unsigned int)v16 )
            goto LABEL_37;
          v19 = (GiftEntity_o *)*((_QWORD *)v17 + i + 4);
          Instance = ItemType__get_CrossOperatorString(0);
          if ( !v19 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v19, &nameText, &countText, 0);
          Instance = (void *)Gift__IsItem_47387928(v19->fields.type, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
                                 &entity,
                                 v19->fields.objectId,
                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0);
            }
          }
          num = v19->fields.num;
          v22 = (Il2CppObject *)nameText;
          v48 = num;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v48);
          v24 = System_String__Format_75697948(v12, v22, CountableString, v23, 0);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v26 = v24;
          v27 = sub_2213CCC(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_50819428((ListViewItem_o *)v27, v14 + i, 0);
          *(_QWORD *)(v27 + 120) = v26;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 120), (int32_t)v26, v28, v29, v30, v31, v32, v33);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v27,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v27;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), v27, v34, v35, v36, v37, v38, v39);
          }
          v16 = *((_DWORD *)v17 + 6);
        }
        v14 += i;
        EventMissionList_49055864 = v45;
      }
      MasterData_object = v46;
      max_length_low = LODWORD(EventMissionList_49055864->max_length);
      v13 = v47 + 1;
      if ( (int)v47 + 1 >= (int)max_length_low )
        goto LABEL_33;
    }
LABEL_36:
    sub_2213CDC(Instance, v6);
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

  if ( (byte_5974392 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_2213A60(&MasterMissionReceiveResultListViewObject_TypeInfo);
    byte_5974392 = 1;
  }
  if ( !obj
    || (naturalAligment = MasterMissionReceiveResultListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_2213CDC(this, obj);
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
    sub_2213CDC(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}