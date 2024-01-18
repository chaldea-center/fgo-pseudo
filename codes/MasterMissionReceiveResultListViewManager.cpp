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
  EventMissionEntity_array *EventMissionList_24990120; // x20
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  int max_length; // w8
  System_String_o *v20; // x23
  unsigned int v21; // w26
  int v22; // w21
  EventMissionEntity_o *v23; // x8
  int v24; // w8
  void *v25; // x24
  int v26; // w20
  GiftEntity_o *v27; // x25
  Il2CppObject *CountableString; // x26
  Il2CppObject *v29; // x27
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  System_Int32_array **v33; // x27
  __int64 v34; // x26
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ListViewSort_o *sort; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v43; // x0
  GiftMaster_o *v44; // [xsp+0h] [xbp-80h]
  EventMissionEntity_array *v45; // [xsp+8h] [xbp-78h]
  unsigned int v46; // [xsp+10h] [xbp-70h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4189CD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&MasterMissionReceiveResultListViewItem_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_8648/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, v13);
    byte_4189CD0 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EventMissionList_24990120 = EventMissionMaster__getEventMissionList_24990120(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_24990120 )
    goto LABEL_34;
  max_length = EventMissionList_24990120->max_length;
  if ( max_length >= 1 )
  {
    v20 = (System_String_o *)Instance;
    v21 = 0;
    v22 = 0;
    v44 = MasterData_WarQuestSelectionMaster;
    v45 = EventMissionList_24990120;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
LABEL_35:
        v43 = sub_B2C460(Instance);
        sub_B2C400(v43, 0LL);
      }
      v23 = EventMissionList_24990120->m_Items[v21];
      if ( !v23 )
        break;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v23->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v24 = *((_DWORD *)Instance + 6);
      v25 = Instance;
      if ( v24 >= 1 )
      {
        v26 = 0;
        v46 = v21;
        do
        {
          if ( v26 >= (unsigned int)v24 )
            goto LABEL_35;
          v27 = (GiftEntity_o *)*((_QWORD *)v25 + v26 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v27 )
            goto LABEL_34;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v27, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_27324028(v27->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_34;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 v18,
                                 &entity,
                                 v27->fields.objectId,
                                 (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_34;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(entity->fields.bannerId, 0LL);
            }
          }
          v29 = (Il2CppObject *)nameText;
          num = v27->fields.num;
          v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v31 = System_String__Format_44306596(v20, v29, CountableString, v30, 0LL);
          itemList = this->fields.itemList;
          v33 = (System_Int32_array **)v31;
          v34 = sub_B2C42C(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_24128628((ListViewItem_o *)v34, v22 + v26, 0LL);
          *(_QWORD *)(v34 + 112) = v33;
          sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 112), v33, v35, v36, v37, v38, v39, v40);
          if ( !itemList )
            goto LABEL_34;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v24 = *((_DWORD *)v25 + 6);
          ++v26;
        }
        while ( v26 < v24 );
        v22 += v26;
        MasterData_WarQuestSelectionMaster = v44;
        EventMissionList_24990120 = v45;
        v21 = v46;
      }
      max_length = EventMissionList_24990120->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B2C434(Instance, v15);
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

  if ( (byte_4189CD1 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_B2C35C(
                                                            &MasterMissionReceiveResultListViewObject_TypeInfo,
                                                            obj);
    byte_4189CD1 = 1;
  }
  if ( !obj
    || (v5 = *(&MasterMissionReceiveResultListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
    sub_B2C434(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}