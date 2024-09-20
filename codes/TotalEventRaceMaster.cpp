void __fastcall TotalEventRaceMaster___ctor(TotalEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__);
    byte_4A5BCA0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    219,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__);
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

  if ( (byte_4A5BC9E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__);
    byte_4A5BC9E = 1;
  }
  PK = (Il2CppObject *)TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__);
}


TotalEventRaceEntity_array *__fastcall TotalEventRaceMaster__GetTargetTermRaceEntityList(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x20
  Il2CppObject *v21; // x21
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5BCA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_TotalEventRaceEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo);
    sub_1B885B0(&TotalEventRaceEntity_TypeInfo);
    sub_1B885B0(&Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__);
    sub_1B885B0(&TotalEventRaceMaster___c_TypeInfo);
    byte_4A5BCA1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(TotalEventRaceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(TotalEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != TotalEventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v19[4] = v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v8, v13, v14);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1B8880C(list, v8);
  }
LABEL_18:
  list = TotalEventRaceMaster___c_TypeInfo;
  if ( !TotalEventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TotalEventRaceMaster___c_TypeInfo);
    list = TotalEventRaceMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = TotalEventRaceMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_TotalEventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(
      v20,
      v21,
      Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__,
      0LL);
    static_fields = TotalEventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_TotalEventRaceEntity__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v20, v23, v24);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v20,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__);
  return (TotalEventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__);
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
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5BC9F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__);
    byte_4A5BC9F = 1;
  }
  PK = (Il2CppObject *)TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__);
}


void __fastcall TotalEventRaceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BCA2 & 1) == 0 )
  {
    sub_1B885B0(&TotalEventRaceMaster___c_TypeInfo);
    byte_4A5BCA2 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TotalEventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TotalEventRaceMaster___c_TypeInfo->static_fields->__9 = (struct TotalEventRaceMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TotalEventRaceMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.groupId - b->fields.groupId;
}