void __fastcall EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44B7E & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__,
      method);
    byte_4B44B7E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    269,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities(
        EventRewardGuideReleaseMaster_o *this,
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
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t v17; // w22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Comparison_T__o *v24; // x20
  Il2CppObject *v25; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4B44B7F & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Item__, v5);
    sub_1BDB878(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v11);
    sub_1BDB878(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, v12);
    sub_1BDB878(&EventRewardGuideReleaseMaster___c_TypeInfo, v13);
    byte_4B44B7F = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventRewardGuideReleaseEntity__get_Item__);
    if ( list )
    {
      v15 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v14 )
          goto LABEL_24;
        items = v14->fields._items;
        v21 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v23[4] = v15;
          sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v15, v18, v19);
        }
      }
    }
    list = this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_24;
  }
  list = EventRewardGuideReleaseMaster___c_TypeInfo;
  if ( !EventRewardGuideReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardGuideReleaseMaster___c_TypeInfo);
    list = EventRewardGuideReleaseMaster___c_TypeInfo;
  }
  v24 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardGuideReleaseMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)list + 23);
    v24 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v24, v25, Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)v24;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v24, v27, v28);
  }
  if ( !v14 )
LABEL_24:
    sub_1BDBAD4(list, v15);
  System_Collections_Generic_List_object___Sort_57505928(
    v14,
    v24,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v14,
                                                  (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities_41074304(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventRewardGuideReleaseEntity_array *Entities; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x0
  EventRewardGuideReleaseEntity_o *v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  int max_length; // w8
  unsigned int v17; // w22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B44B80 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v9);
    byte_4B44B80 = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BDBADC(v12, v13, v14);
      v13 = Entities->m_Items[v17];
      if ( !v13 )
        break;
      if ( v13->fields.slot == slot )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v13,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v13;
          sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = Entities->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BDBAD4(v12, v13);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v11,
                                                  (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_o *__fastcall EventRewardGuideReleaseMaster__GetEntity(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44B7C & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B44B7C = 1;
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
                                              (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardGuideReleaseMaster__TryGetEntity(
        EventRewardGuideReleaseMaster_o *this,
        EventRewardGuideReleaseEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44B7D & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B44B7D = 1;
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
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void __fastcall EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44B81 & 1) == 0 )
  {
    sub_1BDB878(&EventRewardGuideReleaseMaster___c_TypeInfo, v1);
    byte_4B44B81 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRewardGuideReleaseMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventRewardGuideReleaseMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventRewardGuideReleaseMaster___c___ctor(
        EventRewardGuideReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRewardGuideReleaseMaster___c___GetEntities_b__3_0(
        EventRewardGuideReleaseMaster___c_o *this,
        EventRewardGuideReleaseEntity_o *a,
        EventRewardGuideReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BDBAD4(this, a);
  return a->fields.slot - b->fields.slot;
}