void __fastcall WarBoardRoadMaster___ctor(WarBoardRoadMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF4E3 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string___ctor__, method);
    byte_49FF4E3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    321,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardRoadEntity_o *__fastcall WarBoardRoadMaster__GetEntity(
        WarBoardRoadMaster_o *this,
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF4E1 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__GetEntity__,
      *(_QWORD *)&warBoardId);
    byte_49FF4E1 = 1;
  }
  PK = (Il2CppObject *)WarBoardRoadEntity__CreatePK(
                         warBoardId,
                         squareIndex1,
                         squareIndex2,
                         *(const MethodInfo **)&squareIndex2);
  return (WarBoardRoadEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30D64D8 *)Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_WarBoardRoadEntity__o *__fastcall WarBoardRoadMaster__GetWarBoardRoadEntities(
        WarBoardRoadMaster_o *this,
        int32_t warBoardId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF4E4 & 1) == 0 )
  {
    sub_1B64870(&WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo, *(_QWORD *)&warBoardId);
    byte_49FF4E4 = 1;
  }
  v5 = sub_1B64ABC(WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 52) = warBoardId;
  return (System_Collections_Generic_IEnumerable_WarBoardRoadEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardRoadMaster__TryGetEntity(
        WarBoardRoadMaster_o *this,
        WarBoardRoadEntity_o **entity,
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF4E2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__TryGetEntity__, entity);
    byte_49FF4E2 = 1;
  }
  PK = (Il2CppObject *)WarBoardRoadEntity__CreatePK(
                         warBoardId,
                         squareIndex1,
                         squareIndex2,
                         *(const MethodInfo **)&squareIndex1);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__TryGetEntity__);
}


void __fastcall WarBoardRoadMaster__GetWarBoardRoadEntities_d__3___ctor(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__MoveNext(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardRoadMaster_o *_4__this; // x20
  Il2CppObject *Item; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x10
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_49FF4E5 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)sub_1B64870(&WarBoardRoadEntity_TypeInfo, v4);
    byte_49FF4E5 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_15;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this || (this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)_4__this->fields.list) == 0LL )
LABEL_19:
      sub_1B64ACC(this, method);
    this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                   (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                   (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    method = 0LL;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(WarBoardRoadEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarBoardRoadEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardRoadEntity_TypeInfo
          && LODWORD(Item[1].klass) == v2->fields.warBoardId )
        {
          v2->fields.__2__current = (struct WarBoardRoadEntity_o *)Item;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B64814(p__2__current, (int32_t)Item, v8, v9);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
LABEL_15:
      this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardRoadEntity__o *__fastcall WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardRoadEntity__GetEnumerator(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *v4; // x20
  struct WarBoardRoadMaster_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerator_WarBoardRoadEntity__o *result; // x0

  if ( (byte_49FF4E6 & 1) == 0 )
  {
    sub_1B64870(&WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo, method);
    byte_49FF4E6 = 1;
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
    v4 = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)sub_1B64ABC(WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardRoadEntity__o *)v4;
  v4->fields.warBoardId = this->fields.__3__warBoardId;
  return result;
}


WarBoardRoadEntity_o *__fastcall WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardRoadEntity__get_Current(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_IDisposable_Dispose(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}