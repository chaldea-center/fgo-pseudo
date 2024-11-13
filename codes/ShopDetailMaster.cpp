void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__, method, v2);
    byte_4B16B9D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    178,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDetailEntity_o *__fastcall ShopDetailMaster__getShopDetailEntity(
        ShopDetailMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ShopDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B16B9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&ShopDetailEntity_TypeInfo, v7, v8);
    byte_4B16B9E = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      result = (ShopDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (ShopDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                       (System_Collections_ObjectModel_Collection_T__o *)result,
                                       v12,
                                       (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_14:
    sub_1BCAA3C(result, *(_QWORD *)&id);
  }
  return 0LL;
}


ShopDetailEntity_array *__fastcall ShopDetailMaster__getShopDetailEntityList(
        ShopDetailMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  Il2CppObject *v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v20; // w21
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B16B9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&ShopDetailEntity_TypeInfo, v15, v16);
    byte_4B16B9F = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopDetailEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v20 = (int)list;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (methodPtr_low = LOBYTE(ShopDetailEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ShopDetailEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopDetailEntity_TypeInfo )
          v18 = (Il2CppObject *)list;
        else
          v18 = 0LL;
        if ( !v17 )
          break;
      }
      else
      {
        v18 = 0LL;
        if ( !v17 )
          break;
      }
      items = v17->fields._items;
      v30 = Method_System_Collections_Generic_List_ShopDetailEntity__Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          v18,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v18;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v18, v22, v23, v24, v25, v26, v27);
      }
      if ( v20 == ++v21 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v17,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_23:
    sub_1BCAA3C(list, v18);
  }
  if ( !v17 )
    goto LABEL_23;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v17,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}