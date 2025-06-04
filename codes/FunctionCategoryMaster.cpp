void __fastcall FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02270 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__, method);
    byte_4B02270 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    275,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByFlag(
        FunctionCategoryMaster_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B02272 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__, *(_QWORD *)&flag);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v9);
    byte_4B02272 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1BC3264(list, v11);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v10,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByGroupType(
        FunctionCategoryMaster_o *this,
        int32_t groupType,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v15; // w23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B02271 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__,
      *(_QWORD *)&groupType);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v11);
    byte_4B02271 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v15,
                                                               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v13 = list;
      if ( HIDWORD(list->fields.items) == groupType && (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v12 )
          goto LABEL_19;
        items = v12->fields._items;
        v19 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v13;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v12 )
LABEL_19:
    sub_1BC3264(list, v13);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v12,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}