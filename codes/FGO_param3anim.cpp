void __fastcall FGO_param3anim___ctor(FGO_param3anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.three_value.fields.y = 0LL;
  LODWORD(this->fields._renderer) = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param3anim__Start(FGO_param3anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_41885BF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&StringLiteral_16188/*"_threeValue2"*/, v3);
    sub_B2C35C(&StringLiteral_16183/*"_threeValue0"*/, v4);
    sub_B2C35C(&StringLiteral_16184/*"_threeValue1"*/, v5);
    byte_41885BF = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v7 = (UnityEngine_Renderer_o **)&this[1];
  this[1].klass = (FGO_param3anim_c *)Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16183/*"_threeValue0"*/, 0LL);
  klass = *v7;
  if ( !*v7 )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16184/*"_threeValue1"*/, 0LL);
  klass = *v7;
  if ( !*v7 )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16188/*"_threeValue2"*/, 0LL);
  klass = *v7;
  if ( !*v7
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16183/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16184/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B2C434(klass, v14);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16188/*"_threeValue2"*/,
    *(float *)&this->fields._renderer,
    0LL);
}


void __fastcall FGO_param3anim__Update(FGO_param3anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_41885C0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16188/*"_threeValue2"*/, method);
    sub_B2C35C(&StringLiteral_16183/*"_threeValue0"*/, v3);
    sub_B2C35C(&StringLiteral_16184/*"_threeValue1"*/, v4);
    byte_41885C0 = 1;
  }
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16183/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16184/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
    sub_B2C434(klass, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16188/*"_threeValue2"*/,
    *(float *)&this->fields._renderer,
    0LL);
}