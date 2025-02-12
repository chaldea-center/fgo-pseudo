void __fastcall TreasureBoxGiftMaster___ctor(TreasureBoxGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8667 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__, method);
    byte_4BC8667 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    381,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall TreasureBoxGiftMaster__GetEmissionItemList(
        TreasureBoxGiftMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x21
  __int64 klass_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4BC8668 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_TreasureBoxGiftEntity__get_Count__, *(_QWORD *)&id);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_TreasureBoxGiftEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4BC8668 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_TreasureBoxGiftEntity__get_Count__);
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
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_TreasureBoxGiftEntity__get_Item__);
      if ( list && LODWORD(list->fields.items) == id )
      {
        if ( !v10 )
          break;
        klass_low = LODWORD(list[1].klass);
        items = v10->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            klass_low,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = klass_low;
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C1AE30(list, klass_low);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxGiftEntity_o *__fastcall TreasureBoxGiftMaster__GetEntity(
        TreasureBoxGiftMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8665 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4BC8665 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_324D130 *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureBoxGiftMaster__TryGetEntity(
        TreasureBoxGiftMaster_o *this,
        TreasureBoxGiftEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8666 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__, entity);
    byte_4BC8666 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__);
}