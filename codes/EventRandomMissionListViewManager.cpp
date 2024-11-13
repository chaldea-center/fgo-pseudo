void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A2FE & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, method, v2);
    byte_4B1A2FE = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventRandomMissionListViewManager__CheckItemListNum(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w8
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  EventMissionMaster_o *v18; // x20
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_c *v20; // x9
  Il2CppObject *v21; // x8
  UserEventRandomMissionEntity_o *klass; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *v24; // x19
  EventMissionEntity_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  EventRandomMissionListViewItem_o *v29; // x20
  const MethodInfo *v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B1A2FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13);
    byte_4B1A2FD = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    size = itemList->fields._size;
    if ( size )
    {
      if ( !(size % 3) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionMaster___);
        if ( this->fields.itemList )
        {
          v18 = (EventMissionMaster_o *)Master_object;
          Master_object = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.itemList,
                            0,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Master_object )
            return;
          methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Master_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
            return;
          v20 = (EventRandomMissionListViewItem_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1];
          v21 = v20 == EventRandomMissionListViewItem_TypeInfo ? Master_object : 0LL;
          if ( v20 != EventRandomMissionListViewItem_TypeInfo )
            return;
          if ( v21 )
          {
            klass = (UserEventRandomMissionEntity_o *)v21[19].klass;
            if ( !klass )
              return;
            if ( v18 )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           v18,
                                           this->fields.currentEventId,
                                           klass->fields.missionId,
                                           0LL);
              v24 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              v25 = TargetEventMissionEntity;
              v29 = (EventRandomMissionListViewItem_o *)sub_1BCAA2C(
                                                          EventRandomMissionListViewItem_TypeInfo,
                                                          v26,
                                                          v27,
                                                          v28);
              EventRandomMissionListViewItem___ctor(v29, klass, v25, 1, v30);
              if ( v24 )
              {
                items = v24->fields._items;
                v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++v24->fields._version;
                if ( items )
                {
                  v39 = v24->fields._size;
                  if ( (unsigned int)v39 >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v24,
                      (Il2CppObject *)v29,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = &items->obj.klass + v39;
                    v24->fields._size = v39 + 1;
                    v40[4] = (Il2CppClass *)v29;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v29, v31, v32, v33, v34, v35, v36);
                  }
                  return;
                }
              }
            }
          }
        }
        sub_1BCAA3C(Master_object, v17);
      }
    }
  }
}


void __fastcall EventRandomMissionListViewManager__CreateList(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  EventRandomMissionListViewManager__CreateList_46677008(this, randomMissionList, eventId, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__CreateList_46677008(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int64_t Instance; // x0
  __int64 v33; // x1
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x22
  __int64 v39; // x1
  Il2CppObject *Entity; // x21
  bool v41; // w9
  signed int max_length; // w8
  EventMissionMaster_o *v43; // x21
  unsigned int v44; // w28
  UserEventRandomMissionEntity_o *v45; // x24
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  EventMissionEntity_o *v48; // x25
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  EventRandomMissionListViewItem_o *v52; // x23
  const MethodInfo *v53; // x4
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
  UnityEngine_Object_o *emptyMessageLabel; // x22
  __int64 v65; // x1
  UILabel_o *v66; // x22
  __int64 v67; // x8
  UserEventRandomMissionEntity_o *v68; // x8
  __int64 v69; // x2
  __int64 v70; // x3
  EventMissionEntity_o *v71; // x22
  System_Collections_Generic_List_object__o *v72; // x21
  UserEventRandomMissionEntity_o *v73; // x23
  EventRandomMissionListViewItem_o *v74; // x20
  const MethodInfo *v75; // x4
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  v7 = isTouchListEnabled;
  key = eventId;
  if ( (byte_4B1A2F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, randomMissionList, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, v14, v15);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_5783/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_21700/*"mission_bg_"*/, v30, v31);
    byte_4B1A2F4 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v7;
  if ( !scrollView )
    goto LABEL_50;
  scrollView->fields.disableDragIfFits = 1;
  bgSprite = this->fields.bgSprite;
  v36 = System_Int32__ToString((int32_t)&key, 0LL);
  v38 = System_String__Concat_62401220((System_String_o *)StringLiteral_21700/*"mission_bg_"*/, v36, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v37);
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v38, 0LL);
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  (*(void (__fastcall **)(int64_t, __int64, _QWORD))(*(_QWORD *)Instance + 952LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 960LL));
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  UIWidget__set_width((UIWidget_o *)Instance, 568, 0LL);
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  UIWidget__set_height((UIWidget_o *)Instance, 368, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_50;
  v41 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v41;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_50;
  max_length = randomMissionList->max_length;
  v43 = (EventMissionMaster_o *)Instance;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( v44 < max_length )
    {
      v45 = randomMissionList->m_Items[v44];
      if ( !v45 )
        goto LABEL_50;
      if ( !v43 )
        goto LABEL_50;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v43, key, v45->fields.missionId, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v48 = TargetEventMissionEntity;
      v52 = (EventRandomMissionListViewItem_o *)sub_1BCAA2C(EventRandomMissionListViewItem_TypeInfo, v49, v50, v51);
      EventRandomMissionListViewItem___ctor(v52, v45, v48, 0, v53);
      if ( !itemList )
        goto LABEL_50;
      items = itemList->fields._items;
      v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_50;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v52,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v52;
        sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)v52, v54, v55, v56, v57, v58, v59);
      }
      max_length = randomMissionList->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_31;
    }
