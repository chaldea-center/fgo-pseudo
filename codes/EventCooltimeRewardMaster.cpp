void __fastcall EventCooltimeRewardMaster___ctor(EventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B09C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
    byte_4A5B09C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    423,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *__fastcall EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B0A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventCooltimeRewardEntity_TypeInfo);
    byte_4A5B0A0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = (EventCooltimeRewardEntity_o *)list;
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
LABEL_22:
    sub_1B8880C(list, *(_QWORD *)&eventId);
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

  if ( (byte_4A5B09D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
    byte_4A5B09D = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (EventCooltimeRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall EventCooltimeRewardMaster__GetSpotIdListByEventId(
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
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4A5B09F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventCooltimeRewardEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B09F = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = (unsigned int *)list;
      methodPtr_low = LOBYTE(EventCooltimeRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventCooltimeRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          break;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v5,
                         *((_DWORD *)list + 5),
                         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v6 = v10[5];
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v6,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size + 1] = v6;
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B8880C(list, v6);
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  System_Collections_Generic_List_int___Sort(
    v5,
    (const MethodInfo_34E2154 *)Method_System_Collections_Generic_List_int__Sort__);
  return v5;
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

  if ( (byte_4A5B09E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
    byte_4A5B09E = 1;
  }
  PK = (Il2CppObject *)EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
}