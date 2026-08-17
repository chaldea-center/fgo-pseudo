void TweenPosition__Awake(TweenPosition_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59751F3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIRect___);
    byte_59751F3 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  this->fields.mRect = (struct UIRect_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mRect,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


TweenPosition_o *TweenPosition__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  TweenPosition_o *v9; // x0
  const MethodInfo *v10; // x1
  TweenPosition_o *v11; // x19
  const MethodInfo *v12; // x2

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_59751F4 & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_59751F4 = 1;
  }
  v9 = (TweenPosition_o *)UITweener__Begin_object_(
                            go,
                            duration,
                            (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    sub_2213CDC(0, v10);
  v11 = v9;
  v9->fields.from = TweenPosition__get_value(v9, v10);
  v11->fields.to.fields.x = x;
  v11->fields.to.fields.y = y;
  v11->fields.to.fields.z = z;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v11, 1.0, 1, v12);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0);
  }
  return v11;
}


TweenPosition_o *TweenPosition__Begin_56510056(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Vector3_o pos,
        bool worldSpace,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  TweenPosition_o *v11; // x0
  const MethodInfo *v12; // x1
  TweenPosition_o *v13; // x19
  const MethodInfo *v14; // x2

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_59751F5 & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_59751F5 = 1;
  }
  v11 = (TweenPosition_o *)UITweener__Begin_object_(
                             go,
                             duration,
                             (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v11 )
    sub_2213CDC(0, v12);
  v13 = v11;
  v11->fields.worldSpace = worldSpace;
  v11->fields.from = TweenPosition__get_value(v11, v12);
  v13->fields.to.fields.x = x;
  v13->fields.to.fields.y = y;
  v13->fields.to.fields.z = z;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v13, 1.0, 1, v14);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
void TweenPosition__OnUpdate(TweenPosition_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float v4; // s1
  float v5; // s4
  unsigned __int64 v6; // d0 OVERLAPPED
  float v7; // s2
  int v8; // s1

  v4 = (float)(1.0 - factor) * this->fields.from.fields.z;
  v5 = this->fields.to.fields.z * factor;
  v6 = vadd_f32(
         vmul_n_f32(*(float32x2_t *)&this->fields.from.fields.x, 1.0 - factor),
         vmul_n_f32(*(float32x2_t *)&this->fields.to.fields.x, factor)).n64_u64[0];
  v7 = v4 + v5;
  v8 = HIDWORD(v6);
  TweenPosition__set_value(this, *(UnityEngine_Vector3_o *)&v6, (const MethodInfo *)isFinished);
}


void TweenPosition__SetCurrentValueToEnd(TweenPosition_o *this, const MethodInfo *method)
{
  TweenPosition__set_value(this, this->fields.to, method);
}


void TweenPosition__SetCurrentValueToStart(TweenPosition_o *this, const MethodInfo *method)
{
  TweenPosition__set_value(this, this->fields.from, method);
}


void TweenPosition__SetEndToCurrentValue(TweenPosition_o *this, const MethodInfo *method)
{
  this->fields.to = TweenPosition__get_value(this, method);
}


void TweenPosition__SetStartToCurrentValue(TweenPosition_o *this, const MethodInfo *method)
{
  this->fields.from = TweenPosition__get_value(this, method);
}


UnityEngine_Transform_o *TweenPosition__get_cachedTransform(TweenPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59751F1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751F1 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mTrans;
}


// attributes: thunk
UnityEngine_Vector3_o TweenPosition__get_position(TweenPosition_o *this, const MethodInfo *method)
{
  return TweenPosition__get_value(this, method);
}


UnityEngine_Vector3_o TweenPosition__get_value(TweenPosition_o *this, const MethodInfo *method)
{
  _BOOL4 worldSpace; // w19
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v4; // x1

  worldSpace = this->fields.worldSpace;
  cachedTransform = TweenPosition__get_cachedTransform(this, method);
  if ( worldSpace )
  {
    if ( cachedTransform )
      return UnityEngine_Transform__get_position(cachedTransform, 0);
LABEL_6:
    sub_2213CDC(cachedTransform, v4);
  }
  if ( !cachedTransform )
    goto LABEL_6;
  return UnityEngine_Transform__get_localPosition(cachedTransform, 0);
}


// attributes: thunk
void TweenPosition__set_position(TweenPosition_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  TweenPosition__set_value(this, value, method);
}


void TweenPosition__set_value(TweenPosition_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  float z; // s10
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *mRect; // x20
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  _BOOL4 worldSpace; // w20
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_59751F2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751F2 = 1;
  }
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mRect, 0, 0) )
    goto LABEL_9;
  cachedTransform = (UnityEngine_Transform_o *)this->fields.mRect;
  if ( !cachedTransform )
    goto LABEL_16;
  if ( !UIRect__get_isAnchored((UIRect_o *)cachedTransform, v8) || this->fields.worldSpace )
  {
LABEL_9:
    worldSpace = this->fields.worldSpace;
    cachedTransform = TweenPosition__get_cachedTransform(this, v8);
    if ( worldSpace )
    {
      if ( cachedTransform )
      {
        v11.fields.x = x;
        v11.fields.y = y;
        v11.fields.z = z;
        UnityEngine_Transform__set_position(cachedTransform, v11, 0);
        return;
      }
LABEL_16:
      sub_2213CDC(cachedTransform, v8);
    }
    if ( !cachedTransform )
      goto LABEL_16;
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    UnityEngine_Transform__set_localPosition(cachedTransform, v12, 0);
  }
  else
  {
    cachedTransform = TweenPosition__get_cachedTransform(this, v8);
    if ( !cachedTransform )
      goto LABEL_16;
    localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    NGUIMath__MoveRect(this->fields.mRect, x - localPosition.fields.x, y - localPosition.fields.y, 0);
  }
}