void EventRandomMissionListViewManager___ctor(EventRandomMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A971 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewManager_TypeInfo);
    byte_596A971 = 1;
  }
  if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method, v2);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void EventRandomMissionListViewManager__CheckItemListNum(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  EventRandomMissionListViewManager___c_c *v7; // x8
  struct EventRandomMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__25_0; // x21
  Il2CppObject *v10; // x22
  struct EventRandomMissionListViewManager___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  EventMissionMaster_o *v24; // x20
  __int64 naturalAligment; // x10
  UserEventRandomMissionEntity_o *monitor; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x19
  EventMissionEntity_o *v29; // x22
  EventRandomMissionListViewItem_o *v30; // x20
  const MethodInfo *v31; // x4

  if ( (byte_596A970 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_EventRandomMissionListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_EventRandomMissionListViewItem___);
    sub_2213A60(&EventRandomMissionListViewItem_TypeInfo);
    sub_2213A60(&System_Func_EventRandomMissionListViewItem__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&Method_EventRandomMissionListViewManager___c__CheckItemListNum_b__25_0__);
    sub_2213A60(&EventRandomMissionListViewManager___c_TypeInfo);
    byte_596A970 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size )
  {
    v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                (System_Collections_IEnumerable_o *)itemList,
                                                                (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_EventRandomMissionListViewItem___);
    v7 = EventRandomMissionListViewManager___c_TypeInfo;
    if ( !*(&EventRandomMissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewManager___c_TypeInfo, v4, v5);
      v7 = EventRandomMissionListViewManager___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__25_0 = (System_Func_object__bool__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v4, v5);
        static_fields = EventRandomMissionListViewManager___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventRandomMissionListViewItem__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__25_0,
        v10,
        Method_EventRandomMissionListViewManager___c__CheckItemListNum_b__25_0__,
        0);
      v11 = EventRandomMissionListViewManager___c_TypeInfo->static_fields;
      v11->__9__25_0 = (struct System_Func_EventRandomMissionListViewItem__bool__o *)_9__25_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__25_0, (int32_t)_9__25_0, v12, v13, v14, v15, v16, v17);
    }
    Master_object = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                      v6,
                                      (System_Func_TSource__bool__o *)_9__25_0,
                                      (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_EventRandomMissionListViewItem___);
    v21 = this->fields.itemList;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v21 )
      {
        size = v21->fields._size;
        v23 = v21->fields._version + 1;
        v21->fields._size = 0;
        v21->fields._version = v23;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0);
        return;
      }
