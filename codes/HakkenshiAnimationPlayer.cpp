void HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct HakkenshiAnimationPlayer_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593250C & 1) == 0 )
  {
    sub_21FFC50(&HakkenshiAnimationPlayer_TypeInfo);
    sub_21FFC50(&StringLiteral_24920/*"stay_dog_{0}_loop"*/);
    sub_21FFC50(&StringLiteral_24919/*"stay_dog_{0}_action"*/);
    byte_593250C = 1;
  }
  v7 = StringLiteral_24920/*"stay_dog_{0}_loop"*/;
  HakkenshiAnimationPlayer_TypeInfo->static_fields->HAKKENSHI_LOOP_ANIM_NAME = (struct System_String_o *)StringLiteral_24920/*"stay_dog_{0}_loop"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)HakkenshiAnimationPlayer_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_24919/*"stay_dog_{0}_action"*/;
  static_fields = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  static_fields->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_24919/*"stay_dog_{0}_action"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->HAKKENSHI_ACTION_ANIM_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pieceIdx = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  const MethodInfo_37ED7E0 *v3; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5932507 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Animation___);
    byte_5932507 = 1;
  }
  v3 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Animation___;
  this->fields.state = 0;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v3);
  this->fields.stayDogAnimation = (struct UnityEngine_Animation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.stayDogAnimation,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_593250A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11108/*"PlayStayAnim"*/);
    byte_593250A = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11108/*"PlayStayAnim"*/,
      this->fields.durationTime,
      0);
}


void HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1

  if ( (byte_5932509 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11108/*"PlayStayAnim"*/);
    byte_5932509 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11108/*"PlayStayAnim"*/;
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_83229692((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Animation_o *v7; // x20
  HakkenshiAnimationPlayer_c *v8; // x0
  int32_t pieceIdx; // w10
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593250B & 1) == 0 )
  {
    sub_21FFC50(&HakkenshiAnimationPlayer_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593250B = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) )
  {
    v7 = this->fields.stayDogAnimation;
    this->fields.state = 0;
    v8 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !*(&HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo, v5, v6);
      v8 = HakkenshiAnimationPlayer_TypeInfo;
    }
    pieceIdx = this->fields.pieceIdx;
    HAKKENSHI_LOOP_ANIM_NAME = v8->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v14 = pieceIdx;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
    v12 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v11, 0);
    if ( !v7 )
      sub_21FFECC(v12, v13);
    UnityEngine_Animation__PlayQueued(v7, v12, 0);
  }
}


void HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Animation_o *v7; // x20
  HakkenshiAnimationPlayer_c *v8; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  HakkenshiAnimationPlayer_c *v15; // x0
  UnityEngine_Animation_o *v16; // x20
  int32_t v17; // w9
  System_String_o *v18; // x19
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t pieceIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5932508 & 1) == 0 )
  {
    sub_21FFC50(&HakkenshiAnimationPlayer_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932508 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0, 0) && this->fields.state == 1 )
  {
    v7 = this->fields.stayDogAnimation;
    v8 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !*(&HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo, v5, v6);
      v8 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v8->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    pieceIdx = this->fields.pieceIdx;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &pieceIdx);
    v11 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v10, 0);
    if ( !v7 )
      goto LABEL_17;
    if ( UnityEngine_Animation__IsPlaying(v7, v11, 0) )
      return;
    v11 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v11 )
      goto LABEL_17;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v11, 0);
    v15 = HakkenshiAnimationPlayer_TypeInfo;
    v16 = this->fields.stayDogAnimation;
    if ( !*(&HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo, v13, v14);
      v15 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v17 = this->fields.pieceIdx;
    v18 = v15->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v20 = v17;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v20);
    v11 = System_String__Format(v18, v19, 0);
    if ( !v16 )
LABEL_17:
      sub_21FFECC(v11, v12);
    UnityEngine_Animation__Play_82865240(v16, v11, 0);
  }
}


UnityEngine_Vector3_o HakkenshiAnimationPlayer__get_LocalPosition(
        HakkenshiAnimationPlayer_o *this,
        const MethodInfo *method)
{
  float v2; // s2
  float localPositionX; // s0
  float localPositionY; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = 0.0;
  localPositionX = this->fields.localPositionX;
  localPositionY = this->fields.localPositionY;
  result.fields.z = v2;
  result.fields.y = localPositionY;
  result.fields.x = localPositionX;
  return result;
}