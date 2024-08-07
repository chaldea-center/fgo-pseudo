void __fastcall EventPanelMapDetailMaster___ctor(EventPanelMapDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB7D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__, method);
    byte_49FEB7D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    342,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPanelMapDetailEntity_array *__fastcall EventPanelMapDetailMaster__GetListByMapId(
        EventPanelMapDetailMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FEB7E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&EventPanelMapDetailEntity_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo, v10);
    byte_49FEB7E = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(EventPanelMapDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventPanelMapDetailEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPanelMapDetailEntity_TypeInfo
          && HIDWORD(list->fields.items) == mapId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64C5C(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventPanelMapDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v11,
                                              (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__);
}