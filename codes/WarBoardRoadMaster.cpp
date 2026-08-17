void WarBoardRoadMaster___ctor(WarBoardRoadMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971AAA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string___ctor__);
    byte_5971AAA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    329,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardRoadEntity_o *WarBoardRoadMaster__GetEntity(
        WarBoardRoadMaster_o *this,
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971AA8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__GetEntity__);
    byte_5971AA8 = 1;
  }
  PK = (Il2CppObject *)WarBoardRoadEntity__CreatePK(
                         warBoardId,
                         squareIndex1,
                         squareIndex2,
                         *(const MethodInfo **)&squareIndex2);
  return (WarBoardRoadEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3F157EC *)Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardRoadEntity__o *WarBoardRoadMaster__GetWarBoardRoadEntities(
        WarBoardRoadMaster_o *this,
        int32_t warBoardId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_IEnumerable_WarBoardRoadEntity__o *result; // x0

  if ( (byte_5971AAB & 1) == 0 )
  {
    sub_2213A60(&WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo);
    byte_5971AAB = 1;
  }
  v5 = sub_2213CCC(WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_Generic_IEnumerable_WarBoardRoadEntity__o *)v5;
  *(_DWORD *)(v5 + 52) = warBoardId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardRoadMaster__TryGetEntity(
        WarBoardRoadMaster_o *this,
        WarBoardRoadEntity_o **entity,
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971AA9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__TryGetEntity__);
    byte_5971AA9 = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_WarBoardRoadMaster__WarBoardRoadEntity__string__TryGetEntity__);
}


void WarBoardRoadMaster__GetWarBoardRoadEntities_d__3___ctor(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__MoveNext(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardRoadMaster_o *_4__this; // x21
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
  if ( (byte_5971AAC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardRoadEntity__get_Count__);
    this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardRoadEntity__get_Item__);
    byte_5971AAC = 1;
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
    if ( !_4__this || (this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)_4__this->fields.list) == 0 )
LABEL_17:
      sub_2213CDC(this, method);
    this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                   (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                   (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarBoardRoadEntity__get_Count__);
    method = 0;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_17;
      this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_17;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarBoardRoadEntity__get_Item__);
      if ( Item && LODWORD(Item[1].klass) == v2->fields.warBoardId )
      {
        v2->fields.__2__current = (struct WarBoardRoadEntity_o *)Item;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)Item, v6, v7, v8, v9, v10, v11);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
LABEL_13:
      this = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardRoadEntity__o *WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardRoadEntity__GetEnumerator(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct WarBoardRoadMaster_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_IEnumerator_WarBoardRoadEntity__o *result; // x0

  if ( (byte_5971AAD & 1) == 0 )
  {
    sub_2213A60(&WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo);
    byte_5971AAD = 1;
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
    v4 = (WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *)sub_2213CCC(WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    v4->fields.__4__this = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardRoadEntity__o *)v4;
  v4->fields.warBoardId = this->fields.__3__warBoardId;
  return result;
}


WarBoardRoadEntity_o *WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardRoadEntity__get_Current(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void WarBoardRoadMaster__GetWarBoardRoadEntities_d__3__System_IDisposable_Dispose(
        WarBoardRoadMaster__GetWarBoardRoadEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}