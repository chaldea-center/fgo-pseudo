void EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6220 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
    byte_4CB6220 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    126,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}


System_Int32_array *EventDetailMaster__GetEventIdsByMission(EventDetailMaster_o *this, const MethodInfo *method)
{
  EventDetailMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct EventDetailMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  EventDetailMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v14; // x21
  struct EventDetailMaster___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4CB6221 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__getEntityList__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_EventDetailEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_EventDetailEntity___);
    sub_1C6BA08(&System_Func_EventDetailEntity__int__TypeInfo);
    sub_1C6BA08(&System_Func_EventDetailEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_EventDetailMaster___c__GetEventIdsByMission_b__1_0__);
    sub_1C6BA08(&Method_EventDetailMaster___c__GetEventIdsByMission_b__1_1__);
    sub_1C6BA08(&EventDetailMaster___c_TypeInfo);
    byte_4CB6221 = 1;
  }
  v3 = EventDetailMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !EventDetailMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDetailMaster___c_TypeInfo);
    v3 = EventDetailMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventDetailMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventDetailEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v6, Method_EventDetailMaster___c__GetEventIdsByMission_b__1_0__, 0);
    static_fields = EventDetailMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_EventDetailEntity__bool__o *)_9__1_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_EventDetailEntity___);
  v11 = EventDetailMaster___c_TypeInfo;
  v12 = v10;
  if ( !EventDetailMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDetailMaster___c_TypeInfo);
    v11 = EventDetailMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v11->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = EventDetailMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_EventDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v14, Method_EventDetailMaster___c__GetEventIdsByMission_b__1_1__, 0);
    v15 = EventDetailMaster___c_TypeInfo->static_fields;
    v15->__9__1_1 = (struct System_Func_EventDetailEntity__int__o *)_9__1_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v15->__9__1_1, (int32_t)_9__1_1, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_EventDetailEntity__int___);
  v19 = System_Linq_Enumerable__Distinct_int_(
          v18,
          (const MethodInfo_315E630 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void EventDetailMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6222 & 1) == 0 )
  {
    sub_1C6BA08(&EventDetailMaster___c_TypeInfo);
    byte_4CB6222 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventDetailMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventDetailMaster___c_TypeInfo->static_fields->__9 = (struct EventDetailMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventDetailMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventDetailMaster___c___ctor(EventDetailMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventDetailMaster___c___GetEventIdsByMission_b__1_0(
        EventDetailMaster___c_o *this,
        EventDetailEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return (LOBYTE(ent->fields.flag) >> 5) & 1;
}


int32_t EventDetailMaster___c___GetEventIdsByMission_b__1_1(
        EventDetailMaster___c_o *this,
        EventDetailEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return ent->fields.eventId;
}