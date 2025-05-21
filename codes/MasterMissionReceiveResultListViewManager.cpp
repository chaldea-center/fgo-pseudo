void __fastcall MasterMissionReceiveResultListViewManager___ctor(
        MasterMissionReceiveResultListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveResultListViewManager__CreateList(
        MasterMissionReceiveResultListViewManager_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  void *Instance; // x0
  __int64 v15; // x1
  EventMissionEntity_array *EventMissionList_41016712; // x25
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v18; // x22
  __int64 v19; // x2
  int max_length; // w8
  System_String_o *v21; // x23
  unsigned int v22; // w27
  int v23; // w20
  EventMissionEntity_o *v24; // x8
  int v25; // w8
  void *v26; // x24
  int v27; // w29
  GiftEntity_o *v28; // x25
  Il2CppObject *CountableString; // x26
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x27
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  System_String_o *v37; // x27
  __int64 v38; // x26
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  struct ListViewSort_o *sort; // x8
  Il2CppObject *v48; // [xsp+0h] [xbp-90h]
  EventMissionEntity_array *v49; // [xsp+8h] [xbp-88h]
  unsigned int v50; // [xsp+10h] [xbp-80h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B47D4E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&int_TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&MasterMissionReceiveResultListViewItem_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_8558/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, v13);
    byte_4B47D4E = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_41016712 = EventMissionMaster__getEventMissionList_41016712(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8558/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_41016712 )
    goto LABEL_36;
  max_length = EventMissionList_41016712->max_length;
  if ( max_length >= 1 )
  {
    v21 = (System_String_o *)Instance;
    v22 = 0;
    v23 = 0;
    v48 = MasterData_object;
    v49 = EventMissionList_41016712;
    while ( 1 )
    {
      if ( v22 >= max_length )
LABEL_37:
        sub_1BDBADC(Instance, v15, v19);
      v24 = EventMissionList_41016712->m_Items[v22];
      if ( !v24 )
        break;
      if ( !MasterData_object )
        break;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v24->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v25 = *((_DWORD *)Instance + 6);
      v26 = Instance;
      if ( v25 >= 1 )
      {
        v27 = 0;
        v50 = v22;
        do
        {
          if ( v27 >= (unsigned int)v25 )
            goto LABEL_37;
          v28 = (GiftEntity_o *)*((_QWORD *)v26 + v27 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v28 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v28, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_39448816(v28->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                 &entity,
                                 v28->fields.objectId,
                                 (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0LL);
            }
          }
          v33 = (Il2CppObject *)nameText;
          num = v28->fields.num;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v30, v31, v32);
          v35 = System_String__Format_62613620(v21, v33, CountableString, v34, 0LL);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v37 = v35;
          v38 = sub_1BDBAC4(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_42734232((ListViewItem_o *)v38, v23 + v27, 0LL);
          *(_QWORD *)(v38 + 112) = v37;
          sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 112), (int32_t)v37, v39, v40);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v38,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v38;
            sub_1BDB81C((CGThumbnailListItem_o *)(v46 + 4), v38, v41, v42);
          }
          v25 = *((_DWORD *)v26 + 6);
          ++v27;
        }
        while ( v27 < v25 );
        MasterData_object = v48;
        EventMissionList_41016712 = v49;
        v22 = v50;
        v23 += v27;
      }
      max_length = EventMissionList_41016712->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_33;
    }
LABEL_36:
    sub_1BDBAD4(Instance, v15);
  }
LABEL_33:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_36;
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = this->fields.scrollView;
  if ( !Instance )
    goto LABEL_36;
  *((_DWORD *)Instance + 21) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL);
}


void __fastcall MasterMissionReceiveResultListViewManager__SetObjectItem(
        MasterMissionReceiveResultListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B47D4F & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_1BDB878(
                                                            &MasterMissionReceiveResultListViewObject_TypeInfo,
                                                            obj);
    byte_4B47D4F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MasterMissionReceiveResultListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  MasterMissionReceiveResultListViewObject__SetupDisp(
    (MasterMissionReceiveResultListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


float __fastcall MasterMissionReceiveResultListViewManager__get_ListViewHeight(
        MasterMissionReceiveResultListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_1BDBAD4(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}