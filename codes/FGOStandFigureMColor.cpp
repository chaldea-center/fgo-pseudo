void __fastcall FGOStandFigureMColor___ctor(FGOStandFigureMColor_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.color = _Q1;
  this->fields.backupColor = (struct UnityEngine_Color_o)xmmword_B71DE0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOStandFigureMColor__OnUpdate(FGOStandFigureMColor_o *this, const MethodInfo *method)
{
  float32x2_t v2; // d0
  int32x2_t v3; // d0
  float32x2_t v4; // d2
  int32x2_t v5; // d2
  struct UnityEngine_MeshRenderer_array *renderers; // x20
  int max_length; // w8
  __int64 v9; // x21
  UnityEngine_Renderer_o *material; // x0

  v2.n64_u64[0] = vsub_f32(
                    *(float32x2_t *)&this->fields.backupColor.fields.r,
                    *(float32x2_t *)&this->fields.color.fields.r).n64_u64[0];
  v3.n64_u64[0] = vmul_f32(v2, v2).n64_u64[0];
  v4.n64_u64[0] = vsub_f32(
                    *(float32x2_t *)&this->fields.backupColor.fields.b,
                    *(float32x2_t *)&this->fields.color.fields.b).n64_u64[0];
  v5.n64_u64[0] = vmul_f32(v4, v4).n64_u64[0];
  if ( vadd_f32(vdup_lane_s32(v5, 1), vadd_f32(v5, vadd_f32(v3, vdup_lane_s32(v3, 1)))).n64_f32[0] >= 1.0e-10 )
  {
    renderers = this->fields.renderers;
    this->fields.backupColor = this->fields.color;
    if ( renderers )
    {
      max_length = renderers->max_length;
      if ( max_length >= 1 )
      {
        v9 = 0LL;
        do
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1B00F30(this, method);
          material = (UnityEngine_Renderer_o *)renderers->m_Items[v9];
          if ( !material
            || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL)) == 0LL )
          {
            sub_1B00F28(material, method);
          }
          UnityEngine_Material__set_color((UnityEngine_Material_o *)material, this->fields.color, 0LL);
          max_length = renderers->max_length;
          ++v9;
        }
        while ( (int)v9 < max_length );
      }
    }
  }
}


void __fastcall FGOStandFigureMColor__Start(FGOStandFigureMColor_o *this, const MethodInfo *method)
{
  this->fields.backupColor = this->fields.color;
}