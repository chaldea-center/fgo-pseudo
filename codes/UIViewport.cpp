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
  float x; // s8
  float y; // s9
  float v11; // s10
  float v12; // s13
  int32_t width; // w20
  int32_t height; // w21
  int32_t v15; // w22
  float fullSize; // s14
  float v17; // s12
  float v18; // s10
  float v19; // s8
  float v20; // s8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCBDE3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBDE3 = 1;
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
      v22 = UnityEngine_Camera__WorldToScreenPoint_71529180(sourceCamera, position, 0);
      mCam = this->fields.bottomRight;
      if ( !mCam )
        goto LABEL_25;
      v8 = this->fields.sourceCamera;
      x = v22.fields.x;
      y = v22.fields.y;
      v23 = UnityEngine_Transform__get_position(mCam, 0);
      if ( !v8 )
        goto LABEL_25;
      v24 = UnityEngine_Camera__WorldToScreenPoint_71529180(v8, v23, 0);
      v11 = v24.fields.x;
      v12 = v24.fields.y;
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      v15 = UnityEngine_Screen__get_width(0);
      mCam = (UnityEngine_Transform_o *)UnityEngine_Screen__get_height(0);
      if ( !this->fields.mCam )
        goto LABEL_25;
      fullSize = this->fields.fullSize;
      v17 = x / (float)width;
      v18 = (float)(v11 - x) / (float)v15;
      v19 = (float)(y - v12) / (float)(int)mCam;
      rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
      if ( v17 != rect.fields.m_XMin
        || v19 != rect.fields.m_Height
        || (float)(v12 / (float)height) != rect.fields.m_YMin
        || v18 != rect.fields.m_Width )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( !mCam )
          goto LABEL_25;
        v26.fields.m_XMin = v17;
        v26.fields.m_YMin = v12 / (float)height;
        v26.fields.m_Width = v18;
        v26.fields.m_Height = v19;
        UnityEngine_Camera__set_rect((UnityEngine_Camera_o *)mCam, v26, 0);
      }
      mCam = (UnityEngine_Transform_o *)this->fields.mCam;
      if ( !mCam )
LABEL_25:
        sub_1C71608(mCam, v5);
      v20 = fullSize * v19;
      if ( UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0) != v20 )
      {
        mCam = (UnityEngine_Transform_o *)this->fields.mCam;
        if ( mCam )
        {
          UnityEngine_Camera__set_orthographicSize((UnityEngine_Camera_o *)mCam, v20, 0);
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

  if ( (byte_4CCBDE2 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBDE2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  sourceCamera = this->fields.sourceCamera;
  p_sourceCamera = (GrandQuestFolderBoardItem_o *)&this->fields.sourceCamera;
  v11 = (UnityEngine_Object_o *)sourceCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
  {
    main = UnityEngine_Camera__get_main(0);
    p_sourceCamera->klass = (GrandQuestFolderBoardItem_c *)main;
    sub_1C71354(p_sourceCamera, (int32_t)main, v14, v15, v16, v17, v18, v19);
  }
}