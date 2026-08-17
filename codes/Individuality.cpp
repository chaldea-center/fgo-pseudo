void Individuality___cctor(const MethodInfo *method)
{
  if ( (byte_596F6B5 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B5 = 1;
  }
  Individuality_TypeInfo->static_fields->Servant = 1000;
}


bool Individuality__CheckIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  bool v3; // w8
  il2cpp_array_size_t max_length; // x9
  __int64 v5; // x10
  int v6; // w13
  int32_t *m_Items; // x14
  int v8; // t1

  v3 = 1;
  if ( target )
  {
    if ( self )
    {
      max_length = target->max_length;
      if ( max_length )
      {
        if ( (int)self->max_length < 1 )
        {
          return 0;
        }
        else
        {
          v5 = 0;
          while ( (int)max_length < 1 )
          {
LABEL_10:
            ++v5;
            v3 = 0;
            if ( v5 == (unsigned int)self->max_length )
              return v3;
          }
          v6 = target->max_length;
          m_Items = target->m_Items;
          while ( 1 )
          {
            v8 = *m_Items++;
            if ( self->m_Items[v5] == v8 )
              return 1;
            if ( !--v6 )
              goto LABEL_10;
          }
        }
      }
    }
  }
  return v3;
}


bool Individuality__CheckIndividualities_47398108(
        System_Int32_array *self,
        System_Int64_array *target,
        const MethodInfo *method)
{
  bool v3; // w8
  il2cpp_array_size_t max_length; // x9
  __int64 v5; // x10
  int v6; // w13
  int64_t *m_Items; // x14
  __int64 v8; // t1

  v3 = 1;
  if ( target )
  {
    if ( self )
    {
      max_length = target->max_length;
      if ( max_length )
      {
        if ( (int)self->max_length < 1 )
        {
          return 0;
        }
        else
        {
          v5 = 0;
          while ( (int)max_length < 1 )
          {
LABEL_10:
            ++v5;
            v3 = 0;
            if ( v5 == (unsigned int)self->max_length )
              return v3;
          }
          v6 = target->max_length;
          m_Items = target->m_Items;
          while ( 1 )
          {
            v8 = *m_Items++;
            if ( v8 == self->m_Items[v5] )
              return 1;
            if ( !--v6 )
              goto LABEL_10;
          }
        }
      }
    }
  }
  return v3;
}


bool Individuality__CheckSignedIndividualities(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool result; // w0
  _BOOL8 IsPartialMatchArray; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Int32_array *v10; // x20
  char v11; // w22
  System_Int32_array *v12; // x20
  bool v13; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596F6A3 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6A3 = 1;
  }
  result = 1;
  unsignedArray = 0;
  signedArray = 0;
  if ( signedTarget && self && signedTarget->max_length )
  {
    if ( self->max_length )
    {
      if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, signedTarget, method);
      Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &signedArray, v3);
      v10 = unsignedArray;
      if ( !unsignedArray )
        goto LABEL_24;
      if ( unsignedArray->max_length )
      {
        if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v8, v9);
        IsPartialMatchArray = Individuality__IsPartialMatchArray(self, v10, v9);
        v11 = IsPartialMatchArray;
      }
      else
      {
        v11 = 1;
      }
      v12 = signedArray;
      if ( !signedArray )
LABEL_24:
        sub_2213CDC(IsPartialMatchArray, v8);
      if ( signedArray->max_length )
      {
        if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v8, v9);
        v13 = !Individuality__IsPartialMatchArray(self, v12, v9);
      }
      else
      {
        v13 = 1;
      }
      return v13 & v11;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


bool Individuality__CheckSignedIndividualitiesAllowEmptySelf(
        System_Int32_array *selfArray,
        System_Int32_array *signedTargetArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  bool IsNullOrEmpty; // w8
  bool result; // w0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  bool IsMatchArray; // w22
  System_Int32_array *v13; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  bool v16; // w8
  System_Int32_array *v17; // x20
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596F6B1 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B1 = 1;
  }
  unsignedArray = 0;
  signedArray = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetArray, 0);
  result = 1;
  if ( selfArray && !IsNullOrEmpty )
  {
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v5, v6);
    Individuality__DivideUnsignedAndSignedArray(signedTargetArray, &unsignedArray, &signedArray, v7);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unsignedArray, 0) )
    {
      IsMatchArray = 1;
    }
    else
    {
      v13 = unsignedArray;
      if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v10, v11);
      IsMatchArray = Individuality__IsMatchArray(selfArray, v13, v11);
    }
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedArray, 0) )
    {
      v16 = 1;
    }
    else
    {
      v17 = signedArray;
      if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v14, v15);
      v16 = !Individuality__IsPartialMatchArray(selfArray, v17, v15);
    }
    return v16 && IsMatchArray;
  }
  return result;
}


bool Individuality__CheckSignedIndividualitiesCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        System_Func_int____int____int__int__bool__o *matchedFunc,
        System_Func_int____int____int__int__bool__o *mismatchFunc,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  bool result; // w0
  bool v15; // w8
  __int64 v16; // x0
  __int64 v17; // x1
  char v18; // w23
  bool v19; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F6AC & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6AC = 1;
  }
  unsignedArray = 0;
  signedArray = 0;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets, matchedFunc);
  result = 1;
  v15 = countAbove < 1 && countBelow < 1;
  if ( targets && !v15 && selfs && targets->max_length )
  {
    if ( !selfs->max_length )
      return 0;
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets, matchedFunc);
    Individuality__DivideUnsignedAndSignedArray(targets, &unsignedArray, &signedArray, (const MethodInfo *)mismatchFunc);
    if ( unsignedArray )
    {
      if ( unsignedArray->max_length )
      {
        if ( !matchedFunc )
          goto LABEL_31;
        v16 = ((__int64 (__fastcall *)(intptr_t, System_Int32_array *))matchedFunc->fields.invoke_impl)(
                matchedFunc->fields.method_code,
                selfs);
        v18 = v16 & 1;
      }
      else
      {
        v18 = 1;
      }
      if ( signedArray )
      {
        if ( !signedArray->max_length )
        {
          v19 = 1;
          return v19 & v18;
        }
        if ( mismatchFunc )
        {
          v19 = (((__int64 (__fastcall *)(intptr_t, System_Int32_array *))mismatchFunc->fields.invoke_impl)(
                   mismatchFunc->fields.method_code,
                   selfs)
               & 1) == 0;
          return v19 & v18;
        }
      }
    }
LABEL_31:
    sub_2213CDC(v16, v17);
  }
  return result;
}


bool Individuality__CheckSignedIndividualitiesPartialCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        System_Func_int____int____int__int__bool__o *matchedFunc,
        System_Func_int____int____int__int__bool__o *mismatchFunc,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  bool result; // w0
  bool v15; // w8
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  System_Int32_array *signedArray; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F6AD & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6AD = 1;
  }
  unsignedArray = 0;
  signedArray = 0;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets, matchedFunc);
  result = 1;
  v15 = countAbove < 1 && countBelow < 1;
  if ( targets && !v15 && selfs && targets->max_length )
  {
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets, matchedFunc);
    Individuality__DivideUnsignedAndSignedArray(targets, &unsignedArray, &signedArray, (const MethodInfo *)mismatchFunc);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unsignedArray, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !matchedFunc )
        goto LABEL_26;
      if ( (((__int64 (__fastcall *)(intptr_t, System_Int32_array *, System_Int32_array *, _QWORD, _QWORD, intptr_t))matchedFunc->fields.invoke_impl)(
              matchedFunc->fields.method_code,
              selfs,
              unsignedArray,
              (unsigned int)countAbove,
              (unsigned int)countBelow,
              matchedFunc->fields.method)
          & 1) != 0 )
        return 1;
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedArray, 0);
    if ( IsNullOrEmpty )
      return 0;
    if ( mismatchFunc )
      return (((__int64 (__fastcall *)(intptr_t, System_Int32_array *, System_Int32_array *, _QWORD, _QWORD, intptr_t))mismatchFunc->fields.invoke_impl)(
                mismatchFunc->fields.method_code,
                selfs,
                signedArray,
                (unsigned int)countAbove,
                (unsigned int)countBelow,
                mismatchFunc->fields.method)
            & 1) == 0;
LABEL_26:
    sub_2213CDC(IsNullOrEmpty, v17);
  }
  return result;
}


