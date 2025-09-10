void TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27FAC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
    byte_4C27FAC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    384,
    (const MethodInfo_338A52C *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27FAA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
    byte_4C27FAA = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_338C850 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  System_Collections_ObjectModel_Collection_T__c *klass; // x26
  const char *namespaze; // x8
  unsigned __int64 v14; // x27
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C27FAD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C27FAD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxTalkEntity__get_Item__);
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
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)namespaze )
        sub_1C2D6F4(list, v6, v10);
      if ( !v5 )
        break;
      v6 = (Il2CppObject *)*((_QWORD *)&klass->_1.byval_arg.data + v14);
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v6,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v6;
        sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v6, v10, v11);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      if ( (__int64)++v14 >= (int)namespaze )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C2D6EC(list, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4C27FAB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
    byte_4C27FAB = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}