void __fastcall EventMissionGroupMaster___ctor(EventMissionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B19C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__);
    byte_4A5B19C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    452,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__);
}


EventMissionGroupEntity_o *__fastcall EventMissionGroupMaster__GetEntity(
        EventMissionGroupMaster_o *this,
        int32_t id,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B19D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__);
    byte_4A5B19D = 1;
  }
  PK = (Il2CppObject *)EventMissionGroupEntity__CreatePK(id, missionId, 0LL);
  return (EventMissionGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventMissionGroupEntity__o *__fastcall EventMissionGroupMaster__GetEntityList(
        EventMissionGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B19A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionGroupEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo);
    byte_4A5B19A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(EventMissionGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventMissionGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionGroupEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v5;
    }
LABEL_18:
    sub_1B8880C(list, v6);
  }
  return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionGroupMaster__GetTargetGroupId(
        EventMissionGroupMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B19B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionGroupEntity_TypeInfo);
    byte_4A5B19B = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_14:
    sub_1B8880C(list, *(_QWORD *)&missionId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return -1;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_14;
    methodPtr_low = LOBYTE(EventMissionGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventMissionGroupEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( *((_DWORD *)list + 5) == missionId )
      return *((_DWORD *)list + 4);
    if ( v7 == ++v8 )
      return -1;
  }
}


bool __fastcall EventMissionGroupMaster__TryGetEntity(
        EventMissionGroupMaster_o *this,
        EventMissionGroupEntity_o **entity,
        int32_t id,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B19E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__);
    byte_4A5B19E = 1;
  }
  PK = (Il2CppObject *)EventMissionGroupEntity__CreatePK(id, missionId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__);
}