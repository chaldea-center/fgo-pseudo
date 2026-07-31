void EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59388B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
    byte_59388B6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    271,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
}


EventRewardGuideReleaseEntity_array *EventRewardGuideReleaseMaster__GetEntities(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v21; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_59388B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Item__);
    sub_21FFC50(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    sub_21FFC50(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__0_0__);
    sub_21FFC50(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_59388B4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  list = EventRewardGuideReleaseMaster___c_TypeInfo;
  if ( !*(&EventRewardGuideReleaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRewardGuideReleaseMaster___c_TypeInfo, v6);
    list = EventRewardGuideReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct EventRewardGuideReleaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__0_0 = (System_Comparison_T__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__0_0, v21, Method_EventRewardGuideReleaseMaster___c__GetEntities_b__0_0__, 0);
    v22 = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    v22->__9__0_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)_9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__0_0, (int32_t)_9__0_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !v5 )
LABEL_15:
    sub_21FFECC(list, v6);
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    _9__0_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *EventRewardGuideReleaseMaster__GetEntities_49138840(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  EventRewardGuideReleaseEntity_array *Entities; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 v9; // x0
  EventRewardGuideReleaseEntity_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int max_length; // w8
  unsigned int v18; // w23
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_59388B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    byte_59388B5 = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_21FFED4(v9);
      v10 = Entities->m_Items[v18];
      if ( !v10 )
        break;
      if ( v10->fields.slot == slot )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v20 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v10,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      max_length = Entities->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(v9, v10);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_o *EventRewardGuideReleaseMaster__GetEntity(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59388B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
    byte_59388B7 = 1;
  }
  PK = (Il2CppObject *)EventRewardGuideReleaseEntity__CreatePK(
                         eventId,
                         slot,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condTargetId);
  return (EventRewardGuideReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventRewardGuideReleaseMaster__TryGetEntity(
        EventRewardGuideReleaseMaster_o *this,
        EventRewardGuideReleaseEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59388B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
    byte_59388B8 = 1;
  }
  PK = (Il2CppObject *)EventRewardGuideReleaseEntity__CreatePK(
                         eventId,
                         slot,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59388B9 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_59388B9 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRewardGuideReleaseMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRewardGuideReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventRewardGuideReleaseMaster___c___ctor(EventRewardGuideReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventRewardGuideReleaseMaster___c___GetEntities_b__0_0(
        EventRewardGuideReleaseMaster___c_o *this,
        EventRewardGuideReleaseEntity_o *a,
        EventRewardGuideReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.slot - b->fields.slot;
}