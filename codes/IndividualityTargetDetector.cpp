// local variable allocation has failed, the output may be wrong!
void __fastcall IndividualityTargetDetector___ctor(
        IndividualityTargetDetector_o *this,
        WarBoardActionTrendConditionEntity_o *entity,
        WarBoardAiTargetCacher_o *root,
        int32_t teamCond,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x24
  struct IWarBoardObjectData_IndivGetArgs_o **p_indivGetArgs; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2
  _BOOL8 IsIncludeIgnoreIndividuality; // x0
  __int64 v19; // x1
  struct System_Int32_array_array *SortedMultiIndividuality; // x0
  PartyOrganizationUtility_o *p_multiIndividuality; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BYTE *monitor; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v29; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v30; // x20

  if ( (byte_4B13DEC & 1) == 0 )
  {
    sub_1BCA7E0(&IWarBoardObjectData_IndivGetArgs_TypeInfo, entity, root);
    byte_4B13DEC = 1;
  }
  v9 = (Il2CppObject *)sub_1BCAA2C(IWarBoardObjectData_IndivGetArgs_TypeInfo, entity, root, *(_QWORD *)&teamCond);
  System_Object___ctor(v9, 0LL);
  this->fields.indivGetArgs = (struct IWarBoardObjectData_IndivGetArgs_o *)v9;
  p_indivGetArgs = &this->fields.indivGetArgs;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.indivGetArgs, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  TargetDetector___ctor((TargetDetector_o *)this, root, v17);
  this->fields.teamCondType = teamCond;
  if ( !entity )
    goto LABEL_8;
  SortedMultiIndividuality = WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality(entity, 0LL);
  this->fields.multiIndividuality = SortedMultiIndividuality;
  p_multiIndividuality = (PartyOrganizationUtility_o *)&this->fields.multiIndividuality;
  sub_1BCA784(p_multiIndividuality, (int64_t)SortedMultiIndividuality, v22, v23, v24, v25, v26, v27);
  monitor = p_multiIndividuality->monitor;
  IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(entity, 0LL);
  if ( !monitor
    || (monitor[16] = IsIncludeIgnoreIndividuality,
        v29 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(entity, 0LL),
        !v29)
    || (v29->fields.IsIncludePassiveIndividuality = IsIncludeIgnoreIndividuality,
        v30 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(entity, 0LL),
        !v30) )
  {
LABEL_8:
    sub_1BCAA3C(IsIncludeIgnoreIndividuality, v19);
  }
  v30->fields.IsIgnoreIndivUnreleasable = IsIncludeIgnoreIndividuality;
}


void __fastcall IndividualityTargetDetector__AggregateTargetObject(
        IndividualityTargetDetector_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  IndividualityTargetDetector_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  signed int max_length; // w8
  signed int i; // w24
  Il2CppObject *v13; // x21
  Il2CppClass *klass; // x8
  __int64 v15; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v18; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x9
  int teamCondType; // w10
  struct WarBoardAiTargetCacher_o *Root; // x10
  struct WarBoardAiTargetCacher_o *v23; // x10
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x22
  __int64 v25; // x9
  IWarBoardObjectData_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_Int32_array_array *multiIndividuality; // x22
  System_Int32_array *v31; // x23

  v4 = this;
  if ( (byte_4B13DED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__, objectArray, method);
    sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, v5, v6);
    sub_1BCA7E0(&Individuality_TypeInfo, v7, v8);
    this = (IndividualityTargetDetector_o *)sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v9, v10);
    byte_4B13DED = 1;
  }
  if ( !objectArray )
