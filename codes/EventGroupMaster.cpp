void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B122 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
    byte_4A5B122 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    293,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B123 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventGroupEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventGroupEntity__TypeInfo);
    byte_4A5B123 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B8880C(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(EventGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventGroupEntity_TypeInfo
        && LODWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          goto LABEL_17;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B120 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
    byte_4A5B120 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B124 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventGroupEntity_TypeInfo);
    byte_4A5B124 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v6,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(EventGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
        && *(EventGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == EventGroupEntity_TypeInfo
        && Item[5] == eventId )
      {
        return Item[4];
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_12;
  }
}


int32_t __fastcall EventGroupMaster__GetFirstOpenEventId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t EventGroupId; // w0
  const MethodInfo *v6; // x2
  void *EntitiesByGroupId; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  EventGroupMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v12; // x21
  struct EventGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5B125 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventGroupEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
    sub_1B885B0(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__);
    sub_1B885B0(&EventGroupMaster___c_TypeInfo);
    byte_4A5B125 = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, eventId, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v6);
    if ( !EntitiesByGroupId )
      goto LABEL_15;
    v9 = (System_Collections_Generic_List_object__o *)EntitiesByGroupId;
    if ( *((_DWORD *)EntitiesByGroupId + 6) )
    {
      v10 = EventGroupMaster___c_TypeInfo;
      if ( !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v10 = EventGroupMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v10->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = EventGroupMaster___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_object____ctor(_9__5_0, v12, Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, 0LL);
        static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
      }
      System_Collections_Generic_List_object___Sort_55571192(
        v9,
        _9__5_0,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      EntitiesByGroupId = System_Collections_Generic_List_object___get_Item(
                            v9,
                            0,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
      if ( EntitiesByGroupId )
        return *((_DWORD *)EntitiesByGroupId + 5);
LABEL_15:
      sub_1B8880C(EntitiesByGroupId, v8);
    }
  }
  return eventId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventGroupMaster__TryGetEntity(
        EventGroupMaster_o *this,
        EventGroupEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B121 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
    byte_4A5B121 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B126 & 1) == 0 )
  {
    sub_1B885B0(&EventGroupMaster___c_TypeInfo);
    byte_4A5B126 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventGroupMaster___c_TypeInfo->static_fields->__9 = (struct EventGroupMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventGroupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventGroupMaster___c___ctor(EventGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventGroupMaster___c___GetFirstOpenEventId_b__5_0(
        EventGroupMaster___c_o *this,
        EventGroupEntity_o *a,
        EventGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.eventId - b->fields.eventId;
}