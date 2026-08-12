int32_t NumSpriteUtility__GetDigit(int64_t num, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C9D5 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596C9D5 = 1;
  }
  if ( !num )
    return 0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  return (int)log10((double)num);
}


int64_t NumSpriteUtility__GetDigitNumber(int64_t number, int64_t digit, const MethodInfo *method)
{
  double v5; // d0
  signed __int64 v6; // x8

  if ( (byte_596C9D6 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596C9D6 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, digit, method);
  v5 = System_Math__Pow(10.0, (double)digit, 0);
  v6 = (int)v5;
  if ( v5 == INFINITY )
    v6 = 0xFFFFFFFF80000000LL;
  return number / v6 % 10;
}


void NumSpriteUtility__SetNumSprite(
        int64_t number,
        UISprite_array *sprites,
        System_String_o *baseName,
        System_Action_UISprite__string__o *setSprite,
        bool padding0,
        const MethodInfo *method)
{
  int32_t Digit; // w24
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  signed __int64 v14; // x28
  int v15; // w26
  __int64 v16; // x29
  unsigned __int64 v17; // x19
  UnityEngine_Object_o *v18; // x24
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  unsigned __int64 max_length_low; // x8
  __int64 v22; // x24
  System_String_o *v23; // x0
  __int64 v24; // x24
  System_String_o *v25; // x0
  __int64 v26; // x8
  int64_t DigitNumber; // [xsp+10h] [xbp-70h] BYREF
  int v29; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_596C9D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C9D4 = 1;
  }
  v29 = 0;
  DigitNumber = 0;
  if ( sprites )
  {
    Digit = NumSpriteUtility__GetDigit(number, (const MethodInfo *)sprites);
    v11 = (System_String_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                               (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v11 >= 1 )
    {
      v14 = Digit;
      v15 = 0;
      v16 = 4;
      do
      {
        v17 = v16 - 4;
        if ( v16 - 4 >= (unsigned __int64)LODWORD(sprites->max_length) )
LABEL_26:
          sub_2213CE4(v11);
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&sprites->obj.klass + v16);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        v11 = (System_String_o *)UnityEngine_Object__op_Equality(v18, 0, 0);
        if ( ((unsigned __int8)v11 & 1) == 0 )
        {
          max_length_low = LODWORD(sprites->max_length);
          if ( (__int64)v17 <= v14 )
          {
            if ( v17 >= max_length_low )
              goto LABEL_26;
            v24 = *((_QWORD *)&sprites->obj.klass + v16);
            DigitNumber = NumSpriteUtility__GetDigitNumber(number, v15, v20);
            v25 = System_Int64__ToString((int64_t)&DigitNumber, 0);
            v11 = System_String__Concat_75651716(baseName, v25, 0);
            if ( !setSprite )
              goto LABEL_27;
            v11 = (System_String_o *)((__int64 (__fastcall *)(intptr_t, __int64, System_String_o *, intptr_t))setSprite->fields.invoke_impl)(
                                       setSprite->fields.method_code,
                                       v24,
                                       v11,
                                       setSprite->fields.method);
            if ( v17 >= LODWORD(sprites->max_length) )
              goto LABEL_26;
            v11 = (System_String_o *)*((_QWORD *)&sprites->obj.klass + v16);
            if ( !v11 )
              goto LABEL_27;
            ((void (__fastcall *)(System_String_o *, void *))v11->klass[1]._1.generic_class)(
              v11,
              v11->klass[1]._1.typeMetadataHandle);
          }
          else if ( padding0 )
          {
            if ( v17 >= max_length_low )
              goto LABEL_26;
            v22 = *((_QWORD *)&sprites->obj.klass + v16);
            v29 = 0;
            v23 = System_Int32__ToString((int32_t)&v29, 0);
            v11 = System_String__Concat_75651716(baseName, v23, 0);
            if ( !setSprite )
              goto LABEL_27;
            ((void (__fastcall *)(intptr_t, __int64, System_String_o *, intptr_t))setSprite->fields.invoke_impl)(
              setSprite->fields.method_code,
              v22,
              v11,
              setSprite->fields.method);
          }
          else
          {
            if ( v17 >= max_length_low )
              goto LABEL_26;
            if ( !setSprite )
LABEL_27:
              sub_2213CDC(v11, v19);
            ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))setSprite->fields.invoke_impl)(
              setSprite->fields.method_code,
              *((_QWORD *)&sprites->obj.klass + v16),
              **(_QWORD **)(qword_5984390 + 184),
              setSprite->fields.method);
          }
          ++v15;
        }
        v11 = (System_String_o *)System_Linq_Enumerable__Count_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                   (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_UISprite___);
        v26 = v16 - 3;
        ++v16;
      }
      while ( v26 < (int)v11 );
    }
  }
}