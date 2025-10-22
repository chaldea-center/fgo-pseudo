void EventRandomMissionListViewManager___ctor(EventRandomMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C512EA & 1) == 0 )
  {
    sub_1C3E564(&MissionListViewManager_TypeInfo);
    byte_4C512EA = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void EventRandomMissionListViewManager__CheckItemListNum(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x20
  EventRandomMissionListViewManager___c_c *v5; // x8
  System_Func_object__bool__o *_9__25_0; // x21
  Il2CppObject *v7; // x22
  struct EventRandomMissionListViewManager___c_StaticFields *static_fields; // x0
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  EventMissionMaster_o *v14; // x20
  __int64 naturalAligment; // x10
  EventRandomMissionListViewItem_c *v16; // x9
  Il2CppObject *v17; // x8
  UserEventRandomMissionEntity_o *monitor; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *v20; // x19
  EventMissionEntity_o *v21; // x22
  EventRandomMissionListViewItem_o *v22; // x20
  const MethodInfo *v23; // x4
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4C512E9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_All_EventRandomMissionListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Cast_EventRandomMissionListViewItem___);
    sub_1C3E564(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C3E564(&System_Func_EventRandomMissionListViewItem__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&Method_EventRandomMissionListViewManager___c__CheckItemListNum_b__25_0__);
    sub_1C3E564(&EventRandomMissionListViewManager___c_TypeInfo);
    byte_4C512E9 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size )
  {
    v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                (System_Collections_IEnumerable_o *)itemList,
                                                                (const MethodInfo_3108224 *)Method_System_Linq_Enumerable_Cast_EventRandomMissionListViewItem___);
    v5 = EventRandomMissionListViewManager___c_TypeInfo;
    if ( !EventRandomMissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewManager___c_TypeInfo);
      v5 = EventRandomMissionListViewManager___c_TypeInfo;
    }
    _9__25_0 = (System_Func_object__bool__o *)v5->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventRandomMissionListViewManager___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__25_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventRandomMissionListViewItem__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__25_0,
        v7,
        Method_EventRandomMissionListViewManager___c__CheckItemListNum_b__25_0__,
        0);
      static_fields = EventRandomMissionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_EventRandomMissionListViewItem__bool__o *)_9__25_0;
      sub_1C3E508(&static_fields->__9__25_0, _9__25_0);
    }
    Master_object = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                      v4,
                                      (System_Func_TSource__bool__o *)_9__25_0,
                                      (const MethodInfo_3103F20 *)Method_System_Linq_Enumerable_All_EventRandomMissionListViewItem___);
    v11 = this->fields.itemList;
    if ( !v11 )
      goto LABEL_34;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      size = v11->fields._size;
      v13 = v11->fields._version + 1;
      v11->fields._size = 0;
      v11->fields._version = v13;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
      return;
    }
    if ( (unsigned int)(-1431655765 * v11->fields._size + 715827882) > 0x55555554 )
      return;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !this->fields.itemList )
      goto LABEL_34;
    v14 = (EventMissionMaster_o *)Master_object;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this->fields.itemList,
                      0,
                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Master_object )
    {
      naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( Master_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v16 = (EventRandomMissionListViewItem_c *)Master_object->klass->_2.typeHierarchy[naturalAligment - 1];
        v17 = v16 == EventRandomMissionListViewItem_TypeInfo ? Master_object : 0LL;
        if ( v16 == EventRandomMissionListViewItem_TypeInfo )
        {
          if ( v17 )
          {
            monitor = (UserEventRandomMissionEntity_o *)v17[19].monitor;
            if ( !monitor )
              return;
            if ( v14 )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           v14,
                                           this->fields.currentEventId,
                                           monitor->fields.missionId,
                                           0);
              v20 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              v21 = TargetEventMissionEntity;
              v22 = (EventRandomMissionListViewItem_o *)sub_1C3E7B0(EventRandomMissionListViewItem_TypeInfo);
              EventRandomMissionListViewItem___ctor(v22, monitor, v21, 1, v23);
              if ( v20 )
              {
                items = v20->fields._items;
                v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++v20->fields._version;
                if ( items )
                {
                  v26 = v20->fields._size;
                  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v20,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + v26;
                    v20->fields._size = v26 + 1;
                    v27[4] = (Il2CppClass *)v22;
                    sub_1C3E508(v27 + 4, v22);
                  }
                  return;
                }
              }
            }
          }
