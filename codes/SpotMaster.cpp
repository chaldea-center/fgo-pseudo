void __fastcall SpotMaster___ctor(SpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB67F7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_SpotMaster__SpotEntity__int___ctor__, method);
    byte_4AB67F7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    20,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_SpotMaster__SpotEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotEntity_array *__fastcall SpotMaster__getList(SpotMaster_o *this, int32_t Map_id, const MethodInfo *method)
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

  if ( (byte_4AB67F8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&Map_id);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SpotEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SpotEntity__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SpotEntity___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_SpotEntity__TypeInfo, v9);
    sub_1BAB41C(&SpotEntity_TypeInfo, v10);
    byte_4AB67F8 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_SpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_SpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(SpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SpotEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotEntity_TypeInfo
        && LODWORD(list[1].klass) == Map_id )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_SpotEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
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
    sub_1BAB678(list, v12);
  return (SpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v11,
                               (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_SpotEntity__ToArray__);
}