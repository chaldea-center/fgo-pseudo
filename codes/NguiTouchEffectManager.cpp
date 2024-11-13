// local variable allocation has failed, the output may be wrong!
void __fastcall NguiTouchEffectManager__Drag(UnityEngine_Vector2_o v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  long double v4; // q8
  long double v5; // q9
  struct System_Action_Vector2__o *dragAction; // x8

  v4 = *(long double *)&v.fields.y;
  v5 = *(long double *)&v.fields.x;
  if ( (byte_4B1A91D & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1BCA7E0(&NguiTouchEffectManager_TypeInfo, v2, v3);
    byte_4B1A91D = 1;
  }
  dragAction = NguiTouchEffectManager_TypeInfo->static_fields->dragAction;
  if ( !dragAction )
    sub_1BCAA3C(method, v2);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double, long double))dragAction->fields.m_target)(
    dragAction->fields.original_method_info,
    *(_QWORD *)&dragAction->fields.extra_arg,
    v5,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NguiTouchEffectManager__Press(UnityEngine_Vector2_o p, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  long double v4; // q8
  long double v5; // q9
  struct System_Action_Vector2__o *pressAction; // x8

  v4 = *(long double *)&p.fields.y;
  v5 = *(long double *)&p.fields.x;
  if ( (byte_4B1A91B & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1BCA7E0(&NguiTouchEffectManager_TypeInfo, v2, v3);
    byte_4B1A91B = 1;
  }
  pressAction = NguiTouchEffectManager_TypeInfo->static_fields->pressAction;
  if ( !pressAction )
    sub_1BCAA3C(method, v2);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double, long double))pressAction->fields.m_target)(
    pressAction->fields.original_method_info,
    *(_QWORD *)&pressAction->fields.extra_arg,
    v5,
    v4);
}


void __fastcall NguiTouchEffectManager__RegisterDragFunc(
        System_Action_Vector2__o *dragAction,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_4B1A91A & 1) == 0 )
  {
    sub_1BCA7E0(&NguiTouchEffectManager_TypeInfo, method, v2);
    byte_4B1A91A = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->dragAction = dragAction;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->dragAction, (int64_t)dragAction, v2, v3, v4, v5, v6, v7);
}


void __fastcall NguiTouchEffectManager__RegisterPressFunc(
        System_Action_Vector2__o *pressAction,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4B1A918 & 1) == 0 )
  {
    sub_1BCA7E0(&NguiTouchEffectManager_TypeInfo, method, v2);
    byte_4B1A918 = 1;
  }
  NguiTouchEffectManager_TypeInfo->static_fields->pressAction = pressAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)NguiTouchEffectManager_TypeInfo->static_fields,
    (int64_t)pressAction,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NguiTouchEffectManager__RegisterUnPressFunc(System_Action_o *unPressAction, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct NguiTouchEffectManager_StaticFields *static_fields; // x0

  if ( (byte_4B1A919 & 1) == 0 )
  {
    sub_1BCA7E0(&NguiTouchEffectManager_TypeInfo, method, v2);
    byte_4B1A919 = 1;
  }
  static_fields = NguiTouchEffectManager_TypeInfo->static_fields;
  static_fields->unPressAction = unPressAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->unPressAction,
    (int64_t)unPressAction,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NguiTouchEffectManager__UnPress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct System_Action_o *unPressAction; // x8

  if ( (byte_4B1A91C & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1BCA7E0(&NguiTouchEffectManager_TypeInfo, v1, v2);
    byte_4B1A91C = 1;
  }
  unPressAction = NguiTouchEffectManager_TypeInfo->static_fields->unPressAction;
  if ( !unPressAction )
    sub_1BCAA3C(method, v1);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))unPressAction->fields.m_target)(
    unPressAction->fields.original_method_info,
    *(_QWORD *)&unPressAction->fields.extra_arg);
}