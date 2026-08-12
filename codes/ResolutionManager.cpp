void ResolutionManager___cctor(const MethodInfo *method)
{
  struct ResolutionManager_StaticFields *static_fields; // x8

  if ( (byte_597013C & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597013C = 1;
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
  __int64 v1; // x1
  ResolutionManager_c *v2; // x0
  struct ResolutionManager_StaticFields *static_fields; // x8
  __int64 v4; // x1
  int32_t width; // w19
  ResolutionManager_c *v6; // x0
  __int64 v7; // x1
  int32_t height; // w19
  ResolutionManager_c *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  int32_t v12; // w19
  ResolutionManager_c *v13; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  int32_t v16; // w19
  ResolutionManager_c *v17; // x0
  UnityEngine_Resolution_o currentResolution; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Resolution_o v19; // 0:x0.16
  UnityEngine_Resolution_o v20; // 0:x0.16

  if ( (byte_5970133 & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_5970133 = 1;
  }
  v2 = ResolutionManager_TypeInfo;
  *(_QWORD *)&currentResolution.fields.m_Width = 0;
  currentResolution.fields.m_RefreshRate = 0;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v1);
    v2 = ResolutionManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isInitialize )
  {
    if ( !*(&v2->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v2, v1);
      static_fields = ResolutionManager_TypeInfo->static_fields;
    }
    static_fields->isInitialize = 1;
    width = UnityEngine_Screen__get_width(0);
    if ( !byte_5970225 )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      byte_5970225 = 1;
    }
    v6 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v4);
      v6 = ResolutionManager_TypeInfo;
    }
    v6->static_fields->_DefaultScreenWidth_k__BackingField = width;
    height = UnityEngine_Screen__get_height(0);
    if ( !byte_5970226 )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      byte_5970226 = 1;
    }
    v9 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v7);
      v9 = ResolutionManager_TypeInfo;
    }
    v9->static_fields->_DefaultScreenHeight_k__BackingField = height;
    currentResolution = UnityEngine_Screen__get_currentResolution(0);
    *(_QWORD *)&v19.fields.m_Width = &currentResolution;
    v19.fields.m_RefreshRate = 0;
    v12 = UnityEngine_Resolution__get_width(v19, v10);
    if ( !byte_5970227 )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      byte_5970227 = 1;
    }
    v13 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v11);
      v13 = ResolutionManager_TypeInfo;
    }
    v13->static_fields->_DefaultResolutionScreenWidth_k__BackingField = v12;
    currentResolution = UnityEngine_Screen__get_currentResolution(0);
    *(_QWORD *)&v20.fields.m_Width = &currentResolution;
    v20.fields.m_RefreshRate = 0;
    v16 = UnityEngine_Resolution__get_height(v20, v14);
    if ( !byte_5970228 )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      byte_5970228 = 1;
    }
    v17 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v15);
      v17 = ResolutionManager_TypeInfo;
    }
    v17->static_fields->_DefaultResolutionScreenHeight_k__BackingField = v16;
  }
}


