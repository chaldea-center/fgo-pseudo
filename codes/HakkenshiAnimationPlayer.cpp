void __fastcall HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct HakkenshiAnimationPlayer_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EA490 & 1) == 0 )
  {
    sub_B5D5C4(&HakkenshiAnimationPlayer_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_22628/*"stay_dog_{0}_loop"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22627/*"stay_dog_{0}_action"*/, v11, v12, v13);
    byte_42EA490 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_22628/*"stay_dog_{0}_loop"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22628/*"stay_dog_{0}_loop"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_22627/*"stay_dog_{0}_action"*/;
  v16->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_22627/*"stay_dog_{0}_action"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->HAKKENSHI_ACTION_ANIM_NAME, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.durationTime = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_Animation_o *Component_WebViewObject; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42EA48B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    byte_42EA48B = 1;
  }
  this->fields.state = 0;
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.stayDogAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_42EA48E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10819/*"PlayStayAnim"*/, v5, v6, v7);
    byte_42EA48E = 1;
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
      (System_String_o *)StringLiteral_10819/*"PlayStayAnim"*/,
      this->fields.localPositionX,
      0LL);
}


void __fastcall HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA48D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10819/*"PlayStayAnim"*/, (_DWORD)method, v2, v3);
    byte_42EA48D = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10819/*"PlayStayAnim"*/,
    0LL);
}


void __fastcall HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *stayDogAnimation; // x20
  UnityEngine_Animation_o *v12; // x20
  HakkenshiAnimationPlayer_c *v13; // x0
  float durationTime; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  float v19; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA48F & 1) == 0 )
  {
    sub_B5D5C4(&HakkenshiAnimationPlayer_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EA48F = 1;
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
    v12 = this->fields.stayDogAnimation;
    v13 = HakkenshiAnimationPlayer_TypeInfo;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v13 = HakkenshiAnimationPlayer_TypeInfo;
    }
    durationTime = this->fields.durationTime;
    HAKKENSHI_LOOP_ANIM_NAME = v13->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v19 = durationTime;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v17 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v16, 0LL);
    if ( !v12 )
      sub_B5D69C(v17, v18);
    UnityEngine_Animation__PlayQueued(v12, v17, 0LL);
  }
}


void __fastcall HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *stayDogAnimation; // x20
  UnityEngine_Animation_o *v12; // x20
  HakkenshiAnimationPlayer_c *v13; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  HakkenshiAnimationPlayer_c *v18; // x0
  UnityEngine_Animation_o *v19; // x20
  float v20; // w9
  System_String_o *v21; // x19
  Il2CppObject *v22; // x0
  float v23; // [xsp+8h] [xbp-28h] BYREF
  float durationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA48C & 1) == 0 )
  {
    sub_B5D5C4(&HakkenshiAnimationPlayer_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EA48C = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) && this->fields.state == 1 )
  {
    v12 = this->fields.stayDogAnimation;
    v13 = HakkenshiAnimationPlayer_TypeInfo;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v13 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v13->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    durationTime = this->fields.durationTime;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &durationTime);
    v16 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v15, 0LL);
    if ( !v12 )
      goto LABEL_20;
    if ( UnityEngine_Animation__IsPlaying(v12, v16, 0LL) )
      return;
    v16 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v16 )
      goto LABEL_20;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v16, 0LL);
    v18 = HakkenshiAnimationPlayer_TypeInfo;
    v19 = this->fields.stayDogAnimation;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v18 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v20 = this->fields.durationTime;
    v21 = v18->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v23 = v20;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v16 = System_String__Format(v21, v22, 0LL);
    if ( !v19 )
LABEL_20:
      sub_B5D69C(v16, v17);
    UnityEngine_Animation__Play_51249124(v19, v16, 0LL);
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