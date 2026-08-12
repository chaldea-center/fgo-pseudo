void UITouchPress___ctor(UITouchPress_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_597224D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_597224D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPress = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onPress, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onLongPress = (struct System_Collections_Generic_List_EventDelegate__o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onLongPress, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onLongRelease = (struct System_Collections_Generic_List_EventDelegate__o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onLongRelease,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  *(_QWORD *)&this->fields.releaseRange = 0x4220000041200000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UITouchPress__Click(UITouchPress_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19

  if ( (byte_597224C & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    byte_597224C = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && !this->fields.isCancel
    && !this->fields.isLongPress )
  {
    onClick = this->fields.onClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v3);
    EventDelegate__Execute_56285144(onClick, 0);
  }
}


void UITouchPress__Init(UITouchPress_o *this, const MethodInfo *method)
{
  ;
}


void UITouchPress__OnCheckLongPress(UITouchPress_o *this, const MethodInfo *method)
{
  EventDelegate_c *v3; // x0
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x19

  if ( (byte_5972249 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    byte_5972249 = 1;
  }
  v3 = EventDelegate_TypeInfo;
  *(_WORD *)&this->fields.isLongPressCheck = 256;
  onLongPress = this->fields.onLongPress;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  EventDelegate__Execute_56285144(onLongPress, 0);
}


void UITouchPress__OnDrag(UITouchPress_o *this, UnityEngine_Vector2_o v, const MethodInfo *method)
{
  int32x4_t v3; // q3
  UICamera_c *v5; // x0
  float32x4_t v6; // q1
  float32x4_t v7; // q0
  int32x4_t v8; // q2
  int32x4_t v9; // q0
  int32x4_t v10; // [xsp+0h] [xbp-30h]

  if ( (byte_597224B & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10236/*"OnCheckLongPress"*/);
    byte_597224B = 1;
  }
  if ( this->fields.isLongPressCheck )
  {
    v3.n128_u32[0] = LODWORD(this->fields.releaseRange);
    if ( v3.n128_f32[0] >= 0.0 )
    {
      v5 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        v10 = v3;
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
        v3 = v10;
        v5 = UICamera_TypeInfo;
      }
      v6.n128_u64[0] = vsub_f32(
                         (float32x2_t)v5->static_fields->lastTouchPosition,
                         (float32x2_t)this->fields.startPosition).n64_u64[0];
      v3.n128_f32[1] = -v3.n128_f32[0];
      v6.n128_u64[1] = v6.n128_u64[0];
      v7 = vzip1q_s32(v3, v3);
      v8 = vcgtq_f32(v6, v7);
      v9 = vcgtq_f32(v7, v6);
      v6.n128_u32[0] = vmovn_s32(v8).n64_u32[0];
      v6.n128_u32[1] = vmovn_s32(v9).n64_u32[1];
      if ( (vmaxv_u16(vcltz_s16(vshl_n_s16((int16x4_t)v6.n128_u64[0], 0xFu))) & 1) != 0 )
      {
        this->fields.isLongPressCheck = 0;
        UnityEngine_MonoBehaviour__CancelInvoke_83442996(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10236/*"OnCheckLongPress"*/,
          0);
      }
    }
  }
}


void UITouchPress__OnEnable(UITouchPress_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
}


void UITouchPress__OnHover(UITouchPress_o *this, bool isSelect, const MethodInfo *method)
{
  if ( (byte_597224A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10236/*"OnCheckLongPress"*/);
    byte_597224A = 1;
  }
  if ( this->fields.isPress && !isSelect )
  {
    this->fields.isLongPressCheck = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10236/*"OnCheckLongPress"*/,
      0);
    this->fields.isPress = 0;
    this->fields.isLongPress = 0;
  }
}


void UITouchPress__OnPress(UITouchPress_o *this, bool isPressed, const MethodInfo *method)
{
  __int64 v5; // x1
  UICamera_c *v6; // x0
  System_Collections_Generic_List_EventDelegate__o *onPress; // x20
  struct UnityEngine_Vector2_o lastTouchPosition; // x8
  EventDelegate_c *v9; // x0
  float v10; // s0
  System_String_o *v11; // x1
  _BOOL4 isLongPressCheck; // w20
  __int64 v13; // x1
  __n128 inited; // q0
  _BOOL4 isLongPress; // w8
  _BOOL4 isCancel; // w8
  System_Collections_Generic_List_EventDelegate__o *onLongRelease; // x19
  UICamera_c *v18; // x0
  float32x4_t v19; // q2
  float32x4_t v20; // q0
  int16x4_t v21; // d1

  if ( (byte_5972248 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10236/*"OnCheckLongPress"*/);
    byte_5972248 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( isPressed )
    {
      *(_WORD *)&this->fields.isCancel = 256;
      this->fields.isLongPress = 0;
      v6 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
        v6 = UICamera_TypeInfo;
      }
      onPress = this->fields.onPress;
      lastTouchPosition = v6->static_fields->lastTouchPosition;
      v9 = EventDelegate_TypeInfo;
      this->fields.startPosition = lastTouchPosition;
      if ( !*(&v9->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v9, v5);
      EventDelegate__Execute_56285144(onPress, 0);
      v10 = 0.5;
      if ( !this->fields.isLongPressFast )
        v10 = 1.0;
      v11 = (System_String_o *)StringLiteral_10236/*"OnCheckLongPress"*/;
      this->fields.isLongPressCheck = 1;
      UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v11, v10, 0);
      return;
    }
    isLongPressCheck = this->fields.isLongPressCheck;
    this->fields.isLongPressCheck = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10236/*"OnCheckLongPress"*/,
      0);
    if ( !this->fields.isPress )
      return;
    isLongPress = this->fields.isLongPress;
    this->fields.isPress = 0;
    if ( isLongPress )
    {
      isCancel = this->fields.isCancel;
      this->fields.isLongPress = 0;
      if ( isCancel )
        return;
      onLongRelease = this->fields.onLongRelease;
      goto LABEL_23;
    }
    if ( isLongPressCheck && !this->fields.isCancel )
    {
      v18 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        inited = j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v13);
        v18 = UICamera_TypeInfo;
      }
      inited.n128_u32[0] = LODWORD(this->fields.clickRange);
      v19.n128_u64[0] = vsub_f32(
                          (float32x2_t)v18->static_fields->lastTouchPosition,
                          (float32x2_t)this->fields.startPosition).n64_u64[0];
      inited.n128_f32[1] = -inited.n128_f32[0];
      v19.n128_u64[1] = v19.n128_u64[0];
      v20 = vzip1q_s32(inited, inited);
      v21.n64_u32[0] = vmovn_s32(vmvnq_s8(vcgeq_f32(v20, v19))).n64_u32[0];
      v21.n64_u32[1] = vmovn_s32(vmvnq_s8(vcgeq_f32(v19, v20))).n64_u32[1];
      if ( (vmaxv_u16(vcltz_s16(vshl_n_s16(v21, 0xFu))) & 1) == 0 )
      {
        onLongRelease = this->fields.onClick;
LABEL_23:
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v13);
        EventDelegate__Execute_56285144(onLongRelease, 0);
      }
    }
  }
}


void UITouchPress__OnPressCancel(UITouchPress_o *this, const MethodInfo *method)
{
  this->fields.isCancel = 1;
}


void UITouchPress__PressReset(UITouchPress_o *this, const MethodInfo *method)
{
  this->fields.isCancel = 1;
}


bool UITouchPress__get_IsEnabled(UITouchPress_o *this, const MethodInfo *method)
{
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
}


bool UITouchPress__get_IsLongPress(UITouchPress_o *this, const MethodInfo *method)
{
  return !this->fields.isCancel && this->fields.isLongPress;
}


bool UITouchPress__get_IsPress(UITouchPress_o *this, const MethodInfo *method)
{
  return !this->fields.isCancel && this->fields.isPress;
}


void UITouchPress__set_IsEnabled(UITouchPress_o *this, bool value, const MethodInfo *method)
{
  _BOOL4 v5; // w20

  if ( (byte_5972247 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10236/*"OnCheckLongPress"*/);
    byte_5972247 = 1;
  }
  v5 = value;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) != v5 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10236/*"OnCheckLongPress"*/,
      0);
    *(_DWORD *)&this->fields.isCancel = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v5, 0);
  }
}