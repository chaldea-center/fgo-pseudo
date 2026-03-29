void UITouchPress___ctor(UITouchPress_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D32339 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4D32339 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onClick, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPress = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onPress, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onLongPress = (struct System_Collections_Generic_List_EventDelegate__o *)v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onLongPress, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onLongRelease = (struct System_Collections_Generic_List_EventDelegate__o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onLongRelease, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&this->fields.releaseRange = 0x4220000041200000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UITouchPress__Click(UITouchPress_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19

  if ( (byte_4D32338 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_TypeInfo);
    byte_4D32338 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && !this->fields.isCancel
    && !this->fields.isLongPress )
  {
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49943632(onClick, 0);
  }
}


void UITouchPress__Init(UITouchPress_o *this, const MethodInfo *method)
{
  ;
}


void UITouchPress__OnCheckLongPress(UITouchPress_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x19

  if ( (byte_4D32335 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_TypeInfo);
    byte_4D32335 = 1;
  }
  *(_WORD *)&this->fields.isLongPressCheck = 256;
  onLongPress = this->fields.onLongPress;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Execute_49943632(onLongPress, 0);
}


void UITouchPress__OnDrag(UITouchPress_o *this, UnityEngine_Vector2_o v, const MethodInfo *method)
{
  float releaseRange; // s8
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x8
  float v7; // s0
  float v8; // s2

  if ( (byte_4D32337 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&StringLiteral_9892/*"OnCheckLongPress"*/);
    byte_4D32337 = 1;
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
        UnityEngine_MonoBehaviour__CancelInvoke_72104408(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9892/*"OnCheckLongPress"*/,
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
  if ( (byte_4D32336 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9892/*"OnCheckLongPress"*/);
    byte_4D32336 = 1;
  }
  if ( this->fields.isPress && !isSelect )
  {
    this->fields.isLongPressCheck = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_72104408(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9892/*"OnCheckLongPress"*/,
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

  if ( (byte_4D32334 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&StringLiteral_9892/*"OnCheckLongPress"*/);
    byte_4D32334 = 1;
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
      EventDelegate__Execute_49943632(onPress, 0);
      isLongPressFast = this->fields.isLongPressFast;
      this->fields.isLongPressCheck = 1;
      v8 = 0.5;
      if ( !isLongPressFast )
        v8 = 1.0;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9892/*"OnCheckLongPress"*/,
        v8,
        0);
      return;
    }
    isLongPressCheck = this->fields.isLongPressCheck;
    this->fields.isLongPressCheck = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_72104408(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9892/*"OnCheckLongPress"*/,
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
          EventDelegate__Execute_49943632(onLongRelease, 0);
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

  if ( (byte_4D32333 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9892/*"OnCheckLongPress"*/);
    byte_4D32333 = 1;
  }
  v5 = value;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) != v5 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_72104408(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9892/*"OnCheckLongPress"*/,
      0);
    *(_DWORD *)&this->fields.isCancel = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v5, 0);
  }
}