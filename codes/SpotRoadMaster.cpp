void __fastcall SpotRoadMaster___ctor(SpotRoadMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E8F6 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__, method);
    byte_4A2E8F6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    22,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotRoadEntity_array *__fastcall SpotRoadMaster__getList(
        SpotRoadMaster_o *this,
        int32_t map_id,
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
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A2E8F7 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&map_id);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotRoadEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotRoadEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_SpotRoadEntity__TypeInfo, v9);
    sub_1B761C0(&SpotRoadEntity_TypeInfo, v10);
    byte_4A2E8F7 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SpotRoadEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SpotRoadEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(SpotRoadEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SpotRoadEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotRoadEntity_TypeInfo
        && HIDWORD(list->fields.items) == map_id )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_SpotRoadEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B7641C(list, v12);
  return (SpotRoadEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v11,
                                   (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__);
}