LABEL_34:
          sub_1C3E7C0(Master_object, v10);
        }
      }
    }
  }
}


void EventRandomMissionListViewManager__CreateList(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  EventRandomMissionListViewManager__CreateList_32038948(this, randomMissionList, eventId, 1, v4);
}


void EventRandomMissionListViewManager__CreateList_32038948(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 Instance; // x0
  __int64 v9; // x1
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  Il2CppObject *Entity; // x21
  bool v15; // w9
  int max_length; // w8
  EventMissionMaster_o *v17; // x21
  unsigned int v18; // w28
  UserEventRandomMissionEntity_o *v19; // x24
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  EventMissionEntity_o *v22; // x25
  EventRandomMissionListViewItem_o *v23; // x23
  const MethodInfo *v24; // x4
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v30; // x22
  il2cpp_array_size_t v31; // x8
  UserEventRandomMissionEntity_o *v32; // x8
  EventMissionEntity_o *v33; // x22
  System_Collections_Generic_List_object__o *v34; // x21
  UserEventRandomMissionEntity_o *v35; // x23
  EventRandomMissionListViewItem_o *v36; // x20
  const MethodInfo *v37; // x4
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  v7 = isTouchListEnabled;
  key = eventId;
  if ( (byte_4C512E0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C3E564(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C3E564(&EventRewardRootComponent_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_5704/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/);
    sub_1C3E564(&StringLiteral_21631/*"mission_bg_"*/);
    byte_4C512E0 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v7;
  if ( !scrollView )
    goto LABEL_50;
  scrollView->fields.disableDragIfFits = 1;
  bgSprite = this->fields.bgSprite;
  v12 = System_Int32__ToString((int32_t)&key, 0);
  v13 = System_String__Concat_63636468((System_String_o *)StringLiteral_21631/*"mission_bg_"*/, v12, 0);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v13, 0);
  Instance = (__int64)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 952LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 960LL));
  Instance = (__int64)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  UIWidget__set_width((UIWidget_o *)Instance, 568, 0);
  Instance = (__int64)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  UIWidget__set_height((UIWidget_o *)Instance, 368, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !Entity )
    goto LABEL_50;
  v15 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_50;
  max_length = randomMissionList->max_length;
  v17 = (EventMissionMaster_o *)Instance;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < max_length )
    {
      v19 = randomMissionList->m_Items[v18];
      if ( !v19 )
        goto LABEL_50;
      if ( !v17 )
        goto LABEL_50;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v17, key, v19->fields.missionId, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v22 = TargetEventMissionEntity;
      v23 = (EventRandomMissionListViewItem_o *)sub_1C3E7B0(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v23, v19, v22, 0, v24);
      if ( !itemList )
        goto LABEL_50;
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_50;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v23,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v23;
        Instance = sub_1C3E508(v28 + 4, v23);
      }
      max_length = randomMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_31;
    }
LABEL_51:
    sub_1C3E7C8(Instance, v9);
  }