bool Individuality__CheckSignedIndividualitiesPartialMatch(
        System_Int32_array *selfs,
        System_Int32_array *signedTargets,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        bool isSkipPreCheckSelfsEmpty,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  char v14; // w8
  __int64 v15; // x0
  __int64 v16; // x1
  System_Int32_array *v18; // [xsp+0h] [xbp-50h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596F6AE & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6AE = 1;
  }
  v18 = 0;
  unsignedArray = 0;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, signedTargets, matchedFunc);
  v14 = (selfs == 0) | BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargets, 0);
  if ( (v14 & 1) != 0 || isSkipPreCheckSelfsEmpty )
  {
    if ( (v14 & 1) != 0 )
      return 1;
  }
  else if ( !selfs->max_length )
  {
    return 0;
  }
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11, v12);
  Individuality__DivideUnsignedAndSignedArray(signedTargets, &unsignedArray, &v18, v13);
  if ( unsignedArray && unsignedArray->max_length )
  {
    if ( !matchedFunc )
      goto LABEL_23;
    v15 = ((__int64 (__fastcall *)(intptr_t, System_Int32_array *))matchedFunc->fields.invoke_impl)(
            matchedFunc->fields.method_code,
            selfs);
    if ( (v15 & 1) != 0 )
      return 1;
  }
  if ( !v18 || !v18->max_length )
    return 0;
  if ( !mismatchFunc )
LABEL_23:
    sub_2213CDC(v15, v16);
  return (((__int64 (__fastcall *)(intptr_t, System_Int32_array *))mismatchFunc->fields.invoke_impl)(
            mismatchFunc->fields.method_code,
            selfs)
        & 1) == 0;
}


bool Individuality__CheckSignedIndividualities_47397700(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        const MethodInfo *method)
{
  bool result; // w0
  __int64 v10; // x0
  __int64 v11; // x1
  char v12; // w21
  bool v13; // w8
  System_Int32_array *v14; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F6A4 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6A4 = 1;
  }
  result = 1;
  v14 = 0;
  unsignedArray = 0;
  if ( signedTarget && self && signedTarget->max_length )
  {
    if ( !self->max_length )
      return 0;
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, signedTarget, matchedFunc);
    Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &v14, (const MethodInfo *)mismatchFunc);
    if ( unsignedArray )
    {
      if ( unsignedArray->max_length )
      {
        if ( !matchedFunc )
          goto LABEL_22;
        v10 = ((__int64 (__fastcall *)(intptr_t, System_Int32_array *))matchedFunc->fields.invoke_impl)(
                matchedFunc->fields.method_code,
                self);
        v12 = v10 & 1;
      }
      else
      {
        v12 = 1;
      }
      if ( v14 )
      {
        if ( !v14->max_length )
        {
          v13 = 1;
          return v13 & v12;
        }
        if ( mismatchFunc )
        {
          v13 = (((__int64 (__fastcall *)(intptr_t, System_Int32_array *))mismatchFunc->fields.invoke_impl)(
                   mismatchFunc->fields.method_code,
                   self)
               & 1) == 0;
          return v13 & v12;
        }
      }
    }
LABEL_22:
    sub_2213CDC(v10, v11);
  }
  return result;
}


bool Individuality__CheckSignedMultiIndividuality(
        System_Int32_array *selfArray,
        System_Int32_array_array *signedTargetsArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_object__bool__o *v15; // x20

  if ( (byte_596F6AF & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int______91710936);
    sub_2213A60(&System_Func_int____bool__TypeInfo);
    sub_2213A60(&Method_Individuality___c__DisplayClass19_0__CheckSignedMultiIndividuality_b__0__);
    sub_2213A60(&Individuality___c__DisplayClass19_0_TypeInfo);
    byte_596F6AF = 1;
  }
  v5 = sub_2213CCC(Individuality___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = selfArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)selfArray, v8, v9, v10, v11, v12, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0) )
    return 1;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_Individuality___c__DisplayClass19_0__CheckSignedMultiIndividuality_b__0__,
    0);
  return BasicHelper__Any_object__58785420(
           (System_Object_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_int______91710936);
}


