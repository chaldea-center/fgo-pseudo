bool __fastcall Individuality__CheckAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  __int64 v14; // x9
  bool v15; // w24
  System_Func_int__bool__o **v16; // x21
  System_Func_int__bool__o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x9
  int v21; // w8
  int v22; // w9

  if ( (byte_49FDB58 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_int____75719440, target);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v5);
    sub_1B64A00(&Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__, v6);
    sub_1B64A00(&Individuality___c__DisplayClass7_0_TypeInfo, v7);
    byte_49FDB58 = 1;
  }
  v8 = sub_1B64C4C(Individuality___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
LABEL_18:
    sub_1B64C5C(v9, v10);
  *(_QWORD *)(v8 + 16) = target;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)target, v11, v12);
  if ( *(_QWORD *)(v8 + 16) )
  {
    LOBYTE(v13) = 1;
    if ( self )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 24LL);
      if ( v14 )
      {
        v13 = *(_QWORD *)&self->max_length;
        if ( v13 )
        {
          v15 = (int)v14 > 0;
          *(_DWORD *)(v8 + 24) = 0;
          if ( (int)v14 >= 1 )
          {
            v16 = (System_Func_int__bool__o **)(v8 + 32);
            do
            {
              v17 = *v16;
              if ( !*v16 )
              {
                v17 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v17,
                  (Il2CppObject *)v8,
                  Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__,
                  0LL);
                *(_QWORD *)(v8 + 32) = v17;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)v17, v18, v19);
              }
              v9 = BasicHelper__Any_int__48393956(
                     self,
                     (System_Func_T__bool__o *)v17,
                     (const MethodInfo_2E26EE4 *)Method_BasicHelper_Any_int____75719440);
              if ( !v9 )
                break;
              v20 = *(_QWORD *)(v8 + 16);
              v21 = *(_DWORD *)(v8 + 24) + 1;
              *(_DWORD *)(v8 + 24) = v21;
              if ( !v20 )
                goto LABEL_18;
              v22 = *(_DWORD *)(v20 + 24);
              v15 = v21 < v22;
            }
            while ( v21 < v22 );
          }
          LOBYTE(v13) = !v15;
        }
      }
    }
  }
  else
  {
    LOBYTE(v13) = 1;
  }
  return v13 & 1;
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


bool __fastcall Individuality__CheckIndividualities_37390156(
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
  const MethodInfo *v7; // x2
  System_Int32_array *v8; // x1
  int v9; // w20
  _BOOL4 v10; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-28h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-18h] BYREF

  signedArray = 0LL;
  if ( !signedTarget )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)&signedTarget->max_length )
  {
    if ( *(_QWORD *)&self->max_length )
    {
      Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &signedArray, v3);
      v8 = unsignedArray;
      if ( !unsignedArray
        || (!*(_QWORD *)&unsignedArray->max_length
          ? (v9 = 1)
          : (IsPartialMatchArray = Individuality__IsPartialMatchArray(self, unsignedArray, v7), v9 = IsPartialMatchArray),
            (v8 = signedArray) == 0LL) )
      {
        sub_1B64C5C(IsPartialMatchArray, v8);
      }
      if ( *(_QWORD *)&signedArray->max_length )
        v10 = !Individuality__IsPartialMatchArray(self, signedArray, v7);
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
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w23
  _BOOL4 v14; // w8
  System_Int32_array *v15; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-38h] BYREF

  result = 1;
  v15 = 0LL;
  unsignedArray = 0LL;
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
          Individuality__DivideUnsignedAndSignedArray(targets, &unsignedArray, &v15, (const MethodInfo *)mismatchFunc);
          if ( unsignedArray )
          {
            if ( *(_QWORD *)&unsignedArray->max_length )
            {
              if ( !matchedFunc )
                goto LABEL_19;
              v11 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))matchedFunc->fields.m_target)(
                      matchedFunc->fields.original_method_info,
                      selfs);
              v13 = v11 & 1;
            }
            else
            {
              v13 = 1;
            }
            if ( v15 )
            {
              if ( !*(_QWORD *)&v15->max_length )
              {
                v14 = 1;
                return (v14 & v13) != 0;
              }
              if ( mismatchFunc )
              {
                v14 = (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))mismatchFunc->fields.m_target)(
                         mismatchFunc->fields.original_method_info,
                         selfs) & 1) == 0;
                return (v14 & v13) != 0;
              }
            }
          }
