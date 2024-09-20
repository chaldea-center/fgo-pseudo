void __fastcall TreasureBoxGiftMaster___ctor(TreasureBoxGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__);
    byte_4A5BCB5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    377,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__);
}


System_Int32_array *__fastcall TreasureBoxGiftMaster__GetEmissionItemList(
        TreasureBoxGiftMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 klass_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4A5BCB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&TreasureBoxGiftEntity_TypeInfo);
    byte_4A5BCB6 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(TreasureBoxGiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureBoxGiftEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureBoxGiftEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          klass_low = LODWORD(list[1].klass);
          items = v5->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              klass_low,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size + 1] = klass_low;
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, klass_low);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxGiftEntity_o *__fastcall TreasureBoxGiftMaster__GetEntity(
        TreasureBoxGiftMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BCB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__);
    byte_4A5BCB3 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__);
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

  if ( (byte_4A5BCB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__);
    byte_4A5BCB4 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__);
}