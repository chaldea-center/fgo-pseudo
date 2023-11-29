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

  if ( (byte_40FC14A & 1) == 0 )
  {
    sub_B16FFC(&HakkenshiAnimationPlayer_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22233, v8);
    sub_B16FFC(&StringLiteral_22232, v9);
    byte_40FC14A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_22233;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22233;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_22232;
  v12->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_22232;
  sub_B16F98((BattleServantConfConponent_o *)&v12->HAKKENSHI_ACTION_ANIM_NAME, v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_40FC145 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    byte_40FC145 = 1;
  }
  this->fields.state = 0;
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = Component_WebViewObject;
  sub_B16F98(
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

  if ( (byte_40FC148 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10659, v3);
    byte_40FC148 = 1;
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
      (System_String_o *)StringLiteral_10659,
      this->fields.localPositionX,
      0LL);
}


void __fastcall HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_40FC147 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10659, method);
    byte_40FC147 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10659,
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

  if ( (byte_40FC149 & 1) == 0 )
  {
    sub_B16FFC(&HakkenshiAnimationPlayer_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FC149 = 1;
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
      sub_B170D4();
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
  UnityEngine_Animation_o *v11; // x0
  HakkenshiAnimationPlayer_c *v12; // x0
  UnityEngine_Animation_o *v13; // x20
  float v14; // w9
  System_String_o *v15; // x19
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  float v18; // [xsp+8h] [xbp-28h] BYREF
  float durationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC146 & 1) == 0 )
  {
    sub_B16FFC(&HakkenshiAnimationPlayer_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FC146 = 1;
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
    v11 = this->fields.stayDogAnimation;
    if ( !v11 )
      goto LABEL_20;
    UnityEngine_Animation__Rewind(v11, 0LL);
    v12 = HakkenshiAnimationPlayer_TypeInfo;
    v13 = this->fields.stayDogAnimation;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v12 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v14 = this->fields.durationTime;
    v15 = v12->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v18 = v14;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = System_String__Format(v15, v16, 0LL);
    if ( !v13 )
LABEL_20:
      sub_B170D4();
    UnityEngine_Animation__Play_49744236(v13, v17, 0LL);
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