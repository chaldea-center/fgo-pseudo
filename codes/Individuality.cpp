bool __fastcall Individuality__CheckAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  _BOOL8 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  bool result; // w0
  int v21; // w9
  System_Func_int__bool__o **v22; // x21
  System_Func_int__bool__o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4215CCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, target);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__, v7);
    sub_B0D8A4(&Individuality___c__DisplayClass7_0_TypeInfo, v8);
    byte_4215CCA = 1;
  }
  v9 = sub_B0D974(Individuality___c__DisplayClass7_0_TypeInfo, target, method);
  Individuality___c__DisplayClass7_0___ctor((Individuality___c__DisplayClass7_0_o *)v9, 0LL);
  if ( !v9 )
LABEL_14:
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = target;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)target, v11, v12, v13, v14, v15, v16);
  v19 = *(_QWORD *)(v9 + 16);
  if ( !v19 )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)(v19 + 24) )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      *(_DWORD *)(v9 + 24) = 0;
      v21 = 0;
      v22 = (System_Func_int__bool__o **)(v9 + 32);
      while ( v21 < *(_DWORD *)(v19 + 24) )
      {
        v23 = *v22;
        if ( !*v22 )
        {
          v23 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v17, v18);
          System_Func_int__bool____ctor(
            v23,
            (Il2CppObject *)v9,
            Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__,
            (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
          *(_QWORD *)(v9 + 32) = v23;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v9 + 32),
            (System_Int32_array **)v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
        v10 = BasicHelper__Any_int__24145568(
                self,
                (System_Func_T__bool__o *)v23,
                (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
        if ( !v10 )
          return 0;
        v19 = *(_QWORD *)(v9 + 16);
        v21 = *(_DWORD *)(v9 + 24) + 1;
        *(_DWORD *)(v9 + 24) = v21;
        if ( !v19 )
          goto LABEL_14;
      }
      return 1;
    }
    return 0;
  }
  return result;
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
  __int64 v7; // x13

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
            if ( v6 >= (int)v5 )
              return v3;
          }
          v7 = 0LL;
          while ( self->m_Items[v6 + 1] != target->m_Items[v7 + 1] )
          {
            if ( (int)++v7 >= (int)v4 )
              goto LABEL_11;
          }
          return 1;
        }
      }
    }
  }
  return v3;
}


bool __fastcall Individuality__CheckIndividualities_26827228(
        System_Int32_array *self,
        System_Int64_array *target,
        const MethodInfo *method)
{
  bool v3; // w8
  __int64 v4; // x9
  __int64 v5; // x11
  __int64 v6; // x10
  __int64 v7; // x13

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
            if ( v6 >= (int)v5 )
              return v3;
          }
          v7 = 0LL;
          while ( target->m_Items[v7] != self->m_Items[v6 + 1] )
          {
            if ( (int)++v7 >= (int)v4 )
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
  const MethodInfo *v7; // x2
  int v8; // w20
  _BOOL4 v9; // w8
  System_Int32_array *targets; // [xsp+0h] [xbp-20h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-18h] BYREF

  targets = 0LL;
  unsignedArray = 0LL;
  if ( !signedTarget )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)&signedTarget->max_length )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &targets, v3);
      if ( !unsignedArray
        || (!*(_QWORD *)&unsignedArray->max_length
          ? (v8 = 1)
          : (IsPartialMatchArray = Individuality__IsPartialMatchArray(self, unsignedArray, v7), v8 = IsPartialMatchArray),
            !targets) )
      {
        sub_B0D97C(IsPartialMatchArray);
      }
      if ( *(_QWORD *)&targets->max_length )
        v9 = !Individuality__IsPartialMatchArray(self, targets, v7);
      else
        v9 = 1;
      return (v9 & v8) != 0;
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
  _BOOL8 v14; // x0
  int v15; // w23
  _BOOL4 v16; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4215CCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_int____int____int__int__bool__Invoke__, targets);
    byte_4215CCE = 1;
  }
  result = 1;
  unsignedArray = 0LL;
  signedArray = 0LL;
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
                goto LABEL_21;
              v14 = System_Func_object__object__int__int__bool___Invoke(
                      (System_Func_T1__T2__T3__T4__TResult__o *)matchedFunc,
                      &selfs->obj,
                      &unsignedArray->obj,
                      countAbove,
                      countBelow,
                      (const MethodInfo_2C67974 *)Method_System_Func_int____int____int__int__bool__Invoke__);
              v15 = v14;
            }
            else
            {
              v15 = 1;
            }
            if ( signedArray )
            {
              if ( !*(_QWORD *)&signedArray->max_length )
              {
                v16 = 1;
                return (v16 & v15) != 0;
              }
              if ( mismatchFunc )
              {
                v16 = !System_Func_object__object__int__int__bool___Invoke(
                         (System_Func_T1__T2__T3__T4__TResult__o *)mismatchFunc,
                         &selfs->obj,
                         &signedArray->obj,
                         countAbove,
                         countBelow,
                         (const MethodInfo_2C67974 *)Method_System_Func_int____int____int__int__bool__Invoke__);
                return (v16 & v15) != 0;
              }
            }
          }
