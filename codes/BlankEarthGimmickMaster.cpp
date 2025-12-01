void BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC706C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
    byte_4CC706C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    468,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *BlankEarthGimmickMaster__GetAllGimmick(
        BlankEarthGimmickMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4CC706B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
    byte_4CC706B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v6 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    if ( v6 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v6,
                                                               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    if ( list )
    {
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v16 = list;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)list,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v3 )
LABEL_17:
    sub_1C71608(list, v4);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}