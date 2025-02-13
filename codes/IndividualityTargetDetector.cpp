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

  if ( (byte_4BDA0DD & 1) == 0 )
  {
    sub_1C21E38(&IWarBoardObjectData_IndivGetArgs_TypeInfo);
    byte_4BDA0DD = 1;
  }
  v9 = (Il2CppObject *)sub_1C22084(IWarBoardObjectData_IndivGetArgs_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields.indivGetArgs = (struct IWarBoardObjectData_IndivGetArgs_o *)v9;
  p_indivGetArgs = &this->fields.indivGetArgs;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.indivGetArgs, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  TargetDetector___ctor((TargetDetector_o *)this, root, v17);
  this->fields.teamCondType = teamCond;
  if ( !entity )
    goto LABEL_8;
  SortedMultiIndividuality = WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality(entity, 0LL);
  this->fields.multiIndividuality = SortedMultiIndividuality;
  p_multiIndividuality = (PartyOrganizationUtility_o *)&this->fields.multiIndividuality;
  sub_1C21DDC(p_multiIndividuality, (int64_t)SortedMultiIndividuality, v22, v23, v24, v25, v26, v27);
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
    sub_1C22094(IsIncludeIgnoreIndividuality, v19);
  }
  v30->fields.IsIgnoreIndivUnreleasable = IsIncludeIgnoreIndividuality;
}


void __fastcall IndividualityTargetDetector__AggregateTargetObject(
        IndividualityTargetDetector_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  IndividualityTargetDetector_o *v4; // x20
  signed int max_length; // w8
  signed int i; // w24
  Il2CppObject *v7; // x21
  Il2CppClass *klass; // x8
  __int64 v9; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v12; // x8
  __int64 methodPtr_low; // x10
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
  if ( (byte_4BDA0DE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
    sub_1C21E38(&IWarBoardObjectData_TypeInfo);
    sub_1C21E38(&Individuality_TypeInfo);
    this = (IndividualityTargetDetector_o *)sub_1C21E38(&WarBoardPieceData_TypeInfo);
    byte_4BDA0DE = 1;
  }
  if ( !objectArray )
LABEL_49:
    sub_1C22094(this, objectArray);
  max_length = objectArray->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C2209C(this, objectArray);
      v7 = (Il2CppObject *)objectArray->m_Items[i];
      if ( !v7 )
        goto LABEL_49;
      klass = v7->klass;
      v9 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
      {
        p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
        {
          --v9;
          p_offset += 2;
          if ( !v9 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C73E18(v7, IWarBoardObjectData_TypeInfo, 2LL);
      }
      this = (IndividualityTargetDetector_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(
                                                v7,
                                                *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v12 = v7->klass;
      methodPtr_low = LOBYTE(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (WarBoardPieceData_c *)v12->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPieceData_TypeInfo )
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
        v19 = *(unsigned __int16 *)(&v12->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v12->_2.bitflags2 + 3) )
        {
          v20 = (IWarBoardObjectData_c **)&v12->_1.interfaceOffsets->offset;
          while ( *(v20 - 1) != IWarBoardObjectData_TypeInfo )
          {
            --v19;
            v20 += 2;
            if ( !v19 )
              goto LABEL_40;
          }
          v21 = (__int64)&v12->vtable[*(_DWORD *)v20 + 6].method;
        }
        else
        {
LABEL_40:
          v21 = sub_1C73E18(v7, IWarBoardObjectData_TypeInfo, 6LL);
        }
        v22 = (*(__int64 (__fastcall **)(Il2CppObject *, struct IWarBoardObjectData_IndivGetArgs_o *, _QWORD))v21)(
                v7,
                indivGetArgs,
                *(_QWORD *)(v21 + 8));
        multiIndividuality = v4->fields.multiIndividuality;
        v24 = (System_Int32_array *)v22;
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        this = (IndividualityTargetDetector_o *)Individuality__CheckSignedMultiIndividuality(
                                                  v24,
                                                  multiIndividuality,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (IndividualityTargetDetector_o *)v4->fields._TargetObjectHashSet_k__BackingField;
          if ( !this )
            goto LABEL_49;
          this = (IndividualityTargetDetector_o *)System_Collections_Generic_HashSet_object___Add(
                                                    (System_Collections_Generic_HashSet_T__o *)this,
                                                    v7,
                                                    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
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
  __int64 methodPtr_low; // x10
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  struct System_Int32_array_array *multiIndividuality; // x8
  TargetDetector_c *klass; // x10
  __int64 v10; // x9
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x10
  unsigned __int8 *monitor; // x11
  bool v13; // w22
  __int64 v14; // x23
  TargetDetector_c *v15; // x9
  __int64 v16; // x10

  if ( (byte_4BDA0DF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C21E38(&IndividualityTargetDetector_TypeInfo);
    byte_4BDA0DF = 1;
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
  v10 = *(_QWORD *)&multiIndividuality->max_length;
  if ( (_DWORD)v10 != LODWORD(klass->_1.namespaze) )
    return 0;
  indivGetArgs = this->fields.indivGetArgs;
  if ( !indivGetArgs || (monitor = (unsigned __int8 *)t[1].monitor) == 0LL )
LABEL_27:
    sub_1C22094(IsNullOrEmpty, v7);
  if ( indivGetArgs->fields.IsIncludeIgnoreIndividuality != monitor[16]
    || indivGetArgs->fields.IsIncludePassiveIndividuality != monitor[17]
    || indivGetArgs->fields.IsIgnoreIndivUnreleasable != monitor[18]
    || this->fields.teamCondType != t[1].fields._Id_k__BackingField )
  {
    return 0;
  }
  v13 = (int)v10 > 0;
  if ( (int)v10 >= 1 )
  {
    v14 = 4LL;
    do
    {
      if ( v14 - 4 >= (unsigned __int64)(unsigned int)v10 )
        goto LABEL_28;
      v15 = t[1].klass;
      if ( !v15 )
        goto LABEL_27;
      if ( v14 - 4 >= (unsigned __int64)LODWORD(v15->_1.namespaze) )
LABEL_28:
        sub_1C2209C(IsNullOrEmpty, v7);
      IsNullOrEmpty = System_Linq_Enumerable__SequenceEqual_int_(
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&multiIndividuality->obj.klass + v14),
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&v15->_1.image + v14),
                        (const MethodInfo_2FE4208 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
      if ( !IsNullOrEmpty )
        break;
      multiIndividuality = this->fields.multiIndividuality;
      if ( !multiIndividuality )
        goto LABEL_27;
      LODWORD(v10) = multiIndividuality->max_length;
      v16 = v14 - 3;
      ++v14;
      v13 = v16 < (int)v10;
    }
    while ( v16 < (int)v10 );
  }
  return !v13;
}