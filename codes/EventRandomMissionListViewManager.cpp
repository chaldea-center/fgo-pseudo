void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BCBC96 & 1) == 0 )
  {
    sub_1C1ABD4(&MissionListViewManager_TypeInfo, method);
    byte_4BCBC96 = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventRandomMissionListViewManager__CheckItemListNum(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w8
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  EventMissionMaster_o *v12; // x20
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_c *v14; // x9
  Il2CppObject *v15; // x8
  UserEventRandomMissionEntity_o *klass; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *v18; // x19
  EventMissionEntity_o *v19; // x22
  EventRandomMissionListViewItem_o *v20; // x20
  const MethodInfo *v21; // x4
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4BCBC95 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMissionMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&EventRandomMissionListViewItem_TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    byte_4BCBC95 = 1;
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMissionMaster___);
        if ( this->fields.itemList )
        {
          v12 = (EventMissionMaster_o *)Master_object;
          Master_object = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.itemList,
                            0,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Master_object )
            return;
          methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Master_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
            return;
          v14 = (EventRandomMissionListViewItem_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1];
          v15 = v14 == EventRandomMissionListViewItem_TypeInfo ? Master_object : 0LL;
          if ( v14 != EventRandomMissionListViewItem_TypeInfo )
            return;
          if ( v15 )
          {
            klass = (UserEventRandomMissionEntity_o *)v15[19].klass;
            if ( !klass )
              return;
            if ( v12 )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           v12,
                                           this->fields.currentEventId,
                                           klass->fields.missionId,
                                           0LL);
              v18 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              v19 = TargetEventMissionEntity;
              v20 = (EventRandomMissionListViewItem_o *)sub_1C1AE20(EventRandomMissionListViewItem_TypeInfo);
              EventRandomMissionListViewItem___ctor(v20, klass, v19, 1, v21);
              if ( v18 )
              {
                items = v18->fields._items;
                v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++v18->fields._version;
                if ( items )
                {
                  v30 = v18->fields._size;
                  if ( (unsigned int)v30 >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v18,
                      (Il2CppObject *)v20,
                      *(const MethodInfo_363C890 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v31 = &items->obj.klass + v30;
                    v18->fields._size = v30 + 1;
                    v31[4] = (Il2CppClass *)v20;
                    sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v20, v22, v23, v24, v25, v26, v27);
                  }
                  return;
                }
              }
            }
          }
        }
        sub_1C1AE30(Master_object, v11);
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

  EventRandomMissionListViewManager__CreateList_47220736(this, randomMissionList, eventId, 1, v4);
}


void __fastcall EventRandomMissionListViewManager__CreateList_47220736(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int64_t Instance; // x0
  __int64 v21; // x1
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x22
  Il2CppObject *Entity; // x21
  bool v27; // w9
  signed int max_length; // w8
  EventMissionMaster_o *v29; // x21
  unsigned int v30; // w28
  UserEventRandomMissionEntity_o *v31; // x24
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  EventMissionEntity_o *v34; // x25
  EventRandomMissionListViewItem_o *v35; // x23
  const MethodInfo *v36; // x4
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v48; // x22
  __int64 v49; // x8
  UserEventRandomMissionEntity_o *v50; // x8
  EventMissionEntity_o *v51; // x22
  System_Collections_Generic_List_object__o *v52; // x21
  UserEventRandomMissionEntity_o *v53; // x23
  EventRandomMissionListViewItem_o *v54; // x20
  const MethodInfo *v55; // x4
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  v7 = isTouchListEnabled;
  key = eventId;
  if ( (byte_4BCBC8C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, randomMissionList);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMissionMaster___, v8);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1C1ABD4(&EventRandomMissionListViewItem_TypeInfo, v11);
    sub_1C1ABD4(&EventRewardRootComponent_TypeInfo, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v14);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v15);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C1ABD4(&StringLiteral_5816/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, v18);
    sub_1C1ABD4(&StringLiteral_21836/*"mission_bg_"*/, v19);
    byte_4BCBC8C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v7;
  if ( !scrollView )
    goto LABEL_50;
  scrollView->fields.disableDragIfFits = 1;
  bgSprite = this->fields.bgSprite;
  v24 = System_Int32__ToString((int32_t)&key, 0LL);
  v25 = System_String__Concat_63040368((System_String_o *)StringLiteral_21836/*"mission_bg_"*/, v24, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v25, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_50;
  v27 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v27;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_50;
  max_length = randomMissionList->max_length;
  v29 = (EventMissionMaster_o *)Instance;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( v30 < max_length )
    {
      v31 = randomMissionList->m_Items[v30];
      if ( !v31 )
        goto LABEL_50;
      if ( !v29 )
        goto LABEL_50;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v29, key, v31->fields.missionId, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v34 = TargetEventMissionEntity;
      v35 = (EventRandomMissionListViewItem_o *)sub_1C1AE20(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v35, v31, v34, 0, v36);
      if ( !itemList )
        goto LABEL_50;
      items = itemList->fields._items;
      v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_50;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v35,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v35;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v35, v37, v38, v39, v40, v41, v42);
      }
      max_length = randomMissionList->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_31;
    }
LABEL_51:
    sub_1C1AE38(Instance, v21);
  }
