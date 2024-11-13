void __fastcall Individuality___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B151E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, v1, v2);
    byte_4B151E0 = 1;
  }
  Individuality_TypeInfo->static_fields->Servant = 1000;
}


bool __fastcall Individuality__CheckAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x8
  __int64 v24; // x9
  bool v25; // w24
  System_Func_int__bool__o **v26; // x21
  System_Func_int__bool__o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x9
  int v35; // w8
  int v36; // w9

  if ( (byte_4B151D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, target, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_Individuality___c__DisplayClass8_0__CheckAllIndividualities_b__0__, v8, v9);
    sub_1BCA7E0(&Individuality___c__DisplayClass8_0_TypeInfo, v10, v11);
    byte_4B151D4 = 1;
  }
  v12 = sub_1BCAA2C(Individuality___c__DisplayClass8_0_TypeInfo, target, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
LABEL_18:
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = target;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)target, v15, v16, v17, v18, v19, v20);
  if ( *(_QWORD *)(v12 + 16) )
  {
    LOBYTE(v23) = 1;
    if ( self )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( v24 )
      {
        v23 = *(_QWORD *)&self->max_length;
        if ( v23 )
        {
          v25 = (int)v24 > 0;
          *(_DWORD *)(v12 + 24) = 0;
          if ( (int)v24 >= 1 )
          {
            v26 = (System_Func_int__bool__o **)(v12 + 32);
            do
            {
              v27 = *v26;
              if ( !*v26 )
              {
                v27 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v14, v21, v22);
                System_Func_int__bool____ctor(
                  v27,
                  (Il2CppObject *)v12,
                  Method_Individuality___c__DisplayClass8_0__CheckAllIndividualities_b__0__,
                  0LL);
                *(_QWORD *)(v12 + 32) = v27;
                sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)v27, v28, v29, v30, v31, v32, v33);
              }
              v13 = BasicHelper__Any_int__49273364(
                      self,
                      (System_Func_T__bool__o *)v27,
                      (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
              if ( !v13 )
                break;
              v34 = *(_QWORD *)(v12 + 16);
              v35 = *(_DWORD *)(v12 + 24) + 1;
              *(_DWORD *)(v12 + 24) = v35;
              if ( !v34 )
                goto LABEL_18;
              v36 = *(_DWORD *)(v34 + 24);
              v25 = v35 < v36;
            }
            while ( v35 < v36 );
          }
          LOBYTE(v23) = !v25;
        }
      }
    }
  }
  else
  {
    LOBYTE(v23) = 1;
  }
  return v23 & 1;
}


bool __fastcall Individuality__CheckIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  bool v3; // w8
  __int64 v4; // x9
  __int64 v5; // x11
  __int64 v6; // x10
  int v7; // w12

  if ( !target )
    return 1;
  v3 = 1;
  if ( self )
  {
    v4 = *(_QWORD *)&target->max_length;
    if ( v4 )
    {
      v5 = *(_QWORD *)&self->max_length;
      v3 = 0;
      if ( v5 )
      {
        if ( (int)v5 >= 1 )
        {
          v6 = 0LL;
          while ( (int)v4 < 1 )
          {
LABEL_11:
            ++v6;
            v3 = 0;
            if ( v6 == (unsigned int)*(_QWORD *)&self->max_length )
              return v3;
          }
          v7 = 0;
          while ( self->m_Items[v6 + 1] != target->m_Items[v7 + 1] )
          {
            if ( (_DWORD)v4 == ++v7 )
              goto LABEL_11;
          }
          return 1;
        }
      }
    }
  }
  return v3;
}


