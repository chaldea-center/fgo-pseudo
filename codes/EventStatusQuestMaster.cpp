void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16363 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__, method, v2);
    byte_4B16363 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusQuestEntity_o *__fastcall EventStatusQuestMaster__GetEntity(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16361 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&statusId);
    byte_4B16361 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(
                         eventId,
                         statusId,
                         priority,
                         questId,
                         *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
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
  System_Collections_Generic_List_object__o *v25; // x19
  int64_t v26; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v29; // x2
  __int64 v30; // x3
  int32_t v31; // w23
  int32_t v32; // w24
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Comparison_T__o *v42; // x20
  Il2CppObject *v43; // x21
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B16364 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&statusId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventStatusQuestEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&EventStatusQuestEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v21, v22);
    sub_1BCA7E0(&EventStatusQuestMaster___c_TypeInfo, v23, v24);
    byte_4B16364 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&statusId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v32,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v26 = (int64_t)list;
        methodPtr_low = LOBYTE(EventStatusQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventStatusQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventStatusQuestEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v25 )
            break;
          items = v25->fields._items;
          v39 = Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            break;
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v26;
            sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v26, v29, v30, v33, v34, v35, v36);
          }
        }
      }
      if ( v31 == ++v32 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1BCAA3C(list, v26);
  }
LABEL_18:
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo, v26);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v26);
      list = EventStatusQuestMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)list + 23);
    v42 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventStatusQuestEntity__TypeInfo, v26, v29, v30);
    System_Comparison_object____ctor(v42, v43, Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)v42;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !v25 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_56244000(
    v25,
    v42,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v25;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventStatusQuestMaster__TryGetEntity(
        EventStatusQuestMaster_o *this,
        EventStatusQuestEntity_o **entity,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16362 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16362 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(
                         eventId,
                         statusId,
                         priority,
                         questId,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_int__o *v37; // x19
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  EventStatusQuestMaster___c_c *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x21
  System_Predicate_object__o *_9__4_0; // x22
  Il2CppObject *v46; // x23
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x0
  const MethodInfo *v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Predicate_object__o *v58; // x22
  _BOOL8 v59; // x0
  __int64 v60; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B16365 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&statusId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Predicate_EventStatusQuestEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v25, v26);
    sub_1BCA7E0(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v27, v28);
    sub_1BCA7E0(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&EventStatusQuestMaster___c_TypeInfo, v31, v32);
    byte_4B16365 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v33 = sub_1BCAA2C(
          EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&statusId,
          method);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v34,
                                                    v35,
                                                    v36);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v38);
  v43 = EventStatusQuestMaster___c_TypeInfo;
  v44 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo, v40);
    v43 = EventStatusQuestMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_object__o *)v43->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43, v40);
      v43 = EventStatusQuestMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__4_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_EventStatusQuestEntity__TypeInfo,
                                              v40,
                                              v41,
                                              v42);
    System_Predicate_object____ctor(_9__4_0, v46, Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v48, v49, v50, v51, v52, v53);
  }
  if ( !v44 )
    goto LABEL_26;
  v54 = System_Collections_Generic_List_object___Find(
          v44,
          (System_Predicate_T__o *)_9__4_0,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v54 )
    return v37;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              (EventStatusQuestEntity_o *)v54,
                                                                              v55);
  if ( !v33 )
LABEL_26:
    sub_1BCAA3C(EntityList, v40);
  *(_DWORD *)(v33 + 16) = (_DWORD)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v58 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_EventStatusQuestEntity__TypeInfo, v40, v56, v57);
    System_Predicate_object____ctor(
      v58,
      (Il2CppObject *)v33,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      v44,
      (System_Predicate_T__o *)v58,
      (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v66,
      v44,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    v67 = v66;
    while ( 1 )
    {
      v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v67,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v59 )
        break;
      if ( !v67.fields._current )
        sub_1BCAA3C(v59, v60);
      if ( !v37 )
        sub_1BCAA3C(v59, v60);
      monitor_high = HIDWORD(v67.fields._current[1].monitor);
      items = v37->fields._items;
      v63 = Method_System_Collections_Generic_List_int__Add__;
      ++v37->fields._version;
      if ( !items )
        sub_1BCAA3C(v59, monitor_high);
      size = v37->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v37,
          monitor_high,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v37->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v67,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v37;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16366 & 1) == 0 )
  {
    sub_1BCA7E0(&EventStatusQuestMaster___c_TypeInfo, v1, v2);
    byte_4B16366 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventStatusQuestMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventStatusQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventStatusQuestMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventStatusQuestMaster___c___ctor(EventStatusQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventStatusQuestMaster___c___GetEntityList_b__3_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        EventStatusQuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (EventStatusQuestMaster___c_o *)EventStatusQuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1BCAA3C(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, (const MethodInfo *)a);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B16367 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, a, method);
    byte_4B16367 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !Instance )
    sub_1BCAA3C(Instance, v5);
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, a->fields.questId, 0LL);
}


void __fastcall EventStatusQuestMaster___c__DisplayClass4_0___ctor(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventStatusQuestMaster___c__DisplayClass4_0___getMismatchQuestList_b__1(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}