void BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C3D & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
    byte_4C42C3D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    468,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *BlankEarthGimmickMaster__GetAllGimmick(
        BlankEarthGimmickMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v5; // w21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  Il2CppClass **v12; // x0

  if ( (byte_4C42C3C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
    byte_4C42C3C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v5 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    if ( v5 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v5,
                                                               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    if ( list )
    {
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v9 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v11 = list;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)list,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v12[4] = (Il2CppClass *)v11;
        sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)v11, v6, v7);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v5;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v3 )
LABEL_17:
    sub_1C372B4(list);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}