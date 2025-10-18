void Individuality___cctor(const MethodInfo *method)
{
  if ( (byte_4C41EBD & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EBD = 1;
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
  il2cpp_array_size_t v5; // x11
  __int64 v6; // x10
  int v7; // w12

  if ( !target )
    return 1;
  v3 = 1;
  if ( self )
  {
    max_length = target->max_length;
    if ( max_length )
    {
      v5 = self->max_length;
      v3 = 0;
      if ( v5 )
      {
        if ( (int)v5 >= 1 )
        {
          v6 = 0;
          while ( (int)max_length < 1 )
          {
LABEL_11:
            ++v6;
            v3 = 0;
            if ( v6 == (unsigned int)self->max_length )
              return v3;
          }
          v7 = 0;
          while ( self->m_Items[v6] != target->m_Items[v7] )
          {
            if ( (_DWORD)max_length == ++v7 )
              goto LABEL_11;
          }
          return 1;
        }
      }
    }
  }
  return v3;
}


bool Individuality__CheckIndividualities_40437048(
        System_Int32_array *self,
        System_Int64_array *target,
        const MethodInfo *method)
{
  bool v3; // w8
  il2cpp_array_size_t max_length; // x9
  il2cpp_array_size_t v5; // x11
  __int64 v6; // x10
  int v7; // w12

  if ( !target )
    return 1;
  v3 = 1;
  if ( self )
  {
    max_length = target->max_length;
    if ( max_length )
    {
      v5 = self->max_length;
      v3 = 0;
      if ( v5 )
      {
        if ( (int)v5 >= 1 )
        {
          v6 = 0;
          while ( (int)max_length < 1 )
          {
LABEL_11:
            ++v6;
            v3 = 0;
            if ( v6 == (unsigned int)self->max_length )
              return v3;
          }
          v7 = 0;
          while ( target->m_Items[v7] != self->m_Items[v6] )
          {
            if ( (_DWORD)max_length == ++v7 )
              goto LABEL_11;
          }
          return 1;
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
  const MethodInfo *v8; // x2
  System_Int32_array *v9; // x20
  int v10; // w22
  System_Int32_array *v11; // x20
  _BOOL4 v12; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C41EAC & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EAC = 1;
  }
  result = 1;
  unsignedArray = 0;
  signedArray = 0;
  if ( signedTarget && self && signedTarget->max_length )
  {
    if ( self->max_length )
    {
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &signedArray, v3);
      v9 = unsignedArray;
      if ( !unsignedArray )
        goto LABEL_24;
      if ( unsignedArray->max_length )
      {
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        IsPartialMatchArray = Individuality__IsPartialMatchArray(self, v9, v8);
        v10 = IsPartialMatchArray;
      }
      else
      {
        v10 = 1;
      }
      v11 = signedArray;
      if ( !signedArray )
LABEL_24:
        sub_1C372B4(IsPartialMatchArray);
      if ( signedArray->max_length )
      {
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        v12 = !Individuality__IsPartialMatchArray(self, v11, v8);
      }
      else
      {
        v12 = 1;
      }
      return (v12 & v10) != 0;
    }
    else
    {
      return 0;
    }
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
  __int64 v14; // x0
  int v15; // w23
  _BOOL4 v16; // w8
  System_Int32_array *signedArray; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C41EB5 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EB5 = 1;
  }
  unsignedArray = 0;
  signedArray = 0;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  result = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
      if ( selfs )
      {
        if ( targets->max_length )
        {
          if ( !selfs->max_length )
            return 0;
          if ( !Individuality_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
          Individuality__DivideUnsignedAndSignedArray(
            targets,
            &unsignedArray,
            &signedArray,
            (const MethodInfo *)mismatchFunc);
          if ( unsignedArray )
          {
            if ( unsignedArray->max_length )
            {
              if ( !matchedFunc )
                goto LABEL_25;
              v14 = ((__int64 (__fastcall *)(intptr_t, System_Int32_array *))matchedFunc->fields.invoke_impl)(
                      matchedFunc->fields.method_code,
                      selfs);
              v15 = v14 & 1;
            }
            else
            {
              v15 = 1;
            }
            if ( signedArray )
            {
              if ( !signedArray->max_length )
              {
                v16 = 1;
                return (v16 & v15) != 0;
              }
              if ( mismatchFunc )
              {
                v16 = (((__int64 (__fastcall *)(intptr_t, System_Int32_array *))mismatchFunc->fields.invoke_impl)(
                         mismatchFunc->fields.method_code,
                         selfs)
                     & 1) == 0;
                return (v16 & v15) != 0;
              }
            }
          }
LABEL_25:
          sub_1C372B4(v14);
        }
      }
    }
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
  _BOOL8 IsNullOrEmpty; // x0
  System_Int32_array *signedArray; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *unsignedArray; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C41EB6 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EB6 = 1;
  }
  unsignedArray = 0;
  signedArray = 0;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  result = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
      if ( selfs )
      {
        if ( targets->max_length )
        {
          if ( !Individuality_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
          Individuality__DivideUnsignedAndSignedArray(
            targets,
            &unsignedArray,
            &signedArray,
            (const MethodInfo *)mismatchFunc);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unsignedArray, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !matchedFunc )
              goto LABEL_20;
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
LABEL_20:
          sub_1C372B4(IsNullOrEmpty);
        }
      }
    }
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
  const MethodInfo *v11; // x3
  char v12; // w8
  __int64 v13; // x0
  System_Int32_array *v15; // [xsp+0h] [xbp-50h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C41EB7 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EB7 = 1;
  }
  v15 = 0;
  unsignedArray = 0;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  v12 = (selfs == 0) | BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargets, 0);
  if ( (v12 & 1) != 0 || isSkipPreCheckSelfsEmpty )
  {
    if ( (v12 & 1) != 0 )
      return 1;
  }
  else if ( !selfs->max_length )
  {
    return 0;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  Individuality__DivideUnsignedAndSignedArray(signedTargets, &unsignedArray, &v15, v11);
  if ( unsignedArray && unsignedArray->max_length )
  {
    if ( !matchedFunc )
      goto LABEL_23;
    v13 = ((__int64 (__fastcall *)(intptr_t, System_Int32_array *))matchedFunc->fields.invoke_impl)(
            matchedFunc->fields.method_code,
            selfs);
    if ( (v13 & 1) != 0 )
      return 1;
  }
  if ( !v15 || !v15->max_length )
    return 0;
  if ( !mismatchFunc )
LABEL_23:
    sub_1C372B4(v13);
  return (((__int64 (__fastcall *)(intptr_t, System_Int32_array *))mismatchFunc->fields.invoke_impl)(
            mismatchFunc->fields.method_code,
            selfs)
        & 1) == 0;
}


bool Individuality__CheckSignedIndividualities_40436636(
        System_Int32_array *self,
        System_Int32_array *signedTarget,
        System_Func_int____int____bool__o *matchedFunc,
        System_Func_int____int____bool__o *mismatchFunc,
        const MethodInfo *method)
{
  bool result; // w0
  __int64 v10; // x0
  int v11; // w21
  _BOOL4 v12; // w8
  System_Int32_array *v13; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *unsignedArray; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C41EAD & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EAD = 1;
  }
  result = 1;
  v13 = 0;
  unsignedArray = 0;
  if ( signedTarget && self && signedTarget->max_length )
  {
    if ( !self->max_length )
      return 0;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    Individuality__DivideUnsignedAndSignedArray(signedTarget, &unsignedArray, &v13, (const MethodInfo *)mismatchFunc);
    if ( unsignedArray )
    {
      if ( unsignedArray->max_length )
      {
        if ( !matchedFunc )
          goto LABEL_22;
        v10 = ((__int64 (__fastcall *)(intptr_t, System_Int32_array *))matchedFunc->fields.invoke_impl)(
                matchedFunc->fields.method_code,
                self);
        v11 = v10 & 1;
      }
      else
      {
        v11 = 1;
      }
      if ( v13 )
      {
        if ( !v13->max_length )
        {
          v12 = 1;
          return (v12 & v11) != 0;
        }
        if ( mismatchFunc )
        {
          v12 = (((__int64 (__fastcall *)(intptr_t, System_Int32_array *))mismatchFunc->fields.invoke_impl)(
                   mismatchFunc->fields.method_code,
                   self)
               & 1) == 0;
          return (v12 & v11) != 0;
        }
      }
    }
LABEL_22:
    sub_1C372B4(v10);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C41EB8 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int______78107664);
    sub_1C37058(&System_Func_int____bool__TypeInfo);
    sub_1C37058(&Method_Individuality___c__DisplayClass20_0__CheckSignedMultiIndividuality_b__0__);
    sub_1C37058(&Individuality___c__DisplayClass20_0_TypeInfo);
    byte_4C41EB8 = 1;
  }
  v5 = sub_1C372A4(Individuality___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = selfArray;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)selfArray, v7, v8);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)signedTargetsArray, 0) )
    return 1;
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_int____bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_Individuality___c__DisplayClass20_0__CheckSignedMultiIndividuality_b__0__,
    0);
  return BasicHelper__Any_object__51187876(
           (System_Object_array *)signedTargetsArray,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_int______78107664);
}


