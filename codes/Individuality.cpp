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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x8
  bool result; // w0
  int v20; // w9
  System_Func_int__bool__o **v21; // x21
  System_Func_int__bool__o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4188F6D & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, target);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__, v7);
    sub_B2C35C(&Individuality___c__DisplayClass7_0_TypeInfo, v8);
    byte_4188F6D = 1;
  }
  v9 = sub_B2C42C(Individuality___c__DisplayClass7_0_TypeInfo);
  Individuality___c__DisplayClass7_0___ctor((Individuality___c__DisplayClass7_0_o *)v9, 0LL);
  if ( !v9 )
LABEL_14:
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = target;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)target, v12, v13, v14, v15, v16, v17);
  v18 = *(_QWORD *)(v9 + 16);
  if ( !v18 )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)(v18 + 24) )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      *(_DWORD *)(v9 + 24) = 0;
      v20 = 0;
      v21 = (System_Func_int__bool__o **)(v9 + 32);
      while ( v20 < *(_DWORD *)(v18 + 24) )
      {
        v22 = *v21;
        if ( !*v21 )
        {
          v22 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v22,
            (Il2CppObject *)v9,
            Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__,
            (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
          *(_QWORD *)(v9 + 32) = v22;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v9 + 32),
            (System_Int32_array **)v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
        }
        v10 = BasicHelper__Any_int__24273940(
                self,
                (System_Func_T__bool__o *)v22,
                (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
        if ( !v10 )
          return 0;
        v18 = *(_QWORD *)(v9 + 16);
        v20 = *(_DWORD *)(v9 + 24) + 1;
        *(_DWORD *)(v9 + 24) = v20;
        if ( !v18 )
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


bool __fastcall Individuality__CheckIndividualities_27368108(
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
        sub_B2C434(IsPartialMatchArray, v8);
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

  if ( (byte_4188F71 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_int____int____int__int__bool__Invoke__, targets);
    byte_4188F71 = 1;
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
                      (const MethodInfo_2720C68 *)Method_System_Func_int____int____int__int__bool__Invoke__);
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
                         (const MethodInfo_2720C68 *)Method_System_Func_int____int____int__int__bool__Invoke__);
                return (v17 & v16) != 0;
              }
            }
          }
LABEL_21:
          sub_B2C434(v14, v15);
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

  if ( (byte_4188F72 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_int____int____bool__Invoke__, signedTargets);
    byte_4188F72 = 1;
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
              (const MethodInfo_271C504 *)Method_System_Func_int____int____bool__Invoke__);
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
                (const MethodInfo_271C504 *)Method_System_Func_int____int____bool__Invoke__);
LABEL_17:
    sub_B2C434(v12, v13);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualities_27367696(
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

  if ( (byte_4188F6A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_int____int____bool__Invoke__, signedTarget);
    byte_4188F6A = 1;
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
                (const MethodInfo_271C504 *)Method_System_Func_int____int____bool__Invoke__);
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
                   (const MethodInfo_271C504 *)Method_System_Func_int____int____bool__Invoke__);
          return (v13 & v12) != 0;
        }
      }
    }