LABEL_19:
          sub_1B64C5C(v11, v12);
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
  const MethodInfo *v11; // x3
  char v12; // w8
  __int64 v13; // x0
  __int64 v14; // x1
  System_Int32_array *v16; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-38h] BYREF

  v16 = 0LL;
  unsignedArray = 0LL;
  v12 = (selfs == 0LL) | BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargets, 0LL);
  if ( (v12 & 1) != 0 || isSkipPreCheckSelfsEmpty )
  {
    if ( (v12 & 1) != 0 )
      return 1;
  }
  else if ( !*(_QWORD *)&selfs->max_length )
  {
    return 0;
  }
  Individuality__DivideUnsignedAndSignedArray(signedTargets, &unsignedArray, &v16, v11);
  if ( unsignedArray && *(_QWORD *)&unsignedArray->max_length )
  {
    if ( !matchedFunc )
      goto LABEL_17;
    v13 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))matchedFunc->fields.m_target)(
            matchedFunc->fields.original_method_info,
            selfs);
    if ( (v13 & 1) != 0 )
      return 1;
  }
  if ( !v16 || !*(_QWORD *)&v16->max_length )
    return 0;
  if ( !mismatchFunc )
LABEL_17:
    sub_1B64C5C(v13, v14);
  return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))mismatchFunc->fields.m_target)(
            mismatchFunc->fields.original_method_info,
            selfs) & 1) == 0;
}


bool __fastcall Individuality__CheckSignedIndividualities_37389800(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        const MethodInfo *method)
{
  bool result; // w0
  __int64 v9; // x0
  __int64 v10; // x1
  int v11; // w21
  _BOOL4 v12; // w8
  System_Int32_array *v13; // [xsp+0h] [xbp-30h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-28h] BYREF

  v13 = 0LL;
  unsignedArray = 0LL;
  if ( !signedTarget )
    return 1;
  result = 1;
  if ( self && *(_QWORD *)&signedTarget->max_length )
  {
    if ( !*(_QWORD *)&self->max_length )
      return 0;
    Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &v13, (const MethodInfo *)mismatchFunc);
    if ( unsignedArray )
    {
      if ( *(_QWORD *)&unsignedArray->max_length )
      {
        if ( !matchedFunc )
          goto LABEL_19;
        v9 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))matchedFunc->fields.m_target)(
               matchedFunc->fields.original_method_info,
               self);
        v11 = v9 & 1;
      }
      else
      {
        v11 = 1;
      }
      if ( v13 )
      {
        if ( !*(_QWORD *)&v13->max_length )
        {
          v12 = 1;
          return (v12 & v11) != 0;
        }
        if ( mismatchFunc )
        {
          v12 = (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))mismatchFunc->fields.m_target)(
                   mismatchFunc->fields.original_method_info,
                   self) & 1) == 0;
          return (v12 & v11) != 0;
        }
      }
    }
LABEL_19:
    sub_1B64C5C(v9, v10);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Func_object__bool__o *v14; // x20

  if ( (byte_49FDB5C & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_int______75719224, signedTargetsArray);
    sub_1B64A00(&System_Func_int____bool__TypeInfo, v5);
    sub_1B64A00(&Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__, v6);
    sub_1B64A00(&Individuality___c__DisplayClass18_0_TypeInfo, v7);
    byte_49FDB5C = 1;
  }
  v8 = sub_1B64C4C(Individuality___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64C5C(v9, v10);
  *(_QWORD *)(v8 + 16) = selfArray;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)selfArray, v11, v12);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v14 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_int____bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_Individuality___c__DisplayClass18_0__CheckSignedMultiIndividuality_b__0__,
    0LL);
  return BasicHelper__Any_object__48394768(
           (System_Object_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2E27210 *)Method_BasicHelper_Any_int______75719224);
}


