void __fastcall BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC1F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
    byte_4BDC1F5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *__fastcall BlankEarthGimmickMaster__GetAllGimmick(
        BlankEarthGimmickMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  int64_t list; // x0
  int32_t v6; // w21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  int64_t v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4BDC1F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
    byte_4BDC1F4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v6 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Count__);
    if ( v6 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v6,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickEntity__get_Item__);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 4), v16, v7, v8, v9, v10, v11, v12);
      }
    }
    list = (int64_t)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v3 )
LABEL_17:
    sub_1C22094(list, v4);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}