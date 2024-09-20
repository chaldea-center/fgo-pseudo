void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BA10 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
    byte_4A5BA10 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    178,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BA11 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ShopDetailEntity_TypeInfo);
    byte_4A5BA11 = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                       (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_14:
    sub_1B8880C(result, *(_QWORD *)&id);
  }
  return 0LL;
}


ShopDetailEntity_array *__fastcall ShopDetailMaster__getShopDetailEntityList(
        ShopDetailMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  Il2CppObject *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5BA12 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
    sub_1B885B0(&ShopDetailEntity_TypeInfo);
    byte_4A5BA12 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (methodPtr_low = LOBYTE(ShopDetailEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ShopDetailEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopDetailEntity_TypeInfo )
          v4 = (Il2CppObject *)list;
        else
          v4 = 0LL;
        if ( !v3 )
          break;
      }
      else
      {
        v4 = 0LL;
        if ( !v3 )
          break;
      }
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ShopDetailEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v4,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v4;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v4, v8, v9);
      }
      if ( v6 == ++v7 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_23:
    sub_1B8880C(list, v4);
  }
  if ( !v3 )
    goto LABEL_23;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v3,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}