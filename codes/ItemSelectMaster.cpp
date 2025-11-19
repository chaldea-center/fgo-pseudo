void ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6771 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
    byte_4CB6771 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    216,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB676F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
    byte_4CB676F = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_33FDB94 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
}


ItemSelectEntity_array *ItemSelectMaster__GetSelectables(
        ItemSelectMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  const MethodInfo *v6; // x4
  _BOOL8 v7; // x0
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w22
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  const MethodInfo *v16; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB6772 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
    byte_4CB6772 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  v7 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v6);
  if ( v7 )
  {
    if ( v5 )
    {
      v11 = 2;
      while ( 1 )
      {
        v8 = (Il2CppObject *)entity;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_ItemSelectEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v8,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v8;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v8, v9, v10);
        }
        v7 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, v11++, v16);
        if ( !v7 )
          return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
      }
    }
LABEL_14:
    sub_1C6BC60(v7, v8);
  }
  if ( !v5 )
    goto LABEL_14;
  return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v5,
                                     (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ItemSelectMaster__TryGetEntity(
        ItemSelectMaster_o *this,
        ItemSelectEntity_o **entity,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6770 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
    byte_4CB6770 = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}