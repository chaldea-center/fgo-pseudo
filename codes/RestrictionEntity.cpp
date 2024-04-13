void __fastcall RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAF01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EAF01 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionEntity__CreatePrimaryKey(RestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall RestrictionEntity__GetClassIndividualityRestrictionMessage(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RestrictionEntity_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v55; // x0
  System_String_o *v56; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x21
  RestrictionEntity___c_c *v58; // x0
  struct RestrictionEntity___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__16_0; // x22
  Il2CppObject *v61; // x23
  struct RestrictionEntity___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v69; // x0
  RestrictionEntity___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x21
  struct RestrictionEntity___c_StaticFields *v72; // x9
  System_Func_int__BattleActionData_SideEffectData__o *_9__16_1; // x22
  Il2CppObject *v74; // x23
  struct RestrictionEntity___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_IEnumerable_string__o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x21
  Il2CppObject *v85; // x0
  System_String_o *v86; // x19
  System_String_o *v87; // x19
  Il2CppObject *v88; // x20
  Il2CppObject *v89; // x0
  int32_t rangeType; // [xsp+8h] [xbp-38h] BYREF
  int32_t v92; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42EAF00 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_int__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__string___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_int__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_int__string___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_int__string__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Func_int__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Restriction_RangeType_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&string_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__, v32, v33, v34);
    sub_B5D5C4(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__, v35, v36, v37);
    sub_B5D5C4(&RestrictionEntity___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_10486/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_10487/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v47, v48, v49);
    this = (RestrictionEntity_o *)sub_B5D5C4(&StringLiteral_11813/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v50, v51, v52);
    byte_42EAF00 = 1;
  }
  targetVals = v4->fields.targetVals;
  if ( !targetVals )
    sub_B5D69C(this, method);
  if ( targetVals->max_length != 1 )
    return string_TypeInfo->static_fields->Empty;
  targetVals2 = v4->fields.targetVals2;
  if ( !targetVals2 || !*(_QWORD *)&targetVals2->max_length )
    return string_TypeInfo->static_fields->Empty;
  v92 = targetVals->m_Items[1];
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  v56 = System_String__Format((System_String_o *)StringLiteral_11813/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v55, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v56, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.targetVals2;
  v58 = RestrictionEntity___c_TypeInfo;
  if ( (BYTE3(RestrictionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v58 = RestrictionEntity___c_TypeInfo;
  }
  static_fields = v58->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__16_0,
      v61,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__,
      (const MethodInfo_2C29044 *)Method_System_Func_int__int___ctor__);
    v62 = RestrictionEntity___c_TypeInfo->static_fields;
    v62->__9__16_0 = _9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v62->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  v69 = System_Linq_Enumerable__OrderBy_int__int_(
          v57,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (const MethodInfo_1CAF0AC *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v70 = RestrictionEntity___c_TypeInfo;
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
  if ( (BYTE3(RestrictionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v70 = RestrictionEntity___c_TypeInfo;
  }
  v72 = v70->static_fields;
  _9__16_1 = (System_Func_int__BattleActionData_SideEffectData__o *)v72->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v72 = RestrictionEntity___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)v72->__9;
    _9__16_1 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__string__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__16_1,
      v74,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__string___ctor__);
    v75 = RestrictionEntity___c_TypeInfo->static_fields;
    v75->__9__16_1 = (struct System_Func_int__string__o *)_9__16_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v75->__9__16_1,
      (System_Int32_array **)_9__16_1,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  v82 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                              v71,
                                                              (System_Func_TSource__TResult__o *)_9__16_1,
                                                              (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__string___);
  v83 = System_String__Join_44633232((System_String_o *)StringLiteral_16096/*"_"*/, v82, 0LL);
  v84 = System_String__Concat_44577788((System_String_o *)StringLiteral_10486/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v83, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v84, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  rangeType = v4->fields.rangeType;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType);
  v86 = System_String__Format((System_String_o *)StringLiteral_10487/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v85, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v86, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v87 = LocalizationManager__Get(v86, 0LL);
  v88 = (Il2CppObject *)LocalizationManager__Get(v56, 0LL);
  v89 = (Il2CppObject *)LocalizationManager__Get(v84, 0LL);
  return System_String__Format_44573324(v87, v88, v89, 0LL);
}


int32_t __fastcall RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  __int64 v4; // x9
  __int64 v6; // x0

  type = this->fields.type;
  if ( type != 16 && type != 12 )
    return 0;
  targetVals2 = this->fields.targetVals2;
  if ( !targetVals2 )
    return 0;
  v4 = *(_QWORD *)&targetVals2->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return targetVals2->m_Items[1];
}


bool __fastcall RestrictionEntity__IsRestriction(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x8
  __int64 v5; // x9
  struct System_Int32_array *v6; // x8
  __int64 v7; // x9
  __int64 v9; // x0

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals(this, v, method);
    case 2:
      return RestrictionEntity__IsSearchVals(this, v, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_11;
      v5 = *(_QWORD *)&targetVals->max_length;
      if ( !v5 )
        goto LABEL_11;
      if ( !(_DWORD)v5 )
        goto LABEL_15;
      v3 = targetVals->m_Items[1] > v;
      break;
    case 4:
      v6 = this->fields.targetVals;
      if ( v6 && (v7 = *(_QWORD *)&v6->max_length) != 0 )
      {
        if ( !(_DWORD)v7 )
        {
LABEL_15:
          v9 = sub_B5D6C8(this);
          sub_B5D668(v9, 0LL);
        }
        v3 = v6->m_Items[1] < v;
      }
      else
      {
LABEL_11:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


bool __fastcall RestrictionEntity__IsRestrictionTarget(
        RestrictionEntity_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *targetVals2; // x0

  if ( (byte_42EAEFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, targetType, (_DWORD)method, v3);
    byte_42EAEFD = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall RestrictionEntity__IsRestriction_29508216(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x9
  __int64 v5; // x10
  __int64 v6; // x8
  struct System_Int32_array *v7; // x9
  __int64 v8; // x10
  __int64 v9; // x8
  __int64 v11; // x0

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals_29507872(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_29507872(this, vList, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v5 = *(_QWORD *)&targetVals->max_length;
      if ( !v5 )
        return v3;
      v6 = *(_QWORD *)&vList->max_length;
      if ( !v6 )
        goto LABEL_19;
      if ( !(_DWORD)v6 || !(_DWORD)v5 )
        goto LABEL_21;
      v3 = vList->m_Items[1] < targetVals->m_Items[1];
      break;
    case 4:
      v7 = this->fields.targetVals;
      if ( !v7 )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v8 = *(_QWORD *)&v7->max_length;
      if ( !v8 )
        return v3;
      v9 = *(_QWORD *)&vList->max_length;
      if ( v9 )
      {
        if ( !(_DWORD)v9 || !(_DWORD)v8 )
        {
LABEL_21:
          v11 = sub_B5D6C8(this);
          sub_B5D668(v11, 0LL);
        }
        v3 = vList->m_Items[1] > v7->m_Items[1];
      }
      else
      {
LABEL_19:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


bool __fastcall RestrictionEntity__IsSearchVals(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10
  __int64 v8; // x0

  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  max_length = targetVals->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  v6 = &targetVals->m_Items[1];
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
    }
    if ( v6[v5] == v )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall RestrictionEntity__IsSearchVals_29507872(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *targetVals; // x8
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x9
  signed int max_length; // w13
  __int64 v9; // x15
  __int64 v10; // x0

  result = 0;
  if ( vList )
  {
    targetVals = this->fields.targetVals;
    if ( targetVals )
    {
      if ( (int)*(_QWORD *)&targetVals->max_length < 1 )
      {
        return 0;
      }
      else
      {
        v6 = (unsigned int)*(_QWORD *)&targetVals->max_length;
        v7 = 0LL;
        while ( 1 )
        {
          if ( v7 >= v6 )
          {
LABEL_16:
            v10 = sub_B5D6C8(0LL);
            sub_B5D668(v10, 0LL);
          }
          max_length = vList->max_length;
          if ( max_length >= 1 )
            break;
LABEL_11:
          ++v7;
          result = 0;
          if ( (__int64)v7 >= (int)v6 )
            return result;
        }
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            goto LABEL_16;
          if ( targetVals->m_Items[v7 + 1] == vList->m_Items[v9 + 1] )
            return 1;
          if ( (int)++v9 >= max_length )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}


System_Boolean_array *__fastcall RestrictionEntity__getDeckPositionList(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  struct System_Int32_array *targetVals; // x8
  System_Boolean_array *v12; // x19
  int max_length; // w22
  unsigned __int64 v14; // x23
  int v15; // w26
  il2cpp_array_size_t v16; // w25
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x23
  struct System_Int32_array *v19; // x8
  int v20; // w25
  il2cpp_array_size_t v21; // w24
  signed __int64 v22; // x22
  signed __int64 v23; // x20
  signed __int64 v24; // x22
  signed __int64 v25; // x20
  __int64 v27; // x0

  if ( (byte_42EAEFF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&bool___TypeInfo, v5, v6, v7);
    byte_42EAEFF = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (BalanceConfig_c *)sub_B5D5DC(bool___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v12 = (System_Boolean_array *)v9;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return v12;
      if ( !targetVals )
        goto LABEL_75;
      v14 = 0LL;
      while ( v14 < targetVals->max_length )
      {
        v15 = targetVals->m_Items[v14 + 1];
        v16 = v15 - 1;
        if ( v15 >= 1 )
        {
          v9 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v9 = BalanceConfig_TypeInfo;
          }
          if ( v15 <= v9->static_fields->DeckMemberMax )
          {
            if ( !v12 )
              goto LABEL_75;
            if ( v16 >= v12->max_length )
              goto LABEL_76;
            v12->m_Items[v16 + 4] = 1;
          }
        }
        if ( (__int64)++v14 >= max_length )
          return v12;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_75;
      }
      goto LABEL_76;
    case 2:
      v17 = 0LL;
      while ( 2 )
      {
        v9 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v9 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v17 < v9->static_fields->DeckMemberMax )
        {
          if ( v12 )
          {
            if ( v17 < v12->max_length )
            {
              v12->m_Items[v17++ + 4] = 1;
              continue;
            }
LABEL_76:
            v27 = sub_B5D6C8(v9);
            sub_B5D668(v27, 0LL);
          }
LABEL_75:
          sub_B5D69C(v9, v10);
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v19 = this->fields.targetVals;
          if ( !v19 )
            goto LABEL_75;
          if ( v18 >= v19->max_length )
            goto LABEL_76;
          v20 = v19->m_Items[v18 + 1];
          v21 = v20 - 1;
          if ( v20 >= 1 )
          {
            v9 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v9 = BalanceConfig_TypeInfo;
            }
            if ( v20 <= v9->static_fields->DeckMemberMax )
            {
              if ( !v12 )
                goto LABEL_75;
              if ( v21 >= v12->max_length )
                goto LABEL_76;
              v12->m_Items[v21 + 4] = 0;
            }
          }
          if ( (__int64)++v18 >= max_length )
            return v12;
        }
      }
      return v12;
    case 3:
      if ( max_length < 1 )
        return v12;
      if ( !targetVals )
        goto LABEL_75;
      if ( !targetVals->max_length )
        goto LABEL_76;
      v22 = targetVals->m_Items[1];
      v23 = 0LL;
      while ( 2 )
      {
        v9 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v9 = BalanceConfig_TypeInfo;
        }
        if ( v23 >= v9->static_fields->DeckMemberMax )
          return v12;
        if ( v23 < v22 )
          goto LABEL_55;
        if ( !v12 )
          goto LABEL_75;
        if ( v23 < (unsigned __int64)v12->max_length )
        {
          v12->m_Items[v23 + 4] = 1;
LABEL_55:
          ++v23;
          continue;
        }
        goto LABEL_76;
      }
    case 4:
      if ( max_length < 1 )
        return v12;
      if ( !targetVals )
        goto LABEL_75;
      if ( !targetVals->max_length )
        goto LABEL_76;
      v24 = targetVals->m_Items[1];
      v25 = 0LL;
      while ( 2 )
      {
        v9 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v9 = BalanceConfig_TypeInfo;
        }
        if ( v25 >= v9->static_fields->DeckMemberMax )
          return v12;
        if ( v25 >= v24 )
          goto LABEL_69;
        if ( !v12 )
          goto LABEL_75;
        if ( v25 < (unsigned __int64)v12->max_length )
        {
          v12->m_Items[v25 + 4] = 1;
LABEL_69:
          ++v25;
          continue;
        }
        goto LABEL_76;
      }
    default:
      return v12;
  }
}


System_String_o *__fastcall RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RestrictionEntity_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 *v35; // x8
  struct System_Int32_array *targetVals; // x8
  __int64 v37; // x9
  int v38; // w21
  System_String_o *v39; // x0
  System_String_o *v41; // x0
  System_String_o *name; // x19
  System_String_o *v43; // x20
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x0
  __int64 v46; // x0
  int v47; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42EAEFE & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6465/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6466/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6467/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6469/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6463/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_6470/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v29, v30, v31);
    this = (RestrictionEntity_o *)sub_B5D5C4(&StringLiteral_6464/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/, v32, v33, v34);
    byte_42EAEFE = 1;
  }
  switch ( v4->fields.type )
  {
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6467/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_40;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6469/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_40;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6464/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_40;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_40;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6463/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_40;
    case 0xA:
      targetVals = v4->fields.targetVals;
      if ( targetVals && (v37 = *(_QWORD *)&targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)v37 )
        {
          v46 = sub_B5D6C8(this);
          sub_B5D668(v46, 0LL);
        }
        v38 = targetVals->m_Items[1];
      }
      else
      {
        v38 = 0;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_6466/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
      name = v4->fields.name;
      v43 = v41;
      v47 = v38;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      v45 = (Il2CppObject *)System_String__Format(name, v44, 0LL);
      return System_String__Format(v43, v45, 0LL);
    case 0xB:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6465/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_40;
    case 0xF:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6470/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_40;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_40:
      v39 = LocalizationManager__Get((System_String_o *)*v35, 0LL);
      return System_String__Format(v39, (Il2CppObject *)v4->fields.name, 0LL);
  }
}


int32_t __fastcall RestrictionEntity__getTotalCost(RestrictionEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  if ( this->fields.type != 3 )
    return 0;
  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  v3 = *(_QWORD *)&targetVals->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return targetVals->m_Items[1];
}


void __fastcall RestrictionEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F58 & 1) == 0 )
  {
    sub_B5D5C4(&RestrictionEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7F58 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(RestrictionEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestrictionEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall RestrictionEntity___c___ctor(RestrictionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__16_0(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  return t;
}


System_String_o *__fastcall RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__16_1(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x19
  System_String_o *v8; // x20
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7F59 & 1) == 0 )
  {
    sub_B5D5C4(&Restriction_TargetType_TypeInfo, t, (_DWORD)method, v3);
    byte_42E7F59 = 1;
  }
  v10 = t;
  v5 = j_il2cpp_value_box_0(Restriction_TargetType_TypeInfo, &v10);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  v7 = v5;
  v8 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                            v5,
                            *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  j_il2cpp_object_unbox_0(v7);
  return v8;
}