LABEL_31:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v30 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0);
    if ( !v30 )
      goto LABEL_50;
    UILabel__set_text(v30, (System_String_o *)Instance, 0);
  }
  v9 = (unsigned int)key;
  this->fields.currentEventId = key;
  v31 = randomMissionList->max_length;
  if ( v31 && (unsigned int)(-1431655765 * v31 + 715827882) <= 0x55555554 )
  {
    if ( !(_DWORD)v31 )
      goto LABEL_51;
    v32 = randomMissionList->m_Items[0];
    if ( v32 && v17 )
    {
      Instance = (__int64)EventMissionMaster__getTargetEventMissionEntity(v17, v9, v32->fields.missionId, 0);
      if ( !LODWORD(randomMissionList->max_length) )
        goto LABEL_51;
      v33 = (EventMissionEntity_o *)Instance;
      v34 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v35 = randomMissionList->m_Items[0];
      v36 = (EventRandomMissionListViewItem_o *)sub_1C3E7B0(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v36, v35, v33, 1, v37);
      if ( v34 )
      {
        v38 = v34->fields._items;
        v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v34->fields._version;
        if ( v38 )
        {
          v40 = v34->fields._size;
          if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v36,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &v38->obj.klass + v40;
            v34->fields._size = v40 + 1;
            v41[4] = (Il2CppClass *)v36;
            sub_1C3E508(v41 + 4, v36);
          }
          goto LABEL_49;
        }
      }
    }
LABEL_50:
    sub_1C3E7C0(Instance, v9);
  }
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EventRandomMissionListViewManager__DestroyList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


EventRandomMissionListViewItem_o *EventRandomMissionListViewManager__GetItem(
        EventRandomMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C512E1 & 1) == 0 )
  {
    sub_1C3E564(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C512E1 = 1;
  }
  result = (EventRandomMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRandomMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventRandomMissionListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void EventRandomMissionListViewManager__OnChangeAlphaAnim(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4C512E3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_4C512E3 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                                  this,
                                                                  v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C3E7C0(ObjectList, v4);
  }
}


void EventRandomMissionListViewManager__OnClickListView(
        EventRandomMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  __int64 naturalAligment; // x10
  EventRandomMissionListViewItem_o *Item; // x0

  v4 = this;
  if ( (byte_4C512E2 & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_1C3E564(&EventRandomMissionListViewObject_TypeInfo);
    byte_4C512E2 = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (naturalAligment = EventRandomMissionListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_1C3E7C0(this, obj);
    }
    Item = EventRandomMissionListViewObject__GetItem((EventRandomMissionListViewObject_o *)obj, (const MethodInfo *)obj);
    if ( Item && !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)v4, (MissionListViewItem_o *)Item, 0, 0);
  }
}


void EventRandomMissionListViewManager__RefrashListDisp(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x11
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C512E4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_4C512E4 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))i.fields._current->klass->vtable[6].methodPtr)(
          i.fields._current,
          i.fields._current->klass->vtable[6].method) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( i.fields._current )
    {
      naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (EventRandomMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1C3E7C0(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_1C3E7C0(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRandomMissionListViewManager__RefrashListDisp_32041444(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w22
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C512E5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_4C512E5 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current
      || (naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment,
          v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventRandomMissionListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_1C3E7C0(v6, v7);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0) == missionId )
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[6].methodPtr)(
        current,
        current->klass->vtable[6].method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(this, v10);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v12 = itemList;
  if ( size > 0 )
  {
    v13 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v12,
                                                                v13,
                                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !itemList )
        break;
      v14 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewObject__GetItem(
                                                                (EventRandomMissionListViewObject_o *)itemList,
                                                                *(const MethodInfo **)&missionId);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))v14->klass->vtable._9_unknown.methodPtr)(
          v14,
          this->fields.isInput,
          v14->klass->vtable._9_unknown.method);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_21:
    sub_1C3E7C0(itemList, *(_QWORD *)&missionId);
  }
}


void EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  void **p_monitor; // x21
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  _QWORD *v11; // x8
  System_String_o *v12; // x21
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v15; // x23

  if ( (byte_4C512E6 & 1) == 0 )
  {
    sub_1C3E564(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_EventRandomMissionListViewManager_ShowRejectDialog__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__);
    sub_1C3E564(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_1C3E564(&StringLiteral_5703/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/);
    sub_1C3E564(&StringLiteral_5702/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/);
    byte_4C512E6 = 1;
  }
  v5 = (Il2CppObject *)sub_1C3E7B0(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_11;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C3E508(&v5[1], this);
  v5[1].monitor = item;
  p_monitor = &v5[1].monitor;
  sub_1C3E508(&v5[1].monitor, item);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0);
  if ( !*p_monitor )
    goto LABEL_11;
  v10 = System_String__Format(v6, *((Il2CppObject **)*p_monitor + 25), 0);
  v11 = Method_EventRandomMissionListViewManager_ShowRejectDialog__;
  v12 = v10;
  if ( (*((_BYTE *)Method_EventRandomMissionListViewManager_ShowRejectDialog__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C3E57C(Method_EventRandomMissionListViewManager_ShowRejectDialog__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    v5,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0);
  if ( !Instance )
LABEL_11:
    sub_1C3E7C0(v6, v7);
  CommonUI__OpenConfirmDecideDlg((CommonUI_o *)Instance, v9, v12, 0, 0, v15, 0, 0.0, 43.0, 0, 0, 0, 350, 2, 1, 0, 0, 0);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *EventRandomMissionListViewManager__get_ClippingObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C512DF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C512DF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C3E7C0(0, v10);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                 (EventRandomMissionListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C3E7C0(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_43876032((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C3E7C0(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C3E7C0(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C3E7C0(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C3E7C0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C3E508(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C512DE & 1) == 0 )
  {
    sub_1C3E564(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
    byte_4C512DE = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_3181AA8 *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  const MethodInfo *v5; // x1
  UnityEngine_Vector2_o offset; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+10h] [xbp-30h] BYREF

  v4 = this;
  if ( (byte_4C512E8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    this = (EventRandomMissionListViewManager_o *)sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C512E8 = 1;
  }
  scroll.fields.z = 0.0;
  offset = 0;
  *(_QWORD *)&scroll.fields.x = 0;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_63671772(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &scroll, &offset, 0);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.cancelItem,
          (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v5),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0) )
  {
LABEL_9:
    sub_1C3E7C0(this, result);
  }
  EventRewardRootComponent__UpdateEventRandomMissionNum((EventRewardRootComponent_o *)this, 0);
  ListViewManager__SetScrollView((ListViewManager_o *)v4, scroll, offset, 0);
}


void EventRandomMissionListViewManager__requestRandomMissionCancel(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4C512E7 & 1) == 0 )
  {
    sub_1C3E564(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__);
    sub_1C3E564(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C512E7 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_object )
    sub_1C3E7C0(0, v7);
  EventMissionRandomCancelRequest__beginRequest((EventMissionRandomCancelRequest_o *)Request_object, missionId, 0);
}


void EventRandomMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C512EB & 1) == 0 )
  {
    sub_1C3E564(&EventRandomMissionListViewManager___c_TypeInfo);
    byte_4C512EB = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventRandomMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRandomMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRandomMissionListViewManager___c_o *)v1;
  sub_1C3E508(EventRandomMissionListViewManager___c_TypeInfo->static_fields, v1);
}


void EventRandomMissionListViewManager___c___ctor(
        EventRandomMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRandomMissionListViewManager___c___CheckItemListNum_b__25_0(
        EventRandomMissionListViewManager___c_o *this,
        EventRandomMissionListViewItem_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C3E7C0(this, 0);
  return v->fields._IsDummy_k__BackingField;
}


void EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRandomMissionListViewManager___c__DisplayClass22_0___ShowRejectDialog_b__0(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  struct EventRandomMissionListViewItem_o *item; // x1
  EventRandomMissionListViewManager_o *v9; // x19
  const MethodInfo *v10; // x2

  if ( (byte_4C512EC & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C512EC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      item = this->fields.item;
      _4__this->fields.cancelItem = item;
      sub_1C3E508(&_4__this->fields.cancelItem, item);
      Instance = (CommonUI_o *)this->fields.item;
      if ( Instance )
      {
        v9 = this->fields.__4__this;
        Instance = (CommonUI_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)Instance, 0);
        if ( v9 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v9, (int32_t)Instance, v10);
          return;
        }
      }
    }
LABEL_10:
    sub_1C3E7C0(Instance, v6);
  }
}