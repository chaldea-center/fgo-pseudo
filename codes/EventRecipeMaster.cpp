void __fastcall EventRecipeMaster___ctor(EventRecipeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE5FE & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__, method);
    byte_49FE5FE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    382,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v3 = eventId;
  if ( (byte_49FE5FF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&EventRecipeEntity_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_EventRecipeEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventRecipeEntity___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_EventRecipeEntity__TypeInfo, v10);
    byte_49FE5FF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventRecipeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventRecipeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRecipeEntity_TypeInfo
          && HIDWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v19 = Method_System_Collections_Generic_List_EventRecipeEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v21[4] = *(Il2CppClass **)&eventId;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), eventId, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64ACC(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (EventRecipeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
}