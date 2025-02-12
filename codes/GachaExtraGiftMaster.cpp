void __fastcall GachaExtraGiftMaster___ctor(GachaExtraGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7D40 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__, method);
    byte_4BC7D40 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    462,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaExtraGiftEntity_o *__fastcall GachaExtraGiftMaster__GetEntity(
        GachaExtraGiftMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7D41 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4BC7D41 = 1;
  }
  PK = (Il2CppObject *)GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&giftId);
  return (GachaExtraGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_324D130 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GachaExtraGiftEntity_array *__fastcall GachaExtraGiftMaster__GetListGachaExtraGift(
        GachaExtraGiftMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BC7D3F & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Count__,
      *(_QWORD *)&gachaId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__get_Count__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo, v10);
    byte_4BC7D3F = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( *(_DWORD *)(list + 16) == gachaId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v23 = Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v12;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 4), v12, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C1AE30(list, v12);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_19;
  if ( v11->fields._size )
    return (GachaExtraGiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v11,
                                           (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__);
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaExtraGiftMaster__TryGetEntity(
        GachaExtraGiftMaster_o *this,
        GachaExtraGiftEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7D42 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__, entity);
    byte_4BC7D42 = 1;
  }
  PK = (Il2CppObject *)GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__);
}