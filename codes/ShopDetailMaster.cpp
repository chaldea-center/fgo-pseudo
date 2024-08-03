void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCC9E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__, method);
    byte_49FCC9E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    178,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDetailEntity_o *__fastcall ShopDetailMaster__getShopDetailEntity(
        ShopDetailMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ShopDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_49FCC9F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&ShopDetailEntity_TypeInfo, v6);
    byte_49FCC9F = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (ShopDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (ShopDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                       (System_Collections_ObjectModel_Collection_T__o *)result,
                                       v10,
                                       (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(ShopDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopDetailEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopDetailEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.shopId == id )
        return result;
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_14:
    sub_1B64324(result);
  }
  return 0LL;
}


ShopDetailEntity_array *__fastcall ShopDetailMaster__getShopDetailEntityList(
        ShopDetailMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w21
  int32_t v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 methodPtr_low; // x10
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FCCA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo, v8);
    sub_1B640C8(&ShopDetailEntity_TypeInfo, v9);
    byte_49FCCA0 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopDetailEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (methodPtr_low = LOBYTE(ShopDetailEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ShopDetailEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopDetailEntity_TypeInfo )
          v17 = (Il2CppObject *)list;
        else
          v17 = 0LL;
        if ( !v10 )
          break;
      }
      else
      {
        v17 = 0LL;
        if ( !v10 )
          break;
      }
      items = v10->fields._items;
      v19 = Method_System_Collections_Generic_List_ShopDetailEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v17,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v17, v14, v15);
      }
      if ( v12 == ++v13 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v10,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_23:
    sub_1B64324(list);
  }
  if ( !v10 )
    goto LABEL_23;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v10,
                                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}