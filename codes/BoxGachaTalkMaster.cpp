void __fastcall BoxGachaTalkMaster___ctor(BoxGachaTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C203 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__, method);
    byte_4B1C203 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    130,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
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

  if ( (byte_4B1C201 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B1C201 = 1;
  }
  PK = (Il2CppObject *)BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&no);
  return (BoxGachaTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_32CC8B8 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
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

  if ( (byte_4B1C202 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__, entity);
    byte_4B1C202 = 1;
  }
  PK = (Il2CppObject *)BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&guideImageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData(
        BoxGachaTalkMaster_o *this,
        int32_t id,
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

  if ( (byte_4B1C204 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Count__, *(_QWORD *)&id);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v9);
    byte_4B1C204 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Count__);
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
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( id < 1 || LODWORD(list->fields.items) == id )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__;
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
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCB254(list, v11);
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData_41003256(
        BoxGachaTalkMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x1
  void *list; // x0
  int v14; // w22
  int32_t v15; // w23
  Il2CppObject *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B1C205 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Count__, ids);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v10);
    byte_4B1C205 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v15,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_BoxGachaTalkEntity__get_Item__);
      if ( list )
      {
        v16 = (Il2CppObject *)list;
        list = (void *)System_Linq_Enumerable__Contains_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              v16,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v16;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(list, v12);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}