bool __fastcall Individuality__CheckIndividualities_38410816(
        System_Int32_array *self,
        System_Int64_array *target,
        const MethodInfo *method)
{
  bool v3; // w8
  __int64 v4; // x9
  __int64 v5; // x11
  __int64 v6; // x10
  int v7; // w12

  if ( !target )
    return 1;
  v3 = 1;
  if ( self )
  {
    v4 = *(_QWORD *)&target->max_length;
    if ( v4 )
    {
      v5 = *(_QWORD *)&self->max_length;
      v3 = 0;
      if ( v5 )
      {
        if ( (int)v5 >= 1 )
        {
          v6 = 0LL;
          while ( (int)v4 < 1 )
          {
LABEL_11:
            ++v6;
            v3 = 0;
            if ( v6 == (unsigned int)*(_QWORD *)&self->max_length )
              return v3;
          }
          v7 = 0;
          while ( target->m_Items[v7] != self->m_Items[v6 + 1] )
          {
            if ( (_DWORD)v4 == ++v7 )
              goto LABEL_11;
          }
          return 1;
        }
      }
    }
  }
  return v3;
}


bool __fastcall Individuality__CheckSignedIndividualities(
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
  int v11; // w22
  System_Int32_array *v12; // x20
  _BOOL4 v13; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B151D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, signedTarget, method);
    byte_4B151D0 = 1;
  }
  result = 1;
  unsignedArray = 0LL;
  signedArray = 0LL;
  if ( signedTarget && self && *(_QWORD *)&signedTarget->max_length )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, signedTarget);
      Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &signedArray, v3);
      v10 = unsignedArray;
      if ( !unsignedArray )
        goto LABEL_24;
      if ( *(_QWORD *)&unsignedArray->max_length )
      {
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v8);
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
        sub_1BCAA3C(IsPartialMatchArray, v8);
      if ( *(_QWORD *)&signedArray->max_length )
      {
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v8);
        v13 = !Individuality__IsPartialMatchArray(self, v12, v9);
      }
      else
      {
        v13 = 1;
      }
      return (v13 & v11) != 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualitiesCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        System_Func_int____int____int__int__bool__o *matchedFunc,
        System_Func_int____int____int__int__bool__o *mismatchFunc,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  bool result; // w0
  __int64 v14; // x0
  __int64 v15; // x1
  int v16; // w23
  _BOOL4 v17; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B151D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, targets, matchedFunc);
    byte_4B151D9 = 1;
  }
  unsignedArray = 0LL;
  signedArray = 0LL;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets);
  result = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
      if ( selfs )
      {
        if ( *(_QWORD *)&targets->max_length )
        {
          if ( !*(_QWORD *)&selfs->max_length )
            return 0;
          if ( !Individuality_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets);
          Individuality__DivideUnsignedAndSignedArray(
            targets,
            &unsignedArray,
            &signedArray,
            (const MethodInfo *)mismatchFunc);
          if ( unsignedArray )
          {
            if ( *(_QWORD *)&unsignedArray->max_length )
            {
              if ( !matchedFunc )
                goto LABEL_25;
              v14 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))matchedFunc->fields.m_target)(
                      matchedFunc->fields.original_method_info,
                      selfs);
              v16 = v14 & 1;
            }
            else
            {
              v16 = 1;
            }
            if ( signedArray )
            {
              if ( !*(_QWORD *)&signedArray->max_length )
              {
                v17 = 1;
                return (v17 & v16) != 0;
              }
              if ( mismatchFunc )
              {
                v17 = (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))mismatchFunc->fields.m_target)(
                         mismatchFunc->fields.original_method_info,
                         selfs) & 1) == 0;
                return (v17 & v16) != 0;
              }
            }
          }
LABEL_25:
          sub_1BCAA3C(v14, v15);
        }
      }
    }
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualitiesPartialCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        System_Func_int____int____int__int__bool__o *matchedFunc,
        System_Func_int____int____int__int__bool__o *mismatchFunc,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  bool result; // w0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_Int32_array *signedArray; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B151DA & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, targets, matchedFunc);
    byte_4B151DA = 1;
  }
  unsignedArray = 0LL;
  signedArray = 0LL;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets);
  result = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
      if ( selfs )
      {
        if ( *(_QWORD *)&targets->max_length )
        {
          if ( !Individuality_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets);
          Individuality__DivideUnsignedAndSignedArray(
            targets,
            &unsignedArray,
            &signedArray,
            (const MethodInfo *)mismatchFunc);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unsignedArray, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !matchedFunc )
              goto LABEL_20;
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *, System_Int32_array *, _QWORD, _QWORD, _QWORD))matchedFunc->fields.m_target)(
                    matchedFunc->fields.original_method_info,
                    selfs,
                    unsignedArray,
                    (unsigned int)countAbove,
                    (unsigned int)countBelow,
                    *(_QWORD *)&matchedFunc->fields.extra_arg) & 1) != 0 )
              return 1;
          }
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedArray, 0LL);
          if ( IsNullOrEmpty )
            return 0;
          if ( mismatchFunc )
            return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *, System_Int32_array *, _QWORD, _QWORD, _QWORD))mismatchFunc->fields.m_target)(
                      mismatchFunc->fields.original_method_info,
                      selfs,
                      signedArray,
                      (unsigned int)countAbove,
                      (unsigned int)countBelow,
                      *(_QWORD *)&mismatchFunc->fields.extra_arg) & 1) == 0;
