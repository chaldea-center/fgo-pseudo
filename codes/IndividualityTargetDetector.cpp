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

  if ( (byte_4188F74 & 1) == 0 )
  {
    sub_B2C35C(&IWarBoardObjectData_IndivGetArgs_TypeInfo, entity);
    byte_4188F74 = 1;
  }
  v9 = (IWarBoardObjectData_IndivGetArgs_o *)sub_B2C42C(IWarBoardObjectData_IndivGetArgs_TypeInfo);
  IWarBoardObjectData_IndivGetArgs___ctor(v9, 0LL);
  this->fields.indivGetArgs = v9;
  p_indivGetArgs = &this->fields.indivGetArgs;
  sub_B2C2F8(
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
  sub_B2C2F8(p_multiIndividuality, (System_Int32_array **)SortedMultiIndividuality, v21, v22, v23, v24, v25, v26);
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
    sub_B2C434(IsIncludeIgnoreIndividuality, v18);
  }
  v29->fields.IsIgnoreIndivUnreleasable = IsIncludeIgnoreIndividuality;
}


void __fastcall IndividualityTargetDetector__AggregateTargetObject(
        IndividualityTargetDetector_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IndividualityTargetDetector_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  signed int max_length; // w8
  signed int i; // w23
  WarBoardAIRoute_RouteData_o *v10; // x21
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v12; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v14; // x0
  WarBoardAIRoute_RouteData_c *v15; // x8
  __int64 v16; // x10
  WarBoardAIRoute_RouteData_o *v17; // x9
  int teamCondType; // w10
  struct WarBoardAiTargetCacher_o *Root; // x10
  struct WarBoardAiTargetCacher_o *v20; // x10
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x22
  unsigned __int64 v22; // x10
  IWarBoardObjectData_c **v23; // x11
  __int64 v24; // x0
  System_Int32_array *v25; // x0
  const MethodInfo *v26; // x2
  __int64 v27; // x0

  v5 = this;
  if ( (byte_4188F75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__, objectArray);
    sub_B2C35C(&IWarBoardObjectData_TypeInfo, v6);
    this = (IndividualityTargetDetector_o *)sub_B2C35C(&WarBoardPieceData_TypeInfo, v7);
    byte_4188F75 = 1;
  }
  if ( !objectArray )
LABEL_47:
    sub_B2C434(this, objectArray);
  max_length = objectArray->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v27 = sub_B2C460(this);
        sub_B2C400(v27, 0LL);
      }
      v10 = (WarBoardAIRoute_RouteData_o *)objectArray->m_Items[i];
      if ( !v10 )
        goto LABEL_47;
      klass = v10->klass;
      if ( *(_WORD *)&v10->klass->_2.bitflags1 )
      {
        v12 = 0LL;
        p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
        {
          ++v12;
          p_offset += 2;
          if ( v12 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        v14 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_12:
        v14 = sub_AC5258(v10, IWarBoardObjectData_TypeInfo, 2LL, v3);
      }
      this = (IndividualityTargetDetector_o *)(*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v14)(
                                                v10,
                                                *(_QWORD *)(v14 + 8));
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_45;
      v15 = v10->klass;
      v16 = *(&WarBoardPieceData_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
      {
        if ( (WarBoardPieceData_c *)v15->_2.typeHierarchy[v16 - 1] == WarBoardPieceData_TypeInfo )
          v17 = v10;
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      teamCondType = v5->fields.teamCondType;
      if ( teamCondType <= 77 )
      {
        if ( teamCondType != 76 )
        {
          if ( teamCondType != 77 || !v17 )
            goto LABEL_36;
LABEL_28:
          Root = v5->fields.Root;
          if ( !Root )
            goto LABEL_47;
          if ( HIDWORD(v17->fields.flagNow) == Root->fields._ForceId_k__BackingField )
            goto LABEL_36;
          goto LABEL_45;
        }
        if ( !v17 )
          goto LABEL_45;
      }
      else
      {
        if ( teamCondType != 112 )
        {
          if ( teamCondType != 111 )
            goto LABEL_36;
          if ( !v17 )
            goto LABEL_45;
          goto LABEL_28;
        }
        if ( !v17 )
          goto LABEL_36;
      }
      v20 = v5->fields.Root;
      if ( !v20 )
        goto LABEL_47;
      if ( HIDWORD(v17->fields.flagNow) != v20->fields._ForceId_k__BackingField )
      {
LABEL_36:
        indivGetArgs = v5->fields.indivGetArgs;
        if ( *(_WORD *)&v15->_2.bitflags1 )
        {
          v22 = 0LL;
          v23 = (IWarBoardObjectData_c **)&v15->_1.interfaceOffsets->offset;
          while ( *(v23 - 1) != IWarBoardObjectData_TypeInfo )
          {
            ++v22;
            v23 += 2;
            if ( v22 >= *(unsigned __int16 *)&v15->_2.bitflags1 )
              goto LABEL_40;
          }
          v24 = (__int64)(&v15->vtable._6_get_FlagNow.method + 2 * *(_DWORD *)v23);
        }
        else
        {
LABEL_40:
          v24 = sub_AC5258(v10, IWarBoardObjectData_TypeInfo, 6LL, v3);
        }
        v25 = (System_Int32_array *)(*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, struct IWarBoardObjectData_IndivGetArgs_o *, _QWORD))v24)(
                                      v10,
                                      indivGetArgs,
                                      *(_QWORD *)(v24 + 8));
        this = (IndividualityTargetDetector_o *)Individuality__CheckSignedMultiIndividuality(
                                                  v25,
                                                  v5->fields.multiIndividuality,
                                                  v26);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (IndividualityTargetDetector_o *)v5->fields._TargetObjectHashSet_k__BackingField;
          if ( !this )
            goto LABEL_47;
          this = (IndividualityTargetDetector_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)this,
                                                    v10,
                                                    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
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
  __int64 v5; // x1
  __int64 v6; // x10
  IndividualityTargetDetector_c *v7; // x9
  struct System_Int32_array_array *multiIndividuality; // x8
  TargetDetector_c *klass; // x10
  __int64 v10; // x9
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x10
  _BYTE *monitor; // x11
  __int64 i; // x22
  TargetDetector_c *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x0

  v3 = t;
  v4 = this;
  if ( (byte_4188F76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, t);
    this = (IndividualityTargetDetector_o *)sub_B2C35C(&IndividualityTargetDetector_TypeInfo, v5);
    byte_4188F76 = 1;
  }
  if ( !v3 )
    goto LABEL_28;
  v6 = *(&IndividualityTargetDetector_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    goto LABEL_28;
  v7 = (IndividualityTargetDetector_c *)v3->klass->_2.typeHierarchy[v6 - 1];
  if ( v7 != IndividualityTargetDetector_TypeInfo )
    v3 = 0LL;
  if ( v7 != IndividualityTargetDetector_TypeInfo )
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
  v10 = *(_QWORD *)&multiIndividuality->max_length;
  if ( (_DWORD)v10 != LODWORD(klass->_1.namespaze) )
    goto LABEL_28;
  indivGetArgs = v4->fields.indivGetArgs;
  if ( !indivGetArgs || (monitor = v3[1].monitor) == 0LL )
LABEL_30:
    sub_B2C434(this, t);
  if ( !indivGetArgs->fields.IsIncludeIgnoreIndividuality != (monitor[16] != 0)
    && !indivGetArgs->fields.IsIncludePassiveIndividuality != (monitor[17] != 0)
    && !indivGetArgs->fields.IsIgnoreIndivUnreleasable != (monitor[18] != 0)
    && v4->fields.teamCondType == v3[1].fields._Id_k__BackingField )
  {
    if ( (int)v10 < 1 )
    {
      LOBYTE(this) = 1;
      return (char)this;
    }
    for ( i = 4LL; ; ++i )
    {
      if ( i - 4 >= (unsigned __int64)(unsigned int)v10 )
        goto LABEL_31;
      v14 = v3[1].klass;
      if ( !v14 )
        goto LABEL_30;
      if ( i - 4 >= (unsigned __int64)LODWORD(v14->_1.namespaze) )
      {
LABEL_31:
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
      }
      this = (IndividualityTargetDetector_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                                *((System_Collections_Generic_IEnumerable_TSource__o **)&multiIndividuality->obj.klass
                                                + i),
                                                *((System_Collections_Generic_IEnumerable_TSource__o **)&v14->_1.image
                                                + i),
                                                (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      multiIndividuality = v4->fields.multiIndividuality;
      if ( !multiIndividuality )
        goto LABEL_30;
      LODWORD(v10) = multiIndividuality->max_length;
      v15 = i - 3;
      this = (IndividualityTargetDetector_o *)(&dword_0 + 1);
      if ( v15 >= (int)v10 )
        return (char)this;
    }
  }
LABEL_28:
  LOBYTE(this) = 0;
  return (char)this;
}