LABEL_51:
    sub_1BCAA44(Instance, v33);
  }
LABEL_31:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v66 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5783/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v66 )
      goto LABEL_50;
    UILabel__set_text(v66, (System_String_o *)Instance, 0LL);
  }
  v33 = (unsigned int)key;
  this->fields.currentEventId = key;
  v67 = *(_QWORD *)&randomMissionList->max_length;
  if ( v67 && (unsigned int)(-1431655765 * v67 + 715827882) <= 0x55555554 )
  {
    if ( !(_DWORD)v67 )
      goto LABEL_51;
    v68 = randomMissionList->m_Items[0];
    if ( v68 && v43 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v43, v33, v68->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_51;
      v71 = (EventMissionEntity_o *)Instance;
      v72 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v73 = randomMissionList->m_Items[0];
      v74 = (EventRandomMissionListViewItem_o *)sub_1BCAA2C(EventRandomMissionListViewItem_TypeInfo, v33, v69, v70);
      EventRandomMissionListViewItem___ctor(v74, v73, v71, 1, v75);
      if ( v72 )
      {
        v82 = v72->fields._items;
        v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v72->fields._version;
        if ( v82 )
        {
          v84 = v72->fields._size;
          if ( (unsigned int)v84 >= v82->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v72,
              (Il2CppObject *)v74,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v85 = &v82->obj.klass + v84;
            v72->fields._size = v84 + 1;
            v85[4] = (Il2CppClass *)v74;
            sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)v74, v76, v77, v78, v79, v80, v81);
          }
          goto LABEL_49;
        }
      }
    }
LABEL_50:
    sub_1BCAA3C(Instance, v33);
  }
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventRandomMissionListViewManager__DestroyList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventRandomMissionListViewItem_o *__fastcall EventRandomMissionListViewManager__GetItem(
        EventRandomMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  EventRandomMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A2F5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1A2F5 = 1;
  }
  result = (EventRandomMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRandomMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventRandomMissionListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall EventRandomMissionListViewManager__OnChangeAlphaAnim(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  int size; // w21
  int32_t v9; // w20

  if ( (byte_4B1A2F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v4, v5);
    byte_4B1A2F7 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                                  this,
                                                                  v7);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v7);
      if ( size == ++v9 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v7);
  }
}


void __fastcall EventRandomMissionListViewManager__OnClickListView(
        EventRandomMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_o *Item; // x0

  v4 = this;
  if ( (byte_4B1A2F6 & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_1BCA7E0(&EventRandomMissionListViewObject_TypeInfo, obj, method);
    byte_4B1A2F6 = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_1BCAA3C(this, obj);
    }
    Item = EventRandomMissionListViewObject__GetItem((EventRandomMissionListViewObject_o *)obj, (const MethodInfo *)obj);
    if ( Item && !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)v4,
        (MissionListViewItem_o *)Item,
        0,
        0LL);
  }
}


void __fastcall EventRandomMissionListViewManager__RefrashListDisp(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v23; // w21
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A2F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v14, v15);
    byte_4B1A2F8 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v18 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v24;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
      break;
    if ( i.fields._current )
    {
      methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventRandomMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1BCAA3C(v19, v20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v18 )
    goto LABEL_17;
  size = v18->fields._size;
  if ( size >= 1 )
  {
    v23 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v18,
                                                                  v23,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v23 >= v18->fields._size )
        return;
    }
