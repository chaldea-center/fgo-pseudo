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
  void *Instance; // x0
  __int64 v6; // x1
  EventMissionEntity_array *EventMissionList_40440836; // x25
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
  Il2CppObject *v23; // x27
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  int64_t v27; // x27
  int64_t v28; // x26
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  struct ListViewSort_o *sort; // x8
  Il2CppObject *v46; // [xsp+0h] [xbp-90h]
  EventMissionEntity_array *v47; // [xsp+8h] [xbp-88h]
  unsigned int v48; // [xsp+10h] [xbp-80h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BDF7C9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_8722/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/);
    byte_4BDF7C9 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_40440836 = EventMissionMaster__getEventMissionList_40440836(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8722/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_40440836 )
    goto LABEL_36;
  max_length = EventMissionList_40440836->max_length;
  if ( max_length >= 1 )
  {
    v11 = (System_String_o *)Instance;
    v12 = 0;
    v13 = 0;
    v46 = MasterData_object;
    v47 = EventMissionList_40440836;
    while ( 1 )
    {
      if ( v12 >= max_length )
LABEL_37:
        sub_1C2209C(Instance, v6);
      v14 = EventMissionList_40440836->m_Items[v12];
      if ( !v14 )
        break;
      if ( !MasterData_object )
        break;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v14->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v15 = *((_DWORD *)Instance + 6);
      v16 = Instance;
      if ( v15 >= 1 )
      {
        v17 = 0;
        v48 = v12;
        do
        {
          if ( v17 >= (unsigned int)v15 )
            goto LABEL_37;
          v18 = (GiftEntity_o *)*((_QWORD *)v16 + v17 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v18 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v18, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_38930408(v18->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                                 &entity,
                                 v18->fields.objectId,
                                 (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0LL);
            }
          }
          v23 = (Il2CppObject *)nameText;
          num = v18->fields.num;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v20, v21, v22);
          v25 = System_String__Format_63129916(v11, v23, CountableString, v24, 0LL);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v27 = (int64_t)v25;
          v28 = sub_1C22084(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_41996612((ListViewItem_o *)v28, v13 + v17, 0LL);
          *(_QWORD *)(v28 + 112) = v27;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 112), v27, v29, v30, v31, v32, v33, v34);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v28,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v28;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 4), v28, v35, v36, v37, v38, v39, v40);
          }
          v15 = *((_DWORD *)v16 + 6);
          ++v17;
        }
        while ( v17 < v15 );
        MasterData_object = v46;
        EventMissionList_40440836 = v47;
        v12 = v48;
        v13 += v17;
      }
      max_length = EventMissionList_40440836->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_33;
    }
LABEL_36:
    sub_1C22094(Instance, v6);
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

  if ( (byte_4BDF7CA & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_1C21E38(&MasterMissionReceiveResultListViewObject_TypeInfo);
    byte_4BDF7CA = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MasterMissionReceiveResultListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
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
    sub_1C22094(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}