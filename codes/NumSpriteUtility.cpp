int32_t __fastcall NumSpriteUtility__GetDigit(int64_t num, const MethodInfo *method)
{
  double v3; // d0

  if ( (byte_4B40F49 & 1) == 0 )
  {
    sub_1BDB878(&System_Math_TypeInfo, method);
    byte_4B40F49 = 1;
  }
  if ( !num )
    return 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = log10((double)num);
  if ( v3 == INFINITY )
    return 0x80000000;
  else
    return (int)v3;
}


int64_t __fastcall NumSpriteUtility__GetDigitNumber(int64_t number, int64_t digit, const MethodInfo *method)
{
  double v5; // d0
  signed __int64 v6; // x8

  if ( (byte_4B40F4A & 1) == 0 )
  {
    sub_1BDB878(&System_Math_TypeInfo, digit);
    byte_4B40F4A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = System_Math__Pow(10.0, (double)digit, 0LL);
  v6 = 0xFFFFFFFF80000000LL;
  if ( v5 != INFINITY )
    v6 = (int)v5;
  return number / v6 % 10;
}


void __fastcall NumSpriteUtility__SetNumSprite(
        int64_t number,
        UISprite_array *sprites,
        System_String_o *baseName,
        System_Action_UISprite__string__o *setSprite,
        bool padding0,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t Digit; // w24
  System_String_o *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  unsigned __int64 v16; // x26
  int v17; // w27
  signed __int64 v18; // x28
  UISprite_o **m_Items; // x29
  UnityEngine_Object_o *v20; // x24
  UISprite_o *v21; // x24
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  int64_t DigitNumber; // [xsp+10h] [xbp-70h] BYREF
  int v26; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B40F48 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_UISprite___, sprites);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&string_TypeInfo, v11);
    byte_4B40F48 = 1;
  }
  v26 = 0;
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = NumSpriteUtility__GetDigit(number, (const MethodInfo *)sprites);
    v13 = (System_String_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                               (const MethodInfo_304FE28 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v13 >= 1 )
    {
      v16 = 0LL;
      v17 = 0;
      v18 = Digit;
      m_Items = sprites->m_Items;
      while ( v16 < sprites->max_length )
      {
        v20 = (UnityEngine_Object_o *)m_Items[v16];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = (System_String_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
        if ( ((unsigned __int8)v13 & 1) == 0 )
        {
          if ( v16 >= sprites->max_length )
            break;
          v21 = m_Items[v16];
          if ( (__int64)v16 <= v18 )
          {
            DigitNumber = NumSpriteUtility__GetDigitNumber(number, v17, v15);
            v23 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v13 = System_String__Concat_62572260(baseName, v23, 0LL);
            if ( !setSprite )
              goto LABEL_25;
            v13 = (System_String_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, UISprite_o *, System_String_o *, _QWORD))setSprite->fields.m_target)(
                                       setSprite->fields.original_method_info,
                                       v21,
                                       v13,
                                       *(_QWORD *)&setSprite->fields.extra_arg);
            if ( v16 >= sprites->max_length )
              break;
            v13 = (System_String_o *)m_Items[v16];
            if ( !v13 )
              goto LABEL_25;
            ((void (__fastcall *)(System_String_o *, void *))v13->klass[1]._1.typeMetadataHandle)(
              v13,
              v13->klass[1]._1.interopData);
          }
          else if ( padding0 )
          {
            v26 = 0;
            v22 = System_Int32__ToString((int32_t)&v26, 0LL);
            v13 = System_String__Concat_62572260(baseName, v22, 0LL);
            if ( !setSprite )
              goto LABEL_25;
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UISprite_o *, System_String_o *, _QWORD))setSprite->fields.m_target)(
              setSprite->fields.original_method_info,
              v21,
              v13,
              *(_QWORD *)&setSprite->fields.extra_arg);
          }
          else
          {
            if ( !setSprite )
LABEL_25:
              sub_1BDBAD4(v13, v14);
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UISprite_o *, struct System_String_o *, _QWORD))setSprite->fields.m_target)(
              setSprite->fields.original_method_info,
              m_Items[v16],
              string_TypeInfo->static_fields->Empty,
              *(_QWORD *)&setSprite->fields.extra_arg);
          }
          ++v17;
        }
        ++v16;
        v13 = (System_String_o *)System_Linq_Enumerable__Count_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                   (const MethodInfo_304FE28 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v16 >= (int)v13 )
          return;
      }
      sub_1BDBADC(v13, v14, v15);
    }
  }
}