void ServantGroupMaster___ctor(ServantGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEFBA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__);
    byte_4CEEFBA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    17,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_o *ServantGroupMaster__GetEntity(
        ServantGroupMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEFB8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__);
    byte_4CEEFB8 = 1;
  }
  PK = (Il2CppObject *)ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&svtId);
  return (ServantGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantGroupMaster__TryGetEntity(
        ServantGroupMaster_o *this,
        ServantGroupEntity_o **entity,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEFB9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__);
    byte_4CEEFB9 = 1;
  }
  PK = (Il2CppObject *)ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__);
}


ServantGroupEntity_array *ServantGroupMaster__getEntityListById(
        ServantGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CEEFBB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
    byte_4CEEFBB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == groupId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantGroupEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C7BD40(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (ServantGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}


ServantGroupEntity_array *ServantGroupMaster__getListByServantID(
        ServantGroupMaster_o *this,
        int32_t svt_id,
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

  if ( (byte_4CEEFBC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
    byte_4CEEFBC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == svt_id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_ServantGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
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
    sub_1C7BD40(list, v6);
  return (ServantGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}