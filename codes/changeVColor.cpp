void changeVColor___ctor(changeVColor_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void changeVColor__LateUpdate(changeVColor_o *this, const MethodInfo *method)
{
  changeVColor__UpdateVColor(this, method);
}


void changeVColor__UpdateVColor(changeVColor_o *this, const MethodInfo *method)
{
  bool isPlaying; // w20
  UnityEngine_Color_array *Component_object; // x0
  UnityEngine_Mesh_o *v5; // x20
  UnityEngine_Color_array *colors; // x21
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x8
  __int64 max_length; // x10

  if ( (byte_4C3673B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4C3673B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0);
  Component_object = (UnityEngine_Color_array *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_Color_array *)(isPlaying
                                               ? UnityEngine_MeshFilter__get_mesh(
                                                   (UnityEngine_MeshFilter_o *)Component_object,
                                                   0)
                                               : UnityEngine_MeshFilter__get_sharedMesh(
                                                   (UnityEngine_MeshFilter_o *)Component_object,
                                                   0));
  v5 = (UnityEngine_Mesh_o *)Component_object;
  if ( !Component_object )
    goto LABEL_18;
  colors = UnityEngine_Mesh__get_colors((UnityEngine_Mesh_o *)Component_object, 0);
  Component_object = UnityEngine_Mesh__get_colors(v5, 0);
  if ( !Component_object )
    goto LABEL_18;
  if ( (int)Component_object->max_length < 1 )
    goto LABEL_16;
  if ( !colors )
LABEL_18:
    sub_1C32E7C(Component_object);
  max_length_low = LODWORD(colors->max_length);
  v8 = 0;
  max_length = (unsigned int)Component_object->max_length;
  do
  {
    if ( v8 >= max_length_low )
      sub_1C32E84(Component_object);
    colors->m_Items[v8++] = this->fields.color;
  }
  while ( max_length != v8 );
LABEL_16:
  UnityEngine_Mesh__set_colors(v5, colors, 0);
}