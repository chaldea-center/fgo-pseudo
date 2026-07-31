void EventRecipeGiftMaster___ctor(EventRecipeGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938896 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string___ctor__);
    byte_5938896 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    391,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeGiftEntity_o *EventRecipeGiftMaster__GetEntity(
        EventRecipeGiftMaster_o *this,
        int32_t recipeId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938897 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__GetEntity__);
    byte_5938897 = 1;
  }
  PK = (Il2CppObject *)EventRecipeGiftEntity__CreatePK(recipeId, idx, *(const MethodInfo **)&idx);
  return (EventRecipeGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__GetEntity__);
}


EventRecipeGiftEntity_array *EventRecipeGiftMaster__GetSortedEntityArray(
        EventRecipeGiftMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct EventRecipeGiftMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct EventRecipeGiftMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5938899 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRecipeGiftEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRecipeGiftEntity__get_Item__);
    sub_21FFC50(&System_Comparison_EventRecipeGiftEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeGiftEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventRecipeGiftEntity__TypeInfo);
    sub_21FFC50(&Method_EventRecipeGiftMaster___c__GetSortedEntityArray_b__3_0__);
    sub_21FFC50(&EventRecipeGiftMaster___c_TypeInfo);
    byte_5938899 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRecipeGiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRecipeGiftEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventRecipeGiftEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventRecipeGiftEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventRecipeGiftEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  list = EventRecipeGiftMaster___c_TypeInfo;
  if ( !*(&EventRecipeGiftMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRecipeGiftMaster___c_TypeInfo, v6);
    list = EventRecipeGiftMaster___c_TypeInfo;
  }
  static_fields = (struct EventRecipeGiftMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = EventRecipeGiftMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventRecipeGiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v23, Method_EventRecipeGiftMaster___c__GetSortedEntityArray_b__3_0__, 0);
    v24 = EventRecipeGiftMaster___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Comparison_EventRecipeGiftEntity__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__3_0, (int32_t)_9__3_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    _9__3_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__Sort__);
  return (EventRecipeGiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventRecipeGiftMaster__TryGetEntity(
        EventRecipeGiftMaster_o *this,
        EventRecipeGiftEntity_o **entity,
        int32_t recipeId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938898 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__TryGetEntity__);
    byte_5938898 = 1;
  }
  PK = (Il2CppObject *)EventRecipeGiftEntity__CreatePK(recipeId, idx, *(const MethodInfo **)&recipeId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__TryGetEntity__);
}


void EventRecipeGiftMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593889A & 1) == 0 )
  {
    sub_21FFC50(&EventRecipeGiftMaster___c_TypeInfo);
    byte_593889A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventRecipeGiftMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRecipeGiftMaster___c_TypeInfo->static_fields->__9 = (struct EventRecipeGiftMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRecipeGiftMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventRecipeGiftMaster___c___ctor(EventRecipeGiftMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventRecipeGiftMaster___c___GetSortedEntityArray_b__3_0(
        EventRecipeGiftMaster___c_o *this,
        EventRecipeGiftEntity_o *x,
        EventRecipeGiftEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_21FFECC(this, x);
  return x->fields.displayOrder - y->fields.displayOrder;
}