LABEL_20:
          sub_1BCAA3C(IsNullOrEmpty, v15);
        }
      }
    }
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualitiesPartialMatch(
        System_Int32_array *selfs,
        System_Int32_array *signedTargets,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        bool isSkipPreCheckSelfsEmpty,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  char v13; // w8
  __int64 v14; // x0
  __int64 v15; // x1
  System_Int32_array *v17; // [xsp+0h] [xbp-50h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B151DB & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, signedTargets, matchedFunc);
    byte_4B151DB = 1;
  }
  v17 = 0LL;
  unsignedArray = 0LL;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, signedTargets);
  v13 = (selfs == 0LL) | BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargets, 0LL);
  if ( (v13 & 1) != 0 || isSkipPreCheckSelfsEmpty )
  {
    if ( (v13 & 1) != 0 )
      return 1;
  }
  else if ( !*(_QWORD *)&selfs->max_length )
  {
    return 0;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11);
  Individuality__DivideUnsignedAndSignedArray(signedTargets, &unsignedArray, &v17, v12);
  if ( unsignedArray && *(_QWORD *)&unsignedArray->max_length )
  {
    if ( !matchedFunc )
      goto LABEL_23;
    v14 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))matchedFunc->fields.m_target)(
            matchedFunc->fields.original_method_info,
            selfs);
    if ( (v14 & 1) != 0 )
      return 1;
  }
  if ( !v17 || !*(_QWORD *)&v17->max_length )
    return 0;
  if ( !mismatchFunc )
LABEL_23:
    sub_1BCAA3C(v14, v15);
  return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))mismatchFunc->fields.m_target)(
            mismatchFunc->fields.original_method_info,
            selfs) & 1) == 0;
}


bool __fastcall Individuality__CheckSignedIndividualities_38410404(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        const MethodInfo *method)
{
  bool result; // w0
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w21
  _BOOL4 v13; // w8
  System_Int32_array *v14; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B151D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, signedTarget, matchedFunc);
    byte_4B151D1 = 1;
  }
  result = 1;
  v14 = 0LL;
  unsignedArray = 0LL;
  if ( signedTarget && self && *(_QWORD *)&signedTarget->max_length )
  {
    if ( !*(_QWORD *)&self->max_length )
      return 0;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, signedTarget);
    Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &v14, (const MethodInfo *)mismatchFunc);
    if ( unsignedArray )
    {
      if ( *(_QWORD *)&unsignedArray->max_length )
      {
        if ( !matchedFunc )
          goto LABEL_22;
        v10 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))matchedFunc->fields.m_target)(
                matchedFunc->fields.original_method_info,
                self);
        v12 = v10 & 1;
      }
      else
      {
        v12 = 1;
      }
      if ( v14 )
      {
        if ( !*(_QWORD *)&v14->max_length )
        {
          v13 = 1;
          return (v13 & v12) != 0;
        }
        if ( mismatchFunc )
        {
          v13 = (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))mismatchFunc->fields.m_target)(
                   mismatchFunc->fields.original_method_info,
                   self) & 1) == 0;
          return (v13 & v12) != 0;
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(v10, v11);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedMultiIndividuality(
        System_Int32_array *selfArray,
        System_Int32_array_array *signedTargetsArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Func_object__bool__o *v25; // x20

  if ( (byte_4B151DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int______76839936, signedTargetsArray, method);
    sub_1BCA7E0(&System_Func_int____bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_Individuality___c__DisplayClass20_0__CheckSignedMultiIndividuality_b__0__, v8, v9);
    sub_1BCA7E0(&Individuality___c__DisplayClass20_0_TypeInfo, v10, v11);
    byte_4B151DC = 1;
  }
  v12 = sub_1BCAA2C(Individuality___c__DisplayClass20_0_TypeInfo, signedTargetsArray, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = selfArray;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)selfArray, v15, v16, v17, v18, v19, v20);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_int____bool__TypeInfo, v21, v22, v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_Individuality___c__DisplayClass20_0__CheckSignedMultiIndividuality_b__0__,
    0LL);
  return BasicHelper__Any_object__49274176(
           (System_Object_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v25,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_int______76839936);
}


