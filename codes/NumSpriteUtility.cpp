int32_t NumSpriteUtility__GetDigit(int64_t num, const MethodInfo *method)
{
  double v3; // d0

  if ( (byte_4C531DC & 1) == 0 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C531DC = 1;
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


int64_t NumSpriteUtility__GetDigitNumber(int64_t number, int64_t digit, const MethodInfo *method)
{
  double v5; // d0
  signed __int64 v6; // x8

  if ( (byte_4C531DD & 1) == 0 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C531DD = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = System_Math__Pow(10.0, (double)digit, 0);
  v6 = 0xFFFFFFFF80000000LL;
  if ( v5 != INFINITY )
    v6 = (int)v5;
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
  unsigned __int64 v13; // x26
  int v14; // w27
  signed __int64 v15; // x28
  UISprite_o **m_Items; // x29
  UnityEngine_Object_o *v17; // x24
  const MethodInfo *v18; // x2
  UISprite_o *v19; // x24
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int64_t DigitNumber; // [xsp+10h] [xbp-70h] BYREF
  int v24; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C531DB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    byte_4C531DB = 1;
  }
  v24 = 0;
  DigitNumber = 0;
  if ( sprites )
  {
    Digit = NumSpriteUtility__GetDigit(number, (const MethodInfo *)sprites);
    v11 = (System_String_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                               (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v11 >= 1 )
    {
      v13 = 0;
      v14 = 0;
      v15 = Digit;
      m_Items = sprites->m_Items;
      while ( v13 < LODWORD(sprites->max_length) )
      {
        v17 = (UnityEngine_Object_o *)m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v11 = (System_String_o *)UnityEngine_Object__op_Equality(v17, 0, 0);
        if ( ((unsigned __int8)v11 & 1) == 0 )
        {
          if ( v13 >= LODWORD(sprites->max_length) )
            break;
          v19 = m_Items[v13];
          if ( (__int64)v13 <= v15 )
          {
            DigitNumber = NumSpriteUtility__GetDigitNumber(number, v14, v18);
            v21 = System_Int64__ToString((int64_t)&DigitNumber, 0);
            v11 = System_String__Concat_63636468(baseName, v21, 0);
            if ( !setSprite )
              goto LABEL_25;
            v11 = (System_String_o *)((__int64 (__fastcall *)(intptr_t, UISprite_o *, System_String_o *, intptr_t))setSprite->fields.invoke_impl)(
                                       setSprite->fields.method_code,
                                       v19,
                                       v11,
                                       setSprite->fields.method);
            if ( v13 >= LODWORD(sprites->max_length) )
              break;
            v11 = (System_String_o *)m_Items[v13];
            if ( !v11 )
              goto LABEL_25;
            ((void (__fastcall *)(System_String_o *, void *))v11->klass[1]._1.generic_class)(
              v11,
              v11->klass[1]._1.typeMetadataHandle);
          }
          else if ( padding0 )
          {
            v24 = 0;
            v20 = System_Int32__ToString((int32_t)&v24, 0);
            v11 = System_String__Concat_63636468(baseName, v20, 0);
            if ( !setSprite )
              goto LABEL_25;
            ((void (__fastcall *)(intptr_t, UISprite_o *, System_String_o *, intptr_t))setSprite->fields.invoke_impl)(
              setSprite->fields.method_code,
              v19,
              v11,
              setSprite->fields.method);
          }
          else
          {
            if ( !setSprite )
LABEL_25:
              sub_1C3E7C0(v11, v12);
            ((void (__fastcall *)(intptr_t, UISprite_o *, struct System_String_o *, intptr_t))setSprite->fields.invoke_impl)(
              setSprite->fields.method_code,
              m_Items[v13],
              string_TypeInfo->static_fields->Empty,
              setSprite->fields.method);
          }
          ++v14;
        }
        ++v13;
        v11 = (System_String_o *)System_Linq_Enumerable__Count_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                   (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v13 >= (int)v11 )
          return;
      }
      sub_1C3E7C8(v11, v12);
    }
  }
}