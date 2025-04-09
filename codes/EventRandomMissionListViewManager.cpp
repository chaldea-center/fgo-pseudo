void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BF16C & 1) == 0 )
  {
    sub_1B4CF90(&MissionListViewManager_TypeInfo, method);
    byte_49BF16C = 1;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  EventRandomMissionListViewManager___c_c *v16; // x8
  System_Func_object__bool__o *_9__25_0; // x21
  Il2CppObject *v18; // x22
  struct EventRandomMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x8
  int32_t size; // w2
  int v26; // w9
  EventMissionMaster_o *v27; // x20
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_c *v29; // x9
  Il2CppObject *v30; // x8
  UserEventRandomMissionEntity_o *klass; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *v33; // x19
  EventMissionEntity_o *v34; // x22
  EventRandomMissionListViewItem_o *v35; // x20
  const MethodInfo *v36; // x4
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0

  if ( (byte_49BF16B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMissionMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_All_EventRandomMissionListViewItem___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Cast_EventRandomMissionListViewItem___, v5);
    sub_1B4CF90(&EventRandomMissionListViewItem_TypeInfo, v6);
    sub_1B4CF90(&System_Func_EventRandomMissionListViewItem__bool__TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B4CF90(&Method_EventRandomMissionListViewManager___c__CheckItemListNum_b__25_0__, v12);
    sub_1B4CF90(&EventRandomMissionListViewManager___c_TypeInfo, v13);
    byte_49BF16B = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size )
  {
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                 (System_Collections_IEnumerable_o *)itemList,
                                                                 (const MethodInfo_2F12010 *)Method_System_Linq_Enumerable_Cast_EventRandomMissionListViewItem___);
    v16 = EventRandomMissionListViewManager___c_TypeInfo;
    if ( !EventRandomMissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewManager___c_TypeInfo);
      v16 = EventRandomMissionListViewManager___c_TypeInfo;
    }
    _9__25_0 = (System_Func_object__bool__o *)v16->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = EventRandomMissionListViewManager___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__25_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventRandomMissionListViewItem__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__25_0,
        v18,
        Method_EventRandomMissionListViewManager___c__CheckItemListNum_b__25_0__,
        0LL);
      static_fields = EventRandomMissionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_EventRandomMissionListViewItem__bool__o *)_9__25_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v20, v21);
    }
    Master_object = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                      v15,
                                      (System_Func_TSource__bool__o *)_9__25_0,
                                      (const MethodInfo_2F0E080 *)Method_System_Linq_Enumerable_All_EventRandomMissionListViewItem___);
    v24 = this->fields.itemList;
    if ( !v24 )
      goto LABEL_34;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      size = v24->fields._size;
      v26 = v24->fields._version + 1;
      v24->fields._size = 0;
      v24->fields._version = v26;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v24->fields._items, 0, size, 0LL);
      return;
    }
    if ( (unsigned int)(-1431655765 * v24->fields._size + 715827882) > 0x55555554 )
      return;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !this->fields.itemList )
      goto LABEL_34;
    v27 = (EventMissionMaster_o *)Master_object;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this->fields.itemList,
                      0,
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Master_object )
    {
      methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        v29 = (EventRandomMissionListViewItem_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1];
        v30 = v29 == EventRandomMissionListViewItem_TypeInfo ? Master_object : 0LL;
        if ( v29 == EventRandomMissionListViewItem_TypeInfo )
        {
          if ( v30 )
          {
            klass = (UserEventRandomMissionEntity_o *)v30[19].klass;
            if ( !klass )
              return;
            if ( v27 )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           v27,
                                           this->fields.currentEventId,
                                           klass->fields.missionId,
                                           0LL);
              v33 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              v34 = TargetEventMissionEntity;
              v35 = (EventRandomMissionListViewItem_o *)sub_1B4D1DC(EventRandomMissionListViewItem_TypeInfo);
              EventRandomMissionListViewItem___ctor(v35, klass, v34, 1, v36);
              if ( v33 )
              {
                items = v33->fields._items;
                v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++v33->fields._version;
                if ( items )
                {
                  v41 = v33->fields._size;
                  if ( (unsigned int)v41 >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v33,
                      (Il2CppObject *)v35,
                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v42 = &items->obj.klass + v41;
                    v33->fields._size = v41 + 1;
                    v42[4] = (Il2CppClass *)v35;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v35, v37, v38);
                  }
                  return;
                }
              }
            }
          }
