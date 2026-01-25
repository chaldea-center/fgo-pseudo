void SpotMaster___ctor(SpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF271 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SpotMaster__SpotEntity__int___ctor__);
    byte_4CEF271 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    20,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int___ctor__);
}


SpotEntity_array *SpotMaster__getList(SpotMaster_o *this, int32_t Map_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CEF272 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SpotEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SpotEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SpotEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SpotEntity__TypeInfo);
    byte_4CEF272 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_SpotEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list[1].klass) == Map_id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_SpotEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C7BD40(list, v6);
  return (SpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_SpotEntity__ToArray__);
}