void __fastcall EventCooltimeRewardMaster___ctor(EventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FDA7 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__, method);
    byte_4A6FDA7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    423,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *__fastcall EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  EventCooltimeRewardEntity_o *v12; // x23
  int32_t v13; // w24
  EventCooltimeRewardEntity_o *v14; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4A6FDAB & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&EventCooltimeRewardEntity_TypeInfo, v8);
    byte_4A6FDAB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = (EventCooltimeRewardEntity_o *)list;
      methodPtr_low = LOBYTE(EventCooltimeRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == spotId
        && EventCooltimeRewardEntity__IsOpen((EventCooltimeRewardEntity_o *)list, *(const MethodInfo **)&eventId) )
      {
        if ( v12 )
        {
          if ( v12->fields.lv < v14->fields.lv )
            v12 = v14;
        }
        else
        {
          v12 = v14;
        }
      }
      if ( v11 == ++v13 )
        return v12;
    }
LABEL_22:
    sub_1B9026C(list, *(_QWORD *)&eventId);
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

  if ( (byte_4A6FDA8 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4A6FDA8 = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (EventCooltimeRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_312C900 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x1
  void *list; // x0
  int v15; // w22
  int32_t v16; // w23
  unsigned int *v17; // x24
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4A6FDAA & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&EventCooltimeRewardEntity_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Sort__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4A6FDAA = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = (unsigned int *)list;
      methodPtr_low = LOBYTE(EventCooltimeRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventCooltimeRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v12 )
          break;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v12,
                         *((_DWORD *)list + 5),
                         (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v13 = v17[5];
          items = v12->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v13,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = v13;
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B9026C(list, v13);
  }
LABEL_18:
  if ( !v12 )
    goto LABEL_20;
  System_Collections_Generic_List_int___Sort(
    v12,
    (const MethodInfo_34F52E0 *)Method_System_Collections_Generic_List_int__Sort__);
  return v12;
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

  if ( (byte_4A6FDA9 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__,
      entity);
    byte_4A6FDA9 = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
}