void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00320 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewManager_TypeInfo, method);
    byte_4A00320 = 1;
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
  EventMissionMaster_o *v11; // x20
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_c *v13; // x9
  Il2CppObject *v14; // x8
  UserEventRandomMissionEntity_o *klass; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *v17; // x19
  EventMissionEntity_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  EventRandomMissionListViewItem_o *v21; // x20
  const MethodInfo *v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4A0031F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&EventRandomMissionListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    byte_4A0031F = 1;
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionMaster___);
        if ( this->fields.itemList )
        {
          v11 = (EventMissionMaster_o *)Master_object;
          Master_object = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.itemList,
                            0,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Master_object )
            return;
          methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Master_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
            return;
          v13 = (EventRandomMissionListViewItem_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1];
          v14 = v13 == EventRandomMissionListViewItem_TypeInfo ? Master_object : 0LL;
          if ( v13 != EventRandomMissionListViewItem_TypeInfo )
            return;
          if ( v14 )
          {
            klass = (UserEventRandomMissionEntity_o *)v14[19].klass;
            if ( !klass )
              return;
            if ( v11 )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           v11,
                                           this->fields.currentEventId,
                                           klass->fields.missionId,
                                           0LL);
              v17 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              v18 = TargetEventMissionEntity;
              v21 = (EventRandomMissionListViewItem_o *)sub_1B64314(EventRandomMissionListViewItem_TypeInfo, v19, v20);
              EventRandomMissionListViewItem___ctor(v21, klass, v18, 1, v22);
              if ( v17 )
              {
                items = v17->fields._items;
                v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++v17->fields._version;
                if ( items )
                {
                  v27 = v17->fields._size;
                  if ( (unsigned int)v27 >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v17,
                      (Il2CppObject *)v21,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v28 = &items->obj.klass + v27;
                    v17->fields._size = v27 + 1;
                    v28[4] = (Il2CppClass *)v21;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
                  }
                  return;
                }
              }
            }
          }
        }
        sub_1B64324(Master_object);
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

  EventRandomMissionListViewManager__CreateList_45430576(this, randomMissionList, eventId, 1, v4);
}


void __fastcall EventRandomMissionListViewManager__CreateList_45430576(
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
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  Il2CppObject *Entity; // x21
  bool v26; // w9
  __int64 v27; // x1
  signed int max_length; // w8
  EventMissionMaster_o *v29; // x21
  unsigned int v30; // w28
  UserEventRandomMissionEntity_o *v31; // x24
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  EventMissionEntity_o *v34; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  EventRandomMissionListViewItem_o *v37; // x23
  const MethodInfo *v38; // x4
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v46; // x22
  __int64 v47; // x8
  UserEventRandomMissionEntity_o *v48; // x8
  __int64 v49; // x2
  EventMissionEntity_o *v50; // x22
  System_Collections_Generic_List_object__o *v51; // x21
  UserEventRandomMissionEntity_o *v52; // x23
  EventRandomMissionListViewItem_o *v53; // x20
  const MethodInfo *v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  v7 = isTouchListEnabled;
  key = eventId;
  if ( (byte_4A00316 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, randomMissionList);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B640C8(&EventRandomMissionListViewItem_TypeInfo, v11);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&StringLiteral_5673/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, v18);
    sub_1B640C8(&StringLiteral_21386/*"mission_bg_"*/, v19);
    byte_4A00316 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v7;
  if ( !scrollView )
    goto LABEL_50;
  scrollView->fields.disableDragIfFits = 1;
  bgSprite = this->fields.bgSprite;
  v23 = System_Int32__ToString((int32_t)&key, 0LL);
  v24 = System_String__Concat_61375396((System_String_o *)StringLiteral_21386/*"mission_bg_"*/, v23, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v24, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_50;
  v26 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionMaster___);
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
      v37 = (EventRandomMissionListViewItem_o *)sub_1B64314(EventRandomMissionListViewItem_TypeInfo, v35, v36);
      EventRandomMissionListViewItem___ctor(v37, v31, v34, 0, v38);
      if ( !itemList )
        goto LABEL_50;
      items = itemList->fields._items;
      v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_50;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v37,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v37;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v37, v39, v40);
      }
      max_length = randomMissionList->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_31;
    }
LABEL_51:
    sub_1B6432C(Instance, v27);
  }
