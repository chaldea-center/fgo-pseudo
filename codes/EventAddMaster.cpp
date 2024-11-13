void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16095 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__, method, v2);
    byte_4B16095 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    202,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__GetEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16093 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&overwriteType);
    byte_4B16093 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31B3198 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventAddMaster__TryGetEntity(
        EventAddMaster_o *this,
        EventAddEntity_o **entity,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16094 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16094 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
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
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x1
  void *list; // x0
  int64_t v34; // x2
  __int64 v35; // x3
  int v36; // w23
  int32_t v37; // w24
  Il2CppObject *v38; // x25
  __int64 methodPtr_low; // x10
  int32_t v40; // w26
  int32_t v41; // w27
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  EventAddMaster___c_c *v50; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v52; // x21
  struct EventAddMaster___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B16096 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&overwriteType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventAddEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventAddEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventAddEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventAddEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventAddEntity___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_EventAddEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, v27, v28);
    sub_1BCA7E0(&EventAddMaster___c_TypeInfo, v29, v30);
    byte_4B16096 = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventAddEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&overwriteType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v36 = (int)list;
    v37 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v37,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v38 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventAddEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v41 = *((_DWORD *)list + 10);
        v40 = *((_DWORD *)list + 11);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
        list = (void *)CondType__IsOpen(v41, v40, 0LL, 0, 0LL, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v31 )
            break;
          items = v31->fields._items;
          v47 = Method_System_Collections_Generic_List_EventAddEntity__Add__;
          ++v31->fields._version;
          if ( !items )
            break;
          size = v31->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              v38,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v31->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v38;
            sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v38, v34, v35, v42, v43, v44, v45);
          }
        }
      }
      if ( v36 == ++v37 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1BCAA3C(list, v32);
  }
LABEL_21:
  if ( !v31 )
    goto LABEL_31;
  if ( v31->fields._size < 1 )
    return 0LL;
  v50 = EventAddMaster___c_TypeInfo;
  if ( !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo, v32);
    v50 = EventAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v50->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50, v32);
      v50 = EventAddMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v50->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventAddEntity__TypeInfo, v32, v34, v35);
    System_Comparison_object____ctor(_9__3_0, v52, Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, 0LL);
    static_fields = EventAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v54, v55, v56, v57, v58, v59);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    _9__3_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  return (EventAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v31,
                               0,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16097 & 1) == 0 )
  {
    sub_1BCA7E0(&EventAddMaster___c_TypeInfo, v1, v2);
    byte_4B16097 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventAddMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventAddMaster___c_TypeInfo->static_fields->__9 = (struct EventAddMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventAddMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventAddMaster___c___ctor(EventAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventAddMaster___c___getOverwriteEventAddEntity_b__3_0(
        EventAddMaster___c_o *this,
        EventAddEntity_o *a,
        EventAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}