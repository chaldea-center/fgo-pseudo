void __fastcall EventTowerMaster___ctor(EventTowerMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1637B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__, method, v2);
    byte_4B1637B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_array *__fastcall EventTowerMaster__GetDatas(
        EventTowerMaster_o *this,
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
  struct EventTowerMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B1637C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventTowerEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventTowerEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTowerEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_EventTowerMaster___c__GetDatas_b__3_0__, v22, v23);
    sub_1BCA7E0(&EventTowerMaster___c_TypeInfo, v24, v25);
    byte_4B1637C = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTowerEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
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
        methodPtr_low = LOBYTE(EventTowerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventTowerEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventTowerEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v40 = Method_System_Collections_Generic_List_EventTowerEntity__Add__;
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
  list = EventTowerMaster___c_TypeInfo;
  if ( !EventTowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerMaster___c_TypeInfo, v27);
    list = EventTowerMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v27);
      list = EventTowerMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventTowerEntity__TypeInfo, v27, v30, v31);
    System_Comparison_object____ctor(v43, v44, Method_EventTowerMaster___c__GetDatas_b__3_0__, 0LL);
    static_fields = EventTowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v26 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
  return (EventTowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v26,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_o *__fastcall EventTowerMaster__GetEntity(
        EventTowerMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16379 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&towerId);
    byte_4B16379 = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&towerId);
  return (EventTowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerMaster__TryGetEntity(
        EventTowerMaster_o *this,
        EventTowerEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1637A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B1637A = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
}


void __fastcall EventTowerMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1637D & 1) == 0 )
  {
    sub_1BCA7E0(&EventTowerMaster___c_TypeInfo, v1, v2);
    byte_4B1637D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTowerMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTowerMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventTowerMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventTowerMaster___c___ctor(EventTowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerMaster___c___GetDatas_b__3_0(
        EventTowerMaster___c_o *this,
        EventTowerEntity_o *a,
        EventTowerEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.towerId - b->fields.towerId;
}