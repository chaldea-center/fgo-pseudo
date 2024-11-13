void __fastcall EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16303 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__, method, v2);
    byte_4B16303 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    121,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16301 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    byte_4B16301 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList(
        EventRewardMaster_o *this,
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v30; // x2
  __int64 v31; // x3
  int32_t v32; // w22
  int32_t v33; // w23
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x20
  Il2CppObject *v44; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B16304 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventRewardEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventRewardEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, v22, v23);
    sub_1BCA7E0(&EventRewardMaster___c_TypeInfo, v24, v25);
    byte_4B16304 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRewardEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v27 = (int64_t)list;
        methodPtr_low = LOBYTE(EventRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v40 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v27, v30, v31, v34, v35, v36, v37);
          }
        }
      }
      if ( v32 == ++v33 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, v27);
  }
LABEL_17:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo, v27);
    list = EventRewardMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v27);
      list = EventRewardMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRewardEntity__TypeInfo, v27, v30, v31);
    System_Comparison_object____ctor(v43, v44, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v26 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v26,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList_39970580(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x19
  int64_t v28; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v31; // x2
  __int64 v32; // x3
  int32_t v33; // w23
  int32_t v34; // w24
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Comparison_T__o *v44; // x20
  Il2CppObject *v45; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B16305 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventRewardEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&EventRewardEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, v23, v24);
    sub_1BCA7E0(&EventRewardMaster___c_TypeInfo, v25, v26);
    byte_4B16305 = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRewardEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&groupId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v33 = Count;
    v34 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v34,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = (int64_t)list;
        methodPtr_low = LOBYTE(EventRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v27 )
            break;
          items = v27->fields._items;
          v41 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v27->fields._version;
          if ( !items )
            break;
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v28;
            sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v28, v31, v32, v35, v36, v37, v38);
          }
        }
      }
      if ( v33 == ++v34 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1BCAA3C(list, v28);
  }
LABEL_18:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo, v28);
    list = EventRewardMaster___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v28);
      list = EventRewardMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)list + 23);
    v44 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRewardEntity__TypeInfo, v28, v31, v32);
    System_Comparison_object____ctor(v44, v45, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)v44;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v44, v47, v48, v49, v50, v51, v52);
  }
  if ( !v27 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_56244000(
    v27,
    v44,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v27,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventRewardEntity_array *EventRewardEntitiyList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  EventRewardMaster___c_c *v17; // x8
  System_Object_array *v18; // x20
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v20; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  EventRewardEntity_o *result; // x0
  __int64 v29; // x1
  int max_length; // w8
  int v31; // w9

  if ( (byte_4B16306 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId, eventPoint);
    sub_1BCA7E0(&System_Comparison_EventRewardEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, v9, v10);
    sub_1BCA7E0(&EventRewardMaster___c_TypeInfo, v11, v12);
    byte_4B16306 = 1;
  }
  EventRewardEntitiyList = EventRewardMaster__GetEventRewardEntitiyList(this, eventId, (const MethodInfo *)eventPoint);
  v17 = EventRewardMaster___c_TypeInfo;
  v18 = (System_Object_array *)EventRewardEntitiyList;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo, v14);
    v17 = EventRewardMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v17->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v14);
      v17 = EventRewardMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRewardEntity__TypeInfo, v14, v15, v16);
    System_Comparison_object____ctor(_9__5_0, v20, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v22, v23, v24, v25, v26, v27);
  }
  System_Array__Sort_object__49153980(
    v18,
    _9__5_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v18 )
    goto LABEL_19;
  max_length = v18->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( max_length == v31 )
        sub_1BCAA44(result, v29);
      result = (EventRewardEntity_o *)v18->m_Items[v31];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v31 )
        return 0LL;
    }
LABEL_19:
    sub_1BCAA3C(result, v29);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity_39971628(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  EventRewardEntity_array *EventRewardEntitiyList_39970580; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  EventRewardMaster___c_c *v19; // x8
  System_Object_array *v20; // x20
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v22; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  EventRewardEntity_o *result; // x0
  __int64 v31; // x1
  int max_length; // w8
  int v33; // w9

  if ( (byte_4B16307 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&System_Comparison_EventRewardEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, v11, v12);
    sub_1BCA7E0(&EventRewardMaster___c_TypeInfo, v13, v14);
    byte_4B16307 = 1;
  }
  EventRewardEntitiyList_39970580 = EventRewardMaster__GetEventRewardEntitiyList_39970580(
                                      this,
                                      eventId,
                                      groupId,
                                      (const MethodInfo *)eventPoint);
  v19 = EventRewardMaster___c_TypeInfo;
  v20 = (System_Object_array *)EventRewardEntitiyList_39970580;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo, v16);
    v19 = EventRewardMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v19->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, v16);
      v19 = EventRewardMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRewardEntity__TypeInfo, v16, v17, v18);
    System_Comparison_object____ctor(_9__6_0, v22, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v24, v25, v26, v27, v28, v29);
  }
  System_Array__Sort_object__49153980(
    v20,
    _9__6_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v20 )
    goto LABEL_19;
  max_length = v20->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( max_length == v33 )
        sub_1BCAA44(result, v31);
      result = (EventRewardEntity_o *)v20->m_Items[v33];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v33 )
        return 0LL;
    }
LABEL_19:
    sub_1BCAA3C(result, v31);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardMaster__TryGetEntity(
        EventRewardMaster_o *this,
        EventRewardEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16302 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16302 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void __fastcall EventRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16308 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardMaster___c_TypeInfo, v1, v2);
    byte_4B16308 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventRewardMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRewardMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventRewardMaster___c___ctor(EventRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__3_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BCAA3C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BCAA3C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}