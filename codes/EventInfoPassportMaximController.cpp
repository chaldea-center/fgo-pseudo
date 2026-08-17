void EventInfoPassportMaximController___ctor(EventInfoPassportMaximController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoPassportMaximController__Awake(EventInfoPassportMaximController_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoPassportMaximController__CachePassportInputComponents(
        EventInfoPassportMaximController_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  EventInfoPassportMaximController_o *v4; // x19
  System_Object_array *ComponentsInChildren_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Object_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Object_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Object_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  v4 = this;
  if ( (byte_5971D4C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Collider2D___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Collider____91783536);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIButton___);
    this = (EventInfoPassportMaximController_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITouchPress___);
    byte_5971D4C = 1;
  }
  if ( !root )
    sub_2213CDC(this, root);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UITouchPress___);
  v4->fields.passportTouchPresses = (struct UITouchPress_array *)ComponentsInChildren_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.passportTouchPresses,
    (int32_t)ComponentsInChildren_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = UnityEngine_GameObject__GetComponentsInChildren_object_(
          root,
          1,
          (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIButton___);
  v4->fields.passportButtons = (struct UIButton_array *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.passportButtons,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = UnityEngine_GameObject__GetComponentsInChildren_object_(
          root,
          1,
          (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Collider____91783536);
  v4->fields.passportColliders = (struct UnityEngine_Collider_array *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.passportColliders,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = UnityEngine_GameObject__GetComponentsInChildren_object_(
          root,
          1,
          (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Collider2D___);
  v4->fields.passportColliders2D = (struct UnityEngine_Collider2D_array *)v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.passportColliders2D,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


float EventInfoPassportMaximController__CalcGameScreenAspectRatio(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int *static_fields; // x8
  float v4; // s0
  float v5; // s8
  float v6; // s9
  int32_t height; // w19
  float v8; // s0
  float v9; // s1

  if ( (byte_5971D4E & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_5971D4E = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v2->static_fields;
  v4 = (float)static_fields[22];
  v5 = v4 / (float)static_fields[20];
  v6 = v4 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0);
  v8 = (float)height / (float)UnityEngine_Screen__get_width(0);
  if ( v8 <= v5 )
    v9 = v8;
  else
    v9 = v5;
  if ( v8 >= v6 )
    return v9;
  else
    return v6;
}


void EventInfoPassportMaximController__ClearPassportInputComponents(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  this->fields.passportTouchPresses = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.passportTouchPresses, 0, v2, v3, v4, v5, v6, v7);
  this->fields.passportButtons = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.passportButtons, 0, v9, v10, v11, v12, v13, v14);
  this->fields.passportColliders = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.passportColliders, 0, v15, v16, v17, v18, v19, v20);
  this->fields.passportColliders2D = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.passportColliders2D, 0, v21, v22, v23, v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassportMaximController__Close(EventInfoPassportMaximController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *maximMask; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *maximPassport; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v12; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v16; // s3
  float v17; // s4
  float v18; // s3
  TweenScale_o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_5971D47 & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoPassportMaximController_Close__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10279/*"OnCloseMaximPassportFinished"*/);
    byte_5971D47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventInfoPassportMaximController_Close__;
    if ( (*((_BYTE *)Method_EventInfoPassportMaximController_Close__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoPassportMaximController_Close__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    maximMask = this->fields.maximMask;
    this->fields.isMaximBusy = 1;
    this->fields.state = 3;
    if ( !maximMask )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(maximMask, 1, 0);
    EventInfoPassportMaximController__SetPassportTouchEnabled(this, 0, v7);
    maximPassport = (UnityEngine_Object_o *)this->fields.maximPassport;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Equality(maximPassport, 0, 0) )
      goto LABEL_14;
    maximMask = (UnityEngine_GameObject_o *)this->fields.maximPassport;
    if ( !maximMask )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maximMask, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
    {
LABEL_14:
      EventInfoPassportMaximController__CloseImmediate(this, v5);
      return;
    }
    EventInfoPassportMaximController__EndBackMask(this, v5);
    maximMask = (UnityEngine_GameObject_o *)this->fields.maximPassport;
    if ( !maximMask )
      goto LABEL_23;
    maximMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maximMask, 0);
    if ( !this->fields.selectPassport )
      goto LABEL_23;
    v12 = maximMask;
    maximMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.selectPassport, 0);
    if ( !maximMask )
      goto LABEL_23;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)maximMask, 0);
    x = position.fields.x;
    y = position.fields.y;
    z = position.fields.z;
    maximMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !maximMask )
      goto LABEL_23;
    maximMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(maximMask, 0);
    if ( !maximMask )
      goto LABEL_23;
    v34.fields.x = x;
    v34.fields.y = y;
    v34.fields.z = z;
    v35 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)maximMask, v34, 0);
    v16 = v35.fields.y;
    v17 = v35.fields.z;
    v35.fields.y = v35.fields.x;
    v35.fields.z = v16;
    v18 = v17;
    TweenPosition__Begin(v12, 0.2, *(UnityEngine_Vector3_o *)&v35.fields.y, 0);
    v19 = TweenScale__Begin(v12, 0.2, this->fields.maximStartScale, 0);
    maximMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v19 )
