void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCF34 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
    byte_4BDCF34 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    182,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDetailEntity_o *__fastcall ShopDetailMaster__getShopDetailEntity(
        ShopDetailMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ShopDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22

  if ( (byte_4BDCF35 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
    byte_4BDCF35 = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      result = (ShopDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (ShopDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                       (System_Collections_ObjectModel_Collection_T__o *)result,
                                       v8,
                                       (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.shopId == id )
        return result;
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_12:
    sub_1C22094(result, *(_QWORD *)&id);
  }
  return 0LL;
}


ShopDetailEntity_array *__fastcall ShopDetailMaster__getShopDetailEntityList(
        ShopDetailMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  int64_t list; // x0
  int v6; // w21
  int32_t v7; // w22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  int64_t v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4BDCF36 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
    byte_4BDCF36 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = list;
    v7 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v7,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v15 = Method_System_Collections_Generic_List_ShopDetailEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      v17 = list;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v17, v8, v9, v10, v11, v12, v13);
      }
      if ( v6 == ++v7 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_16:
    sub_1C22094(list, v4);
  }
  if ( !v3 )
    goto LABEL_16;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v3,
                                     (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}