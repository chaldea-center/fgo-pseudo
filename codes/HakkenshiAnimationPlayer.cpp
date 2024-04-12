void __fastcall HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct HakkenshiAnimationPlayer_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B1B6B & 1) == 0 )
  {
    sub_B52984(&HakkenshiAnimationPlayer_TypeInfo);
    sub_B52984(&StringLiteral_22513/*"stay_dog_{0}_loop"*/);
    sub_B52984(&StringLiteral_22512/*"stay_dog_{0}_action"*/);
    byte_42B1B6B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22513/*"stay_dog_{0}_loop"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22513/*"stay_dog_{0}_loop"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22512/*"stay_dog_{0}_action"*/;
  v9->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_22512/*"stay_dog_{0}_action"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->HAKKENSHI_ACTION_ANIM_NAME, v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_42B1B66 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Animation___);
    byte_42B1B66 = 1;
  }
  this->fields.state = 0;
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = Component_WebViewObject;
  sub_B52920(
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
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_42B1B69 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10773/*"PlayStayAnim"*/);
    byte_42B1B69 = 1;
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
      (System_String_o *)StringLiteral_10773/*"PlayStayAnim"*/,
      this->fields.localPositionX,
      0LL);
}


void __fastcall HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  if ( (byte_42B1B68 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10773/*"PlayStayAnim"*/);
    byte_42B1B68 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35611056(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10773/*"PlayStayAnim"*/,
    0LL);
}


void __fastcall HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stayDogAnimation; // x20
  UnityEngine_Animation_o *v4; // x20
  HakkenshiAnimationPlayer_c *v5; // x0
  float durationTime; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  float v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B1B6A & 1) == 0 )
  {
    sub_B52984(&HakkenshiAnimationPlayer_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1B6A = 1;
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
    v4 = this->fields.stayDogAnimation;
    v5 = HakkenshiAnimationPlayer_TypeInfo;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v5 = HakkenshiAnimationPlayer_TypeInfo;
    }
    durationTime = this->fields.durationTime;
    HAKKENSHI_LOOP_ANIM_NAME = v5->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v11 = durationTime;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v9 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v8, 0LL);
    if ( !v4 )
      sub_B52A5C(v9, v10);
    UnityEngine_Animation__PlayQueued(v4, v9, 0LL);
  }
}


void __fastcall HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
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
  float v12; // w9
  System_String_o *v13; // x19
  Il2CppObject *v14; // x0
  float v15; // [xsp+8h] [xbp-28h] BYREF
  float durationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1B67 & 1) == 0 )
  {
    sub_B52984(&HakkenshiAnimationPlayer_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1B67 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) && this->fields.state == 1 )
  {
    v4 = this->fields.stayDogAnimation;
    v5 = HakkenshiAnimationPlayer_TypeInfo;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v5 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v5->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    durationTime = this->fields.durationTime;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &durationTime);
    v8 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v7, 0LL);
    if ( !v4 )
      goto LABEL_20;
    if ( UnityEngine_Animation__IsPlaying(v4, v8, 0LL) )
      return;
    v8 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v8 )
      goto LABEL_20;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v8, 0LL);
    v10 = HakkenshiAnimationPlayer_TypeInfo;
    v11 = this->fields.stayDogAnimation;
    if ( (BYTE3(HakkenshiAnimationPlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo);
      v10 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v12 = this->fields.durationTime;
    v13 = v10->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v15 = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v8 = System_String__Format(v13, v14, 0LL);
    if ( !v11 )
LABEL_20:
      sub_B52A5C(v8, v9);
    UnityEngine_Animation__Play_51067744(v11, v8, 0LL);
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