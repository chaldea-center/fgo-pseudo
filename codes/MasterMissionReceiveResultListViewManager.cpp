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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  void *Instance; // x0
  __int64 v24; // x1
  EventMissionEntity_array *EventMissionList_39909124; // x25
  Il2CppObject *MasterData_object; // x26
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  int max_length; // w8
  System_String_o *v30; // x23
  unsigned int v31; // w27
  int v32; // w20
  EventMissionEntity_o *v33; // x8
  int v34; // w8
  void *v35; // x24
  int v36; // w29
  GiftEntity_o *v37; // x25
  Il2CppObject *CountableString; // x26
  Il2CppObject *v39; // x27
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  System_Collections_Generic_List_object__o *itemList; // x25
  int64_t v43; // x27
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  int64_t v47; // x26
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  struct ListViewSort_o *sort; // x8
  Il2CppObject *v65; // [xsp+0h] [xbp-90h]
  EventMissionEntity_array *v66; // [xsp+8h] [xbp-88h]
  unsigned int v67; // [xsp+10h] [xbp-80h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B19371 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&MasterMissionReceiveResultListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_8664/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, v21, v22);
    byte_4B19371 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_36;
  EventMissionList_39909124 = EventMissionMaster__getEventMissionList_39909124(
                                (EventMissionMaster_o *)Instance,
                                receiveMissionIds,
                                0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8664/*"MASTER_MISSION_RECEIVE_RESULT_REWARD_FMT"*/, 0LL);
  if ( !EventMissionList_39909124 )
    goto LABEL_36;
  max_length = EventMissionList_39909124->max_length;
  if ( max_length >= 1 )
  {
    v30 = (System_String_o *)Instance;
    v31 = 0;
    v32 = 0;
    v65 = MasterData_object;
    v66 = EventMissionList_39909124;
    while ( 1 )
    {
      if ( v31 >= max_length )
LABEL_37:
        sub_1BCAA44(Instance, v24);
      v33 = EventMissionList_39909124->m_Items[v31];
      if ( !v33 )
        break;
      if ( !MasterData_object )
        break;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v33->fields.giftId, 0LL);
      if ( !Instance )
        break;
      v34 = *((_DWORD *)Instance + 6);
      v35 = Instance;
      if ( v34 >= 1 )
      {
        v36 = 0;
        v67 = v31;
        do
        {
          if ( v36 >= (unsigned int)v34 )
            goto LABEL_37;
          v37 = (GiftEntity_o *)*((_QWORD *)v35 + v36 + 4);
          Instance = ItemType__get_CrossOperatorString(0LL);
          if ( !v37 )
            goto LABEL_36;
          CountableString = (Il2CppObject *)Instance;
          GiftEntity__GetInfo(v37, &nameText, &countText, 0LL);
          Instance = (void *)Gift__IsItem_38401476(v37->fields.type, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v28 )
              goto LABEL_36;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                                 &entity,
                                 v37->fields.objectId,
                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_36;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)entity[3].klass, 0LL);
            }
          }
          v39 = (Il2CppObject *)nameText;
          num = v37->fields.num;
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v41 = System_String__Format_62415660(v30, v39, CountableString, v40, 0LL);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v43 = (int64_t)v41;
          v47 = sub_1BCAA2C(MasterMissionReceiveResultListViewItem_TypeInfo, v44, v45, v46);
          ListViewItem___ctor_41447164((ListViewItem_o *)v47, v32 + v36, 0LL);
          *(_QWORD *)(v47 + 112) = v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 112), v43, v48, v49, v50, v51, v52, v53);
          if ( !itemList )
            goto LABEL_36;
          items = itemList->fields._items;
          v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            goto LABEL_36;
          size = itemList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v47,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v63[4] = (Il2CppClass *)v47;
            sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 4), v47, v54, v55, v56, v57, v58, v59);
          }
          v34 = *((_DWORD *)v35 + 6);
          ++v36;
        }
        while ( v36 < v34 );
        MasterData_object = v65;
        EventMissionList_39909124 = v66;
        v31 = v67;
        v32 += v36;
      }
      max_length = EventMissionList_39909124->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_33;
    }
LABEL_36:
    sub_1BCAA3C(Instance, v24);
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

  if ( (byte_4B19372 & 1) == 0 )
  {
    this = (MasterMissionReceiveResultListViewManager_o *)sub_1BCA7E0(
                                                            &MasterMissionReceiveResultListViewObject_TypeInfo,
                                                            obj,
                                                            item);
    byte_4B19372 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MasterMissionReceiveResultListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterMissionReceiveResultListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterMissionReceiveResultListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
    sub_1BCAA3C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}