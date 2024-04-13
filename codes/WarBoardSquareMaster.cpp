void __fastcall WarBoardSquareMaster___ctor(WarBoardSquareMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EABC1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    319,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareEntity_o *__fastcall WarBoardSquareMaster__GetEntity(
        WarBoardSquareMaster_o *this,
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EABBF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__GetEntity__,
      warBoardId,
      squareIndex,
      method);
    byte_42EABBF = 1;
  }
  PK = WarBoardSquareEntity__CreatePK(warBoardId, squareIndex, *(const MethodInfo **)&squareIndex);
  return (WarBoardSquareEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardSquareEntity__o *__fastcall WarBoardSquareMaster__GetWarBoardSquareEntities(
        WarBoardSquareMaster_o *this,
        int32_t warBoardId,
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

  if ( (byte_42EABC2 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo, warBoardId, (_DWORD)method, v3);
    byte_42EABC2 = 1;
  }
  v6 = sub_B5D694(WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo);
  WarBoardSquareMaster__GetWarBoardSquareEntities_d__3___ctor(
    (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 52) = warBoardId;
  return (System_Collections_Generic_IEnumerable_WarBoardSquareEntity__o *)v6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardSquareMaster__TryGetEntity(
        WarBoardSquareMaster_o *this,
        WarBoardSquareEntity_o **entity,
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EABC0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__TryGetEntity__,
      (_DWORD)entity,
      warBoardId,
      *(_QWORD *)&squareIndex);
    byte_42EABC0 = 1;
  }
  PK = WarBoardSquareEntity__CreatePK(warBoardId, squareIndex, *(const MethodInfo **)&warBoardId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__TryGetEntity__);
}


void __fastcall WarBoardSquareMaster__GetWarBoardSquareEntities_d__3___ctor(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__MoveNext(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct WarBoardSquareMaster_o *_4__this; // x20
  int32_t *p_count_5__2; // x21
  int32_t *p_i_5__3; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10
  bool result; // w0
  struct WarBoardSquareEntity_o **p__2__current; // x19

  v4 = this;
  if ( (byte_42E5FD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)sub_B5D5C4(
                                                                       &WarBoardSquareEntity_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10);
    byte_42E5FD6 = 1;
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
    if ( !_4__this || (this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)_4__this->fields.list) == 0LL )
LABEL_19:
      sub_B5D69C(this, method);
    this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
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
      this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
               (int32_t)method,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = *(&WarBoardSquareEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (WarBoardSquareEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == WarBoardSquareEntity_TypeInfo
          && LODWORD(Item[2].klass) == v4->fields.warBoardId )
        {
          v4->fields.__2__current = (struct WarBoardSquareEntity_o *)Item;
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
      this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)(unsigned int)*p_count_5__2;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardSquareEntity__o *__fastcall WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardSquareEntity__GetEnumerator(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_WarBoardSquareEntity__o *result; // x0

  if ( (byte_42E5FD7 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FD7 = 1;
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
    v6 = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)sub_B5D694(WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v6->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    v6->fields.__4__this = this->fields.__4__this;
    sub_B5D560(&v6->fields.__4__this);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardSquareEntity__o *)v6;
  v6->fields.warBoardId = this->fields.__3__warBoardId;
  return result;
}


WarBoardSquareEntity_o *__fastcall WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardSquareEntity__get_Current(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_IDisposable_Dispose(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}