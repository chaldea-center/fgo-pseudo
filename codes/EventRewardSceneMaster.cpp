void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC655 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
    byte_4BDC655 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    189,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC653 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
    byte_4BDC653 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3260880 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  int v8; // w22
  int32_t v9; // w23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4BDC656 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_4BDC656 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = list;
    v9 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v9,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v17 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v6;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), v6, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C22094(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_19;
  if ( v5->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardSceneMaster__TryGetEntity(
        EventRewardSceneMaster_o *this,
        EventRewardSceneEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDC654 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
    byte_4BDC654 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t v8; // x1
  int64_t list; // x0
  int v10; // w23
  int32_t v11; // w24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4BDC657 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_4BDC657 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = list;
    v11 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v11,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
      if ( !list )
        break;
      v8 = list;
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 28) == eventType )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v19 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v8;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v8, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C22094(list, v8);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_20;
  if ( v7->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v7,
                                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}