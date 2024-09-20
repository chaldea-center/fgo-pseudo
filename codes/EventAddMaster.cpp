void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B008 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
    byte_4A5B008 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    202,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
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

  if ( (byte_4A5B006 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
    byte_4A5B006 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_311DC8C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
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

  if ( (byte_4A5B007 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
    byte_4A5B007 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  void *list; // x0
  int v10; // w23
  int32_t v11; // w24
  Il2CppObject *v12; // x25
  __int64 methodPtr_low; // x10
  int32_t v14; // w26
  int32_t v15; // w27
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  EventAddMaster___c_c *v22; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v24; // x21
  struct EventAddMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A5B009 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&EventAddEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventAddEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventAddEntity__TypeInfo);
    sub_1B885B0(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__);
    sub_1B885B0(&EventAddMaster___c_TypeInfo);
    byte_4A5B009 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventAddEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v15 = *((_DWORD *)list + 10);
        v14 = *((_DWORD *)list + 11);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v15, v14, 0LL, 0, 0LL, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v19 = Method_System_Collections_Generic_List_EventAddEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v12,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v12;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1B8880C(list, v8);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_31;
  if ( v7->fields._size < 1 )
    return 0LL;
  v22 = EventAddMaster___c_TypeInfo;
  if ( !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v22 = EventAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v22->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = EventAddMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v24, Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, 0LL);
    static_fields = EventAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__3_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  return (EventAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v7,
                               0,
                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B00A & 1) == 0 )
  {
    sub_1B885B0(&EventAddMaster___c_TypeInfo);
    byte_4A5B00A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventAddMaster___c_TypeInfo->static_fields->__9 = (struct EventAddMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}