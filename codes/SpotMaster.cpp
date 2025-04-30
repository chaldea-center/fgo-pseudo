void __fastcall SpotMaster___ctor(SpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F024 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SpotMaster__SpotEntity__int___ctor__, method);
    byte_4A4F024 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    20,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_SpotMaster__SpotEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotEntity_array *__fastcall SpotMaster__getList(SpotMaster_o *this, int32_t Map_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A4F025 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Count__, *(_QWORD *)&Map_id);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_SpotEntity__TypeInfo, v9);
    byte_4A4F025 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_SpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_SpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( LODWORD(list[1].klass) == Map_id )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_SpotEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1B8635C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1B86614(list, v11);
  return (SpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_SpotEntity__ToArray__);
}