bool __fastcall Individuality__ContainsIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool result; // w0
  __int64 v9; // x8
  __int64 v10; // x9
  unsigned __int64 v11; // x24
  int v12; // w23
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_Func_int__bool__o *v16; // x22

  if ( (byte_49FDB57 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_int____75719440, target);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v5);
    sub_1B64A00(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__, v6);
    sub_1B64A00(&Individuality___c__DisplayClass6_0_TypeInfo, v7);
    byte_49FDB57 = 1;
  }
  result = 1;
  if ( target )
  {
    if ( self )
    {
      v9 = *(_QWORD *)&target->max_length;
      if ( v9 )
      {
        v10 = *(_QWORD *)&self->max_length;
        if ( v10 )
        {
          if ( (int)v10 < 1 )
          {
            v12 = 0;
          }
          else
          {
            v11 = 0LL;
            v12 = 0;
            do
            {
              v13 = sub_1B64C4C(Individuality___c__DisplayClass6_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v13, 0LL);
              if ( v11 >= self->max_length )
                sub_1B64C64(v14, v15);
              if ( !v13 )
                sub_1B64C5C(v14, v15);
              *(_DWORD *)(v13 + 16) = self->m_Items[v11 + 1];
              v16 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v16,
                (Il2CppObject *)v13,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                0LL);
              ++v11;
              v12 += BasicHelper__Any_int__48393956(
                       target,
                       (System_Func_T__bool__o *)v16,
                       (const MethodInfo_2E26EE4 *)Method_BasicHelper_Any_int____75719440);
            }
            while ( (__int64)v11 < (int)self->max_length );
            v9 = *(_QWORD *)&target->max_length;
          }
          return v12 >= (int)v9;
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
  struct System_Int32_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  char *v19; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x8
  System_Collections_Generic_List_int__o *v24; // x0
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Int32_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_49FDB56 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, unsignedArray);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FDB56 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseArray )
    goto LABEL_24;
  v14 = *(_QWORD *)&baseArray->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
        sub_1B64C64(v12, v13);
      v13 = (unsigned int)baseArray->m_Items[v15 + 1];
      if ( (int)v13 < 1 )
      {
        if ( !v11 )
          goto LABEL_24;
        items = v11->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v11->fields._size;
        v13 = (unsigned int)-(int)v13;
        if ( (unsigned int)size >= items->max_length )
        {
          v23 = v21[4];
          v24 = v11;
          goto LABEL_19;
        }
        v19 = (char *)items + 4 * size;
        v11->fields._size = size + 1;
      }
      else
      {
        if ( !v10 )
          goto LABEL_24;
        v16 = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !v16 )
          goto LABEL_24;
        v18 = v10->fields._size;
        if ( (unsigned int)v18 >= v16->max_length )
        {
          v23 = v17[4];
          v24 = v10;
LABEL_19:
          System_Collections_Generic_List_int___AddWithResize(
            v24,
            v13,
            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v23 + 192) + 112LL));
          goto LABEL_20;
        }
        v19 = (char *)v16 + 4 * v18;
        v10->fields._size = v18 + 1;
      }
      *((_DWORD *)v19 + 8) = v13;
LABEL_20:
      LODWORD(v14) = baseArray->max_length;
    }
    while ( (__int64)++v15 < (int)v14 );
  }
  if ( !v10
    || (v25 = System_Collections_Generic_List_int___ToArray(
                v10,
                (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v25,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)unsignedArray, (int32_t)v25, v26, v27),
        !v11) )
  {
LABEL_24:
    sub_1B64C5C(v12, v13);
  }
  v28 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v28;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)signedArray, (int32_t)v28, v29, v30);
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
  if ( (byte_49FDB5A & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_1B64A00(&int___TypeInfo, targets);
    byte_49FDB5A = 1;
  }
  if ( !targets
    || (v5 = *(_QWORD *)&targets->max_length,
        selfs = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, (unsigned int)v5),
        !v4) )
  {
LABEL_19:
    sub_1B64C5C(selfs, targets);
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
    sub_1B64C64(selfs, targets);
  }
  return selfs;
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


