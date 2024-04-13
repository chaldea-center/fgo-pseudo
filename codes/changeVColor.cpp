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
  int v2; // w2
  __int64 v3; // x3
  bool isPlaying; // w20
  UnityEngine_MeshFilter_o *Component_WebViewObject; // x0
  __int64 v7; // x1
  UnityEngine_Mesh_o *v8; // x20
  UnityEngine_Color_array *colors; // x21
  UnityEngine_MeshFilter_c *klass; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v12; // x8
  __int64 v13; // x0

  if ( (byte_42E73D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_MeshFilter___, (_DWORD)method, v2, v3);
    byte_42E73D3 = 1;
  }
  isPlaying = UnityEngine_Application__get_isPlaying(0LL);
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_WebViewObject )
    goto LABEL_16;
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)(isPlaying
                                                       ? UnityEngine_MeshFilter__get_mesh(Component_WebViewObject, 0LL)
                                                       : UnityEngine_MeshFilter__get_sharedMesh(
                                                           Component_WebViewObject,
                                                           0LL));
  v8 = (UnityEngine_Mesh_o *)Component_WebViewObject;
  if ( !Component_WebViewObject )
    goto LABEL_16;
  colors = UnityEngine_Mesh__get_colors((UnityEngine_Mesh_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_colors(v8, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_16;
  klass = Component_WebViewObject[1].klass;
  if ( (int)klass < 1 )
    goto LABEL_14;
  if ( !colors )
LABEL_16:
    sub_B5D69C(Component_WebViewObject, v7);
  max_length = colors->max_length;
  v12 = 0LL;
  do
  {
    if ( v12 >= max_length )
    {
      v13 = sub_B5D6C8(Component_WebViewObject);
      sub_B5D668(v13, 0LL);
    }
    *(_OWORD *)&colors->m_Items[v12++].fields.g = *(_OWORD *)&this->fields.color.fields.g;
  }
  while ( (__int64)v12 < (int)klass );
LABEL_14:
  UnityEngine_Mesh__set_colors(v8, colors, 0LL);
}