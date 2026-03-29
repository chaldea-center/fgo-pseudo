void ResolutionManager___cctor(const MethodInfo *method)
{
  struct ResolutionManager_StaticFields *static_fields; // x8

  if ( (byte_4D3035B & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3035B = 1;
  }
  static_fields = ResolutionManager_TypeInfo->static_fields;
  static_fields->RESOLUTION_LOW_DPI = 350.0;
  static_fields->isInitialize = 0;
}


void ResolutionManager___ctor(ResolutionManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.logicalWidth = 0x24000000400LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


double ResolutionManager__GetScreenDPI(const MethodInfo *method)
{
  return UnityEngine_Screen__get_dpi(0);
}


void ResolutionManager__Initialize(const MethodInfo *method)
{
  ResolutionManager_c *v1; // x0
  struct ResolutionManager_StaticFields *static_fields; // x8
  int32_t width; // w19
  ResolutionManager_c *v4; // x0
  int32_t height; // w19
  ResolutionManager_c *v6; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w19
  ResolutionManager_c *v9; // x0
  const MethodInfo *v10; // x2
  int32_t v11; // w19
  ResolutionManager_c *v12; // x0
  UnityEngine_Resolution_o currentResolution; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Resolution_o v14; // 0:x0.16
  UnityEngine_Resolution_o v15; // 0:x0.16

  if ( (byte_4D30352 & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D30352 = 1;
  }
  v1 = ResolutionManager_TypeInfo;
  *(_QWORD *)&currentResolution.fields.m_Width = 0;
  currentResolution.fields.m_RefreshRate = 0;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v1 = ResolutionManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isInitialize )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      static_fields = ResolutionManager_TypeInfo->static_fields;
    }
    static_fields->isInitialize = 1;
    width = UnityEngine_Screen__get_width(0);
    if ( !byte_4D30429 )
    {
      sub_1C93AD4(&ResolutionManager_TypeInfo);
      byte_4D30429 = 1;
    }
    v4 = ResolutionManager_TypeInfo;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      v4 = ResolutionManager_TypeInfo;
    }
    v4->static_fields->_DefaultScreenWidth_k__BackingField = width;
    height = UnityEngine_Screen__get_height(0);
    if ( !byte_4D3042A )
    {
      sub_1C93AD4(&ResolutionManager_TypeInfo);
      byte_4D3042A = 1;
    }
    v6 = ResolutionManager_TypeInfo;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      v6 = ResolutionManager_TypeInfo;
    }
    v6->static_fields->_DefaultScreenHeight_k__BackingField = height;
    currentResolution = UnityEngine_Screen__get_currentResolution(0);
    *(_QWORD *)&v14.fields.m_Width = &currentResolution;
    v14.fields.m_RefreshRate = 0;
    v8 = UnityEngine_Resolution__get_width(v14, v7);
    if ( !byte_4D3042B )
    {
      sub_1C93AD4(&ResolutionManager_TypeInfo);
      byte_4D3042B = 1;
    }
    v9 = ResolutionManager_TypeInfo;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      v9 = ResolutionManager_TypeInfo;
    }
    v9->static_fields->_DefaultResolutionScreenWidth_k__BackingField = v8;
    currentResolution = UnityEngine_Screen__get_currentResolution(0);
    *(_QWORD *)&v15.fields.m_Width = &currentResolution;
    v15.fields.m_RefreshRate = 0;
    v11 = UnityEngine_Resolution__get_height(v15, v10);
    if ( !byte_4D3042C )
    {
      sub_1C93AD4(&ResolutionManager_TypeInfo);
      byte_4D3042C = 1;
    }
    v12 = ResolutionManager_TypeInfo;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      v12 = ResolutionManager_TypeInfo;
    }
    v12->static_fields->_DefaultResolutionScreenHeight_k__BackingField = v11;
  }
}


