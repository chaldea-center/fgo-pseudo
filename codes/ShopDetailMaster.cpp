void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E3041 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__, method);
    byte_48E3041 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
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

  if ( (byte_48E3042 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&ShopDetailEntity_TypeInfo, v6);
    byte_48E3042 = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                       (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B00F28(result, *(_QWORD *)&id);
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
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  Il2CppObject *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w21
  int32_t v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_48E3043 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo, v7);
    sub_1B00CCC(&ShopDetailEntity_TypeInfo, v8);
    byte_48E3043 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (methodPtr_low = LOBYTE(ShopDetailEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ShopDetailEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopDetailEntity_TypeInfo )
          v10 = (Il2CppObject *)list;
        else
          v10 = 0LL;
        if ( !v9 )
          break;
      }
      else
      {
        v10 = 0LL;
        if ( !v9 )
          break;
      }
      items = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_ShopDetailEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v10,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v10;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v10, v14, v15);
      }
      if ( v12 == ++v13 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_23:
    sub_1B00F28(list, v10);
  }
  if ( !v9 )
    goto LABEL_23;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v9,
                                     (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}