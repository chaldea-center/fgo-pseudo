bool __fastcall Individuality__CheckAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x8
  __int64 v11; // x9
  bool v12; // w24
  System_Func_int__bool__o **v13; // x21
  System_Func_int__bool__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x9
  int v18; // w8
  int v19; // w9

  if ( (byte_4A5A174 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__);
    sub_1B885B0(&Individuality___c__DisplayClass7_0_TypeInfo);
    byte_4A5A174 = 1;
  }
  v5 = sub_1B887FC(Individuality___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
LABEL_18:
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)target, v8, v9);
  if ( *(_QWORD *)(v5 + 16) )
  {
    LOBYTE(v10) = 1;
    if ( self )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( v11 )
      {
        v10 = *(_QWORD *)&self->max_length;
        if ( v10 )
        {
          v12 = (int)v11 > 0;
          *(_DWORD *)(v5 + 24) = 0;
          if ( (int)v11 >= 1 )
          {
            v13 = (System_Func_int__bool__o **)(v5 + 32);
            do
            {
              v14 = *v13;
              if ( !*v13 )
              {
                v14 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v14,
                  (Il2CppObject *)v5,
                  Method_Individuality___c__DisplayClass7_0__CheckAllIndividualities_b__0__,
                  0LL);
                *(_QWORD *)(v5 + 32) = v14;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v14, v15, v16);
              }
              v6 = BasicHelper__Any_int__48671312(
                     self,
                     (System_Func_T__bool__o *)v14,
                     (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
              if ( !v6 )
                break;
              v17 = *(_QWORD *)(v5 + 16);
              v18 = *(_DWORD *)(v5 + 24) + 1;
              *(_DWORD *)(v5 + 24) = v18;
              if ( !v17 )
                goto LABEL_18;
              v19 = *(_DWORD *)(v17 + 24);
              v12 = v18 < v19;
            }
            while ( v18 < v19 );
          }
          LOBYTE(v10) = !v12;
        }
      }
    }
  }
  else
  {
    LOBYTE(v10) = 1;
  }
  return v10 & 1;
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


bool __fastcall Individuality__CheckIndividualities_37696972(
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
        sub_1B8880C(IsPartialMatchArray, v8);
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
          sub_1B8880C(v11, v12);
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
  __int64 v14; // x1
  System_Collections_ICollection_o *self; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-38h] BYREF

  result = 1;
  self = 0LL;
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
          Individuality__DivideUnsignedAndSignedArray(
            targets,
            &unsignedArray,
            (System_Int32_array **)&self,
            (const MethodInfo *)mismatchFunc);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unsignedArray, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !matchedFunc )
              goto LABEL_14;
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *, System_Int32_array *, _QWORD, _QWORD, _QWORD))matchedFunc->fields.m_target)(
                    matchedFunc->fields.original_method_info,
                    selfs,
                    unsignedArray,
                    (unsigned int)countAbove,
                    (unsigned int)countBelow,
                    *(_QWORD *)&matchedFunc->fields.extra_arg) & 1) != 0 )
              return 1;
          }
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(self, 0LL);
          if ( IsNullOrEmpty )
            return 0;
          if ( mismatchFunc )
            return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *, System_Collections_ICollection_o *, _QWORD, _QWORD, _QWORD))mismatchFunc->fields.m_target)(
                      mismatchFunc->fields.original_method_info,
                      selfs,
                      self,
                      (unsigned int)countAbove,
                      (unsigned int)countBelow,
                      *(_QWORD *)&mismatchFunc->fields.extra_arg) & 1) == 0;
LABEL_14:
          sub_1B8880C(IsNullOrEmpty, v14);
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
    sub_1B8880C(v13, v14);
  return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *))mismatchFunc->fields.m_target)(
            mismatchFunc->fields.original_method_info,
            selfs) & 1) == 0;
}


bool __fastcall Individuality__CheckSignedIndividualities_37696616(
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
    sub_1B8880C(v9, v10);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4A5A178 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int______76088592);
    sub_1B885B0(&System_Func_int____bool__TypeInfo);
    sub_1B885B0(&Method_Individuality___c__DisplayClass19_0__CheckSignedMultiIndividuality_b__0__);
    sub_1B885B0(&Individuality___c__DisplayClass19_0_TypeInfo);
    byte_4A5A178 = 1;
  }
  v5 = sub_1B887FC(Individuality___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = selfArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)selfArray, v8, v9);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0LL) )
    return 1;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_int____bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_Individuality___c__DisplayClass19_0__CheckSignedMultiIndividuality_b__0__,
    0LL);
  return BasicHelper__Any_object__48672124(
           (System_Object_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_int______76088592);
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
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_int__bool__o *v13; // x22

  if ( (byte_4A5A173 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__);
    sub_1B885B0(&Individuality___c__DisplayClass6_0_TypeInfo);
    byte_4A5A173 = 1;
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
              v10 = sub_1B887FC(Individuality___c__DisplayClass6_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v10, 0LL);
              if ( v8 >= self->max_length )
                sub_1B88814(v11, v12);
              if ( !v10 )
                sub_1B8880C(v11, v12);
              *(_DWORD *)(v10 + 16) = self->m_Items[v8 + 1];
              v13 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v13,
                (Il2CppObject *)v10,
                Method_Individuality___c__DisplayClass6_0__ContainsIndividualities_b__0__,
                0LL);
              ++v8;
              v9 += BasicHelper__Any_int__48671312(
                      target,
                      (System_Func_T__bool__o *)v13,
                      (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A5A172 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5A172 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseArray )
    goto LABEL_24;
  v11 = *(_QWORD *)&baseArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B88814(v9, v10);
      v10 = (unsigned int)baseArray->m_Items[v12 + 1];
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
        if ( (unsigned int)size >= items->max_length )
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
        if ( (unsigned int)v15 >= v13->max_length )
        {
          v20 = v14[4];
          v21 = v7;
LABEL_19:
          System_Collections_Generic_List_int___AddWithResize(
            v21,
            v10,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20 + 192) + 112LL));
          goto LABEL_20;
        }
        v16 = (char *)v13 + 4 * v15;
        v7->fields._size = v15 + 1;
      }
      *((_DWORD *)v16 + 8) = v10;
