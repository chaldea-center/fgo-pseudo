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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  bool isPlaying; // w20
  UnityEngine_Color_array *Component_object; // x0
  __int64 v8; // x1
  UnityEngine_Mesh_o *v9; // x20
  UnityEngine_Color_array *colors; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v12; // x8
  __int64 v13; // x10

  if ( (byte_4B15070 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_MeshFilter___, v4, v5);
    byte_4B15070 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  isPlaying = UnityEngine_Application__get_isPlaying(0LL);
  Component_object = (UnityEngine_Color_array *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_Color_array *)(isPlaying
                                               ? UnityEngine_MeshFilter__get_mesh(
                                                   (UnityEngine_MeshFilter_o *)Component_object,
                                                   0LL)
                                               : UnityEngine_MeshFilter__get_sharedMesh(
                                                   (UnityEngine_MeshFilter_o *)Component_object,
                                                   0LL));
  v9 = (UnityEngine_Mesh_o *)Component_object;
  if ( !Component_object )
    goto LABEL_18;
  colors = UnityEngine_Mesh__get_colors((UnityEngine_Mesh_o *)Component_object, 0LL);
  Component_object = UnityEngine_Mesh__get_colors(v9, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  if ( (int)*(_QWORD *)&Component_object->max_length < 1 )
    goto LABEL_16;
  if ( !colors )
LABEL_18:
    sub_1BCAA3C(Component_object, v8);
  max_length = colors->max_length;
  v12 = 0LL;
  v13 = (unsigned int)*(_QWORD *)&Component_object->max_length;
  do
  {
    if ( v12 >= max_length )
      sub_1BCAA44(Component_object, v8);
    *(struct UnityEngine_Color_o *)&colors->m_Items[v12++].fields.g = this->fields.color;
  }
  while ( v13 != v12 );
LABEL_16:
  UnityEngine_Mesh__set_colors(v9, colors, 0LL);
}