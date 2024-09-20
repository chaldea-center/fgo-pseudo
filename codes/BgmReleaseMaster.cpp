void __fastcall BgmReleaseMaster___ctor(BgmReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE1A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__);
    byte_4A5AE1A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    193,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BgmReleaseEntity_o *__fastcall BgmReleaseMaster__GetEntity(
        BgmReleaseMaster_o *this,
        int32_t bgmId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AE18 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__);
    byte_4A5AE18 = 1;
  }
  PK = (Il2CppObject *)BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&id);
  return (BgmReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmReleaseMaster__TryGetEntity(
        BgmReleaseMaster_o *this,
        BgmReleaseEntity_o **entity,
        int32_t bgmId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5AE19 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__);
    byte_4A5AE19 = 1;
  }
  PK = (Il2CppObject *)BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&bgmId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__);
}


BgmReleaseEntity_array *__fastcall BgmReleaseMaster__getEntitys(
        BgmReleaseMaster_o *this,
        int32_t id,
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

  if ( (byte_4A5AE1B & 1) == 0 )
  {
    sub_1B885B0(&BgmReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BgmReleaseEntity__TypeInfo);
    byte_4A5AE1B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BgmReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__);
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
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(BgmReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (BgmReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != BgmReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_BgmReleaseEntity__Add__;
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
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (BgmReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v5,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__);
}