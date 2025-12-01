void TweenOrthoSize___ctor(TweenOrthoSize_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.from = _D0;
  UITweener___ctor((UITweener_o *)this, method);
}


TweenOrthoSize_o *TweenOrthoSize__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        float to,
        const MethodInfo *method)
{
  TweenOrthoSize_o *v7; // x0
  const MethodInfo *v8; // x1
  TweenOrthoSize_o *v9; // x19
  const MethodInfo *v10; // x2

  if ( (byte_4CCBCEA & 1) == 0 )
  {
    sub_1C713B0(&Method_UITweener_Begin_TweenOrthoSize___);
    byte_4CCBCEA = 1;
  }
  v7 = (TweenOrthoSize_o *)UITweener__Begin_object_(
                             go,
                             duration,
                             (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenOrthoSize___);
  if ( !v7 )
    sub_1C71608(0, v8);
  v9 = v7;
  v7->fields.from = TweenOrthoSize__get_value(v7, v8);
  v9->fields.to = to;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v9, 1.0, 1, v10);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, 0, 0);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void TweenOrthoSize__OnUpdate(TweenOrthoSize_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  TweenOrthoSize__set_value(
    this,
    (float)((float)(1.0 - factor) * this->fields.from) + (float)(this->fields.to * factor),
    (const MethodInfo *)isFinished);
}


void TweenOrthoSize__SetEndToCurrentValue(TweenOrthoSize_o *this, const MethodInfo *method)
{
  this->fields.to = TweenOrthoSize__get_value(this, method);
}


void TweenOrthoSize__SetStartToCurrentValue(TweenOrthoSize_o *this, const MethodInfo *method)
{
  this->fields.from = TweenOrthoSize__get_value(this, method);
}


UnityEngine_Camera_o *TweenOrthoSize__get_cachedCamera(TweenOrthoSize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mCam; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CCBCE9 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBCE9 = 1;
  }
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Camera___);
    this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mCam;
}


// attributes: thunk
float TweenOrthoSize__get_orthoSize(TweenOrthoSize_o *this, const MethodInfo *method)
{
  return TweenOrthoSize__get_value(this, method);
}


float TweenOrthoSize__get_value(TweenOrthoSize_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *cachedCamera; // x0
  __int64 v3; // x1

  cachedCamera = TweenOrthoSize__get_cachedCamera(this, method);
  if ( !cachedCamera )
    sub_1C71608(0, v3);
  return UnityEngine_Camera__get_orthographicSize(cachedCamera, 0);
}


// attributes: thunk
void TweenOrthoSize__set_orthoSize(TweenOrthoSize_o *this, float value, const MethodInfo *method)
{
  TweenOrthoSize__set_value(this, value, method);
}


void TweenOrthoSize__set_value(TweenOrthoSize_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Camera_o *cachedCamera; // x0
  __int64 v5; // x1

  cachedCamera = TweenOrthoSize__get_cachedCamera(this, method);
  if ( !cachedCamera )
    sub_1C71608(0, v5);
  UnityEngine_Camera__set_orthographicSize(cachedCamera, value, 0);
}