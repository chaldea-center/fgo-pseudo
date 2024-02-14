void __fastcall MapFogData___ctor(MapFogData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42129B2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16040/*"_FogColor"*/, method);
    byte_42129B2 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16040/*"_FogColor"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16040/*"_FogColor"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.propertyName, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapFogData__ApplyColor(MapFogData_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  void *renderer; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w21
  __int64 v12; // x0
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  renderer = this->fields.renderer;
  if ( !renderer )
    goto LABEL_10;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  renderer = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)renderer, 0LL);
  if ( !renderer )
    goto LABEL_10;
  v9 = *((_DWORD *)renderer + 6);
  v10 = renderer;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
      {
        v12 = sub_B0D9A8(renderer);
        sub_B0D948(v12, 0LL);
      }
      renderer = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !renderer )
        break;
      v13.fields.r = r;
      v13.fields.g = g;
      v13.fields.b = b;
      v13.fields.a = a;
      UnityEngine_Material__SetColor((UnityEngine_Material_o *)renderer, this->fields.propertyName, v13, 0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        return;
    }
LABEL_10:
    sub_B0D97C(renderer);
  }
}


void __fastcall MapFogData__SetRenderer(
        MapFogData_o *this,
        UnityEngine_Renderer_o *setRenderer,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.renderer = setRenderer;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)setRenderer,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_Nullable_Color__o *__fastcall MapFogData__get_Color(
        System_Nullable_Color__o *retstr,
        MapFogData_o *this,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Nullable_Color__o *result; // x0
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Object_o *material; // x21
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42129B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_Color___ctor__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42129B0 = 1;
  }
  result = (System_Nullable_Color__o *)MapFogData__get_HasRenderer(this, method);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_9;
  renderer = this->fields.renderer;
  if ( !renderer )
    goto LABEL_13;
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  result = (System_Nullable_Color__o *)UnityEngine_Object__op_Equality(material, 0LL, 0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_9:
    *(_QWORD *)&retstr->fields.value.fields.r = 0LL;
    *(_QWORD *)&retstr->fields.value.fields.b = 0LL;
    *(_DWORD *)&retstr->fields.has_value = 0;
    return result;
  }
  renderer = this->fields.renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
LABEL_13:
    sub_B0D97C(renderer);
  Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)renderer, this->fields.propertyName, 0LL);
  *(_DWORD *)&retstr->fields.has_value = 0;
  *(_QWORD *)&retstr->fields.value.fields.r = 0LL;
  *(_QWORD *)&retstr->fields.value.fields.b = 0LL;
  System_Nullable_Color____ctor(retstr, Color, (const MethodInfo_297D0AC *)Method_System_Nullable_Color___ctor__);
  return result;
}


bool __fastcall MapFogData__get_HasRenderer(MapFogData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x19

  if ( (byte_42129B1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42129B1 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL);
}


UnityEngine_Renderer_o *__fastcall MapFogData__get_Renderer(MapFogData_o *this, const MethodInfo *method)
{
  return this->fields.renderer;
}