void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD5E2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__, method);
    byte_4BFD5E2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    206,
    (const MethodInfo_327D914 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
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

  if ( (byte_4BFD5E0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4BFD5E0 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_327FC38 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
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

  if ( (byte_4BFD5E1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__, entity);
    byte_4BFD5E1 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
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
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x1
  void *list; // x0
  int v21; // w23
  int32_t v22; // w24
  Il2CppObject *v23; // x25
  int32_t v24; // w26
  int32_t v25; // w27
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  EventAddMaster___c_c *v36; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v38; // x21
  struct EventAddMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4BFD5E3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__, v7);
    sub_1C2E12C(&System_Comparison_EventAddEntity__TypeInfo, v8);
    sub_1C2E12C(&CondType_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventAddEntity__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventAddEntity__Sort__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventAddEntity___ctor__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__, v14);
    sub_1C2E12C(&System_Collections_Generic_List_EventAddEntity__TypeInfo, v15);
    sub_1C2E12C(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, v16);
    sub_1C2E12C(&EventAddMaster___c_TypeInfo, v17);
    byte_4BFD5E3 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = (int)list;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__);
      if ( !list )
        break;
      v23 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v25 = *((_DWORD *)list + 10);
        v24 = *((_DWORD *)list + 11);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v25, v24, 0LL, 0, 0LL, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v33 = Method_System_Collections_Generic_List_EventAddEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v23,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v23;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v23, v26, v27, v28, v29, v30, v31);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_19;
    }
LABEL_29:
    sub_1C2E388(list, v19);
  }
LABEL_19:
  if ( !v18 )
    goto LABEL_29;
  if ( v18->fields._size < 1 )
    return 0LL;
  v36 = EventAddMaster___c_TypeInfo;
  if ( !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v36 = EventAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v36->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = EventAddMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_EventAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v38, Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, 0LL);
    static_fields = EventAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v40, v41, v42, v43, v44, v45);
  }
  System_Collections_Generic_List_object___Sort_57070448(
    v18,
    _9__3_0,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  return (EventAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v18,
                               0,
                               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFD5E4 & 1) == 0 )
  {
    sub_1C2E12C(&EventAddMaster___c_TypeInfo, v1);
    byte_4BFD5E4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(EventAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventAddMaster___c_TypeInfo->static_fields->__9 = (struct EventAddMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventAddMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}