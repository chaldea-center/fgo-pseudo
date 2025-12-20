void ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D38B & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
    byte_4D2D38B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    182,
    (const MethodInfo_345919C *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDetailEntity_o *ShopDetailMaster__getShopDetailEntity(
        ShopDetailMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ShopDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22

  if ( (byte_4D2D38C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
    byte_4D2D38C = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
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
                                       (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.shopId == id )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_1C942F0(result, *(_QWORD *)&id);
  }
  return 0;
}


ShopDetailEntity_array *ShopDetailMaster__getShopDetailEntityList(ShopDetailMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4D2D38D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
    byte_4D2D38D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Count__);
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
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_ShopDetailEntity__get_Item__);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v15 = Method_System_Collections_Generic_List_ShopDetailEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      v17 = list;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)list,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
      }
      if ( v6 == ++v7 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_16:
    sub_1C942F0(list, v4);
  }
  if ( !v3 )
    goto LABEL_16;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v3,
                                     (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}