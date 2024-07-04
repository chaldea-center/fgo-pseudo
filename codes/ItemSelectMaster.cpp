void __fastcall ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2B19 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__, method);
    byte_48E2B19 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    209,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *__fastcall ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E2B17 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__, *(_QWORD *)&itemId);
    byte_48E2B17 = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_array *__fastcall ItemSelectMaster__GetSelectables(
        ItemSelectMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  const MethodInfo *v9; // x4
  _BOOL8 v10; // x0
  Il2CppObject *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w22
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E2B1A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__, *(_QWORD *)&itemId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo, v7);
    byte_48E2B1A = 1;
  }
  entity = 0LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  v10 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v9);
  if ( v10 )
  {
    if ( v8 )
    {
      v14 = 2;
      while ( 1 )
      {
        v11 = (Il2CppObject *)entity;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_ItemSelectEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v11,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v11;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v11, v12, v13);
        }
        v10 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, v14++, v19);
        if ( !v10 )
          return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v8,
                                             (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
      }
    }
LABEL_14:
    sub_1B00F28(v10, v11);
  }
  if ( !v8 )
    goto LABEL_14;
  return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v8,
                                     (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemSelectMaster__TryGetEntity(
        ItemSelectMaster_o *this,
        ItemSelectEntity_o **entity,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_48E2B18 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__, entity);
    byte_48E2B18 = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}