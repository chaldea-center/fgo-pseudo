void __fastcall MapFogData___ctor(MapFogData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40FB5BC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15929, method);
    byte_40FB5BC = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_15929;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_15929;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.propertyName, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapFogData__ApplyColor(MapFogData_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Material_array *materials; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  UnityEngine_Material_array *v13; // x20
  unsigned int v14; // w21
  UnityEngine_Material_o *v15; // x0
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  renderer = this->fields.renderer;
  if ( !renderer )
    goto LABEL_10;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  materials = UnityEngine_Renderer__get_materials(renderer, 0LL);
  if ( !materials )
    goto LABEL_10;
  max_length = materials->max_length;
  v13 = materials;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        sub_B17100(materials, v10, v11);
        sub_B170A0();
      }
      v15 = v13->m_Items[v14];
      if ( !v15 )
        break;
      v16.fields.r = r;
      v16.fields.g = g;
      v16.fields.b = b;
      v16.fields.a = a;
      UnityEngine_Material__SetColor(v15, this->fields.propertyName, v16, 0LL);
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_10:
    sub_B170D4();
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
  sub_B16F98(
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
  UnityEngine_Renderer_o *v9; // x0
  UnityEngine_Material_o *v10; // x0
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB5BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_Color___ctor__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB5BA = 1;
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
  v9 = this->fields.renderer;
  if ( !v9 || (v10 = UnityEngine_Renderer__get_material(v9, 0LL)) == 0LL )
LABEL_13:
    sub_B170D4();
  Color = UnityEngine_Material__GetColor(v10, this->fields.propertyName, 0LL);
  *(_DWORD *)&retstr->fields.has_value = 0;
  *(_QWORD *)&retstr->fields.value.fields.r = 0LL;
  *(_QWORD *)&retstr->fields.value.fields.b = 0LL;
  System_Nullable_Color____ctor(retstr, Color, (const MethodInfo_2965EB0 *)Method_System_Nullable_Color___ctor__);
  return result;
}


bool __fastcall MapFogData__get_HasRenderer(MapFogData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x19

  if ( (byte_40FB5BB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB5BB = 1;
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