LABEL_21:
          sub_B0D97C(v14);
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
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  bool IsNullOrEmpty; // w8
  bool result; // w0
  _BOOL8 v12; // x0
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4215CCF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_int____int____bool__Invoke__, signedTargets);
    byte_4215CCF = 1;
  }
  unsignedArray = 0LL;
  signedArray = 0LL;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargets, 0LL);
  result = 1;
  if ( selfs && !IsNullOrEmpty )
  {
    if ( !*(_QWORD *)&selfs->max_length )
      return 0;
    Individuality__DivideUnsignedAndSignedArray(signedTargets, &unsignedArray, &signedArray, v9);
    if ( unsignedArray && *(_QWORD *)&unsignedArray->max_length )
    {
      if ( !matchedFunc )
        goto LABEL_17;
      v12 = System_Func_object__object__bool___Invoke(
              (System_Func_T1__T2__TResult__o *)matchedFunc,
              &selfs->obj,
              &unsignedArray->obj,
              (const MethodInfo_26232B8 *)Method_System_Func_int____int____bool__Invoke__);
      if ( v12 )
        return 1;
    }
    if ( !signedArray || !*(_QWORD *)&signedArray->max_length )
      return 0;
    if ( mismatchFunc )
      return !System_Func_object__object__bool___Invoke(
                (System_Func_T1__T2__TResult__o *)mismatchFunc,
                &selfs->obj,
                &signedArray->obj,
                (const MethodInfo_26232B8 *)Method_System_Func_int____int____bool__Invoke__);
LABEL_17:
    sub_B0D97C(v12);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualities_26826816(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        const MethodInfo *method)
{
  bool result; // w0
  _BOOL8 v10; // x0
  int v11; // w21
  _BOOL4 v12; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4215CC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_int____int____bool__Invoke__, signedTarget);
    byte_4215CC7 = 1;
  }
  result = 1;
  unsignedArray = 0LL;
  signedArray = 0LL;
  if ( signedTarget && self && *(_QWORD *)&signedTarget->max_length )
  {
    if ( !*(_QWORD *)&self->max_length )
      return 0;
    Individuality__DivideUnsignedAndSignedArray(
      signedTarget,
      &unsignedArray,
      &signedArray,
      (const MethodInfo *)mismatchFunc);
    if ( unsignedArray )
    {
      if ( *(_QWORD *)&unsignedArray->max_length )
      {
        if ( !matchedFunc )
          goto LABEL_20;
        v10 = System_Func_object__object__bool___Invoke(
                (System_Func_T1__T2__TResult__o *)matchedFunc,
                &self->obj,
                &unsignedArray->obj,
                (const MethodInfo_26232B8 *)Method_System_Func_int____int____bool__Invoke__);
        v11 = v10;
      }
      else
      {
        v11 = 1;
      }
      if ( signedArray )
      {
        if ( !*(_QWORD *)&signedArray->max_length )
        {
          v12 = 1;
          return (v12 & v11) != 0;
        }
        if ( mismatchFunc )
        {
          v12 = !System_Func_object__object__bool___Invoke(
                   (System_Func_T1__T2__TResult__o *)mismatchFunc,
                   &self->obj,
                   &signedArray->obj,
                   (const MethodInfo_26232B8 *)Method_System_Func_int____int____bool__Invoke__);
          return (v12 & v11) != 0;
        }
      }
    }
LABEL_20:
    sub_B0D97C(v10);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedMultiIndividuality(
        System_Int32_array *selfArray,
        System_Int32_array_array *signedTargetsArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20

  if ( (byte_4215CD0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int______67954144, signedTargetsArray);
    sub_B0D8A4(&Method_System_Func_int____bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int____bool__TypeInfo, v6);
    sub_B0D8A4(&Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__, v7);
    sub_B0D8A4(&Individuality___c__DisplayClass18_0_TypeInfo, v8);
    byte_4215CD0 = 1;
  }
  v9 = sub_B0D974(Individuality___c__DisplayClass18_0_TypeInfo, signedTargetsArray, method);
  Individuality___c__DisplayClass18_0___ctor((Individuality___c__DisplayClass18_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = selfArray;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)selfArray, v11, v12, v13, v14, v15, v16);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_int____bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_int____bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v20,
           (const MethodInfo_17071E4 *)Method_BasicHelper_Any_int______67954144);
}