bool Individuality__CheckSignedMultiIndividualityAllowEmptySelf(
        System_Int32_array *selfArray,
        System_Int32_array_array *signedTargetsArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_object__bool__o *v15; // x20

  if ( (byte_596F6B0 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int______91710936);
    sub_2213A60(&System_Func_int____bool__TypeInfo);
    sub_2213A60(&Method_Individuality___c__DisplayClass20_0__CheckSignedMultiIndividualityAllowEmptySelf_b__0__);
    sub_2213A60(&Individuality___c__DisplayClass20_0_TypeInfo);
    byte_596F6B0 = 1;
  }
  v5 = sub_2213CCC(Individuality___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = selfArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)selfArray, v8, v9, v10, v11, v12, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0) )
    return 1;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_Individuality___c__DisplayClass20_0__CheckSignedMultiIndividualityAllowEmptySelf_b__0__,
    0);
  return BasicHelper__Any_object__58785420(
           (System_Object_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_int______91710936);
}


bool Individuality__ContainsAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x8
  char v15; // w21
  int v16; // w9
  int v17; // w8
  System_Func_int__bool__o *v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596F6A7 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_Individuality___c__DisplayClass7_0__ContainsAllIndividualities_b__0__);
    sub_2213A60(&Individuality___c__DisplayClass7_0_TypeInfo);
    byte_596F6A7 = 1;
  }
  v5 = sub_2213CCC(Individuality___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
LABEL_14:
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = target;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)target, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( !v14 )
    return 1;
  v15 = 1;
  if ( self && *(_QWORD *)(v14 + 24) )
  {
    if ( self->max_length )
    {
      v16 = 0;
      *(_DWORD *)(v5 + 24) = 0;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v14 + 24);
        v15 = v16 >= v17;
        if ( v16 >= v17 )
          break;
        v18 = *(System_Func_int__bool__o **)(v5 + 32);
        if ( !v18 )
        {
          v18 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v18,
            (Il2CppObject *)v5,
            Method_Individuality___c__DisplayClass7_0__ContainsAllIndividualities_b__0__,
            0);
          *(_QWORD *)(v5 + 32) = v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v18, v19, v20, v21, v22, v23, v24);
        }
        v6 = BasicHelper__Any_int__58784608(
               self,
               (System_Func_T__bool__o *)v18,
               (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
        if ( !v6 )
          break;
        v14 = *(_QWORD *)(v5 + 16);
        v16 = *(_DWORD *)(v5 + 24) + 1;
        *(_DWORD *)(v5 + 24) = v16;
        if ( !v14 )
          goto LABEL_14;
      }
    }
    else
    {
      return 0;
    }
  }
  return v15;
}


bool Individuality__ContainsIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  bool result; // w0
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v7; // x9
  unsigned __int64 v8; // x24
  int v9; // w23
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_int__bool__c *v13; // x0
  System_Func_int__bool__o *v14; // x22

  if ( (byte_596F6A6 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__);
    sub_2213A60(&Individuality___c__DisplayClass6_0_TypeInfo);
    byte_596F6A6 = 1;
  }
  result = 1;
  if ( target )
  {
    if ( self )
    {
      max_length = target->max_length;
      if ( max_length )
      {
        v7 = self->max_length;
        if ( v7 )
        {
          if ( (int)v7 < 1 )
          {
            v9 = 0;
          }
          else
          {
            v8 = 0;
            v9 = 0;
            do
            {
              v10 = sub_2213CCC(Individuality___c__DisplayClass6_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v10, 0);
              if ( v8 >= LODWORD(self->max_length) )
                sub_2213CE4(v11);
              if ( !v10 )
                sub_2213CDC(v11, v12);
              v13 = System_Func_int__bool__TypeInfo;
              *(_DWORD *)(v10 + 16) = self->m_Items[v8];
              v14 = (System_Func_int__bool__o *)sub_2213CCC(v13);
              System_Func_int__bool____ctor(
                v14,
                (Il2CppObject *)v10,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                0);
              ++v8;
              v9 += BasicHelper__Any_int__58784608(
                      target,
                      (System_Func_T__bool__o *)v14,
                      (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
            }
            while ( (__int64)v8 < SLODWORD(self->max_length) );
            max_length = target->max_length;
          }
          return v9 >= (int)max_length;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}


void Individuality__DivideUnsignedAndSignedArray(
        System_Int32_array *baseArray,
        System_Int32_array **unsignedArray,
        System_Int32_array **signedArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x23
  System_Collections_Generic_List_int__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x24
  struct System_Int32_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  char *v16; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  __int64 v20; // x8
  System_Collections_Generic_List_int__o *v21; // x0
  System_Int32_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Int32_array *v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596F6A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596F6A5 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseArray )
    goto LABEL_24;
  max_length = baseArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_2213CE4(v9);
      v10 = (unsigned int)baseArray->m_Items[v12];
      if ( (int)v10 < 1 )
      {
        if ( !v8 )
          goto LABEL_24;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v8->fields._size;
        v10 = (unsigned int)-(int)v10;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v20 = v18[4];
          v21 = v8;
          goto LABEL_19;
        }
        v16 = (char *)items + 4 * size;
        v8->fields._size = size + 1;
      }
      else
      {
        if ( !v7 )
          goto LABEL_24;
        v13 = v7->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v13 )
          goto LABEL_24;
        v15 = v7->fields._size;
        if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
        {
          v20 = v14[4];
          v21 = v7;
LABEL_19:
          System_Collections_Generic_List_int___AddWithResize(
            v21,
            v10,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v20 + 192) + 112LL));
          goto LABEL_20;
        }
        v16 = (char *)v13 + 4 * v15;
        v7->fields._size = v15 + 1;
      }
      *((_DWORD *)v16 + 8) = v10;
LABEL_20:
      LODWORD(max_length) = baseArray->max_length;
    }
    while ( (__int64)++v12 < (int)max_length );
  }
  if ( !v7
    || (v22 = System_Collections_Generic_List_int___ToArray(
                v7,
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v22,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)unsignedArray, (int32_t)v22, v23, v24, v25, v26, v27, v28),
        !v8) )
  {
LABEL_24:
    sub_2213CDC(v9, v10);
  }
  v29 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)signedArray, (int32_t)v29, v30, v31, v32, v33, v34, v35);
}