LABEL_28:
      sub_2213CDC(Master_object, v19);
    }
    if ( !v21 )
      goto LABEL_28;
    if ( (unsigned int)(-1431655765 * v21->fields._size + 715827882) > 0x55555554 )
      return;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !this->fields.itemList )
      goto LABEL_28;
    v24 = (EventMissionMaster_o *)Master_object;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this->fields.itemList,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Master_object )
    {
      naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( Master_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (EventRandomMissionListViewItem_c *)Master_object->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
      {
        monitor = (UserEventRandomMissionEntity_o *)Master_object[19].monitor;
        if ( monitor )
        {
          if ( v24 )
          {
            TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                         v24,
                                         this->fields.currentEventId,
                                         monitor->fields.missionId,
                                         0);
            v28 = this->fields.itemList;
            v29 = TargetEventMissionEntity;
            v30 = (EventRandomMissionListViewItem_o *)sub_2213CCC(EventRandomMissionListViewItem_TypeInfo);
            EventRandomMissionListViewItem___ctor(v30, monitor, v29, 1, v31);
            if ( v28 )
            {
              sub_1FFEDA8(v28, v30, Method_System_Collections_Generic_List_ListViewItem__Add__);
              return;
            }
          }
          goto LABEL_28;
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

  EventRandomMissionListViewManager__CreateList_38528488(this, randomMissionList, eventId, 1, v4);
}


void EventRandomMissionListViewManager__CreateList_38528488(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v7; // w21
  int64_t Instance; // x0
  __int64 v9; // x1
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Entity; // x21
  __int64 v19; // x2
  bool v20; // w9
  DataManager_c *v21; // x0
  int v22; // w8
  __int64 v23; // x2
  int max_length; // w8
  EventMissionMaster_o *v25; // x21
  unsigned int v26; // w28
  UserEventRandomMissionEntity_o *v27; // x24
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  EventMissionEntity_o *v30; // x25
  EventRandomMissionListViewItem_o *v31; // x23
  const MethodInfo *v32; // x4
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  UILabel_o *v46; // x22
  il2cpp_array_size_t v47; // x8
  UserEventRandomMissionEntity_o *v48; // x8
  EventMissionEntity_o *v49; // x22
  System_Collections_Generic_List_object__o *v50; // x21
  UserEventRandomMissionEntity_o *v51; // x23
  EventRandomMissionListViewItem_o *v52; // x20
  const MethodInfo *v53; // x4
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  v7 = isTouchListEnabled;
  key = eventId;
  if ( (byte_596A967 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&EventRandomMissionListViewItem_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5935/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/);
    sub_2213A60(&StringLiteral_22714/*"mission_bg_"*/);
    byte_596A967 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v7;
  if ( !scrollView )
    goto LABEL_50;
  bgSprite = this->fields.bgSprite;
  scrollView->fields.disableDragIfFits = 1;
  v12 = System_Int32__ToString((int32_t)&key, 0);
  v15 = System_String__Concat_75651716((System_String_o *)StringLiteral_22714/*"mission_bg_"*/, v12, 0);
  if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v13, v14);
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v15, 0);
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  (*(void (__fastcall **)(int64_t, __int64, _QWORD))(*(_QWORD *)Instance + 952LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 960LL));
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  UIWidget__set_width((UIWidget_o *)Instance, 568, 0);
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_50;
  UIWidget__set_height((UIWidget_o *)Instance, 368, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
  Instance = NetworkManager__getTime(0);
  if ( !Entity )
    goto LABEL_50;
  v20 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  v21 = DataManager_TypeInfo;
  v22 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.isEndEvent = v20;
  if ( !v22 )
    j_il2cpp_runtime_class_init_0(v21, v9, v19);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_50;
  max_length = randomMissionList->max_length;
  v25 = (EventMissionMaster_o *)Instance;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( v26 < max_length )
    {
      v27 = randomMissionList->m_Items[v26];
      if ( !v27 )
        goto LABEL_50;
      if ( !v25 )
        goto LABEL_50;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v25, key, v27->fields.missionId, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v30 = TargetEventMissionEntity;
      v31 = (EventRandomMissionListViewItem_o *)sub_2213CCC(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v31, v27, v30, 0, v32);
      if ( !itemList )
        goto LABEL_50;
      items = itemList->fields._items;
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_50;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v31,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v31;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v31, v33, v34, v35, v36, v37, v38);
      }
      max_length = randomMissionList->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_31;
    }
LABEL_51:
    sub_2213CE4(Instance);
  }
LABEL_31:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v23);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v46 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5935/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0);
    if ( !v46 )
      goto LABEL_50;
    UILabel__set_text(v46, (System_String_o *)Instance, 0);
  }
  v9 = (unsigned int)key;
  v47 = randomMissionList->max_length;
  this->fields.currentEventId = key;
  if ( v47 && (unsigned int)(-1431655765 * v47 + 715827882) <= 0x55555554 )
  {
    if ( !(_DWORD)v47 )
      goto LABEL_51;
    v48 = randomMissionList->m_Items[0];
    if ( v48 && v25 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v25, v9, v48->fields.missionId, 0);
      if ( !LODWORD(randomMissionList->max_length) )
        goto LABEL_51;
      v49 = (EventMissionEntity_o *)Instance;
      v50 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v51 = randomMissionList->m_Items[0];
      v52 = (EventRandomMissionListViewItem_o *)sub_2213CCC(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v52, v51, v49, 1, v53);
      if ( v50 )
      {
        v60 = v50->fields._items;
        v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v50->fields._version;
        if ( v60 )
        {
          v62 = v50->fields._size;
          if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v50,
              (Il2CppObject *)v52,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &v60->obj.klass + v62;
            v50->fields._size = v62 + 1;
            v63[4] = (Il2CppClass *)v52;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), (int32_t)v52, v54, v55, v56, v57, v58, v59);
          }
          goto LABEL_49;
        }
      }
    }
