void EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C274E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
    byte_4C274E6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    277,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
}


System_Collections_Generic_List_EventUiEntity__o *EventUiMaster__GetDispList(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *List; // x19
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  EventUiReleaseMaster_o *v13; // x21
  int32_t v14; // w22
  EventUiEntity_o *v15; // x23
  const MethodInfo *v16; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4C274E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_EventUiEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_EventUiEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C274E9 = 1;
  }
  List = (System_Collections_Generic_List_object__o *)EventUiMaster__GetList(this, eventId, warId, mapId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)List,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v10,
      (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    if ( !List )
      goto LABEL_22;
    if ( List->fields._size >= 1 )
    {
      v13 = (EventUiReleaseMaster_o *)Instance;
      v14 = 0;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     List,
                     v14,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Instance || !v10 )
          break;
        v15 = (EventUiEntity_o *)Instance;
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v10,
                                     (int32_t)Instance[1].klass,
                                     (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_13;
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v10,
                     v15->fields.id,
                     (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Instance )
          break;
        if ( SHIDWORD(Instance[1].klass) < v15->fields.priority )
        {
LABEL_13:
          if ( !v13 )
            break;
          Instance = (Il2CppObject *)EventUiReleaseMaster__IsOpen(v13, v15, v16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v10,
              v15->fields.id,
              (Il2CppObject *)v15,
              (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v14 >= List->fields._size )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C2D6EC(Instance, v12);
    }
LABEL_17:
    if ( !v10 )
      goto LABEL_22;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v10,
           (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v10,
                 (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      return (System_Collections_Generic_List_EventUiEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                                   (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_EventUiEntity___);
    }
    List = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      List,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)List;
}


System_Collections_Generic_List_EventUiEntity__o *EventUiMaster__GetDispListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ListByWarId; // x20
  System_Collections_Generic_Dictionary_int__object__o *v6; // x21
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v8; // x19
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  int32_t v11; // w23
  EventUiEntity_o *v12; // x24
  const MethodInfo *v13; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C274EA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_EventUiEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity___ctor___77940712);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    byte_4C274EA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  ListByWarId = (System_Collections_Generic_List_object__o *)EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v6,
      (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    if ( ListByWarId->fields._size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 ListByWarId,
                 v11,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item || !v6 )
          break;
        v12 = (EventUiEntity_o *)Item;
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 v6,
                                 (int32_t)Item[1].klass,
                                 (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_14;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v6,
                 v12->fields.id,
                 (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item[1].klass) < v12->fields.priority )
        {
LABEL_14:
          if ( !Master_object )
            break;
          Item = (Il2CppObject *)EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v12, v13);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v6,
              v12->fields.id,
              (Il2CppObject *)v12,
              (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v11 >= ListByWarId->fields._size )
          goto LABEL_18;
      }
LABEL_31:
      sub_1C2D6EC(Item, v10);
    }
LABEL_18:
    if ( !v6 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v6,
           (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v6,
                 (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_58233976(
        v15,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___77940712);
      if ( !v15 )
        goto LABEL_31;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        v15,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v26,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v16 )
          break;
        if ( !v8 )
          sub_1C2D6EC(v16, v17);
        current = v26.fields._current;
        items = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C2D6EC(v16, current);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            current,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v24[4] = (Il2CppClass *)current;
          sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)current, v18, v19);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v8;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)ListByWarId;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *EventUiMaster__GetEntity(
        EventUiMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C274E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
    sub_1C2D490(&EventUiEntity_TypeInfo);
    byte_4C274E4 = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventUiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_338C850 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventUiEntity__o *EventUiMaster__GetList(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C274E7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    byte_4C274E7 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C2D6EC(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( LODWORD(list[1].klass) == eventId
        && (SHIDWORD(list[2].fields.items) > 1 || HIDWORD(list[1].klass) == warId && LODWORD(list[1].monitor) == mapId) )
      {
        if ( !v9 )
          goto LABEL_19;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v9;
}


System_Collections_Generic_List_EventUiEntity__o *EventUiMaster__GetListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C274E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    byte_4C274E8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1C2D6EC(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list[1].klass) == warId )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v6;
          sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v5;
}


bool EventUiMaster__HasEntity(EventUiMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C274ED & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_EventUiEntity____78033808);
    sub_1C2D490(&System_Func_EventUiEntity__bool__TypeInfo);
    sub_1C2D490(&Method_EventUiMaster___c__DisplayClass9_0__HasEntity_b__0__);
    sub_1C2D490(&EventUiMaster___c__DisplayClass9_0_TypeInfo);
    byte_4C274ED = 1;
  }
  v5 = sub_1C2D6DC(EventUiMaster___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = eventId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventUiEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventUiMaster___c__DisplayClass9_0__HasEntity_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51233692(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_30DC39C *)Method_System_Linq_Enumerable_Any_EventUiEntity____78033808);
}


// local variable allocation has failed, the output may be wrong!
bool EventUiMaster__IsDispEventUIForSpot(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventUiEntity__o *DispList; // x20
  Il2CppObject *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  const MethodInfo *v15; // x2
  bool IsDispEventUIForSpot; // w0

  if ( (byte_4C274EB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_EventUiEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
    byte_4C274EB = 1;
  }
  DispList = EventUiMaster__GetDispList(this, event_id, war_id, map_id, *(const MethodInfo **)&spotId);
  Item = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)DispList,
                           (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_EventUiEntity___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !DispList )
      goto LABEL_13;
    if ( DispList->fields._size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)DispList,
                 v14,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item )
          break;
        IsDispEventUIForSpot = EventUiEntity__IsDispEventUIForSpot((EventUiEntity_o *)Item, spotId, v15);
        if ( !IsDispEventUIForSpot && ++v14 < DispList->fields._size )
          continue;
        return IsDispEventUIForSpot;
      }
LABEL_13:
      sub_1C2D6EC(Item, v13);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool EventUiMaster__TryGetEntity(
        EventUiMaster_o *this,
        EventUiEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C274E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
    sub_1C2D490(&EventUiEntity_TypeInfo);
    byte_4C274E5 = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *EventUiMaster__getEntity(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  EventUiEntity_o *result; // x0

  if ( (byte_4C274EC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    byte_4C274EC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v8,
                                  (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    if ( result && result->fields.eventId == eventId && result->fields.priority == priority )
      return result;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_11;
  }
  return 0;
}


void EventUiMaster___c__DisplayClass9_0___ctor(EventUiMaster___c__DisplayClass9_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventUiMaster___c__DisplayClass9_0___HasEntity_b__0(
        EventUiMaster___c__DisplayClass9_0_o *this,
        EventUiEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.eventId == this->fields.eventId;
}