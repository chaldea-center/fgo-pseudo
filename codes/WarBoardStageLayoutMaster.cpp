void __fastcall WarBoardStageLayoutMaster___ctor(WarBoardStageLayoutMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42165DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string___ctor__, method);
    byte_42165DD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    324,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageLayoutEntity_o *__fastcall WarBoardStageLayoutMaster__GetEntity(
        WarBoardStageLayoutMaster_o *this,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42165DB & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_42165DB = 1;
  }
  PK = WarBoardStageLayoutEntity__CreatePK(stageId, squareIndex, *(const MethodInfo **)&squareIndex);
  return (WarBoardStageLayoutEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266A024 *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__o *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities(
        WarBoardStageLayoutMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42165DE & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo, *(_QWORD *)&stageId);
    byte_42165DE = 1;
  }
  v5 = sub_B0D974(WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo, *(_QWORD *)&stageId, method);
  WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3___ctor(
    (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v5 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageLayoutMaster__TryGetEntity(
        WarBoardStageLayoutMaster_o *this,
        WarBoardStageLayoutEntity_o **entity,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42165DC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__TryGetEntity__,
      entity);
    byte_42165DC = 1;
  }
  PK = WarBoardStageLayoutEntity__CreatePK(stageId, squareIndex, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__TryGetEntity__);
}


void __fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3___ctor(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__MoveNext(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardStageLayoutMaster_o *_4__this; // x20
  int32_t *p_count_5__2; // x21
  int32_t v8; // w1
  int32_t *p_i_5__3; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10
  bool result; // w0
  struct WarBoardStageLayoutEntity_o **p__2__current; // x19

  v2 = this;
  if ( (byte_4211F1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)sub_B0D8A4(
                                                                                 &WarBoardStageLayoutEntity_TypeInfo,
                                                                                 v4);
    byte_4211F1A = 1;
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
      || (this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)_4__this->fields.list) == 0LL )
    {
LABEL_19:
      sub_B0D97C(this);
    }
    this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                                                                                 (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v2->fields._count_5__2 = (int)this;
    p_count_5__2 = &v2->fields._count_5__2;
    v8 = 0;
    v2->fields._i_5__3 = 0;
    p_i_5__3 = &v2->fields._i_5__3;
    while ( v8 < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
               v8,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = *(&WarBoardStageLayoutEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (WarBoardStageLayoutEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == WarBoardStageLayoutEntity_TypeInfo
          && LODWORD(Item[1].klass) == v2->fields.stageId )
        {
          v2->fields.__2__current = (struct WarBoardStageLayoutEntity_o *)Item;
          p__2__current = &v2->fields.__2__current;
          sub_B0D840(p__2__current, Item);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_15:
      v8 = *p_i_5__3 + 1;
      *p_i_5__3 = v8;
      this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)(unsigned int)*p_count_5__2;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__GetEnumerator(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *v5; // x20
  __int64 CurrentManagedThreadId; // x0
  struct WarBoardStageLayoutMaster_o *_4__this; // x1
  System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *result; // x0

  if ( (byte_4211F1B & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo, method);
    byte_4211F1B = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)sub_B0D974(
                                                                               WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo,
                                                                               method,
                                                                               v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v5->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = this->fields.__4__this;
    v5->fields.__4__this = _4__this;
    sub_B0D840(&v5->fields.__4__this, _4__this);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *)v5;
  v5->fields.stageId = this->fields.__3__stageId;
  return result;
}


WarBoardStageLayoutEntity_o *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__get_Current(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__System_IDisposable_Dispose(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}