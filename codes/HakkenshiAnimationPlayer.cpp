void HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct HakkenshiAnimationPlayer_StaticFields *static_fields; // x0

  if ( (byte_4C5106C & 1) == 0 )
  {
    sub_1C3E564(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C3E564(&StringLiteral_23728/*"stay_dog_{0}_loop"*/);
    sub_1C3E564(&StringLiteral_23727/*"stay_dog_{0}_action"*/);
    byte_4C5106C = 1;
  }
  HakkenshiAnimationPlayer_TypeInfo->static_fields->HAKKENSHI_LOOP_ANIM_NAME = (struct System_String_o *)StringLiteral_23728/*"stay_dog_{0}_loop"*/;
  sub_1C3E508(HakkenshiAnimationPlayer_TypeInfo->static_fields, StringLiteral_23728/*"stay_dog_{0}_loop"*/);
  v1 = StringLiteral_23727/*"stay_dog_{0}_action"*/;
  static_fields = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  static_fields->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_23727/*"stay_dog_{0}_action"*/;
  sub_1C3E508(&static_fields->HAKKENSHI_ACTION_ANIM_NAME, v1);
}


void HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pieceIdx = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4C51067 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Animation___);
    byte_4C51067 = 1;
  }
  this->fields.state = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C3E508(&this->fields.stayDogAnimation, Component_object);
}


void HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_4C5106A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_10676/*"PlayStayAnim"*/);
    byte_4C5106A = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10676/*"PlayStayAnim"*/,
      this->fields.durationTime,
      0);
}


void HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_4C51069 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_10676/*"PlayStayAnim"*/);
    byte_4C51069 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_71326444(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10676/*"PlayStayAnim"*/,
    0);
}


void HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  UnityEngine_Animation_o *v10; // x20
  HakkenshiAnimationPlayer_c *v11; // x0
  int32_t pieceIdx; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5106B & 1) == 0 )
  {
    sub_1C3E564(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5106B = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
  {
    this->fields.state = 0;
    v10 = this->fields.stayDogAnimation;
    v11 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v11 = HakkenshiAnimationPlayer_TypeInfo;
    }
    pieceIdx = this->fields.pieceIdx;
    HAKKENSHI_LOOP_ANIM_NAME = v11->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v17 = pieceIdx;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v4, v5, v6, v7, v8, v9);
    v15 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v14, 0);
    if ( !v10 )
      sub_1C3E7C0(v15, v16);
    UnityEngine_Animation__PlayQueued(v10, v15, 0);
  }
}


void HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  UnityEngine_Animation_o *v10; // x20
  HakkenshiAnimationPlayer_c *v11; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  HakkenshiAnimationPlayer_c *v22; // x0
  UnityEngine_Animation_o *v23; // x20
  int32_t v24; // w9
  System_String_o *v25; // x19
  Il2CppObject *v26; // x0
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t pieceIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C51068 & 1) == 0 )
  {
    sub_1C3E564(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51068 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) && this->fields.state == 1 )
  {
    v10 = this->fields.stayDogAnimation;
    v11 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v11 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v11->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    pieceIdx = this->fields.pieceIdx;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &pieceIdx, v4, v5, v6, v7, v8, v9);
    v14 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v13, 0);
    if ( !v10 )
      goto LABEL_17;
    if ( UnityEngine_Animation__IsPlaying(v10, v14, 0) )
      return;
    v14 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v14 )
      goto LABEL_17;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v14, 0);
    v22 = HakkenshiAnimationPlayer_TypeInfo;
    v23 = this->fields.stayDogAnimation;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v22 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v24 = this->fields.pieceIdx;
    v25 = v22->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v27 = v24;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v16, v17, v18, v19, v20, v21);
    v14 = System_String__Format(v25, v26, 0);
    if ( !v23 )
LABEL_17:
      sub_1C3E7C0(v14, v15);
    UnityEngine_Animation__Play_71086848(v23, v14, 0);
  }
}


UnityEngine_Vector3_o HakkenshiAnimationPlayer__get_LocalPosition(
        HakkenshiAnimationPlayer_o *this,
        const MethodInfo *method)
{
  float localPositionX; // s0
  float localPositionY; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  localPositionX = this->fields.localPositionX;
  localPositionY = this->fields.localPositionY;
  v4 = 0.0;
  result.fields.z = v4;
  result.fields.y = localPositionY;
  result.fields.x = localPositionX;
  return result;
}