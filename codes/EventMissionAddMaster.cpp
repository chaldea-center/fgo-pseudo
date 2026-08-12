void EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970883 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
    byte_5970883 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    145,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970881 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
    byte_5970881 = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3F157EC *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventMissionAddMaster__GetEventMissionChangeRewardIcon(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t targetId,
        bool notifyIcon,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x0
  __int64 v10; // x1
  EventMissionAddMaster___c_c *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x20
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v15; // x22
  struct EventMissionAddMaster___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  bool v24; // w20
  Il2CppObject *current; // x27
  int64_t klass_high; // x23
  int32_t monitor_high; // w21
  int32_t klass; // w22
  System_String_o *v29; // x21
  System_String_o *v30; // x19
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5970885 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_2213A60(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__);
    sub_2213A60(&EventMissionAddMaster___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    byte_5970885 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          this,
                          targetId,
                          missionId,
                          (const MethodInfo *)notifyIcon);
  v11 = EventMissionAddMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_List_object__o *)EventMissionAddList;
  if ( !*(&EventMissionAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionAddMaster___c_TypeInfo, v10);
    v11 = EventMissionAddMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v15,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      0);
    v16 = EventMissionAddMaster___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__4_0, (int32_t)_9__4_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !v12 )
    sub_2213CDC(EventMissionAddList, v10);
  System_Collections_Generic_List_object___Sort_71849708(
    v12,
    _9__4_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    v12,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v33 = v32;
  v32.fields._list = 0;
  *(_QWORD *)&v32.fields._index = &v33;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v24 )
    {
      v29 = 0;
      goto LABEL_20;
    }
    current = v33.fields._current;
    if ( v33.fields._current && LODWORD(v33.fields._current[2].monitor) == 3 )
    {
      klass_high = SHIDWORD(v33.fields._current[2].klass);
      monitor_high = HIDWORD(v33.fields._current[1].monitor);
      klass = (int32_t)v33.fields._current[2].klass;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v23);
      if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0, 0) )
        break;
    }
  }
  if ( HIDWORD(current[2].monitor) )
  {
    v29 = System_Int32__ToString((int)current + 44, 0);
  }
  else
  {
    v29 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0) )
      v29 = (System_String_o *)current[3].klass;
  }
  if ( !System_String__IsNullOrEmpty(v29, 0) && notifyIcon )
    v29 = System_String__Concat_75651716(v29, (System_String_o *)StringLiteral_1248/*"1"*/, 0);
LABEL_20:
  if ( v24 )
    v30 = v29;
  else
    v30 = 0;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
  return v30;
}


// local variable allocation has failed, the output may be wrong!
bool EventMissionAddMaster__TryGetEntity(
        EventMissionAddMaster_o *this,
        EventMissionAddEntity_o **entity,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970882 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
    byte_5970882 = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddMaster__getEventMissionAddList(
        EventMissionAddMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v40; // [xsp+18h] [xbp-48h]

  if ( (byte_5970884 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionAddEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
    byte_5970884 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventMissionAddEntity__GetEnumerator__);
  v40 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v11);
  for ( i = Enumerator; ; i = v40 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v40 )
      sub_2213CDC(v17, v18);
    v19 = v40->klass;
    v20 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionAddEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_224BC3C(v40, System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v40,
            *(_QWORD *)(v22 + 8));
    v30 = v23;
    if ( !v23 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v23 + 24) == eventId && *(_DWORD *)(v23 + 16) == missionId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v32 = Method_System_Collections_Generic_List_EventMissionAddEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(v23, v23);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v23,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  if ( v40 )
  {
    v35 = v40->klass;
    v36 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_35:
      v38 = sub_224BC3C(v40, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v40, *(_QWORD *)(v38 + 8));
  }
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v7;
}


void EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970886 & 1) == 0 )
  {
    sub_2213A60(&EventMissionAddMaster___c_TypeInfo);
    byte_5970886 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionAddMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMissionAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMissionAddMaster___c___ctor(EventMissionAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionAddMaster___c___GetEventMissionChangeRewardIcon_b__4_0(
        EventMissionAddMaster___c_o *this,
        EventMissionAddEntity_o *a,
        EventMissionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.priority - b->fields.priority;
}