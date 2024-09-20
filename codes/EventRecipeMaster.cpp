void __fastcall EventRecipeMaster___ctor(EventRecipeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B255 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
    byte_4A5B255 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    382,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeEntity_array *__fastcall EventRecipeMaster__GetRecipeEntityArray(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = eventId;
  if ( (byte_4A5B256 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRecipeEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRecipeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
    byte_4A5B256 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventRecipeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventRecipeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRecipeEntity_TypeInfo
          && HIDWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_EventRecipeEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = *(Il2CppClass **)&eventId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), eventId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (EventRecipeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
}