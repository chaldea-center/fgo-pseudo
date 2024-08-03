void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC2BA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__, method);
    byte_49FC2BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    202,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
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

  if ( (byte_49FC2B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_49FC2B8 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_30D41FC *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
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

  if ( (byte_49FC2B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__, entity);
    byte_49FC2B9 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x19
  void *list; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // w23
  int32_t v24; // w24
  Il2CppObject *v25; // x25
  __int64 methodPtr_low; // x10
  int32_t v27; // w26
  int32_t v28; // w27
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  EventAddMaster___c_c *v34; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v36; // x21
  struct EventAddMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FC2BB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_EventAddEntity__TypeInfo, v8);
    sub_1B640C8(&CondType_TypeInfo, v9);
    sub_1B640C8(&EventAddEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventAddEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventAddEntity__Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventAddEntity___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__, v15);
    sub_1B640C8(&System_Collections_Generic_List_EventAddEntity__TypeInfo, v16);
    sub_1B640C8(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, v17);
    sub_1B640C8(&EventAddMaster___c_TypeInfo, v18);
    byte_49FC2BB = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventAddEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&overwriteType);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = (int)list;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventAddEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v28 = *((_DWORD *)list + 10);
        v27 = *((_DWORD *)list + 11);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v28, v27, 0LL, 0, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v19 )
            break;
          items = v19->fields._items;
          v31 = Method_System_Collections_Generic_List_EventAddEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            break;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              v25,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v25;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v25, v22, v29);
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1B64324(list);
  }
LABEL_21:
  if ( !v19 )
    goto LABEL_31;
  if ( v19->fields._size < 1 )
    return 0LL;
  v34 = EventAddMaster___c_TypeInfo;
  if ( !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v34 = EventAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v34->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = EventAddMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventAddEntity__TypeInfo, v21, v22);
    System_Comparison_object____ctor(_9__3_0, v36, Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, 0LL);
    static_fields = EventAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v38, v39);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v19,
    _9__3_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  return (EventAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v19,
                               0,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC2BC & 1) == 0 )
  {
    sub_1B640C8(&EventAddMaster___c_TypeInfo, v1);
    byte_49FC2BC = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventAddMaster___c_TypeInfo->static_fields->__9 = (struct EventAddMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventAddMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}