LABEL_17:
    sub_1BCAA3C(ObjectList, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_46679504(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
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
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v22; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v24; // x21
  int32_t v25; // w22
  System_Collections_Generic_List_object__o *v26; // x23
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A2F9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&missionId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v15, v16);
    byte_4B1A2F9 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_1BCAA3C(v18, v19);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(this, v22);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v24 = itemList;
  if ( size > 0 )
  {
    v25 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v24,
                                                                v25,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !itemList )
        break;
      v26 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewObject__GetItem(
                                                                (EventRandomMissionListViewObject_o *)itemList,
                                                                *(const MethodInfo **)&missionId);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v26->klass->vtable._9_unknown.method)(
          v26,
          this->fields.isInput,
          v26->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v25 >= v24->fields._size )
        return;
    }
LABEL_21:
    sub_1BCAA3C(itemList, *(_QWORD *)&missionId);
  }
}


void __fastcall EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x19
  System_String_o *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  System_String_o *v37; // x20
  System_String_o *v38; // x0
  _QWORD *v39; // x8
  System_String_o *v40; // x21
  System_Reflection_MethodBase_o *v41; // x0
  Il2CppObject *Instance; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  CommonConfirmDialog_ClickDelegate_o *v46; // x23

  if ( (byte_4B1A2FA & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, item, method);
    sub_1BCA7E0(&Method_EventRandomMissionListViewManager_ShowRejectDialog__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__, v12, v13);
    sub_1BCA7E0(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_5782/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_5781/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v18, v19);
    byte_4B1A2FA = 1;
  }
  v20 = sub_1BCAA2C(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, item, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_11;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = item;
  v29 = v20 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)item, v30, v31, v32, v33, v34, v35);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5782/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5781/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v29 )
    goto LABEL_11;
  v38 = System_String__Format(v21, *(Il2CppObject **)(*(_QWORD *)v29 + 192LL), 0LL);
  v39 = Method_EventRandomMissionListViewManager_ShowRejectDialog__;
  v40 = v38;
  if ( (*((_BYTE *)Method_EventRandomMissionListViewManager_ShowRejectDialog__ + 83) & 2) != 0 )
    v39 = (_QWORD *)sub_1BCA7F8(Method_EventRandomMissionListViewManager_ShowRejectDialog__);
  v41 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v39, v39[4]);
  OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v43, v44, v45);
  CommonConfirmDialog_ClickDelegate___ctor(
    v46,
    (Il2CppObject *)v20,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_1BCAA3C(v21, v22);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v37,
    v40,
    0LL,
    0LL,
    v46,
    0,
    0.0,
    43.0,
    0,
    0,
    0,
    350,
    2,
    1,
    0,
    0,
    0LL);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ClippingObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1A2F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1A2F3 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                 (EventRandomMissionListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v21;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A2F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___, method, v2);
    byte_4B1A2F2 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_2F927DC *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void __fastcall EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x1
  UnityEngine_Vector2_o offset; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+10h] [xbp-30h] BYREF

  v4 = this;
  if ( (byte_4B1A2FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Remove__, result, method);
    this = (EventRandomMissionListViewManager_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v5, v6);
    byte_4B1A2FC = 1;
  }
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &scroll, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.cancelItem,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v7),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, result);
  }
  EventRewardRootComponent__UpdateEventRandomMissionNum((EventRewardRootComponent_o *)this, 0LL);
  ListViewManager__SetScrollView((ListViewManager_o *)v4, scroll, offset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__requestRandomMissionCancel(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4B1A2FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__, *(_QWORD *)&missionId, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1A2FB = 1;
  }
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&missionId,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v15);
  EventMissionRandomCancelRequest__beginRequest((EventMissionRandomCancelRequest_o *)Request_object, missionId, 0LL);
}


void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ShowRejectDialog_b__0(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  struct EventRandomMissionListViewItem_o *item; // x1
  EventRandomMissionListViewManager_o *v15; // x19
  const MethodInfo *v16; // x2

  if ( (byte_4B1A2FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1A2FF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      item = this->fields.item;
      _4__this->fields.cancelItem = item;
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.cancelItem, (int64_t)item, v7, v8, v9, v10, v11, v12);
      Instance = (CommonUI_o *)this->fields.item;
      if ( Instance )
      {
        v15 = this->fields.__4__this;
        Instance = (CommonUI_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)Instance, 0LL);
        if ( v15 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v15, (int32_t)Instance, v16);
          return;
        }
      }
    }
LABEL_10:
    sub_1BCAA3C(Instance, v6);
  }
}