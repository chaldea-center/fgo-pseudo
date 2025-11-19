// local variable allocation has failed, the output may be wrong!
void NguiTouchEffectManager__Drag(UnityEngine_Vector2_o v, const MethodInfo *method)
{
  __int64 v2; // x1
  long double v3; // q8
  long double v4; // q9
  struct System_Action_Vector2__o *dragAction; // x8

  v3 = *(long double *)&v.fields.y;
  v4 = *(long double *)&v.fields.x;
  if ( (byte_4CBA8D2 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C6BA08(&NguiTouchEffectManager_TypeInfo);
    byte_4CBA8D2 = 1;
  }
  dragAction = NguiTouchEffectManager_TypeInfo->static_fields->dragAction;
  if ( !dragAction )
    sub_1C6BC60(method, v2);
  ((void (__fastcall *)(intptr_t, intptr_t, long double, long double))dragAction->fields.invoke_impl)(
    dragAction->fields.method_code,
    dragAction->fields.method,
    v4,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void NguiTouchEffectManager__Press(UnityEngine_Vector2_o p, const MethodInfo *method)
{
  __int64 v2; // x1
  long double v3; // q8
  long double v4; // q9
  struct System_Action_Vector2__o *pressAction; // x8

  v3 = *(long double *)&p.fields.y;
  v4 = *(long double *)&p.fields.x;
  if ( (byte_4CBA8D0 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C6BA08(&NguiTouchEffectManager_TypeInfo);
    byte_4CBA8D0 = 1;
  }
  pressAction = NguiTouchEffectManager_TypeInfo->static_fields->pressAction;
  if ( !pressAction )
    sub_1C6BC60(method, v2);
  ((void (__fastcall *)(intptr_t, intptr_t, long double, long double))pressAction->fields.invoke_impl)(
    pressAction->fields.method_code,
    pressAction->fields.method,
    v4,
    v3);
}


void NguiTouchEffectManager__RegisterDragFunc(System_Action_Vector2__o *dragAction, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_4CBA8CF & 1) == 0 )
  {
    sub_1C6BA08(&NguiTouchEffectManager_TypeInfo);
    byte_4CBA8CF = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->dragAction = dragAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->dragAction, (int32_t)dragAction, v2, v3);
}


void NguiTouchEffectManager__RegisterPressFunc(System_Action_Vector2__o *pressAction, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CBA8CD & 1) == 0 )
  {
    sub_1C6BA08(&NguiTouchEffectManager_TypeInfo);
    byte_4CBA8CD = 1;
  }
  NguiTouchEffectManager_TypeInfo->static_fields->pressAction = pressAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)NguiTouchEffectManager_TypeInfo->static_fields, (int32_t)pressAction, v2, v3);
}


void NguiTouchEffectManager__RegisterUnPressFunc(System_Action_o *unPressAction, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_4CBA8CE & 1) == 0 )
  {
    sub_1C6BA08(&NguiTouchEffectManager_TypeInfo);
    byte_4CBA8CE = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->unPressAction = unPressAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->unPressAction, (int32_t)unPressAction, v2, v3);
}


void NguiTouchEffectManager__UnPress(const MethodInfo *method)
{
  __int64 v1; // x1
  struct System_Action_o *unPressAction; // x8

  if ( (byte_4CBA8D1 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C6BA08(&NguiTouchEffectManager_TypeInfo);
    byte_4CBA8D1 = 1;
  }
  unPressAction = NguiTouchEffectManager_TypeInfo->static_fields->unPressAction;
  if ( !unPressAction )
    sub_1C6BC60(method, v1);
  ((void (__fastcall *)(intptr_t, intptr_t))unPressAction->fields.invoke_impl)(
    unPressAction->fields.method_code,
    unPressAction->fields.method);
}