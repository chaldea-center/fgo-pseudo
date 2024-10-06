void __fastcall EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FF79 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__,
      method);
    byte_4A6FF79 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    263,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppClass *v16; // x1
  void *list; // x0
  int32_t v18; // w22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A6FF7A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo, v6);
    sub_1B90010(&EventRewardGuideReleaseEntity_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v12);
    sub_1B90010(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, v13);
    sub_1B90010(&EventRewardGuideReleaseMaster___c_TypeInfo, v14);
    byte_4A6FF7A = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(EventRewardGuideReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(EventRewardGuideReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardGuideReleaseEntity_TypeInfo
        && *((_DWORD *)list + 4) == eventId )
      {
        if ( !v15 )
          goto LABEL_26;
        items = v15->fields._items;
        v23 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)list,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v25[4] = v16;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v19, v20);
        }
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_26;
  }
  list = EventRewardGuideReleaseMaster___c_TypeInfo;
  if ( !EventRewardGuideReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardGuideReleaseMaster___c_TypeInfo);
    list = EventRewardGuideReleaseMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardGuideReleaseMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)v26;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v26, v29, v30);
  }
  if ( !v15 )
LABEL_26:
    sub_1B9026C(list, v16);
  System_Collections_Generic_List_object___Sort_55649412(
    v15,
    v26,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v15,
                                                  (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities_39302012(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int max_length; // w8
  unsigned int v17; // w22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A6FF7B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v9);
    byte_4A6FF7B = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B90274(v12, v13);
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
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v13;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = Entities->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B9026C(v12, v13);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v11,
                                                  (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
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

  if ( (byte_4A6FF77 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4A6FF77 = 1;
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
                                              (const MethodInfo_312C900 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A6FF78 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4A6FF78 = 1;
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
           (const MethodInfo_312C950 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void __fastcall EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FF7C & 1) == 0 )
  {
    sub_1B90010(&EventRewardGuideReleaseMaster___c_TypeInfo, v1);
    byte_4A6FF7C = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRewardGuideReleaseMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)EventRewardGuideReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B9026C(this, a);
  return a->fields.slot - b->fields.slot;
}