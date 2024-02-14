void __fastcall HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct HakkenshiAnimationPlayer_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4215C9B & 1) == 0 )
  {
    sub_B0D8A4(&HakkenshiAnimationPlayer_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_22401/*"stay_dog_{0}_loop"*/, v8);
    sub_B0D8A4(&StringLiteral_22400/*"stay_dog_{0}_action"*/, v9);
    byte_4215C9B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_22401/*"stay_dog_{0}_loop"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22401/*"stay_dog_{0}_loop"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_22400/*"stay_dog_{0}_action"*/;
  v12->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_22400/*"stay_dog_{0}_action"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->HAKKENSHI_ACTION_ANIM_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.durationTime = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  struct UnityEngine_Animation_o *Component_WebViewObject; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4215C96 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    byte_4215C96 = 1;
  }
  this->fields.state = 0;
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.stayDogAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_4215C99 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10718/*"PlayStayAnim"*/, v3);
    byte_4215C99 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10718/*"PlayStayAnim"*/,
      this->fields.localPositionX,
      0LL);
}


void __fastcall HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_4215C98 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10718/*"PlayStayAnim"*/, method);
    byte_4215C98 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10718/*"PlayStayAnim"*/,
    0LL);
}


void __fastcall HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *stayDogAnimation; // x20
  UnityEngine_Animation_o *v6; // x20
  HakkenshiAnimationPlayer_c *v7; // x0
  float durationTime; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  float v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215C9A & 1) == 0 )
  {
    sub_B0D8A4(&HakkenshiAnimationPlayer_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4215C9A = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) )
  {
    this->fields.state = 0;
    v6 = this->fields.stayDogAnimation;
    v7 = HakkenshiAnimationPlayer_TypeInfo;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v7 = HakkenshiAnimationPlayer_TypeInfo;
    }
    durationTime = this->fields.durationTime;
    HAKKENSHI_LOOP_ANIM_NAME = v7->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v12 = durationTime;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v11 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v10, 0LL);
    if ( !v6 )
      sub_B0D97C(v11);
    UnityEngine_Animation__PlayQueued(v6, v11, 0LL);
  }
}


void __fastcall HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *stayDogAnimation; // x20
  UnityEngine_Animation_o *v6; // x20
  HakkenshiAnimationPlayer_c *v7; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  HakkenshiAnimationPlayer_c *v11; // x0
  UnityEngine_Animation_o *v12; // x20
  float v13; // w9
  System_String_o *v14; // x19
  Il2CppObject *v15; // x0
  float v16; // [xsp+8h] [xbp-28h] BYREF
  float durationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215C97 & 1) == 0 )
  {
    sub_B0D8A4(&HakkenshiAnimationPlayer_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4215C97 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) && this->fields.state == 1 )
  {
    v6 = this->fields.stayDogAnimation;
    v7 = HakkenshiAnimationPlayer_TypeInfo;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v7 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v7->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    durationTime = this->fields.durationTime;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &durationTime);
    v10 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v9, 0LL);
    if ( !v6 )
      goto LABEL_20;
    if ( UnityEngine_Animation__IsPlaying(v6, v10, 0LL) )
      return;
    v10 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v10 )
      goto LABEL_20;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v10, 0LL);
    v11 = HakkenshiAnimationPlayer_TypeInfo;
    v12 = this->fields.stayDogAnimation;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v11 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v13 = this->fields.durationTime;
    v14 = v11->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v16 = v13;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v10 = System_String__Format(v14, v15, 0LL);
    if ( !v12 )
LABEL_20:
      sub_B0D97C(v10);
    UnityEngine_Animation__Play_50564840(v12, v10, 0LL);
  }
}


UnityEngine_Vector3_o __fastcall HakkenshiAnimationPlayer__get_LocalPosition(
        HakkenshiAnimationPlayer_o *this,
        const MethodInfo *method)
{
  float localPositionY; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  localPositionY = this->fields.localPositionY;
  v3 = *(&this->fields.localPositionY + 1);
  v4 = 0.0;
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = localPositionY;
  return result;
}