void __fastcall FGO_param3anim___ctor(FGO_param3anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.three_value.fields.y = 0LL;
  LODWORD(this->fields._renderer) = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param3anim__Start(FGO_param3anim_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_438B8C9 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B775C4(&StringLiteral_16495/*"_threeValue2"*/);
    sub_B775C4(&StringLiteral_16490/*"_threeValue0"*/);
    sub_B775C4(&StringLiteral_16491/*"_threeValue1"*/);
    byte_438B8C9 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v4 = (UnityEngine_Renderer_o **)&this[1];
  this[1].klass = (FGO_param3anim_c *)Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16490/*"_threeValue0"*/, 0LL);
  klass = *v4;
  if ( !*v4 )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16491/*"_threeValue1"*/, 0LL);
  klass = *v4;
  if ( !*v4 )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16495/*"_threeValue2"*/, 0LL);
  klass = *v4;
  if ( !*v4
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16490/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16491/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B7769C(klass, v11);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16495/*"_threeValue2"*/,
    *(float *)&this->fields._renderer,
    0LL);
}


void __fastcall FGO_param3anim__Update(FGO_param3anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_438B8CA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16495/*"_threeValue2"*/);
    sub_B775C4(&StringLiteral_16490/*"_threeValue0"*/);
    sub_B775C4(&StringLiteral_16491/*"_threeValue1"*/);
    byte_438B8CA = 1;
  }
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16490/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16491/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
    sub_B7769C(klass, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16495/*"_threeValue2"*/,
    *(float *)&this->fields._renderer,
    0LL);
}