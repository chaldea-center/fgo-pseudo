void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB06E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__, method);
    byte_49BB06E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    277,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetDispList(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *List; // x19
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  EventUiReleaseMaster_o *v27; // x21
  int32_t v28; // w22
  EventUiEntity_o *v29; // x23
  const MethodInfo *v30; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_49BB071 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventUiReleaseMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v14);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v15);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v16);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_EventUiEntity___, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49BB071 = 1;
  }
  List = (System_Collections_Generic_List_object__o *)EventUiMaster__GetList(this, eventId, warId, mapId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)List,
         (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v24,
      (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    if ( !List )
      goto LABEL_22;
    if ( List->fields._size >= 1 )
    {
      v27 = (EventUiReleaseMaster_o *)Instance;
      v28 = 0;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     List,
                     v28,
                     (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Instance || !v24 )
          break;
        v29 = (EventUiEntity_o *)Instance;
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v24,
                                     (int32_t)Instance[1].klass,
                                     (const MethodInfo_31F7074 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_13;
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v24,
                     v29->fields.id,
                     (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Instance )
          break;
        if ( SHIDWORD(Instance[1].klass) < v29->fields.priority )
        {
LABEL_13:
          if ( !v27 )
            break;
          Instance = (Il2CppObject *)EventUiReleaseMaster__IsOpen(v27, v29, v30);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v24,
              v29->fields.id,
              (Il2CppObject *)v29,
              (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v28 >= List->fields._size )
          goto LABEL_17;
      }
LABEL_22:
      sub_1B4D1EC(Instance, v26);
    }
LABEL_17:
    if ( !v24 )
      goto LABEL_22;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v24,
           (const MethodInfo_31F6B30 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v24,
                 (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      return (System_Collections_Generic_List_EventUiEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                                   (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_EventUiEntity___);
    }
    List = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      List,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)List;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetDispListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *ListByWarId; // x20
  System_Collections_Generic_Dictionary_int__object__o *v25; // x21
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v27; // x19
  Il2CppObject *Item; // x0
  __int64 v29; // x1
  int32_t v30; // w23
  EventUiEntity_o *v31; // x24
  const MethodInfo *v32; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v34; // x20
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_49BB072 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventUiReleaseMaster___, *(_QWORD *)&warId);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v11);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity___ctor___75439544, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v22);
    sub_1B4CF90(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v23);
    byte_49BB072 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  ListByWarId = (System_Collections_Generic_List_object__o *)EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v25,
      (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v27 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    if ( ListByWarId->fields._size >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 ListByWarId,
                 v30,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item || !v25 )
          break;
        v31 = (EventUiEntity_o *)Item;
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 v25,
                                 (int32_t)Item[1].klass,
                                 (const MethodInfo_31F7074 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_14;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v25,
                 v31->fields.id,
                 (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item[1].klass) < v31->fields.priority )
        {
LABEL_14:
          if ( !Master_object )
            break;
          Item = (Il2CppObject *)EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v31, v32);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v25,
              v31->fields.id,
              (Il2CppObject *)v31,
              (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v30 >= ListByWarId->fields._size )
          goto LABEL_18;
      }
LABEL_31:
      sub_1B4D1EC(Item, v29);
    }
LABEL_18:
    if ( !v25 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v25,
           (const MethodInfo_31F6B30 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v25,
                 (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v34 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_56097488(
        v34,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___75439544);
      if ( !v34 )
        goto LABEL_31;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v34,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v45,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v35 )
          break;
        if ( !v27 )
          sub_1B4D1EC(v35, v36);
        current = v45.fields._current;
        items = v27->fields._items;
        v41 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v27->fields._version;
        if ( !items )
          sub_1B4D1EC(v35, current);
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            current,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v43[4] = (Il2CppClass *)current;
          sub_1B4CF34((CGThumbnailListItem_o *)(v43 + 4), (int32_t)current, v37, v38);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v45,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v27;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)ListByWarId;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__GetEntity(
        EventUiMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_49BB06C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_1B4CF90(&EventUiEntity_TypeInfo, v7);
    byte_49BB06C = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventUiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_31A2454 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetList(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x23
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v16; // w24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49BB06F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v12);
    byte_49BB06F = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1B4D1EC(list, v14);
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    if ( list )
    {
      v14 = list;
      if ( LODWORD(list[1].klass) == eventId
        && (SHIDWORD(list[2].fields.items) > 1 || HIDWORD(list[1].klass) == warId && LODWORD(list[1].monitor) == mapId) )
      {
        if ( !v13 )
          goto LABEL_19;
        items = v13->fields._items;
        v20 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v14;
          sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_49BB070 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__, *(_QWORD *)&warId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v8);
    byte_49BB070 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B4D1EC(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( HIDWORD(list[1].klass) == warId )
      {
        if ( !v9 )
          goto LABEL_15;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_15;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiMaster__IsDispEventUIForSpot(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventUiEntity__o *DispList; // x20
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  int32_t v16; // w21
  const MethodInfo *v17; // x2
  bool IsDispEventUIForSpot; // w0

  if ( (byte_49BB073 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_EventUiEntity___, *(_QWORD *)&event_id);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v12);
    byte_49BB073 = 1;
  }
  DispList = EventUiMaster__GetDispList(this, event_id, war_id, map_id, *(const MethodInfo **)&spotId);
  Item = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)DispList,
                           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_EventUiEntity___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !DispList )
      goto LABEL_13;
    if ( DispList->fields._size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)DispList,
                 v16,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item )
          break;
        IsDispEventUIForSpot = EventUiEntity__IsDispEventUIForSpot((EventUiEntity_o *)Item, spotId, v17);
        if ( !IsDispEventUIForSpot && ++v16 < DispList->fields._size )
          continue;
        return IsDispEventUIForSpot;
      }
LABEL_13:
      sub_1B4D1EC(Item, v15);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiMaster__TryGetEntity(
        EventUiMaster_o *this,
        EventUiEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_49BB06D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__, entity);
    sub_1B4CF90(&EventUiEntity_TypeInfo, v9);
    byte_49BB06D = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__getEntity(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w22
  EventUiEntity_o *result; // x0

  if ( (byte_49BB074 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__, v7);
    byte_49BB074 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1B4D1EC(list, *(_QWORD *)&eventId);
  v9 = 0;
  while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v9,
                                  (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventUiEntity__get_Item__);
    if ( result && result->fields.eventId == eventId && result->fields.priority == priority )
      return result;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_11;
  }
  return 0LL;
}