void IndividualityTargetDetector___ctor(
        IndividualityTargetDetector_o *this,
        WarBoardActionTrendConditionEntity_o *entity,
        WarBoardAiTargetCacher_o *root,
        int32_t teamCond,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x24
  struct IWarBoardObjectData_IndivGetArgs_o **p_indivGetArgs; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  _BOOL8 IsIncludeIgnoreIndividuality; // x0
  __int64 v15; // x1
  struct System_Int32_array_array *SortedMultiIndividuality; // x0
  CGThumbnailListItem_o *p_multiIndividuality; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _BYTE *monitor; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v21; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v22; // x20

  if ( (byte_4CB3C9F & 1) == 0 )
  {
    sub_1C6BA08(&IWarBoardObjectData_IndivGetArgs_TypeInfo);
    byte_4CB3C9F = 1;
  }
  v9 = (Il2CppObject *)sub_1C6BC54(IWarBoardObjectData_IndivGetArgs_TypeInfo);
  System_Object___ctor(v9, 0);
  this->fields.indivGetArgs = (struct IWarBoardObjectData_IndivGetArgs_o *)v9;
  p_indivGetArgs = &this->fields.indivGetArgs;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.indivGetArgs, (int32_t)v9, v11, v12);
  TargetDetector___ctor((TargetDetector_o *)this, root, v13);
  this->fields.teamCondType = teamCond;
  if ( !entity )
    goto LABEL_8;
  SortedMultiIndividuality = WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality(entity, 0);
  this->fields.multiIndividuality = SortedMultiIndividuality;
  p_multiIndividuality = (CGThumbnailListItem_o *)&this->fields.multiIndividuality;
  sub_1C6B9AC(p_multiIndividuality, (int32_t)SortedMultiIndividuality, v18, v19);
  monitor = p_multiIndividuality->monitor;
  IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(entity, 0);
  if ( !monitor
    || (monitor[16] = IsIncludeIgnoreIndividuality,
        v21 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(entity, 0),
        !v21)
    || (v21->fields.IsIncludePassiveIndividuality = IsIncludeIgnoreIndividuality,
        v22 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(entity, 0),
        !v22) )
  {
LABEL_8:
    sub_1C6BC60(IsIncludeIgnoreIndividuality, v15);
  }
  v22->fields.IsIgnoreIndivUnreleasable = IsIncludeIgnoreIndividuality;
}


void IndividualityTargetDetector__AggregateTargetObject(
        IndividualityTargetDetector_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  IndividualityTargetDetector_o *v4; // x20
  int max_length; // w8
  int i; // w24
  Il2CppObject *v7; // x21
  Il2CppClass *klass; // x8
  __int64 v9; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 v11; // x0
  Il2CppClass *v12; // x8
  __int64 naturalAligment; // x10
  Il2CppObject *v14; // x9
  int teamCondType; // w10
  struct WarBoardAiTargetCacher_o *Root; // x10
  struct WarBoardAiTargetCacher_o *v17; // x10
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x22
  __int64 v19; // x9
  IWarBoardObjectData_c **v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  System_Int32_array_array *multiIndividuality; // x22
  System_Int32_array *v24; // x23

  v4 = this;
  if ( (byte_4CB3CA0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
    sub_1C6BA08(&IWarBoardObjectData_TypeInfo);
    sub_1C6BA08(&Individuality_TypeInfo);
    this = (IndividualityTargetDetector_o *)sub_1C6BA08(&WarBoardPieceData_TypeInfo);
    byte_4CB3CA0 = 1;
  }
  if ( !objectArray )
LABEL_49:
    sub_1C6BC60(this, objectArray);
  max_length = objectArray->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C6BC68(this);
      v7 = (Il2CppObject *)objectArray->m_Items[i];
      if ( !v7 )
        goto LABEL_49;
      klass = v7->klass;
      v9 = *(unsigned __int16 *)&v7->klass->_2.rank;
      if ( *(_WORD *)&v7->klass->_2.rank )
      {
        p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
        {
          --v9;
          p_offset += 2;
          if ( !v9 )
            goto LABEL_12;
        }
        v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
      }
      else
      {
LABEL_12:
        v11 = sub_1C41D90(v7, IWarBoardObjectData_TypeInfo, 2);
      }
      this = (IndividualityTargetDetector_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v11)(
                                                v7,
                                                *(_QWORD *)(v11 + 8));
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v12 = v7->klass;
      naturalAligment = WarBoardPieceData_TypeInfo->_2.naturalAligment;
      if ( v7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (WarBoardPieceData_c *)v12->_2.typeHierarchy[naturalAligment - 1] == WarBoardPieceData_TypeInfo )
          v14 = v7;
        else
          v14 = 0;
      }
      else
      {
        v14 = 0;
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
            goto LABEL_49;
          if ( HIDWORD(v14[1].klass) == Root->fields._ForceId_k__BackingField )
            goto LABEL_36;
          goto LABEL_47;
        }
        if ( !v14 )
          goto LABEL_47;
      }
      else
      {
        if ( teamCondType != 112 )
        {
          if ( teamCondType != 111 )
            goto LABEL_36;
          if ( !v14 )
            goto LABEL_47;
          goto LABEL_28;
        }
        if ( !v14 )
          goto LABEL_36;
      }
      v17 = v4->fields.Root;
      if ( !v17 )
        goto LABEL_49;
      if ( HIDWORD(v14[1].klass) != v17->fields._ForceId_k__BackingField )
      {
LABEL_36:
        indivGetArgs = v4->fields.indivGetArgs;
        v19 = *(unsigned __int16 *)&v12->_2.rank;
        if ( *(_WORD *)&v12->_2.rank )
        {
          v20 = (IWarBoardObjectData_c **)&v12->_1.interfaceOffsets->offset;
          while ( *(v20 - 1) != IWarBoardObjectData_TypeInfo )
          {
            --v19;
            v20 += 2;
            if ( !v19 )
              goto LABEL_40;
          }
          v21 = (__int64)&v12->vtable[*(_DWORD *)v20 + 6];
        }
        else
        {
LABEL_40:
          v21 = sub_1C41D90(v7, IWarBoardObjectData_TypeInfo, 6);
        }
        v22 = (*(__int64 (__fastcall **)(Il2CppObject *, struct IWarBoardObjectData_IndivGetArgs_o *, _QWORD))v21)(
                v7,
                indivGetArgs,
                *(_QWORD *)(v21 + 8));
        multiIndividuality = v4->fields.multiIndividuality;
        v24 = (System_Int32_array *)v22;
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        this = (IndividualityTargetDetector_o *)Individuality__CheckSignedMultiIndividuality(v24, multiIndividuality, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (IndividualityTargetDetector_o *)v4->fields._TargetObjectHashSet_k__BackingField;
          if ( !this )
            goto LABEL_49;
          this = (IndividualityTargetDetector_o *)System_Collections_Generic_HashSet_object___Add(
                                                    (System_Collections_Generic_HashSet_T__o *)this,
                                                    v7,
                                                    (const MethodInfo_36B85C4 *)Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
        }
      }
LABEL_47:
      max_length = objectArray->max_length;
    }
  }
}


