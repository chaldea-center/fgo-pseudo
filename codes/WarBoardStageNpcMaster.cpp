void WarBoardStageNpcMaster___ctor(WarBoardStageNpcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59399FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__);
    byte_59399FA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    335,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__);
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

  if ( (byte_59399F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__);
    byte_59399F8 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardStageNpcEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageNpcMaster__GetWarBoardStageEntities(
        WarBoardStageNpcMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *result; // x0

  if ( (byte_59399FB & 1) == 0 )
  {
    sub_21FFC50(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    byte_59399FB = 1;
  }
  v5 = sub_21FFEBC(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *)v5;
  *(_DWORD *)(v5 + 52) = stageId;
  return result;
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

  if ( (byte_59399F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__);
    byte_59399F9 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__);
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
  struct WarBoardStageNpcMaster_o *_4__this; // x21
  Il2CppObject *Item; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  bool result; // w0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_59399FC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Count__);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Item__);
    byte_59399FC = 1;
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
      sub_21FFECC(this, method);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                        (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                        (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Count__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageNpcEntity__get_Item__);
      if ( Item && LODWORD(Item[1].klass) == v2->fields.stageId )
      {
        v2->fields.__2__current = (struct WarBoardStageNpcEntity_o *)Item;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)Item, v6, v7, v8, v9, v10, v11);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
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
  int32_t CurrentManagedThreadId; // w0
  struct WarBoardStageNpcMaster_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *result; // x0

  if ( (byte_59399FD & 1) == 0 )
  {
    sub_21FFC50(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    byte_59399FD = 1;
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
    v4 = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_21FFEBC(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    v4->fields.__4__this = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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