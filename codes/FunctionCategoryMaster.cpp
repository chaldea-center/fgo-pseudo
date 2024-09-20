void __fastcall FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B39B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
    byte_4A5B39B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    269,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
}


FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByFlag(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B39D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&FunctionCategoryEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_4A5B39D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(FunctionCategoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (FunctionCategoryEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == FunctionCategoryEntity_TypeInfo
        && (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}


FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByGroupType(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B39C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&FunctionCategoryEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_4A5B39C = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v8 = list;
      methodPtr_low = LOBYTE(FunctionCategoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (FunctionCategoryEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == FunctionCategoryEntity_TypeInfo
        && HIDWORD(list->fields.items) == groupType
        && (HIDWORD(list[1].monitor) & flag) != 0 )
      {
        if ( !v7 )
          goto LABEL_21;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v8, v11, v12);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v7 )
LABEL_21:
    sub_1B8880C(list, v8);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}