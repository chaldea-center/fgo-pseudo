void TweenPosition__Awake(TweenPosition_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C477C0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIRect___);
    byte_4C477C0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  this->fields.mRect = (struct UIRect_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mRect, (int32_t)Component_object, v4, v5);
}


TweenPosition_o *TweenPosition__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s11
  TweenPosition_o *v9; // x0
  const MethodInfo *v10; // x1
  TweenPosition_o *v11; // x19
  const MethodInfo *v12; // x2

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C477C1 & 1) == 0 )
  {
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    byte_4C477C1 = 1;
  }
  v9 = (TweenPosition_o *)UITweener__Begin_object_(
                            go,
                            duration,
                            (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    sub_1C372B4(0);
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


TweenPosition_o *TweenPosition__Begin_49444372(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Vector3_o pos,
        bool worldSpace,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s11
  TweenPosition_o *v11; // x0
  const MethodInfo *v12; // x1
  TweenPosition_o *v13; // x19
  const MethodInfo *v14; // x2

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C477C2 & 1) == 0 )
  {
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    byte_4C477C2 = 1;
  }
  v11 = (TweenPosition_o *)UITweener__Begin_object_(
                             go,
                             duration,
                             (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v11 )
    sub_1C372B4(0);
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
  float v4; // s2
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C477BE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477BE = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6);
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

  worldSpace = this->fields.worldSpace;
  cachedTransform = TweenPosition__get_cachedTransform(this, method);
  if ( !cachedTransform )
    sub_1C372B4(0);
  if ( worldSpace )
    return UnityEngine_Transform__get_position(cachedTransform, 0);
  else
    return UnityEngine_Transform__get_localPosition(cachedTransform, 0);
}


// attributes: thunk
void TweenPosition__set_position(TweenPosition_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  TweenPosition__set_value(this, value, method);
}


// local variable allocation has failed, the output may be wrong!
void TweenPosition__set_value(TweenPosition_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  float z; // s10
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *mRect; // x20
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  _BOOL4 worldSpace; // w20
  float v11; // s0 OVERLAPPED
  float v12; // s1
  float v13; // s2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C477BF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477BF = 1;
  }
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mRect, 0, 0) )
  {
    cachedTransform = (UnityEngine_Transform_o *)this->fields.mRect;
    if ( !cachedTransform )
      goto LABEL_15;
    if ( UIRect__get_isAnchored((UIRect_o *)cachedTransform, v8) && !this->fields.worldSpace )
    {
      cachedTransform = TweenPosition__get_cachedTransform(this, v8);
      if ( cachedTransform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
        NGUIMath__MoveRect(this->fields.mRect, x - localPosition.fields.x, y - localPosition.fields.y, 0);
        return;
      }
LABEL_15:
      sub_1C372B4(cachedTransform);
    }
  }
  worldSpace = this->fields.worldSpace;
  cachedTransform = TweenPosition__get_cachedTransform(this, v8);
  if ( !cachedTransform )
    goto LABEL_15;
  v11 = x;
  v12 = y;
  v13 = z;
  if ( worldSpace )
    UnityEngine_Transform__set_position(cachedTransform, *(UnityEngine_Vector3_o *)&v11, 0);
  else
    UnityEngine_Transform__set_localPosition(cachedTransform, *(UnityEngine_Vector3_o *)&v11, 0);
}