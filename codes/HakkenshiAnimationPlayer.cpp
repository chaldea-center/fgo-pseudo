void HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct HakkenshiAnimationPlayer_StaticFields *static_fields; // x0

  if ( (byte_4CB05B4 & 1) == 0 )
  {
    sub_1C6BA08(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C6BA08(&StringLiteral_23802/*"stay_dog_{0}_loop"*/);
    sub_1C6BA08(&StringLiteral_23801/*"stay_dog_{0}_action"*/);
    byte_4CB05B4 = 1;
  }
  HakkenshiAnimationPlayer_TypeInfo->static_fields->HAKKENSHI_LOOP_ANIM_NAME = (struct System_String_o *)StringLiteral_23802/*"stay_dog_{0}_loop"*/;
  sub_1C6B9AC(HakkenshiAnimationPlayer_TypeInfo->static_fields, StringLiteral_23802/*"stay_dog_{0}_loop"*/);
  v1 = StringLiteral_23801/*"stay_dog_{0}_action"*/;
  static_fields = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  static_fields->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_23801/*"stay_dog_{0}_action"*/;
  sub_1C6B9AC(&static_fields->HAKKENSHI_ACTION_ANIM_NAME, v1);
}


void HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pieceIdx = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4CB05AF & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Animation___);
    byte_4CB05AF = 1;
  }
  this->fields.state = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C6B9AC(&this->fields.stayDogAnimation, Component_object);
}


void HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_4CB05B2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_10672/*"PlayStayAnim"*/);
    byte_4CB05B2 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10672/*"PlayStayAnim"*/,
      this->fields.durationTime,
      0);
}


void HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_4CB05B1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_10672/*"PlayStayAnim"*/);
    byte_4CB05B1 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_71644176(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10672/*"PlayStayAnim"*/,
    0);
}


void HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20
  UnityEngine_Animation_o *v4; // x20
  HakkenshiAnimationPlayer_c *v5; // x0
  int32_t pieceIdx; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB05B3 & 1) == 0 )
  {
    sub_1C6BA08(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB05B3 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
  {
    this->fields.state = 0;
    v4 = this->fields.stayDogAnimation;
    v5 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v5 = HakkenshiAnimationPlayer_TypeInfo;
    }
    pieceIdx = this->fields.pieceIdx;
    HAKKENSHI_LOOP_ANIM_NAME = v5->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v11 = pieceIdx;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v9 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v8, 0);
    if ( !v4 )
      sub_1C6BC60(v9, v10);
    UnityEngine_Animation__PlayQueued(v4, v9, 0);
  }
}


void HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20
  UnityEngine_Animation_o *v4; // x20
  HakkenshiAnimationPlayer_c *v5; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  HakkenshiAnimationPlayer_c *v10; // x0
  UnityEngine_Animation_o *v11; // x20
  int32_t v12; // w9
  System_String_o *v13; // x19
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t pieceIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB05B0 & 1) == 0 )
  {
    sub_1C6BA08(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB05B0 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) && this->fields.state == 1 )
  {
    v4 = this->fields.stayDogAnimation;
    v5 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v5 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v5->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    pieceIdx = this->fields.pieceIdx;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &pieceIdx);
    v8 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v7, 0);
    if ( !v4 )
      goto LABEL_17;
    if ( UnityEngine_Animation__IsPlaying(v4, v8, 0) )
      return;
    v8 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v8 )
      goto LABEL_17;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v8, 0);
    v10 = HakkenshiAnimationPlayer_TypeInfo;
    v11 = this->fields.stayDogAnimation;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v10 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v12 = this->fields.pieceIdx;
    v13 = v10->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v15 = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v8 = System_String__Format(v13, v14, 0);
    if ( !v11 )
LABEL_17:
      sub_1C6BC60(v8, v9);
    UnityEngine_Animation__Play_71403152(v11, v8, 0);
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