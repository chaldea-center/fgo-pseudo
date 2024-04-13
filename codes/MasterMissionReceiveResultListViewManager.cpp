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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  void *Instance; // x0
  __int64 v34; // x1
  EventMissionEntity_array *EventMissionList_25993904; // x20
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x22
  int max_length; // w8
  System_String_o *v39; // x23
  unsigned int v40; // w26
  int v41; // w21
  EventMissionEntity_o *v42; // x8
  int v43; // w8
  void *v44; // x24
  int v45; // w20
  GiftEntity_o *v46; // x25
  Il2CppObject *CountableString; // x26
  Il2CppObject *v48; // x27
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  System_Int32_array **v52; // x27
  __int64 v53; // x26
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct ListViewSort_o *sort; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v62; // x0
  GiftMaster_o *v63; // [xsp+0h] [xbp-80h]
  EventMissionEntity_array *v64; // [xsp+8h] [xbp-78h]
  unsigned int v65; // [xsp+10h] [xbp-70h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E89F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)receiveMissionIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&MasterMissionReceiveResultListViewItem_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_8735/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, v30, v31, v32);
    byte_42E89F8 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EventMissionList_25993904 = EventMissionMaster__getEventMissionList_25993904(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8735/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_25993904 )
    goto LABEL_34;
  max_length = EventMissionList_25993904->max_length;
  if ( max_length >= 1 )
  {
    v39 = (System_String_o *)Instance;
    v40 = 0;
    v41 = 0;
    v63 = MasterData_WarQuestSelectionMaster;
    v64 = EventMissionList_25993904;
    while ( 1 )
    {
      if ( v40 >= max_length )
      {
LABEL_35:
        v62 = sub_B5D6C8(Instance);
        sub_B5D668(v62, 0LL);
      }
      v42 = EventMissionList_25993904->m_Items[v40];
      if ( !v42 )
        break;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v42->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v43 = *((_DWORD *)Instance + 6);
      v44 = Instance;
      if ( v43 >= 1 )
      {
        v45 = 0;
        v65 = v40;
        do
        {
          if ( v45 >= (unsigned int)v43 )
            goto LABEL_35;
          v46 = (GiftEntity_o *)*((_QWORD *)v44 + v45 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v46 )
            goto LABEL_34;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v46, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_28424904(v46->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_34;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 v37,
                                 &entity,
                                 v46->fields.objectId,
                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_34;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(entity->fields.bannerId, 0LL);
            }
          }
          v48 = (Il2CppObject *)nameText;
          num = v46->fields.num;
          v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v50 = System_String__Format_44578852(v39, v48, CountableString, v49, 0LL);
          itemList = this->fields.itemList;
          v52 = (System_Int32_array **)v50;
          v53 = sub_B5D694(MasterMissionReceiveResultListViewItem_TypeInfo);
          ListViewItem___ctor_23901828((ListViewItem_o *)v53, v41 + v45, 0LL);
          *(_QWORD *)(v53 + 112) = v52;
          sub_B5D560((BattleServantConfConponent_o *)(v53 + 112), v52, v54, v55, v56, v57, v58, v59);
          if ( !itemList )
            goto LABEL_34;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v43 = *((_DWORD *)v44 + 6);
          ++v45;
        }
        while ( v45 < v43 );
        v41 += v45;
        MasterData_WarQuestSelectionMaster = v63;
        EventMissionList_25993904 = v64;
        v40 = v65;
      }
      max_length = EventMissionList_25993904->max_length;
      if ( (int)++v40 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B5D69C(Instance, v34);
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

  if ( (byte_42E89F9 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_B5D5C4(
                                                            &MasterMissionReceiveResultListViewObject_TypeInfo,
                                                            (_DWORD)obj,
                                                            (_DWORD)item,
                                                            method);
    byte_42E89F9 = 1;
  }
  if ( !obj
    || (v5 = *(&MasterMissionReceiveResultListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
    sub_B5D69C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}