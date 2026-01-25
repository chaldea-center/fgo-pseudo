void TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF34F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
    byte_4CEF34F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    384,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF34D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
    byte_4CEF34D = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3432DB4 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
}


System_String_array *TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_ObjectModel_Collection_T__c *klass; // x26
  const char *namespaze; // x8
  unsigned __int64 v18; // x27
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4CEF350 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CEF350 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Item__);
      if ( list && LODWORD(list->fields.items) == treasureBoxId )
      {
        klass = list[1].klass;
        if ( !klass )
          goto LABEL_22;
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
          break;
      }
LABEL_19:
      if ( ++v9 == v8 )
        goto LABEL_20;
    }
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)namespaze )
        sub_1C7BD48(list);
      if ( !v5 )
        break;
      v6 = (Il2CppObject *)*((_QWORD *)&klass->_1.byval_arg.data + v18);
      items = v5->fields._items;
      v20 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v6,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v6;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      if ( (__int64)++v18 >= (int)namespaze )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C7BD40(list, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool TreasureBoxTalkMaster__TryGetEntity(
        TreasureBoxTalkMaster_o *this,
        TreasureBoxTalkEntity_o **entity,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF34E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
    byte_4CEF34E = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}