System_Int32_array *Individuality__GetMatchedCountArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x21
  il2cpp_array_size_t v6; // x11
  __int64 v7; // x10
  __int64 v8; // x8
  __int64 v9; // x11
  __int64 max_length_low; // x15
  unsigned __int64 v11; // x16
  int32_t v12; // w14

  v4 = selfs;
  if ( (byte_596F6A9 & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_2213A60(&int___TypeInfo);
    byte_596F6A9 = 1;
  }
  if ( !targets
    || (max_length = targets->max_length,
        selfs = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)max_length),
        !v4) )
  {
LABEL_19:
    sub_2213CDC(selfs, targets);
  }
  v6 = v4->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = (unsigned int)v6 & ~((int)v6 >> 31);
    v8 = 0;
    v9 = (unsigned int)v4->max_length;
    while ( 1 )
    {
      if ( v8 == v9 )
        goto LABEL_18;
      if ( (int)max_length >= 1 )
        break;
LABEL_16:
      if ( ++v8 == v7 )
        return selfs;
    }
    max_length_low = LODWORD(targets->max_length);
    v11 = 0;
    v12 = v4->m_Items[v8];
    while ( max_length_low != v11 )
    {
      if ( v12 == targets->m_Items[v11] )
      {
        if ( !selfs )
          goto LABEL_19;
        if ( v11 >= LODWORD(selfs->max_length) )
          break;
        ++selfs->m_Items[v11];
      }
      if ( (unsigned int)max_length == ++v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_2213CE4(selfs);
  }
  return selfs;
}


int32_t Individuality__GetMatchedTotalCount(
        System_Int32_array *selfIndividualityArray,
        System_Int32_array *targetIndividualityArray,
        const MethodInfo *method)
{
  System_Int32_array *MatchedCountArray; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x10
  System_Int32_array *v8; // x8
  __int64 v9; // x9
  __int64 v10; // x0
  int32_t *m_Items; // x8
  int v12; // t1

  if ( (byte_596F6B2 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B2 = 1;
  }
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targetIndividualityArray, method);
  MatchedCountArray = Individuality__GetMatchedCountArray(selfIndividualityArray, targetIndividualityArray, method);
  if ( !MatchedCountArray )
    sub_2213CDC(0, v6);
  max_length = MatchedCountArray->max_length;
  v8 = MatchedCountArray;
  if ( (int)max_length < 1 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v9 = (unsigned int)max_length & ~((int)max_length >> 31);
    v10 = 0;
    max_length = (unsigned int)max_length;
    m_Items = v8->m_Items;
    do
    {
      if ( !max_length )
        sub_2213CE4(v10);
      v12 = *m_Items++;
      --v9;
      --max_length;
      v10 = (unsigned int)(v12 + v10);
    }
    while ( v9 );
  }
  return v10;
}


