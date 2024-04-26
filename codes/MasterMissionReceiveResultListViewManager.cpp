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
  EventMissionEntity_array *EventMissionList_25393336; // x20
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x22
  int max_length; // w8
  System_String_o *v11; // x23
  unsigned int v12; // w26
  int v13; // w21
  EventMissionEntity_o *v14; // x8
  int v15; // w8
  void *v16; // x24
  int v17; // w20
  GiftEntity_o *v18; // x25
  Il2CppObject *CountableString; // x26
  __int64 v20; // x2
  Il2CppObject *v21; // x27
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  System_Int32_array **v25; // x27
  __int64 v26; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct ListViewSort_o *sort; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v35; // x0
  GiftMaster_o *v36; // [xsp+0h] [xbp-80h]
  EventMissionEntity_array *v37; // [xsp+8h] [xbp-78h]
  unsigned int v38; // [xsp+10h] [xbp-70h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_43522E9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8750/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/);
    byte_43522E9 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EventMissionList_25393336 = EventMissionMaster__getEventMissionList_25393336(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8750/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_25393336 )
    goto LABEL_34;
  max_length = EventMissionList_25393336->max_length;
  if ( max_length >= 1 )
  {
    v11 = (System_String_o *)Instance;
    v12 = 0;
    v13 = 0;
    v36 = MasterData_WarQuestSelectionMaster;
    v37 = EventMissionList_25393336;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
LABEL_35:
        v35 = sub_B70798(Instance);
        sub_B70738(v35, 0LL);
      }
      v14 = EventMissionList_25393336->m_Items[v12];
      if ( !v14 )
        break;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v14->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v15 = *((_DWORD *)Instance + 6);
      v16 = Instance;
      if ( v15 >= 1 )
      {
        v17 = 0;
        v38 = v12;
        do
        {
          if ( v17 >= (unsigned int)v15 )
            goto LABEL_35;
          v18 = (GiftEntity_o *)*((_QWORD *)v16 + v17 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v18 )
            goto LABEL_34;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v18, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_27751740(v18->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_34;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 v9,
                                 &entity,
                                 v18->fields.objectId,
                                 (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_34;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(entity->fields.bannerId, 0LL);
            }
          }
          v21 = (Il2CppObject *)nameText;
          num = v18->fields.num;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v20);
          v23 = System_String__Format_44759232(v11, v21, CountableString, v22, 0LL);
          itemList = this->fields.itemList;
          v25 = (System_Int32_array **)v23;
          v26 = sub_B70764(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_23967088((ListViewItem_o *)v26, v13 + v17, 0LL);
          *(_QWORD *)(v26 + 112) = v25;
          sub_B70630((BattleServantConfConponent_o *)(v26 + 112), v25, v27, v28, v29, v30, v31, v32);
          if ( !itemList )
            goto LABEL_34;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v15 = *((_DWORD *)v16 + 6);
          ++v17;
        }
        while ( v17 < v15 );
        v13 += v17;
        MasterData_WarQuestSelectionMaster = v36;
        EventMissionList_25393336 = v37;
        v12 = v38;
      }
      max_length = EventMissionList_25393336->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B7076C(Instance, v6);
  }
LABEL_30:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_34;
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_34;
  HIDWORD(scrollView->fields.onDragStarted) = 1;
  Instance = this->fields.scrollView;
  if ( !Instance )
    goto LABEL_34;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL);
}


void __fastcall MasterMissionReceiveResultListViewManager__SetObjectItem(
        MasterMissionReceiveResultListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_43522EA & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_B70694(&MasterMissionReceiveResultListViewObject_TypeInfo);
    byte_43522EA = 1;
  }
  if ( !obj
    || (v5 = *(&MasterMissionReceiveResultListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
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
    sub_B7076C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}