bool Individuality__ContainsAllIndividualities(
        System_Int32_array *self,
        System_Int32_array *target,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  il2cpp_array_size_t max_length; // x8
  __int64 v10; // x9
  bool v11; // w24
  System_Func_int__bool__o **v12; // x21
  System_Func_int__bool__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x9
  int v17; // w8
  int v18; // w9

  if ( (byte_4C41EB0 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_Individuality___c__DisplayClass8_0__ContainsAllIndividualities_b__0__);
    sub_1C37058(&Individuality___c__DisplayClass8_0_TypeInfo);
    byte_4C41EB0 = 1;
  }
  v5 = sub_1C372A4(Individuality___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
LABEL_18:
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = target;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)target, v7, v8);
  if ( *(_QWORD *)(v5 + 16) )
  {
    LOBYTE(max_length) = 1;
    if ( self )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( v10 )
      {
        max_length = self->max_length;
        if ( max_length )
        {
          v11 = (int)v10 > 0;
          *(_DWORD *)(v5 + 24) = 0;
          if ( (int)v10 >= 1 )
          {
            v12 = (System_Func_int__bool__o **)(v5 + 32);
            do
            {
              v13 = *v12;
              if ( !*v12 )
              {
                v13 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v13,
                  (Il2CppObject *)v5,
                  Method_Individuality___c__DisplayClass8_0__ContainsAllIndividualities_b__0__,
                  0);
                *(_QWORD *)(v5 + 32) = v13;
                sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v13, v14, v15);
              }
              v6 = BasicHelper__Any_int__51187064(
                     self,
                     (System_Func_T__bool__o *)v13,
                     (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
              if ( !v6 )
                break;
              v16 = *(_QWORD *)(v5 + 16);
              v17 = *(_DWORD *)(v5 + 24) + 1;
              *(_DWORD *)(v5 + 24) = v17;
              if ( !v16 )
                goto LABEL_18;
              v18 = *(_DWORD *)(v16 + 24);
              v11 = v17 < v18;
            }
            while ( v17 < v18 );
          }
          LOBYTE(max_length) = !v11;
        }
      }
    }
  }
  else
  {
    LOBYTE(max_length) = 1;
  }
  return max_length & 1;
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
  System_Func_int__bool__o *v12; // x22

  if ( (byte_4C41EAF & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_Individuality___c__DisplayClass7_0__ContainsIndividualities_b__0__);
    sub_1C37058(&Individuality___c__DisplayClass7_0_TypeInfo);
    byte_4C41EAF = 1;
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
              v10 = sub_1C372A4(Individuality___c__DisplayClass7_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v10, 0);
              if ( v8 >= LODWORD(self->max_length) )
                sub_1C372BC(v11);
              if ( !v10 )
                sub_1C372B4(v11);
              *(_DWORD *)(v10 + 16) = self->m_Items[v8];
              v12 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v12,
                (Il2CppObject *)v10,
                Method_Individuality___c__DisplayClass7_0__ContainsIndividualities_b__0__,
                0);
              ++v8;
              v9 += BasicHelper__Any_int__51187064(
                      target,
                      (System_Func_T__bool__o *)v12,
                      (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  int32_t v12; // w1
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
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C41EAE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C41EAE = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseArray )
    goto LABEL_24;
  max_length = baseArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(v9);
      v12 = baseArray->m_Items[v11];
      if ( v12 < 1 )
      {
        if ( !v8 )
          goto LABEL_24;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v8->fields._size;
        v12 = -v12;
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
            v12,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v20 + 192) + 112LL));
          goto LABEL_20;
        }
        v16 = (char *)v13 + 4 * v15;
        v7->fields._size = v15 + 1;
      }
      *((_DWORD *)v16 + 8) = v12;
