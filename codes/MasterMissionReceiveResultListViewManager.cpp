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
  EventMissionEntity_array *EventMissionList_25201488; // x20
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x22
  int max_length; // w8
  System_String_o *v19; // x23
  unsigned int v20; // w26
  int v21; // w21
  EventMissionEntity_o *v22; // x8
  int v23; // w8
  void *v24; // x24
  int v25; // w20
  GiftEntity_o *v26; // x25
  Il2CppObject *CountableString; // x26
  Il2CppObject *v28; // x27
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  System_Int32_array **v32; // x27
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x26
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ListViewSort_o *sort; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v44; // x0
  GiftMaster_o *v45; // [xsp+0h] [xbp-80h]
  EventMissionEntity_array *v46; // [xsp+8h] [xbp-78h]
  unsigned int v47; // [xsp+10h] [xbp-70h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4216B22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&MasterMissionReceiveResultListViewItem_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&StringLiteral_8670/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, v13);
    byte_4216B22 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EventMissionList_25201488 = EventMissionMaster__getEventMissionList_25201488(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8670/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_25201488 )
    goto LABEL_34;
  max_length = EventMissionList_25201488->max_length;
  if ( max_length >= 1 )
  {
    v19 = (System_String_o *)Instance;
    v20 = 0;
    v21 = 0;
    v45 = MasterData_WarQuestSelectionMaster;
    v46 = EventMissionList_25201488;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
LABEL_35:
        v44 = sub_B0D9A8(Instance);
        sub_B0D948(v44, 0LL);
      }
      v22 = EventMissionList_25201488->m_Items[v20];
      if ( !v22 )
        break;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v22->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v23 = *((_DWORD *)Instance + 6);
      v24 = Instance;
      if ( v23 >= 1 )
      {
        v25 = 0;
        v47 = v20;
        do
        {
          if ( v25 >= (unsigned int)v23 )
            goto LABEL_35;
          v26 = (GiftEntity_o *)*((_QWORD *)v24 + v25 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v26 )
            goto LABEL_34;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v26, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_26783148(v26->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_34;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 v17,
                                 &entity,
                                 v26->fields.objectId,
                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_34;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(entity->fields.bannerId, 0LL);
            }
          }
          v28 = (Il2CppObject *)nameText;
          num = v26->fields.num;
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v30 = System_String__Format_43850968(v19, v28, CountableString, v29, 0LL);
          itemList = this->fields.itemList;
          v32 = (System_Int32_array **)v30;
          v35 = sub_B0D974(MasterMissionReceiveResultListViewItem_TypeInfo, v33, v34);
          ListViewItem___ctor_23700744((ListViewItem_o *)v35, v21 + v25, 0LL);
          *(_QWORD *)(v35 + 112) = v32;
          sub_B0D840((BattleServantConfConponent_o *)(v35 + 112), v32, v36, v37, v38, v39, v40, v41);
          if ( !itemList )
            goto LABEL_34;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v23 = *((_DWORD *)v24 + 6);
          ++v25;
        }
        while ( v25 < v23 );
        v21 += v25;
        MasterData_WarQuestSelectionMaster = v45;
        EventMissionList_25201488 = v46;
        v20 = v47;
      }
      max_length = EventMissionList_25201488->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B0D97C(Instance);
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

  if ( (byte_4216B23 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_B0D8A4(
                                                            &MasterMissionReceiveResultListViewObject_TypeInfo,
                                                            obj);
    byte_4216B23 = 1;
  }
  if ( !obj
    || (v5 = *(&MasterMissionReceiveResultListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B0D97C(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}