LABEL_34:
          sub_1B4D1EC(Master_object, v23);
        }
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

  EventRandomMissionListViewManager__CreateList_46686720(this, randomMissionList, eventId, 1, v4);
}


void __fastcall EventRandomMissionListViewManager__CreateList_46686720(
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
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v44; // x22
  __int64 v45; // x8
  UserEventRandomMissionEntity_o *v46; // x8
  EventMissionEntity_o *v47; // x22
  System_Collections_Generic_List_object__o *v48; // x21
  UserEventRandomMissionEntity_o *v49; // x23
  EventRandomMissionListViewItem_o *v50; // x20
  const MethodInfo *v51; // x4
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  v7 = isTouchListEnabled;
  key = eventId;
  if ( (byte_49BF162 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, randomMissionList);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMissionMaster___, v8);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B4CF90(&EventRandomMissionListViewItem_TypeInfo, v11);
    sub_1B4CF90(&EventRewardRootComponent_TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v14);
    sub_1B4CF90(&NetworkManager_TypeInfo, v15);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v16);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B4CF90(&StringLiteral_5602/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, v18);
    sub_1B4CF90(&StringLiteral_21180/*"mission_bg_"*/, v19);
    byte_49BF162 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v7;
  if ( !scrollView )
    goto LABEL_50;
  scrollView->fields.disableDragIfFits = 1;
  bgSprite = this->fields.bgSprite;
  v24 = System_Int32__ToString((int32_t)&key, 0LL);
  v25 = System_String__Concat_61093468((System_String_o *)StringLiteral_21180/*"mission_bg_"*/, v24, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_319D99C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_50;
  v27 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v27;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMissionMaster___);
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
      v35 = (EventRandomMissionListViewItem_o *)sub_1B4D1DC(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v35, v31, v34, 0, v36);
      if ( !itemList )
        goto LABEL_50;
      items = itemList->fields._items;
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_50;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v35,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v35;
        sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v35, v37, v38);
      }
      max_length = randomMissionList->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_31;
    }
LABEL_51:
    sub_1B4D1F4(Instance, v21);
  }
