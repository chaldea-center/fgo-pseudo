void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8496 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__, method);
    byte_4BC8496 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    182,
    (const MethodInfo_3246354 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDetailEntity_o *__fastcall ShopDetailMaster__getShopDetailEntity(
        ShopDetailMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ShopDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22

  if ( (byte_4BC8497 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__, *(_QWORD *)&id);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__, v5);
    byte_4BC8497 = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      result = (ShopDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (ShopDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                       (System_Collections_ObjectModel_Collection_T__o *)result,
                                       v9,
                                       (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.shopId == id )
        return result;
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_12:
    sub_1C1AE30(result, *(_QWORD *)&id);
  }
  return 0LL;
}


ShopDetailEntity_array *__fastcall ShopDetailMaster__getShopDetailEntityList(
        ShopDetailMaster_o *this,
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
  int v11; // w21
  int32_t v12; // w22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int64_t v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4BC8498 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo, v7);
    byte_4BC8498 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = list;
    v12 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v12,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v20 = Method_System_Collections_Generic_List_ShopDetailEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v22 = list;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)list,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v22;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 4), v22, v13, v14, v15, v16, v17, v18);
      }
      if ( v11 == ++v12 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v8,
                                           (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_16:
    sub_1C1AE30(list, v9);
  }
  if ( !v8 )
    goto LABEL_16;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v8,
                                     (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}