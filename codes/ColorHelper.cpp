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
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF0027 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_Color___ctor__);
    sub_1C7BAE8(&StringLiteral_370/*"#"*/);
    sub_1C7BAE8(&StringLiteral_1162/*"0x"*/);
    byte_4CF0027 = 1;
  }
  *(_QWORD *)&v9.fields.r = 0;
  *(_QWORD *)&v9.fields.b = 0;
  result = (System_Nullable_Color__o *)System_String__IsNullOrEmpty(colorCode, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
    goto LABEL_12;
  if ( !colorCode )
    sub_1C7BD40(result, v6);
  if ( System_String__StartsWith_64213900(colorCode, (System_String_o *)StringLiteral_1162/*"0x"*/, 5, 0) )
  {
    v7 = System_String__Substring_64222852(colorCode, 2, colorCode->fields._stringLength - 2, 0);
    v8 = (System_String_o *)StringLiteral_370/*"#"*/;
  }
  else
  {
    if ( System_String__StartsWith(colorCode, (System_String_o *)StringLiteral_370/*"#"*/, 0) )
      goto LABEL_10;
    v8 = (System_String_o *)StringLiteral_370/*"#"*/;
    v7 = colorCode;
  }
  colorCode = System_String__Concat_64176912(v8, v7, 0);
LABEL_10:
  result = (System_Nullable_Color__o *)UnityEngine_ColorUtility__TryParseHtmlString(colorCode, &v9, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v10 = v9;
    *(_QWORD *)&retstr->fields.hasValue = 0;
    *(_QWORD *)&retstr->fields.value.fields.g = 0;
    retstr->fields.value.fields.a = 0.0;
    System_Nullable_Color____ctor(retstr, v10, (const MethodInfo_3962190 *)Method_System_Nullable_Color___ctor__);
    return result;
  }
LABEL_12:
  *(_QWORD *)&retstr->fields.hasValue = 0;
  *(_QWORD *)&retstr->fields.value.fields.g = 0;
  retstr->fields.value.fields.a = 0.0;
  return result;
}


UnityEngine_Color_o ColorHelper__ParseColorCode_44672296(
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
  System_Nullable_Color__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4CF0028 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_Color__get_HasValue__);
    byte_4CF0028 = 1;
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


float ColorHelper___GetClamped_g__Clamp_0_0(float value, const MethodInfo *method)
{
  float result; // s0

  if ( (byte_4CF0029 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CF0029 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4CF0150 )
  {
    sub_1C7BAE8(&Method_System_Math_ThrowMinMaxException_float___);
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CF0150 = 1;
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