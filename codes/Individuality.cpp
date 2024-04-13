bool __fastcall Individuality__CheckAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  bool result; // w0
  int v29; // w9
  System_Func_int__bool__o **v30; // x21
  System_Func_int__bool__o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42EA4BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)target, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__, v12, v13, v14);
    sub_B5D5C4(&Individuality___c__DisplayClass7_0_TypeInfo, v15, v16, v17);
    byte_42EA4BF = 1;
  }
  v18 = sub_B5D694(Individuality___c__DisplayClass7_0_TypeInfo);
  Individuality___c__DisplayClass7_0___ctor((Individuality___c__DisplayClass7_0_o *)v18, 0LL);
  if ( !v18 )
LABEL_14:
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = target;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)target, v21, v22, v23, v24, v25, v26);
  v27 = *(_QWORD *)(v18 + 16);
  if ( !v27 )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)(v27 + 24) )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      *(_DWORD *)(v18 + 24) = 0;
      v29 = 0;
      v30 = (System_Func_int__bool__o **)(v18 + 32);
      while ( v29 < *(_DWORD *)(v27 + 24) )
      {
        v31 = *v30;
        if ( !*v30 )
        {
          v31 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v31,
            (Il2CppObject *)v18,
            Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__,
            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
          *(_QWORD *)(v18 + 32) = v31;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v18 + 32),
            (System_Int32_array **)v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
        }
        v19 = BasicHelper__Any_int__28142236(
                self,
                (System_Func_T__bool__o *)v31,
                (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
        if ( !v19 )
          return 0;
        v27 = *(_QWORD *)(v18 + 16);
        v29 = *(_DWORD *)(v18 + 24) + 1;
        *(_DWORD *)(v18 + 24) = v29;
        if ( !v27 )
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


bool __fastcall Individuality__CheckIndividualities_28468984(
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
  System_Int32_array *v8; // x1
  int v9; // w20
  _BOOL4 v10; // w8
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
      v8 = unsignedArray;
      if ( !unsignedArray
        || (!*(_QWORD *)&unsignedArray->max_length
          ? (v9 = 1)
          : (IsPartialMatchArray = Individuality__IsPartialMatchArray(self, unsignedArray, v7), v9 = IsPartialMatchArray),
            (v8 = targets) == 0LL) )
      {
        sub_B5D69C(IsPartialMatchArray, v8);
      }
      if ( *(_QWORD *)&targets->max_length )
        v10 = !Individuality__IsPartialMatchArray(self, targets, v7);
      else
        v10 = 1;
      return (v10 & v9) != 0;
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
  __int64 v15; // x1
  int v16; // w23
  _BOOL4 v17; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42EA4C3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Func_int____int____int__int__bool__Invoke__,
      (_DWORD)targets,
      (_DWORD)matchedFunc,
      mismatchFunc);
    byte_42EA4C3 = 1;
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
                      (const MethodInfo_2C3E054 *)Method_System_Func_int____int____int__int__bool__Invoke__);
              v16 = v14;
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
                v17 = !System_Func_object__object__int__int__bool___Invoke(
                         (System_Func_T1__T2__T3__T4__TResult__o *)mismatchFunc,
                         &selfs->obj,
                         &signedArray->obj,
                         countAbove,
                         countBelow,
                         (const MethodInfo_2C3E054 *)Method_System_Func_int____int____int__int__bool__Invoke__);
                return (v17 & v16) != 0;
              }
            }
          }
LABEL_21:
          sub_B5D69C(v14, v15);
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
  __int64 v13; // x1
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EA4C4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Func_int____int____bool__Invoke__,
      (_DWORD)signedTargets,
      (_DWORD)matchedFunc,
      mismatchFunc);
    byte_42EA4C4 = 1;
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
              (const MethodInfo_2C395D0 *)Method_System_Func_int____int____bool__Invoke__);
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
                (const MethodInfo_2C395D0 *)Method_System_Func_int____int____bool__Invoke__);
LABEL_17:
    sub_B5D69C(v12, v13);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualities_28468572(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        const MethodInfo *method)
{
  bool result; // w0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int v12; // w21
  _BOOL4 v13; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EA4BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Func_int____int____bool__Invoke__,
      (_DWORD)signedTarget,
      (_DWORD)matchedFunc,
      mismatchFunc);
    byte_42EA4BC = 1;
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
                (const MethodInfo_2C395D0 *)Method_System_Func_int____int____bool__Invoke__);
        v12 = v10;
      }
      else
      {
        v12 = 1;
      }
      if ( signedArray )
      {
        if ( !*(_QWORD *)&signedArray->max_length )
        {
          v13 = 1;
          return (v13 & v12) != 0;
        }
        if ( mismatchFunc )
        {
          v13 = !System_Func_object__object__bool___Invoke(
                   (System_Func_T1__T2__TResult__o *)mismatchFunc,
                   &self->obj,
                   &signedArray->obj,
                   (const MethodInfo_2C395D0 *)Method_System_Func_int____int____bool__Invoke__);
          return (v13 & v12) != 0;
        }
      }
    }