LABEL_49:
    sub_1BCAA3C(this, objectArray);
  max_length = objectArray->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1BCAA44(this, objectArray);
      v13 = (Il2CppObject *)objectArray->m_Items[i];
      if ( !v13 )
        goto LABEL_49;
      klass = v13->klass;
      v15 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
      {
        p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
        {
          --v15;
          p_offset += 2;
          if ( !v15 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C1C7C0(v13, IWarBoardObjectData_TypeInfo, 2LL);
      }
      this = (IndividualityTargetDetector_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(
                                                v13,
                                                *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v18 = v13->klass;
      methodPtr_low = LOBYTE(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v13->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (WarBoardPieceData_c *)v18->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPieceData_TypeInfo )
          v20 = v13;
        else
          v20 = 0LL;
      }
      else
      {
        v20 = 0LL;
      }
      teamCondType = v4->fields.teamCondType;
      if ( teamCondType <= 77 )
      {
        if ( teamCondType != 76 )
        {
          if ( teamCondType != 77 || !v20 )
            goto LABEL_36;
LABEL_28:
          Root = v4->fields.Root;
          if ( !Root )
            goto LABEL_49;
          if ( HIDWORD(v20[1].klass) == Root->fields._ForceId_k__BackingField )
            goto LABEL_36;
          goto LABEL_47;
        }
        if ( !v20 )
          goto LABEL_47;
      }
      else
      {
        if ( teamCondType != 112 )
        {
          if ( teamCondType != 111 )
            goto LABEL_36;
          if ( !v20 )
            goto LABEL_47;
          goto LABEL_28;
        }
        if ( !v20 )
          goto LABEL_36;
      }
      v23 = v4->fields.Root;
      if ( !v23 )
        goto LABEL_49;
      if ( HIDWORD(v20[1].klass) != v23->fields._ForceId_k__BackingField )
      {
LABEL_36:
        indivGetArgs = v4->fields.indivGetArgs;
        v25 = *(unsigned __int16 *)(&v18->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v18->_2.bitflags2 + 3) )
        {
          v26 = (IWarBoardObjectData_c **)&v18->_1.interfaceOffsets->offset;
          while ( *(v26 - 1) != IWarBoardObjectData_TypeInfo )
          {
            --v25;
            v26 += 2;
            if ( !v25 )
              goto LABEL_40;
          }
          v27 = (__int64)&v18->vtable[*(_DWORD *)v26 + 6].method;
        }
        else
        {
LABEL_40:
          v27 = sub_1C1C7C0(v13, IWarBoardObjectData_TypeInfo, 6LL);
        }
        v28 = (*(__int64 (__fastcall **)(Il2CppObject *, struct IWarBoardObjectData_IndivGetArgs_o *, _QWORD))v27)(
                v13,
                indivGetArgs,
                *(_QWORD *)(v27 + 8));
        multiIndividuality = v4->fields.multiIndividuality;
        v31 = (System_Int32_array *)v28;
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v29);
        this = (IndividualityTargetDetector_o *)Individuality__CheckSignedMultiIndividuality(
                                                  v31,
                                                  multiIndividuality,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (IndividualityTargetDetector_o *)v4->fields._TargetObjectHashSet_k__BackingField;
          if ( !this )
            goto LABEL_49;
          this = (IndividualityTargetDetector_o *)System_Collections_Generic_HashSet_object___Add(
                                                    (System_Collections_Generic_HashSet_T__o *)this,
                                                    v13,
                                                    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
        }
      }
LABEL_47:
      max_length = objectArray->max_length;
    }
  }
}


bool __fastcall IndividualityTargetDetector__IsSameCondition(
        IndividualityTargetDetector_o *this,
        TargetDetector_o *t,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 methodPtr_low; // x10
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
  struct System_Int32_array_array *multiIndividuality; // x8
  TargetDetector_c *klass; // x10
  __int64 v12; // x9
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x10
  unsigned __int8 *monitor; // x11
  bool v15; // w22
  __int64 v16; // x23
  TargetDetector_c *v17; // x9
  __int64 v18; // x10

  if ( (byte_4B13DEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, t, method);
    sub_1BCA7E0(&IndividualityTargetDetector_TypeInfo, v5, v6);
    byte_4B13DEE = 1;
  }
  if ( !t )
    return 0;
  methodPtr_low = LOBYTE(IndividualityTargetDetector_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(t->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0;
  if ( (IndividualityTargetDetector_c *)t->klass->_2.typeHierarchy[methodPtr_low - 1] != IndividualityTargetDetector_TypeInfo )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)t[1].klass, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  multiIndividuality = this->fields.multiIndividuality;
  if ( !multiIndividuality )
    goto LABEL_27;
  klass = t[1].klass;
  if ( !klass )
    goto LABEL_27;
  v12 = *(_QWORD *)&multiIndividuality->max_length;
  if ( (_DWORD)v12 != LODWORD(klass->_1.namespaze) )
    return 0;
  indivGetArgs = this->fields.indivGetArgs;
  if ( !indivGetArgs || (monitor = (unsigned __int8 *)t[1].monitor) == 0LL )
LABEL_27:
    sub_1BCAA3C(IsNullOrEmpty, v9);
  if ( indivGetArgs->fields.IsIncludeIgnoreIndividuality != monitor[16]
    || indivGetArgs->fields.IsIncludePassiveIndividuality != monitor[17]
    || indivGetArgs->fields.IsIgnoreIndivUnreleasable != monitor[18]
    || this->fields.teamCondType != t[1].fields._Id_k__BackingField )
  {
    return 0;
  }
  v15 = (int)v12 > 0;
  if ( (int)v12 >= 1 )
  {
    v16 = 4LL;
    do
    {
      if ( v16 - 4 >= (unsigned __int64)(unsigned int)v12 )
        goto LABEL_28;
      v17 = t[1].klass;
      if ( !v17 )
        goto LABEL_27;
      if ( v16 - 4 >= (unsigned __int64)LODWORD(v17->_1.namespaze) )
LABEL_28:
        sub_1BCAA44(IsNullOrEmpty, v9);
      IsNullOrEmpty = System_Linq_Enumerable__SequenceEqual_int_(
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&multiIndividuality->obj.klass + v16),
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&v17->_1.image + v16),
                        (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
      if ( !IsNullOrEmpty )
        break;
      multiIndividuality = this->fields.multiIndividuality;
      if ( !multiIndividuality )
        goto LABEL_27;
      LODWORD(v12) = multiIndividuality->max_length;
      v18 = v16 - 3;
      ++v16;
      v15 = v18 < (int)v12;
    }
    while ( v18 < (int)v12 );
  }
  return !v15;
}