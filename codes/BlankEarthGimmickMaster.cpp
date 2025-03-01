void __fastcall BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD3FD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__, method);
    byte_4BFD3FD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
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
  int64_t list; // x0
  int32_t v11; // w21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int64_t v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4BFD3FC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo, v7);
    byte_4BFD3FC = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v11 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    if ( v11 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v11,
                      (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    if ( list )
    {
      if ( !v8 )
        goto LABEL_17;
      items = v8->fields._items;
      v19 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v8->fields._size;
      v21 = list;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)list,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v21;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 4), v21, v12, v13, v14, v15, v16, v17);
      }
    }
    list = (int64_t)this->fields.list;
    ++v11;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v8 )
LABEL_17:
    sub_1C2E388(list, v9);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v8,
                                            (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}