int32_t Individuality__GetMatchedTotalCountMultiIndividuality(
        System_Int32_array *selfIndividualityArray,
        System_Int32_array_array *targetMultiIndividualityArray,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  int32_t v6; // w21
  unsigned __int64 v7; // x23
  System_Int32_array *v8; // x22

  v4 = selfIndividualityArray;
  if ( (byte_596F6B3 & 1) == 0 )
  {
    selfIndividualityArray = (System_Int32_array *)sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B3 = 1;
  }
  if ( !targetMultiIndividualityArray )
    sub_2213CDC(selfIndividualityArray, targetMultiIndividualityArray);
  max_length = targetMultiIndividualityArray->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v7 >= (unsigned int)max_length )
      sub_2213CE4(selfIndividualityArray);
    v8 = targetMultiIndividualityArray->m_Items[v7];
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targetMultiIndividualityArray, method);
    selfIndividualityArray = (System_Int32_array *)Individuality__IsMatchArray(v4, v8, method);
    LODWORD(max_length) = targetMultiIndividualityArray->max_length;
    ++v7;
    v6 += (unsigned __int8)selfIndividualityArray & 1;
  }
  while ( (__int64)v7 < (int)max_length );
  return v6;
}


bool Individuality__IsMatchAboveBelow(int32_t count, int32_t above, int32_t below, const MethodInfo *method)
{
  bool result; // w0
  bool v5; // cc
  int v6; // w8
  bool v7; // cc

  if ( above >= 1 && below >= 1 )
    return count >= above && count <= below;
  v5 = below >= 1 && count <= below;
  v6 = !v5;
  v5 = count < above;
  result = 1;
  v7 = v5 || above <= 0;
  if ( v7 && v6 )
    return 0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool Individuality__IsMatchAboveBelowEqual(
        int32_t count,
        int32_t above,
        int32_t below,
        int32_t equal,
        const MethodInfo *method)
{
  bool v9; // w8
  _BOOL4 v11; // w9
  bool v12; // cc

  if ( (byte_596F6B4 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B4 = 1;
  }
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, *(_QWORD *)&above, *(_QWORD *)&below);
  if ( above >= 1 && below >= 1 )
  {
    if ( count >= above && count <= below )
    {
      v9 = 1;
      return count == equal || v9;
    }
    goto LABEL_22;
  }
  v9 = 1;
  v11 = below < 1 || count > below;
  v12 = count < above || above <= 0;
  if ( v12 && v11 )
LABEL_22:
    v9 = 0;
  return count == equal || v9;
}


bool Individuality__IsMatchArray(System_Int32_array *selfs, System_Int32_array *targets, const MethodInfo *method)
{
  bool v5; // w0
  unsigned __int64 v6; // x23
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Func_int__bool__c *v10; // x0
  System_Func_int__bool__o *v11; // x22

  if ( (byte_596F6A8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__);
    sub_2213A60(&Individuality___c__DisplayClass9_0_TypeInfo);
    byte_596F6A8 = 1;
  }
  v5 = 0;
  if ( selfs && targets )
  {
    if ( SLODWORD(targets->max_length) < 1 )
    {
      return 1;
    }
    else
    {
      v6 = 0;
      do
      {
        v7 = sub_2213CCC(Individuality___c__DisplayClass9_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v7, 0);
        if ( v6 >= LODWORD(targets->max_length) )
          sub_2213CE4(v8);
        if ( !v7 )
          sub_2213CDC(v8, v9);
        v10 = System_Func_int__bool__TypeInfo;
        *(_DWORD *)(v7 + 16) = targets->m_Items[v6];
        v11 = (System_Func_int__bool__o *)sub_2213CCC(v10);
        System_Func_int__bool____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          0);
        v5 = BasicHelper__Any_int__58784608(
               selfs,
               (System_Func_T__bool__o *)v11,
               (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
        if ( !v5 )
          break;
        ++v6;
      }
      while ( (__int64)v6 < SLODWORD(targets->max_length) );
    }
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool Individuality__IsMatchArrayCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  _QWORD *MatchedCountArray; // x0
  bool v11; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  _QWORD *v15; // x21
  bool v17; // w22
  unsigned __int64 i; // x24
  int32_t v19; // w26
  bool v21; // w8
  bool v22; // cc

  if ( (byte_596F6AB & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6AB = 1;
  }
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets, *(_QWORD *)&countAbove);
  LOBYTE(MatchedCountArray) = 1;
  v11 = countAbove < 1 && countBelow < 1;
  if ( targets && !v11 && selfs && targets->max_length )
  {
    if ( selfs->max_length )
    {
      if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets, *(_QWORD *)&countAbove);
      MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, *(const MethodInfo **)&countAbove);
      if ( !MatchedCountArray )
        sub_2213CDC(0, v12);
      v14 = MatchedCountArray[3];
      v15 = MatchedCountArray;
      v17 = countAbove < 1 || countBelow < 1;
      if ( (int)v14 >= 1 )
      {
        for ( i = 0; (__int64)i < (int)v14; ++i )
        {
          if ( i >= (unsigned int)v14 )
            sub_2213CE4(MatchedCountArray);
          MatchedCountArray = &Individuality_TypeInfo->_1.image;
          v19 = *((_DWORD *)v15 + i + 8);
          if ( *(&Individuality_TypeInfo->_2.cctor_finished + 1) )
          {
            if ( !v17 )
              goto LABEL_44;
          }
          else
          {
            j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v12, v13);
            if ( !v17 )
            {
LABEL_44:
              MatchedCountArray = 0;
              if ( v19 < countAbove || v19 > countBelow )
                return (char)MatchedCountArray;
              goto LABEL_46;
            }
          }
          v21 = countBelow < 1 || v19 > countBelow;
          v22 = v19 < countAbove || countAbove <= 0;
          if ( v22 && v21 )
            goto LABEL_48;
LABEL_46:
          LODWORD(v14) = *((_DWORD *)v15 + 6);
        }
      }
      LOBYTE(MatchedCountArray) = 1;
    }
    else
    {
LABEL_48:
      LOBYTE(MatchedCountArray) = 0;
    }
  }
  return (char)MatchedCountArray;
}


