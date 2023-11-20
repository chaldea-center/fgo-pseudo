bool __fastcall Individuality__CheckAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Individuality___c__DisplayClass7_0_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Int32_array *v20; // x8
  bool result; // w0
  int v22; // w9
  System_Func_int__bool__o **p__9__0; // x21
  System_Func_int__bool__o *v24; // x22

  if ( (byte_40FC178 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, target, method);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_B16FFC(&Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__, v11, v12);
    sub_B16FFC(&Individuality___c__DisplayClass7_0_TypeInfo, v13, v14);
    byte_40FC178 = 1;
  }
  v15 = (Individuality___c__DisplayClass7_0_o *)sub_B170CC(
                                                  Individuality___c__DisplayClass7_0_TypeInfo,
                                                  target,
                                                  method,
                                                  v3,
                                                  v4);
  Individuality___c__DisplayClass7_0___ctor(v15, 0LL);
  if ( !v15 )
LABEL_14:
    sub_B170D4();
  v15->fields.target = target;
  sub_B16F98(&v15->fields, target);
  v20 = v15->fields.target;
  if ( !v20 )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)&v20->max_length )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      v15->fields.i = 0;
      v22 = 0;
      p__9__0 = &v15->fields.__9__0;
      while ( v22 < (signed int)v20->max_length )
      {
        v24 = *p__9__0;
        if ( !*p__9__0 )
        {
          v24 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v16, v17, v18, v19);
          System_Func_int__bool____ctor(
            v24,
            (Il2CppObject *)v15,
            Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__,
            (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
          v15->fields.__9__0 = v24;
          sub_B16F98(&v15->fields.__9__0, v24);
        }
        if ( !BasicHelper__Any_int__25910576(
                self,
                (System_Func_T__bool__o *)v24,
                (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
          return 0;
        v20 = v15->fields.target;
        v22 = v15->fields.i + 1;
        v15->fields.i = v22;
        if ( !v20 )
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


bool __fastcall Individuality__CheckIndividualities_28893760(
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
  const MethodInfo *v6; // x2
  _BOOL4 IsPartialMatchArray; // w20
  _BOOL4 v8; // w8
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
          ? (IsPartialMatchArray = 1)
          : (IsPartialMatchArray = Individuality__IsPartialMatchArray(self, unsignedArray, v6)),
            !targets) )
      {
        sub_B170D4();
      }
      if ( *(_QWORD *)&targets->max_length )
        v8 = !Individuality__IsPartialMatchArray(self, targets, v6);
      else
        v8 = 1;
      return v8 && IsPartialMatchArray;
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
  _BOOL4 v14; // w23
  _BOOL4 v15; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FC17C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_int____int____int__int__bool__Invoke__, targets);
    byte_40FC17C = 1;
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
                      (const MethodInfo_2B79BA4 *)Method_System_Func_int____int____int__int__bool__Invoke__);
            }
            else
            {
              v14 = 1;
            }
            if ( signedArray )
            {
              if ( !*(_QWORD *)&signedArray->max_length )
              {
                v15 = 1;
                return v15 && v14;
              }
              if ( mismatchFunc )
              {
                v15 = !System_Func_object__object__int__int__bool___Invoke(
                         (System_Func_T1__T2__T3__T4__TResult__o *)mismatchFunc,
                         &selfs->obj,
                         &signedArray->obj,
                         countAbove,
                         countBelow,
                         (const MethodInfo_2B79BA4 *)Method_System_Func_int____int____int__int__bool__Invoke__);
                return v15 && v14;
              }
            }
          }
LABEL_21:
          sub_B170D4();
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
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FC17D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_int____int____bool__Invoke__, signedTargets);
    byte_40FC17D = 1;
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
      if ( System_Func_object__object__bool___Invoke(
             (System_Func_T1__T2__TResult__o *)matchedFunc,
             &selfs->obj,
             &unsignedArray->obj,
             (const MethodInfo_2B75440 *)Method_System_Func_int____int____bool__Invoke__) )
      {
        return 1;
      }
    }
    if ( !signedArray || !*(_QWORD *)&signedArray->max_length )
      return 0;
    if ( mismatchFunc )
      return !System_Func_object__object__bool___Invoke(
                (System_Func_T1__T2__TResult__o *)mismatchFunc,
                &selfs->obj,
                &signedArray->obj,
                (const MethodInfo_2B75440 *)Method_System_Func_int____int____bool__Invoke__);
