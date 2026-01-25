void GachaExtraGiftMaster___ctor(GachaExtraGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA35 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__);
    byte_4CEEA35 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    464,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaExtraGiftEntity_o *GachaExtraGiftMaster__GetEntity(
        GachaExtraGiftMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEA36 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__);
    byte_4CEEA36 = 1;
  }
  PK = (Il2CppObject *)GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&giftId);
  return (GachaExtraGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3432DB4 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__);
}


GachaExtraGiftEntity_array *GachaExtraGiftMaster__GetListGachaExtraGift(
        GachaExtraGiftMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CEEA34 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo);
    byte_4CEEA34 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Count__);
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
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_GachaExtraGiftEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == gachaId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C7BD40(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_19;
  if ( v5->fields._size )
    return (GachaExtraGiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool GachaExtraGiftMaster__TryGetEntity(
        GachaExtraGiftMaster_o *this,
        GachaExtraGiftEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEA37 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__);
    byte_4CEEA37 = 1;
  }
  PK = (Il2CppObject *)GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__);
}