bool IndividualityTargetDetector__IsSameCondition(
        IndividualityTargetDetector_o *this,
        TargetDetector_o *t,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  struct System_Int32_array_array *multiIndividuality; // x8
  TargetDetector_c *klass; // x10
  il2cpp_array_size_t max_length; // x9
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x10
  unsigned __int8 *monitor; // x11
  bool v13; // w22
  __int64 v14; // x23
  TargetDetector_c *v15; // x9
  __int64 v16; // x10

  if ( (byte_4CB3CA1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C6BA08(&IndividualityTargetDetector_TypeInfo);
    byte_4CB3CA1 = 1;
  }
  if ( !t )
    return 0;
  naturalAligment = IndividualityTargetDetector_TypeInfo->_2.naturalAligment;
  if ( t->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (IndividualityTargetDetector_c *)t->klass->_2.typeHierarchy[naturalAligment - 1] != IndividualityTargetDetector_TypeInfo )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)t[1].klass, 0);
  if ( IsNullOrEmpty )
    return 0;
  multiIndividuality = this->fields.multiIndividuality;
  if ( !multiIndividuality )
    goto LABEL_27;
  klass = t[1].klass;
  if ( !klass )
    goto LABEL_27;
  max_length = multiIndividuality->max_length;
  if ( (_DWORD)max_length != LODWORD(klass->_1.namespaze) )
    return 0;
  indivGetArgs = this->fields.indivGetArgs;
  if ( !indivGetArgs || (monitor = (unsigned __int8 *)t[1].monitor) == 0 )
LABEL_27:
    sub_1C6BC60(IsNullOrEmpty, v7);
  if ( indivGetArgs->fields.IsIncludeIgnoreIndividuality != monitor[16]
    || indivGetArgs->fields.IsIncludePassiveIndividuality != monitor[17]
    || indivGetArgs->fields.IsIgnoreIndivUnreleasable != monitor[18]
    || this->fields.teamCondType != t[1].fields._Id_k__BackingField )
  {
    return 0;
  }
  v13 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v14 = 4;
    do
    {
      if ( v14 - 4 >= (unsigned __int64)(unsigned int)max_length )
        goto LABEL_28;
      v15 = t[1].klass;
      if ( !v15 )
        goto LABEL_27;
      if ( v14 - 4 >= (unsigned __int64)LODWORD(v15->_1.namespaze) )
LABEL_28:
        sub_1C6BC68(IsNullOrEmpty);
      IsNullOrEmpty = System_Linq_Enumerable__SequenceEqual_int_(
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&multiIndividuality->obj.klass + v14),
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&v15->_1.image + v14),
                        (const MethodInfo_317503C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
      if ( !IsNullOrEmpty )
        break;
      multiIndividuality = this->fields.multiIndividuality;
      if ( !multiIndividuality )
        goto LABEL_27;
      LODWORD(max_length) = multiIndividuality->max_length;
      v16 = v14 - 3;
      ++v14;
      v13 = v16 < (int)max_length;
    }
    while ( v16 < (int)max_length );
  }
  return !v13;
}