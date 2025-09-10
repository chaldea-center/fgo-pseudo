void HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  struct HakkenshiAnimationPlayer_StaticFields *static_fields; // x0

  if ( (byte_4C21633 & 1) == 0 )
  {
    sub_1C2D490(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C2D490(&StringLiteral_23686/*"stay_dog_{0}_loop"*/);
    sub_1C2D490(&StringLiteral_23685/*"stay_dog_{0}_action"*/);
    byte_4C21633 = 1;
  }
  HakkenshiAnimationPlayer_TypeInfo->static_fields->HAKKENSHI_LOOP_ANIM_NAME = (struct System_String_o *)StringLiteral_23686/*"stay_dog_{0}_loop"*/;
  sub_1C2D434(HakkenshiAnimationPlayer_TypeInfo->static_fields);
  static_fields = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  static_fields->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_23685/*"stay_dog_{0}_action"*/;
  sub_1C2D434(&static_fields->HAKKENSHI_ACTION_ANIM_NAME);
}


void HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pieceIdx = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_4C2162E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Animation___);
    byte_4C2162E = 1;
  }
  this->fields.state = 0;
  this->fields.stayDogAnimation = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)this,
                                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Animation___);
  sub_1C2D434(&this->fields.stayDogAnimation);
}


void HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_4C21631 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_10667/*"PlayStayAnim"*/);
    byte_4C21631 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10667/*"PlayStayAnim"*/,
      this->fields.durationTime,
      0);
}


void HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_4C21630 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10667/*"PlayStayAnim"*/);
    byte_4C21630 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_71148584(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10667/*"PlayStayAnim"*/,
    0);
}


void HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  UnityEngine_Animation_o *v7; // x20
  HakkenshiAnimationPlayer_c *v8; // x0
  int32_t pieceIdx; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C21632 & 1) == 0 )
  {
    sub_1C2D490(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21632 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
  {
    this->fields.state = 0;
    v7 = this->fields.stayDogAnimation;
    v8 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v8 = HakkenshiAnimationPlayer_TypeInfo;
    }
    pieceIdx = this->fields.pieceIdx;
    HAKKENSHI_LOOP_ANIM_NAME = v8->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v14 = pieceIdx;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v4, v5, v6);
    v12 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v11, 0);
    if ( !v7 )
      sub_1C2D6EC(v12, v13);
    UnityEngine_Animation__PlayQueued(v7, v12, 0);
  }
}


void HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  UnityEngine_Animation_o *v7; // x20
  HakkenshiAnimationPlayer_c *v8; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  HakkenshiAnimationPlayer_c *v16; // x0
  UnityEngine_Animation_o *v17; // x20
  int32_t v18; // w9
  System_String_o *v19; // x19
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t pieceIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2162F & 1) == 0 )
  {
    sub_1C2D490(&HakkenshiAnimationPlayer_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2162F = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) && this->fields.state == 1 )
  {
    v7 = this->fields.stayDogAnimation;
    v8 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v8 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v8->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    pieceIdx = this->fields.pieceIdx;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &pieceIdx, v4, v5, v6);
    v11 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v10, 0);
    if ( !v7 )
      goto LABEL_17;
    if ( UnityEngine_Animation__IsPlaying(v7, v11, 0) )
      return;
    v11 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v11 )
      goto LABEL_17;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v11, 0);
    v16 = HakkenshiAnimationPlayer_TypeInfo;
    v17 = this->fields.stayDogAnimation;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v16 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v18 = this->fields.pieceIdx;
    v19 = v16->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v21 = v18;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v13, v14, v15);
    v11 = System_String__Format(v19, v20, 0);
    if ( !v17 )
LABEL_17:
      sub_1C2D6EC(v11, v12);
    UnityEngine_Animation__Play_70908988(v17, v11, 0);
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