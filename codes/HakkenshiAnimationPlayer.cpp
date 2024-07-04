void __fastcall HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct HakkenshiAnimationPlayer_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E63C3 & 1) == 0 )
  {
    sub_1B00CCC(&HakkenshiAnimationPlayer_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_23198/*"stay_dog_{0}_loop"*/, v4);
    sub_1B00CCC(&StringLiteral_23197/*"stay_dog_{0}_action"*/, v5);
    byte_48E63C3 = 1;
  }
  HakkenshiAnimationPlayer_TypeInfo->static_fields->HAKKENSHI_LOOP_ANIM_NAME = (struct System_String_o *)StringLiteral_23198/*"stay_dog_{0}_loop"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)HakkenshiAnimationPlayer_TypeInfo->static_fields,
    StringLiteral_23198/*"stay_dog_{0}_loop"*/,
    v2,
    v3);
  v6 = StringLiteral_23197/*"stay_dog_{0}_action"*/;
  static_fields = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  static_fields->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_23197/*"stay_dog_{0}_action"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->HAKKENSHI_ACTION_ANIM_NAME, v6, v8, v9);
}


void __fastcall HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pieceIdx = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E63BE & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    byte_48E63BE = 1;
  }
  this->fields.state = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.stayDogAnimation, (int32_t)Component_object, v4, v5);
}


void __fastcall HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_48E63C1 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_10535/*"PlayStayAnim"*/, v3);
    byte_48E63C1 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10535/*"PlayStayAnim"*/,
      this->fields.durationTime,
      0LL);
}


void __fastcall HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_48E63C0 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10535/*"PlayStayAnim"*/, method);
    byte_48E63C0 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10535/*"PlayStayAnim"*/,
    0LL);
}


void __fastcall HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UnityEngine_Animation_o *v9; // x20
  HakkenshiAnimationPlayer_c *v10; // x0
  int32_t pieceIdx; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48E63C2 & 1) == 0 )
  {
    sub_1B00CCC(&HakkenshiAnimationPlayer_TypeInfo, method);
    sub_1B00CCC(&int_TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    byte_48E63C2 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) )
  {
    this->fields.state = 0;
    v9 = this->fields.stayDogAnimation;
    v10 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v10 = HakkenshiAnimationPlayer_TypeInfo;
    }
    pieceIdx = this->fields.pieceIdx;
    HAKKENSHI_LOOP_ANIM_NAME = v10->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v16 = pieceIdx;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v6, v7, v8);
    v14 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v13, 0LL);
    if ( !v9 )
      sub_1B00F28(v14, v15);
    UnityEngine_Animation__PlayQueued(v9, v14, 0LL);
  }
}


void __fastcall HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UnityEngine_Animation_o *v9; // x20
  HakkenshiAnimationPlayer_c *v10; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  HakkenshiAnimationPlayer_c *v18; // x0
  UnityEngine_Animation_o *v19; // x20
  int32_t v20; // w9
  System_String_o *v21; // x19
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t pieceIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48E63BF & 1) == 0 )
  {
    sub_1B00CCC(&HakkenshiAnimationPlayer_TypeInfo, method);
    sub_1B00CCC(&int_TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    byte_48E63BF = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) && this->fields.state == 1 )
  {
    v9 = this->fields.stayDogAnimation;
    v10 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v10 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v10->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    pieceIdx = this->fields.pieceIdx;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &pieceIdx, v6, v7, v8);
    v13 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v12, 0LL);
    if ( !v9 )
      goto LABEL_17;
    if ( UnityEngine_Animation__IsPlaying(v9, v13, 0LL) )
      return;
    v13 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v13 )
      goto LABEL_17;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v13, 0LL);
    v18 = HakkenshiAnimationPlayer_TypeInfo;
    v19 = this->fields.stayDogAnimation;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v18 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v20 = this->fields.pieceIdx;
    v21 = v18->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v23 = v20;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v15, v16, v17);
    v13 = System_String__Format(v21, v22, 0LL);
    if ( !v19 )
LABEL_17:
      sub_1B00F28(v13, v14);
    UnityEngine_Animation__Play_67822748(v19, v13, 0LL);
  }
}


UnityEngine_Vector3_o __fastcall HakkenshiAnimationPlayer__get_LocalPosition(
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