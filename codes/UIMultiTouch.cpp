void UIMultiTouch___ctor(UIMultiTouch_o *this, const MethodInfo *method)
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

  if ( (byte_59721B3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_59721B3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragUpdate = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDragUpdate, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.releaseRange = 10.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIMultiTouch__Init(UIMultiTouch_o *this, const MethodInfo *method)
{
  this->fields.touchMax = 0;
}


void UIMultiTouch__OnClick(UIMultiTouch_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19

  if ( (byte_59721B2 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    byte_59721B2 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.isRangeOver )
  {
    onClick = this->fields.onClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v3);
    EventDelegate__Execute_56285144(onClick, 0);
  }
}


void UIMultiTouch__OnDrag(UIMultiTouch_o *this, UnityEngine_Vector2_o v, const MethodInfo *method)
{
  __int64 v4; // x1
  int32x4_t v5; // q3
  UICamera_c *v6; // x0
  float32x4_t v7; // q1
  float32x4_t v8; // q0
  int32x4_t v9; // q2
  int32x4_t v10; // q0
  int32x4_t v11; // [xsp+0h] [xbp-30h]

  if ( (byte_59721B1 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721B1 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.isRangeOver )
  {
    v5.n128_u32[0] = LODWORD(this->fields.releaseRange);
    if ( v5.n128_f32[0] >= 0.0 )
    {
      v6 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        v11 = v5;
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
        v5 = v11;
        v6 = UICamera_TypeInfo;
      }
      v7.n128_u64[0] = vsub_f32(
                         (float32x2_t)v6->static_fields->lastTouchPosition,
                         (float32x2_t)this->fields.startPosition).n64_u64[0];
      v5.n128_f32[1] = -v5.n128_f32[0];
      v7.n128_u64[1] = v7.n128_u64[0];
      v8 = vzip1q_s32(v5, v5);
      v9 = vcgtq_f32(v7, v8);
      v10 = vcgtq_f32(v8, v7);
      v7.n128_u32[0] = vmovn_s32(v9).n64_u32[0];
      v7.n128_u32[1] = vmovn_s32(v10).n64_u32[1];
      if ( (vmaxv_u16(vcltz_s16(vshl_n_s16((int16x4_t)v7.n128_u64[0], 0xFu))) & 1) != 0 )
        this->fields.isRangeOver = 1;
    }
  }
}


void UIMultiTouch__OnEnable(UIMultiTouch_o *this, const MethodInfo *method)
{
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    this->fields.touchMax = 0;
}


void UIMultiTouch__Update(UIMultiTouch_o *this, const MethodInfo *method)
{
  int32_t touchCount; // w0
  __int64 v4; // x1
  int32_t v5; // w20
  int32_t touchMax; // w8
  UICamera_c *v7; // x0
  struct UnityEngine_Vector2_o lastTouchPosition; // x9
  System_Collections_Generic_List_EventDelegate__o *onDragUpdate; // x19

  if ( (byte_59721B0 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721B0 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    touchCount = UnityEngine_Input__get_touchCount(0);
    if ( touchCount )
    {
      v5 = touchCount;
      if ( touchCount < 1 )
      {
LABEL_6:
        this->fields.touchMax = 0;
LABEL_19:
        onDragUpdate = this->fields.onDragUpdate;
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v4);
        EventDelegate__Execute_56285144(onDragUpdate, 0);
        return;
      }
    }
    else
    {
      if ( !UnityEngine_Input__GetMouseButton(0, 0) )
      {
        v5 = 1;
        if ( UnityEngine_Input__GetMouseButton(1, 0) )
          goto LABEL_11;
        if ( !UnityEngine_Input__GetMouseButton(2, 0) )
          goto LABEL_6;
      }
      v5 = 1;
    }
LABEL_11:
    touchMax = this->fields.touchMax;
    if ( !touchMax )
    {
      v7 = UICamera_TypeInfo;
      if ( *(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        touchMax = 0;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
        v7 = UICamera_TypeInfo;
        touchMax = this->fields.touchMax;
      }
      lastTouchPosition = v7->static_fields->lastTouchPosition;
      this->fields.isRangeOver = 0;
      this->fields.startPosition = lastTouchPosition;
    }
    if ( v5 > touchMax )
    {
      this->fields.touchMax = v5;
      if ( (unsigned int)v5 >= 2 )
        this->fields.isRangeOver = 1;
    }
    goto LABEL_19;
  }
}


bool UIMultiTouch__get_IsEnabled(UIMultiTouch_o *this, const MethodInfo *method)
{
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
}


void UIMultiTouch__set_IsEnabled(UIMultiTouch_o *this, bool value, const MethodInfo *method)
{
  bool v3; // w20

  v3 = value;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) != value )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v3, 0);
}