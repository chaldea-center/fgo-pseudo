void BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F59 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
    byte_4C26F59 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    468,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
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
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4C26F58 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
    byte_4C26F58 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v6 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    if ( v6 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v6,
                                                               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    if ( list )
    {
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v12 = list;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)list,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v13 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v13[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v3 )
LABEL_17:
    sub_1C2D6EC(list, v4);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}