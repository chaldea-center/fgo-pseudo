void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC60E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__, method);
    byte_49FC60E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    271,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_Dictionary_int__object__o *v26; // x20
  Il2CppObject *Instance; // x0
  EventUiReleaseMaster_o *v28; // x21
  int32_t v29; // w22
  EventUiEntity_o *v30; // x23
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_49FC611 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventUiReleaseMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v14);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_EventUiEntity___, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49FC611 = 1;
  }
  List = (System_Collections_Generic_List_object__o *)EventUiMaster__GetList(this, eventId, warId, mapId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)List,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v26 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo,
                                                                    v24,
                                                                    v25);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v26,
      (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    if ( !List )
      goto LABEL_22;
    if ( List->fields._size >= 1 )
    {
      v28 = (EventUiReleaseMaster_o *)Instance;
      v29 = 0;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     List,
                     v29,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Instance || !v26 )
          break;
        v30 = (EventUiEntity_o *)Instance;
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v26,
                                     (int32_t)Instance[1].klass,
                                     (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_13;
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v26,
                     v30->fields.id,
                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Instance )
          break;
        if ( SHIDWORD(Instance[1].klass) < v30->fields.priority )
        {
LABEL_13:
          if ( !v28 )
            break;
          Instance = (Il2CppObject *)EventUiReleaseMaster__IsOpen(v28, v30, v31);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v26,
              v30->fields.id,
              (Il2CppObject *)v30,
              (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v29 >= List->fields._size )
          goto LABEL_17;
      }
LABEL_22:
      sub_1B64324(Instance);
    }
LABEL_17:
    if ( !v26 )
      goto LABEL_22;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v26,
           (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v26,
                 (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      return (System_Collections_Generic_List_EventUiEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                                   (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_EventUiEntity___);
    }
    List = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                          v32,
                                                          v33);
    System_Collections_Generic_List_object____ctor(
      List,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__object__o *v27; // x21
  Il2CppObject *Master_object; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  Il2CppObject *Item; // x0
  int32_t v33; // w23
  EventUiEntity_o *v34; // x24
  const MethodInfo *v35; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x20
  _BOOL8 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_49FC612 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventUiReleaseMaster___, *(_QWORD *)&warId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity___ctor___75653320, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v22);
    sub_1B640C8(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v23);
    byte_49FC612 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  ListByWarId = (System_Collections_Generic_List_object__o *)EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo,
                                                                    v25,
                                                                    v26);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v27,
      (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v31 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                         v29,
                                                         v30);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    if ( ListByWarId->fields._size >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 ListByWarId,
                 v33,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item || !v27 )
          break;
        v34 = (EventUiEntity_o *)Item;
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 v27,
                                 (int32_t)Item[1].klass,
                                 (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_14;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v27,
                 v34->fields.id,
                 (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item[1].klass) < v34->fields.priority )
        {
LABEL_14:
          if ( !Master_object )
            break;
          Item = (Il2CppObject *)EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v34, v35);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v27,
              v34->fields.id,
              (Il2CppObject *)v34,
              (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v33 >= ListByWarId->fields._size )
          goto LABEL_18;
      }
LABEL_31:
      sub_1B64324(Item);
    }
LABEL_18:
    if ( !v27 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v27,
           (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v27,
                 (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                           v37,
                                                           v38);
      System_Collections_Generic_List_object____ctor_55234504(
        v39,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___75653320);
      if ( !v39 )
        goto LABEL_31;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        v39,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v49,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v40 )
          break;
        if ( !v31 )
          sub_1B64324(v40);
        current = v49.fields._current;
        items = v31->fields._items;
        v45 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1B64324(v40);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            current,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v47[4] = (Il2CppClass *)current;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)current, v41, v42);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v49,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v31;
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

  if ( (byte_49FC60C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_1B640C8(&EventUiEntity_TypeInfo, v7);
    byte_49FC60C = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventUiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_30D41FC *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v16; // w24
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FC60F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&EventUiEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v13);
    byte_49FC60F = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&warId);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1B64324(list);
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
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
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v19;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_ObjectModel_Collection_T__o *v15; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FC610 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&EventUiEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v9);
    byte_49FC610 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B64324(list);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v15 = list;
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
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v15;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v15, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
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
  int32_t v15; // w21
  const MethodInfo *v16; // x2
  bool IsDispEventUIForSpot; // w0

  if ( (byte_49FC613 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_EventUiEntity___, *(_QWORD *)&event_id);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v12);
    byte_49FC613 = 1;
  }
  DispList = EventUiMaster__GetDispList(this, event_id, war_id, map_id, *(const MethodInfo **)&spotId);
  Item = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)DispList,
                           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_EventUiEntity___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !DispList )
      goto LABEL_13;
    if ( DispList->fields._size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)DispList,
                 v15,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item )
          break;
        IsDispEventUIForSpot = EventUiEntity__IsDispEventUIForSpot((EventUiEntity_o *)Item, spotId, v16);
        if ( !IsDispEventUIForSpot && ++v15 < DispList->fields._size )
          continue;
        return IsDispEventUIForSpot;
      }
LABEL_13:
      sub_1B64324(Item);
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

  if ( (byte_49FC60D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__, entity);
    sub_1B640C8(&EventUiEntity_TypeInfo, v9);
    byte_49FC60D = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
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

  if ( (byte_49FC614 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&EventUiEntity_TypeInfo, v8);
    byte_49FC614 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1B64324(list);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v10,
                                  (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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