void UIViewport___ctor(UIViewport_o *this, const MethodInfo *method)
{
  this->fields.fullSize = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIViewport__LateUpdate(UIViewport_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *topLeft; // x20
  UnityEngine_Object_o *bottomRight; // x20
  UnityEngine_Transform_o *mCam; // x0
  UnityEngine_Camera_o *sourceCamera; // x20
  UnityEngine_Camera_o *v7; // x20
  float x; // s8
  float y; // s9
  float v10; // s10
  float v11; // s13
  int32_t width; // w20
  int32_t height; // w21
  int32_t v14; // w22
  float fullSize; // s14
  float v16; // s12
  float v17; // s10
  float v18; // s8
  float v19; // s8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C33B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C33B = 1;
  }
  topLeft = (UnityEngine_Object_o *)this->fields.topLeft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(topLeft, 0, 0) )
  {
    bottomRight = (UnityEngine_Object_o *)this->fields.bottomRight;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bottomRight, 0, 0) )
    {
      mCam = this->fields.topLeft;
      if ( !mCam )
        goto LABEL_25;
      sourceCamera = this->fields.sourceCamera;
      position = UnityEngine_Transform__get_position(mCam, 0);
      if ( !sourceCamera )
        goto LABEL_25;
      v21 = UnityEngine_Camera__WorldToScreenPoint_71029908(sourceCamera, position, 0);
      mCam = this->fields.bottomRight;
      if ( !mCam )
        goto LABEL_25;
      v7 = this->fields.sourceCamera;
      x = v21.fields.x;
      y = v21.fields.y;
      v22 = UnityEngine_Transform__get_position(mCam, 0);
      if ( !v7 )
        goto LABEL_25;
      v23 = UnityEngine_Camera__WorldToScreenPoint_71029908(v7, v22, 0);
      v10 = v23.fields.x;
      v11 = v23.fields.y;
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      v14 = UnityEngine_Screen__get_width(0);
      mCam = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0);
      if ( !this->fields.mCam )
        goto LABEL_25;
      fullSize = this->fields.fullSize;
      v16 = x / (float)width;
      v17 = (float)(v10 - x) / (float)v14;
      v18 = (float)(y - v11) / (float)(int)mCam;
      rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
      if ( v16 != rect.fields.m_XMin
        || v18 != rect.fields.m_Height
        || (float)(v11 / (float)height) != rect.fields.m_YMin
        || v17 != rect.fields.m_Width )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( !mCam )
          goto LABEL_25;
        v25.fields.m_XMin = v16;
        v25.fields.m_YMin = v11 / (float)height;
        v25.fields.m_Width = v17;
        v25.fields.m_Height = v18;
        UnityEngine_Camera__set_rect((UnityEngine_Camera_o *)mCam, v25, 0);
      }
      mCam = (UnityEngine_Transform_o *)this->fields.mCam;
      if ( !mCam )
LABEL_25:
        sub_1C32E7C(mCam);
      v19 = fullSize * v18;
      if ( UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0) != v19 )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( mCam )
        {
          UnityEngine_Camera__set_orthographicSize((UnityEngine_Camera_o *)mCam, v19, 0);
          return;
        }
        goto LABEL_25;
      }
    }
  }
}


void UIViewport__Start(UIViewport_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_sourceCamera; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_Camera_o *sourceCamera; // t1
  UnityEngine_Camera_o *main; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3C33A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C33A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5);
  sourceCamera = this->fields.sourceCamera;
  p_sourceCamera = (CGThumbnailListItem_o *)&this->fields.sourceCamera;
  v7 = (UnityEngine_Object_o *)sourceCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
  {
    main = UnityEngine_Camera__get_main(0);
    p_sourceCamera->klass = (CGThumbnailListItem_c *)main;
    sub_1C32BC4(p_sourceCamera, (int32_t)main, v10, v11);
  }
}