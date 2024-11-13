void __fastcall EventPointActivityMaster___ctor(EventPointActivityMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16253 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__, method, v2);
    byte_4B16253 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    268,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__);
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

  if ( (byte_4B16251 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&groupId);
    byte_4B16251 = 1;
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
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__);
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

  if ( (byte_4B16252 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16252 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointActivityEntity_array *__fastcall EventPointActivityMaster__getEntityList(
        EventPointActivityMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16254 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventPointActivityEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointActivityEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointActivityEntity__TypeInfo, v16, v17);
    byte_4B16254 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointActivityEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = list;
    v22 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v22,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      methodPtr_low = LOBYTE(EventPointActivityEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventPointActivityEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventPointActivityEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v18 )
          break;
        items = v18->fields._items;
        v31 = Method_System_Collections_Generic_List_EventPointActivityEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v19, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, v19);
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_19;
  return (EventPointActivityEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v18,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__);
}