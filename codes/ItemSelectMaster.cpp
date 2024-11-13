void __fastcall ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16527 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__, method, v2);
    byte_4B16527 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    210,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *__fastcall ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16525 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__,
      *(_QWORD *)&itemId,
      *(_QWORD *)&idx);
    byte_4B16525 = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_array *__fastcall ItemSelectMaster__GetSelectables(
        ItemSelectMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x21
  const MethodInfo *v13; // x4
  _BOOL8 v14; // x0
  Il2CppObject *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int32_t v22; // w22
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo *v27; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16528 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__, *(_QWORD *)&itemId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo, v10, v11);
    byte_4B16528 = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemSelectEntity__TypeInfo,
                                                       *(_QWORD *)&itemId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  v14 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v13);
  if ( v14 )
  {
    if ( v12 )
    {
      v22 = 2;
      while ( 1 )
      {
        v15 = (Il2CppObject *)entity;
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_ItemSelectEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v15,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v15;
          sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
        }
        v14 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, v22++, v27);
        if ( !v14 )
          return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v12,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
      }
    }
LABEL_14:
    sub_1BCAA3C(v14, v15);
  }
  if ( !v12 )
    goto LABEL_14;
  return (ItemSelectEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v12,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
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

  if ( (byte_4B16526 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&itemId);
    byte_4B16526 = 1;
  }
  PK = (Il2CppObject *)ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}