void __fastcall IndividualityTargetDetector___ctor(
        IndividualityTargetDetector_o *this,
        WarBoardActionTrendConditionEntity_o *entity,
        WarBoardAiTargetCacher_o *root,
        int32_t teamCond,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x24
  struct IWarBoardObjectData_IndivGetArgs_o **p_indivGetArgs; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  _BOOL8 IsIncludeIgnoreIndividuality; // x0
  __int64 v15; // x1
  struct System_Int32_array_array *SortedMultiIndividuality; // x0
  ServantStatusBattleListViewItem_o *p_multiIndividuality; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  _BYTE *monitor; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v21; // x21
  struct IWarBoardObjectData_IndivGetArgs_o *v22; // x20

  if ( (byte_4AB389A & 1) == 0 )
  {
    sub_1BAB41C(&IWarBoardObjectData_IndivGetArgs_TypeInfo, entity);
    byte_4AB389A = 1;
  }
  v9 = (Il2CppObject *)sub_1BAB668(IWarBoardObjectData_IndivGetArgs_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields.indivGetArgs = (struct IWarBoardObjectData_IndivGetArgs_o *)v9;
  p_indivGetArgs = &this->fields.indivGetArgs;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.indivGetArgs, (int32_t)v9, v11, v12);
  TargetDetector___ctor((TargetDetector_o *)this, root, v13);
  this->fields.teamCondType = teamCond;
  if ( !entity )
    goto LABEL_8;
  SortedMultiIndividuality = WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality(entity, 0LL);
  this->fields.multiIndividuality = SortedMultiIndividuality;
  p_multiIndividuality = (ServantStatusBattleListViewItem_o *)&this->fields.multiIndividuality;
  sub_1BAB3C0(p_multiIndividuality, (int32_t)SortedMultiIndividuality, v18, v19);
  monitor = p_multiIndividuality->monitor;
  IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(entity, 0LL);
  if ( !monitor
    || (monitor[16] = IsIncludeIgnoreIndividuality,
        v21 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(entity, 0LL),
        !v21)
    || (v21->fields.IsIncludePassiveIndividuality = IsIncludeIgnoreIndividuality,
        v22 = *p_indivGetArgs,
        IsIncludeIgnoreIndividuality = WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(entity, 0LL),
        !v22) )
  {
LABEL_8:
    sub_1BAB678(IsIncludeIgnoreIndividuality, v15);
  }
  v22->fields.IsIgnoreIndivUnreleasable = IsIncludeIgnoreIndividuality;
}


