void UIViewport___ctor(UIViewport_o *this, const MethodInfo *method)
{
  this->fields.fullSize = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIViewport__LateUpdate(UIViewport_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *topLeft; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *bottomRight; // x20
  __int64 v6; // x1
  UnityEngine_Transform_o *mCam; // x0
  UnityEngine_Camera_o *sourceCamera; // x20
  UnityEngine_Camera_o *v9; // x20
  float x; // s8
  float y; // s9
  float v12; // s10
  float v13; // s11
  int32_t width; // w20
  int32_t height; // w21
  int32_t v16; // w22
  float fullSize; // s12
  float v18; // s9
  float v19; // s10
  float v20; // s11
  float v21; // s8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59752E8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752E8 = 1;
  }
  topLeft = (UnityEngine_Object_o *)this->fields.topLeft;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(topLeft, 0, 0) )
  {
    bottomRight = (UnityEngine_Object_o *)this->fields.bottomRight;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(bottomRight, 0, 0) )
    {
      mCam = this->fields.topLeft;
      if ( !mCam )
        goto LABEL_25;
      sourceCamera = this->fields.sourceCamera;
      position = UnityEngine_Transform__get_position(mCam, 0);
      if ( !sourceCamera )
        goto LABEL_25;
      v23 = UnityEngine_Camera__WorldToScreenPoint_83198204(sourceCamera, position, 0);
      mCam = this->fields.bottomRight;
      if ( !mCam )
        goto LABEL_25;
      v9 = this->fields.sourceCamera;
      x = v23.fields.x;
      y = v23.fields.y;
      v24 = UnityEngine_Transform__get_position(mCam, 0);
      if ( !v9 )
        goto LABEL_25;
      v25 = UnityEngine_Camera__WorldToScreenPoint_83198204(v9, v24, 0);
      v12 = v25.fields.x;
      v13 = v25.fields.y;
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      v16 = UnityEngine_Screen__get_width(0);
      mCam = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0);
      if ( !this->fields.mCam )
        goto LABEL_25;
      fullSize = this->fields.fullSize;
      v18 = (float)(y - v13) / (float)(int)mCam;
      v19 = (float)(v12 - x) / (float)v16;
      v20 = v13 / (float)height;
      v21 = x / (float)width;
      rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
      if ( v21 != rect.fields.m_XMin
        || v20 != rect.fields.m_YMin
        || v19 != rect.fields.m_Width
        || v18 != rect.fields.m_Height )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( !mCam )
          goto LABEL_25;
        v27.fields.m_XMin = v21;
        v27.fields.m_YMin = v20;
        v27.fields.m_Width = v19;
        v27.fields.m_Height = v18;
        UnityEngine_Camera__set_rect((UnityEngine_Camera_o *)mCam, v27, 0);
      }
      mCam = (UnityEngine_Transform_o *)this->fields.mCam;
      if ( !mCam )
LABEL_25:
        sub_2213CDC(mCam, v6);
      if ( UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0) != (float)(fullSize * v18) )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( mCam )
        {
          UnityEngine_Camera__set_orthographicSize((UnityEngine_Camera_o *)mCam, fullSize * v18, 0);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  MissionNaviTransitionBoardItem_o *p_sourceCamera; // x19
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Camera_o *sourceCamera; // t1
  UnityEngine_Camera_o *main; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_59752E7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752E7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  sourceCamera = this->fields.sourceCamera;
  p_sourceCamera = (MissionNaviTransitionBoardItem_o *)&this->fields.sourceCamera;
  v12 = (UnityEngine_Object_o *)sourceCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Equality(v12, 0, 0) )
  {
    main = UnityEngine_Camera__get_main(0);
    p_sourceCamera->klass = (MissionNaviTransitionBoardItem_c *)main;
    sub_2213A04(p_sourceCamera, (int32_t)main, v15, v16, v17, v18, v19, v20);
  }
}