bool ResolutionManager__IsEnableResolutionSetting(const MethodInfo *method)
{
  if ( (byte_4D30359 & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D30359 = 1;
  }
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  return ResolutionManager_TypeInfo->static_fields->RESOLUTION_LOW_DPI < UnityEngine_Screen__get_dpi(0);
}


// local variable allocation has failed, the output may be wrong!
void ResolutionManager__OnApplicationPause(ResolutionManager_o *this, bool pauseStatus, const MethodInfo *method)
{
  if ( !pauseStatus )
    ResolutionManager__ReScale(this, (const MethodInfo *)pauseStatus);
}


void ResolutionManager__OnPostRender(ResolutionManager_o *this, const MethodInfo *method)
{
  if ( this->fields.enableFlip && this->fields.is3DCamera )
    UnityEngine_GL__set_invertCulling(0, 0);
}


void ResolutionManager__OnPreCull(ResolutionManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *camera; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x0
  UnityEngine_Camera_o *v6; // x19
  BattlePerformance_c *v7; // x0
  UnityEngine_Matrix4x4_o v8; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v9; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v10; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v11; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v12; // [xsp+100h] [xbp-B0h]
  UnityEngine_Matrix4x4_o v13; // [xsp+140h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30358 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformance_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30358 = 1;
  }
  camera = (UnityEngine_Object_o *)this->fields.camera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(camera, 0, 0) && this->fields.enableFlip && this->fields.is3DCamera )
  {
    v5 = this->fields.camera;
    if ( !v5
      || (UnityEngine_Camera__ResetWorldToCameraMatrix(v5, 0), (v5 = this->fields.camera) == 0)
      || (UnityEngine_Camera__ResetProjectionMatrix(v5, 0), (v6 = this->fields.camera) == 0) )
    {
      sub_1C93D2C(v5, v4);
    }
    UnityEngine_Camera__get_projectionMatrix(&v13, v6, 0);
    v12 = v13;
    v7 = BattlePerformance_TypeInfo;
    if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v7 = BattlePerformance_TypeInfo;
    }
    if ( v7->static_fields->CameraFlip )
    {
      v13 = v12;
      v14.fields.x = -1.0;
    }
    else
    {
      v13 = v12;
      v14.fields.x = 1.0;
    }
    v12 = v13;
    v14.fields.y = 1.0;
    v14.fields.z = 1.0;
    UnityEngine_Matrix4x4__Scale(&v11, v14, 0);
    v9 = v11;
    v10 = v12;
    UnityEngine_Matrix4x4__op_Multiply(&v11, &v10, &v9, 0);
    v8 = v11;
    UnityEngine_Camera__set_projectionMatrix(v6, &v8, 0);
  }
}


void ResolutionManager__OnPreRender(ResolutionManager_o *this, const MethodInfo *method)
{
  BattlePerformance_c *v3; // x0

  if ( (byte_4D30357 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformance_TypeInfo);
    byte_4D30357 = 1;
  }
  if ( this->fields.enableFlip && this->fields.is3DCamera )
  {
    v3 = BattlePerformance_TypeInfo;
    if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v3 = BattlePerformance_TypeInfo;
    }
    UnityEngine_GL__set_invertCulling(v3->static_fields->CameraFlip, 0);
  }
}


void ResolutionManager__ReScale(ResolutionManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int32_t CameraWidth; // w20
  const MethodInfo *v8; // x1
  int32_t CameraHeight; // w0
  int32_t logicalHeight; // s8
  int32_t logicalWidth; // s9
  UnityEngine_Object_o *camera; // x22
  int v13; // w21
  __int64 v14; // x1
  UnityEngine_Camera_o *v15; // x0
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D30354 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30354 = 1;
  }
  this->fields.is3DCamera = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIRoot___);
  if ( !CommonFunction__ReScaleUiFunc((UIRoot_o *)Component_object, 0) )
    this->fields.is3DCamera = 1;
  this->fields.preWidth = ResolutionManager__get_CameraWidth(this, v4);
  this->fields.preHeight = ResolutionManager__get_CameraHeight(this, v5);
  CameraWidth = ResolutionManager__get_CameraWidth(this, v6);
  CameraHeight = ResolutionManager__get_CameraHeight(this, v8);
  logicalWidth = this->fields.logicalWidth;
  logicalHeight = this->fields.logicalHeight;
  camera = (UnityEngine_Object_o *)this->fields.camera;
  v13 = CameraHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(camera, 0, 0) )
  {
    v16.fields.m_Height = 1.0;
    if ( (float)((float)((float)CameraWidth / (float)logicalHeight) * (float)logicalWidth) >= (float)CameraWidth )
      v16.fields.m_Height = (float)((float)CameraWidth * (float)logicalHeight)
                          / (float)((float)v13 * (float)logicalWidth);
    v15 = this->fields.camera;
    if ( !v15 )
      sub_1C93D2C(0, v14);
    v16.fields.m_XMin = 0.0;
    v16.fields.m_YMin = (float)(1.0 - v16.fields.m_Height) * 0.5;
    v16.fields.m_Width = 1.0;
    UnityEngine_Camera__set_rect(v15, v16, 0);
  }
}


