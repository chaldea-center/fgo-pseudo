void __fastcall TotalEventRaceMaster___ctor(TotalEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02C92 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__, method);
    byte_4B02C92 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    225,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaceEntity_o *__fastcall TotalEventRaceMaster__GetEntity(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02C90 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B02C90 = 1;
  }
  PK = (Il2CppObject *)TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_32B3B28 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaceEntity_array *__fastcall TotalEventRaceMaster__GetTargetTermRaceEntityList(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
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
  Il2CppClass *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4B02C93 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_TotalEventRaceEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_TotalEventRaceEntity__get_Item__, v7);
    sub_1BC3008(&System_Comparison_TotalEventRaceEntity__TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo, v13);
    sub_1BC3008(&Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__, v14);
    sub_1BC3008(&TotalEventRaceMaster___c_TypeInfo, v15);
    byte_4B02C93 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_TotalEventRaceEntity__get_Count__);
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
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_TotalEventRaceEntity__get_Item__);
      if ( !list )
        break;
      v17 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v25 = Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v27[4] = v17;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v17, v22, v23);
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1BC3264(list, v17);
  }
LABEL_16:
  list = TotalEventRaceMaster___c_TypeInfo;
  if ( !TotalEventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TotalEventRaceMaster___c_TypeInfo);
    list = TotalEventRaceMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = TotalEventRaceMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_TotalEventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(
      v28,
      v29,
      Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__,
      0LL);
    static_fields = TotalEventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_TotalEventRaceEntity__o *)v28;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_57288964(
    v16,
    v28,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__);
  return (TotalEventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v16,
                                         (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__);
}


int64_t __fastcall TotalEventRaceMaster__GetTotalPoint(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  __int64 v6; // x1
  bool v7; // w8
  int64_t result; // x0
  TotalEventRaceEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v7 = TotalEventRaceMaster__TryGetEntity(this, &entity, eventId, termId, groupId, v5);
  result = 0LL;
  if ( v7 )
  {
    if ( !entity )
      sub_1BC3264(0LL, v6);
    return entity->fields.totalPoint;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalEventRaceMaster__TryGetEntity(
        TotalEventRaceMaster_o *this,
        TotalEventRaceEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B02C91 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__, entity);
    byte_4B02C91 = 1;
  }
  PK = (Il2CppObject *)TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__);
}


void __fastcall TotalEventRaceMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B02C94 & 1) == 0 )
  {
    sub_1BC3008(&TotalEventRaceMaster___c_TypeInfo, v1);
    byte_4B02C94 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(TotalEventRaceMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TotalEventRaceMaster___c_TypeInfo->static_fields->__9 = (struct TotalEventRaceMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)TotalEventRaceMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TotalEventRaceMaster___c___ctor(TotalEventRaceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TotalEventRaceMaster___c___GetTargetTermRaceEntityList_b__3_0(
        TotalEventRaceMaster___c_o *this,
        TotalEventRaceEntity_o *a,
        TotalEventRaceEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BC3264(this, a);
  return a->fields.groupId - b->fields.groupId;
}