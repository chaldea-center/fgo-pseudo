void WarBoardSquareMaster___ctor(WarBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C284AD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string___ctor__);
    byte_4C284AD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    326,
    (const MethodInfo_338A52C *)Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareEntity_o *WarBoardSquareMaster__GetEntity(
        WarBoardSquareMaster_o *this,
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C284AB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__GetEntity__);
    byte_4C284AB = 1;
  }
  PK = (Il2CppObject *)WarBoardSquareEntity__CreatePK(warBoardId, squareIndex, *(const MethodInfo **)&squareIndex);
  return (WarBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__GetEntity__);
}


System_Collections_Generic_IEnumerable_WarBoardSquareEntity__o *WarBoardSquareMaster__GetWarBoardSquareEntities(
        WarBoardSquareMaster_o *this,
        int32_t warBoardId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C284AE & 1) == 0 )
  {
    sub_1C2D490(&WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo);
    byte_4C284AE = 1;
  }
  v5 = sub_1C2D6DC(WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 52) = warBoardId;
  return (System_Collections_Generic_IEnumerable_WarBoardSquareEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardSquareMaster__TryGetEntity(
        WarBoardSquareMaster_o *this,
        WarBoardSquareEntity_o **entity,
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C284AC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__TryGetEntity__);
    byte_4C284AC = 1;
  }
  PK = (Il2CppObject *)WarBoardSquareEntity__CreatePK(warBoardId, squareIndex, *(const MethodInfo **)&warBoardId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_WarBoardSquareMaster__WarBoardSquareEntity__string__TryGetEntity__);
}


void WarBoardSquareMaster__GetWarBoardSquareEntities_d__3___ctor(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__MoveNext(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardSquareMaster_o *_4__this; // x20
  Il2CppObject *Item; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4C284AF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardSquareEntity__get_Count__);
    this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardSquareEntity__get_Item__);
    byte_4C284AF = 1;
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
    if ( !_4__this || (this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)_4__this->fields.list) == 0 )
LABEL_17:
      sub_1C2D6EC(this, method);
    this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this,
                                                                       (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_WarBoardSquareEntity__get_Count__);
    method = 0;
    *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)this;
    while ( (int)method < (int)this )
    {
      if ( !_4__this )
        goto LABEL_17;
      this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)_4__this->fields.list;
      if ( !this )
        goto LABEL_17;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)this,
               (int32_t)method,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_WarBoardSquareEntity__get_Item__);
      if ( Item && LODWORD(Item[2].klass) == v2->fields.warBoardId )
      {
        v2->fields.__2__current = (struct WarBoardSquareEntity_o *)Item;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)Item, v6, v7);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_13:
      this = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)(unsigned int)v2->fields._count_5__2;
      method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__3 + 1);
      v2->fields._i_5__3 = (int)method;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_WarBoardSquareEntity__o *WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_Generic_IEnumerable_WarBoardSquareEntity__GetEnumerator(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *v4; // x20
  struct WarBoardSquareMaster_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerator_WarBoardSquareEntity__o *result; // x0

  if ( (byte_4C284B0 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo);
    byte_4C284B0 = 1;
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
    v4 = (WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *)sub_1C2D6DC(WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_WarBoardSquareEntity__o *)v4;
  v4->fields.warBoardId = this->fields.__3__warBoardId;
  return result;
}


WarBoardSquareEntity_o *WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_Generic_IEnumerator_WarBoardSquareEntity__get_Current(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_IEnumerator_Reset(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_Collections_IEnumerator_get_Current(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void WarBoardSquareMaster__GetWarBoardSquareEntities_d__3__System_IDisposable_Dispose(
        WarBoardSquareMaster__GetWarBoardSquareEntities_d__3_o *this,
        const MethodInfo *method)
{
  ;
}