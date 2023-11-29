void __fastcall WarBoardActionPointMaster___ctor(WarBoardActionPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8C16 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__, method);
    byte_40F8C16 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    321,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointEntity_o *__fastcall WarBoardActionPointMaster__GetEntity(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F8C14 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_40F8C14 = 1;
  }
  PK = WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardActionPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266F7D8 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8C17 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo, *(_QWORD *)&stageId);
    byte_40F8C17 = 1;
  }
  v7 = sub_B170CC(
         WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo,
         *(_QWORD *)&stageId,
         method,
         v3,
         v4);
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3___ctor(
    (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)v7,
    -2,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardActionPointMaster__TryGetEntity(
        WarBoardActionPointMaster_o *this,
        WarBoardActionPointEntity_o **entity,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F8C15 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__,
      entity);
    byte_40F8C15 = 1;
  }
  PK = WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__);
}


void __fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3___ctor(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__MoveNext(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardActionPointMaster_o *_4__this; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t *p_count_5__2; // x21
  int32_t v10; // w1
  int32_t *p_i_5__3; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  struct WarBoardActionPointEntity_o *Item; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x10
  bool result; // w0
  struct WarBoardActionPointEntity_o **p__2__current; // x19

  if ( (byte_40F7ABD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&WarBoardActionPointEntity_TypeInfo, v4);
    byte_40F7ABD = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_i_5__3 = &this->fields._i_5__3;
    p_count_5__2 = &this->fields._count_5__2;
    this->fields.__1__state = -1;
    goto LABEL_15;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this
      || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)_4__this->fields.list) == 0LL )
    {
LABEL_19:
      sub_B170D4();
    }
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    this->fields._count_5__2 = Count;
    p_count_5__2 = &this->fields._count_5__2;
    v10 = 0;
    this->fields._i_5__3 = 0;
    p_i_5__3 = &this->fields._i_5__3;
    while ( v10 < Count )
    {
      if ( !_4__this )
        goto LABEL_19;
      v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)_4__this->fields.list;
      if ( !v12 )
        goto LABEL_19;
      Item = (struct WarBoardActionPointEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                     v12,
                                                     v10,
                                                     (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = *(&WarBoardActionPointEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (WarBoardActionPointEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == WarBoardActionPointEntity_TypeInfo
          && Item->fields.stageId == this->fields.stageId )
        {
          this->fields.__2__current = Item;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)Item,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_15:
      v10 = *p_i_5__3 + 1;
      *p_i_5__3 = v10;
      Count = *p_count_5__2;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__GetEnumerator(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t l__initialThreadId; // w20
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *result; // x0

  if ( (byte_40F7ABE & 1) == 0 )
  {
    sub_B16FFC(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo, method);
    byte_40F7ABE = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    v7 = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_B170CC(
                                                                               WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    v7->fields.__1__state = 0;
    v7->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v7 )
      sub_B170D4();
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v7->fields.__4__this = (struct WarBoardActionPointMaster_o *)_4__this;
    sub_B16F98((BattleServantConfConponent_o *)&v7->fields.__4__this, _4__this, v8, v9, v10, v11, v12, v13);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *)v7;
  v7->fields.stageId = this->fields.__3__stageId;
  return result;
}


WarBoardActionPointEntity_o *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__get_Current(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_IDisposable_Dispose(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}