LABEL_20:
      LODWORD(max_length) = baseArray->max_length;
    }
    while ( (__int64)++v11 < (int)max_length );
  }
  if ( !v7
    || (v22 = System_Collections_Generic_List_int___ToArray(
                v7,
                (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *unsignedArray = v22,
        sub_1C36FFC((CGThumbnailListItem_o *)unsignedArray, (int32_t)v22, v23, v24),
        !v8) )
  {
LABEL_24:
    sub_1C372B4(v9);
  }
  v25 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *signedArray = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)signedArray, (int32_t)v25, v26, v27);
}


int32_t Individuality__GetMatchedCombiCount(
        System_Int32_array *selfIndivArray,
        System_Int32_array *targetIndivArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int__o *MatchedCountArray; // x0

  if ( (byte_4C41EBC & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EBC = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  MatchedCountArray = (System_Collections_Generic_IEnumerable_int__o *)Individuality__GetMatchedCountArray(
                                                                         selfIndivArray,
                                                                         targetIndivArray,
                                                                         method);
  return System_Linq_Enumerable__Min(MatchedCountArray, 0);
}


System_Int32_array *Individuality__GetMatchedCountArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  int32_t v8; // w13
  __int64 max_length_low; // x14
  unsigned __int64 v10; // x15

  v4 = selfs;
  if ( (byte_4C41EB2 & 1) == 0 )
  {
    selfs = (System_Int32_array *)sub_1C37058(&int___TypeInfo);
    byte_4C41EB2 = 1;
  }
  if ( !targets
    || (max_length = targets->max_length,
        selfs = (System_Int32_array *)sub_1C37100(int___TypeInfo, (unsigned int)max_length),
        !v4) )
  {
LABEL_19:
    sub_1C372B4(selfs);
  }
  if ( (int)v4->max_length >= 1 )
  {
    v6 = (unsigned int)v4->max_length;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 == v6 )
        goto LABEL_18;
      if ( (int)max_length >= 1 )
        break;
LABEL_16:
      if ( ++v7 == v6 )
        return selfs;
    }
    v8 = v4->m_Items[v7];
    max_length_low = LODWORD(targets->max_length);
    v10 = 0;
    while ( max_length_low != v10 )
    {
      if ( v8 == targets->m_Items[v10] )
      {
        if ( !selfs )
          goto LABEL_19;
        if ( v10 >= LODWORD(selfs->max_length) )
          break;
        ++selfs->m_Items[v10];
      }
      if ( (unsigned int)max_length == ++v10 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C372BC(selfs);
  }
  return selfs;
}


int32_t Individuality__GetMatchedTotalCount(
        System_Int32_array *selfIndividualityArray,
        System_Int32_array *targetIndividualityArray,
        const MethodInfo *method)
{
  System_Int32_array *MatchedCountArray; // x0
  __int64 max_length_low; // x9
  System_Int32_array *v7; // x8
  __int64 v8; // x0
  __int64 v9; // x10
  int32_t *m_Items; // x8
  int v11; // t1

  if ( (byte_4C41EB9 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EB9 = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  MatchedCountArray = Individuality__GetMatchedCountArray(selfIndividualityArray, targetIndividualityArray, method);
  if ( !MatchedCountArray )
    sub_1C372B4(0);
  max_length_low = LODWORD(MatchedCountArray->max_length);
  v7 = MatchedCountArray;
  if ( max_length_low << 32 < 1 )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    v8 = 0;
    v9 = (int)max_length_low;
    m_Items = v7->m_Items;
    do
    {
      if ( !max_length_low )
        sub_1C372BC(v8);
      v11 = *m_Items++;
      --v9;
      --max_length_low;
      v8 = (unsigned int)(v11 + v8);
    }
    while ( v9 );
  }
  return v8;
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
  if ( (byte_4C41EBA & 1) == 0 )
  {
    selfIndividualityArray = (System_Int32_array *)sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EBA = 1;
  }
  if ( !targetMultiIndividualityArray )
    sub_1C372B4(selfIndividualityArray);
  max_length = targetMultiIndividualityArray->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v7 >= (unsigned int)max_length )
      sub_1C372BC(selfIndividualityArray);
    v8 = targetMultiIndividualityArray->m_Items[v7];
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
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


bool Individuality__IsMatchAboveBelowEqual(
        int32_t count,
        int32_t above,
        int32_t below,
        int32_t equal,
        const MethodInfo *method)
{
  if ( (byte_4C41EBB & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EBB = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
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


bool Individuality__IsMatchArray(System_Int32_array *selfs, System_Int32_array *targets, const MethodInfo *method)
{
  bool v5; // w0
  unsigned __int64 v6; // x23
  __int64 v7; // x21
  __int64 v8; // x0
  System_Func_int__bool__o *v9; // x22

  if ( (byte_4C41EB1 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_Individuality___c__DisplayClass10_0__IsMatchArray_b__0__);
    sub_1C37058(&Individuality___c__DisplayClass10_0_TypeInfo);
    byte_4C41EB1 = 1;
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
        v7 = sub_1C372A4(Individuality___c__DisplayClass10_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v7, 0);
        if ( v6 >= LODWORD(targets->max_length) )
          sub_1C372BC(v8);
        if ( !v7 )
          sub_1C372B4(v8);
        *(_DWORD *)(v7 + 16) = targets->m_Items[v6];
        v9 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v9,
          (Il2CppObject *)v7,
          Method_Individuality___c__DisplayClass10_0__IsMatchArray_b__0__,
          0);
        v5 = BasicHelper__Any_int__51187064(
               selfs,
               (System_Func_T__bool__o *)v9,
               (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
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
  __int64 v10; // x8
  _QWORD *v11; // x21
  unsigned __int64 i; // x22
  int32_t v13; // w25
  bool v14; // cc

  if ( (byte_4C41EB4 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EB4 = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  LOBYTE(MatchedCountArray) = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      LOBYTE(MatchedCountArray) = 1;
      if ( selfs )
      {
        if ( targets->max_length )
        {
          if ( selfs->max_length )
          {
            if ( !Individuality_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, *(const MethodInfo **)&countAbove);
            if ( !MatchedCountArray )
              sub_1C372B4(0);
            v10 = MatchedCountArray[3];
            v11 = MatchedCountArray;
            if ( (int)v10 >= 1 )
            {
              for ( i = 0; (__int64)i < (int)v10; ++i )
              {
                if ( i >= (unsigned int)v10 )
                  sub_1C372BC(MatchedCountArray);
                MatchedCountArray = &Individuality_TypeInfo->_1.image;
                v13 = *((_DWORD *)v11 + i + 8);
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                if ( countAbove < 1 )
                {
                  v14 = countBelow < 1;
                }
                else
                {
                  if ( countBelow < 1 )
                  {
                    if ( v13 < countAbove )
                      goto LABEL_28;
                    goto LABEL_26;
                  }
                  v14 = v13 < countAbove;
                }
                MatchedCountArray = 0;
                if ( v14 || v13 > countBelow )
                  return (char)MatchedCountArray;
LABEL_26:
                LODWORD(v10) = *((_DWORD *)v11 + 6);
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


bool Individuality__IsPartialMatchArray(
        System_Int32_array *selfs,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  bool v3; // w8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x9
  signed __int64 v6; // x11
  int v7; // w8
  __int64 v8; // x14

  v3 = 0;
  if ( selfs && targets )
  {
    max_length = selfs->max_length;
    if ( (int)max_length < 1 )
    {
      return 0;
    }
    else
    {
      v5 = 0;
      v6 = (int)max_length;
      while ( 1 )
      {
        if ( v5 >= (unsigned int)selfs->max_length )
LABEL_16:
          sub_1C372BC(selfs);
        v7 = targets->max_length;
        if ( v7 >= 1 )
          break;
LABEL_11:
        ++v5;
        v3 = 0;
        if ( (__int64)v5 >= v6 )
          return v3;
      }
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_16;
        if ( selfs->m_Items[v5] == targets->m_Items[v8] )
          return 1;
        if ( (int)++v8 >= v7 )
          goto LABEL_11;
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
  const MethodInfo *v11; // x2
  bool result; // w0
  System_Int32_array *MatchedCountArray; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_4C41EB3 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Individuality_TypeInfo);
    sub_1C37058(&Method_Individuality___c__DisplayClass14_0__IsPartialMatchArrayCount_b__0__);
    sub_1C37058(&Individuality___c__DisplayClass14_0_TypeInfo);
    byte_4C41EB3 = 1;
  }
  v9 = sub_1C372A4(Individuality___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_DWORD *)(v9 + 16) = countAbove;
  *(_DWORD *)(v9 + 20) = countBelow;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  result = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
      if ( selfs )
      {
        if ( targets->max_length )
        {
          if ( selfs->max_length )
          {
            if ( !Individuality_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
            MatchedCountArray = Individuality__GetMatchedCountArray(selfs, targets, v11);
            v14 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v14,
              (Il2CppObject *)v9,
              Method_Individuality___c__DisplayClass14_0__IsPartialMatchArrayCount_b__0__,
              0);
            return BasicHelper__Any_int__51187064(
                     MatchedCountArray,
                     (System_Func_T__bool__o *)v14,
                     (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
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

  result = 1;
  *ret = 1;
  if ( targets )
  {
    if ( countAbove >= 1 || countBelow >= 1 )
    {
      result = 1;
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


void Individuality___c__DisplayClass10_0___ctor(Individuality___c__DisplayClass10_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass10_0___IsMatchArray_b__0(
        Individuality___c__DisplayClass10_0_o *this,
        int32_t self,
        const MethodInfo *method)
{
  return this->fields.target == self;
}


void Individuality___c__DisplayClass14_0___ctor(Individuality___c__DisplayClass14_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass14_0___IsPartialMatchArrayCount_b__0(
        Individuality___c__DisplayClass14_0_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t countBelow; // w20
  int32_t countAbove; // w21

  if ( (byte_4C41EBE & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EBE = 1;
  }
  countAbove = this->fields.countAbove;
  countBelow = this->fields.countBelow;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
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


void Individuality___c__DisplayClass20_0___ctor(Individuality___c__DisplayClass20_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass20_0___CheckSignedMultiIndividuality_b__0(
        Individuality___c__DisplayClass20_0_o *this,
        System_Int32_array *signedTargets,
        const MethodInfo *method)
{
  System_Int32_array *selfArray; // x20
  System_Func_T1__T2__TResult__o *v6; // x21
  System_Func_T1__T2__TResult__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4C41EBF & 1) == 0 )
  {
    sub_1C37058(&System_Func_int____int____bool__TypeInfo);
    sub_1C37058(&Method_Individuality_IsMatchArray__);
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C41EBF = 1;
  }
  selfArray = this->fields.selfArray;
  v6 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v6, 0, Method_Individuality_IsMatchArray__, 0);
  v7 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v7, 0, Method_Individuality_IsMatchArray__, 0);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedIndividualities_40436636(
           selfArray,
           signedTargets,
           (System_Func_int____int____bool__o *)v6,
           (System_Func_int____int____bool__o *)v7,
           v8);
}


void Individuality___c__DisplayClass7_0___ctor(Individuality___c__DisplayClass7_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass7_0___ContainsIndividualities_b__0(
        Individuality___c__DisplayClass7_0_o *this,
        int32_t tg,
        const MethodInfo *method)
{
  return this->fields.type == tg;
}


void Individuality___c__DisplayClass8_0___ctor(Individuality___c__DisplayClass8_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Individuality___c__DisplayClass8_0___ContainsAllIndividualities_b__0(
        Individuality___c__DisplayClass8_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct System_Int32_array *target; // x8
  __int64 i; // x9

  target = this->fields.target;
  if ( !target )
    sub_1C372B4(this);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(target->max_length) )
    sub_1C372BC(this);
  return target->m_Items[i] == sf;
}