void WarBoardStageBossMaster___ctor(WarBoardStageBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59399DD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__);
    byte_59399DD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    476,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageBossEntity_o *WarBoardStageBossMaster__GetEntity(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59399DE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__);
    byte_59399DE = 1;
  }
  PK = (Il2CppObject *)WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardStageBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardStageBossEntity__o *WarBoardStageBossMaster__GetEntityList(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_59399DC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardStageBossEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardStageBossEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo);
    byte_59399DC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_WarBoardStageBossEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageBossEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == stageId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v5;
    }
LABEL_16:
    sub_21FFECC(list, v6);
  }
  return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardStageBossMaster__TryGetEntity(
        WarBoardStageBossMaster_o *this,
        WarBoardStageBossEntity_o **entity,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59399DF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__);
    byte_59399DF = 1;
  }
  PK = (Il2CppObject *)WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__);
}