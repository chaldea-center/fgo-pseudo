void __fastcall SpotRoadMaster___ctor(SpotRoadMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD04C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__);
    byte_4BDD04C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    22,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__);
}


SpotRoadEntity_array *__fastcall SpotRoadMaster__getList(
        SpotRoadMaster_o *this,
        int32_t map_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDD04D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SpotRoadEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SpotRoadEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SpotRoadEntity__TypeInfo);
    byte_4BDD04D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SpotRoadEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SpotRoadEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v8,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( *(_DWORD *)(list + 20) == map_id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_SpotRoadEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C22094(list, v6);
  return (SpotRoadEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v5,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__);
}