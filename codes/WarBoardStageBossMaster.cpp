void __fastcall WarBoardStageBossMaster___ctor(WarBoardStageBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFB19 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__, method);
    byte_49FFB19 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    468,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageBossEntity_o *__fastcall WarBoardStageBossMaster__GetEntity(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FFB1A & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_49FFB1A = 1;
  }
  PK = (Il2CppObject *)WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardStageBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D6AF0 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardStageBossEntity__o *__fastcall WarBoardStageBossMaster__GetEntityList(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FFB18 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo, v8);
    sub_1B64A00(&WarBoardStageBossEntity_TypeInfo, v9);
    byte_49FFB18 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = list;
      methodPtr_low = LOBYTE(WarBoardStageBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarBoardStageBossEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardStageBossEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == stageId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v10;
    }
LABEL_18:
    sub_1B64C5C(list, v11);
  }
  return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageBossMaster__TryGetEntity(
        WarBoardStageBossMaster_o *this,
        WarBoardStageBossEntity_o **entity,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FFB1B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__, entity);
    byte_49FFB1B = 1;
  }
  PK = (Il2CppObject *)WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__);
}