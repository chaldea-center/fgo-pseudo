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
  UnityEngine_Renderer_o *klass; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v16; // x0
  UnityEngine_Material_o *v17; // x0
  UnityEngine_Material_o *v18; // x0
  UnityEngine_Renderer_o *v19; // x0
  UnityEngine_Material_o *v20; // x0
  UnityEngine_Renderer_o *v21; // x0
  UnityEngine_Material_o *v22; // x0

  if ( (byte_40F9F6C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B16FFC(&StringLiteral_16123/*"_threeValue2"*/, v3);
    sub_B16FFC(&StringLiteral_16118/*"_threeValue0"*/, v4);
    sub_B16FFC(&StringLiteral_16119/*"_threeValue1"*/, v5);
    byte_40F9F6C = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v7 = (UnityEngine_Renderer_o **)&this[1];
  this[1].klass = (FGO_param3anim_c *)Component_WebViewObject;
  sub_B16F98(
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
  material = UnityEngine_Renderer__get_material(klass, 0LL);
  if ( !material )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16118/*"_threeValue0"*/, 0LL);
  if ( !*v7 )
    goto LABEL_16;
  v16 = UnityEngine_Renderer__get_material(*v7, 0LL);
  if ( !v16 )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword(v16, (System_String_o *)StringLiteral_16119/*"_threeValue1"*/, 0LL);
  if ( !*v7 )
    goto LABEL_16;
  v17 = UnityEngine_Renderer__get_material(*v7, 0LL);
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword(v17, (System_String_o *)StringLiteral_16123/*"_threeValue2"*/, 0LL);
  if ( !*v7
    || (v18 = UnityEngine_Renderer__get_material(*v7, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          v18,
          (System_String_o *)StringLiteral_16118/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (v19 = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (v20 = UnityEngine_Renderer__get_material(v19, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          v20,
          (System_String_o *)StringLiteral_16119/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (v21 = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (v22 = UnityEngine_Renderer__get_material(v21, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  UnityEngine_Material__SetFloat(v22, (System_String_o *)StringLiteral_16123/*"_threeValue2"*/, *(float *)&this->fields._renderer, 0LL);
}


void __fastcall FGO_param3anim__Update(FGO_param3anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Renderer_o *klass; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Renderer_o *v7; // x0
  UnityEngine_Material_o *v8; // x0
  UnityEngine_Renderer_o *v9; // x0
  UnityEngine_Material_o *v10; // x0

  if ( (byte_40F9F6D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16123/*"_threeValue2"*/, method);
    sub_B16FFC(&StringLiteral_16118/*"_threeValue0"*/, v3);
    sub_B16FFC(&StringLiteral_16119/*"_threeValue1"*/, v4);
    byte_40F9F6D = 1;
  }
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass
    || (material = UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16118/*"_threeValue0"*/,
          this->fields.three_value.fields.y,
          0LL),
        (v7 = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (v8 = UnityEngine_Renderer__get_material(v7, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          v8,
          (System_String_o *)StringLiteral_16119/*"_threeValue1"*/,
          this->fields.three_value.fields.z,
          0LL),
        (v9 = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
    || (v10 = UnityEngine_Renderer__get_material(v9, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Material__SetFloat(v10, (System_String_o *)StringLiteral_16123/*"_threeValue2"*/, *(float *)&this->fields._renderer, 0LL);
}