void __fastcall HakkenshiAnimationPlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct HakkenshiAnimationPlayer_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1A0A4 & 1) == 0 )
  {
    sub_1BCA7E0(&HakkenshiAnimationPlayer_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_23793/*"stay_dog_{0}_loop"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23792/*"stay_dog_{0}_action"*/, v10, v11);
    byte_4B1A0A4 = 1;
  }
  HakkenshiAnimationPlayer_TypeInfo->static_fields->HAKKENSHI_LOOP_ANIM_NAME = (struct System_String_o *)StringLiteral_23793/*"stay_dog_{0}_loop"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)HakkenshiAnimationPlayer_TypeInfo->static_fields,
    StringLiteral_23793/*"stay_dog_{0}_loop"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_23792/*"stay_dog_{0}_action"*/;
  static_fields = HakkenshiAnimationPlayer_TypeInfo->static_fields;
  static_fields->HAKKENSHI_ACTION_ANIM_NAME = (struct System_String_o *)StringLiteral_23792/*"stay_dog_{0}_action"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->HAKKENSHI_ACTION_ANIM_NAME,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall HakkenshiAnimationPlayer___ctor(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.pieceIdx = 0x3F8000000000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HakkenshiAnimationPlayer__Awake(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A09F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    byte_4B1A09F = 1;
  }
  this->fields.state = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.stayDogAnimation = (struct UnityEngine_Animation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.stayDogAnimation,
    (int64_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall HakkenshiAnimationPlayer__OnReleaseEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *stayDogAnimation; // x20

  if ( (byte_4B1A0A2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10803/*"PlayStayAnim"*/, v4, v5);
    byte_4B1A0A2 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10803/*"PlayStayAnim"*/,
      this->fields.durationTime,
      0LL);
}


void __fastcall HakkenshiAnimationPlayer__OnTouchEvent(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A0A1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10803/*"PlayStayAnim"*/, method, v2);
    byte_4B1A0A1 = 1;
  }
  this->fields.state = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10803/*"PlayStayAnim"*/,
    0LL);
}


void __fastcall HakkenshiAnimationPlayer__PlayStayAnim(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v9; // x1
  UnityEngine_Animation_o *v10; // x20
  HakkenshiAnimationPlayer_c *v11; // x0
  int32_t pieceIdx; // w9
  System_String_o *HAKKENSHI_LOOP_ANIM_NAME; // x19
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A0A3 & 1) == 0 )
  {
    sub_1BCA7E0(&HakkenshiAnimationPlayer_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A0A3 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) )
  {
    this->fields.state = 0;
    v10 = this->fields.stayDogAnimation;
    v11 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo, v9);
      v11 = HakkenshiAnimationPlayer_TypeInfo;
    }
    pieceIdx = this->fields.pieceIdx;
    HAKKENSHI_LOOP_ANIM_NAME = v11->static_fields->HAKKENSHI_LOOP_ANIM_NAME;
    v17 = pieceIdx;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v15 = System_String__Format(HAKKENSHI_LOOP_ANIM_NAME, v14, 0LL);
    if ( !v10 )
      sub_1BCAA3C(v15, v16);
    UnityEngine_Animation__PlayQueued(v10, v15, 0LL);
  }
}


void __fastcall HakkenshiAnimationPlayer__Update(HakkenshiAnimationPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *stayDogAnimation; // x20
  __int64 v9; // x1
  UnityEngine_Animation_o *v10; // x20
  HakkenshiAnimationPlayer_c *v11; // x0
  System_String_o *HAKKENSHI_ACTION_ANIM_NAME; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  HakkenshiAnimationPlayer_c *v17; // x0
  UnityEngine_Animation_o *v18; // x20
  int32_t v19; // w9
  System_String_o *v20; // x19
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t pieceIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1A0A0 & 1) == 0 )
  {
    sub_1BCA7E0(&HakkenshiAnimationPlayer_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A0A0 = 1;
  }
  stayDogAnimation = (UnityEngine_Object_o *)this->fields.stayDogAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(stayDogAnimation, 0LL, 0LL) && this->fields.state == 1 )
  {
    v10 = this->fields.stayDogAnimation;
    v11 = HakkenshiAnimationPlayer_TypeInfo;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo, v9);
      v11 = HakkenshiAnimationPlayer_TypeInfo;
    }
    HAKKENSHI_ACTION_ANIM_NAME = v11->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    pieceIdx = this->fields.pieceIdx;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &pieceIdx);
    v14 = System_String__Format(HAKKENSHI_ACTION_ANIM_NAME, v13, 0LL);
    if ( !v10 )
      goto LABEL_17;
    if ( UnityEngine_Animation__IsPlaying(v10, v14, 0LL) )
      return;
    v14 = (System_String_o *)this->fields.stayDogAnimation;
    if ( !v14 )
      goto LABEL_17;
    UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v14, 0LL);
    v17 = HakkenshiAnimationPlayer_TypeInfo;
    v18 = this->fields.stayDogAnimation;
    if ( !HakkenshiAnimationPlayer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiAnimationPlayer_TypeInfo, v16);
      v17 = HakkenshiAnimationPlayer_TypeInfo;
    }
    v19 = this->fields.pieceIdx;
    v20 = v17->static_fields->HAKKENSHI_ACTION_ANIM_NAME;
    v22 = v19;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v14 = System_String__Format(v20, v21, 0LL);
    if ( !v18 )
LABEL_17:
      sub_1BCAA3C(v14, v15);
    UnityEngine_Animation__Play_69899248(v18, v14, 0LL);
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