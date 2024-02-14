void __fastcall FGOStandFigureMColor___ctor(FGOStandFigureMColor_o *this, const MethodInfo *method)
{
  *(UnityEngine_Color_o *)&this->fields.color.fields.g = UnityEngine_Color__get_white(0LL);
  *(UnityEngine_Color_o *)&this->fields.backupColor.fields.g = UnityEngine_Color__get_red(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOStandFigureMColor__OnUpdate(FGOStandFigureMColor_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  struct UnityEngine_MeshRenderer_array *renderers; // x20
  int max_length; // w8
  __int64 v6; // x21
  UnityEngine_Renderer_o *material; // x0
  __int64 v8; // x0

  v3 = UnityEngine_Color__op_Inequality(
         *(UnityEngine_Color_o *)&this->fields.backupColor.fields.g,
         *(UnityEngine_Color_o *)&this->fields.color.fields.g,
         0LL);
  if ( v3 )
  {
    renderers = this->fields.renderers;
    *(_OWORD *)&this->fields.backupColor.fields.g = *(_OWORD *)&this->fields.color.fields.g;
    if ( renderers )
    {
      max_length = renderers->max_length;
      if ( max_length >= 1 )
      {
        v6 = 0LL;
        do
        {
          if ( (unsigned int)v6 >= max_length )
          {
            v8 = sub_B0D9A8(v3);
            sub_B0D948(v8, 0LL);
          }
          material = (UnityEngine_Renderer_o *)renderers->m_Items[v6];
          if ( !material
            || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL)) == 0LL )
          {
            sub_B0D97C(material);
          }
          UnityEngine_Material__set_color(
            (UnityEngine_Material_o *)material,
            *(UnityEngine_Color_o *)&this->fields.color.fields.g,
            0LL);
          max_length = renderers->max_length;
          ++v6;
        }
        while ( (int)v6 < max_length );
      }
    }
  }
}


void __fastcall FGOStandFigureMColor__Start(FGOStandFigureMColor_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.backupColor.fields.g = *(_OWORD *)&this->fields.color.fields.g;
}