LABEL_17:
    sub_B170D4();
  }
  return result;
}


bool __fastcall Individuality__CheckSignedIndividualities_28893348(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        const MethodInfo *method)
{
  bool result; // w0
  _BOOL4 v10; // w21
  _BOOL4 v11; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FC175 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_int____int____bool__Invoke__, signedTarget);
    byte_40FC175 = 1;
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
                (const MethodInfo_2B75440 *)Method_System_Func_int____int____bool__Invoke__);
      }
      else
      {
        v10 = 1;
      }
      if ( signedArray )
      {
        if ( !*(_QWORD *)&signedArray->max_length )
        {
          v11 = 1;
          return v11 && v10;
        }
        if ( mismatchFunc )
        {
          v11 = !System_Func_object__object__bool___Invoke(
                   (System_Func_T1__T2__TResult__o *)mismatchFunc,
                   &self->obj,
                   &signedArray->obj,
                   (const MethodInfo_2B75440 *)Method_System_Func_int____int____bool__Invoke__);
          return v11 && v10;
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
  return result;
}


bool __fastcall Individuality__CheckSignedMultiIndividuality(
        System_Int32_array *selfArray,
        System_Int32_array_array *signedTargetsArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_40FC17E & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int______66805488, signedTargetsArray);
    sub_B16FFC(&Method_System_Func_int____bool___ctor__, v7);
    sub_B16FFC(&System_Func_int____bool__TypeInfo, v8);
    sub_B16FFC(&Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__, v9);
    sub_B16FFC(&Individuality___c__DisplayClass18_0_TypeInfo, v10);
    byte_40FC17E = 1;
  }
  v11 = sub_B170CC(Individuality___c__DisplayClass18_0_TypeInfo, signedTargetsArray, method, v3, v4);
  Individuality___c__DisplayClass18_0___ctor((Individuality___c__DisplayClass18_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = selfArray;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)selfArray, v12, v13, v14, v15, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_int____bool__TypeInfo,
                                                                             v18,
                                                                             v19,
                                                                             v20,
                                                                             v21);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v11,
    Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_int____bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_int______66805488);
}


