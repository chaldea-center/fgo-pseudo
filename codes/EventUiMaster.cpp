void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E13F & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__, method);
    byte_4A2E13F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    271,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
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

  if ( (byte_4A2E142 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventUiReleaseMaster___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v14);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v15);
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v16);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToList_EventUiEntity___, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v18);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v19);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v20);
    sub_1B761C0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v21);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4A2E142 = 1;
  }
  List = (System_Collections_Generic_List_object__o *)EventUiMaster__GetList(this, eventId, warId, mapId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)List,
         (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v24,
      (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
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
                     (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Instance || !v24 )
          break;
        v29 = (EventUiEntity_o *)Instance;
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v24,
                                     (int32_t)Instance[1].klass,
                                     (const MethodInfo_314FA68 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_13;
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v24,
                     v29->fields.id,
                     (const MethodInfo_314F7D4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
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
              (const MethodInfo_314F860 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v28 >= List->fields._size )
          goto LABEL_17;
      }
LABEL_22:
      sub_1B7641C(Instance, v26);
    }
LABEL_17:
    if ( !v24 )
      goto LABEL_22;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v24,
           (const MethodInfo_314F524 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v24,
                 (const MethodInfo_314F684 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      return (System_Collections_Generic_List_EventUiEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                                   (const MethodInfo_2E9EAFC *)Method_System_Linq_Enumerable_ToList_EventUiEntity___);
    }
    List = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      List,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
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
  int32_t v38; // w3
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A2E143 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_EventUiReleaseMaster___, *(_QWORD *)&warId);
    sub_1B761C0(&DataManager_TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v11);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v12);
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v15);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v16);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v18);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity___ctor___75850488, v19);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v20);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v21);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v22);
    sub_1B761C0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v23);
    byte_4A2E143 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  ListByWarId = (System_Collections_Generic_List_object__o *)EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v25,
      (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v27 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
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
                 (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item || !v25 )
          break;
        v31 = (EventUiEntity_o *)Item;
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 v25,
                                 (int32_t)Item[1].klass,
                                 (const MethodInfo_314FA68 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_14;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v25,
                 v31->fields.id,
                 (const MethodInfo_314F7D4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
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
              (const MethodInfo_314F860 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v30 >= ListByWarId->fields._size )
          goto LABEL_18;
      }
LABEL_31:
      sub_1B7641C(Item, v29);
    }
LABEL_18:
    if ( !v25 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v25,
           (const MethodInfo_314F524 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v25,
                 (const MethodInfo_314F684 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v34 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_55406280(
        v34,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_34D6EC8 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___75850488);
      if ( !v34 )
        goto LABEL_31;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v34,
        (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v45,
                (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v35 )
          break;
        if ( !v27 )
          sub_1B7641C(v35, v36);
        current = v45.fields._current;
        items = v27->fields._items;
        v41 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v27->fields._version;
        if ( !items )
          sub_1B7641C(v35, current);
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            current,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v43[4] = (Il2CppClass *)current;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)current, v37, v38);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v45,
        (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
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

  if ( (byte_4A2E13D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_1B761C0(&EventUiEntity_TypeInfo, v7);
    byte_4A2E13D = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventUiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_30FFAD8 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
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
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_ObjectModel_Collection_T__o *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A2E140 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B761C0(&EventUiEntity_TypeInfo, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v13);
    byte_4A2E140 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1B7641C(list, v15);
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v17,
                                                               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v15 = list;
      methodPtr_low = LOBYTE(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventUiEntity_TypeInfo
        && LODWORD(list[1].klass) == eventId
        && (SHIDWORD(list[2].fields.items) > 1 || HIDWORD(list[1].klass) == warId && LODWORD(list[1].monitor) == mapId) )
      {
        if ( !v14 )
          goto LABEL_21;
        items = v14->fields._items;
        v22 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v15;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v15, v18, v19);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v14;
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A2E141 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&EventUiEntity_TypeInfo, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v9);
    byte_4A2E141 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B7641C(list, v11);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v11 = list;
      methodPtr_low = LOBYTE(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventUiEntity_TypeInfo
        && HIDWORD(list[1].klass) == warId )
      {
        if ( !v10 )
          goto LABEL_17;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v11;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v10;
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

  if ( (byte_4A2E144 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_EventUiEntity___, *(_QWORD *)&event_id);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v12);
    byte_4A2E144 = 1;
  }
  DispList = EventUiMaster__GetDispList(this, event_id, war_id, map_id, *(const MethodInfo **)&spotId);
  Item = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)DispList,
                           (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_EventUiEntity___);
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
                 (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item )
          break;
        IsDispEventUIForSpot = EventUiEntity__IsDispEventUIForSpot((EventUiEntity_o *)Item, spotId, v17);
        if ( !IsDispEventUIForSpot && ++v16 < DispList->fields._size )
          continue;
        return IsDispEventUIForSpot;
      }
LABEL_13:
      sub_1B7641C(Item, v15);
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

  if ( (byte_4A2E13E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__, entity);
    sub_1B761C0(&EventUiEntity_TypeInfo, v9);
    byte_4A2E13E = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__getEntity(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  EventUiEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A2E145 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B761C0(&EventUiEntity_TypeInfo, v8);
    byte_4A2E145 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1B7641C(list, *(_QWORD *)&eventId);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v10,
                                  (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventUiEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventUiEntity_TypeInfo
        && result->fields.eventId == eventId
        && result->fields.priority == priority )
      {
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_13;
  }
  return 0LL;
}