bool Individuality__IsPartialMatchArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  bool v3; // w8
  __int64 v4; // x9
  int max_length; // w13
  int32_t *m_Items; // x14
  int v7; // t1

  v3 = 0;
  if ( selfs && targets )
  {
    if ( (int)selfs->max_length < 1 )
    {
      return 0;
    }
    else
    {
      v4 = 0;
      while ( SLODWORD(targets->max_length) < 1 )
      {
LABEL_9:
        ++v4;
        v3 = 0;
        if ( v4 == (unsigned int)selfs->max_length )
          return v3;
      }
      max_length = targets->max_length;
      m_Items = targets->m_Items;
      while ( 1 )
      {
        v7 = *m_Items++;
        if ( selfs->m_Items[v4] == v7 )
          return 1;
        if ( !--max_length )
          goto LABEL_9;
      }
    }
  }
  return v3;
}


bool Individuality__IsPartialMatchArrayCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  bool result; // w0
  bool v15; // w8
  System_Int32_array *MatchedCountArray; // x19
  System_Func_int__bool__o *v17; // x20

  if ( (byte_596F6AA & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__);
    sub_2213A60(&Individuality___c__DisplayClass13_0_TypeInfo);
    byte_596F6AA = 1;
  }
  v9 = sub_2213CCC(Individuality___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_DWORD *)(v9 + 16) = countAbove;
  *(_DWORD *)(v9 + 20) = countBelow;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11, v12);
  result = 1;
  v15 = countAbove < 1 && countBelow < 1;
  if ( targets && !v15 && selfs && targets->max_length )
  {
    if ( selfs->max_length )
    {
      if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11, v12);
      MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v12);
      v17 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)v9,
        Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
        0);
      return BasicHelper__Any_int__58784608(
               MatchedCountArray,
               (System_Func_T__bool__o *)v17,
               (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


bool Individuality__IsPreIndividualitiesCheck(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        bool *result,
        bool isSkipPreCheckSelfsEmpty,
        const MethodInfo *method)
{
  char v8; // w8

  *result = 1;
  v8 = (selfs == 0) | BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targets, 0);
  if ( (v8 & 1) == 0 && !isSkipPreCheckSelfsEmpty )
  {
    if ( selfs->max_length )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      *result = 0;
    }
  }
  return v8 & 1;
}


