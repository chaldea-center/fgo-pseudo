void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B7A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__, method);
    byte_4B66B7A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B66B7B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventGroupEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_EventGroupEntity__TypeInfo, v9);
    byte_4B66B7B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1BE4D28(list, v11);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v11 = (int64_t)list;
      methodPtr_low = LOBYTE(EventGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventGroupEntity_TypeInfo
        && LODWORD(list->fields.items) == groupId )
      {
        if ( !v10 )
          goto LABEL_17;
        items = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_EventGroupEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v11;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), v11, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66B78 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B66B78 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w21
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B66B7C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventGroupEntity_TypeInfo, v6);
    byte_4B66B7C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1BE4D28(list, *(_QWORD *)&eventId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v8,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    ++v8;
    if ( !list )
      goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetFirstOpenEventId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t EventGroupId; // w0
  const MethodInfo *v11; // x2
  void *EntitiesByGroupId; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  EventGroupMaster___c_c *v15; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v17; // x21
  struct EventGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v3 = eventId;
  if ( (byte_4B66B7D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventGroupEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__, v7);
    sub_1BE4ACC(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, v8);
    sub_1BE4ACC(&EventGroupMaster___c_TypeInfo, v9);
    byte_4B66B7D = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, v3, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v11);
    if ( !EntitiesByGroupId )
      goto LABEL_15;
    v14 = (System_Collections_Generic_List_object__o *)EntitiesByGroupId;
    if ( *((_DWORD *)EntitiesByGroupId + 6) )
    {
      v15 = EventGroupMaster___c_TypeInfo;
      if ( !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v15 = EventGroupMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v15->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = EventGroupMaster___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v15->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_object____ctor(_9__5_0, v17, Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, 0LL);
        static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      System_Collections_Generic_List_object___Sort_56548584(
        v14,
        _9__5_0,
        (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      EntitiesByGroupId = System_Collections_Generic_List_object___get_Item(
                            v14,
                            0,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
      if ( EntitiesByGroupId )
        return *((_DWORD *)EntitiesByGroupId + 5);
LABEL_15:
      sub_1BE4D28(EntitiesByGroupId, v13);
    }
  }
  return v3;
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

  if ( (byte_4B66B79 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__, entity);
    byte_4B66B79 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66B7E & 1) == 0 )
  {
    sub_1BE4ACC(&EventGroupMaster___c_TypeInfo, v1);
    byte_4B66B7E = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventGroupMaster___c_TypeInfo->static_fields->__9 = (struct EventGroupMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.eventId - b->fields.eventId;
}