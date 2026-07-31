UnityEngine_Color_o ColorHelper__GetClamped(UnityEngine_Color_o colorToClamp, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float Clamped_g__Clamp_0_0; // s11
  const MethodInfo *v6; // x0
  float v7; // s10
  const MethodInfo *v8; // x0
  float v9; // s9
  const MethodInfo *v10; // x0
  float v11; // s0
  float v12; // s2
  float v13; // s3
  float v14; // s0
  float v15; // s1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = colorToClamp.fields.a;
  b = colorToClamp.fields.b;
  g = colorToClamp.fields.g;
  Clamped_g__Clamp_0_0 = ColorHelper___GetClamped_g__Clamp_0_0(colorToClamp.fields.r, method);
  v7 = ColorHelper___GetClamped_g__Clamp_0_0(g, v6);
  v9 = ColorHelper___GetClamped_g__Clamp_0_0(b, v8);
  v11 = ColorHelper___GetClamped_g__Clamp_0_0(a, v10);
  v12 = v9;
  v13 = v11;
  v14 = Clamped_g__Clamp_0_0;
  v15 = v7;
  result.fields.a = v13;
  result.fields.b = v12;
  result.fields.g = v15;
  result.fields.r = v14;
  return result;
}


System_Nullable_Color__o *ColorHelper__ParseColorCode(
        System_Nullable_Color__o *__return_ptr retstr,
        System_String_o *colorCode,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  __int64 v6; // x1
  System_String_o *v7; // x1
  System_String_o *v8; // x0
  const MethodInfo_45AD82C *v9; // x1
  UnityEngine_Color_o v10; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593A0F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Color___ctor__);
    sub_21FFC50(&StringLiteral_395/*"#"*/);
    sub_21FFC50(&StringLiteral_1244/*"0x"*/);
    byte_593A0F2 = 1;
  }
  *(_QWORD *)&v10.fields.r = 0;
  *(_QWORD *)&v10.fields.b = 0;
  result = (System_Nullable_Color__o *)System_String__IsNullOrEmpty(colorCode, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
    goto LABEL_12;
  if ( !colorCode )
    sub_21FFECC(result, v6);
  if ( System_String__StartsWith_75474912(colorCode, (System_String_o *)StringLiteral_1244/*"0x"*/, 5, 0) )
  {
    v7 = System_String__Substring_75489544(colorCode, 2, colorCode->fields._stringLength - 2, 0);
    v8 = (System_String_o *)StringLiteral_395/*"#"*/;
  }
  else
  {
    if ( System_String__StartsWith(colorCode, (System_String_o *)StringLiteral_395/*"#"*/, 0) )
      goto LABEL_10;
    v8 = (System_String_o *)StringLiteral_395/*"#"*/;
    v7 = colorCode;
  }
  colorCode = System_String__Concat_75438412(v8, v7, 0);
LABEL_10:
  result = (System_Nullable_Color__o *)UnityEngine_ColorUtility__TryParseHtmlString(colorCode, &v10, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v11 = v10;
    *(_QWORD *)&retstr->fields.hasValue = 0;
    *(_QWORD *)&retstr->fields.value.fields.g = 0;
    v9 = (const MethodInfo_45AD82C *)Method_System_Nullable_Color___ctor__;
    retstr->fields.value.fields.a = 0.0;
    System_Nullable_Color____ctor(retstr, v11, v9);
    return result;
  }
LABEL_12:
  *(_QWORD *)&retstr->fields.hasValue = 0;
  *(_QWORD *)&retstr->fields.value.fields.g = 0;
  retstr->fields.value.fields.a = 0.0;
  return result;
}


UnityEngine_Color_o ColorHelper__ParseColorCode_51093332(
        System_String_o *colorCode,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  System_Nullable_Color__o v12; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_593A0F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_Color__get_HasValue__);
    byte_593A0F3 = 1;
  }
  ColorHelper__ParseColorCode(&v12, colorCode, method);
  if ( v12.fields.hasValue )
  {
    r = v12.fields.value.fields.r;
    g = v12.fields.value.fields.g;
    b = v12.fields.value.fields.b;
    a = v12.fields.value.fields.a;
  }
  v8 = r;
  v9 = g;
  v10 = b;
  v11 = a;
  result.fields.a = v11;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v8;
  return result;
}


int32_t ColorHelper__ToByteColor(float normalizedColor, const MethodInfo *method)
{
  float v2; // s1
  float v3; // s1
  float v4; // s0

  v2 = 1.0;
  if ( normalizedColor <= 1.0 )
    v2 = normalizedColor;
  v3 = v2 * 255.0;
  if ( normalizedColor >= 0.0 )
    v4 = v3;
  else
    v4 = 0.0;
  if ( v4 == INFINITY )
    return 0x80000000;
  else
    return (int)v4;
}


float ColorHelper__ToNormalizedColor(int32_t byteColor, const MethodInfo *method)
{
  int32_t v2; // w8

  if ( byteColor >= 255 )
    v2 = 255;
  else
    v2 = byteColor;
  return (float)(v2 & ~(v2 >> 31)) / 255.0;
}


float ColorHelper___GetClamped_g__Clamp_0_0(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  float result; // s0

  if ( (byte_593A0F4 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593A0F4 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  if ( !byte_593A284 )
  {
    sub_21FFC50(&Method_System_Math_ThrowMinMaxException_float___);
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593A284 = 1;
  }
  result = 0.0;
  if ( value >= 0.0 )
  {
    result = 1.0;
    if ( value <= 1.0 )
      return value;
  }
  return result;
}