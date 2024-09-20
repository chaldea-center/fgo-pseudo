void __fastcall NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B514 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
    byte_4A5B514 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    62,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}


NewsEntity_array *__fastcall NewsMaster__GetEnableEntitiyList(NewsMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B515 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_NewsEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_NewsEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_NewsEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_NewsEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NewsEntity_TypeInfo);
    byte_4A5B515 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_NewsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
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
        v5 = list;
        methodPtr_low = LOBYTE(NewsEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (NewsEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == NewsEntity_TypeInfo
          && Time >= (__int64)list[2].monitor
          && Time <= (__int64)list[2].fields.items )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v13 = Method_System_Collections_Generic_List_NewsEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v5, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(list, v5);
  }
LABEL_20:
  if ( !v4 )
    goto LABEL_22;
  return (NewsEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v4,
                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}