LABEL_31:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v44 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5602/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v44 )
      goto LABEL_50;
    UILabel__set_text(v44, (System_String_o *)Instance, 0LL);
  }
  v21 = (unsigned int)key;
  this->fields.currentEventId = key;
  v45 = *(_QWORD *)&randomMissionList->max_length;
  if ( v45 && (unsigned int)(-1431655765 * v45 + 715827882) <= 0x55555554 )
  {
    if ( !(_DWORD)v45 )
      goto LABEL_51;
    v46 = randomMissionList->m_Items[0];
    if ( v46 && v29 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v29, v21, v46->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_51;
      v47 = (EventMissionEntity_o *)Instance;
      v48 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v49 = randomMissionList->m_Items[0];
      v50 = (EventRandomMissionListViewItem_o *)sub_1B4D1DC(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v50, v49, v47, 1, v51);
      if ( v48 )
      {
        v54 = v48->fields._items;
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v48->fields._version;
        if ( v54 )
        {
          v56 = v48->fields._size;
          if ( (unsigned int)v56 >= v54->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v48,
              (Il2CppObject *)v50,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &v54->obj.klass + v56;
            v48->fields._size = v56 + 1;
            v57[4] = (Il2CppClass *)v50;
            sub_1B4CF34((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v50, v52, v53);
          }
          goto LABEL_49;
        }
      }
    }
LABEL_50:
    sub_1B4D1EC(Instance, v21);
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

  if ( (byte_49BF163 & 1) == 0 )
  {
    sub_1B4CF90(&EventRandomMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49BF163 = 1;
  }
  result = (EventRandomMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRandomMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49BF165 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v3);
    byte_49BF165 = 1;
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
                                                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B4D1EC(ObjectList, v5);
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
  if ( (byte_49BF164 & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_1B4CF90(&EventRandomMissionListViewObject_TypeInfo, obj);
    byte_49BF164 = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_1B4D1EC(this, obj);
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

  if ( (byte_49BF166 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B4CF90(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v8);
    byte_49BF166 = 1;
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
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
    sub_1B4D1EC(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
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
    sub_1B4D1EC(ObjectList, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_46689216(
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

  if ( (byte_49BF167 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B4CF90(&EventRandomMissionListViewItem_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v10);
    byte_49BF167 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_1B4D1EC(v12, v13);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v22.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
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
    sub_1B4D1EC(itemList, *(_QWORD *)&missionId);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  _QWORD *v22; // x8
  System_String_o *v23; // x21
  System_Reflection_MethodBase_o *v24; // x0
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v26; // x23

  if ( (byte_49BF168 & 1) == 0 )
  {
    sub_1B4CF90(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_1B4CF90(&Method_EventRandomMissionListViewManager_ShowRejectDialog__, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__, v8);
    sub_1B4CF90(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_5601/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, v10);
    sub_1B4CF90(&StringLiteral_5600/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v11);
    byte_49BF168 = 1;
  }
  v12 = sub_1B4D1DC(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = item;
  v17 = v12 + 24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 24), (int32_t)item, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5601/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5600/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v17 )
    goto LABEL_11;
  v21 = System_String__Format(v13, *(Il2CppObject **)(*(_QWORD *)v17 + 192LL), 0LL);
  v22 = Method_EventRandomMissionListViewManager_ShowRejectDialog__;
  v23 = v21;
  if ( (*((_BYTE *)Method_EventRandomMissionListViewManager_ShowRejectDialog__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1B4CFA8(Method_EventRandomMissionListViewManager_ShowRejectDialog__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v26,
    (Il2CppObject *)v12,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_1B4D1EC(v13, v14);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v20,
    v23,
    0LL,
    0LL,
    v26,
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49BF161 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49BF161 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B4D1EC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B4D1EC(0LL, v18);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                 (EventRandomMissionListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B4D1EC(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41341816((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B4D1EC(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B4D1EC(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B4D1EC(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B4D1EC(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BF160 & 1) == 0 )
  {
    sub_1B4CF90(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___, method);
    byte_49BF160 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_2F839C0 *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
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
  if ( (byte_49BF16A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Remove__, result);
    this = (EventRandomMissionListViewManager_o *)sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v5);
    byte_49BF16A = 1;
  }
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_61128772(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &scroll, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.cancelItem,
          (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v6),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_1B4D1EC(this, result);
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

  if ( (byte_49BF169 & 1) == 0 )
  {
    sub_1B4CF90(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__, *(_QWORD *)&missionId);
    sub_1B4CF90(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49BF169 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_object )
    sub_1B4D1EC(0LL, v10);
  EventMissionRandomCancelRequest__beginRequest((EventMissionRandomCancelRequest_o *)Request_object, missionId, 0LL);
}


void __fastcall EventRandomMissionListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BF16D & 1) == 0 )
  {
    sub_1B4CF90(&EventRandomMissionListViewManager___c_TypeInfo, v1);
    byte_49BF16D = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventRandomMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRandomMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRandomMissionListViewManager___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)EventRandomMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventRandomMissionListViewManager___c___ctor(
        EventRandomMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRandomMissionListViewManager___c___CheckItemListNum_b__25_0(
        EventRandomMissionListViewManager___c_o *this,
        EventRandomMissionListViewItem_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B4D1EC(this, 0LL);
  return v->fields._IsDummy_k__BackingField;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  struct EventRandomMissionListViewItem_o *item; // x1
  EventRandomMissionListViewManager_o *v11; // x19
  const MethodInfo *v12; // x2

  if ( (byte_49BF16E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49BF16E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.cancelItem, (int32_t)item, v7, v8);
      Instance = (CommonUI_o *)this->fields.item;
      if ( Instance )
      {
        v11 = this->fields.__4__this;
        Instance = (CommonUI_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)Instance, 0LL);
        if ( v11 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v11, (int32_t)Instance, v12);
          return;
        }
      }
    }
LABEL_10:
    sub_1B4D1EC(Instance, v6);
  }
}