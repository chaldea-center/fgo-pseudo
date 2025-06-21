void __fastcall ServantGroupMaster___ctor(ServantGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE1E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__, method);
    byte_4B1CE1E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    17,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_o *__fastcall ServantGroupMaster__GetEntity(
        ServantGroupMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CE1C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B1CE1C = 1;
  }
  PK = (Il2CppObject *)ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&svtId);
  return (ServantGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantGroupMaster__TryGetEntity(
        ServantGroupMaster_o *this,
        ServantGroupEntity_o **entity,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1CE1D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__, entity);
    byte_4B1CE1D = 1;
  }
  PK = (Il2CppObject *)ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_array *__fastcall ServantGroupMaster__getEntityListById(
        ServantGroupMaster_o *this,
        int32_t groupId,
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
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B1CE1F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__, *(_QWORD *)&groupId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo, v9);
    byte_4B1CE1F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( LODWORD(list->fields.items) == groupId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantGroupEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (ServantGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_array *__fastcall ServantGroupMaster__getListByServantID(
        ServantGroupMaster_o *this,
        int32_t svt_id,
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

  if ( (byte_4B1CE20 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__, *(_QWORD *)&svt_id);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo, v9);
    byte_4B1CE20 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantGroupEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( HIDWORD(list->fields.items) == svt_id )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_ServantGroupEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
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
    sub_1BCB254(list, v11);
  return (ServantGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}