void __fastcall TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCBD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
    byte_4A5BCBD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    378,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *__fastcall TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BCBB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
    byte_4A5BCBB = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
}


System_String_array *__fastcall TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v15; // x28
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5BCBE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&TreasureBoxTalkEntity_TypeInfo);
    byte_4A5BCBE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
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
        goto LABEL_24;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(TreasureBoxTalkEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureBoxTalkEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureBoxTalkEntity_TypeInfo
          && LODWORD(list->fields.items) == treasureBoxId )
        {
          klass = list[1].klass;
          if ( !klass )
            goto LABEL_24;
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
            break;
        }
      }
LABEL_21:
      if ( ++v9 == v8 )
        goto LABEL_22;
    }
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)namespaze )
        sub_1B88814(list, v6);
      if ( !v5 )
        break;
      v6 = (Il2CppObject *)*((_QWORD *)&klass->_1.byval_arg.data + v15);
      items = v5->fields._items;
      v17 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v6,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v6;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v6, v10, v11);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      if ( (__int64)++v15 >= (int)namespaze )
        goto LABEL_21;
    }
LABEL_24:
    sub_1B8880C(list, v6);
  }
LABEL_22:
  if ( !v5 )
    goto LABEL_24;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureBoxTalkMaster__TryGetEntity(
        TreasureBoxTalkMaster_o *this,
        TreasureBoxTalkEntity_o **entity,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BCBC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
    byte_4A5BCBC = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}