LABEL_23:
      sub_2213CDC(maximMask, v5);
    v19->fields.eventReceiver = maximMask;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v19->fields.eventReceiver,
      (int32_t)maximMask,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = StringLiteral_10279/*"OnCloseMaximPassportFinished"*/;
    v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10279/*"OnCloseMaximPassportFinished"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->fields.callWhenFinished, v26, v27, v28, v29, v30, v31, v32);
  }
}


void EventInfoPassportMaximController__CloseImmediate(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maximBackSprite; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1

  EventInfoPassportMaximController__StopDelayedActionCoroutine(this, method);
  maximBackSprite = (UnityEngine_Component_o *)this->fields.maximBackSprite;
  if ( !maximBackSprite
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))maximBackSprite->klass[1]._1.element_class)(
          maximBackSprite,
          maximBackSprite->klass[1]._1.castClass,
          0.0),
        (maximBackSprite = (UnityEngine_Component_o *)this->fields.maximBackSprite) == 0)
    || (maximBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maximBackSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maximBackSprite, 0, 0),
        (maximBackSprite = (UnityEngine_Component_o *)this->fields.maximMask) == 0) )
  {
    sub_2213CDC(maximBackSprite, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maximBackSprite, 0, 0);
  GameObjectHelper__SetActiveSafely(this->fields.selectPassport, 1, 0);
  this->fields.selectPassport = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectPassport, 0, v5, v6, v7, v8, v9, v10);
  BasicHelper__Destroy((UnityEngine_Component_o *)this->fields.maximPassport, 0);
  this->fields.maximPassport = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.maximPassport, 0, v11, v12, v13, v14, v15, v16);
  EventInfoPassportMaximController__ClearPassportInputComponents(this, v17);
  this->fields.state = 0;
  this->fields.isMaximBusy = 0;
}


System_Collections_IEnumerator_o *EventInfoPassportMaximController__DelayAndExecute(
        EventInfoPassportMaximController_o *this,
        int32_t action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5971D4B & 1) == 0 )
  {
    sub_2213A60(&EventInfoPassportMaximController__DelayAndExecute_d__31_TypeInfo);
    byte_5971D4B = 1;
  }
  v5 = sub_2213CCC(EventInfoPassportMaximController__DelayAndExecute_d__31_TypeInfo);
  EventInfoPassportMaximController__DelayAndExecute_d__31___ctor(
    (EventInfoPassportMaximController__DelayAndExecute_d__31_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  result = (System_Collections_IEnumerator_o *)v5;
  *(_DWORD *)(v5 + 40) = action;
  return result;
}


void EventInfoPassportMaximController__EndBackMask(EventInfoPassportMaximController_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maximBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  maximBackSprite = (UnityEngine_Component_o *)this->fields.maximBackSprite;
  if ( !maximBackSprite )
    sub_2213CDC(0, method);
  gameObject = UnityEngine_Component__get_gameObject(maximBackSprite, 0);
  TweenAlpha__Begin(gameObject, 0.2, 0.0, 0);
}


void EventInfoPassportMaximController__ForceCloseForDialogClosing(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *maximPassport; // x20
  const MethodInfo *v5; // x1

  if ( (byte_5971D48 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D48 = 1;
  }
  if ( this->fields.state )
    goto LABEL_7;
  maximPassport = (UnityEngine_Object_o *)this->fields.maximPassport;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(maximPassport, 0, 0) )
  {
LABEL_7:
    this->fields.state = 3;
    this->fields.isMaximBusy = 1;
    EventInfoPassportMaximController__SetPassportTouchEnabled(this, 0, v2);
    EventInfoPassportMaximController__CloseImmediate(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o EventInfoPassportMaximController__GetMaximScale(
        EventInfoPassportMaximController_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v13; // x1
  float v14; // s9
  float v15; // s10
  EventInfoPassportMaximController_o *v16; // x0
  int m_CachedPtr; // w20
  float v18; // s8
  float v19; // s8
  float v20; // s3
  float v21; // s0
  float v22; // s1
  float v23; // s2
  UnityEngine_Bounds_o v24; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971D4D & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D4D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)target, 0, 0) )
  {
    if ( !byte_5969AE5 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    goto LABEL_24;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0), !target) )
  {
LABEL_25:
    sub_2213CDC(gameObject, v10);
  }
  v11 = (UnityEngine_Transform_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(target, 0);
  NGUIMath__CalculateRelativeWidgetBounds_56289764(&v24, v11, transform, 0);
  v14 = v24.fields.m_Extents.fields.x + v24.fields.m_Extents.fields.x;
  if ( (float)(v24.fields.m_Extents.fields.x + v24.fields.m_Extents.fields.x) <= 0.0
    || (v15 = v24.fields.m_Extents.fields.y + v24.fields.m_Extents.fields.y,
        (float)(v24.fields.m_Extents.fields.y + v24.fields.m_Extents.fields.y) <= 0.0) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0);
    if ( gameObject )
    {
      *(UnityEngine_Vector3_o *)&x = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
LABEL_24:
      v21 = x + x;
      v22 = y + y;
      v23 = z + z;
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v16 = (EventInfoPassportMaximController_o *)ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v13);
    v16 = (EventInfoPassportMaximController_o *)ManagerConfig_TypeInfo;
  }
  m_CachedPtr = v16[1].fields.selectPassport[3].fields.m_CachedPtr;
  v18 = EventInfoPassportMaximController__CalcGameScreenAspectRatio(v16, v13);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0);
  if ( !gameObject )
    goto LABEL_25;
  if ( (float)((float)((float)m_CachedPtr / v18) / v14) >= (float)((float)m_CachedPtr / v15) )
    v19 = (float)m_CachedPtr / v15;
  else
    v19 = (float)((float)m_CachedPtr / v18) / v14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  v20 = 1.0;
  if ( v19 >= 1.0 )
    v20 = v19;
  v21 = v20 * localScale.fields.x;
  v22 = v20 * localScale.fields.y;
  v23 = v20 * localScale.fields.z;
LABEL_26:
  result.fields.z = v23;
  result.fields.y = v22;
  result.fields.x = v21;
  return result;
}


void EventInfoPassportMaximController__OnClickMaximMask(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.isMaximBusy )
    EventInfoPassportMaximController__Close(this, method);
}


void EventInfoPassportMaximController__OnCloseMaximPassportFinished(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoPassportMaximController__ScheduleDelayedAction(this, 1, v2);
}


void EventInfoPassportMaximController__OnOpenMaximPassportFinished(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoPassportMaximController__ScheduleDelayedAction(this, 0, v2);
}


void EventInfoPassportMaximController__Open(
        EventInfoPassportMaximController_o *this,
        EventInfoPassport_o *passport,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *maximPassport; // x20
  struct EventInfoPassport_o **p_maximPassport; // x22
  UnityEngine_GameObject_o *maximMask; // x0
  const MethodInfo *v9; // x1
  struct UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o **p_selectPassport; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  Il2CppObject *selectPassport; // x20
  Il2CppObject *v20; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x24
  __int64 v30; // x1
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x1
  UnityEngine_GameObject_o *v33; // x23
  UnityEngine_Transform_o *v34; // x24
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Transform_o *v36; // x24
  UnityEngine_Transform_o *v37; // x24
  int32_t layer; // w0
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v45; // s0
  float v46; // s1
  float v47; // s3
  float v48; // s2
  float v49; // s4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o MaximScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v54; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5971D46 & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoPassportMaximController_Open__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoPassport___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D46 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, passport);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)passport, 0, 0) && !this->fields.state )
  {
    p_maximPassport = &this->fields.maximPassport;
    maximPassport = (UnityEngine_Object_o *)this->fields.maximPassport;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    maximMask = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(maximPassport, 0, 0);
    if ( ((unsigned __int8)maximMask & 1) == 0 )
    {
      if ( passport )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)passport, 0);
        this->fields.selectPassport = gameObject;
        p_selectPassport = &this->fields.selectPassport;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectPassport,
          (int32_t)gameObject,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        selectPassport = (Il2CppObject *)this->fields.selectPassport;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        v20 = UnityEngine_Object__Instantiate_object_(
                selectPassport,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        maximMask = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0);
        if ( ((unsigned __int8)maximMask & 1) != 0 )
          return;
        if ( v20 )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v20,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPassport___);
          *p_maximPassport = (struct EventInfoPassport_o *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.maximPassport,
            (int32_t)Component_object,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          v29 = (UnityEngine_Object_o *)*p_maximPassport;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
          if ( UnityEngine_Object__op_Equality(v29, 0, 0) )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
            UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v20, 0);
            return;
          }
          v31 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_EventInfoPassportMaximController_Open__);
          OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
          maximMask = *p_selectPassport;
          if ( *p_selectPassport )
          {
            UnityEngine_GameObject__SetActive(maximMask, 0, 0);
            EventInfoPassportMaximController__StopDelayedActionCoroutine(this, v32);
            maximMask = this->fields.maximMask;
            this->fields.state = 1;
            this->fields.isMaximBusy = 1;
            if ( maximMask )
            {
              UnityEngine_GameObject__SetActive(maximMask, 1, 0);
              v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              maximMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)v20,
                                                        0);
              if ( v33 )
              {
                v34 = (UnityEngine_Transform_o *)maximMask;
                maximMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0);
                if ( v34 )
                {
                  UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)maximMask, 0);
                  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
                  maximMask = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)passport,
                                                            0);
                  if ( maximMask )
                  {
                    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)maximMask, 0);
                    if ( transform )
                    {
                      UnityEngine_Transform__set_position(transform, position, 0);
                      v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
                      maximMask = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)passport,
                                                                0);
                      if ( maximMask )
                      {
                        rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)maximMask, 0);
                        if ( v36 )
                        {
                          UnityEngine_Transform__set_rotation(v36, rotation, 0);
                          v37 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
                          maximMask = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)passport,
                                                                    0);
                          if ( maximMask )
                          {
                            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)maximMask, 0);
                            if ( v37 )
                            {
                              UnityEngine_Transform__set_localScale(v37, localScale, 0);
                              layer = UnityEngine_GameObject__get_layer(v33, 0);
                              UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v20, layer, 0);
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0);
                              maximMask = (UnityEngine_GameObject_o *)*p_maximPassport;
                              if ( *p_maximPassport )
                              {
                                EventInfoPassport__DisplayMaximSkillView((EventInfoPassport_o *)maximMask, v9);
                                maximMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)v20,
                                                                          0);
                                if ( maximMask )
                                {
                                  this->fields.maximStartScale = UnityEngine_Transform__get_localScale(
                                                                   (UnityEngine_Transform_o *)maximMask,
                                                                   0);
                                  EventInfoPassportMaximController__CachePassportInputComponents(
                                    this,
                                    (UnityEngine_GameObject_o *)v20,
                                    v39);
                                  EventInfoPassportMaximController__StartBackMask(this, v40);
                                  MaximScale = EventInfoPassportMaximController__GetMaximScale(
                                                 this,
                                                 (UnityEngine_GameObject_o *)v20,
                                                 v41);
                                  x = MaximScale.fields.x;
                                  y = MaximScale.fields.y;
                                  z = MaximScale.fields.z;
                                  v45 = sub_24B9B38(0);
                                  v47 = v46;
                                  v49 = v48;
                                  v53.fields.x = v45;
                                  v53.fields.y = v47;
                                  v53.fields.z = v49;
                                  TweenPosition__Begin((UnityEngine_GameObject_o *)v20, 0.2, v53, 0);
                                  v54.fields.x = x;
                                  v54.fields.y = y;
                                  v54.fields.z = z;
                                  TweenScale__Begin((UnityEngine_GameObject_o *)v20, 0.2, v54, 0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_2213CDC(maximMask, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassportMaximController__ScheduleDelayedAction(
        EventInfoPassportMaximController_o *this,
        int32_t action,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  EventInfoPassportMaximController__StopDelayedActionCoroutine(this, *(const MethodInfo **)&action);
  v6 = EventInfoPassportMaximController__DelayAndExecute(this, action, v5);
  started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  this->fields.delayedActionCoroutine = started;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.delayedActionCoroutine,
    (int32_t)started,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassportMaximController__SetPassportTouchEnabled(
        EventInfoPassportMaximController_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maximPassport; // x21
  __int64 v6; // x1
  struct EventInfoPassport_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  struct UITouchPress_array *passportTouchPresses; // x23
  UnityEngine_GameObject_o *v11; // x0
  const MethodInfo *v12; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x24
  UnityEngine_Object_o *v15; // x21
  struct UIButton_array *passportButtons; // x23
  il2cpp_array_size_t v17; // x8
  unsigned __int64 v18; // x24
  UnityEngine_Object_o *v19; // x21
  struct UnityEngine_Collider_array *passportColliders; // x23
  il2cpp_array_size_t v21; // x8
  unsigned __int64 v22; // x24
  UnityEngine_Object_o *v23; // x21
  struct UnityEngine_Collider2D_array *passportColliders2D; // x21
  il2cpp_array_size_t v25; // x8
  unsigned __int64 v26; // x23
  UnityEngine_Object_o *v27; // x20

  if ( (byte_5971D4A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D4A = 1;
  }
  maximPassport = (UnityEngine_Object_o *)this->fields.maximPassport;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(maximPassport, 0, 0) )
  {
    v7 = this->fields.maximPassport;
    if ( !v7 )
      goto LABEL_54;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v7 = (struct EventInfoPassport_o *)UnityEngine_Object__op_Equality(gameObject, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
      return;
    passportTouchPresses = this->fields.passportTouchPresses;
    if ( !passportTouchPresses )
    {
      v7 = this->fields.maximPassport;
      if ( !v7 )
        goto LABEL_54;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
      EventInfoPassportMaximController__CachePassportInputComponents(this, v11, v12);
      passportTouchPresses = this->fields.passportTouchPresses;
      if ( !passportTouchPresses )
        goto LABEL_54;
    }
    max_length = passportTouchPresses->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      while ( v14 < (unsigned int)max_length )
      {
        v15 = (UnityEngine_Object_o *)passportTouchPresses->m_Items[v14];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v7 = (struct EventInfoPassport_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_54;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, enable, 0);
        }
        LODWORD(max_length) = passportTouchPresses->max_length;
        if ( (__int64)++v14 >= (int)max_length )
          goto LABEL_22;
      }
LABEL_53:
      sub_2213CE4(v7);
    }
LABEL_22:
    passportButtons = this->fields.passportButtons;
    if ( !passportButtons )
      goto LABEL_54;
    v17 = passportButtons->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0;
      while ( v18 < (unsigned int)v17 )
      {
        v19 = (UnityEngine_Object_o *)passportButtons->m_Items[v18];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v7 = (struct EventInfoPassport_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_54;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v19, enable, 0);
        }
        LODWORD(v17) = passportButtons->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_32;
      }
      goto LABEL_53;
    }
LABEL_32:
    passportColliders = this->fields.passportColliders;
    if ( !passportColliders )
      goto LABEL_54;
    v21 = passportColliders->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = 0;
      while ( v22 < (unsigned int)v21 )
      {
        v23 = (UnityEngine_Object_o *)passportColliders->m_Items[v22];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v7 = (struct EventInfoPassport_o *)UnityEngine_Object__op_Inequality(v23, 0, 0);
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_54;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v23, enable, 0);
        }
        LODWORD(v21) = passportColliders->max_length;
        if ( (__int64)++v22 >= (int)v21 )
          goto LABEL_42;
      }
      goto LABEL_53;
    }
LABEL_42:
    passportColliders2D = this->fields.passportColliders2D;
    if ( !passportColliders2D )
LABEL_54:
      sub_2213CDC(v7, v6);
    v25 = passportColliders2D->max_length;
    if ( (int)v25 >= 1 )
    {
      v26 = 0;
      while ( v26 < (unsigned int)v25 )
      {
        v27 = (UnityEngine_Object_o *)passportColliders2D->m_Items[v26];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v7 = (struct EventInfoPassport_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_54;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v27, enable, 0);
        }
        LODWORD(v25) = passportColliders2D->max_length;
        if ( (__int64)++v26 >= (int)v25 )
          return;
      }
      goto LABEL_53;
    }
  }
}


void EventInfoPassportMaximController__SetState(
        EventInfoPassportMaximController_o *this,
        int32_t nextState,
        const MethodInfo *method)
{
  this->fields.state = nextState;
  this->fields.isMaximBusy = (nextState & 0xFFFFFFFD) == 1;
}


void EventInfoPassportMaximController__StartBackMask(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maximBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5971D49 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10345/*"OnOpenMaximPassportFinished"*/);
    byte_5971D49 = 1;
  }
  maximBackSprite = (UnityEngine_Component_o *)this->fields.maximBackSprite;
  if ( !maximBackSprite )
    goto LABEL_9;
  maximBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maximBackSprite, 0);
  if ( !maximBackSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maximBackSprite, 1, 0),
        (maximBackSprite = (UnityEngine_Component_o *)this->fields.maximBackSprite) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))maximBackSprite->klass[1]._1.element_class)(
          maximBackSprite,
          maximBackSprite->klass[1]._1.castClass,
          0.0),
        (maximBackSprite = (UnityEngine_Component_o *)this->fields.maximBackSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject(maximBackSprite, 0),
        v5 = TweenAlpha__Begin(gameObject, 0.2, 1.0, 0),
        maximBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0),
        !v5) )
  {
LABEL_9:
    sub_2213CDC(maximBackSprite, method);
  }
  v5->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maximBackSprite;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.eventReceiver,
    (int32_t)maximBackSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = StringLiteral_10345/*"OnOpenMaximPassportFinished"*/;
  v5->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10345/*"OnOpenMaximPassportFinished"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.callWhenFinished, v12, v13, v14, v15, v16, v17, v18);
}


void EventInfoPassportMaximController__StopDelayedActionCoroutine(
        EventInfoPassportMaximController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *delayedActionCoroutine; // x1
  struct UnityEngine_Coroutine_o **p_delayedActionCoroutine; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_delayedActionCoroutine = &this->fields.delayedActionCoroutine;
  delayedActionCoroutine = this->fields.delayedActionCoroutine;
  if ( delayedActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, delayedActionCoroutine, 0);
    this->fields.delayedActionCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_delayedActionCoroutine, 0, v5, v6, v7, v8, v9, v10);
  }
}


bool EventInfoPassportMaximController__get_IsBusy(EventInfoPassportMaximController_o *this, const MethodInfo *method)
{
  return this->fields.isMaximBusy;
}


void EventInfoPassportMaximController__DelayAndExecute_d__31___ctor(
        EventInfoPassportMaximController__DelayAndExecute_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoPassportMaximController__DelayAndExecute_d__31__MoveNext(
        EventInfoPassportMaximController__DelayAndExecute_d__31_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  unsigned int i_5__2; // w8
  struct EventInfoPassportMaximController_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int32_t action; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    this->fields._i_5__2 = i_5__2 + 1;
    if ( i_5__2 > 0x7FFFFFFE )
      goto LABEL_5;
    if ( !_4__this )
      sub_2213CDC(this, method);
    _4__this->fields.delayedActionCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.delayedActionCoroutine, 0, v2, v3, v4, v5, v6, v7);
    action = this->fields.action;
    if ( action == 1 )
    {
      if ( _4__this->fields.state == 3 )
        EventInfoPassportMaximController__CloseImmediate(_4__this, 0);
    }
    else if ( !action && _4__this->fields.state == 1 )
    {
      EventInfoPassportMaximController__SetState(_4__this, 2, 0);
    }
  }
  else if ( !_1__state )
  {
    this->fields._i_5__2 = 0;
    this->fields.__1__state = -1;
LABEL_5:
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *EventInfoPassportMaximController__DelayAndExecute_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoPassportMaximController__DelayAndExecute_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoPassportMaximController__DelayAndExecute_d__31__System_Collections_IEnumerator_Reset(
        EventInfoPassportMaximController__DelayAndExecute_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventInfoPassportMaximController__DelayAndExecute_d__31_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *EventInfoPassportMaximController__DelayAndExecute_d__31__System_Collections_IEnumerator_get_Current(
        EventInfoPassportMaximController__DelayAndExecute_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoPassportMaximController__DelayAndExecute_d__31__System_IDisposable_Dispose(
        EventInfoPassportMaximController__DelayAndExecute_d__31_o *this,
        const MethodInfo *method)
{
  ;
}