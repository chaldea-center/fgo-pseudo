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
  UnityEngine_Mesh_o *v5; // x0
  UnityEngine_Mesh_o *v6; // x20
  UnityEngine_Color_array *colors; // x21
  UnityEngine_Color_array *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x8

  if ( (byte_40F67AB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_MeshFilter___, method);
    byte_40F67AB = 1;
  }
  isPlaying = UnityEngine_Application__get_isPlaying(0LL);
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_WebViewObject )
    goto LABEL_16;
  v5 = isPlaying
     ? UnityEngine_MeshFilter__get_mesh(Component_WebViewObject, 0LL)
     : UnityEngine_MeshFilter__get_sharedMesh(Component_WebViewObject, 0LL);
  v6 = v5;
  if ( !v5 )
    goto LABEL_16;
  colors = UnityEngine_Mesh__get_colors(v5, 0LL);
  v8 = UnityEngine_Mesh__get_colors(v6, 0LL);
  if ( !v8 )
    goto LABEL_16;
  v11 = *(_QWORD *)&v8->max_length;
  if ( (int)v11 < 1 )
    goto LABEL_14;
  if ( !colors )
LABEL_16:
    sub_B170D4();
  max_length = colors->max_length;
  v13 = 0LL;
  do
  {
    if ( v13 >= max_length )
    {
      sub_B17100(v8, v9, v10);
      sub_B170A0();
    }
    *(_OWORD *)&colors->m_Items[v13++].fields.g = *(_OWORD *)&this->fields.color.fields.g;
  }
  while ( (__int64)v13 < (int)v11 );
LABEL_14:
  UnityEngine_Mesh__set_colors(v6, colors, 0LL);
}