bool __fastcall Individuality__ContainsIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  bool result; // w0
  __int64 v13; // x8
  __int64 v14; // x9
  unsigned __int64 v15; // x24
  int v16; // w23
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_int__bool__o *v22; // x22

  if ( (byte_4B151D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, target, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_Individuality___c__DisplayClass7_0__ContainsIndividualities_b__0__, v8, v9);
    sub_1BCA7E0(&Individuality___c__DisplayClass7_0_TypeInfo, v10, v11);
    byte_4B151D3 = 1;
  }
  result = 1;
  if ( target )
  {
    if ( self )
    {
      v13 = *(_QWORD *)&target->max_length;
      if ( v13 )
      {
        v14 = *(_QWORD *)&self->max_length;
        if ( v14 )
        {
          if ( (int)v14 < 1 )
          {
            v16 = 0;
          }
          else
          {
            v15 = 0LL;
            v16 = 0;
            do
            {
              v17 = sub_1BCAA2C(Individuality___c__DisplayClass7_0_TypeInfo, target, method, v3);
              System_Object___ctor((Il2CppObject *)v17, 0LL);
              if ( v15 >= self->max_length )
                sub_1BCAA44(v18, v19);
              if ( !v17 )
                sub_1BCAA3C(v18, v19);
              *(_DWORD *)(v17 + 16) = self->m_Items[v15 + 1];
              v22 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v19, v20, v21);
              System_Func_int__bool____ctor(
                v22,
                (Il2CppObject *)v17,
                Method_Individuality___c__DisplayClass7_0__ContainsIndividualities_b__0__,
                0LL);
              ++v15;
              v16 += BasicHelper__Any_int__49273364(
                       target,
                       (System_Func_T__bool__o *)v22,
                       (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
            }
            while ( (__int64)v15 < (int)self->max_length );
            v13 = *(_QWORD *)&target->max_length;
          }
          return v16 >= (int)v13;
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


void __fastcall Individuality__DivideUnsignedAndSignedArray(
        System_Int32_array *baseArray,
        System_Int32_array **unsignedArray,
        System_Int32_array **signedArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_int__o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  struct System_Int32_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  char *v25; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  __int64 v29; // x8
  System_Collections_Generic_List_int__o *v30; // x0
  System_Int32_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Int32_array *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B151D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, unsignedArray, signedArray);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B151D2 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    unsignedArray,
                                                    signedArray,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseArray )
    goto LABEL_24;
  v20 = *(_QWORD *)&baseArray->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1BCAA44(v18, v19);
      v19 = (unsigned int)baseArray->m_Items[v21 + 1];
      if ( (int)v19 < 1 )
      {
        if ( !v17 )
          goto LABEL_24;
        items = v17->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v17->fields._size;
        v19 = (unsigned int)-(int)v19;
        if ( (unsigned int)size >= items->max_length )
        {
          v29 = v27[4];
          v30 = v17;
          goto LABEL_19;
        }
        v25 = (char *)items + 4 * size;
        v17->fields._size = size + 1;
      }
      else
      {
        if ( !v13 )
          goto LABEL_24;
        v22 = v13->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !v22 )
          goto LABEL_24;
        v24 = v13->fields._size;
        if ( (unsigned int)v24 >= v22->max_length )
        {
          v29 = v23[4];
          v30 = v13;
LABEL_19:
          System_Collections_Generic_List_int___AddWithResize(
            v30,
            v19,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29 + 192) + 112LL));
          goto LABEL_20;
        }
        v25 = (char *)v22 + 4 * v24;
        v13->fields._size = v24 + 1;
      }
      *((_DWORD *)v25 + 8) = v19;
LABEL_20:
      LODWORD(v20) = baseArray->max_length;
    }
    while ( (__int64)++v21 < (int)v20 );
  }
  if ( !v13
    || (v31 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v31,
        sub_1BCA784((PartyOrganizationUtility_o *)unsignedArray, (int64_t)v31, v32, v33, v34, v35, v36, v37),
        !v17) )
  {
LABEL_24:
    sub_1BCAA3C(v18, v19);
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)signedArray, (int64_t)v38, v39, v40, v41, v42, v43, v44);
}


