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
  EventMissionEntity_array *EventMissionList_40513744; // x25
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v18; // x22
  int max_length; // w8
  System_String_o *v20; // x23
  unsigned int v21; // w27
  int v22; // w20
  EventMissionEntity_o *v23; // x8
  int v24; // w8
  void *v25; // x24
  int v26; // w29
  GiftEntity_o *v27; // x25
  Il2CppObject *CountableString; // x26
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x27
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  int64_t v36; // x27
  int64_t v37; // x26
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  struct ListViewSort_o *sort; // x8
  Il2CppObject *v55; // [xsp+0h] [xbp-90h]
  EventMissionEntity_array *v56; // [xsp+8h] [xbp-88h]
  unsigned int v57; // [xsp+10h] [xbp-80h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C00A11 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_1C2E12C(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1C2E12C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1C2E12C(&int_TypeInfo, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&MasterMissionReceiveResultListViewItem_TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C2E12C(&StringLiteral_8713/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, v13);
    byte_4C00A11 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_40513744 = EventMissionMaster__getEventMissionList_40513744(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8713/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_40513744 )
    goto LABEL_36;
  max_length = EventMissionList_40513744->max_length;
  if ( max_length >= 1 )
  {
    v20 = (System_String_o *)Instance;
    v21 = 0;
    v22 = 0;
    v55 = MasterData_object;
    v56 = EventMissionList_40513744;
    while ( 1 )
    {
      if ( v21 >= max_length )
LABEL_37:
        sub_1C2E390(Instance, v15);
      v23 = EventMissionList_40513744->m_Items[v21];
      if ( !v23 )
        break;
      if ( !MasterData_object )
        break;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v23->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v24 = *((_DWORD *)Instance + 6);
      v25 = Instance;
      if ( v24 >= 1 )
      {
        v26 = 0;
        v57 = v21;
        do
        {
          if ( v26 >= (unsigned int)v24 )
            goto LABEL_37;
          v27 = (GiftEntity_o *)*((_QWORD *)v25 + v26 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v27 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v27, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_38999548(v27->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                 &entity,
                                 v27->fields.objectId,
                                 (const MethodInfo_327B1CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0LL);
            }
          }
          v32 = (Il2CppObject *)nameText;
          num = v27->fields.num;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v29, v30, v31);
          v34 = System_String__Format_63250024(v20, v32, CountableString, v33, 0LL);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v36 = (int64_t)v34;
          v37 = sub_1C2E378(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_42081352((ListViewItem_o *)v37, v22 + v26, 0LL);
          *(_QWORD *)(v37 + 112) = v36;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v37 + 112), v36, v38, v39, v40, v41, v42, v43);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v37,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v53[4] = (Il2CppClass *)v37;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v53 + 4), v37, v44, v45, v46, v47, v48, v49);
          }
          v24 = *((_DWORD *)v25 + 6);
          ++v26;
        }
        while ( v26 < v24 );
        MasterData_object = v55;
        EventMissionList_40513744 = v56;
        v21 = v57;
        v22 += v26;
      }
      max_length = EventMissionList_40513744->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_33;
    }
LABEL_36:
    sub_1C2E388(Instance, v15);
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

  if ( (byte_4C00A12 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_1C2E12C(
                                                            &MasterMissionReceiveResultListViewObject_TypeInfo,
                                                            obj);
    byte_4C00A12 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MasterMissionReceiveResultListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_1C2E388(this, obj);
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
    sub_1C2E388(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}