bool __fastcall Individuality__IsMatchArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool v8; // w0
  unsigned __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_int__bool__o *v13; // x22

  if ( (byte_49FDB59 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_int____75719440, targets);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v5);
    sub_1B64A00(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__, v6);
    sub_1B64A00(&Individuality___c__DisplayClass9_0_TypeInfo, v7);
    byte_49FDB59 = 1;
  }
  v8 = 0;
  if ( selfs && targets )
  {
    if ( (int)targets->max_length < 1 )
    {
      return 1;
    }
    else
    {
      v9 = 0LL;
      do
      {
        v10 = sub_1B64C4C(Individuality___c__DisplayClass9_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0LL);
        if ( v9 >= targets->max_length )
          sub_1B64C64(v11, v12);
        if ( !v10 )
          sub_1B64C5C(v11, v12);
        *(_DWORD *)(v10 + 16) = targets->m_Items[v9 + 1];
        v13 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v13,
          (Il2CppObject *)v10,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          0LL);
        v8 = BasicHelper__Any_int__48393956(
               selfs,
               (System_Func_T__bool__o *)v13,
               (const MethodInfo_2E26EE4 *)Method_BasicHelper_Any_int____75719440);
        if ( !v8 )
          break;
        ++v9;
      }
      while ( (__int64)v9 < (int)targets->max_length );
    }
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Individuality__IsMatchArrayCount(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        int32_t countAbove,
        int32_t countBelow,
        const MethodInfo *method)
{
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x0
  __int64 v10; // x1
  __int64 v11; // x9
  System_Int32_array *v12; // x8
  int32_t *i; // x8
  int32_t v14; // w10
  bool v15; // cc

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
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, *(const MethodInfo **)&countAbove);
            if ( !MatchedCountArray )
              sub_1B64C5C(0LL, v10);
            v11 = *(_QWORD *)&MatchedCountArray->max_length;
            v12 = MatchedCountArray;
            result = 1;
            if ( (int)v11 >= 1 )
            {
              v11 = (unsigned int)v11;
              for ( i = &v12->m_Items[1]; ; ++i )
              {
                v14 = *i;
                if ( countAbove < 1 )
                  break;
                if ( countBelow >= 1 )
                {
                  v15 = v14 < countAbove;
LABEL_13:
                  result = 0;
                  if ( v15 || v14 > countBelow )
                    return result;
                  goto LABEL_17;
                }
                if ( v14 < countAbove )
                  return 0;
LABEL_17:
                if ( !--v11 )
                  return 1;
              }
              v15 = countBelow < 1;
              goto LABEL_13;
            }
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
          sub_1B64C64(selfs, targets);
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
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_49FDB5B & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_int____75719440, targets);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v9);
    sub_1B64A00(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__, v10);
    sub_1B64A00(&Individuality___c__DisplayClass13_0_TypeInfo, v11);
    byte_49FDB5B = 1;
  }
  v12 = sub_1B64C4C(Individuality___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64C5C(v13, v14);
  result = 1;
  *(_DWORD *)(v12 + 16) = countAbove;
  *(_DWORD *)(v12 + 20) = countBelow;
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
            v18 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v18,
              (Il2CppObject *)v12,
              Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
              0LL);
            return BasicHelper__Any_int__48393956(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v18,
                     (const MethodInfo_2E26EE4 *)Method_BasicHelper_Any_int____75719440);
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
  int32_t countBelow; // w8
  int32_t countAbove; // w9

  countAbove = this->fields.countAbove;
  countBelow = this->fields.countBelow;
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
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v7; // x21
  System_Func_T1__T2__TResult__o *v8; // x22
  const MethodInfo *v9; // x4

  if ( (byte_49FDB5D & 1) == 0 )
  {
    sub_1B64A00(&System_Func_int____int____bool__TypeInfo, signedTargets);
    sub_1B64A00(&Method_Individuality_IsMatchArray__, v5);
    byte_49FDB5D = 1;
  }
  selfArray = this->fields.selfArray;
  v7 = (System_Func_T1__T2__TResult__o *)sub_1B64C4C(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v7, 0LL, Method_Individuality_IsMatchArray__, 0LL);
  v8 = (System_Func_T1__T2__TResult__o *)sub_1B64C4C(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v8, 0LL, Method_Individuality_IsMatchArray__, 0LL);
  return Individuality__CheckSignedIndividualities_37389800(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v7,
           (System_Func_int____int____bool__o *)v8,
           v9);
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
    sub_1B64C5C(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
    sub_1B64C64(this, *(_QWORD *)&sf);
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