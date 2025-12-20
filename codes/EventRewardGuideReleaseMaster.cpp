void EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C982 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
    byte_4D2C982 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    269,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2C983 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    sub_1C94098(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__);
    sub_1C94098(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_4D2C983 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          goto LABEL_24;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = v6;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_24;
  }
  list = EventRewardGuideReleaseMaster___c_TypeInfo;
  if ( !EventRewardGuideReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardGuideReleaseMaster___c_TypeInfo);
    list = EventRewardGuideReleaseMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardGuideReleaseMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)list + 23);
    v19 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, 0);
    static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v5 )
LABEL_24:
    sub_1C942F0(list, v6);
  System_Collections_Generic_List_object___Sort_59164920(
    v5,
    v19,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *EventRewardGuideReleaseMaster__GetEntities_42872552(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  EventRewardGuideReleaseEntity_array *Entities; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x0
  EventRewardGuideReleaseEntity_o *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int max_length; // w8
  unsigned int v18; // w22
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4D2C984 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    byte_4D2C984 = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1C942F8(v9);
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
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      max_length = Entities->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C942F0(v9, v10);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
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

  if ( (byte_4D2C980 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
    byte_4D2C980 = 1;
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
                                              (const MethodInfo_345FF78 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
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

  if ( (byte_4D2C981 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
    byte_4D2C981 = 1;
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
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C985 & 1) == 0 )
  {
    sub_1C94098(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_4D2C985 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRewardGuideReleaseMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventRewardGuideReleaseMaster___c_TypeInfo->static_fields,
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


int32_t EventRewardGuideReleaseMaster___c___GetEntities_b__3_0(
        EventRewardGuideReleaseMaster___c_o *this,
        EventRewardGuideReleaseEntity_o *a,
        EventRewardGuideReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return a->fields.slot - b->fields.slot;
}