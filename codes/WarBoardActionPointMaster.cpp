void __fastcall WarBoardActionPointMaster___ctor(WarBoardActionPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41867A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__, method);
    byte_41867A8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    321,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__);
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

  if ( (byte_41867A6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_41867A6 = 1;
  }
  PK = WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardActionPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_41867A9 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo, *(_QWORD *)&stageId);
    byte_41867A9 = 1;
  }
  v5 = sub_B2C42C(WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3___ctor(
    (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *)v5;
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

  if ( (byte_41867A7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__,
      entity);
    byte_41867A7 = 1;
  }
  PK = WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__);
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
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardActionPointMaster_o *_4__this; // x20
  int32_t *p_count_5__2; // x21
  int32_t *p_i_5__3; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v10; // x10
  bool result; // w0
  struct WarBoardActionPointEntity_o **p__2__current; // x19

  v2 = this;
  if ( (byte_418571B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_B2C35C(
                                                                                 &WarBoardActionPointEntity_TypeInfo,
                                                                                 v4);
    byte_418571B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_i_5__3 = &v2->fields._i_5__3;
    p_count_5__2 = &v2->fields._count_5__2;
    v2->fields.__1__state = -1;
    goto LABEL_15;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)_4__this->fields.list) == 0LL )
    {
LABEL_19:
      sub_B2C434(this, method);
    }
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                                                                                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v2->fields._count_5__2 = (int)this;
    p_count_5__2 = &v2->fields._count_5__2;
    method = 0LL;
    v2->fields._i_5__3 = 0;
    p_i_5__3 = &v2->fields._i_5__3;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
               (int32_t)method,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = *(&WarBoardActionPointEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (WarBoardActionPointEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] == WarBoardActionPointEntity_TypeInfo
          && LODWORD(Item[1].klass) == v2->fields.stageId )
        {
          v2->fields.__2__current = (struct WarBoardActionPointEntity_o *)Item;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, Item);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_15:
      method = (const MethodInfo *)(unsigned int)(*p_i_5__3 + 1);
      *p_i_5__3 = (int)method;
      this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)(unsigned int)*p_count_5__2;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__GetEnumerator(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  struct WarBoardActionPointMaster_o *_4__this; // x1
  System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *result; // x0

  if ( (byte_418571C & 1) == 0 )
  {
    sub_B2C35C(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo, method);
    byte_418571C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_B2C42C(WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_B2C2F8(&v4->fields.__4__this, _4__this);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *)v4;
  v4->fields.stageId = this->fields.__3__stageId;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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