bool __fastcall Individuality__ContainsIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool result; // w0
  __int64 v10; // x8
  __int64 v11; // x9
  unsigned __int64 v12; // x24
  int v13; // w23
  Individuality___c__DisplayClass6_0_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_int__bool__o *v18; // x22
  __int64 v19; // x0

  if ( (byte_4215CC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, target);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__, v7);
    sub_B0D8A4(&Individuality___c__DisplayClass6_0_TypeInfo, v8);
    byte_4215CC9 = 1;
  }
  result = 1;
  if ( target )
  {
    if ( self )
    {
      v10 = *(_QWORD *)&target->max_length;
      if ( v10 )
      {
        v11 = *(_QWORD *)&self->max_length;
        if ( v11 )
        {
          if ( (int)v11 < 1 )
          {
            v13 = 0;
          }
          else
          {
            v12 = 0LL;
            v13 = 0;
            do
            {
              v14 = (Individuality___c__DisplayClass6_0_o *)sub_B0D974(
                                                              Individuality___c__DisplayClass6_0_TypeInfo,
                                                              target,
                                                              method);
              Individuality___c__DisplayClass6_0___ctor(v14, 0LL);
              if ( v12 >= self->max_length )
              {
                v19 = sub_B0D9A8(v15);
                sub_B0D948(v19, 0LL);
              }
              if ( !v14 )
                sub_B0D97C(v15);
              v14->fields.type = self->m_Items[v12 + 1];
              v18 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v16, v17);
              System_Func_int__bool____ctor(
                v18,
                (Il2CppObject *)v14,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
              ++v12;
              v13 += BasicHelper__Any_int__24145568(
                       target,
                       (System_Func_T__bool__o *)v18,
                       (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
            }
            while ( (__int64)v12 < (int)self->max_length );
            v10 = *(_QWORD *)&target->max_length;
          }
          return v13 >= (int)v10;
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
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  int32_t v17; // w1
  const MethodInfo_2FAFF00 *v18; // x2
  System_Collections_Generic_List_int__o *v19; // x0
  System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0

  if ( (byte_4215CC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, unsignedArray);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4215CC8 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    unsignedArray,
                                                    signedArray);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v11, v12);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseArray )
    goto LABEL_16;
  v15 = *(_QWORD *)&baseArray->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
      {
        v34 = sub_B0D9A8(v14);
        sub_B0D948(v34, 0LL);
      }
      v17 = baseArray->m_Items[v16 + 1];
      if ( v17 < 1 )
      {
        if ( !v13 )
          goto LABEL_16;
        v18 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v17 = -v17;
        v19 = v13;
      }
      else
      {
        if ( !v10 )
          goto LABEL_16;
        v18 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v19 = v10;
      }
      System_Collections_Generic_List_int___Add(v19, v17, v18);
      LODWORD(v15) = baseArray->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)v15 );
  }
  if ( !v10
    || (v20 = System_Collections_Generic_List_int___ToArray(
                v10,
                (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v20,
        sub_B0D840(
          (BattleServantConfConponent_o *)unsignedArray,
          (System_Int32_array **)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        !v13) )
  {
LABEL_16:
    sub_B0D97C(v14);
  }
  v27 = System_Collections_Generic_List_int___ToArray(
          v13,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v27;
  sub_B0D840((BattleServantConfConponent_o *)signedArray, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
}


System_Int32_array *__fastcall Individuality__GetMatchedCountArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  __int64 v5; // x21
  unsigned __int64 v6; // x8
  il2cpp_array_size_t max_length; // w12
  int32_t v8; // w12
  unsigned __int64 v9; // x13
  __int64 v10; // x0

  v4 = selfs;
  if ( (byte_4215CCC & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_B0D8A4(&int___TypeInfo, targets);
    byte_4215CCC = 1;
  }
  if ( !targets
    || (v5 = *(_QWORD *)&targets->max_length,
        selfs = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v5),
        !v4) )
  {
LABEL_19:
    sub_B0D97C(selfs);
  }
  if ( (int)*(_QWORD *)&v4->max_length >= 1 )
  {
    v6 = 0LL;
    max_length = *(_QWORD *)&v4->max_length;
    while ( 1 )
    {
      if ( v6 >= max_length )
        goto LABEL_18;
      if ( (int)v5 >= 1 )
        break;
LABEL_16:
      max_length = v4->max_length;
      if ( (__int64)++v6 >= (int)max_length )
        return selfs;
    }
    v8 = v4->m_Items[v6 + 1];
    v9 = 0LL;
    while ( v9 < targets->max_length )
    {
      if ( v8 == targets->m_Items[v9 + 1] )
      {
        if ( !selfs )
          goto LABEL_19;
        if ( v9 >= selfs->max_length )
          break;
        ++selfs->m_Items[v9 + 1];
      }
      if ( (__int64)++v9 >= (int)v5 )
        goto LABEL_16;
    }
LABEL_18:
    v10 = sub_B0D9A8(selfs);
    sub_B0D948(v10, 0LL);
  }
  return selfs;
}


bool __fastcall Individuality__IsMatchAboveBelow(int32_t count, int32_t above, int32_t below, const MethodInfo *method)
{
  if ( above >= 1 )
    return (below < 1 || count <= below) && count >= above;
  return below >= 1 && count <= below;
}


bool __fastcall Individuality__IsMatchArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool result; // w0
  unsigned __int64 v10; // x23
  Individuality___c__DisplayClass9_0_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_int__bool__o *v15; // x22
  __int64 v16; // x0

  if ( (byte_4215CCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, targets);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__, v7);
    sub_B0D8A4(&Individuality___c__DisplayClass9_0_TypeInfo, v8);
    byte_4215CCB = 1;
  }
  result = 0;
  if ( selfs && targets )
  {
    if ( (int)targets->max_length < 1 )
    {
      return 1;
    }
    else
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (Individuality___c__DisplayClass9_0_o *)sub_B0D974(
                                                        Individuality___c__DisplayClass9_0_TypeInfo,
                                                        targets,
                                                        method);
        Individuality___c__DisplayClass9_0___ctor(v11, 0LL);
        if ( v10 >= targets->max_length )
        {
          v16 = sub_B0D9A8(v12);
          sub_B0D948(v16, 0LL);
        }
        if ( !v11 )
          sub_B0D97C(v12);
        v11->fields.target = targets->m_Items[v10 + 1];
        v15 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v13, v14);
        System_Func_int__bool____ctor(
          v15,
          (Il2CppObject *)v11,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        if ( !BasicHelper__Any_int__24145568(
                selfs,
                (System_Func_T__bool__o *)v15,
                (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
          break;
        if ( (__int64)++v10 >= (int)targets->max_length )
          return 1;
      }
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality__IsMatchArrayCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x8
  unsigned __int64 max_length; // x8
  unsigned __int64 v9; // x9
  int32_t *v10; // x11
  int32_t v11; // w12
  __int64 v12; // x0

  v5 = selfs;
  LOBYTE(selfs) = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      LOBYTE(selfs) = 1;
      if ( v5 )
      {
        if ( *(_QWORD *)&targets->max_length )
        {
          if ( *(_QWORD *)&v5->max_length )
          {
            selfs = Individuality__GetMatchedCountArray(v5, targets, *(const MethodInfo **)&countAbove);
            if ( !selfs )
              sub_B0D97C(0LL);
            max_length = selfs->max_length;
            if ( (__int64)(max_length << 32) >= 1 )
            {
              v9 = 0LL;
              v10 = &selfs->m_Items[1];
              do
              {
                if ( v9 >= max_length )
                {
                  v12 = sub_B0D9A8(selfs);
                  sub_B0D948(v12, 0LL);
                }
                v11 = v10[v9];
                if ( countAbove < 1 )
                {
                  selfs = 0LL;
                  if ( countBelow < 1 || v11 > countBelow )
                    return (char)selfs;
                }
                else if ( countBelow < 1 )
                {
                  if ( v11 < countAbove )
                    goto LABEL_21;
                }
                else
                {
                  selfs = 0LL;
                  if ( v11 > countBelow || v11 < countAbove )
                    return (char)selfs;
                }
                ++v9;
              }
              while ( (__int64)v9 < (int)max_length );
            }
            LOBYTE(selfs) = 1;
          }
          else
          {
LABEL_21:
            LOBYTE(selfs) = 0;
          }
        }
      }
    }
  }
  return (char)selfs;
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
  __int64 v10; // x0

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
        {
LABEL_16:
          v10 = sub_B0D9A8(selfs);
          sub_B0D948(v10, 0LL);
        }
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Individuality___c__DisplayClass13_0_o *v13; // x22
  __int64 v14; // x0
  const MethodInfo *v15; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_int__bool__o *v20; // x20

  if ( (byte_4215CCD & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, targets);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__, v11);
    sub_B0D8A4(&Individuality___c__DisplayClass13_0_TypeInfo, v12);
    byte_4215CCD = 1;
  }
  v13 = (Individuality___c__DisplayClass13_0_o *)sub_B0D974(
                                                   Individuality___c__DisplayClass13_0_TypeInfo,
                                                   targets,
                                                   *(_QWORD *)&countAbove);
  Individuality___c__DisplayClass13_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B0D97C(v14);
  result = 1;
  v13->fields.countAbove = countAbove;
  v13->fields.countBelow = countBelow;
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
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v15);
            v20 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v18, v19);
            System_Func_int__bool____ctor(
              v20,
              (Il2CppObject *)v13,
              Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
              (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
            return BasicHelper__Any_int__24145568(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v20,
                     (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
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
        const MethodInfo *method)
{
  bool v5; // w19
  bool IsNullOrEmpty; // w0

  v5 = 1;
  *result = 1;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targets, 0LL);
  if ( selfs && !IsNullOrEmpty )
  {
    if ( *(_QWORD *)&selfs->max_length )
    {
      return 0;
    }
    else
    {
      v5 = 1;
      *result = 0;
    }
  }
  return v5;
}


bool __fastcall Individuality__IsPreIndividualitiesCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        bool *ret,
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
          if ( *(_QWORD *)&selfs->max_length )
          {
            return 0;
          }
          else
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


void __fastcall Individuality___c__DisplayClass13_0___ctor(
        Individuality___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass13_0___IsPartialMatchArrayCount_b__0(
        Individuality___c__DisplayClass13_0_o *this,
        int32_t count,
        const MethodInfo *method)
{
  return Individuality__IsMatchAboveBelow(count, this->fields.countAbove, this->fields.countBelow, 0LL);
}


void __fastcall Individuality___c__DisplayClass18_0___ctor(
        Individuality___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass18_0___CheckSignedMultiIndividuality_b__0(
        Individuality___c__DisplayClass18_0_o *this,
        System_Int32_array *signedTargets,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Func_T1__T2__TResult__o *v11; // x22

  if ( (byte_4210F7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_int____int____bool___ctor__, signedTargets);
    sub_B0D8A4(&System_Func_int____int____bool__TypeInfo, v5);
    sub_B0D8A4(&Method_Individuality_IsMatchArray__, v6);
    byte_4210F7A = 1;
  }
  selfArray = this->fields.selfArray;
  v8 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, signedTargets, method);
  System_Func_object__object__bool____ctor(
    v8,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
  v11 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v9, v10);
  System_Func_object__object__bool____ctor(
    v11,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualities_26826816(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v8,
           (System_Func_int____int____bool__o *)v11,
           0LL);
}


void __fastcall Individuality___c__DisplayClass6_0___ctor(
        Individuality___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass6_0___ContainsIndividualities_b__0(
        Individuality___c__DisplayClass6_0_o *this,
        int32_t tg,
        const MethodInfo *method)
{
  return this->fields.type == tg;
}


void __fastcall Individuality___c__DisplayClass7_0___ctor(
        Individuality___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass7_0___CheckAllIndividualities_b__0(
        Individuality___c__DisplayClass7_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct System_Int32_array *target; // x8
  __int64 i; // x9
  __int64 v6; // x0

  target = this->fields.target;
  if ( !target )
    sub_B0D97C(this);
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  return target->m_Items[i + 1] == sf;
}


void __fastcall Individuality___c__DisplayClass9_0___ctor(
        Individuality___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass9_0___IsMatchArray_b__0(
        Individuality___c__DisplayClass9_0_o *this,
        int32_t self,
        const MethodInfo *method)
{
  return this->fields.target == self;
}