bool ResolutionManager__IsEnableResolutionSetting(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_597013A & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597013A = 1;
  }
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v1);
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
  int v4; // w8
  __int64 v5; // x1
  UnityEngine_Camera_o *v6; // x0
  UnityEngine_Camera_o *v7; // x19
  __int64 v8; // x1
  BattlePerformance_c *v9; // x0
  UnityEngine_Matrix4x4_o *v10; // x8
  __int128 v11; // q2
  __int128 v12; // q3
  UnityEngine_Matrix4x4_o v13; // [xsp+0h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v14; // [xsp+40h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v15; // [xsp+80h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v16; // [xsp+C0h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v17[2]; // [xsp+100h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v18; // [xsp+180h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+1C0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5970139 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformance_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970139 = 1;
  }
  camera = (UnityEngine_Object_o *)this->fields.camera;
  v4 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v17[1], 0, sizeof(UnityEngine_Matrix4x4_o));
  memset(&v18, 0, sizeof(v18));
  memset(&v19, 0, sizeof(v19));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(camera, 0, 0) && this->fields.enableFlip && this->fields.is3DCamera )
  {
    v6 = this->fields.camera;
    if ( !v6
      || (UnityEngine_Camera__ResetWorldToCameraMatrix(v6, 0), (v6 = this->fields.camera) == 0)
      || (UnityEngine_Camera__ResetProjectionMatrix(v6, 0), (v7 = this->fields.camera) == 0) )
    {
      sub_2213CDC(v6, v5);
    }
    UnityEngine_Camera__get_projectionMatrix(v17, v7, 0);
    v9 = BattlePerformance_TypeInfo;
    if ( !*(&BattlePerformance_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, v8);
      v9 = BattlePerformance_TypeInfo;
    }
    if ( v9->static_fields->CameraFlip )
    {
      v10 = &v19;
      v19 = v17[0];
      v20.fields.x = -1.0;
    }
    else
    {
      v10 = &v18;
      v18 = v17[0];
      v20.fields.x = 1.0;
    }
    v11 = *(_OWORD *)&v10->fields.m01;
    *(_OWORD *)&v17[1].fields.m00 = *(_OWORD *)&v10->fields.m00;
    *(_OWORD *)&v17[1].fields.m01 = v11;
    v12 = *(_OWORD *)&v10->fields.m03;
    v20.fields.z = 1.0;
    *(_OWORD *)&v17[1].fields.m02 = *(_OWORD *)&v10->fields.m02;
    *(_OWORD *)&v17[1].fields.m03 = v12;
    v20.fields.y = 1.0;
    UnityEngine_Matrix4x4__Scale(v17, v20, 0);
    v15 = v17[1];
    v14 = v17[0];
    UnityEngine_Matrix4x4__op_Multiply(&v16, &v15, &v14, 0);
    v13 = v16;
    UnityEngine_Camera__set_projectionMatrix(v7, &v13, 0);
  }
}


void ResolutionManager__OnPreRender(ResolutionManager_o *this, const MethodInfo *method)
{
  BattlePerformance_c *v3; // x0

  if ( (byte_5970138 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformance_TypeInfo);
    byte_5970138 = 1;
  }
  if ( this->fields.enableFlip && this->fields.is3DCamera )
  {
    v3 = BattlePerformance_TypeInfo;
    if ( !*(&BattlePerformance_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, method);
      v3 = BattlePerformance_TypeInfo;
    }
    UnityEngine_GL__set_invertCulling(v3->static_fields->CameraFlip, 0);
  }
}


void ResolutionManager__ReScale(ResolutionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_3820CA8 *v3; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t CameraWidth; // w20
  const MethodInfo *v9; // x1
  int32_t CameraHeight; // w0
  __int64 v11; // x1
  int32_t logicalWidth; // s8
  int32_t logicalHeight; // s9
  UnityEngine_Object_o *camera; // x22
  int v15; // w21
  __int64 v16; // x1
  UnityEngine_Camera_o *v17; // x0
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5970135 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970135 = 1;
  }
  v3 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRoot___;
  this->fields.is3DCamera = 0;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v3);
  if ( !CommonFunction__ReScaleUiFunc((UIRoot_o *)Component_object, 0) )
    this->fields.is3DCamera = 1;
  this->fields.preWidth = ResolutionManager__get_CameraWidth(this, v5);
  this->fields.preHeight = ResolutionManager__get_CameraHeight(this, v6);
  CameraWidth = ResolutionManager__get_CameraWidth(this, v7);
  CameraHeight = ResolutionManager__get_CameraHeight(this, v9);
  logicalWidth = this->fields.logicalWidth;
  logicalHeight = this->fields.logicalHeight;
  camera = (UnityEngine_Object_o *)this->fields.camera;
  v15 = CameraHeight;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(camera, 0, 0) )
  {
    v18.fields.m_Height = 1.0;
    if ( (float)((float)((float)CameraWidth / (float)logicalHeight) * (float)logicalWidth) >= (float)CameraWidth )
      v18.fields.m_Height = (float)((float)CameraWidth * (float)logicalHeight)
                          / (float)((float)v15 * (float)logicalWidth);
    v17 = this->fields.camera;
    if ( !v17 )
      sub_2213CDC(0, v16);
    v18.fields.m_Width = 1.0;
    v18.fields.m_YMin = (float)(1.0 - v18.fields.m_Height) * 0.5;
    v18.fields.m_XMin = 0.0;
    UnityEngine_Camera__set_rect(v17, v18, 0);
  }
}