LABEL_20:
    sub_B2C434(v10, v11);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20

  if ( (byte_4188F73 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int______67380328, signedTargetsArray);
    sub_B2C35C(&Method_System_Func_int____bool___ctor__, v5);
    sub_B2C35C(&System_Func_int____bool__TypeInfo, v6);
    sub_B2C35C(&Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__, v7);
    sub_B2C35C(&Individuality___c__DisplayClass18_0_TypeInfo, v8);
    byte_4188F73 = 1;
  }
  v9 = sub_B2C42C(Individuality___c__DisplayClass18_0_TypeInfo);
  Individuality___c__DisplayClass18_0___ctor((Individuality___c__DisplayClass18_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = selfArray;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)selfArray, v12, v13, v14, v15, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_int____bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_int____bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v19,
           (const MethodInfo_1726758 *)Method_BasicHelper_Any_int______67380328);
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
  System_Func_int__bool__o *v17; // x22
  __int64 v18; // x0

  if ( (byte_4188F6C & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, target);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__, v7);
    sub_B2C35C(&Individuality___c__DisplayClass6_0_TypeInfo, v8);
    byte_4188F6C = 1;
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
              v14 = (Individuality___c__DisplayClass6_0_o *)sub_B2C42C(Individuality___c__DisplayClass6_0_TypeInfo);
              Individuality___c__DisplayClass6_0___ctor(v14, 0LL);
              if ( v12 >= self->max_length )
              {
                v18 = sub_B2C460(v15);
                sub_B2C400(v18, 0LL);
              }
              if ( !v14 )
                sub_B2C434(v15, v16);
              v14->fields.type = self->m_Items[v12 + 1];
              v17 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v17,
                (Il2CppObject *)v14,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
              ++v12;
              v13 += BasicHelper__Any_int__24273940(
                       target,
                       (System_Func_T__bool__o *)v17,
                       (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
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
  System_Collections_Generic_List_int__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  const MethodInfo_2F66FF8 *v16; // x2
  System_Collections_Generic_List_int__o *v17; // x0
  System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0

  if ( (byte_4188F6B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, unsignedArray);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4188F6B = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseArray )
    goto LABEL_16;
  v14 = *(_QWORD *)&baseArray->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
        v32 = sub_B2C460(v12);
        sub_B2C400(v32, 0LL);
      }
      v13 = (unsigned int)baseArray->m_Items[v15 + 1];
      if ( (int)v13 < 1 )
      {
        if ( !v11 )
          goto LABEL_16;
        v16 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        LODWORD(v13) = -(int)v13;
        v17 = v11;
      }
      else
      {
        if ( !v10 )
          goto LABEL_16;
        v16 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v17 = v10;
      }
      System_Collections_Generic_List_int___Add(v17, v13, v16);
      LODWORD(v14) = baseArray->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
  if ( !v10
    || (v18 = System_Collections_Generic_List_int___ToArray(
                v10,
                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v18,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)unsignedArray,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        !v11) )
  {
LABEL_16:
    sub_B2C434(v12, v13);
  }
  v25 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v25;
  sub_B2C2F8((BattleServantConfConponent_o *)signedArray, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
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
  if ( (byte_4188F6F & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_B2C35C(&int___TypeInfo, targets);
    byte_4188F6F = 1;
  }
  if ( !targets
    || (v5 = *(_QWORD *)&targets->max_length,
        selfs = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v5),
        !v4) )
  {
LABEL_19:
    sub_B2C434(selfs, targets);
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
    v10 = sub_B2C460(selfs);
    sub_B2C400(v10, 0LL);
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
  System_Func_int__bool__o *v14; // x22
  __int64 v15; // x0

  if ( (byte_4188F6E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, targets);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__, v7);
    sub_B2C35C(&Individuality___c__DisplayClass9_0_TypeInfo, v8);
    byte_4188F6E = 1;
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
        v11 = (Individuality___c__DisplayClass9_0_o *)sub_B2C42C(Individuality___c__DisplayClass9_0_TypeInfo);
        Individuality___c__DisplayClass9_0___ctor(v11, 0LL);
        if ( v10 >= targets->max_length )
        {
          v15 = sub_B2C460(v12);
          sub_B2C400(v15, 0LL);
        }
        if ( !v11 )
          sub_B2C434(v12, v13);
        v11->fields.target = targets->m_Items[v10 + 1];
        v14 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v14,
          (Il2CppObject *)v11,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        if ( !BasicHelper__Any_int__24273940(
                selfs,
                (System_Func_T__bool__o *)v14,
                (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496) )
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
              sub_B2C434(0LL, v8);
            max_length = selfs->max_length;
            if ( (__int64)(max_length << 32) >= 1 )
            {
              v10 = 0LL;
              v11 = &selfs->m_Items[1];
              do
              {
                if ( v10 >= max_length )
                {
                  v13 = sub_B2C460(selfs);
                  sub_B2C400(v13, 0LL);
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
          v10 = sub_B2C460(selfs);
          sub_B2C400(v10, 0LL);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  System_Func_int__bool__o *v19; // x20

  if ( (byte_4188F70 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, targets);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v9);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v10);
    sub_B2C35C(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__, v11);
    sub_B2C35C(&Individuality___c__DisplayClass13_0_TypeInfo, v12);
    byte_4188F70 = 1;
  }
  v13 = (Individuality___c__DisplayClass13_0_o *)sub_B2C42C(Individuality___c__DisplayClass13_0_TypeInfo);
  Individuality___c__DisplayClass13_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
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
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v16);
            v19 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v19,
              (Il2CppObject *)v13,
              Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
              (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
            return BasicHelper__Any_int__24273940(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v19,
                     (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
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
  System_Func_T1__T2__TResult__o *v9; // x22

  if ( (byte_41841F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_int____int____bool___ctor__, signedTargets);
    sub_B2C35C(&System_Func_int____int____bool__TypeInfo, v5);
    sub_B2C35C(&Method_Individuality_IsMatchArray__, v6);
    byte_41841F9 = 1;
  }
  selfArray = this->fields.selfArray;
  v8 = (System_Func_T1__T2__TResult__o *)sub_B2C42C(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v8,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_271C4F0 *)Method_System_Func_int____int____bool___ctor__);
  v9 = (System_Func_T1__T2__TResult__o *)sub_B2C42C(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v9,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_271C4F0 *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualities_27367696(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v8,
           (System_Func_int____int____bool__o *)v9,
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
    sub_B2C434(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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