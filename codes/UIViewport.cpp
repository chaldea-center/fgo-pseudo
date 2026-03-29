void UIViewport___ctor(UIViewport_o *this, const MethodInfo *method)
{
  this->fields.fullSize = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIViewport__LateUpdate(UIViewport_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *topLeft; // x20
  UnityEngine_Object_o *bottomRight; // x20
  __int64 v5; // x1
  UnityEngine_Transform_o *mCam; // x0
  UnityEngine_Camera_o *sourceCamera; // x20
  UnityEngine_Camera_o *v8; // x20
  int32_t width; // w20
  int32_t height; // w21
  int32_t v11; // w22
  float fullSize; // s14
  float v13; // s8
  float v14; // s8
  unsigned __int64 v15; // kr50_8
  unsigned __int64 v16; // kr58_8
  UnityEngine_Rect_o rect; // 0:kr40_16.16
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D353B7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D353B7 = 1;
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
      v15 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_71924480(sourceCamera, position, 0);
      mCam = this->fields.bottomRight;
      if ( !mCam )
        goto LABEL_25;
      v8 = this->fields.sourceCamera;
      v19 = UnityEngine_Transform__get_position(mCam, 0);
      if ( !v8 )
        goto LABEL_25;
      v16 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_71924480(v8, v19, 0);
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      v11 = UnityEngine_Screen__get_width(0);
      mCam = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0);
      if ( !this->fields.mCam )
        goto LABEL_25;
      fullSize = this->fields.fullSize;
      v13 = (float)(*((float *)&v15 + 1) - *((float *)&v16 + 1)) / (float)(int)mCam;
      rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
      if ( (float)(*(float *)&v15 / (float)width) != rect.fields.m_XMin
        || v13 != rect.fields.m_Height
        || (float)(*((float *)&v16 + 1) / (float)height) != rect.fields.m_YMin
        || (float)((float)(*(float *)&v16 - *(float *)&v15) / (float)v11) != rect.fields.m_Width )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( !mCam )
          goto LABEL_25;
        v20.fields.m_XMin = *(float *)&v15 / (float)width;
        v20.fields.m_YMin = *((float *)&v16 + 1) / (float)height;
        v20.fields.m_Width = (float)(*(float *)&v16 - *(float *)&v15) / (float)v11;
        v20.fields.m_Height = v13;
        UnityEngine_Camera__set_rect((UnityEngine_Camera_o *)mCam, v20, 0);
      }
      mCam = (UnityEngine_Transform_o *)this->fields.mCam;
      if ( !mCam )
LABEL_25:
        sub_1C93D2C(mCam, v5);
      v14 = fullSize * v13;
      if ( UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0) != v14 )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( mCam )
        {
          UnityEngine_Camera__set_orthographicSize((UnityEngine_Camera_o *)mCam, v14, 0);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  GrandQuestFolderBoardItem_o *p_sourceCamera; // x19
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_Camera_o *sourceCamera; // t1
  UnityEngine_Camera_o *main; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D353B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D353B6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  sourceCamera = this->fields.sourceCamera;
  p_sourceCamera = (GrandQuestFolderBoardItem_o *)&this->fields.sourceCamera;
  v11 = (UnityEngine_Object_o *)sourceCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
  {
    main = UnityEngine_Camera__get_main(0);
    p_sourceCamera->klass = (GrandQuestFolderBoardItem_c *)main;
    sub_1C93A78(p_sourceCamera, (int32_t)main, v14, v15, v16, v17, v18, v19);
  }
}