void __fastcall IndividualityTargetDetector__AggregateTargetObject(
        IndividualityTargetDetector_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  IndividualityTargetDetector_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  signed int max_length; // w8
  signed int i; // w24
  Il2CppObject *v10; // x21
  Il2CppClass *klass; // x8
  __int64 v12; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v15; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v17; // x9
  int teamCondType; // w10
  struct WarBoardAiTargetCacher_o *Root; // x10
  struct WarBoardAiTargetCacher_o *v20; // x10
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x22
  __int64 v22; // x9
  IWarBoardObjectData_c **v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  System_Int32_array_array *multiIndividuality; // x22
  System_Int32_array *v27; // x23

  v4 = this;
  if ( (byte_4AB389B & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__, objectArray);
    sub_1BAB41C(&IWarBoardObjectData_TypeInfo, v5);
    sub_1BAB41C(&Individuality_TypeInfo, v6);
    this = (IndividualityTargetDetector_o *)sub_1BAB41C(&WarBoardPieceData_TypeInfo, v7);
    byte_4AB389B = 1;
  }
  if ( !objectArray )
LABEL_49:
    sub_1BAB678(this, objectArray);
  max_length = objectArray->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1BAB680(this, objectArray);
      v10 = (Il2CppObject *)objectArray->m_Items[i];
      if ( !v10 )
        goto LABEL_49;
      klass = v10->klass;
      v12 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
      {
        p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
        {
          --v12;
          p_offset += 2;
          if ( !v12 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1BFD3FC(v10, IWarBoardObjectData_TypeInfo, 2LL);
      }
      this = (IndividualityTargetDetector_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(
                                                v10,
                                                *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v15 = v10->klass;
      methodPtr_low = LOBYTE(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v10->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (WarBoardPieceData_c *)v15->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPieceData_TypeInfo )
          v17 = v10;
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      teamCondType = v4->fields.teamCondType;
      if ( teamCondType <= 77 )
      {
        if ( teamCondType != 76 )
        {
          if ( teamCondType != 77 || !v17 )
            goto LABEL_36;
LABEL_28:
          Root = v4->fields.Root;
          if ( !Root )
            goto LABEL_49;
          if ( HIDWORD(v17[1].klass) == Root->fields._ForceId_k__BackingField )
            goto LABEL_36;
          goto LABEL_47;
        }
        if ( !v17 )
          goto LABEL_47;
      }
      else
      {
        if ( teamCondType != 112 )
        {
          if ( teamCondType != 111 )
            goto LABEL_36;
          if ( !v17 )
            goto LABEL_47;
          goto LABEL_28;
        }
        if ( !v17 )
          goto LABEL_36;
      }
      v20 = v4->fields.Root;
      if ( !v20 )
        goto LABEL_49;
      if ( HIDWORD(v17[1].klass) != v20->fields._ForceId_k__BackingField )
      {
LABEL_36:
        indivGetArgs = v4->fields.indivGetArgs;
        v22 = *(unsigned __int16 *)(&v15->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v15->_2.bitflags2 + 3) )
        {
          v23 = (IWarBoardObjectData_c **)&v15->_1.interfaceOffsets->offset;
          while ( *(v23 - 1) != IWarBoardObjectData_TypeInfo )
          {
            --v22;
            v23 += 2;
            if ( !v22 )
              goto LABEL_40;
          }
          v24 = (__int64)&v15->vtable[*(_DWORD *)v23 + 6].method;
        }
        else
        {
LABEL_40:
          v24 = sub_1BFD3FC(v10, IWarBoardObjectData_TypeInfo, 6LL);
        }
        v25 = (*(__int64 (__fastcall **)(Il2CppObject *, struct IWarBoardObjectData_IndivGetArgs_o *, _QWORD))v24)(
                v10,
                indivGetArgs,
                *(_QWORD *)(v24 + 8));
        multiIndividuality = v4->fields.multiIndividuality;
        v27 = (System_Int32_array *)v25;
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        this = (IndividualityTargetDetector_o *)Individuality__CheckSignedMultiIndividuality(
                                                  v27,
                                                  multiIndividuality,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (IndividualityTargetDetector_o *)v4->fields._TargetObjectHashSet_k__BackingField;
          if ( !this )
            goto LABEL_49;
          this = (IndividualityTargetDetector_o *)System_Collections_Generic_HashSet_object___Add(
                                                    (System_Collections_Generic_HashSet_T__o *)this,
                                                    v10,
                                                    (const MethodInfo_3408C40 *)Method_System_Collections_Generic_HashSet_IWarBoardObjectData__Add__);
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
  __int64 methodPtr_low; // x10
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Int32_array_array *multiIndividuality; // x8
  TargetDetector_c *klass; // x10
  __int64 v11; // x9
  struct IWarBoardObjectData_IndivGetArgs_o *indivGetArgs; // x10
  unsigned __int8 *monitor; // x11
  bool v14; // w22
  __int64 v15; // x23
  TargetDetector_c *v16; // x9
  __int64 v17; // x10

  if ( (byte_4AB389C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_SequenceEqual_int___, t);
    sub_1BAB41C(&IndividualityTargetDetector_TypeInfo, v5);
    byte_4AB389C = 1;
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
  v11 = *(_QWORD *)&multiIndividuality->max_length;
  if ( (_DWORD)v11 != LODWORD(klass->_1.namespaze) )
    return 0;
  indivGetArgs = this->fields.indivGetArgs;
  if ( !indivGetArgs || (monitor = (unsigned __int8 *)t[1].monitor) == 0LL )
LABEL_27:
    sub_1BAB678(IsNullOrEmpty, v8);
  if ( indivGetArgs->fields.IsIncludeIgnoreIndividuality != monitor[16]
    || indivGetArgs->fields.IsIncludePassiveIndividuality != monitor[17]
    || indivGetArgs->fields.IsIgnoreIndivUnreleasable != monitor[18]
    || this->fields.teamCondType != t[1].fields._Id_k__BackingField )
  {
    return 0;
  }
  v14 = (int)v11 > 0;
  if ( (int)v11 >= 1 )
  {
    v15 = 4LL;
    do
    {
      if ( v15 - 4 >= (unsigned __int64)(unsigned int)v11 )
        goto LABEL_28;
      v16 = t[1].klass;
      if ( !v16 )
        goto LABEL_27;
      if ( v15 - 4 >= (unsigned __int64)LODWORD(v16->_1.namespaze) )
LABEL_28:
        sub_1BAB680(IsNullOrEmpty, v8);
      IsNullOrEmpty = System_Linq_Enumerable__SequenceEqual_int_(
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&multiIndividuality->obj.klass + v15),
                        *((System_Collections_Generic_IEnumerable_TSource__o **)&v16->_1.image + v15),
                        (const MethodInfo_2EF7B10 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
      if ( !IsNullOrEmpty )
        break;
      multiIndividuality = this->fields.multiIndividuality;
      if ( !multiIndividuality )
        goto LABEL_27;
      LODWORD(v11) = multiIndividuality->max_length;
      v17 = v15 - 3;
      ++v15;
      v14 = v17 < (int)v11;
    }
    while ( v17 < (int)v11 );
  }
  return !v14;
}