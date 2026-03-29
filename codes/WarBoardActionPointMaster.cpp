void WarBoardActionPointMaster___ctor(WarBoardActionPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31B0A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__);
    byte_4D31B0A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    329,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointEntity_o *WarBoardActionPointMaster__GetEntity(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31B08 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__);
    byte_4D31B08 = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardActionPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_34681D4 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointMaster__GetWarBoardActionPointEntities(
        WarBoardActionPointMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D31B0B & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
    byte_4D31B0B = 1;
  }
  v5 = sub_1C93D20(WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardActionPointMaster__TryGetEntity(
        WarBoardActionPointMaster_o *this,
        WarBoardActionPointEntity_o **entity,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D31B09 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__);
    byte_4D31B09 = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_WarBoardActionPointMaster__WarBoardActionPointEntity__string__TryGetEntity__);
}


void WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3___ctor(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__MoveNext(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardActionPointMaster_o *_4__this; // x20
  Il2CppObject *Item; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4D31B0C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_WarBoardActionPointEntity__get_Count__);
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_WarBoardActionPointEntity__get_Item__);
    byte_4D31B0C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_13;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)_4__this->fields.list) == 0 )
    {
LABEL_17:
      sub_1C93D2C(this, method);
    }
    this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                 (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                                 (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_WarBoardActionPointEntity__get_Count__);
    method = 0;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_17;
      this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_17;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_WarBoardActionPointEntity__get_Item__);
      if ( Item && LODWORD(Item[1].klass) == v2->fields.stageId )
      {
        v2->fields.__2__current = (struct WarBoardActionPointEntity_o *)Item;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C93A78(p__2__current, (int32_t)Item, v6, v7, v8, v9, v10, v11);
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return 1;
      }
LABEL_13:
      this = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__GetEnumerator(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *v4; // x20
  struct WarBoardActionPointMaster_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D31B0D & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
    byte_4D31B0D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *)sub_1C93D20(WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
  }
  v4->fields.stageId = this->fields.__3__stageId;
  return (System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__o *)v4;
}


WarBoardActionPointEntity_o *WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardActionPointEntity__get_Current(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3__System_IDisposable_Dispose(
        WarBoardActionPointMaster__GetWarBoardActionPointEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}