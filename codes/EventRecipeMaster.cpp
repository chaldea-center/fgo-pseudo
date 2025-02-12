void __fastcall EventRecipeMaster___ctor(EventRecipeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7B94 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__, method);
    byte_4BC7B94 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    386,
    (const MethodInfo_3246354 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeEntity_array *__fastcall EventRecipeMaster__GetRecipeEntityArray(
        EventRecipeMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v3 = eventId;
  if ( (byte_4BC7B95 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRecipeEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRecipeEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_EventRecipeEntity__TypeInfo, v9);
    byte_4BC7B95 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventRecipeEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( HIDWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_EventRecipeEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = *(Il2CppClass **)&eventId;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 4), *(int64_t *)&eventId, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C1AE30(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (EventRecipeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v12,
                                      (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
}