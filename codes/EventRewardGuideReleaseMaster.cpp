void __fastcall EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B26E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
    byte_4A5B26E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    263,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
}


EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x20
  Il2CppObject *v17; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5B26F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    sub_1B885B0(&EventRewardGuideReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__);
    sub_1B885B0(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_4A5B26F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(EventRewardGuideReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(EventRewardGuideReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardGuideReleaseEntity_TypeInfo
        && *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          goto LABEL_26;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_26;
  }
  list = EventRewardGuideReleaseMaster___c_TypeInfo;
  if ( !EventRewardGuideReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardGuideReleaseMaster___c_TypeInfo);
    list = EventRewardGuideReleaseMaster___c_TypeInfo;
  }
  v16 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardGuideReleaseMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)list + 23);
    v16 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v16, v17, Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v16, v19, v20);
  }
  if ( !v5 )
LABEL_26:
    sub_1B8880C(list, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v16,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities_39248916(
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
  int max_length; // w8
  unsigned int v14; // w22
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5B270 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    byte_4A5B270 = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1B88814(v9, v10);
      v10 = Entities->m_Items[v14];
      if ( !v10 )
        break;
      if ( v10->fields.slot == slot )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v10, v11, v12);
        }
      }
      max_length = Entities->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B8880C(v9, v10);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
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

  if ( (byte_4A5B26C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
    byte_4A5B26C = 1;
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
                                              (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A5B26D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
    byte_4A5B26D = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void __fastcall EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B271 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_4A5B271 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRewardGuideReleaseMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRewardGuideReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.slot - b->fields.slot;
}