void FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938A18 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
    byte_5938A18 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    277,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5938A1A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_5938A1A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_21FFECC(list, v6);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5938A19 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_5938A19 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v8 = list;
      if ( HIDWORD(list->fields.items) == groupType && (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v7 )
          goto LABEL_16;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_16;
  }
  if ( !v7 )
LABEL_16:
    sub_21FFECC(list, v8);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}