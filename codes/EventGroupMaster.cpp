void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC4FA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
    byte_4BDC4FA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDC4FB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventGroupEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventGroupEntity__TypeInfo);
    byte_4BDC4FB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1C22094(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    if ( list )
    {
      v6 = (int64_t)list;
      if ( LODWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_EventGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
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

  if ( (byte_4BDC4F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
    byte_4BDC4F8 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3260880 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x0

  if ( (byte_4BDC4FC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    byte_4BDC4FC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1C22094(list, *(_QWORD *)&eventId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_10;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v6,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    if ( Item )
    {
      if ( HIDWORD(Item[1].klass) == eventId )
        return (int32_t)Item[1].klass;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_10;
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDC4FD & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventGroupEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
    sub_1C21E38(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__);
    sub_1C21E38(&EventGroupMaster___c_TypeInfo);
    byte_4BDC4FD = 1;
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
        _9__5_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_object____ctor(_9__5_0, v12, Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, 0LL);
        static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      System_Collections_Generic_List_object___Sort_56953720(
        v9,
        _9__5_0,
        (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      EntitiesByGroupId = System_Collections_Generic_List_object___get_Item(
                            v9,
                            0,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
      if ( EntitiesByGroupId )
        return *((_DWORD *)EntitiesByGroupId + 5);
LABEL_15:
      sub_1C22094(EntitiesByGroupId, v8);
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

  if ( (byte_4BDC4F9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
    byte_4BDC4F9 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC4FE & 1) == 0 )
  {
    sub_1C21E38(&EventGroupMaster___c_TypeInfo);
    byte_4BDC4FE = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventGroupMaster___c_TypeInfo->static_fields->__9 = (struct EventGroupMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return a->fields.eventId - b->fields.eventId;
}