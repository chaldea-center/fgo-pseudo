// local variable allocation has failed, the output may be wrong!
void __fastcall NguiTouchEffectManager__Drag(UnityEngine_Vector2_o v, const MethodInfo *method)
{
  __int64 v2; // x1
  long double v3; // q8
  long double v4; // q9
  struct System_Action_Vector2__o *dragAction; // x8

  v3 = *(long double *)&v.fields.y;
  v4 = *(long double *)&v.fields.x;
  if ( (byte_4A52DD0 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B863B8(&NguiTouchEffectManager_TypeInfo, v2);
    byte_4A52DD0 = 1;
  }
  dragAction = NguiTouchEffectManager_TypeInfo->static_fields->dragAction;
  if ( !dragAction )
    sub_1B86614(method, v2);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double, long double))dragAction->fields.m_target)(
    dragAction->fields.original_method_info,
    *(_QWORD *)&dragAction->fields.extra_arg,
    v4,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NguiTouchEffectManager__Press(UnityEngine_Vector2_o p, const MethodInfo *method)
{
  __int64 v2; // x1
  long double v3; // q8
  long double v4; // q9
  struct System_Action_Vector2__o *pressAction; // x8

  v3 = *(long double *)&p.fields.y;
  v4 = *(long double *)&p.fields.x;
  if ( (byte_4A52DCE & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B863B8(&NguiTouchEffectManager_TypeInfo, v2);
    byte_4A52DCE = 1;
  }
  pressAction = NguiTouchEffectManager_TypeInfo->static_fields->pressAction;
  if ( !pressAction )
    sub_1B86614(method, v2);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double, long double))pressAction->fields.m_target)(
    pressAction->fields.original_method_info,
    *(_QWORD *)&pressAction->fields.extra_arg,
    v4,
    v3);
}


void __fastcall NguiTouchEffectManager__RegisterDragFunc(
        System_Action_Vector2__o *dragAction,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_4A52DCD & 1) == 0 )
  {
    sub_1B863B8(&NguiTouchEffectManager_TypeInfo, method);
    byte_4A52DCD = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->dragAction = dragAction;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->dragAction, (int32_t)dragAction, v2, v3);
}


void __fastcall NguiTouchEffectManager__RegisterPressFunc(
        System_Action_Vector2__o *pressAction,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4A52DCB & 1) == 0 )
  {
    sub_1B863B8(&NguiTouchEffectManager_TypeInfo, method);
    byte_4A52DCB = 1;
  }
  NguiTouchEffectManager_TypeInfo->static_fields->pressAction = pressAction;
  sub_1B8635C((CGThumbnailListItem_o *)NguiTouchEffectManager_TypeInfo->static_fields, (int32_t)pressAction, v2, v3);
}


void __fastcall NguiTouchEffectManager__RegisterUnPressFunc(System_Action_o *unPressAction, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_4A52DCC & 1) == 0 )
  {
    sub_1B863B8(&NguiTouchEffectManager_TypeInfo, method);
    byte_4A52DCC = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->unPressAction = unPressAction;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->unPressAction, (int32_t)unPressAction, v2, v3);
}


void __fastcall NguiTouchEffectManager__UnPress(const MethodInfo *method)
{
  __int64 v1; // x1
  struct System_Action_o *unPressAction; // x8

  if ( (byte_4A52DCF & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B863B8(&NguiTouchEffectManager_TypeInfo, v1);
    byte_4A52DCF = 1;
  }
  unPressAction = NguiTouchEffectManager_TypeInfo->static_fields->unPressAction;
  if ( !unPressAction )
    sub_1B86614(method, v1);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))unPressAction->fields.m_target)(
    unPressAction->fields.original_method_info,
    *(_QWORD *)&unPressAction->fields.extra_arg);
}