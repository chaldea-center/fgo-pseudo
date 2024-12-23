void __fastcall FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E01 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__, method);
    byte_4B66E01 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    273,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int32_t v14; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B66E03 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&flag);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&FunctionCategoryEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v10);
    byte_4B66E03 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(FunctionCategoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(FunctionCategoryEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == FunctionCategoryEntity_TypeInfo
        && (*(_DWORD *)(list + 36) & flag) != 0 )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v12, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BE4D28(list, v12);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v11,
                                           (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x22
  int64_t v14; // x1
  int64_t list; // x0
  int32_t v16; // w23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4B66E02 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&FunctionCategoryEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v12);
    byte_4B66E02 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v16 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v16,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v14 = list;
      methodPtr_low = LOBYTE(FunctionCategoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(FunctionCategoryEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == FunctionCategoryEntity_TypeInfo
        && *(_DWORD *)(list + 20) == groupType
        && (*(_DWORD *)(list + 36) & flag) != 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        items = v13->fields._items;
        v25 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v14;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 4), v14, v17, v18, v19, v20, v21, v22);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v13 )
LABEL_21:
    sub_1BE4D28(list, v14);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v13,
                                           (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}