void __fastcall GachaExtraGiftMaster___ctor(GachaExtraGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB10A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__, method);
    byte_49BB10A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    464,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__);
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

  if ( (byte_49BB10B & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_49BB10B = 1;
  }
  PK = (Il2CppObject *)GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&giftId);
  return (GachaExtraGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31A2454 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49BB109 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Count__,
      *(_QWORD *)&gachaId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__get_Count__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo, v10);
    byte_49BB109 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( LODWORD(list->fields.items) == gachaId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v19 = Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v12;
            sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_15;
    }
LABEL_19:
    sub_1B4D1EC(list, v12);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_19;
  if ( v11->fields._size )
    return (GachaExtraGiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v11,
                                           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__);
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

  if ( (byte_49BB10C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__, entity);
    byte_49BB10C = 1;
  }
  PK = (Il2CppObject *)GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__);
}