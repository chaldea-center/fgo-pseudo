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
  __int64 v2; // x2
  bool isPlaying; // w20
  UnityEngine_MeshFilter_o *Component_object; // x0
  __int64 v6; // x1
  UnityEngine_Mesh_o *v7; // x20
  UnityEngine_Color_array *colors; // x21
  unsigned __int64 v9; // x8
  __int64 klass; // x9

  if ( (byte_59373BC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_59373BC = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  isPlaying = UnityEngine_Application__get_isPlaying(0);
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( isPlaying )
  {
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_mesh(Component_object, 0);
  }
  else
  {
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_sharedMesh(Component_object, 0);
  }
  v7 = (UnityEngine_Mesh_o *)Component_object;
  if ( !Component_object )
    goto LABEL_19;
  colors = UnityEngine_Mesh__get_colors((UnityEngine_Mesh_o *)Component_object, 0);
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_colors(v7, 0);
  if ( !Component_object )
    goto LABEL_19;
  if ( (int)Component_object[1].klass < 1 )
    goto LABEL_17;
  if ( !colors )
LABEL_19:
    sub_21FFECC(Component_object, v6);
  v9 = 0;
  klass = (unsigned int)Component_object[1].klass;
  do
  {
    if ( v9 >= LODWORD(colors->max_length) )
      sub_21FFED4(Component_object);
    colors->m_Items[v9++] = this->fields.color;
  }
  while ( klass != v9 );
LABEL_17:
  UnityEngine_Mesh__set_colors(v7, colors, 0);
}