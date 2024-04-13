void __fastcall WarBoardStageLayoutMaster___ctor(WarBoardStageLayoutMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABD4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EABD4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    325,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageLayoutEntity_o *__fastcall WarBoardStageLayoutMaster__GetEntity(
        WarBoardStageLayoutMaster_o *this,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EABD2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__GetEntity__,
      stageId,
      squareIndex,
      method);
    byte_42EABD2 = 1;
  }
  PK = WarBoardStageLayoutEntity__CreatePK(stageId, squareIndex, *(const MethodInfo **)&squareIndex);
  return (WarBoardStageLayoutEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__o *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities(
        WarBoardStageLayoutMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EABD5 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo, stageId, (_DWORD)method, v3);
    byte_42EABD5 = 1;
  }
  v6 = sub_B5D694(WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo);
  WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3___ctor(
    (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__o *)v6;
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

  if ( (byte_42EABD3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__TryGetEntity__,
      (_DWORD)entity,
      stageId,
      *(_QWORD *)&squareIndex);
    byte_42EABD3 = 1;
  }
  PK = WarBoardStageLayoutEntity__CreatePK(stageId, squareIndex, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__TryGetEntity__);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct WarBoardStageLayoutMaster_o *_4__this; // x20
  int32_t *p_count_5__2; // x21
  int32_t *p_i_5__3; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10
  bool result; // w0
  struct WarBoardStageLayoutEntity_o **p__2__current; // x19

  v4 = this;
  if ( (byte_42E5FD8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)sub_B5D5C4(
                                                                                 &WarBoardStageLayoutEntity_TypeInfo,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10);
    byte_42E5FD8 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_i_5__3 = &v4->fields._i_5__3;
    p_count_5__2 = &v4->fields._count_5__2;
    v4->fields.__1__state = -1;
    goto LABEL_15;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)_4__this->fields.list) == 0LL )
    {
LABEL_19:
      sub_B5D69C(this, method);
    }
    this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                                                                                 (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v4->fields._count_5__2 = (int)this;
    p_count_5__2 = &v4->fields._count_5__2;
    method = 0LL;
    v4->fields._i_5__3 = 0;
    p_i_5__3 = &v4->fields._i_5__3;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
               (int32_t)method,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = *(&WarBoardStageLayoutEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (WarBoardStageLayoutEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == WarBoardStageLayoutEntity_TypeInfo
          && LODWORD(Item[1].klass) == v4->fields.stageId )
        {
          v4->fields.__2__current = (struct WarBoardStageLayoutEntity_o *)Item;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_15:
      method = (const MethodInfo *)(unsigned int)(*p_i_5__3 + 1);
      *p_i_5__3 = (int)method;
      this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)(unsigned int)*p_count_5__2;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__GetEnumerator(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *result; // x0

  if ( (byte_42E5FD9 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FD9 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)sub_B5D694(WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v6->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    v6->fields.__4__this = this->fields.__4__this;
    sub_B5D560(&v6->fields.__4__this);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *)v6;
  v6->fields.stageId = this->fields.__3__stageId;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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