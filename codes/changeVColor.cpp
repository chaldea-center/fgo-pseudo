void __fastcall changeVColor___ctor(changeVColor_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall changeVColor__LateUpdate(changeVColor_o *this, const MethodInfo *method)
{
  changeVColor__UpdateVColor(this, method);
}


void __fastcall changeVColor__UpdateVColor(changeVColor_o *this, const MethodInfo *method)
{
  bool isPlaying; // w20
  UnityEngine_MeshFilter_o *Component_WebViewObject; // x0
  UnityEngine_Mesh_o *v5; // x20
  UnityEngine_Color_array *colors; // x21
  UnityEngine_MeshFilter_c *klass; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x8
  __int64 v10; // x0

  if ( (byte_4213FD1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_MeshFilter___, method);
    byte_4213FD1 = 1;
  }
  isPlaying = UnityEngine_Application__get_isPlaying(0LL);
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_WebViewObject )
    goto LABEL_16;
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)(isPlaying
                                                       ? UnityEngine_MeshFilter__get_mesh(Component_WebViewObject, 0LL)
                                                       : UnityEngine_MeshFilter__get_sharedMesh(
                                                           Component_WebViewObject,
                                                           0LL));
  v5 = (UnityEngine_Mesh_o *)Component_WebViewObject;
  if ( !Component_WebViewObject )
    goto LABEL_16;
  colors = UnityEngine_Mesh__get_colors((UnityEngine_Mesh_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_colors(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_16;
  klass = Component_WebViewObject[1].klass;
  if ( (int)klass < 1 )
    goto LABEL_14;
  if ( !colors )
LABEL_16:
    sub_B0D97C(Component_WebViewObject);
  max_length = colors->max_length;
  v9 = 0LL;
  do
  {
    if ( v9 >= max_length )
    {
      v10 = sub_B0D9A8(Component_WebViewObject);
      sub_B0D948(v10, 0LL);
    }
    *(_OWORD *)&colors->m_Items[v9++].fields.g = *(_OWORD *)&this->fields.color.fields.g;
  }
  while ( (__int64)v9 < (int)klass );
LABEL_14:
  UnityEngine_Mesh__set_colors(v5, colors, 0LL);
}