LABEL_20:
      LODWORD(v11) = baseArray->max_length;
    }
    while ( (__int64)++v12 < (int)v11 );
  }
  if ( !v7
    || (v22 = System_Collections_Generic_List_int___ToArray(
                v7,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v22,
        sub_1B88554((ServantStatusBattleListViewItem_o *)unsignedArray, (int32_t)v22, v23, v24),
        !v8) )
  {
LABEL_24:
    sub_1B8880C(v9, v10);
  }
  v25 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)signedArray, (int32_t)v25, v26, v27);
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
  if ( (byte_4A5A176 & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_1B885B0(&int___TypeInfo);
    byte_4A5A176 = 1;
  }
  if ( !targets
    || (v5 = *(_QWORD *)&targets->max_length,
        selfs = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v5),
        !v4) )
  {
LABEL_19:
    sub_1B8880C(selfs, targets);
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
    sub_1B88814(selfs, targets);
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
  bool v5; // w0
  unsigned __int64 v6; // x23
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Func_int__bool__o *v10; // x22

  if ( (byte_4A5A175 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__);
    sub_1B885B0(&Individuality___c__DisplayClass9_0_TypeInfo);
    byte_4A5A175 = 1;
  }
  v5 = 0;
  if ( selfs && targets )
  {
    if ( (int)targets->max_length < 1 )
    {
      return 1;
    }
    else
    {
      v6 = 0LL;
      do
      {
        v7 = sub_1B887FC(Individuality___c__DisplayClass9_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v7, 0LL);
        if ( v6 >= targets->max_length )
          sub_1B88814(v8, v9);
        if ( !v7 )
          sub_1B8880C(v8, v9);
        *(_DWORD *)(v7 + 16) = targets->m_Items[v6 + 1];
        v10 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v10,
          (Il2CppObject *)v7,
          Method_Individuality___c__DisplayClass9_0__IsMatchArray_b__0__,
          0LL);
        v5 = BasicHelper__Any_int__48671312(
               selfs,
               (System_Func_T__bool__o *)v10,
               (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
        if ( !v5 )
          break;
        ++v6;
      }
      while ( (__int64)v6 < (int)targets->max_length );
    }
  }
  return v5;
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
              sub_1B8880C(0LL, v10);
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
          sub_1B88814(selfs, targets);
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
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_4A5A177 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__);
    sub_1B885B0(&Individuality___c__DisplayClass13_0_TypeInfo);
    byte_4A5A177 = 1;
  }
  v9 = sub_1B887FC(Individuality___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  result = 1;
  *(_DWORD *)(v9 + 16) = countAbove;
  *(_DWORD *)(v9 + 20) = countBelow;
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
            v15 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v15,
              (Il2CppObject *)v9,
              Method_Individuality___c__DisplayClass13_0__IsPartialMatchArrayCount_b__0__,
              0LL);
            return BasicHelper__Any_int__48671312(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v15,
                     (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
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


void __fastcall Individuality___c__DisplayClass19_0___ctor(
        Individuality___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Individuality___c__DisplayClass19_0___CheckSignedMultiIndividuality_b__0(
        Individuality___c__DisplayClass19_0_o *this,
        System_Int32_array *signedTargets,
        const MethodInfo *method)
{
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v6; // x21
  System_Func_T1__T2__TResult__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4A5A179 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_int____int____bool__TypeInfo);
    sub_1B885B0(&Method_Individuality_IsMatchArray__);
    byte_4A5A179 = 1;
  }
  selfArray = this->fields.selfArray;
  v6 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v6, 0LL, Method_Individuality_IsMatchArray__, 0LL);
  v7 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v7, 0LL, Method_Individuality_IsMatchArray__, 0LL);
  return Individuality__CheckSignedIndividualities_37696616(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v6,
           (System_Func_int____int____bool__o *)v7,
           v8);
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

  target = this->fields.target;
  if ( !target )
    sub_1B8880C(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= target->max_length )
    sub_1B88814(this, sf);
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