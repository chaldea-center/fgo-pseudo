void __fastcall TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45702 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__, method);
    byte_4B45702 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    384,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *__fastcall TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B45700 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__,
      *(_QWORD *)&treasureBoxId);
    byte_4B45700 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32E68F4 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  Il2CppObject *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  System_Collections_ObjectModel_Collection_T__c *klass; // x26
  const char *namespaze; // x8
  unsigned __int64 v19; // x27
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B45703 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Count__,
      *(_QWORD *)&treasureBoxId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v9);
    byte_4B45703 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Item__);
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
      if ( ++v14 == v13 )
        goto LABEL_20;
    }
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)namespaze )
        sub_1BDBADC(list, v11, v15);
      if ( !v10 )
        break;
      v11 = (Il2CppObject *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v11,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v11;
        sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v11, v15, v16);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      if ( (__int64)++v19 >= (int)namespaze )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BDBAD4(list, v11);
  }
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4B45701 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__, entity);
    byte_4B45701 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}