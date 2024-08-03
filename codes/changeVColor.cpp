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
  __int64 v3; // x1
  bool isPlaying; // w20
  UnityEngine_Color_array *Component_object; // x0
  UnityEngine_Mesh_o *v6; // x20
  UnityEngine_Color_array *colors; // x21
  __int64 v8; // x1
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x8
  __int64 v11; // x10

  if ( (byte_49FB20B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_MeshFilter___, v3);
    byte_49FB20B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0LL);
  Component_object = (UnityEngine_Color_array *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_Color_array *)(isPlaying
                                               ? UnityEngine_MeshFilter__get_mesh(
                                                   (UnityEngine_MeshFilter_o *)Component_object,
                                                   0LL)
                                               : UnityEngine_MeshFilter__get_sharedMesh(
                                                   (UnityEngine_MeshFilter_o *)Component_object,
                                                   0LL));
  v6 = (UnityEngine_Mesh_o *)Component_object;
  if ( !Component_object )
    goto LABEL_18;
  colors = UnityEngine_Mesh__get_colors((UnityEngine_Mesh_o *)Component_object, 0LL);
  Component_object = UnityEngine_Mesh__get_colors(v6, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  if ( (int)*(_QWORD *)&Component_object->max_length < 1 )
    goto LABEL_16;
  if ( !colors )
LABEL_18:
    sub_1B64324(Component_object);
  max_length = colors->max_length;
  v10 = 0LL;
  v11 = (unsigned int)*(_QWORD *)&Component_object->max_length;
  do
  {
    if ( v10 >= max_length )
      sub_1B6432C(Component_object, v8);
    *(struct UnityEngine_Color_o *)&colors->m_Items[v10++].fields.g = this->fields.color;
  }
  while ( v11 != v10 );
LABEL_16:
  UnityEngine_Mesh__set_colors(v6, colors, 0LL);
}