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
  int32_t width; // w20
  int32_t height; // w21
  int32_t v12; // w22
  float fullSize; // s12
  float v14; // s9
  unsigned __int64 v15; // kr50_8
  unsigned __int64 v16; // kr58_8
  UnityEngine_Rect_o rect; // 0:kr40_16.16
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
      v15 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_83198204(sourceCamera, position, 0);
      mCam = this->fields.bottomRight;
      if ( !mCam )
        goto LABEL_25;
      v9 = this->fields.sourceCamera;
      v19 = UnityEngine_Transform__get_position(mCam, 0);
      if ( !v9 )
        goto LABEL_25;
      v16 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_83198204(v9, v19, 0);
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      v12 = UnityEngine_Screen__get_width(0);
      mCam = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0);
      if ( !this->fields.mCam )
        goto LABEL_25;
      fullSize = this->fields.fullSize;
      v14 = (float)(*((float *)&v15 + 1) - *((float *)&v16 + 1)) / (float)(int)mCam;
      rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
      if ( (float)(*(float *)&v15 / (float)width) != rect.fields.m_XMin
        || (float)(*((float *)&v16 + 1) / (float)height) != rect.fields.m_YMin
        || (float)((float)(*(float *)&v16 - *(float *)&v15) / (float)v12) != rect.fields.m_Width
        || v14 != rect.fields.m_Height )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( !mCam )
          goto LABEL_25;
        v20.fields.m_XMin = *(float *)&v15 / (float)width;
        v20.fields.m_YMin = *((float *)&v16 + 1) / (float)height;
        v20.fields.m_Width = (float)(*(float *)&v16 - *(float *)&v15) / (float)v12;
        v20.fields.m_Height = v14;
        UnityEngine_Camera__set_rect((UnityEngine_Camera_o *)mCam, v20, 0);
      }
      mCam = (UnityEngine_Transform_o *)this->fields.mCam;
      if ( !mCam )
LABEL_25:
        sub_2213CDC(mCam, v6);
      if ( UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0) != (float)(fullSize * v14) )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( mCam )
        {
          UnityEngine_Camera__set_orthographicSize((UnityEngine_Camera_o *)mCam, fullSize * v14, 0);
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