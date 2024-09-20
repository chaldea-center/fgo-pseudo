void __fastcall ServantGroupMaster___ctor(ServantGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B891 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__);
    byte_4A5B891 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    17,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_o *__fastcall ServantGroupMaster__GetEntity(
        ServantGroupMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B88F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__);
    byte_4A5B88F = 1;
  }
  PK = (Il2CppObject *)ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&svtId);
  return (ServantGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__);
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

  if ( (byte_4A5B890 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__);
    byte_4A5B890 = 1;
  }
  PK = (Il2CppObject *)ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__);
}


ServantGroupEntity_array *__fastcall ServantGroupMaster__getEntityListById(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B892 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
    sub_1B885B0(&ServantGroupEntity_TypeInfo);
    byte_4A5B892 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(ServantGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantGroupEntity_TypeInfo
          && LODWORD(list->fields.items) == groupId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_ServantGroupEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (ServantGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}


ServantGroupEntity_array *__fastcall ServantGroupMaster__getListByServantID(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B893 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
    sub_1B885B0(&ServantGroupEntity_TypeInfo);
    byte_4A5B893 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
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
      methodPtr_low = LOBYTE(ServantGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantGroupEntity_TypeInfo
        && HIDWORD(list->fields.items) == svt_id )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_ServantGroupEntity__Add__;
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
  return (ServantGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}