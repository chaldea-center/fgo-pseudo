void __fastcall FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4918 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__, method);
    byte_4BB4918 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    273,
    (const MethodInfo_3236300 *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
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
  int64_t v11; // x1
  int64_t list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BB491A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__, *(_QWORD *)&flag);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v9);
    byte_4BB491A = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( (*(_DWORD *)(list + 36) & flag) != 0 )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C13F80(list, v11);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v10,
                                           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
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
  int64_t v13; // x1
  int64_t list; // x0
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BB4919 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__,
      *(_QWORD *)&groupType);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v11);
    byte_4BB4919 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v15 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v15,
                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_FunctionCategoryEntity__get_Item__);
    if ( list )
    {
      v13 = list;
      if ( *(_DWORD *)(list + 20) == groupType && (*(_DWORD *)(list + 36) & flag) != 0 )
      {
        if ( !v12 )
          goto LABEL_19;
        items = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v13;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 4), v13, v16, v17, v18, v19, v20, v21);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v12 )
LABEL_19:
    sub_1C13F80(list, v13);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v12,
                                           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}