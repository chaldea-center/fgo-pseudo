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
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = colorToClamp.fields.a;
  b = colorToClamp.fields.b;
  g = colorToClamp.fields.g;
  Clamped_g__Clamp_0_0 = ColorHelper___GetClamped_g__Clamp_0_0(colorToClamp.fields.r, method);
  v7 = ColorHelper___GetClamped_g__Clamp_0_0(g, v6);
  v9 = ColorHelper___GetClamped_g__Clamp_0_0(b, v8);
  v11 = ColorHelper___GetClamped_g__Clamp_0_0(a, v10);
  result.fields.b = v9;
  result.fields.a = v11;
  result.fields.r = Clamped_g__Clamp_0_0;
  result.fields.g = v7;
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
  float b; // s2
  float a; // s3
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v12; // 0:kr00_16.16
  __int64 v13; // 0:s0.4,4:s1.4

  if ( (byte_4D323B4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_Color___ctor__);
    sub_1C93AD4(&StringLiteral_370/*"#"*/);
    sub_1C93AD4(&StringLiteral_1162/*"0x"*/);
    byte_4D323B4 = 1;
  }
  *(_QWORD *)&v11.fields.r = 0;
  *(_QWORD *)&v11.fields.b = 0;
  result = (System_Nullable_Color__o *)System_String__IsNullOrEmpty(colorCode, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
    goto LABEL_12;
  if ( !colorCode )
    sub_1C93D2C(result, v6);
  if ( System_String__StartsWith_64462712(colorCode, (System_String_o *)StringLiteral_1162/*"0x"*/, 5, 0) )
  {
    v7 = System_String__Substring_64471664(colorCode, 2, colorCode->fields._stringLength - 2, 0);
    v8 = (System_String_o *)StringLiteral_370/*"#"*/;
  }
  else
  {
    if ( System_String__StartsWith(colorCode, (System_String_o *)StringLiteral_370/*"#"*/, 0) )
      goto LABEL_10;
    v8 = (System_String_o *)StringLiteral_370/*"#"*/;
    v7 = colorCode;
  }
  colorCode = System_String__Concat_64425724(v8, v7, 0);
LABEL_10:
  result = (System_Nullable_Color__o *)UnityEngine_ColorUtility__TryParseHtmlString(colorCode, &v11, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v13 = *(_QWORD *)&v11.fields.r;
    b = v11.fields.b;
    a = v11.fields.a;
    *(_QWORD *)&retstr->fields.hasValue = 0;
    *(_QWORD *)&retstr->fields.value.fields.g = 0;
    retstr->fields.value.fields.a = 0.0;
    *(_QWORD *)&v12.fields.r = v13;
    v12.fields.b = b;
    v12.fields.a = a;
    System_Nullable_Color____ctor(retstr, v12, (const MethodInfo_399CD48 *)Method_System_Nullable_Color___ctor__);
    return result;
  }
LABEL_12:
  *(_QWORD *)&retstr->fields.hasValue = 0;
  *(_QWORD *)&retstr->fields.value.fields.g = 0;
  retstr->fields.value.fields.a = 0.0;
  return result;
}


UnityEngine_Color_o ColorHelper__ParseColorCode_44837332(
        System_String_o *colorCode,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  System_Nullable_Color__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4D323B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_Color__get_HasValue__);
    byte_4D323B5 = 1;
  }
  ColorHelper__ParseColorCode(&v12, colorCode, method);
  if ( v12.fields.hasValue )
  {
    r = v12.fields.value.fields.r;
    g = v12.fields.value.fields.g;
    b = v12.fields.value.fields.b;
    a = v12.fields.value.fields.a;
  }
  result.fields.r = r;
  result.fields.g = g;
  result.fields.b = b;
  result.fields.a = a;
  return result;
}


float ColorHelper___GetClamped_g__Clamp_0_0(float value, const MethodInfo *method)
{
  float result; // s0

  if ( (byte_4D323B6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D323B6 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4D324D6 )
  {
    sub_1C93AD4(&Method_System_Math_ThrowMinMaxException_float___);
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D324D6 = 1;
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