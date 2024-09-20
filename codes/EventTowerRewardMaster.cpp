void __fastcall EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
    byte_4A5B2F3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    235,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_o *__fastcall EventTowerRewardMaster__GetEntity(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B2F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
    byte_4A5B2F1 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5B2F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventTowerRewardEntity__TypeInfo);
    sub_1B885B0(&EventTowerRewardEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
    sub_1B885B0(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__);
    sub_1B885B0(&EventTowerRewardMaster___c_TypeInfo);
    byte_4A5B2F5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(EventTowerRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventTowerRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      v18,
      v19,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      0LL);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v18, v21, v22);
  }
  if ( !v5 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x20
  Il2CppObject *v21; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5B2F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventTowerRewardEntity__TypeInfo);
    sub_1B885B0(&EventTowerRewardEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
    sub_1B885B0(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__);
    sub_1B885B0(&EventTowerRewardMaster___c_TypeInfo);
    byte_4A5B2F4 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(EventTowerRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventTowerRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == towerId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v19[4] = v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v8, v13, v14);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1B8880C(list, v8);
  }
LABEL_18:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      v20,
      v21,
      Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__,
      0LL);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v20, v23, v24);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v20,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerRewardMaster__TryGetEntity(
        EventTowerRewardMaster_o *this,
        EventTowerRewardEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B2F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
    byte_4A5B2F2 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void __fastcall EventTowerRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B2F6 & 1) == 0 )
  {
    sub_1B885B0(&EventTowerRewardMaster___c_TypeInfo);
    byte_4A5B2F6 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventTowerRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTowerRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerRewardMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventTowerRewardMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventTowerRewardMaster___c___ctor(EventTowerRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardAllEntityList_b__4_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.floor - b->fields.floor;
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.floor - b->fields.floor;
}