bool Individuality__IsPreIndividualitiesCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        bool *ret,
        bool isSkipPreCheckSelfEmpty,
        const MethodInfo *method)
{
  bool result; // w0
  bool v9; // cc
  char v10; // w9

  result = 1;
  v9 = countAbove < 1 && countBelow < 1;
  *ret = 1;
  v10 = v9;
  if ( targets )
  {
    if ( (v10 & 1) == 0 )
    {
      if ( selfs )
      {
        if ( targets->max_length )
        {
          result = 0;
          if ( !selfs->max_length && !isSkipPreCheckSelfEmpty )
          {
            result = 1;
            *ret = 0;
          }
        }
      }
    }
  }
  return result;
}


bool Individuality__IsServantClassIndividuality(int32_t v, const MethodInfo *method)
{
  return (unsigned int)(v - 100) < 0x64;
}


void Individuality___c__DisplayClass13_0___ctor(Individuality___c__DisplayClass13_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool Individuality___c__DisplayClass13_0___IsPartialMatchArrayCount_b__0(
        Individuality___c__DisplayClass13_0_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t countBelow; // w20
  int32_t countAbove; // w21
  bool result; // w0
  _BOOL4 v9; // w8
  bool v10; // cc

  if ( (byte_596F6B6 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B6 = 1;
  }
  countAbove = this->fields.countAbove;
  countBelow = this->fields.countBelow;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, *(_QWORD *)&count, method);
  if ( countAbove >= 1 && countBelow >= 1 )
    return countAbove <= count && countBelow >= count;
  result = 1;
  v9 = countBelow < 1 || countBelow < count;
  v10 = countAbove > count || countAbove <= 0;
  if ( v10 && v9 )
    return 0;
  return result;
}


void Individuality___c__DisplayClass19_0___ctor(Individuality___c__DisplayClass19_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass19_0___CheckSignedMultiIndividuality_b__0(
        Individuality___c__DisplayClass19_0_o *this,
        System_Int32_array *signedTargets,
        const MethodInfo *method)
{
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v6; // x21
  System_Func_T1__T2__TResult__o *v7; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x4

  if ( (byte_596F6B7 & 1) == 0 )
  {
    sub_2213A60(&System_Func_int____int____bool__TypeInfo);
    sub_2213A60(&Method_Individuality_IsMatchArray__);
    sub_2213A60(&Method_Individuality_IsPartialMatchArray__);
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B7 = 1;
  }
  selfArray = this->fields.selfArray;
  v6 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v6, 0, Method_Individuality_IsMatchArray__, 0);
  v7 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v7, 0, Method_Individuality_IsPartialMatchArray__, 0);
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v8, v9);
  return Individuality__CheckSignedIndividualities_47397700(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v6,
           (System_Func_int____int____bool__o *)v7,
           v10);
}


void Individuality___c__DisplayClass20_0___ctor(Individuality___c__DisplayClass20_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass20_0___CheckSignedMultiIndividualityAllowEmptySelf_b__0(
        Individuality___c__DisplayClass20_0_o *this,
        System_Int32_array *signedTargets,
        const MethodInfo *method)
{
  System_Int32_array *selfArray; // x20

  if ( (byte_596F6B8 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_596F6B8 = 1;
  }
  selfArray = this->fields.selfArray;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, signedTargets, method);
  return Individuality__CheckSignedIndividualitiesAllowEmptySelf(selfArray, signedTargets, method);
}


void Individuality___c__DisplayClass6_0___ctor(Individuality___c__DisplayClass6_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass6_0___ContainsIndividualities_b__0(
        Individuality___c__DisplayClass6_0_o *this,
        int32_t tg,
        const MethodInfo *method)
{
  return this->fields.type == tg;
}


void Individuality___c__DisplayClass7_0___ctor(Individuality___c__DisplayClass7_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool Individuality___c__DisplayClass7_0___ContainsAllIndividualities_b__0(
        Individuality___c__DisplayClass7_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct System_Int32_array *target; // x8
  __int64 i; // x9

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(this, *(_QWORD *)&sf);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(target->max_length) )
    sub_2213CE4(this);
  return target->m_Items[i] == sf;
}


void Individuality___c__DisplayClass9_0___ctor(Individuality___c__DisplayClass9_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass9_0___IsMatchArray_b__0(
        Individuality___c__DisplayClass9_0_o *this,
        int32_t self,
        const MethodInfo *method)
{
  return this->fields.target == self;
}