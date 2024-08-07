void __fastcall EventPointActivityMaster___ctor(EventPointActivityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB8D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__, method);
    byte_49FEB8D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    268,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointActivityEntity_o *__fastcall EventPointActivityMaster__GetEntity(
        EventPointActivityMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int32_t objectType,
        int32_t objectId,
        int64_t objectValue,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEB8B & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FEB8B = 1;
  }
  PK = (Il2CppObject *)EventPointActivityEntity__CreatePK(
                         eventId,
                         groupId,
                         objectType,
                         objectId,
                         objectValue,
                         (const MethodInfo *)objectValue);
  return (EventPointActivityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_30D6AF0 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointActivityMaster__TryGetEntity(
        EventPointActivityMaster_o *this,
        EventPointActivityEntity_o **entity,
        int32_t eventId,
        int32_t groupId,
        int32_t objectType,
        int32_t objectId,
        int64_t objectValue,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FEB8C & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__,
      entity);
    byte_49FEB8C = 1;
  }
  PK = (Il2CppObject *)EventPointActivityEntity__CreatePK(
                         eventId,
                         groupId,
                         objectType,
                         objectId,
                         objectValue,
                         *(const MethodInfo **)&objectId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointActivityEntity_array *__fastcall EventPointActivityMaster__getEntityList(
        EventPointActivityMaster_o *this,
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
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FEB8E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&EventPointActivityEntity_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPointActivityEntity__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_EventPointActivityEntity__TypeInfo, v10);
    byte_49FEB8E = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventPointActivityEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(EventPointActivityEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointActivityEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointActivityEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_EventPointActivityEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64C5C(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventPointActivityEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v11,
                                             (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__);
}