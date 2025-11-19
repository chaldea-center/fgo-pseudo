void UIEventTrigger___ctor(UIEventTrigger_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4CBA979 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4CBA979 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onHoverOver = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onHoverOver, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onHoverOut = (struct System_Collections_Generic_List_EventDelegate__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onHoverOut, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPress = (struct System_Collections_Generic_List_EventDelegate__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onPress, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onRelease = (struct System_Collections_Generic_List_EventDelegate__o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onRelease, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSelect = (struct System_Collections_Generic_List_EventDelegate__o *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onSelect, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDeselect = (struct System_Collections_Generic_List_EventDelegate__o *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDeselect, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDoubleClick, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragStart = (struct System_Collections_Generic_List_EventDelegate__o *)v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDragStart, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragEnd = (struct System_Collections_Generic_List_EventDelegate__o *)v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDragEnd, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragOver = (struct System_Collections_Generic_List_EventDelegate__o *)v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDragOver, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragOut = (struct System_Collections_Generic_List_EventDelegate__o *)v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDragOut, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDrag = (struct System_Collections_Generic_List_EventDelegate__o *)v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDrag, (int32_t)v39, v40, v41);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIEventTrigger__OnClick(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CBA972 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA972 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v4, v5);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onClick, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v7, v8);
  }
}


void UIEventTrigger__OnDoubleClick(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_EventDelegate__o *onDoubleClick; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CBA973 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA973 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v4, v5);
    onDoubleClick = this->fields.onDoubleClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onDoubleClick, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v7, v8);
  }
}


void UIEventTrigger__OnDrag(UIEventTrigger_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_EventDelegate__o *onDrag; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CBA978 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA978 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v5, v6);
    onDrag = this->fields.onDrag;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onDrag, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v8, v9);
  }
}


void UIEventTrigger__OnDragEnd(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_EventDelegate__o *onDragEnd; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CBA975 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA975 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v4, v5);
    onDragEnd = this->fields.onDragEnd;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onDragEnd, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v7, v8);
  }
}


void UIEventTrigger__OnDragOut(UIEventTrigger_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_EventDelegate__o *onDragOut; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CBA977 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA977 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v5, v6);
    onDragOut = this->fields.onDragOut;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onDragOut, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v8, v9);
  }
}


void UIEventTrigger__OnDragOver(UIEventTrigger_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_EventDelegate__o *onDragOver; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CBA976 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA976 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v5, v6);
    onDragOver = this->fields.onDragOver;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onDragOver, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v8, v9);
  }
}


void UIEventTrigger__OnDragStart(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_EventDelegate__o *onDragStart; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CBA974 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA974 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v4, v5);
    onDragStart = this->fields.onDragStart;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onDragStart, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v7, v8);
  }
}


void UIEventTrigger__OnHover(UIEventTrigger_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_EventDelegate__o *onHoverOver; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CBA96F & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA96F = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v6, v7);
    if ( isOver )
      onHoverOver = this->fields.onHoverOver;
    else
      onHoverOver = this->fields.onHoverOut;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onHoverOver, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v9, v10);
  }
}


void UIEventTrigger__OnPress(UIEventTrigger_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_EventDelegate__o *onPress; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CBA970 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA970 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v6, v7);
    if ( pressed )
      onPress = this->fields.onPress;
    else
      onPress = this->fields.onRelease;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onPress, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v9, v10);
  }
}


void UIEventTrigger__OnSelect(UIEventTrigger_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_EventDelegate__o *onSelect; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CBA971 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIEventTrigger_TypeInfo);
    byte_4CBA971 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, (int32_t)this, v6, v7);
    if ( selected )
      onSelect = this->fields.onSelect;
    else
      onSelect = this->fields.onDeselect;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49522624(onSelect, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v9, v10);
  }
}