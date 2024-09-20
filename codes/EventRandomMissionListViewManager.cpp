void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F10C & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    byte_4A5F10C = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventRandomMissionListViewManager__CheckItemListNum(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  EventMissionMaster_o *v7; // x20
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_c *v9; // x9
  Il2CppObject *v10; // x8
  UserEventRandomMissionEntity_o *klass; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *v13; // x19
  EventMissionEntity_o *v14; // x22
  EventRandomMissionListViewItem_o *v15; // x20
  const MethodInfo *v16; // x4
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5F10B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5F10B = 1;
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionMaster___);
        if ( this->fields.itemList )
        {
          v7 = (EventMissionMaster_o *)Master_object;
          Master_object = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.itemList,
                            0,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Master_object )
            return;
          methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Master_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
            return;
          v9 = (EventRandomMissionListViewItem_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1];
          v10 = v9 == EventRandomMissionListViewItem_TypeInfo ? Master_object : 0LL;
          if ( v9 != EventRandomMissionListViewItem_TypeInfo )
            return;
          if ( v10 )
          {
            klass = (UserEventRandomMissionEntity_o *)v10[19].klass;
            if ( !klass )
              return;
            if ( v7 )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           v7,
                                           this->fields.currentEventId,
                                           klass->fields.missionId,
                                           0LL);
              v13 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              v14 = TargetEventMissionEntity;
              v15 = (EventRandomMissionListViewItem_o *)sub_1B887FC(EventRandomMissionListViewItem_TypeInfo);
              EventRandomMissionListViewItem___ctor(v15, klass, v14, 1, v16);
              if ( v13 )
              {
                items = v13->fields._items;
                v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++v13->fields._version;
                if ( items )
                {
                  v21 = v13->fields._size;
                  if ( (unsigned int)v21 >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v13,
                      (Il2CppObject *)v15,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v22 = &items->obj.klass + v21;
                    v13->fields._size = v21 + 1;
                    v22[4] = (Il2CppClass *)v15;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v15, v17, v18);
                  }
                  return;
                }
              }
            }
          }
        }
        sub_1B8880C(Master_object, v6);
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

  EventRandomMissionListViewManager__CreateList_45805896(this, randomMissionList, eventId, 1, v4);
}


void __fastcall EventRandomMissionListViewManager__CreateList_45805896(
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
  System_String_o *v13; // x22
  Il2CppObject *Entity; // x21
  bool v15; // w9
  signed int max_length; // w8
  EventMissionMaster_o *v17; // x21
  unsigned int v18; // w28
  UserEventRandomMissionEntity_o *v19; // x24
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  EventMissionEntity_o *v22; // x25
  EventRandomMissionListViewItem_o *v23; // x23
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v32; // x22
  __int64 v33; // x8
  UserEventRandomMissionEntity_o *v34; // x8
  EventMissionEntity_o *v35; // x22
  System_Collections_Generic_List_object__o *v36; // x21
  UserEventRandomMissionEntity_o *v37; // x23
  EventRandomMissionListViewItem_o *v38; // x20
  const MethodInfo *v39; // x4
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  v7 = isTouchListEnabled;
  key = eventId;
  if ( (byte_4A5F102 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5699/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/);
    sub_1B885B0(&StringLiteral_21468/*"mission_bg_"*/);
    byte_4A5F102 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v7;
  if ( !scrollView )
    goto LABEL_50;
  scrollView->fields.disableDragIfFits = 1;
  bgSprite = this->fields.bgSprite;
  v12 = System_Int32__ToString((int32_t)&key, 0LL);
  v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_21468/*"mission_bg_"*/, v12, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v13, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_50;
  v15 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionMaster___);
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
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v17, key, v19->fields.missionId, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v22 = TargetEventMissionEntity;
      v23 = (EventRandomMissionListViewItem_o *)sub_1B887FC(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v23, v19, v22, 0, v24);
      if ( !itemList )
        goto LABEL_50;
      items = itemList->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_50;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v23,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
      }
      max_length = randomMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_31;
    }
LABEL_51:
    sub_1B88814(Instance, v9);
  }
