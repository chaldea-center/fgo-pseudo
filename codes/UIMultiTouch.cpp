void UIMultiTouch___ctor(UIMultiTouch_o *this, const MethodInfo *method)
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

  if ( (byte_4CC8D11 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4CC8D11 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragUpdate = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDragUpdate, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onClick, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.releaseRange = 10.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIMultiTouch__Init(UIMultiTouch_o *this, const MethodInfo *method)
{
  this->fields.touchMax = 0;
}


void UIMultiTouch__OnClick(UIMultiTouch_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19

  if ( (byte_4CC8D10 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    byte_4CC8D10 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.isRangeOver )
  {
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onClick, 0);
  }
}


void UIMultiTouch__OnDrag(UIMultiTouch_o *this, UnityEngine_Vector2_o v, const MethodInfo *method)
{
  float releaseRange; // s8
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x8
  float v7; // s0
  float v8; // s2

  if ( (byte_4CC8D0F & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CC8D0F = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.isRangeOver )
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
        this->fields.isRangeOver = 1;
      }
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
  int v4; // w20
  int32_t *p_touchMax; // x21
  int32_t v6; // w8
  UICamera_c *v7; // x0
  struct UnityEngine_Vector2_o lastTouchPosition; // x9
  System_Collections_Generic_List_EventDelegate__o *onDragUpdate; // x19

  if ( (byte_4CC8D0E & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CC8D0E = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    touchCount = UnityEngine_Input__get_touchCount(0);
    if ( touchCount )
    {
      v4 = touchCount;
      p_touchMax = &this->fields.touchMax;
      if ( touchCount < 1 )
      {
LABEL_6:
        *p_touchMax = 0;
LABEL_20:
        onDragUpdate = this->fields.onDragUpdate;
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Execute_49587556(onDragUpdate, 0);
        return;
      }
    }
    else
    {
      if ( !UnityEngine_Input__GetMouseButton(0, 0)
        && !UnityEngine_Input__GetMouseButton(1, 0)
        && !UnityEngine_Input__GetMouseButton(2, 0) )
      {
        p_touchMax = &this->fields.touchMax;
        goto LABEL_6;
      }
      p_touchMax = &this->fields.touchMax;
      v4 = 1;
    }
    v6 = *p_touchMax;
    if ( !*p_touchMax )
    {
      v7 = UICamera_TypeInfo;
      if ( UICamera_TypeInfo->_2.cctor_finished )
      {
        v6 = 0;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v7 = UICamera_TypeInfo;
        v6 = *p_touchMax;
      }
      lastTouchPosition = v7->static_fields->lastTouchPosition;
      this->fields.isRangeOver = 0;
      this->fields.startPosition = lastTouchPosition;
    }
    if ( v4 > v6 )
    {
      *p_touchMax = v4;
      if ( v4 >= 2 )
        this->fields.isRangeOver = 1;
    }
    goto LABEL_20;
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