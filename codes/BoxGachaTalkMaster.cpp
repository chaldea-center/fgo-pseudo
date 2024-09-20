void __fastcall BoxGachaTalkMaster___ctor(BoxGachaTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE75 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
    byte_4A5AE75 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    126,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaTalkEntity_o *__fastcall BoxGachaTalkMaster__GetEntity(
        BoxGachaTalkMaster_o *this,
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AE73 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
    byte_4A5AE73 = 1;
  }
  PK = (Il2CppObject *)BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&no);
  return (BoxGachaTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoxGachaTalkMaster__TryGetEntity(
        BoxGachaTalkMaster_o *this,
        BoxGachaTalkEntity_o **entity,
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5AE74 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
    byte_4A5AE74 = 1;
  }
  PK = (Il2CppObject *)BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&guideImageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData(
        BoxGachaTalkMaster_o *this,
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

  if ( (byte_4A5AE76 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaTalkEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
    byte_4A5AE76 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
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
        methodPtr_low = LOBYTE(BoxGachaTalkEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BoxGachaTalkEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BoxGachaTalkEntity_TypeInfo
          && (id < 1 || LODWORD(list->fields.items) == id) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__;
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
        goto LABEL_19;
    }
LABEL_21:
    sub_1B8880C(list, v6);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData_38992780(
        BoxGachaTalkMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int v8; // w22
  int32_t v9; // w23
  Il2CppObject *v10; // x24
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5AE77 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaTalkEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
    byte_4A5AE77 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(BoxGachaTalkEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BoxGachaTalkEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BoxGachaTalkEntity_TypeInfo )
        {
          list = (void *)System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v15 = Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v10,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v10;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
            }
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
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}