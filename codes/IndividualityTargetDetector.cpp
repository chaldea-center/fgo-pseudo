void __fastcall IndividualityTargetDetector___ctor(
        IndividualityTargetDetector_o *this,
        WarBoardActionTrendConditionEntity_o *entity,
        WarBoardAiTargetCacher_o *root,
        int32_t teamCond,
        const MethodInfo *method)
{
  IWarBoardObjectData_IndivGetArgs_o *v9; // x24
  struct IWarBoardObjectData_IndivGetArgs_o **p_indivGetArgs; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  _BOOL8 IsIncludeIgnoreIndividuality; // x0
  __int64 v18; // x1
  struct System_Int32_array_array *SortedMultiIndividuality; // x0
  BattleServantConfConponent_o *p_multiIndividuality; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  _BYTE *monitor; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v28; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v29; // x20

  if ( (byte_438C94A & 1) == 0 )
  {
    sub_B775C4(&IWarBoardObjectData_IndivGetArgs_TypeInfo);
    byte_438C94A = 1;
  }
  v9 = (IWarBoardObjectData_IndivGetArgs_o *)sub_B77694(IWarBoardObjectData_IndivGetArgs_TypeInfo);
  IWarBoardObjectData_IndivGetArgs___ctor(v9, 0LL);
  this->fields.indivGetArgs = v9;
  p_indivGetArgs = &this->fields.indivGetArgs;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.indivGetArgs,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  TargetDetector___ctor((TargetDetector_o *)this, root, 0LL);
  this->fields.teamCondType = teamCond;
  if ( !entity )
    goto LABEL_8;
  SortedMultiIndividuality = WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality(entity, 0LL);
  this->fields.multiIndividuality = SortedMultiIndividuality;
  p_multiIndividuality = (BattleServantConfConponent_o *)&this->fields.multiIndividuality;
  sub_B77560(p_multiIndividuality, (System_Int32_array **)SortedMultiIndividuality, v21, v22, v23, v24, v25, v26);
  monitor = p_multiIndividuality->monitor;
  IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(entity, 0LL);
  if ( !monitor
    || (monitor[16] = IsIncludeIgnoreIndividuality,
        v28 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(entity, 0LL),
        !v28)
    || (v28->fields.IsIncludePassiveIndividuality = IsIncludeIgnoreIndividuality,
        v29 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(entity, 0LL),
        !v29) )
  {
LABEL_8:
    sub_B7769C(IsIncludeIgnoreIndividuality, v18);
  }
  v29->fields.IsIgnoreIndivUnreleasable = IsIncludeIgnoreIndividuality;
}


void __fastcall IndividualityTargetDetector__AggregateTargetObject(
        IndividualityTargetDetector_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  IndividualityTargetDetector_o *v4; // x20
  signed int max_length; // w8
  signed int i; // w23
  WarBoardAIRoute_RouteData_o *v7; // x21
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v9; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v11; // x0
  WarBoardAIRoute_RouteData_c *v12; // x8
  __int64 v13; // x10
  WarBoardAIRoute_RouteData_o *v14; // x9
  int teamCondType; // w10
  struct WarBoardAiTargetCacher_o *Root; // x10
  struct WarBoardAiTargetCacher_o *v17; // x10
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x22
  unsigned __int64 v19; // x10
  IWarBoardObjectData_c **v20; // x11
  __int64 v21; // x0
  System_Int32_array *v22; // x0
  const MethodInfo *v23; // x2
  __int64 v24; // x0

  v4 = this;
  if ( (byte_438C94B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
    sub_B775C4(&IWarBoardObjectData_TypeInfo);
    this = (IndividualityTargetDetector_o *)sub_B775C4(&WarBoardPieceData_TypeInfo);
    byte_438C94B = 1;
  }
  if ( !objectArray )
LABEL_47:
    sub_B7769C(this, objectArray);
  max_length = objectArray->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v24 = sub_B776C8(this);
        sub_B77668(v24, 0LL);
      }
      v7 = (WarBoardAIRoute_RouteData_o *)objectArray->m_Items[i];
      if ( !v7 )
        goto LABEL_47;
      klass = v7->klass;
      if ( *(_WORD *)&v7->klass->_2.bitflags1 )
      {
        v9 = 0LL;
        p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
        {
          ++v9;
          p_offset += 2;
          if ( v9 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        v11 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_12:
        v11 = sub_B0F4C0(v7, IWarBoardObjectData_TypeInfo, 2LL);
      }
      this = (IndividualityTargetDetector_o *)(*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v11)(
                                                v7,
                                                *(_QWORD *)(v11 + 8));
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_45;
      v12 = v7->klass;
      v13 = *(&WarBoardPieceData_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (WarBoardPieceData_c *)v12->_2.typeHierarchy[v13 - 1] == WarBoardPieceData_TypeInfo )
          v14 = v7;
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      teamCondType = v4->fields.teamCondType;
      if ( teamCondType <= 77 )
      {
        if ( teamCondType != 76 )
        {
          if ( teamCondType != 77 || !v14 )
            goto LABEL_36;
LABEL_28:
          Root = v4->fields.Root;
          if ( !Root )
            goto LABEL_47;
          if ( HIDWORD(v14->fields.flagNow) == Root->fields._ForceId_k__BackingField )
            goto LABEL_36;
          goto LABEL_45;
        }
        if ( !v14 )
          goto LABEL_45;
      }
      else
      {
        if ( teamCondType != 112 )
        {
          if ( teamCondType != 111 )
            goto LABEL_36;
          if ( !v14 )
            goto LABEL_45;
          goto LABEL_28;
        }
        if ( !v14 )
          goto LABEL_36;
      }
      v17 = v4->fields.Root;
      if ( !v17 )
        goto LABEL_47;
      if ( HIDWORD(v14->fields.flagNow) != v17->fields._ForceId_k__BackingField )
      {
LABEL_36:
        indivGetArgs = v4->fields.indivGetArgs;
        if ( *(_WORD *)&v12->_2.bitflags1 )
        {
          v19 = 0LL;
          v20 = (IWarBoardObjectData_c **)&v12->_1.interfaceOffsets->offset;
          while ( *(v20 - 1) != IWarBoardObjectData_TypeInfo )
          {
            ++v19;
            v20 += 2;
            if ( v19 >= *(unsigned __int16 *)&v12->_2.bitflags1 )
              goto LABEL_40;
          }
          v21 = (__int64)(&v12->vtable._6_get_FlagNow.method + 2 * *(_DWORD *)v20);
        }
        else
        {
LABEL_40:
          v21 = sub_B0F4C0(v7, IWarBoardObjectData_TypeInfo, 6LL);
        }
        v22 = (System_Int32_array *)(*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, struct IWarBoardObjectData_IndivGetArgs_o *, _QWORD))v21)(
                                      v7,
                                      indivGetArgs,
                                      *(_QWORD *)(v21 + 8));
        this = (IndividualityTargetDetector_o *)Individuality__CheckSignedMultiIndividuality(
                                                  v22,
                                                  v4->fields.multiIndividuality,
                                                  v23);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (IndividualityTargetDetector_o *)v4->fields._TargetObjectHashSet_k__BackingField;
          if ( !this )
            goto LABEL_47;
          this = (IndividualityTargetDetector_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)this,
                                                    v7,
                                                    (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
        }
      }
LABEL_45:
      max_length = objectArray->max_length;
    }
  }
}