LABEL_31:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v48 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5816/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v48 )
      goto LABEL_50;
    UILabel__set_text(v48, (System_String_o *)Instance, 0LL);
  }
  v21 = (unsigned int)key;
  this->fields.currentEventId = key;
  v49 = *(_QWORD *)&randomMissionList->max_length;
  if ( v49 && (unsigned int)(-1431655765 * v49 + 715827882) <= 0x55555554 )
  {
    if ( !(_DWORD)v49 )
      goto LABEL_51;
    v50 = randomMissionList->m_Items[0];
    if ( v50 && v29 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v29, v21, v50->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_51;
      v51 = (EventMissionEntity_o *)Instance;
      v52 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v53 = randomMissionList->m_Items[0];
      v54 = (EventRandomMissionListViewItem_o *)sub_1C1AE20(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v54, v53, v51, 1, v55);
      if ( v52 )
      {
        v62 = v52->fields._items;
        v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v52->fields._version;
        if ( v62 )
        {
          v64 = v52->fields._size;
          if ( (unsigned int)v64 >= v62->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v52,
              (Il2CppObject *)v54,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v52->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)v54;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)v54, v56, v57, v58, v59, v60, v61);
          }
          goto LABEL_49;
        }
      }
    }
LABEL_50:
    sub_1C1AE30(Instance, v21);
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
  EventRandomMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BCBC8D & 1) == 0 )
  {
    sub_1C1ABD4(&EventRandomMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4BCBC8D = 1;
  }
  result = (EventRandomMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRandomMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  int32_t v7; // w20

  if ( (byte_4BCBC8F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v3);
    byte_4BCBC8F = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                                  this,
                                                                  v5);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1C1AE30(ObjectList, v5);
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
  if ( (byte_4BCBC8E & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_1C1ABD4(&EventRandomMissionListViewObject_TypeInfo, obj);
    byte_4BCBC8E = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_1C1AE30(this, obj);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v16; // w21
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCBC90 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C1ABD4(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v8);
    byte_4BCBC90 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v11 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
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
    sub_1C1AE30(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v11 )
    goto LABEL_17;
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v16 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v11,
                                                                  v16,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v16 >= v11->fields._size )
        return;
    }
LABEL_17:
    sub_1C1AE30(ObjectList, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_47223232(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  System_Collections_Generic_List_object__o *v20; // x23
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCBC91 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&EventRandomMissionListViewItem_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v10);
    byte_4BCBC91 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_1C1AE30(v12, v13);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v22.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(this, v16);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v18 = itemList;
  if ( size > 0 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v18,
                                                                v19,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !itemList )
        break;
      v20 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewObject__GetItem(
                                                                (EventRandomMissionListViewObject_o *)itemList,
                                                                *(const MethodInfo **)&missionId);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v20->klass->vtable._9_unknown.method)(
          v20,
          this->fields.isInput,
          v20->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v19 >= v18->fields._size )
        return;
    }
LABEL_21:
    sub_1C1AE30(itemList, *(_QWORD *)&missionId);
  }
}


void __fastcall EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_o *v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_o *v28; // x20
  System_String_o *v29; // x0
  _QWORD *v30; // x8
  System_String_o *v31; // x21
  System_Reflection_MethodBase_o *v32; // x0
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v34; // x23

  if ( (byte_4BCBC92 & 1) == 0 )
  {
    sub_1C1ABD4(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_1C1ABD4(&Method_EventRandomMissionListViewManager_ShowRejectDialog__, v5);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__, v8);
    sub_1C1ABD4(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_5815/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, v10);
    sub_1C1ABD4(&StringLiteral_5814/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v11);
    byte_4BCBC92 = 1;
  }
  v12 = sub_1C1AE20(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = item;
  v21 = v12 + 24;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)item, v22, v23, v24, v25, v26, v27);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5815/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5814/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_11;
  v29 = System_String__Format(v13, *(Il2CppObject **)(*(_QWORD *)v21 + 192LL), 0LL);
  v30 = Method_EventRandomMissionListViewManager_ShowRejectDialog__;
  v31 = v29;
  if ( (*((_BYTE *)Method_EventRandomMissionListViewManager_ShowRejectDialog__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_1C1ABEC(Method_EventRandomMissionListViewManager_ShowRejectDialog__);
  v32 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C1AE20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v34,
    (Il2CppObject *)v12,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_1C1AE30(v13, v14);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v28,
    v31,
    0LL,
    0LL,
    v34,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BCBC8B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BCBC8B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                 (EventRandomMissionListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C1AE30(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BCBC8A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___, method);
    byte_4BCBC8A = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_3020B3C *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void __fastcall EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Vector2_o offset; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+10h] [xbp-30h] BYREF

  v4 = this;
  if ( (byte_4BCBC94 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Remove__, result);
    this = (EventRandomMissionListViewManager_o *)sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v5);
    byte_4BCBC94 = 1;
  }
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_63048684(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &scroll, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.cancelItem,
          (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v6),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_1C1AE30(this, result);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4BCBC93 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__, *(_QWORD *)&missionId);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4BCBC93 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_object )
    sub_1C1AE30(0LL, v10);
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

  if ( (byte_4BCBC97 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BCBC97 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C1AB78((PartyOrganizationUtility_o *)&_4__this->fields.cancelItem, (int64_t)item, v7, v8, v9, v10, v11, v12);
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
    sub_1C1AE30(Instance, v6);
  }
}