LABEL_31:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v32 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v32 )
      goto LABEL_50;
    UILabel__set_text(v32, (System_String_o *)Instance, 0LL);
  }
  v9 = (unsigned int)key;
  this->fields.currentEventId = key;
  v33 = *(_QWORD *)&randomMissionList->max_length;
  if ( v33 && (unsigned int)(-1431655765 * v33 + 715827882) <= 0x55555554 )
  {
    if ( !(_DWORD)v33 )
      goto LABEL_51;
    v34 = randomMissionList->m_Items[0];
    if ( v34 && v17 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v17, v9, v34->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_51;
      v35 = (EventMissionEntity_o *)Instance;
      v36 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v37 = randomMissionList->m_Items[0];
      v38 = (EventRandomMissionListViewItem_o *)sub_1B887FC(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v38, v37, v35, 1, v39);
      if ( v36 )
      {
        v42 = v36->fields._items;
        v43 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v36->fields._version;
        if ( v42 )
        {
          v44 = v36->fields._size;
          if ( (unsigned int)v44 >= v42->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v36,
              (Il2CppObject *)v38,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &v42->obj.klass + v44;
            v36->fields._size = v44 + 1;
            v45[4] = (Il2CppClass *)v38;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v38, v40, v41);
          }
          goto LABEL_49;
        }
      }
    }
LABEL_50:
    sub_1B8880C(Instance, v9);
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


EventRandomMissionListViewItem_o *__fastcall EventRandomMissionListViewManager__GetItem(
        EventRandomMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5F103 & 1) == 0 )
  {
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5F103 = 1;
  }
  result = (EventRandomMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRandomMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4A5F105 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_4A5F105 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v4);
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
  if ( (byte_4A5F104 & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_1B885B0(&EventRandomMissionListViewObject_TypeInfo);
    byte_4A5F104 = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_1B8880C(this, obj);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5F106 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_4A5F106 = 1;
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
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
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
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_1B8880C(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_45808392(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w22
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5F107 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_4A5F107 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v16.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_1B8880C(v6, v7);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !itemList )
        break;
      v14 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewObject__GetItem(
                                                                (EventRandomMissionListViewObject_o *)itemList,
                                                                *(const MethodInfo **)&missionId);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v14->klass->vtable._9_unknown.method)(
          v14,
          this->fields.isInput,
          v14->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_21:
    sub_1B8880C(itemList, *(_QWORD *)&missionId);
  }
}


void __fastcall EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  _QWORD *v15; // x8
  System_String_o *v16; // x21
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v19; // x23

  if ( (byte_4A5F108 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_EventRandomMissionListViewManager_ShowRejectDialog__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__);
    sub_1B885B0(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5698/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_5697/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/);
    byte_4A5F108 = 1;
  }
  v5 = sub_1B887FC(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = item;
  v10 = v5 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)item, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5698/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5697/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v10 )
    goto LABEL_11;
  v14 = System_String__Format(v6, *(Il2CppObject **)(*(_QWORD *)v10 + 192LL), 0LL);
  v15 = Method_EventRandomMissionListViewManager_ShowRejectDialog__;
  v16 = v14;
  if ( (*((_BYTE *)Method_EventRandomMissionListViewManager_ShowRejectDialog__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B885C8(Method_EventRandomMissionListViewManager_ShowRejectDialog__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_1B8880C(v6, v7);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v13,
    v16,
    0LL,
    0LL,
    v19,
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
    0LL);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ClippingObjectList(
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
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5F101 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F101 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                 (EventRandomMissionListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F100 & 1) == 0 )
  {
    sub_1B885B0(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
    byte_4A5F100 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_2EFE89C *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void __fastcall EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  const MethodInfo *v5; // x1
  UnityEngine_Vector2_o offset; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+10h] [xbp-30h] BYREF

  v4 = this;
  if ( (byte_4A5F10A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    this = (EventRandomMissionListViewManager_o *)sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5F10A = 1;
  }
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &scroll, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.cancelItem,
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v5),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, result);
  }
  EventRewardRootComponent__UpdateEventRandomMissionNum((EventRewardRootComponent_o *)this, 0LL);
  ListViewManager__SetScrollView((ListViewManager_o *)v4, scroll, offset, 0LL);
}


void __fastcall EventRandomMissionListViewManager__requestRandomMissionCancel(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4A5F109 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F109 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v7);
  EventMissionRandomCancelRequest__beginRequest((EventMissionRandomCancelRequest_o *)Request_object, missionId, 0LL);
}


void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ShowRejectDialog_b__0(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  struct EventRandomMissionListViewItem_o *item; // x1
  EventRandomMissionListViewManager_o *v11; // x19
  const MethodInfo *v12; // x2

  if ( (byte_4A5F10D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F10D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.cancelItem, (int32_t)item, v7, v8);
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
    sub_1B8880C(Instance, v6);
  }
}