void ResolutionManager__SetResolutionType(int32_t type, const MethodInfo *method)
{
  double dpi; // d9
  _BOOL4 v4; // w21
  _BOOL4 v5; // w20
  ResolutionManager_c *v6; // x0
  int v7; // w21
  struct ResolutionManager_StaticFields *static_fields; // x8
  int DefaultScreenWidth_k__BackingField; // w20
  int32_t DefaultScreenHeight_k__BackingField; // w19
  bool fullScreen; // w2
  int32_t v12; // w0
  double RESOLUTION_LOW_DPI; // d8
  double v14; // d8
  double v15; // d8
  double v16; // d8
  ResolutionManager_c *v17; // x0
  double v18; // d10
  double v19; // d9
  double v20; // d0
  bool v21; // w0
  int v22; // w8

  if ( (byte_4D3035A & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3035A = 1;
  }
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  dpi = UnityEngine_Screen__get_dpi(0);
  v4 = ResolutionManager_TypeInfo->static_fields->RESOLUTION_LOW_DPI >= dpi;
  v5 = type == 0;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  if ( !byte_4D3042D )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3042D = 1;
  }
  v6 = ResolutionManager_TypeInfo;
  v7 = v5 || v4;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v6 = ResolutionManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  DefaultScreenWidth_k__BackingField = static_fields->_DefaultScreenWidth_k__BackingField;
  if ( v7 )
  {
    if ( !byte_4D3042E )
    {
      sub_1C93AD4(&ResolutionManager_TypeInfo);
      v6 = ResolutionManager_TypeInfo;
      byte_4D3042E = 1;
    }
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ResolutionManager_TypeInfo;
    }
    DefaultScreenHeight_k__BackingField = v6->static_fields->_DefaultScreenHeight_k__BackingField;
    fullScreen = UnityEngine_Screen__get_fullScreen(0);
    v12 = DefaultScreenWidth_k__BackingField;
  }
  else
  {
    RESOLUTION_LOW_DPI = static_fields->RESOLUTION_LOW_DPI;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = RESOLUTION_LOW_DPI * (double)DefaultScreenWidth_k__BackingField;
    if ( !byte_4D2DF38 )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2DF38 = 1;
    }
    v15 = v14 / dpi;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Round_65948328(v15, 0, 1, 0);
    if ( !byte_4D3042E )
    {
      sub_1C93AD4(&ResolutionManager_TypeInfo);
      byte_4D3042E = 1;
    }
    v17 = ResolutionManager_TypeInfo;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      v17 = ResolutionManager_TypeInfo;
    }
    v18 = v17->static_fields->RESOLUTION_LOW_DPI * (double)v17->static_fields->_DefaultScreenHeight_k__BackingField;
    if ( !byte_4D2DF38 )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2DF38 = 1;
    }
    v19 = v18 / dpi;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v20 = System_Math__Round_65948328(v19, 0, 1, 0);
    if ( v20 == INFINITY )
      DefaultScreenHeight_k__BackingField = 0x80000000;
    else
      DefaultScreenHeight_k__BackingField = (int)v20;
    v21 = UnityEngine_Screen__get_fullScreen(0);
    v22 = (int)v16;
    if ( v16 == INFINITY )
      v22 = 0x80000000;
    fullScreen = v21;
    v12 = v22;
  }
  UnityEngine_Screen__SetResolution_71963100(v12, DefaultScreenHeight_k__BackingField, fullScreen, 0);
}


void ResolutionManager__Start(ResolutionManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4D30353 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Camera___);
    byte_4D30353 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.camera = (struct UnityEngine_Camera_o *)Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.camera, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  ResolutionManager__ReScale(this, v10);
}


void ResolutionManager__Update(ResolutionManager_o *this, const MethodInfo *method)
{
  int32_t preWidth; // w20
  const MethodInfo *v4; // x1
  int32_t preHeight; // w20

  preWidth = this->fields.preWidth;
  if ( preWidth != ResolutionManager__get_CameraWidth(this, method)
    || (preHeight = this->fields.preHeight, preHeight != ResolutionManager__get_CameraHeight(this, v4)) )
  {
    ResolutionManager__ReScale(this, v4);
  }
}


