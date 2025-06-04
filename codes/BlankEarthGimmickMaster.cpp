void __fastcall BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01CB7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__, method);
    byte_4B01CB7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    468,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *__fastcall BlankEarthGimmickMaster__GetAllGimmick(
        BlankEarthGimmickMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v11; // w21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4B01CB6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo, v7);
    byte_4B01CB6 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v11 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    if ( v11 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v11,
                                                               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    if ( list )
    {
      if ( !v8 )
        goto LABEL_17;
      items = v8->fields._items;
      v15 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v8->fields._size;
      v17 = list;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)list,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v11;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v8 )
LABEL_17:
    sub_1BC3264(list, v9);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v8,
                                            (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}