void ResolutionManager__SetResolutionType(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  float dpi; // s0
  int v5; // w8
  double v6; // d9
  ResolutionManager_c *v7; // x0
  struct ResolutionManager_StaticFields *static_fields; // x9
  int DefaultScreenWidth_k__BackingField; // w21
  double RESOLUTION_LOW_DPI; // d8
  double v11; // d8
  double v12; // d8
  __int64 v13; // x1
  double v14; // d8
  ResolutionManager_c *v15; // x0
  double v16; // d10
  double v17; // d9
  double v18; // d0
  int32_t DefaultScreenHeight_k__BackingField; // w19
  bool fullScreen; // w0
  int v21; // w8
  bool v22; // w2
  int32_t v23; // w0
  ResolutionManager_c *v24; // x0
  int32_t v25; // w20
  bool v26; // w8

  if ( (byte_597013B & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597013B = 1;
  }
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, method);
  dpi = UnityEngine_Screen__get_dpi(0);
  v5 = *(&ResolutionManager_TypeInfo->_2.cctor_finished + 1);
  if ( type && (v6 = dpi, ResolutionManager_TypeInfo->static_fields->RESOLUTION_LOW_DPI < dpi) )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v3);
    if ( !byte_5970229 )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      byte_5970229 = 1;
    }
    v7 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v3);
      v7 = ResolutionManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    DefaultScreenWidth_k__BackingField = static_fields->_DefaultScreenWidth_k__BackingField;
    RESOLUTION_LOW_DPI = static_fields->RESOLUTION_LOW_DPI;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
    v11 = RESOLUTION_LOW_DPI * (double)DefaultScreenWidth_k__BackingField;
    if ( !byte_596DC8F )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596DC8F = 1;
    }
    v12 = v11 / v6;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
    v14 = System_Math__Round_77154056(v12, 0, 1, 0);
    if ( !byte_597022A )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      byte_597022A = 1;
    }
    v15 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v13);
      v15 = ResolutionManager_TypeInfo;
    }
    v16 = v15->static_fields->RESOLUTION_LOW_DPI * (double)v15->static_fields->_DefaultScreenHeight_k__BackingField;
    if ( !byte_596DC8F )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596DC8F = 1;
    }
    v17 = v16 / v6;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
    v18 = System_Math__Round_77154056(v17, 0, 1, 0);
    if ( v18 == INFINITY )
      DefaultScreenHeight_k__BackingField = 0x80000000;
    else
      DefaultScreenHeight_k__BackingField = (int)v18;
    fullScreen = UnityEngine_Screen__get_fullScreen(0);
    v21 = (int)v14;
    v22 = fullScreen;
    if ( v14 == INFINITY )
      v21 = 0x80000000;
    v23 = v21;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v3);
    if ( !byte_5970229 )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      byte_5970229 = 1;
    }
    v24 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v3);
      v24 = ResolutionManager_TypeInfo;
    }
    v25 = v24->static_fields->_DefaultScreenWidth_k__BackingField;
    if ( !byte_597022A )
    {
      sub_2213A60(&ResolutionManager_TypeInfo);
      v24 = ResolutionManager_TypeInfo;
      byte_597022A = 1;
    }
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v3);
      v24 = ResolutionManager_TypeInfo;
    }
    DefaultScreenHeight_k__BackingField = v24->static_fields->_DefaultScreenHeight_k__BackingField;
    v26 = UnityEngine_Screen__get_fullScreen(0);
    v23 = v25;
    v22 = v26;
  }
  UnityEngine_Screen__SetResolution_83240544(v23, DefaultScreenHeight_k__BackingField, v22, 0);
}


