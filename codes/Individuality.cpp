bool __fastcall Individuality__CheckAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x8
  bool result; // w0
  int v16; // w9
  System_Func_int__bool__o **v17; // x21
  System_Func_int__bool__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_438C93D & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__);
    sub_B775C4(&Individuality___c__DisplayClass7_0_TypeInfo);
    byte_438C93D = 1;
  }
  v5 = sub_B77694(Individuality___c__DisplayClass7_0_TypeInfo);
  Individuality___c__DisplayClass7_0___ctor((Individuality___c__DisplayClass7_0_o *)v5, 0LL);
  if ( !v5 )
LABEL_14:
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = target;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)target, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( !v14 )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)(v14 + 24) )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      *(_DWORD *)(v5 + 24) = 0;
      v16 = 0;
      v17 = (System_Func_int__bool__o **)(v5 + 32);
      while ( v16 < *(_DWORD *)(v14 + 24) )
      {
        v18 = *v17;
        if ( !*v17 )
        {
          v18 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v18,
            (Il2CppObject *)v5,
            Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__,
            (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
          *(_QWORD *)(v5 + 32) = v18;
          sub_B77560(
            (BattleServantConfConponent_o *)(v5 + 32),
            (System_Int32_array **)v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
        v6 = BasicHelper__Any_int__29777580(
               self,
               (System_Func_T__bool__o *)v18,
               (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
        if ( !v6 )
          return 0;
        v14 = *(_QWORD *)(v5 + 16);
        v16 = *(_DWORD *)(v5 + 24) + 1;
        *(_DWORD *)(v5 + 24) = v16;
        if ( !v14 )
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


bool __fastcall Individuality__CheckIndividualities_28147848(
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
        sub_B7769C(IsPartialMatchArray, v8);
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

  if ( (byte_438C941 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_int____int____int__int__bool__Invoke__);
    byte_438C941 = 1;
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
                      (const MethodInfo_29F8F10 *)Method_System_Func_int____int____int__int__bool__Invoke__);
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
                         (const MethodInfo_29F8F10 *)Method_System_Func_int____int____int__int__bool__Invoke__);
                return (v17 & v16) != 0;
              }
            }
          }
LABEL_21:
          sub_B7769C(v14, v15);
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

  if ( (byte_438C942 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_int____int____bool__Invoke__);
    byte_438C942 = 1;
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
              (const MethodInfo_29F448C *)Method_System_Func_int____int____bool__Invoke__);
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
                (const MethodInfo_29F448C *)Method_System_Func_int____int____bool__Invoke__);
LABEL_17:
    sub_B7769C(v12, v13);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualities_28147436(
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

  if ( (byte_438C93A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_int____int____bool__Invoke__);
    byte_438C93A = 1;
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
                (const MethodInfo_29F448C *)Method_System_Func_int____int____bool__Invoke__);
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
                   (const MethodInfo_29F448C *)Method_System_Func_int____int____bool__Invoke__);
          return (v13 & v12) != 0;
        }
      }
    }
LABEL_20:
    sub_B7769C(v10, v11);
  }
  return result;
}


bool __fastcall Individuality__CheckSignedMultiIndividuality(
        System_Int32_array *selfArray,
        System_Int32_array_array *signedTargetsArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_438C943 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int______69468128);
    sub_B775C4(&Method_System_Func_int____bool___ctor__);
    sub_B775C4(&System_Func_int____bool__TypeInfo);
    sub_B775C4(&Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__);
    sub_B775C4(&Individuality___c__DisplayClass18_0_TypeInfo);
    byte_438C943 = 1;
  }
  v5 = sub_B77694(Individuality___c__DisplayClass18_0_TypeInfo);
  Individuality___c__DisplayClass18_0___ctor((Individuality___c__DisplayClass18_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = selfArray;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)selfArray, v8, v9, v10, v11, v12, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_int____bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_int____bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_int______69468128);
}