bool __fastcall IndividualityTargetDetector__IsSameCondition(
        IndividualityTargetDetector_o *this,
        TargetDetector_o *t,
        const MethodInfo *method)
{
  TargetDetector_o *v3; // x20
  IndividualityTargetDetector_o *v4; // x19
  __int64 v5; // x10
  IndividualityTargetDetector_c *v6; // x9
  struct System_Int32_array_array *multiIndividuality; // x8
  TargetDetector_c *klass; // x10
  __int64 v9; // x9
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x10
  _BYTE *monitor; // x11
  __int64 i; // x22
  TargetDetector_c *v13; // x9
  __int64 v14; // x10
  __int64 v15; // x0

  v3 = t;
  v4 = this;
  if ( (byte_438C94C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    this = (IndividualityTargetDetector_o *)sub_B775C4(&IndividualityTargetDetector_TypeInfo);
    byte_438C94C = 1;
  }
  if ( !v3 )
    goto LABEL_28;
  v5 = *(&IndividualityTargetDetector_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    goto LABEL_28;
  v6 = (IndividualityTargetDetector_c *)v3->klass->_2.typeHierarchy[v5 - 1];
  if ( v6 != IndividualityTargetDetector_TypeInfo )
    v3 = 0LL;
  if ( v6 != IndividualityTargetDetector_TypeInfo )
    goto LABEL_28;
  if ( !v3 )
    goto LABEL_30;
  this = (IndividualityTargetDetector_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)v3[1].klass,
                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_28;
  multiIndividuality = v4->fields.multiIndividuality;
  if ( !multiIndividuality )
    goto LABEL_30;
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_30;
  v9 = *(_QWORD *)&multiIndividuality->max_length;
  if ( (_DWORD)v9 != LODWORD(klass->_1.namespaze) )
    goto LABEL_28;
  indivGetArgs = v4->fields.indivGetArgs;
  if ( !indivGetArgs || (monitor = v3[1].monitor) == 0LL )
LABEL_30:
    sub_B7769C(this, t);
  if ( !indivGetArgs->fields.IsIncludeIgnoreIndividuality != (monitor[16] != 0)
    && !indivGetArgs->fields.IsIncludePassiveIndividuality != (monitor[17] != 0)
    && !indivGetArgs->fields.IsIgnoreIndivUnreleasable != (monitor[18] != 0)
    && v4->fields.teamCondType == v3[1].fields._Id_k__BackingField )
  {
    if ( (int)v9 < 1 )
    {
      LOBYTE(this) = 1;
      return (char)this;
    }
    for ( i = 4LL; ; ++i )
    {
      if ( i - 4 >= (unsigned __int64)(unsigned int)v9 )
        goto LABEL_31;
      v13 = v3[1].klass;
      if ( !v13 )
        goto LABEL_30;
      if ( i - 4 >= (unsigned __int64)LODWORD(v13->_1.namespaze) )
      {
LABEL_31:
        v15 = sub_B776C8(this);
        sub_B77668(v15, 0LL);
      }
      this = (IndividualityTargetDetector_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                                *((System_Collections_Generic_IEnumerable_TSource__o **)&multiIndividuality->obj.klass
                                                + i),
                                                *((System_Collections_Generic_IEnumerable_TSource__o **)&v13->_1.image
                                                + i),
                                                (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      multiIndividuality = v4->fields.multiIndividuality;
      if ( !multiIndividuality )
        goto LABEL_30;
      LODWORD(v9) = multiIndividuality->max_length;
      v14 = i - 3;
      this = (IndividualityTargetDetector_o *)(&dword_0 + 1);
      if ( v14 >= (int)v9 )
        return (char)this;
    }
  }
LABEL_28:
  LOBYTE(this) = 0;
  return (char)this;
}