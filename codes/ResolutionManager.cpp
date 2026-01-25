void ResolutionManager___cctor(const MethodInfo *method)
{
  struct ResolutionManager_StaticFields *static_fields; // x8

  if ( (byte_4CEDFFF & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFFF = 1;
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

  if ( (byte_4CEDFF9 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF9 = 1;
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
    if ( !byte_4CEE0CD )
    {
      sub_1C7BAE8(&ResolutionManager_TypeInfo);
      byte_4CEE0CD = 1;
    }
    v4 = ResolutionManager_TypeInfo;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      v4 = ResolutionManager_TypeInfo;
    }
    v4->static_fields->_DefaultScreenWidth_k__BackingField = width;
    height = UnityEngine_Screen__get_height(0);
    if ( !byte_4CEE0CE )
    {
      sub_1C7BAE8(&ResolutionManager_TypeInfo);
      byte_4CEE0CE = 1;
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
    if ( !byte_4CEE0CF )
    {
      sub_1C7BAE8(&ResolutionManager_TypeInfo);
      byte_4CEE0CF = 1;
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
    if ( !byte_4CEE0D0 )
    {
      sub_1C7BAE8(&ResolutionManager_TypeInfo);
      byte_4CEE0D0 = 1;
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
  if ( (byte_4CEDFFD & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFFD = 1;
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


// local variable allocation has failed, the output may be wrong!
void ResolutionManager__OnPreCull(ResolutionManager_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  BattlePerformance_c *v6; // x0
  float v7; // s0 OVERLAPPED
  float v8; // s1
  float v9; // s2
  UnityEngine_Matrix4x4_o v10; // [xsp+0h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v11; // [xsp+40h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v12; // [xsp+80h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v13; // [xsp+C0h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v14; // [xsp+100h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v15; // [xsp+140h] [xbp-A0h]
  UnityEngine_Matrix4x4_o v16; // [xsp+180h] [xbp-60h] BYREF

  if ( (byte_4CEDFFC & 1) == 0 )
  {
    sub_1C7BAE8(&BattlePerformance_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Camera___);
    byte_4CEDFFC = 1;
  }
  if ( this->fields.enableFlip && this->fields.is3DCamera )
  {
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_16;
    UnityEngine_Camera__ResetWorldToCameraMatrix(Component_object, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_16;
    UnityEngine_Camera__ResetProjectionMatrix(Component_object, 0);
    v5 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)this,
           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_16;
    UnityEngine_Camera__get_projectionMatrix(&v16, Component_object, 0);
    v15 = v16;
    v6 = BattlePerformance_TypeInfo;
    if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v6 = BattlePerformance_TypeInfo;
    }
    if ( v6->static_fields->CameraFlip )
    {
      v16 = v15;
      v7 = -1.0;
    }
    else
    {
      v16 = v15;
      v7 = 1.0;
    }
    v15 = v16;
    v8 = 1.0;
    v9 = 1.0;
    UnityEngine_Matrix4x4__Scale(&v14, *(UnityEngine_Vector3_o *)&v7, 0);
    v11 = v14;
    v12 = v15;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Matrix4x4__op_Multiply(&v13, &v12, &v11, 0);
    v14 = v13;
    if ( !v5 )
LABEL_16:
      sub_1C7BD40(Component_object, v4);
    v10 = v14;
    UnityEngine_Camera__set_projectionMatrix((UnityEngine_Camera_o *)v5, &v10, 0);
  }
}


void ResolutionManager__OnPreRender(ResolutionManager_o *this, const MethodInfo *method)
{
  BattlePerformance_c *v3; // x0

  if ( (byte_4CEDFFB & 1) == 0 )
  {
    sub_1C7BAE8(&BattlePerformance_TypeInfo);
    byte_4CEDFFB = 1;
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


// local variable allocation has failed, the output may be wrong!
void ResolutionManager__ReScale(ResolutionManager_o *this, const MethodInfo *method)
{
  float width; // s8
  float height; // s9
  int32_t logicalWidth; // s10
  int32_t logicalHeight; // s11
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x19
  float v9; // s10
  float v10; // s11
  __int64 v11; // x0
  __int64 v12; // x1
  float v13; // s3 OVERLAPPED
  int v14; // s0
  float v15; // s1
  float v16; // s2

  if ( (byte_4CEDFFA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDFFA = 1;
  }
  this->fields.preWidth = UnityEngine_Screen__get_width(0);
  this->fields.preHeight = UnityEngine_Screen__get_height(0);
  width = (float)UnityEngine_Screen__get_width(0);
  height = (float)UnityEngine_Screen__get_height(0);
  if ( height > width )
  {
    width = (float)UnityEngine_Screen__get_height(0);
    height = (float)UnityEngine_Screen__get_width(0);
  }
  logicalWidth = this->fields.logicalWidth;
  logicalHeight = this->fields.logicalHeight;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
  if ( !CommonFunction__ReScaleUiFunc((UIRoot_o *)Component_object, 0) )
    this->fields.is3DCamera = 1;
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
  {
    v9 = (float)logicalWidth;
    v10 = (float)logicalHeight;
    v11 = UnityEngine_Screen__get_width(0);
    v13 = 1.0;
    if ( (float)((float)(width / v10) * v9) >= (float)(int)v11 )
      v13 = (float)(width * v10) / (float)(height * v9);
    if ( !v8 )
      sub_1C7BD40(v11, v12);
    v14 = 0;
    v15 = (float)(1.0 - v13) * 0.5;
    v16 = 1.0;
    UnityEngine_Camera__set_rect((UnityEngine_Camera_o *)v8, *(UnityEngine_Rect_o *)(&v13 - 3), 0);
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

  if ( (byte_4CEDFFE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFFE = 1;
  }
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  dpi = UnityEngine_Screen__get_dpi(0);
  v4 = ResolutionManager_TypeInfo->static_fields->RESOLUTION_LOW_DPI >= dpi;
  v5 = type == 0;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  if ( !byte_4CEE0D1 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEE0D1 = 1;
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
    if ( !byte_4CEE0D2 )
    {
      sub_1C7BAE8(&ResolutionManager_TypeInfo);
      v6 = ResolutionManager_TypeInfo;
      byte_4CEE0D2 = 1;
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
    if ( !byte_4CEBBAD )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CEBBAD = 1;
    }
    v15 = v14 / dpi;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Round_65699524(v15, 0, 1, 0);
    if ( !byte_4CEE0D2 )
    {
      sub_1C7BAE8(&ResolutionManager_TypeInfo);
      byte_4CEE0D2 = 1;
    }
    v17 = ResolutionManager_TypeInfo;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      v17 = ResolutionManager_TypeInfo;
    }
    v18 = v17->static_fields->RESOLUTION_LOW_DPI * (double)v17->static_fields->_DefaultScreenHeight_k__BackingField;
    if ( !byte_4CEBBAD )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CEBBAD = 1;
    }
    v19 = v18 / dpi;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v20 = System_Math__Round_65699524(v19, 0, 1, 0);
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
  UnityEngine_Screen__SetResolution_71713340(v12, DefaultScreenHeight_k__BackingField, fullScreen, 0);
}


// attributes: thunk
void ResolutionManager__Start(ResolutionManager_o *this, const MethodInfo *method)
{
  ResolutionManager__ReScale(this, method);
}


void ResolutionManager__Update(ResolutionManager_o *this, const MethodInfo *method)
{
  int32_t preWidth; // w20
  const MethodInfo *v4; // x1
  int32_t preHeight; // w20

  preWidth = this->fields.preWidth;
  if ( preWidth != UnityEngine_Screen__get_width(0)
    || (preHeight = this->fields.preHeight, preHeight != UnityEngine_Screen__get_height(0)) )
  {
    ResolutionManager__ReScale(this, v4);
  }
}


int32_t ResolutionManager__get_DefaultResolutionScreenHeight(const MethodInfo *method)
{
  ResolutionManager_c *v1; // x0

  if ( (byte_4CEDFF7 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF7 = 1;
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

  if ( (byte_4CEDFF5 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF5 = 1;
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

  if ( (byte_4CEDFF3 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF3 = 1;
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

  if ( (byte_4CEDFF1 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF1 = 1;
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

  if ( (byte_4CEDFF8 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF8 = 1;
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

  if ( (byte_4CEDFF6 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF6 = 1;
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

  if ( (byte_4CEDFF4 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF4 = 1;
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

  if ( (byte_4CEDFF2 & 1) == 0 )
  {
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    byte_4CEDFF2 = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultScreenWidth_k__BackingField = value;
}