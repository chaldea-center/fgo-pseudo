void UITouchPress___ctor(UITouchPress_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB7C7D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4CB7C7D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPress = (struct System_Collections_Generic_List_EventDelegate__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onPress, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onLongPress = (struct System_Collections_Generic_List_EventDelegate__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onLongPress, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onLongRelease = (struct System_Collections_Generic_List_EventDelegate__o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onLongRelease, (int32_t)v12, v13, v14);
  *(_QWORD *)&this->fields.releaseRange = 0x4220000041200000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UITouchPress__Click(UITouchPress_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19

  if ( (byte_4CB7C7C & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    byte_4CB7C7C = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && !this->fields.isCancel
    && !this->fields.isLongPress )
  {
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onClick, 0);
  }
}


void UITouchPress__Init(UITouchPress_o *this, const MethodInfo *method)
{
  ;
}


void UITouchPress__OnCheckLongPress(UITouchPress_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x19

  if ( (byte_4CB7C79 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    byte_4CB7C79 = 1;
  }
  *(_WORD *)&this->fields.isLongPressCheck = 256;
  onLongPress = this->fields.onLongPress;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Execute_49522624(onLongPress, 0);
}


void UITouchPress__OnDrag(UITouchPress_o *this, UnityEngine_Vector2_o v, const MethodInfo *method)
{
  float releaseRange; // s8
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x8
  float v7; // s0
  float v8; // s2

  if ( (byte_4CB7C7B & 1) == 0 )
  {
    sub_1C6BA08(&UICamera_TypeInfo);
    sub_1C6BA08(&StringLiteral_9833/*"OnCheckLongPress"*/);
    byte_4CB7C7B = 1;
  }
  if ( this->fields.isLongPressCheck )
  {
    releaseRange = this->fields.releaseRange;
    if ( releaseRange >= 0.0 )
    {
      v5 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v5 = UICamera_TypeInfo;
      }
      static_fields = v5->static_fields;
      v7 = static_fields->lastTouchPosition.fields.y - this->fields.startPosition.fields.y;
      if ( v7 > releaseRange
        || (v8 = static_fields->lastTouchPosition.fields.x - this->fields.startPosition.fields.x,
            v8 < (float)-releaseRange)
        || v8 > releaseRange
        || v7 < (float)-releaseRange )
      {
        this->fields.isLongPressCheck = 0;
        UnityEngine_MonoBehaviour__CancelInvoke_71644176(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9833/*"OnCheckLongPress"*/,
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
  if ( (byte_4CB7C7A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9833/*"OnCheckLongPress"*/);
    byte_4CB7C7A = 1;
  }
  if ( this->fields.isPress && !isSelect )
  {
    this->fields.isLongPressCheck = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_71644176(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9833/*"OnCheckLongPress"*/,
      0);
    this->fields.isPress = 0;
    this->fields.isLongPress = 0;
  }
}


void UITouchPress__OnPress(UITouchPress_o *this, bool isPressed, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  System_Collections_Generic_List_EventDelegate__o *onPress; // x20
  _BOOL4 isLongPressFast; // w9
  float v8; // s0
  _BOOL4 isLongPressCheck; // w20
  _BOOL4 isLongPress; // w8
  _BOOL4 isCancel; // w8
  UICamera_c *v12; // x0
  struct UICamera_StaticFields *static_fields; // x8
  float clickRange; // s0
  float v15; // s2
  float v16; // s2
  System_Collections_Generic_List_EventDelegate__o *onLongRelease; // x19

  if ( (byte_4CB7C78 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    sub_1C6BA08(&StringLiteral_9833/*"OnCheckLongPress"*/);
    byte_4CB7C78 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( isPressed )
    {
      this->fields.isLongPress = 0;
      *(_WORD *)&this->fields.isCancel = 256;
      v5 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v5 = UICamera_TypeInfo;
      }
      this->fields.startPosition = v5->static_fields->lastTouchPosition;
      onPress = this->fields.onPress;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49522624(onPress, 0);
      isLongPressFast = this->fields.isLongPressFast;
      this->fields.isLongPressCheck = 1;
      v8 = 0.5;
      if ( !isLongPressFast )
        v8 = 1.0;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9833/*"OnCheckLongPress"*/,
        v8,
        0);
      return;
    }
    isLongPressCheck = this->fields.isLongPressCheck;
    this->fields.isLongPressCheck = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_71644176(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9833/*"OnCheckLongPress"*/,
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
      goto LABEL_26;
    }
    if ( isLongPressCheck && !this->fields.isCancel )
    {
      v12 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v12 = UICamera_TypeInfo;
      }
      static_fields = v12->static_fields;
      clickRange = this->fields.clickRange;
      v15 = static_fields->lastTouchPosition.fields.y - this->fields.startPosition.fields.y;
      if ( v15 <= clickRange && v15 >= (float)-clickRange )
      {
        v16 = static_fields->lastTouchPosition.fields.x - this->fields.startPosition.fields.x;
        if ( v16 >= (float)-clickRange && v16 <= clickRange )
        {
          onLongRelease = this->fields.onClick;
LABEL_26:
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          EventDelegate__Execute_49522624(onLongRelease, 0);
        }
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

  if ( (byte_4CB7C77 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9833/*"OnCheckLongPress"*/);
    byte_4CB7C77 = 1;
  }
  v5 = value;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) != v5 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_71644176(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9833/*"OnCheckLongPress"*/,
      0);
    *(_DWORD *)&this->fields.isCancel = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v5, 0);
  }
}