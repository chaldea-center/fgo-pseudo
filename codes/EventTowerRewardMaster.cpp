void __fastcall EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C220E5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__, method);
    byte_4C220E5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    241,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
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

  if ( (byte_4C220E3 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C220E3 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_329F900 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  int64_t v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4C220E7 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__, v5);
    sub_1C3B764(&System_Comparison_EventTowerRewardEntity__TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v11);
    sub_1C3B764(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__, v12);
    sub_1C3B764(&EventTowerRewardMaster___c_TypeInfo, v13);
    byte_4C220E7 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v15 = (int64_t)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v27 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v15;
          sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 4), v15, v20, v21, v22, v23, v24, v25);
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C3B9C0(list, v15);
  }
LABEL_15:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      v30,
      v31,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      0LL);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v30;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v30, v33, v34, v35, v36, v37, v38);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57202480(
    v14,
    v30,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v14,
                                           (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  int64_t v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x20
  Il2CppObject *v33; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4C220E6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__, v7);
    sub_1C3B764(&System_Comparison_EventTowerRewardEntity__TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v13);
    sub_1C3B764(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__, v14);
    sub_1C3B764(&EventTowerRewardMaster___c_TypeInfo, v15);
    byte_4C220E6 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v17 = (int64_t)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == towerId )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v29 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v17;
          sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 4), v17, v22, v23, v24, v25, v26, v27);
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C3B9C0(list, v17);
  }
LABEL_16:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)list + 23);
    v32 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      v32,
      v33,
      Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__,
      0LL);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v32;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v32, v35, v36, v37, v38, v39, v40);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_57202480(
    v16,
    v32,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v16,
                                           (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
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

  if ( (byte_4C220E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__, entity);
    byte_4C220E4 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void __fastcall EventTowerRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C220E8 & 1) == 0 )
  {
    sub_1C3B764(&EventTowerRewardMaster___c_TypeInfo, v1);
    byte_4C220E8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventTowerRewardMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTowerRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerRewardMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventTowerRewardMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
  return a->fields.floor - b->fields.floor;
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C3B9C0(this, a);
  return a->fields.floor - b->fields.floor;
}