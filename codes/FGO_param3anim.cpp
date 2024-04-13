void __fastcall FGO_param3anim___ctor(FGO_param3anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.three_value.fields.y = 0LL;
  LODWORD(this->fields._renderer) = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param3anim__Start(FGO_param3anim_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_42E8C8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16381/*"_threeValue2"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16376/*"_threeValue0"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16377/*"_threeValue1"*/, v11, v12, v13);
    byte_42E8C8F = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v15 = (UnityEngine_Renderer_o **)&this[1];
  this[1].klass = (FGO_param3anim_c *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16376/*"_threeValue0"*/, 0LL);
  klass = *v15;
  if ( !*v15 )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16377/*"_threeValue1"*/, 0LL);
  klass = *v15;
  if ( !*v15 )
    goto LABEL_16;
  klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !klass )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)klass, (System_String_o *)StringLiteral_16381/*"_threeValue2"*/, 0LL);
  klass = *v15;
  if ( !*v15
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16376/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16377/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(klass, v22);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16381/*"_threeValue2"*/,
    *(float *)&this->fields._renderer,
    0LL);
}


void __fastcall FGO_param3anim__Update(FGO_param3anim_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_42E8C90 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16381/*"_threeValue2"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16376/*"_threeValue0"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16377/*"_threeValue1"*/, v8, v9, v10);
    byte_42E8C90 = 1;
  }
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16376/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16377/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (klass = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
    sub_B5D69C(klass, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16381/*"_threeValue2"*/,
    *(float *)&this->fields._renderer,
    0LL);
}