void ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970D25 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
    byte_5970D25 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    218,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970D23 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
    byte_5970D23 = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3F157EC *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w22
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970D26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
    byte_5970D26 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  v7 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v6);
  if ( v7 )
  {
    if ( v5 )
    {
      v15 = 2;
      while ( 1 )
      {
        items = v5->fields._items;
        v8 = (Il2CppObject *)entity;
        v17 = Method_System_Collections_Generic_List_ItemSelectEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v8,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
        }
        v7 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, v15++, v20);
        if ( !v7 )
          return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
      }
    }
LABEL_14:
    sub_2213CDC(v7, v8);
  }
  if ( !v5 )
    goto LABEL_14;
  return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v5,
                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
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

  if ( (byte_5970D24 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
    byte_5970D24 = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}