void ResolutionManager__Start(ResolutionManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_5970134 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    byte_5970134 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.camera = (struct UnityEngine_Camera_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.camera,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  __int64 v6; // x1
  UnityEngine_Object_o *targetTexture; // x20

  if ( (byte_5970137 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970137 = 1;
  }
  if ( this->fields.is3DCamera )
  {
    camera = (UnityEngine_Object_o *)this->fields.camera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(camera, 0, 0) )
    {
      v5 = this->fields.camera;
      if ( !v5 )
        goto LABEL_15;
      targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v5, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
        sub_2213CDC(v5, v4);
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
  __int64 v6; // x1
  UnityEngine_Object_o *targetTexture; // x20

  if ( (byte_5970136 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970136 = 1;
  }
  if ( this->fields.is3DCamera )
  {
    camera = (UnityEngine_Object_o *)this->fields.camera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(camera, 0, 0) )
    {
      v5 = this->fields.camera;
      if ( !v5 )
        goto LABEL_15;
      targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v5, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
        sub_2213CDC(v5, v4);
      }
    }
  }
  return UnityEngine_Screen__get_width(0);
}


int32_t ResolutionManager__get_DefaultResolutionScreenHeight(const MethodInfo *method)
{
  __int64 v1; // x1
  ResolutionManager_c *v2; // x0

  if ( (byte_5970131 & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_5970131 = 1;
  }
  v2 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v1);
    v2 = ResolutionManager_TypeInfo;
  }
  return v2->static_fields->_DefaultResolutionScreenHeight_k__BackingField;
}


int32_t ResolutionManager__get_DefaultResolutionScreenWidth(const MethodInfo *method)
{
  __int64 v1; // x1
  ResolutionManager_c *v2; // x0

  if ( (byte_597012F & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597012F = 1;
  }
  v2 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v1);
    v2 = ResolutionManager_TypeInfo;
  }
  return v2->static_fields->_DefaultResolutionScreenWidth_k__BackingField;
}


int32_t ResolutionManager__get_DefaultScreenHeight(const MethodInfo *method)
{
  __int64 v1; // x1
  ResolutionManager_c *v2; // x0

  if ( (byte_597012D & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597012D = 1;
  }
  v2 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v1);
    v2 = ResolutionManager_TypeInfo;
  }
  return v2->static_fields->_DefaultScreenHeight_k__BackingField;
}


int32_t ResolutionManager__get_DefaultScreenWidth(const MethodInfo *method)
{
  __int64 v1; // x1
  ResolutionManager_c *v2; // x0

  if ( (byte_597012B & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597012B = 1;
  }
  v2 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v1);
    v2 = ResolutionManager_TypeInfo;
  }
  return v2->static_fields->_DefaultScreenWidth_k__BackingField;
}


void ResolutionManager__set_DefaultResolutionScreenHeight(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_5970132 & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_5970132 = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, method);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultResolutionScreenHeight_k__BackingField = value;
}


void ResolutionManager__set_DefaultResolutionScreenWidth(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_5970130 & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_5970130 = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, method);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultResolutionScreenWidth_k__BackingField = value;
}


void ResolutionManager__set_DefaultScreenHeight(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_597012E & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597012E = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, method);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultScreenHeight_k__BackingField = value;
}


void ResolutionManager__set_DefaultScreenWidth(int32_t value, const MethodInfo *method)
{
  ResolutionManager_c *v3; // x0

  if ( (byte_597012C & 1) == 0 )
  {
    sub_2213A60(&ResolutionManager_TypeInfo);
    byte_597012C = 1;
  }
  v3 = ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, method);
    v3 = ResolutionManager_TypeInfo;
  }
  v3->static_fields->_DefaultScreenWidth_k__BackingField = value;
}