LABEL_50:
    sub_2213CDC(Instance, v9);
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

  if ( (byte_596A968 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596A968 = 1;
  }
  result = (EventRandomMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRandomMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_596A96A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_596A96A = 1;
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
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v4);
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
  if ( (byte_596A969 & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_2213A60(&EventRandomMissionListViewObject_TypeInfo);
    byte_596A969 = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (naturalAligment = EventRandomMissionListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_2213CDC(this, obj);
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
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596A96B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EventRandomMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_596A96B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v11.fields._current
      || (klass = v11.fields._current->klass,
          naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment,
          v11.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventRandomMissionListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_2213CDC(v11.fields._current, v6);
    }
    klass->vtable[6].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size > 0 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
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
    sub_2213CDC(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRandomMissionListViewManager__RefrashListDisp_38530928(
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

  if ( (byte_596A96C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EventRandomMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_596A96C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  memset(&v16, 0, sizeof(v16));
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current
      || (naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment,
          v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventRandomMissionListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_2213CDC(v6, v7);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0) == missionId )
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[6].methodPtr)(
        current,
        current->klass->vtable[6].method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
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
    sub_2213CDC(itemList, *(_QWORD *)&missionId);
  }
}


void EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  _QWORD *v25; // x8
  System_String_o *v26; // x21
  System_Reflection_MethodBase_o *v27; // x0
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v29; // x23

  if ( (byte_596A96D & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_EventRandomMissionListViewManager_ShowRejectDialog__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__);
    sub_2213A60(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_2213A60(&StringLiteral_5934/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_5933/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/);
    byte_596A96D = 1;
  }
  v5 = sub_2213CCC(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  v14 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)item, v15, v16, v17, v18, v19, v20);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5934/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5933/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_11;
  v24 = System_String__Format(v6, *(Il2CppObject **)(*(_QWORD *)v14 + 200LL), 0);
  v25 = Method_EventRandomMissionListViewManager_ShowRejectDialog__;
  v26 = v24;
  if ( (*((_BYTE *)Method_EventRandomMissionListViewManager_ShowRejectDialog__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_2213A78(Method_EventRandomMissionListViewManager_ShowRejectDialog__);
  v27 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0);
  if ( !Instance )
LABEL_11:
    sub_2213CDC(v6, v7);
  CommonUI__OpenConfirmDecideDlg((CommonUI_o *)Instance, v23, v26, 0, 0, v29, 0, 0.0, 43.0, 0, 0, 0, 350, 2, 1, 0, 0, 0);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *EventRandomMissionListViewManager__get_ClippingObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596A966 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A966 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                 (EventRandomMissionListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_596A965 & 1) == 0 )
  {
    sub_2213A60(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
    byte_596A965 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_38EE7FC *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
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
  if ( (byte_596A96F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    this = (EventRandomMissionListViewManager_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596A96F = 1;
  }
  scroll.fields.z = 0.0;
  offset = 0;
  *(_QWORD *)&scroll.fields.x = 0;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &scroll, &offset, 0);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.cancelItem,
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v5),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, result);
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_596A96E & 1) == 0 )
  {
    sub_2213A60(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__);
    sub_2213A60(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596A96E = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v9);
  EventMissionRandomCancelRequest__beginRequest((EventMissionRandomCancelRequest_o *)Request_object, missionId, 0);
}


void EventRandomMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A972 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewManager___c_TypeInfo);
    byte_596A972 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventRandomMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRandomMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRandomMissionListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventRandomMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  struct EventRandomMissionListViewItem_o *item; // x1
  EventRandomMissionListViewManager_o *v15; // x19
  const MethodInfo *v16; // x2

  if ( (byte_596A973 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A973 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.cancelItem,
        (int32_t)item,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      Instance = (CommonUI_o *)this->fields.item;
      if ( Instance )
      {
        v15 = this->fields.__4__this;
        Instance = (CommonUI_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)Instance, 0);
        if ( v15 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v15, (int32_t)Instance, v16);
          return;
        }
      }
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
}