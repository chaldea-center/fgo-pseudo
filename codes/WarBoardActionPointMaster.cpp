void __fastcall WarBoardActionPointMaster___ctor(WarBoardActionPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__);
    byte_4A5C0B4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    323,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointEntity_o *__fastcall WarBoardActionPointMaster__GetEntity(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C0B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__);
    byte_4A5C0B2 = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardActionPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5C0B5 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
    byte_4A5C0B5 = 1;
  }
  v5 = sub_1B887FC(WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5C0B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__);
    byte_4A5C0B3 = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__);
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
  int32_t _1__state; // w8
  struct WarBoardActionPointMaster_o *_4__this; // x20
  Il2CppObject *Item; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 methodPtr_low; // x10
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4A5C0B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_1B885B0(&WarBoardActionPointEntity_TypeInfo);
    byte_4A5C0B6 = 1;
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
    if ( !_4__this
      || (this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)_4__this->fields.list) == 0LL )
    {
LABEL_19:
      sub_1B8880C(this, method);
    }
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                 (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    method = 0LL;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(WarBoardActionPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarBoardActionPointEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardActionPointEntity_TypeInfo
          && LODWORD(Item[1].klass) == v2->fields.stageId )
        {
          v2->fields.__2__current = (struct WarBoardActionPointEntity_o *)Item;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)Item, v6, v7);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
LABEL_15:
      this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
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
  struct WarBoardActionPointMaster_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *result; // x0

  if ( (byte_4A5C0B7 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
    byte_4A5C0B7 = 1;
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
    v4 = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_1B887FC(WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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