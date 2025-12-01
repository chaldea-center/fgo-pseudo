void WarBoardStageNpcMaster___ctor(WarBoardStageNpcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8630 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__);
    byte_4CC8630 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    333,
    (const MethodInfo_340B614 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageNpcEntity_o *WarBoardStageNpcMaster__GetEntity(
        WarBoardStageNpcMaster_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC862E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__);
    byte_4CC862E = 1;
  }
  PK = (Il2CppObject *)WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardStageNpcEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_340D938 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageNpcMaster__GetWarBoardStageEntities(
        WarBoardStageNpcMaster_o *this,
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

  if ( (byte_4CC8631 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    byte_4CC8631 = 1;
  }
  v5 = sub_1C715FC(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 52) = stageId;
  return (System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardStageNpcMaster__TryGetEntity(
        WarBoardStageNpcMaster_o *this,
        WarBoardStageNpcEntity_o **entity,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC862F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__);
    byte_4CC862F = 1;
  }
  PK = (Il2CppObject *)WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__);
}


void WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3___ctor(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__MoveNext(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardStageNpcMaster_o *_4__this; // x20
  Il2CppObject *Item; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  bool result; // w0
  GrandQuestFolderBoardItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4CC8632 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Count__);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Item__);
    byte_4CC8632 = 1;
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
    if ( !_4__this || (this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)_4__this->fields.list) == 0 )
LABEL_17:
      sub_1C71608(this, method);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                        (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                        (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Count__);
    method = 0;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_17;
      this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_17;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Item__);
      if ( Item && LODWORD(Item[1].klass) == v2->fields.stageId )
      {
        v2->fields.__2__current = (struct WarBoardStageNpcEntity_o *)Item;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(p__2__current, (int32_t)Item, v6, v7, v8, v9, v10, v11);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
LABEL_13:
      this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__GetEnumerator(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *v4; // x20
  struct WarBoardStageNpcMaster_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *result; // x0

  if ( (byte_4CC8633 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    byte_4CC8633 = 1;
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
    v4 = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_1C715FC(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *)v4;
  v4->fields.stageId = this->fields.__3__stageId;
  return result;
}


WarBoardStageNpcEntity_o *WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__get_Current(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3__System_IDisposable_Dispose(
        WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}