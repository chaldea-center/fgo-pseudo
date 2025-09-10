void NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27805 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
    byte_4C27805 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}


NewsEntity_array *NewsMaster__GetEnableEntitiyList(NewsMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C27806 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_NewsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_NewsEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_NewsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_NewsEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27806 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_NewsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Item__);
      if ( list )
      {
        v5 = list;
        if ( Time >= (__int64)list[2].monitor && Time <= (__int64)list[2].fields.items )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v12 = Method_System_Collections_Generic_List_NewsEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v5;
            sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v5, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C2D6EC(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (NewsEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v4,
                               (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}