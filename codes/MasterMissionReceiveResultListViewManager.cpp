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
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionEntity_array *EventMissionList_26591260; // x20
  WebViewManager_o *v17; // x0
  GiftMaster_o *v18; // x25
  WebViewManager_o *v19; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x22
  void *GiftListById; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  System_String_o *v25; // x23
  unsigned int v26; // w26
  int v27; // w21
  EventMissionEntity_o *v28; // x8
  int v29; // w8
  void *v30; // x24
  int v31; // w20
  GiftEntity_o *v32; // x25
  System_String_o *CrossOperatorString; // x0
  Il2CppObject *CountableString; // x26
  Il2CppObject *v35; // x27
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  System_Int32_array **v39; // x27
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x26
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct ListViewSort_o *sort; // x8
  struct UIScrollView_o *scrollView; // x8
  UIScrollView_o *v53; // x0
  GiftMaster_o *v54; // [xsp+0h] [xbp-80h]
  EventMissionEntity_array *v55; // [xsp+8h] [xbp-78h]
  unsigned int v56; // [xsp+10h] [xbp-70h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FB277 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&MasterMissionReceiveResultListViewItem_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_8619/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, v13);
    byte_40FB277 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  EventMissionList_26591260 = EventMissionMaster__getEventMissionList_26591260(
                                MasterData_WarQuestSelectionMaster,
                                receiveMissionIds,
                                0LL);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_34;
  v18 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v17,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_34;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v19,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  GiftListById = LocalizationManager__Get((System_String_o *)StringLiteral_8619/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_26591260 )
    goto LABEL_34;
  max_length = EventMissionList_26591260->max_length;
  if ( max_length >= 1 )
  {
    v25 = (System_String_o *)GiftListById;
    v26 = 0;
    v27 = 0;
    v54 = v18;
    v55 = EventMissionList_26591260;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
LABEL_35:
        sub_B17100(GiftListById, v22, v23);
        sub_B170A0();
      }
      v28 = EventMissionList_26591260->m_Items[v26];
      if ( !v28 )
        break;
      if ( !v18 )
        break;
      GiftListById = GiftMaster__GetGiftListById(v18, v28->fields.giftId, 0LL);
      if ( !GiftListById )
        break;
      v29 = *((_DWORD *)GiftListById + 6);
      v30 = GiftListById;
      if ( v29 >= 1 )
      {
        v31 = 0;
        v56 = v26;
        do
        {
          if ( v31 >= (unsigned int)v29 )
            goto LABEL_35;
          v32 = (GiftEntity_o *)*((_QWORD *)v30 + v31 + 4);
          CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
          if ( !v32 )
            goto LABEL_34;
          CountableString = (Il2CppObject *)CrossOperatorString;
          GiftEntity__GetInfo(v32, &nameText, &countText, 0LL);
          if ( Gift__IsItem_28854684(v32->fields.type, 0LL) )
          {
            if ( !v20 )
              goto LABEL_34;
            if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v20,
                   &entity,
                   v32->fields.objectId,
                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                goto LABEL_34;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(entity->fields.bannerId, 0LL);
            }
          }
          v35 = (Il2CppObject *)nameText;
          num = v32->fields.num;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v37 = System_String__Format_43744796(v25, v35, CountableString, v36, 0LL);
          itemList = this->fields.itemList;
          v39 = (System_Int32_array **)v37;
          v44 = sub_B170CC(MasterMissionReceiveResultListViewItem_TypeInfo, v40, v41, v42, v43);
          ListViewItem___ctor_30173668((ListViewItem_o *)v44, v27 + v31, 0LL);
          *(_QWORD *)(v44 + 112) = v39;
          sub_B16F98((BattleServantConfConponent_o *)(v44 + 112), v39, v45, v46, v47, v48, v49, v50);
          if ( !itemList )
            goto LABEL_34;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v29 = *((_DWORD *)v30 + 6);
          ++v31;
        }
        while ( v31 < v29 );
        v27 += v31;
        v18 = v54;
        EventMissionList_26591260 = v55;
        v26 = v56;
      }
      max_length = EventMissionList_26591260->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B170D4();
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
  v53 = this->fields.scrollView;
  if ( !v53 )
    goto LABEL_34;
  UIScrollView__ResetPosition(v53, 0LL);
}


void __fastcall MasterMissionReceiveResultListViewManager__SetObjectItem(
        MasterMissionReceiveResultListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_40FB278 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveResultListViewObject_TypeInfo, obj);
    byte_40FB278 = 1;
  }
  if ( !obj
    || (v5 = *(&MasterMissionReceiveResultListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  MasterMissionReceiveResultListViewObject__SetupDisp(
    (MasterMissionReceiveResultListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


float __fastcall MasterMissionReceiveResultListViewManager__get_ListViewHeight(
        MasterMissionReceiveResultListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t ItemSum; // w0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B170D4();
  return seed->fields.arrangementPich.fields.y * (float)ItemSum;
}