void __fastcall EventCooltimeRewardMaster___ctor(EventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD678 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__, method);
    byte_4BFD678 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    427,
    (const MethodInfo_327D914 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *__fastcall EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  EventCooltimeRewardEntity_o *v11; // x23
  int32_t v12; // w24
  EventCooltimeRewardEntity_o *v13; // x25

  if ( (byte_4BFD67C & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__, v7);
    byte_4BFD67C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v13 = (EventCooltimeRewardEntity_o *)list;
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == spotId
        && EventCooltimeRewardEntity__IsOpen((EventCooltimeRewardEntity_o *)list, *(const MethodInfo **)&eventId) )
      {
        if ( v11 )
        {
          if ( v11->fields.lv < v13->fields.lv )
            v11 = v13;
        }
        else
        {
          v11 = v13;
        }
      }
      if ( v10 == ++v12 )
        return v11;
    }
LABEL_20:
    sub_1C2E388(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *__fastcall EventCooltimeRewardMaster__GetEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BFD679 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BFD679 = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (EventCooltimeRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_327FC38 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventCooltimeRewardMaster__GetSpotIdListByEventId(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x21
  __int64 v12; // x1
  void *list; // x0
  int v14; // w22
  int32_t v15; // w23
  unsigned int *v16; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4BFD67B & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Sort__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BFD67B = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v15,
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v16 = (unsigned int *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v11 )
          break;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v11,
                         *((_DWORD *)list + 5),
                         (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v12 = v16[5];
          items = v11->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v12,
              *(const MethodInfo_364E888 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = v12;
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C2E388(list, v12);
  }
LABEL_16:
  if ( !v11 )
    goto LABEL_18;
  System_Collections_Generic_List_int___Sort(
    v11,
    (const MethodInfo_36501CC *)Method_System_Collections_Generic_List_int__Sort__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCooltimeRewardMaster__TryGetEntity(
        EventCooltimeRewardMaster_o *this,
        EventCooltimeRewardEntity_o **entity,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BFD67A & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__,
      entity);
    byte_4BFD67A = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
}