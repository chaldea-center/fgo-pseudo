void __fastcall NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02454 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__, method);
    byte_4B02454 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}


NewsEntity_array *__fastcall NewsMaster__GetEnableEntitiyList(NewsMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B02455 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Item__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_NewsEntity__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_NewsEntity__ToArray__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_NewsEntity___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_NewsEntity__TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    byte_4B02455 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_NewsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( Time >= (__int64)list[2].monitor && Time <= (__int64)list[2].fields.items )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_NewsEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1BC3264(list, v11);
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_20;
  return (NewsEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}