void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B27F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
    byte_4A5B27F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    185,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B27D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
    byte_4A5B27D = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B280 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRewardSceneEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_4A5B280 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(EventRewardSceneEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_21;
  if ( v5->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
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

  if ( (byte_4A5B27E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
    byte_4A5B27E = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5B281 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRewardSceneEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_4A5B281 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = list;
      methodPtr_low = LOBYTE(EventRewardSceneEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardSceneEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardSceneEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list[1].klass) == eventType )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v8, v12, v13);
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_18;
    }
LABEL_22:
    sub_1B8880C(list, v8);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_22;
  if ( v7->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v7,
                                             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}