System_Int32_array *__fastcall Individuality__GetMatchedCountArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  int32_t v8; // w13
  __int64 max_length; // x14
  unsigned __int64 v10; // x15

  v4 = selfs;
  if ( (byte_4B151D6 & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_1BCA7E0(&int___TypeInfo, targets, method);
    byte_4B151D6 = 1;
  }
  if ( !targets
    || (v5 = *(_QWORD *)&targets->max_length,
        selfs = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v5),
        !v4) )
  {
LABEL_19:
    sub_1BCAA3C(selfs, targets);
  }
  if ( (int)*(_QWORD *)&v4->max_length >= 1 )
  {
    v6 = (unsigned int)*(_QWORD *)&v4->max_length;
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 == v6 )
        goto LABEL_18;
      if ( (int)v5 >= 1 )
        break;
LABEL_16:
      if ( ++v7 == v6 )
        return selfs;
    }
    v8 = v4->m_Items[v7 + 1];
    max_length = targets->max_length;
    v10 = 0LL;
    while ( max_length != v10 )
    {
      if ( v8 == targets->m_Items[v10 + 1] )
      {
        if ( !selfs )
          goto LABEL_19;
        if ( v10 >= selfs->max_length )
          break;
        ++selfs->m_Items[v10 + 1];
      }
      if ( (unsigned int)v5 == ++v10 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCAA44(selfs, targets);
  }
  return selfs;
}


int32_t __fastcall Individuality__GetMatchedTotalCount(
        System_Int32_array *selfIndividualityArray,
        System_Int32_array *targetIndividualityArray,
        const MethodInfo *method)
{
  System_Int32_array *MatchedCountArray; // x0
  __int64 v6; // x1
  __int64 max_length; // x9
  System_Int32_array *v8; // x8
  __int64 v9; // x0
  __int64 v10; // x10
  int32_t *v11; // x8
  int v12; // t1

  if ( (byte_4B151DD & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, targetIndividualityArray, method);
    byte_4B151DD = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targetIndividualityArray);
  MatchedCountArray = Individuality__GetMatchedCountArray(selfIndividualityArray, targetIndividualityArray, method);
  if ( !MatchedCountArray )
    sub_1BCAA3C(0LL, v6);
  max_length = MatchedCountArray->max_length;
  v8 = MatchedCountArray;
  if ( max_length << 32 < 1 )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    v9 = 0LL;
    v10 = (int)max_length;
    v11 = &v8->m_Items[1];
    do
    {
      if ( !max_length )
        sub_1BCAA44(v9, v6);
      v12 = *v11++;
      --v10;
      --max_length;
      v9 = (unsigned int)(v12 + v9);
    }
    while ( v10 );
  }
  return v9;
}