int32_t ResolutionManager__get_CameraHeight(ResolutionManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *camera; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x0
  UnityEngine_Object_o *targetTexture; // x20

  if ( (byte_4D30356 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30356 = 1;
  }
  if ( this->fields.is3DCamera )
  {
    camera = (UnityEngine_Object_o *)this->fields.camera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(camera, 0, 0) )
    {
      v5 = this->fields.camera;
      if ( !v5 )
        goto LABEL_15;
      targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
      {
        v5 = this->fields.camera;
        if ( v5 )
        {
          v5 = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v5, 0);
          if ( v5 )
            return ((int32_t (__fastcall *)(UnityEngine_Camera_o *, _QWORD))v5->klass[1]._1.byval_arg.data)(
                     v5,
                     *(_QWORD *)&v5->klass[1]._1.byval_arg.bits);
        }
LABEL_15:
        sub_1C93D2C(v5, v4);
      }
    }
  }
  return UnityEngine_Screen__get_height(0);
}


int32_t ResolutionManager__get_CameraWidth(ResolutionManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *camera; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x0
  UnityEngine_Object_o *targetTexture; // x20

  if ( (byte_4D30355 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30355 = 1;
  }
  if ( this->fields.is3DCamera )
  {
    camera = (UnityEngine_Object_o *)this->fields.camera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(camera, 0, 0) )
    {
      v5 = this->fields.camera;
      if ( !v5 )
        goto LABEL_15;
      targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
      {
        v5 = this->fields.camera;
        if ( v5 )
        {
          v5 = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v5, 0);
          if ( v5 )
            return ((int32_t (__fastcall *)(UnityEngine_Camera_o *, void *))v5->klass[1]._1.image)(
                     v5,
                     v5->klass[1]._1.gc_desc);
        }
LABEL_15:
        sub_1C93D2C(v5, v4);
      }
    }
  }
  return UnityEngine_Screen__get_width(0);
}


int32_t ResolutionManager__get_DefaultResolutionScreenHeight(const MethodInfo *method)
{
  ResolutionManager_c *v1; // x0

  if ( (byte_4D30350 & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D30350 = 1;
  }
  v1 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v1 = ResolutionManager_TypeInfo;
  }
  return v1->static_fields->_DefaultResolutionScreenHeight_k__BackingField;
}


int32_t ResolutionManager__get_DefaultResolutionScreenWidth(const MethodInfo *method)
{
  ResolutionManager_c *v1; // x0

  if ( (byte_4D3034E & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3034E = 1;
  }
  v1 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v1 = ResolutionManager_TypeInfo;
  }
  return v1->static_fields->_DefaultResolutionScreenWidth_k__BackingField;
}


int32_t ResolutionManager__get_DefaultScreenHeight(const MethodInfo *method)
{
  ResolutionManager_c *v1; // x0

  if ( (byte_4D3034C & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3034C = 1;
  }
  v1 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v1 = ResolutionManager_TypeInfo;
  }
  return v1->static_fields->_DefaultScreenHeight_k__BackingField;
}


int32_t ResolutionManager__get_DefaultScreenWidth(const MethodInfo *method)
{
  ResolutionManager_c *v1; // x0

  if ( (byte_4D3034A & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3034A = 1;
  }
  v1 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v1 = ResolutionManager_TypeInfo;
  }
  return v1->static_fields->_DefaultScreenWidth_k__BackingField;
}


void ResolutionManager__set_DefaultResolutionScreenHeight(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_4D30351 & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D30351 = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultResolutionScreenHeight_k__BackingField = value;
}


void ResolutionManager__set_DefaultResolutionScreenWidth(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_4D3034F & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3034F = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultResolutionScreenWidth_k__BackingField = value;
}


void ResolutionManager__set_DefaultScreenHeight(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_4D3034D & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3034D = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultScreenHeight_k__BackingField = value;
}


void ResolutionManager__set_DefaultScreenWidth(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_4D3034B & 1) == 0 )
  {
    sub_1C93AD4(&ResolutionManager_TypeInfo);
    byte_4D3034B = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultScreenWidth_k__BackingField = value;
}