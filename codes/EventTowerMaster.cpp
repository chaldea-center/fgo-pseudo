void __fastcall EventTowerMaster___ctor(EventTowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAFF1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__, method);
    byte_49BAFF1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    240,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_array *__fastcall EventTowerMaster__GetDatas(
        EventTowerMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct EventTowerMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_49BAFF2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventTowerEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTowerEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTowerEntity__Sort__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTowerEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTowerEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventTowerEntity__TypeInfo, v11);
    sub_1B4CF90(&Method_EventTowerMaster___c__GetDatas_b__3_0__, v12);
    sub_1B4CF90(&EventTowerMaster___c_TypeInfo, v13);
    byte_49BAFF2 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventTowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_EventTowerEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v25[4] = v15;
            sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v20, v21);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1B4D1EC(list, v15);
  }
LABEL_15:
  list = EventTowerMaster___c_TypeInfo;
  if ( !EventTowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerMaster___c_TypeInfo);
    list = EventTowerMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventTowerEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_EventTowerMaster___c__GetDatas_b__3_0__, 0LL);
    static_fields = EventTowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerEntity__o *)v26;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v26, v29, v30);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56106144(
    v14,
    v26,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
  return (EventTowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v14,
                                     (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_o *__fastcall EventTowerMaster__GetEntity(
        EventTowerMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BAFEF & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_49BAFEF = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&towerId);
  return (EventTowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31A2454 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerMaster__TryGetEntity(
        EventTowerMaster_o *this,
        EventTowerEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BAFF0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__, entity);
    byte_49BAFF0 = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
}


void __fastcall EventTowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BAFF3 & 1) == 0 )
  {
    sub_1B4CF90(&EventTowerMaster___c_TypeInfo, v1);
    byte_49BAFF3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventTowerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTowerMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventTowerMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventTowerMaster___c___ctor(EventTowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerMaster___c___GetDatas_b__3_0(
        EventTowerMaster___c_o *this,
        EventTowerEntity_o *a,
        EventTowerEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.towerId - b->fields.towerId;
}