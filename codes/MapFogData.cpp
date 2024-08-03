void __fastcall MapFogData___ctor(MapFogData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49F92D5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16156/*"_FogColor"*/, method);
    byte_49F92D5 = 1;
  }
  v5 = StringLiteral_16156/*"_FogColor"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16156/*"_FogColor"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.propertyName, v5, v2, v3);
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
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w21
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
  v10 = *((_DWORD *)renderer + 6);
  v11 = renderer;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1B6432C(renderer, v9);
      renderer = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !renderer )
        break;
      v13.fields.r = r;
      v13.fields.g = g;
      v13.fields.b = b;
      v13.fields.a = a;
      UnityEngine_Material__SetColor((UnityEngine_Material_o *)renderer, this->fields.propertyName, v13, 0LL);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_10:
    sub_1B64324(renderer);
  }
}


void __fastcall MapFogData__SetRenderer(
        MapFogData_o *this,
        UnityEngine_Renderer_o *setRenderer,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.renderer = setRenderer;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)setRenderer, (int32_t)method, v3);
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

  if ( (byte_49F92D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_Color___ctor__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F92D3 = 1;
  }
  result = (System_Nullable_Color__o *)MapFogData__get_HasRenderer(this, method);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_8;
  renderer = this->fields.renderer;
  if ( !renderer )
    goto LABEL_12;
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (System_Nullable_Color__o *)UnityEngine_Object__op_Equality(material, 0LL, 0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_8:
    *(_QWORD *)&retstr->fields.hasValue = 0LL;
    *(_QWORD *)&retstr->fields.value.fields.g = 0LL;
    retstr->fields.value.fields.a = 0.0;
    return result;
  }
  renderer = this->fields.renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
LABEL_12:
    sub_1B64324(renderer);
  Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)renderer, this->fields.propertyName, 0LL);
  *(_QWORD *)&retstr->fields.hasValue = 0LL;
  *(_QWORD *)&retstr->fields.value.fields.g = 0LL;
  retstr->fields.value.fields.a = 0.0;
  System_Nullable_Color____ctor(retstr, Color, (const MethodInfo_35CAEC8 *)Method_System_Nullable_Color___ctor__);
  return result;
}


bool __fastcall MapFogData__get_HasRenderer(MapFogData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x19

  if ( (byte_49F92D4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F92D4 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL);
}


UnityEngine_Renderer_o *__fastcall MapFogData__get_Renderer(MapFogData_o *this, const MethodInfo *method)
{
  return this->fields.renderer;
}