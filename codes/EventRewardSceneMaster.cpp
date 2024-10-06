void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FF8A & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__, method);
    byte_4A6FF8A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    185,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A6FF88 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4A6FF88 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_312C900 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v15; // w22
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A6FF8B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&EventRewardSceneEntity_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v10);
    sub_1B90010(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v11);
    byte_4A6FF8B = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v13 = list;
      methodPtr_low = LOBYTE(EventRewardSceneEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)list,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v13, v17, v18);
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1B9026C(list, v13);
  }
LABEL_17:
  if ( !v12 )
    goto LABEL_21;
  if ( v12->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v12,
                                             (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
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

  if ( (byte_4A6FF89 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__, entity);
    byte_4A6FF89 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  System_Collections_ObjectModel_Collection_T__o *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v17; // w23
  int32_t v18; // w24
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A6FF8C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&EventRewardSceneEntity_TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v12);
    sub_1B90010(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v13);
    byte_4A6FF8C = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = list;
      methodPtr_low = LOBYTE(EventRewardSceneEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list[1].klass) == eventType )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v23 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v15;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v15, v19, v20);
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_18;
    }
LABEL_22:
    sub_1B9026C(list, v15);
  }
LABEL_18:
  if ( !v14 )
    goto LABEL_22;
  if ( v14->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v14,
                                             (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}