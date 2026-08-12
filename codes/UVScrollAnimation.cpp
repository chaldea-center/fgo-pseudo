void UVScrollAnimation___ctor(UVScrollAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UVScrollAnimation__Start(UVScrollAnimation_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void UVScrollAnimation__Update(UVScrollAnimation_o *this, const MethodInfo *method)
{
  UVScrollAnimation__UpdateUVOffset(this, method);
}


void UVScrollAnimation__UpdateUVOffset(UVScrollAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Component_object; // x20
  UnityEngine_Material_o *material; // x0
  __int64 v7; // x1
  float32x2_t v8; // d0
  int8x8_t v9; // d0
  float v15; // [xsp+0h] [xbp-70h]
  float offsetYPerSec; // [xsp+10h] [xbp-60h]
  float time; // [xsp+20h] [xbp-50h]
  float offsetXPerSec; // [xsp+30h] [xbp-40h]

  if ( (byte_596DB77 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    byte_596DB77 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    if ( !Component_object )
      goto LABEL_12;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0);
    if ( !material )
      goto LABEL_12;
    if ( UnityEngine_Material__HasProperty_83277340(material, (System_String_o *)StringLiteral_16914/*"_MainTex"*/, 0) )
    {
      time = UnityEngine_Time__get_time(0);
      offsetXPerSec = this->fields.offsetXPerSec;
      v15 = UnityEngine_Time__get_time(0);
      offsetYPerSec = this->fields.offsetYPerSec;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0);
      if ( material )
      {
        v8.n64_u64[0] = vmul_f32(
                          (float32x2_t)__PAIR64__(LODWORD(v15), LODWORD(time)),
                          (float32x2_t)__PAIR64__(LODWORD(offsetYPerSec), LODWORD(offsetXPerSec))).n64_u64[0];
        v9.n64_u64[0] = vsub_f32(v8, vrndm_f32(v8)).n64_u64[0];
        __asm { FMOV            V1.2S, #1.0 }
        UnityEngine_Material__SetTextureOffset(
          material,
          (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
          (UnityEngine_Vector2_o)vbic_s8(vbsl_s8(vcgt_f32(v9, _D1), _D1, v9), vcltz_f32(v9)).n64_u64[0],
          0);
        return;
      }
LABEL_12:
      sub_2213CDC(material, v7);
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}