bool __fastcall Individuality__ContainsIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  bool result; // w0
  __int64 v12; // x8
  __int64 v13; // x9
  unsigned __int64 v14; // x24
  int v15; // w23
  Individuality___c__DisplayClass6_0_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_int__bool__o *v22; // x22

  if ( (byte_40FC177 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, target);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__, v9);
    sub_B16FFC(&Individuality___c__DisplayClass6_0_TypeInfo, v10);
    byte_40FC177 = 1;
  }
  result = 1;
  if ( target )
  {
    if ( self )
    {
      v12 = *(_QWORD *)&target->max_length;
      if ( v12 )
      {
        v13 = *(_QWORD *)&self->max_length;
        if ( v13 )
        {
          if ( (int)v13 < 1 )
          {
            v15 = 0;
          }
          else
          {
            v14 = 0LL;
            v15 = 0;
            do
            {
              v16 = (Individuality___c__DisplayClass6_0_o *)sub_B170CC(
                                                              Individuality___c__DisplayClass6_0_TypeInfo,
                                                              target,
                                                              method,
                                                              v3,
                                                              v4);
              Individuality___c__DisplayClass6_0___ctor(v16, 0LL);
              if ( v14 >= self->max_length )
              {
                sub_B17100(v17, v18, v19);
                sub_B170A0();
              }
              if ( !v16 )
                sub_B170D4();
              v16->fields.type = self->m_Items[v14 + 1];
              v22 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v18, v19, v20, v21);
              System_Func_int__bool____ctor(
                v22,
                (Il2CppObject *)v16,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
              ++v14;
              v15 += BasicHelper__Any_int__25910576(
                       target,
                       (System_Func_T__bool__o *)v22,
                       (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
            }
            while ( (__int64)v14 < (int)self->max_length );
            v12 = *(_QWORD *)&target->max_length;
          }
          return v15 >= (int)v12;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_int__o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  int32_t v22; // w1
  const MethodInfo_2F104F0 *v23; // x2
  System_Collections_Generic_List_int__o *v24; // x0
  System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FC176 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, unsignedArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40FC176 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    unsignedArray,
                                                    signedArray,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      v22 = baseArray->m_Items[v21 + 1];
      if ( v22 < 1 )
      {
        if ( !v16 )
          goto LABEL_16;
        v23 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v22 = -v22;
        v24 = v16;
      }
      else
      {
        if ( !v11 )
          goto LABEL_16;
        v23 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v24 = v11;
      }
      System_Collections_Generic_List_int___Add(v24, v22, v23);
      LODWORD(v20) = baseArray->max_length;
      ++v21;
    }
    while ( (__int64)v21 < (int)v20 );
  }
  if ( !v11
    || (v25 = System_Collections_Generic_List_int___ToArray(
                v11,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v25,
        sub_B16F98(
          (BattleServantConfConponent_o *)unsignedArray,
          (System_Int32_array **)v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        !v16) )
  {
LABEL_16:
    sub_B170D4();
  }
  v32 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v32;
  sub_B16F98((BattleServantConfConponent_o *)signedArray, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
}


System_Int32_array *__fastcall Individuality__GetMatchedCountArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Int32_array *result; // x0
  unsigned __int64 v7; // x8
  il2cpp_array_size_t max_length; // w12
  int32_t v9; // w12
  unsigned __int64 v10; // x13

  if ( (byte_40FC17A & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, targets, method);
    byte_40FC17A = 1;
  }
  if ( !targets
    || (v5 = *(_QWORD *)&targets->max_length,
        result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v5, method),
        !selfs) )
  {
LABEL_19:
    sub_B170D4();
  }
  if ( (int)*(_QWORD *)&selfs->max_length >= 1 )
  {
    v7 = 0LL;
    max_length = *(_QWORD *)&selfs->max_length;
    while ( 1 )
    {
      if ( v7 >= max_length )
        goto LABEL_18;
      if ( (int)v5 >= 1 )
        break;
LABEL_16:
      max_length = selfs->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        return result;
    }
    v9 = selfs->m_Items[v7 + 1];
    v10 = 0LL;
    while ( v10 < targets->max_length )
    {
      if ( v9 == targets->m_Items[v10 + 1] )
      {
        if ( !result )
          goto LABEL_19;
        if ( v10 >= result->max_length )
          break;
        ++result->m_Items[v10 + 1];
      }
      if ( (__int64)++v10 >= (int)v5 )
        goto LABEL_16;
    }
LABEL_18:
    sub_B17100();
    sub_B170A0();
  }
  return result;
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  bool result; // w0
  unsigned __int64 v16; // x23
  Individuality___c__DisplayClass9_0_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_int__bool__o *v22; // x22

  if ( (byte_40FC179 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, targets, method);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_B16FFC(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__, v11, v12);
    sub_B16FFC(&Individuality___c__DisplayClass9_0_TypeInfo, v13, v14);
    byte_40FC179 = 1;
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
      v16 = 0LL;
      while ( 1 )
      {
        v17 = (Individuality___c__DisplayClass9_0_o *)sub_B170CC(
                                                        Individuality___c__DisplayClass9_0_TypeInfo,
                                                        targets,
                                                        method,
                                                        v3,
                                                        v4);
        Individuality___c__DisplayClass9_0___ctor(v17, 0LL);
        if ( v16 >= targets->max_length )
        {
          sub_B17100();
          sub_B170A0();
        }
        if ( !v17 )
          sub_B170D4();
        v17->fields.target = targets->m_Items[v16 + 1];
        v22 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v18, v19, v20, v21);
        System_Func_int__bool____ctor(
          v22,
          (Il2CppObject *)v17,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        if ( !BasicHelper__Any_int__25910576(
                selfs,
                (System_Func_T__bool__o *)v22,
                (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
          break;
        if ( (__int64)++v16 >= (int)targets->max_length )
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
  __int64 v9; // x2
  unsigned __int64 max_length; // x8
  unsigned __int64 v11; // x9
  int32_t *v12; // x11
  int32_t v13; // w12

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
              sub_B170D4();
            max_length = selfs->max_length;
            if ( (__int64)(max_length << 32) >= 1 )
            {
              v11 = 0LL;
              v12 = &selfs->m_Items[1];
              do
              {
                if ( v11 >= max_length )
                {
                  sub_B17100(selfs, v8, v9);
                  sub_B170A0();
                }
                v13 = v12[v11];
                if ( countAbove < 1 )
                {
                  selfs = 0LL;
                  if ( countBelow < 1 || v13 > countBelow )
                    return (char)selfs;
                }
                else if ( countBelow < 1 )
                {
                  if ( v13 < countAbove )
                    goto LABEL_21;
                }
                else
                {
                  selfs = 0LL;
                  if ( v13 > countBelow || v13 < countAbove )
                    return (char)selfs;
                }
                ++v11;
              }
              while ( (__int64)v11 < (int)max_length );
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
          sub_B17100(selfs, targets, method);
          sub_B170A0();
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Individuality___c__DisplayClass13_0_o *v17; // x22
  const MethodInfo *v18; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Func_int__bool__o *v25; // x20

  if ( (byte_40FC17B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, targets, countAbove);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v9, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11, v12);
    sub_B16FFC(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__, v13, v14);
    sub_B16FFC(&Individuality___c__DisplayClass13_0_TypeInfo, v15, v16);
    byte_40FC17B = 1;
  }
  v17 = (Individuality___c__DisplayClass13_0_o *)sub_B170CC(
                                                   Individuality___c__DisplayClass13_0_TypeInfo,
                                                   targets,
                                                   *(_QWORD *)&countAbove,
                                                   *(_QWORD *)&countBelow,
                                                   method);
  Individuality___c__DisplayClass13_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B170D4();
  result = 1;
  v17->fields.countAbove = countAbove;
  v17->fields.countBelow = countBelow;
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
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v18);
            v25 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v21, v22, v23, v24);
            System_Func_int__bool____ctor(
              v25,
              (Il2CppObject *)v17,
              Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
              (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
            return BasicHelper__Any_int__25910576(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v25,
                     (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Func_T1__T2__TResult__o *v15; // x22

  if ( (byte_40F68E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_int____int____bool___ctor__, signedTargets);
    sub_B16FFC(&System_Func_int____int____bool__TypeInfo, v7);
    sub_B16FFC(&Method_Individuality_IsMatchArray__, v8);
    byte_40F68E3 = 1;
  }
  selfArray = this->fields.selfArray;
  v10 = (System_Func_T1__T2__TResult__o *)sub_B170CC(
                                            System_Func_int____int____bool__TypeInfo,
                                            signedTargets,
                                            method,
                                            v3,
                                            v4);
  System_Func_object__object__bool____ctor(
    v10,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
  v15 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v11, v12, v13, v14);
  System_Func_object__object__bool____ctor(
    v15,
    0LL,
    Method_Individuality_IsMatchArray__,
    (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualities_28893348(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v10,
           (System_Func_int____int____bool__o *)v15,
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality___c__DisplayClass7_0___CheckAllIndividualities_b__0(
        Individuality___c__DisplayClass7_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct System_Int32_array *target; // x8
  __int64 i; // x9

  target = this->fields.target;
  if ( !target )
    sub_B170D4();
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
  {
    sub_B17100(this, *(_QWORD *)&sf, method);
    sub_B170A0();
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