int32_t __fastcall Individuality__GetMatchedTotalCountMultiIndividuality(
        System_Int32_array *selfIndividualityArray,
        System_Int32_array_array *targetMultiIndividualityArray,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  __int64 v5; // x8
  int32_t v6; // w21
  unsigned __int64 v7; // x23
  System_Int32_array *v8; // x22

  v4 = selfIndividualityArray;
  if ( (byte_4B151DE & 1) == 0 )
  {
    selfIndividualityArray = (System_Int32_array *)sub_1BCA7E0(
                                                     &Individuality_TypeInfo,
                                                     targetMultiIndividualityArray,
                                                     method);
    byte_4B151DE = 1;
  }
  if ( !targetMultiIndividualityArray )
    sub_1BCAA3C(selfIndividualityArray, targetMultiIndividualityArray);
  v5 = *(_QWORD *)&targetMultiIndividualityArray->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = 0;
  v7 = 0LL;
  do
  {
    if ( v7 >= (unsigned int)v5 )
      sub_1BCAA44(selfIndividualityArray, targetMultiIndividualityArray);
    v8 = targetMultiIndividualityArray->m_Items[v7];
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targetMultiIndividualityArray);
    selfIndividualityArray = (System_Int32_array *)Individuality__IsMatchArray(v4, v8, method);
    LODWORD(v5) = targetMultiIndividualityArray->max_length;
    ++v7;
    v6 += (unsigned __int8)selfIndividualityArray & 1;
  }
  while ( (__int64)v7 < (int)v5 );
  return v6;
}


bool __fastcall Individuality__IsMatchAboveBelow(int32_t count, int32_t above, int32_t below, const MethodInfo *method)
{
  if ( above < 1 )
  {
    if ( below < 1 )
      return 0;
  }
  else
  {
    if ( below < 1 )
      return count >= above;
    if ( count < above )
      return 0;
  }
  return count <= below;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality__IsMatchAboveBelowEqual(
        int32_t count,
        int32_t above,
        int32_t below,
        int32_t equal,
        const MethodInfo *method)
{
  if ( (byte_4B151DF & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, *(_QWORD *)&above, *(_QWORD *)&below);
    byte_4B151DF = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, *(_QWORD *)&above);
  if ( above < 1 )
  {
    if ( below < 1 )
      return count == equal;
  }
  else
  {
    if ( below < 1 )
    {
      if ( count >= above )
        return 1;
      return count == equal;
    }
    if ( count < above )
      return count == equal;
  }
  if ( count <= below )
    return 1;
  return count == equal;
}


bool __fastcall Individuality__IsMatchArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  bool v12; // w0
  unsigned __int64 v13; // x23
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Func_int__bool__o *v19; // x22

  if ( (byte_4B151D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, targets, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_Individuality___c__DisplayClass10_0__IsMatchArray_b__0__, v8, v9);
    sub_1BCA7E0(&Individuality___c__DisplayClass10_0_TypeInfo, v10, v11);
    byte_4B151D5 = 1;
  }
  v12 = 0;
  if ( selfs && targets )
  {
    if ( (int)targets->max_length < 1 )
    {
      return 1;
    }
    else
    {
      v13 = 0LL;
      do
      {
        v14 = sub_1BCAA2C(Individuality___c__DisplayClass10_0_TypeInfo, targets, method, v3);
        System_Object___ctor((Il2CppObject *)v14, 0LL);
        if ( v13 >= targets->max_length )
          sub_1BCAA44(v15, v16);
        if ( !v14 )
          sub_1BCAA3C(v15, v16);
        *(_DWORD *)(v14 + 16) = targets->m_Items[v13 + 1];
        v19 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v16, v17, v18);
        System_Func_int__bool____ctor(
          v19,
          (Il2CppObject *)v14,
          Method_Individuality___c__DisplayClass10_0__IsMatchArray_b__0__,
          0LL);
        v12 = BasicHelper__Any_int__49273364(
                selfs,
                (System_Func_T__bool__o *)v19,
                (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
        if ( !v12 )
          break;
        ++v13;
      }
      while ( (__int64)v13 < (int)targets->max_length );
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality__IsMatchArrayCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  _QWORD *MatchedCountArray; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x21
  unsigned __int64 i; // x22
  int32_t v14; // w25
  bool v15; // cc

  if ( (byte_4B151D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, targets, *(_QWORD *)&countAbove);
    byte_4B151D8 = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets);
  LOBYTE(MatchedCountArray) = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      LOBYTE(MatchedCountArray) = 1;
      if ( selfs )
      {
        if ( *(_QWORD *)&targets->max_length )
        {
          if ( *(_QWORD *)&selfs->max_length )
          {
            if ( !Individuality_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, targets);
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, *(const MethodInfo **)&countAbove);
            if ( !MatchedCountArray )
              sub_1BCAA3C(0LL, v10);
            v11 = MatchedCountArray[3];
            v12 = MatchedCountArray;
            if ( (int)v11 >= 1 )
            {
              for ( i = 0LL; (__int64)i < (int)v11; ++i )
              {
                if ( i >= (unsigned int)v11 )
                  sub_1BCAA44(MatchedCountArray, v10);
                MatchedCountArray = &Individuality_TypeInfo->_1.image;
                v14 = *((_DWORD *)v12 + i + 8);
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v10);
                if ( countAbove < 1 )
                {
                  v15 = countBelow < 1;
                }
                else
                {
                  if ( countBelow < 1 )
                  {
                    if ( v14 < countAbove )
                      goto LABEL_28;
                    goto LABEL_26;
                  }
                  v15 = v14 < countAbove;
                }
                MatchedCountArray = 0LL;
                if ( v15 || v14 > countBelow )
                  return (char)MatchedCountArray;
LABEL_26:
                LODWORD(v11) = *((_DWORD *)v12 + 6);
              }
            }
            LOBYTE(MatchedCountArray) = 1;
          }
          else
          {
LABEL_28:
            LOBYTE(MatchedCountArray) = 0;
          }
        }
      }
    }
  }
  return (char)MatchedCountArray;
}


