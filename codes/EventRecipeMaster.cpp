void EventRecipeMaster___ctor(EventRecipeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC74F2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
    byte_4CC74F2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    388,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeEntity_array *EventRecipeMaster__GetRecipeEntityArray(
        EventRecipeMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = eventId;
  if ( (byte_4CC74F3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRecipeEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
    byte_4CC74F3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( HIDWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_EventRecipeEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&eventId;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), eventId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C71608(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventRecipeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
}