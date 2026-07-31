void EventFactoryMaster___ctor(EventFactoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938621 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__);
    byte_5938621 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__);
}


EventFactoryEntity_array *EventFactoryMaster__GetDatas(
        EventFactoryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5938622 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFactoryEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFactoryEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventFactoryEntity__TypeInfo);
    byte_5938622 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventFactoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventFactoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( HIDWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventFactoryEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventFactoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__);
}