bool __fastcall Individuality__IsPartialMatchArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  bool v3; // w8
  __int64 v4; // x8
  unsigned __int64 v5; // x9
  signed __int64 v6; // x11
  signed int max_length; // w8
  __int64 v8; // x14

  v3 = 0;
  if ( selfs && targets )
  {
    v4 = *(_QWORD *)&selfs->max_length;
    if ( (int)v4 < 1 )
    {
      return 0;
    }
    else
    {
      v5 = 0LL;
      v6 = (int)v4;
      while ( 1 )
      {
        if ( v5 >= (unsigned int)*(_QWORD *)&selfs->max_length )
LABEL_16:
          sub_1BCAA44(selfs, targets);
        max_length = targets->max_length;
        if ( max_length >= 1 )
          break;
LABEL_11:
        ++v5;
        v3 = 0;
        if ( (__int64)v5 >= v6 )
          return v3;
      }
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          goto LABEL_16;
        if ( selfs->m_Items[v5 + 1] == targets->m_Items[v8 + 1] )
          return 1;
        if ( (int)++v8 >= max_length )
          goto LABEL_11;
      }
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality__IsPartialMatchArrayCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_int__bool__o *v26; // x20

  if ( (byte_4B151D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, targets, *(_QWORD *)&countAbove);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Individuality_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_Individuality___c__DisplayClass14_0__IsPartialMatchArrayCount_b__0__, v13, v14);
    sub_1BCA7E0(&Individuality___c__DisplayClass14_0_TypeInfo, v15, v16);
    byte_4B151D7 = 1;
  }
  v17 = sub_1BCAA2C(
          Individuality___c__DisplayClass14_0_TypeInfo,
          targets,
          *(_QWORD *)&countAbove,
          *(_QWORD *)&countBelow);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  *(_DWORD *)(v17 + 16) = countAbove;
  *(_DWORD *)(v17 + 20) = countBelow;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v19);
  result = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
      if ( selfs )
      {
        if ( *(_QWORD *)&targets->max_length )
        {
          if ( *(_QWORD *)&selfs->max_length )
          {
            if ( !Individuality_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v19);
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v20);
            v26 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v23, v24, v25);
            System_Func_int__bool____ctor(
              v26,
              (Il2CppObject *)v17,
              Method_Individuality___c__DisplayClass14_0__IsPartialMatchArrayCount_b__0__,
              0LL);
            return BasicHelper__Any_int__49273364(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v26,
                     (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  return result;
}


bool __fastcall Individuality__IsPreIndividualitiesCheck(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        bool *result,
        bool isSkipPreCheckSelfsEmpty,
        const MethodInfo *method)
{
  char v8; // w8

  *result = 1;
  v8 = (selfs == 0LL) | BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targets, 0LL);
  if ( (v8 & 1) == 0 && !isSkipPreCheckSelfsEmpty )
  {
    if ( *(_QWORD *)&selfs->max_length )
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


bool __fastcall Individuality__IsPreIndividualitiesCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        bool *ret,
        bool isSkipPreCheckSelfEmpty,
        const MethodInfo *method)
{
  bool result; // w0

  result = 1;
  *ret = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
      if ( selfs )
      {
        if ( *(_QWORD *)&targets->max_length )
        {
          result = 0;
          if ( !*(_QWORD *)&selfs->max_length && !isSkipPreCheckSelfEmpty )
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


void __fastcall Individuality___c__DisplayClass10_0___ctor(
        Individuality___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass10_0___IsMatchArray_b__0(
        Individuality___c__DisplayClass10_0_o *this,
        int32_t self,
        const MethodInfo *method)
{
  return this->fields.target == self;
}


void __fastcall Individuality___c__DisplayClass14_0___ctor(
        Individuality___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality___c__DisplayClass14_0___IsPartialMatchArrayCount_b__0(
        Individuality___c__DisplayClass14_0_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t countBelow; // w20
  int32_t countAbove; // w21

  if ( (byte_4B151E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, *(_QWORD *)&count, method);
    byte_4B151E1 = 1;
  }
  countAbove = this->fields.countAbove;
  countBelow = this->fields.countBelow;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, *(_QWORD *)&count);
  if ( countAbove < 1 )
  {
    if ( countBelow < 1 )
      return 0;
  }
  else
  {
    if ( countBelow < 1 )
      return countAbove <= count;
    if ( countAbove > count )
      return 0;
  }
  return countBelow >= count;
}


void __fastcall Individuality___c__DisplayClass20_0___ctor(
        Individuality___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass20_0___CheckSignedMultiIndividuality_b__0(
        Individuality___c__DisplayClass20_0_o *this,
        System_Int32_array *signedTargets,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Func_T1__T2__TResult__o *v15; // x22
  __int64 v16; // x1
  const MethodInfo *v17; // x4

  if ( (byte_4B151E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_int____int____bool__TypeInfo, signedTargets, method);
    sub_1BCA7E0(&Method_Individuality_IsMatchArray__, v6, v7);
    sub_1BCA7E0(&Individuality_TypeInfo, v8, v9);
    byte_4B151E2 = 1;
  }
  selfArray = this->fields.selfArray;
  v11 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                            System_Func_int____int____bool__TypeInfo,
                                            signedTargets,
                                            method,
                                            v3);
  System_Func_object__object__bool____ctor(v11, 0LL, Method_Individuality_IsMatchArray__, 0LL);
  v15 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(System_Func_int____int____bool__TypeInfo, v12, v13, v14);
  System_Func_object__object__bool____ctor(v15, 0LL, Method_Individuality_IsMatchArray__, 0LL);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v16);
  return Individuality__CheckSignedIndividualities_38410404(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v11,
           (System_Func_int____int____bool__o *)v15,
           v17);
}


void __fastcall Individuality___c__DisplayClass7_0___ctor(
        Individuality___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass7_0___ContainsIndividualities_b__0(
        Individuality___c__DisplayClass7_0_o *this,
        int32_t tg,
        const MethodInfo *method)
{
  return this->fields.type == tg;
}


void __fastcall Individuality___c__DisplayClass8_0___ctor(
        Individuality___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality___c__DisplayClass8_0___CheckAllIndividualities_b__0(
        Individuality___c__DisplayClass8_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct System_Int32_array *target; // x8
  __int64 i; // x9

  target = this->fields.target;
  if ( !target )
    sub_1BCAA3C(this, *(_QWORD *)&sf);
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
    sub_1BCAA44(this, sf);
  return target->m_Items[i + 1] == sf;
}