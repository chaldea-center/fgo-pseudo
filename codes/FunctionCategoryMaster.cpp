void FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30D3E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
    byte_4D30D3E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    275,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
}


FunctionCategoryEntity_array *FunctionCategoryMaster__GetEntitiesByFlag(
        FunctionCategoryMaster_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D30D40 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_4D30D40 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C93D2C(list, v6);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}


FunctionCategoryEntity_array *FunctionCategoryMaster__GetEntitiesByGroupType(
        FunctionCategoryMaster_o *this,
        int32_t groupType,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4D30D3F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_4D30D3F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v8 = list;
      if ( HIDWORD(list->fields.items) == groupType && (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v7 )
          goto LABEL_19;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v7 )
LABEL_19:
    sub_1C93D2C(list, v8);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}