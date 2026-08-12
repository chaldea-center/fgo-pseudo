void NguiTouchEffectManager__Drag(UnityEngine_Vector2_o v, const MethodInfo *method)
{
  __int64 v2; // x1
  float y; // s8
  float x; // s9
  struct System_Action_Vector2__o *dragAction; // x8

  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_5974F3A & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_5974F3A = 1;
  }
  dragAction = NguiTouchEffectManager_TypeInfo->static_fields->dragAction;
  if ( !dragAction )
    sub_2213CDC(method, v2);
  ((void (__fastcall *)(intptr_t, intptr_t, float, float))dragAction->fields.invoke_impl)(
    dragAction->fields.method_code,
    dragAction->fields.method,
    x,
    y);
}


void NguiTouchEffectManager__Press(UnityEngine_Vector2_o p, const MethodInfo *method)
{
  __int64 v2; // x1
  float y; // s8
  float x; // s9
  struct System_Action_Vector2__o *pressAction; // x8

  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_5974F38 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_5974F38 = 1;
  }
  pressAction = NguiTouchEffectManager_TypeInfo->static_fields->pressAction;
  if ( !pressAction )
    sub_2213CDC(method, v2);
  ((void (__fastcall *)(intptr_t, intptr_t, float, float))pressAction->fields.invoke_impl)(
    pressAction->fields.method_code,
    pressAction->fields.method,
    x,
    y);
}


void NguiTouchEffectManager__RegisterDragFunc(System_Action_Vector2__o *dragAction, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_5974F37 & 1) == 0 )
  {
    sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_5974F37 = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->dragAction = dragAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->dragAction,
    (int32_t)dragAction,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NguiTouchEffectManager__RegisterPressFunc(System_Action_Vector2__o *pressAction, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974F35 & 1) == 0 )
  {
    sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_5974F35 = 1;
  }
  NguiTouchEffectManager_TypeInfo->static_fields->pressAction = pressAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)NguiTouchEffectManager_TypeInfo->static_fields,
    (int32_t)pressAction,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NguiTouchEffectManager__RegisterUnPressFunc(System_Action_o *unPressAction, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_5974F36 & 1) == 0 )
  {
    sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_5974F36 = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->unPressAction = unPressAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->unPressAction,
    (int32_t)unPressAction,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NguiTouchEffectManager__UnPress(const MethodInfo *method)
{
  __int64 v1; // x1
  struct System_Action_o *unPressAction; // x8

  if ( (byte_5974F39 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_5974F39 = 1;
  }
  unPressAction = NguiTouchEffectManager_TypeInfo->static_fields->unPressAction;
  if ( !unPressAction )
    sub_2213CDC(method, v1);
  ((void (__fastcall *)(intptr_t, intptr_t))unPressAction->fields.invoke_impl)(
    unPressAction->fields.method_code,
    unPressAction->fields.method);
}