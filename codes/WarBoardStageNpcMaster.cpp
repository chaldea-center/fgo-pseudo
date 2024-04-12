void __fastcall WarBoardStageNpcMaster___ctor(WarBoardStageNpcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2282 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__);
    byte_42B2282 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    326,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageNpcEntity_o *__fastcall WarBoardStageNpcMaster__GetEntity(
        WarBoardStageNpcMaster_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2280 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__);
    byte_42B2280 = 1;
  }
  PK = WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&groupId);
  return (WarBoardStageNpcEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *__fastcall WarBoardStageNpcMaster__GetWarBoardStageEntities(
        WarBoardStageNpcMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B2283 & 1) == 0 )
  {
    sub_B52984(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    byte_42B2283 = 1;
  }
  v5 = sub_B52A54(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
  WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3___ctor(
    (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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
  System_String_o *PK; // x2

  if ( (byte_42B2281 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__);
    byte_42B2281 = 1;
  }
  PK = WarBoardStageNpcEntity__CreatePK(stageId, forceId, groupId, *(const MethodInfo **)&forceId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_WarBoardStageNpcMaster__WarBoardStageNpcEntity__string__TryGetEntity__);
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
  int32_t _1__state; // w8
  struct WarBoardStageNpcMaster_o *_4__this; // x20
  int32_t *p_count_5__2; // x21
  int32_t *p_i_5__3; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v8; // x10
  bool result; // w0
  struct WarBoardStageNpcEntity_o **p__2__current; // x19

  v2 = this;
  if ( (byte_42AD763 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_B52984(&WarBoardStageNpcEntity_TypeInfo);
    byte_42AD763 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_i_5__3 = &v2->fields._i_5__3;
    p_count_5__2 = &v2->fields._count_5__2;
    v2->fields.__1__state = -1;
    goto LABEL_15;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this || (this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)_4__this->fields.list) == 0LL )
LABEL_19:
      sub_B52A5C(this, method);
    this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                                                                        (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v2->fields._count_5__2 = (int)this;
    p_count_5__2 = &v2->fields._count_5__2;
    method = 0LL;
    v2->fields._i_5__3 = 0;
    p_i_5__3 = &v2->fields._i_5__3;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_19;
      this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
               (int32_t)method,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v8 = *(&WarBoardStageNpcEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v8
          && (WarBoardStageNpcEntity_c *)Item->klass->_2.typeHierarchy[v8 - 1] == WarBoardStageNpcEntity_TypeInfo
          && LODWORD(Item[1].klass) == v2->fields.stageId )
        {
          v2->fields.__2__current = (struct WarBoardStageNpcEntity_o *)Item;
          p__2__current = &v2->fields.__2__current;
          sub_B52920(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_15:
      method = (const MethodInfo *)(unsigned int)(*p_i_5__3 + 1);
      *p_i_5__3 = (int)method;
      this = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)(unsigned int)*p_count_5__2;
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
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_WarBoardStageNpcEntity__o *result; // x0

  if ( (byte_42AD764 & 1) == 0 )
  {
    sub_B52984(&WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    byte_42AD764 = 1;
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
    v4 = (WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_o *)sub_B52A54(WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B52A5C(CurrentManagedThreadId, v6);
    v4->fields.__4__this = this->fields.__4__this;
    sub_B52920(&v4->fields.__4__this);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardStageNpcMaster__GetWarBoardStageEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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