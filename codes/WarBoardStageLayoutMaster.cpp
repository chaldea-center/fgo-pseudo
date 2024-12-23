void __fastcall WarBoardStageLayoutMaster___ctor(WarBoardStageLayoutMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67C3E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string___ctor__, method);
    byte_4B67C3E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    330,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageLayoutEntity_o *__fastcall WarBoardStageLayoutMaster__GetEntity(
        WarBoardStageLayoutMaster_o *this,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67C3C & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_4B67C3C = 1;
  }
  PK = (Il2CppObject *)WarBoardStageLayoutEntity__CreatePK(stageId, squareIndex, *(const MethodInfo **)&squareIndex);
  return (WarBoardStageLayoutEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31FDB1C *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__o *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities(
        WarBoardStageLayoutMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B67C3F & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo, *(_QWORD *)&stageId);
    byte_4B67C3F = 1;
  }
  v5 = sub_1BE4D18(WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  Il2CppObject *PK; // x2

  if ( (byte_4B67C3D & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__TryGetEntity__,
      entity);
    byte_4B67C3D = 1;
  }
  PK = (Il2CppObject *)WarBoardStageLayoutEntity__CreatePK(stageId, squareIndex, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_WarBoardStageLayoutMaster__WarBoardStageLayoutEntity__string__TryGetEntity__);
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
  Il2CppObject *Item; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 methodPtr_low; // x10
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4B67C40 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)sub_1BE4ACC(
                                                                                 &WarBoardStageLayoutEntity_TypeInfo,
                                                                                 v4);
    byte_4B67C40 = 1;
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
      || (this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)_4__this->fields.list) == 0LL )
    {
LABEL_19:
      sub_1BE4D28(this, method);
    }
    this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                 (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                                 (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    method = 0LL;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(WarBoardStageLayoutEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarBoardStageLayoutEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardStageLayoutEntity_TypeInfo
          && LODWORD(Item[1].klass) == v2->fields.stageId )
        {
          v2->fields.__2__current = (struct WarBoardStageLayoutEntity_o *)Item;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1BE4A70(p__2__current, (int64_t)Item, v8, v9, v10, v11, v12, v13);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
LABEL_15:
      this = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *__fastcall WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardStageLayoutEntity__GetEnumerator(
        WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *v4; // x20
  struct WarBoardStageLayoutMaster_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *result; // x0

  if ( (byte_4B67C41 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo, method);
    byte_4B67C41 = 1;
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
    v4 = (WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_o *)sub_1BE4D18(WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.__4__this, (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardStageLayoutEntity__o *)v4;
  v4->fields.stageId = this->fields.__3__stageId;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_WarBoardStageLayoutMaster__GetWarBoardStageLayoutEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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