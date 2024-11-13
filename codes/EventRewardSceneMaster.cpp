void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1630E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__, method, v2);
    byte_4B1630E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    185,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1630C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    byte_4B1630C = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  int64_t v21; // x1
  int64_t list; // x0
  int v23; // w22
  int32_t v24; // w23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4B1630F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventRewardSceneEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v18, v19);
    byte_4B1630F = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = list;
    v24 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = list;
      methodPtr_low = LOBYTE(EventRewardSceneEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventRewardSceneEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v20 )
          break;
        items = v20->fields._items;
        v33 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v21;
          sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), v21, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1BCAA3C(list, v21);
  }
LABEL_17:
  if ( !v20 )
    goto LABEL_21;
  if ( v20->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v20,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
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

  if ( (byte_4B1630D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B1630D = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  int64_t v22; // x1
  int64_t list; // x0
  int v24; // w23
  int32_t v25; // w24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B16310 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&eventType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventRewardSceneEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v19, v20);
    byte_4B16310 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&eventType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = list;
    v25 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v25,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v22 = list;
      methodPtr_low = LOBYTE(EventRewardSceneEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventRewardSceneEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 28) == eventType )
      {
        if ( !v21 )
          break;
        items = v21->fields._items;
        v34 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v22;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v22, v26, v27, v28, v29, v30, v31);
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_18;
    }
LABEL_22:
    sub_1BCAA3C(list, v22);
  }
LABEL_18:
  if ( !v21 )
    goto LABEL_22;
  if ( v21->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v21,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}