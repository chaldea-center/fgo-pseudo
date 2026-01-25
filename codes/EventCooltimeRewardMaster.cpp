void EventCooltimeRewardMaster___ctor(EventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE5BA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
    byte_4CEE5BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    429,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  EventCooltimeRewardEntity_o *v10; // x23
  int32_t v11; // w24
  EventCooltimeRewardEntity_o *v12; // x25

  if ( (byte_4CEE5BE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__);
    byte_4CEE5BE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v12 = (EventCooltimeRewardEntity_o *)list;
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == spotId
        && EventCooltimeRewardEntity__IsOpen((EventCooltimeRewardEntity_o *)list, *(const MethodInfo **)&eventId) )
      {
        if ( v10 )
        {
          if ( v10->fields.lv < v12->fields.lv )
            v10 = v12;
        }
        else
        {
          v10 = v12;
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_20:
    sub_1C7BD40(list, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *EventCooltimeRewardMaster__GetEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE5BB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
    byte_4CEE5BB = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (EventCooltimeRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3432DB4 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *EventCooltimeRewardMaster__GetSpotIdListByEventId(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int v8; // w22
  int32_t v9; // w23
  unsigned int *v10; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4CEE5BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEE5BD = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v10 = (unsigned int *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          break;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v5,
                         *((_DWORD *)list + 5),
                         (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v6 = v10[5];
          items = v5->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v6,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = v6;
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C7BD40(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_18;
  System_Collections_Generic_List_int___Sort(
    v5,
    (const MethodInfo_382371C *)Method_System_Collections_Generic_List_int__Sort__);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool EventCooltimeRewardMaster__TryGetEntity(
        EventCooltimeRewardMaster_o *this,
        EventCooltimeRewardEntity_o **entity,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE5BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
    byte_4CEE5BC = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
}