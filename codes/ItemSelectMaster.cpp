void __fastcall ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4A2D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__, method);
    byte_4BB4A2D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    214,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *__fastcall ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4A2B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__, *(_QWORD *)&itemId);
    byte_4BB4A2B = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_323D0DC *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w22
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4A2E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__, *(_QWORD *)&itemId);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo, v7);
    byte_4BB4A2E = 1;
  }
  entity = 0LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  v10 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v9);
  if ( v10 )
  {
    if ( v8 )
    {
      v18 = 2;
      while ( 1 )
      {
        v11 = (Il2CppObject *)entity;
        items = v8->fields._items;
        v20 = Method_System_Collections_Generic_List_ItemSelectEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v11,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v11, v12, v13, v14, v15, v16, v17);
        }
        v10 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, v18++, v23);
        if ( !v10 )
          return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v8,
                                             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
      }
    }
LABEL_14:
    sub_1C13F80(v10, v11);
  }
  if ( !v8 )
    goto LABEL_14;
  return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v8,
                                     (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
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

  if ( (byte_4BB4A2C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__, entity);
    byte_4BB4A2C = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}