LABEL_20:
    sub_B5D69C(v10, v11);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedMultiIndividuality(
        System_Int32_array *selfArray,
        System_Int32_array_array *signedTargetsArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20

  if ( (byte_42EA4C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int______68810208, (_DWORD)signedTargetsArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int____bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int____bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__, v12, v13, v14);
    sub_B5D5C4(&Individuality___c__DisplayClass18_0_TypeInfo, v15, v16, v17);
    byte_42EA4C5 = 1;
  }
  v18 = sub_B5D694(Individuality___c__DisplayClass18_0_TypeInfo);
  Individuality___c__DisplayClass18_0___ctor((Individuality___c__DisplayClass18_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = selfArray;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)selfArray, v21, v22, v23, v24, v25, v26);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_int____bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v18,
    Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_int____bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v28,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_int______68810208);
}


bool __fastcall Individuality__ContainsIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  bool result; // w0
  __int64 v19; // x8
  __int64 v20; // x9
  unsigned __int64 v21; // x24
  int v22; // w23
  Individuality___c__DisplayClass6_0_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_Func_int__bool__o *v26; // x22
  __int64 v27; // x0

  if ( (byte_42EA4BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)target, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__, v12, v13, v14);
    sub_B5D5C4(&Individuality___c__DisplayClass6_0_TypeInfo, v15, v16, v17);
    byte_42EA4BE = 1;
  }
  result = 1;
  if ( target )
  {
    if ( self )
    {
      v19 = *(_QWORD *)&target->max_length;
      if ( v19 )
      {
        v20 = *(_QWORD *)&self->max_length;
        if ( v20 )
        {
          if ( (int)v20 < 1 )
          {
            v22 = 0;
          }
          else
          {
            v21 = 0LL;
            v22 = 0;
            do
            {
              v23 = (Individuality___c__DisplayClass6_0_o *)sub_B5D694(Individuality___c__DisplayClass6_0_TypeInfo);
              Individuality___c__DisplayClass6_0___ctor(v23, 0LL);
              if ( v21 >= self->max_length )
              {
                v27 = sub_B5D6C8(v24);
                sub_B5D668(v27, 0LL);
              }
              if ( !v23 )
                sub_B5D69C(v24, v25);
              v23->fields.type = self->m_Items[v21 + 1];
              v26 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v26,
                (Il2CppObject *)v23,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
              ++v21;
              v22 += BasicHelper__Any_int__28142236(
                       target,
                       (System_Func_T__bool__o *)v26,
                       (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
            }
            while ( (__int64)v21 < (int)self->max_length );
            v19 = *(_QWORD *)&target->max_length;
          }
          return v22 >= (int)v19;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_int__o *v16; // x23
  System_Collections_Generic_List_int__o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  const MethodInfo_308440C *v22; // x2
  System_Collections_Generic_List_int__o *v23; // x0
  System_Int32_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0

  if ( (byte_42EA4BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)unsignedArray, (_DWORD)signedArray, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v13, v14, v15);
    byte_42EA4BD = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !baseArray )
    goto LABEL_16;
  v20 = *(_QWORD *)&baseArray->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v20 )
      {
        v38 = sub_B5D6C8(v18);
        sub_B5D668(v38, 0LL);
      }
      v19 = (unsigned int)baseArray->m_Items[v21 + 1];
      if ( (int)v19 < 1 )
      {
        if ( !v17 )
          goto LABEL_16;
        v22 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        LODWORD(v19) = -(int)v19;
        v23 = v17;
      }
      else
      {
        if ( !v16 )
          goto LABEL_16;
        v22 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v23 = v16;
      }
      System_Collections_Generic_List_int___Add(v23, v19, v22);
      LODWORD(v20) = baseArray->max_length;
      ++v21;
    }
    while ( (__int64)v21 < (int)v20 );
  }
  if ( !v16
    || (v24 = System_Collections_Generic_List_int___ToArray(
                v16,
                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v24,
        sub_B5D560(
          (BattleServantConfConponent_o *)unsignedArray,
          (System_Int32_array **)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        !v17) )
  {
LABEL_16:
    sub_B5D69C(v18, v19);
  }
  v31 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v31;
  sub_B5D560((BattleServantConfConponent_o *)signedArray, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
}


System_Int32_array *__fastcall Individuality__GetMatchedCountArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v5; // x20
  __int64 v6; // x21
  unsigned __int64 v7; // x8
  il2cpp_array_size_t max_length; // w12
  int32_t v9; // w12
  unsigned __int64 v10; // x13
  __int64 v11; // x0

  v5 = selfs;
  if ( (byte_42EA4C1 & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_B5D5C4(&int___TypeInfo, (_DWORD)targets, (_DWORD)method, v3);
    byte_42EA4C1 = 1;
  }
  if ( !targets
    || (v6 = *(_QWORD *)&targets->max_length,
        selfs = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v6),
        !v5) )
  {
LABEL_19:
    sub_B5D69C(selfs, targets);
  }
  if ( (int)*(_QWORD *)&v5->max_length >= 1 )
  {
    v7 = 0LL;
    max_length = *(_QWORD *)&v5->max_length;
    while ( 1 )
    {
      if ( v7 >= max_length )
        goto LABEL_18;
      if ( (int)v6 >= 1 )
        break;
LABEL_16:
      max_length = v5->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        return selfs;
    }
    v9 = v5->m_Items[v7 + 1];
    v10 = 0LL;
    while ( v10 < targets->max_length )
    {
      if ( v9 == targets->m_Items[v10 + 1] )
      {
        if ( !selfs )
          goto LABEL_19;
        if ( v10 >= selfs->max_length )
          break;
        ++selfs->m_Items[v10 + 1];
      }
      if ( (__int64)++v10 >= (int)v6 )
        goto LABEL_16;
    }
LABEL_18:
    v11 = sub_B5D6C8(selfs);
    sub_B5D668(v11, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  bool result; // w0
  unsigned __int64 v19; // x23
  Individuality___c__DisplayClass9_0_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  System_Func_int__bool__o *v23; // x22
  __int64 v24; // x0

  if ( (byte_42EA4C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)targets, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__, v12, v13, v14);
    sub_B5D5C4(&Individuality___c__DisplayClass9_0_TypeInfo, v15, v16, v17);
    byte_42EA4C0 = 1;
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
      v19 = 0LL;
      while ( 1 )
      {
        v20 = (Individuality___c__DisplayClass9_0_o *)sub_B5D694(Individuality___c__DisplayClass9_0_TypeInfo);
        Individuality___c__DisplayClass9_0___ctor(v20, 0LL);
        if ( v19 >= targets->max_length )
        {
          v24 = sub_B5D6C8(v21);
          sub_B5D668(v24, 0LL);
        }
        if ( !v20 )
          sub_B5D69C(v21, v22);
        v20->fields.target = targets->m_Items[v19 + 1];
        v23 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v23,
          (Il2CppObject *)v20,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        if ( !BasicHelper__Any_int__28142236(
                selfs,
                (System_Func_T__bool__o *)v23,
                (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
          break;
        if ( (__int64)++v19 >= (int)targets->max_length )
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
  __int64 v8; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 v10; // x9
  int32_t *v11; // x11
  int32_t v12; // w12
  __int64 v13; // x0

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
              sub_B5D69C(0LL, v8);
            max_length = selfs->max_length;
            if ( (__int64)(max_length << 32) >= 1 )
            {
              v10 = 0LL;
              v11 = &selfs->m_Items[1];
              do
              {
                if ( v10 >= max_length )
                {
                  v13 = sub_B5D6C8(selfs);
                  sub_B5D668(v13, 0LL);
                }
                v12 = v11[v10];
                if ( countAbove < 1 )
                {
                  selfs = 0LL;
                  if ( countBelow < 1 || v12 > countBelow )
                    return (char)selfs;
                }
                else if ( countBelow < 1 )
                {
                  if ( v12 < countAbove )
                    goto LABEL_21;
                }
                else
                {
                  selfs = 0LL;
                  if ( v12 > countBelow || v12 < countAbove )
                    return (char)selfs;
                }
                ++v10;
              }
              while ( (__int64)v10 < (int)max_length );
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
          v10 = sub_B5D6C8(selfs);
          sub_B5D668(v10, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  Individuality___c__DisplayClass13_0_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  System_Func_int__bool__o *v27; // x20

  if ( (byte_42EA4C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)targets, countAbove, *(_QWORD *)&countBelow);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__, v15, v16, v17);
    sub_B5D5C4(&Individuality___c__DisplayClass13_0_TypeInfo, v18, v19, v20);
    byte_42EA4C2 = 1;
  }
  v21 = (Individuality___c__DisplayClass13_0_o *)sub_B5D694(Individuality___c__DisplayClass13_0_TypeInfo);
  Individuality___c__DisplayClass13_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  result = 1;
  v21->fields.countAbove = countAbove;
  v21->fields.countBelow = countBelow;
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
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v24);
            v27 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v27,
              (Il2CppObject *)v21,
              Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
              (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
            return BasicHelper__Any_int__28142236(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v27,
                     (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v13; // x21
  System_Func_T1__T2__TResult__o *v14; // x22

  if ( (byte_42E56FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_int____int____bool___ctor__, (_DWORD)signedTargets, (_DWORD)method, v3);
    sub_B5D5C4(&System_Func_int____int____bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_Individuality_IsMatchArray__, v9, v10, v11);
    byte_42E56FE = 1;
  }
  selfArray = this->fields.selfArray;
  v13 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v13,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
  v14 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v14,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualities_28468572(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v13,
           (System_Func_int____int____bool__o *)v14,
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
    sub_B5D69C(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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