LABEL_31:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v46 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5673/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v46 )
      goto LABEL_50;
    UILabel__set_text(v46, (System_String_o *)Instance, 0LL);
  }
  v27 = (unsigned int)key;
  this->fields.currentEventId = key;
  v47 = *(_QWORD *)&randomMissionList->max_length;
  if ( v47 && (unsigned int)(-1431655765 * v47 + 715827882) <= 0x55555554 )
  {
    if ( !(_DWORD)v47 )
      goto LABEL_51;
    v48 = randomMissionList->m_Items[0];
    if ( v48 && v29 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v29, v27, v48->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_51;
      v50 = (EventMissionEntity_o *)Instance;
      v51 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v52 = randomMissionList->m_Items[0];
      v53 = (EventRandomMissionListViewItem_o *)sub_1B64314(EventRandomMissionListViewItem_TypeInfo, v27, v49);
      EventRandomMissionListViewItem___ctor(v53, v52, v50, 1, v54);
      if ( v51 )
      {
        v57 = v51->fields._items;
        v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v51->fields._version;
        if ( v57 )
        {
          v59 = v51->fields._size;
          if ( (unsigned int)v59 >= v57->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              (Il2CppObject *)v53,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &v57->obj.klass + v59;
            v51->fields._size = v59 + 1;
            v60[4] = (Il2CppClass *)v53;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v53, v55, v56);
          }
          goto LABEL_49;
        }
      }
    }
LABEL_50:
    sub_1B64324(Instance);
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

  if ( (byte_4A00317 & 1) == 0 )
  {
    sub_1B640C8(&EventRandomMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A00317 = 1;
  }
  result = (EventRandomMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRandomMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v8; // x1

  if ( (byte_4A00319 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v3);
    byte_4A00319 = 1;
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v8);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B64324(ObjectList);
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
  if ( (byte_4A00318 & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_1B640C8(&EventRandomMissionListViewObject_TypeInfo, obj);
    byte_4A00318 = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_1B64324(this);
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
  System_Collections_Generic_List_object__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v14; // w21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A0031A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v8);
    byte_4A0031A = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v10 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v15;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
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
    sub_1B64324(v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_17;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v10,
                                                                  v14,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v14 >= v10->fields._size )
        return;
    }
LABEL_17:
    sub_1B64324(ObjectList);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_45433072(
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
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v15; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w22
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_object__o *v20; // x23
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A0031B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&EventRandomMissionListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v10);
    byte_4A0031B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current
      || (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventRandomMissionListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_1B64324(v12);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v22.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewManager__get_ObjectList(this, v15);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v17 = itemList;
  if ( size > 0 )
  {
    v18 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v17,
                                                                v18,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
      if ( !itemList )
        break;
      v20 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventRandomMissionListViewObject__GetItem(
                                                                (EventRandomMissionListViewObject_o *)itemList,
                                                                v19);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v20->klass->vtable._9_unknown.method)(
          v20,
          this->fields.isInput,
          v20->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v18 >= v17->fields._size )
        return;
    }
LABEL_21:
    sub_1B64324(itemList);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  _QWORD *v21; // x8
  System_String_o *v22; // x21
  System_Reflection_MethodBase_o *v23; // x0
  Il2CppObject *Instance; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  CommonConfirmDialog_ClickDelegate_o *v27; // x23

  if ( (byte_4A0031C & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_1B640C8(&Method_EventRandomMissionListViewManager_ShowRejectDialog__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__, v8);
    sub_1B640C8(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_5672/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, v10);
    sub_1B640C8(&StringLiteral_5671/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v11);
    byte_4A0031C = 1;
  }
  v12 = sub_1B64314(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, item, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = item;
  v16 = v12 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)item, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5672/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5671/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v16 )
    goto LABEL_11;
  v20 = System_String__Format(v13, *(Il2CppObject **)(*(_QWORD *)v16 + 192LL), 0LL);
  v21 = Method_EventRandomMissionListViewManager_ShowRejectDialog__;
  v22 = v20;
  if ( (*((_BYTE *)Method_EventRandomMissionListViewManager_ShowRejectDialog__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1B640E0(Method_EventRandomMissionListViewManager_ShowRejectDialog__);
  v23 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v25, v26);
  CommonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_1B64324(v13);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v19,
    v22,
    0LL,
    0LL,
    v27,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A00315 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A00315 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                 (EventRandomMissionListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v12;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00314 & 1) == 0 )
  {
    sub_1B640C8(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___, method);
    byte_4A00314 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_2EB7894 *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
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
  if ( (byte_4A0031E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Remove__, result);
    this = (EventRandomMissionListViewManager_o *)sub_1B640C8(&StringLiteral_21968/*"ng"*/, v5);
    byte_4A0031E = 1;
  }
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &scroll, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.cancelItem,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v6),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_1B64324(this);
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

  if ( (byte_4A0031D & 1) == 0 )
  {
    sub_1B640C8(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__, *(_QWORD *)&missionId);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A0031D = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                NetworkManager_ResultCallbackFunc_TypeInfo,
                                                *(_QWORD *)&missionId,
                                                method);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  struct EventRandomMissionListViewItem_o *item; // x1
  EventRandomMissionListViewManager_o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4A00321 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A00321 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.cancelItem, (int32_t)item, v6, v7);
      Instance = (CommonUI_o *)this->fields.item;
      if ( Instance )
      {
        v10 = this->fields.__4__this;
        Instance = (CommonUI_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)Instance, 0LL);
        if ( v10 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v10, (int32_t)Instance, v11);
          return;
        }
      }
    }
LABEL_10:
    sub_1B64324(Instance);
  }
}