bool __fastcall Individuality__ContainsIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  bool result; // w0
  __int64 v6; // x8
  __int64 v7; // x9
  unsigned __int64 v8; // x24
  int v9; // w23
  Individuality___c__DisplayClass6_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_int__bool__o *v13; // x22
  __int64 v14; // x0

  if ( (byte_438C93C & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__);
    sub_B775C4(&Individuality___c__DisplayClass6_0_TypeInfo);
    byte_438C93C = 1;
  }
  result = 1;
  if ( target )
  {
    if ( self )
    {
      v6 = *(_QWORD *)&target->max_length;
      if ( v6 )
      {
        v7 = *(_QWORD *)&self->max_length;
        if ( v7 )
        {
          if ( (int)v7 < 1 )
          {
            v9 = 0;
          }
          else
          {
            v8 = 0LL;
            v9 = 0;
            do
            {
              v10 = (Individuality___c__DisplayClass6_0_o *)sub_B77694(Individuality___c__DisplayClass6_0_TypeInfo);
              Individuality___c__DisplayClass6_0___ctor(v10, 0LL);
              if ( v8 >= self->max_length )
              {
                v14 = sub_B776C8(v11);
                sub_B77668(v14, 0LL);
              }
              if ( !v10 )
                sub_B7769C(v11, v12);
              v10->fields.type = self->m_Items[v8 + 1];
              v13 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v13,
                (Il2CppObject *)v10,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
              ++v8;
              v9 += BasicHelper__Any_int__29777580(
                      target,
                      (System_Func_T__bool__o *)v13,
                      (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
            }
            while ( (__int64)v8 < (int)self->max_length );
            v6 = *(_QWORD *)&target->max_length;
          }
          return v9 >= (int)v6;
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
  System_Collections_Generic_List_int__o *v7; // x23
  System_Collections_Generic_List_int__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x24
  const MethodInfo_30E5DE8 *v13; // x2
  System_Collections_Generic_List_int__o *v14; // x0
  System_Int32_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x0

  if ( (byte_438C93B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438C93B = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v8 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( !baseArray )
    goto LABEL_16;
  v11 = *(_QWORD *)&baseArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v29 = sub_B776C8(v9);
        sub_B77668(v29, 0LL);
      }
      v10 = (unsigned int)baseArray->m_Items[v12 + 1];
      if ( (int)v10 < 1 )
      {
        if ( !v8 )
          goto LABEL_16;
        v13 = (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__;
        LODWORD(v10) = -(int)v10;
        v14 = v8;
      }
      else
      {
        if ( !v7 )
          goto LABEL_16;
        v13 = (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__;
        v14 = v7;
      }
      System_Collections_Generic_List_int___Add(v14, v10, v13);
      LODWORD(v11) = baseArray->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v11 );
  }
  if ( !v7
    || (v15 = System_Collections_Generic_List_int___ToArray(
                v7,
                (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v15,
        sub_B77560(
          (BattleServantConfConponent_o *)unsignedArray,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        !v8) )
  {
LABEL_16:
    sub_B7769C(v9, v10);
  }
  v22 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v22;
  sub_B77560((BattleServantConfConponent_o *)signedArray, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
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
  if ( (byte_438C93F & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_B775C4(&int___TypeInfo);
    byte_438C93F = 1;
  }
  if ( !targets
    || (v5 = *(_QWORD *)&targets->max_length,
        selfs = (System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)v5),
        !v4) )
  {
LABEL_19:
    sub_B7769C(selfs, targets);
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
    v10 = sub_B776C8(selfs);
    sub_B77668(v10, 0LL);
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
  bool result; // w0
  unsigned __int64 v6; // x23
  Individuality___c__DisplayClass9_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Func_int__bool__o *v10; // x22
  __int64 v11; // x0

  if ( (byte_438C93E & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__);
    sub_B775C4(&Individuality___c__DisplayClass9_0_TypeInfo);
    byte_438C93E = 1;
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
      v6 = 0LL;
      while ( 1 )
      {
        v7 = (Individuality___c__DisplayClass9_0_o *)sub_B77694(Individuality___c__DisplayClass9_0_TypeInfo);
        Individuality___c__DisplayClass9_0___ctor(v7, 0LL);
        if ( v6 >= targets->max_length )
        {
          v11 = sub_B776C8(v8);
          sub_B77668(v11, 0LL);
        }
        if ( !v7 )
          sub_B7769C(v8, v9);
        v7->fields.target = targets->m_Items[v6 + 1];
        v10 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v10,
          (Il2CppObject *)v7,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
        if ( !BasicHelper__Any_int__29777580(
                selfs,
                (System_Func_T__bool__o *)v10,
                (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304) )
          break;
        if ( (__int64)++v6 >= (int)targets->max_length )
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
              sub_B7769C(0LL, v8);
            max_length = selfs->max_length;
            if ( (__int64)(max_length << 32) >= 1 )
            {
              v10 = 0LL;
              v11 = &selfs->m_Items[1];
              do
              {
                if ( v10 >= max_length )
                {
                  v13 = sub_B776C8(selfs);
                  sub_B77668(v13, 0LL);
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
          v10 = sub_B776C8(selfs);
          sub_B77668(v10, 0LL);
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
  Individuality___c__DisplayClass13_0_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_438C940 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__);
    sub_B775C4(&Individuality___c__DisplayClass13_0_TypeInfo);
    byte_438C940 = 1;
  }
  v9 = (Individuality___c__DisplayClass13_0_o *)sub_B77694(Individuality___c__DisplayClass13_0_TypeInfo);
  Individuality___c__DisplayClass13_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  result = 1;
  v9->fields.countAbove = countAbove;
  v9->fields.countBelow = countBelow;
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
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v12);
            v15 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v15,
              (Il2CppObject *)v9,
              Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
              (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
            return BasicHelper__Any_int__29777580(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v15,
                     (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
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
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v6; // x21
  System_Func_T1__T2__TResult__o *v7; // x22

  if ( (byte_4388932 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_int____int____bool___ctor__);
    sub_B775C4(&System_Func_int____int____bool__TypeInfo);
    sub_B775C4(&Method_Individuality_IsMatchArray__);
    byte_4388932 = 1;
  }
  selfArray = this->fields.selfArray;
  v6 = (System_Func_T1__T2__TResult__o *)sub_B77694(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v6,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_29F4478 *)Method_System_Func_int____int____bool___ctor__);
  v7 = (System_Func_T1__T2__TResult__o *)sub_B77694(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v7,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_29F4478 *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualities_28147436(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v6,
           (System_Func_int____int____bool__o *)v7,
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
    sub_B7769C(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
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