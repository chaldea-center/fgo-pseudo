void __fastcall EventPointActivityMaster___ctor(EventPointActivityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7B05 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__, method);
    byte_4BC7B05 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    272,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__);
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

  if ( (byte_4BC7B03 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC7B03 = 1;
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
                                         (const MethodInfo_324D130 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__);
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

  if ( (byte_4BC7B04 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__,
      entity);
    byte_4BC7B04 = 1;
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
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BC7B06 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventPointActivityEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_EventPointActivityEntity__TypeInfo, v9);
    byte_4BC7B06 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventPointActivityEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_EventPointActivityEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v11;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C1AE30(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventPointActivityEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v10,
                                             (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__);
}