void __fastcall WarBoardActionPointMaster___ctor(WarBoardActionPointMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1716D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__,
      method,
      v2);
    byte_4B1716D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    323,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__);
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

  if ( (byte_4B1716B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__,
      *(_QWORD *)&stageId,
      *(_QWORD *)&forceId);
    byte_4B1716B = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardActionPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31B3198 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *__fastcall WarBoardActionPointMaster__GetWarBoardActionPointEntities(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1716E & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo, *(_QWORD *)&stageId, method);
    byte_4B1716E = 1;
  }
  v6 = sub_1BCAA2C(
         WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo,
         *(_QWORD *)&stageId,
         method,
         v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = -2;
  *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v6 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v6 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *)v6;
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

  if ( (byte_4B1716C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&stageId);
    byte_4B1716C = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__);
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
  __int64 v2; // x2
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t _1__state; // w8
  struct WarBoardActionPointMaster_o *_4__this; // x20
  Il2CppObject *Item; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 methodPtr_low; // x10
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x19

  v3 = this;
  if ( (byte_4B1716F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_1BCA7E0(
                                                                                 &WarBoardActionPointEntity_TypeInfo,
                                                                                 v6,
                                                                                 v7);
    byte_4B1716F = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_15;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)_4__this->fields.list) == 0LL )
    {
LABEL_19:
      sub_1BCAA3C(this, method);
    }
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                 (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                                 (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    method = 0LL;
    *(_QWORD *)&v3->fields._count_5__2 = (unsigned int)this;
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
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(WarBoardActionPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarBoardActionPointEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardActionPointEntity_TypeInfo
          && LODWORD(Item[1].klass) == v3->fields.stageId )
        {
          v3->fields.__2__current = (struct WarBoardActionPointEntity_o *)Item;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)Item, v11, v12, v13, v14, v15, v16);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
LABEL_15:
      this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)(unsigned int)v3->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v3->fields._i_5__3 + 1);
      v3->fields._i_5__3 = (int)method;
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
  int32_t l__initialThreadId; // w20
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *v6; // x20
  struct WarBoardActionPointMaster_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *result; // x0

  if ( (byte_4B17170 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo, method, v2);
    byte_4B17170 = 1;
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
    v6 = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_1BCAA2C(
                                                                               WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.__4__this, (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *)v6;
  v6->fields.stageId = this->fields.__3__stageId;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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