void __fastcall EventConquestRewardMaster___ctor(EventConquestRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE43F & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string___ctor__, method);
    byte_49FE43F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    274,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventConquestRewardEntity_o *__fastcall EventConquestRewardMaster__GetEntity(
        EventConquestRewardMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE43D & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FE43D = 1;
  }
  PK = (Il2CppObject *)EventConquestRewardEntity__CreatePK(
                         eventId,
                         questId,
                         objectType,
                         objectId,
                         *(const MethodInfo **)&objectId);
  return (EventConquestRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_30D64D8 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventConquestRewardMaster__TryGetEntity(
        EventConquestRewardMaster_o *this,
        EventConquestRewardEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE43E & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__TryGetEntity__,
      entity);
    byte_49FE43E = 1;
  }
  PK = (Il2CppObject *)EventConquestRewardEntity__CreatePK(
                         eventId,
                         questId,
                         objectType,
                         objectId,
                         *(const MethodInfo **)&objectType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EventConquestRewardMaster__EventConquestRewardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventConquestRewardEntity_array *__fastcall EventConquestRewardMaster__getList(
        EventConquestRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FE440 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&EventConquestRewardEntity_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_EventConquestRewardEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventConquestRewardEntity__ToArray__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventConquestRewardEntity___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_EventConquestRewardEntity__TypeInfo, v10);
    byte_49FE440 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventConquestRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventConquestRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(EventConquestRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventConquestRewardEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventConquestRewardEntity_TypeInfo
        && LODWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_EventConquestRewardEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B64ACC(list, v12);
  return (EventConquestRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v11,
                                              (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_EventConquestRewardEntity__ToArray__);
}