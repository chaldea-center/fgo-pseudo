void __fastcall WarBoardStageNpcMaster___ctor(WarBoardStageNpcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6D99 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__, method);
    byte_4AB6D99 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    327,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageNpcEntity_o *__fastcall WarBoardStageNpcMaster__GetEntity(
        WarBoardStageNpcMaster_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6D97 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_4AB6D97 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardStageNpcEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31640E8 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *__fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities(
        WarBoardStageNpcMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB6D9A & 1) == 0 )
  {
    sub_1BAB41C(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo, *(_QWORD *)&stageId);
    byte_4AB6D9A = 1;
  }
  v5 = sub_1BAB668(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageNpcMaster__TryGetEntity(
        WarBoardStageNpcMaster_o *this,
        WarBoardStageNpcEntity_o **entity,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6D98 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__, entity);
    byte_4AB6D98 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__);
}


void __fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3___ctor(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__MoveNext(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardStageNpcMaster_o *_4__this; // x20
  Il2CppObject *Item; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x10
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4AB6D9B & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_1BAB41C(&WarBoardStageNpcEntity_TypeInfo, v4);
    byte_4AB6D9B = 1;
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
    if ( !_4__this || (this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)_4__this->fields.list) == 0LL )
LABEL_19:
      sub_1BAB678(this, method);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                        (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                        (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    method = 0LL;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(WarBoardStageNpcEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarBoardStageNpcEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardStageNpcEntity_TypeInfo
          && LODWORD(Item[1].klass) == v2->fields.stageId )
        {
          v2->fields.__2__current = (struct WarBoardStageNpcEntity_o *)Item;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1BAB3C0(p__2__current, (int32_t)Item, v8, v9);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
LABEL_15:
      this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *__fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__GetEnumerator(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *v4; // x20
  struct WarBoardStageNpcMaster_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *result; // x0

  if ( (byte_4AB6D9C & 1) == 0 )
  {
    sub_1BAB41C(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo, method);
    byte_4AB6D9C = 1;
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
    v4 = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_1BAB668(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *)v4;
  v4->fields.stageId = this->fields.__3__stageId;
  return result;
}


WarBoardStageNpcEntity_o *__fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__get_Current(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
}


Il2CppObject *__fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_IDisposable_Dispose(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}