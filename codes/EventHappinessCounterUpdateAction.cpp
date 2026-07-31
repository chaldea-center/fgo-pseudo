void EventHappinessCounterUpdateAction___ctor(EventHappinessCounterUpdateAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventHappinessCounterUpdateAction__Awake(EventHappinessCounterUpdateAction_o *this, const MethodInfo *method)
{
  ;
}


void EventHappinessCounterUpdateAction__CheckAssertions(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *EventHappinessCounterUpdateAction__CountUpAnim(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934DC7 & 1) == 0 )
  {
    sub_21FFC50(&EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
    byte_5934DC7 = 1;
  }
  v3 = sub_21FFEBC(EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


int32_t EventHappinessCounterUpdateAction__GetOldHappinessPoint(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  int max_length; // w8
  int v9; // w10
  UserEventPointEntity_o *v10; // x11

  if ( (byte_5934DC8 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934DC8 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_5934EAA )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934EAA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v4->static_fields->_OldUserEventPoint_k__BackingField;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OldUserEventPoint_k__BackingField, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !OldUserEventPoint_k__BackingField )
LABEL_19:
    sub_21FFECC(IsNullOrEmpty, v7);
  max_length = OldUserEventPoint_k__BackingField->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_21FFED4(IsNullOrEmpty);
    v10 = OldUserEventPoint_k__BackingField->m_Items[v9];
    if ( !v10 )
      goto LABEL_19;
    if ( v10->fields.groupId == this->fields.happinessPointGroupId )
      return v10->fields.value;
    if ( (max_length & ~(max_length >> 31)) == ++v9 )
      return 0;
  }
}


void EventHappinessCounterUpdateAction__Init(
        EventHappinessCounterUpdateAction_o *this,
        int32_t currentEventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int32_t OldHappinessPoint; // w0
  UILabel_o *happinessPointLabel; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5934DC4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventHappinessCounterUpdateAction__Init_b__16_0__);
    sub_21FFC50(&StringLiteral_26402/*"{0:D4}"*/);
    byte_5934DC4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.state = 0;
  this->fields.eventId = currentEventId;
  OldHappinessPoint = EventHappinessCounterUpdateAction__GetOldHappinessPoint(this, v7);
  happinessPointLabel = this->fields.happinessPointLabel;
  v21 = OldHappinessPoint;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v21);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_26402/*"{0:D4}"*/, v10, 0);
  if ( !happinessPointLabel )
    goto LABEL_14;
  UILabel__set_text(happinessPointLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
  if ( !this->fields.animation )
    goto LABEL_14;
  v11 = (System_String_o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                             this->fields.animation,
                                             (System_String_o *)gameObject,
                                             0);
  if ( !gameObject
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.animation) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   v11,
                                                   0)) == 0
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)gameObject, 0.0, 0),
        effectActionComponent = this->fields.effectActionComponent,
        v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Init_b__16_0__, 0),
        !effectActionComponent) )
  {
LABEL_14:
    sub_21FFECC(gameObject, v6);
  }
  effectActionComponent->fields.endAction = v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&effectActionComponent->fields.endAction,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  EventHappinessCounterUpdateAction__SetupScreenTouchInfo(this, v20);
}


void EventHappinessCounterUpdateAction__Play(
        EventHappinessCounterUpdateAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  CommonUI_o *v13; // x20
  float *p_fadeInTime; // x8
  System_String_o *v15; // x20

  if ( (byte_5934DC6 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934DC6 = 1;
  }
  this->fields.state = 1;
  this->fields.endAct = endAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAct,
    (int32_t)endAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)gameObject;
  p_fadeInTime = &this->fields.fadeInTime;
  if ( this->fields.fadeInTime <= 0.0 )
  {
    gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11, v12);
      gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager_TypeInfo;
    }
    p_fadeInTime = (float *)gameObject[7].fields.m_CachedPtr;
  }
  if ( !v13 )
    goto LABEL_16;
  CommonUI__maskFadein(v13, *p_fadeInTime, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   0)) == 0
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0),
        !this->fields.animation)
    || (v15 = (System_String_o *)gameObject,
        (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                    this->fields.animation,
                                                    (System_String_o *)gameObject,
                                                    0)) == 0)
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 1.0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.animation) == 0) )
  {
LABEL_16:
    sub_21FFECC(gameObject, v11);
  }
  UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)gameObject, v15, 0);
}


void EventHappinessCounterUpdateAction__SetupScreenTouchInfo(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_screenTouchObj; // x19
  UnityEngine_Object_o *screenTouchObj; // x21
  __int64 v6; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v9; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5934DC5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934DC5 = 1;
  }
  p_screenTouchObj = (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchObj;
  screenTouchObj = (UnityEngine_Object_o *)this->fields.screenTouchObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(screenTouchObj, 0, 0) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v9 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0), !v9) )
    {
LABEL_11:
      sub_21FFECC(Instance, v6);
    }
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v9, Instance, 0, 0);
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0);
    p_screenTouchObj->klass = (MissionNaviTransitionBoardItem_c *)ScreeenTouchInfo;
    sub_21FFBF4(p_screenTouchObj, (int32_t)ScreeenTouchInfo, v11, v12, v13, v14, v15, v16);
  }
  Instance = (UnityEngine_Transform_o *)p_screenTouchObj->klass;
  if ( !p_screenTouchObj->klass )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


void EventHappinessCounterUpdateAction__StartCountUp(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = EventHappinessCounterUpdateAction__CountUpAnim(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


void EventHappinessCounterUpdateAction__Update(EventHappinessCounterUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *screenTouchObj; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  float fadeOutTime; // s8
  CommonUI_o *v12; // x20
  AvalonSceneManager_c *v13; // x0
  System_Action_o *v14; // x21

  if ( (byte_5934DC3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_EventHappinessCounterUpdateAction__Update_b__15_0__);
    sub_21FFC50(&Method_EventHappinessCounterUpdateAction_Update__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934DC3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
    CTouch__process(0);
    if ( CTouch__isTouchPush(0) )
    {
      screenTouchObj = this->fields.screenTouchObj;
      this->fields.state = 0;
      if ( !screenTouchObj )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(screenTouchObj, 0, 0);
      v6 = Method_EventHappinessCounterUpdateAction_Update__;
      if ( (*((_BYTE *)Method_EventHappinessCounterUpdateAction_Update__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_21FFC68(Method_EventHappinessCounterUpdateAction_Update__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      fadeOutTime = this->fields.fadeOutTime;
      v12 = (CommonUI_o *)Instance;
      if ( fadeOutTime <= 0.0 )
      {
        v13 = AvalonSceneManager_TypeInfo;
        if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v9, v10);
          v13 = AvalonSceneManager_TypeInfo;
        }
        fadeOutTime = v13->static_fields->DEFAULT_FADE_TIME;
      }
      v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Update_b__15_0__, 0);
      if ( !v12 )
LABEL_17:
        sub_21FFECC(screenTouchObj, v4);
      CommonUI__maskFadeout(v12, 1, fadeOutTime, v14, 0);
    }
  }
}


void EventHappinessCounterUpdateAction___Init_b__16_0(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *screenTouchObj; // x0

  screenTouchObj = this->fields.screenTouchObj;
  if ( !screenTouchObj )
    sub_21FFECC(0, method);
  UnityEngine_GameObject__SetActive(screenTouchObj, 1, 0);
  this->fields.state = 2;
}


void EventHappinessCounterUpdateAction___Update_b__15_0(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void EventHappinessCounterUpdateAction__CountUpAnim_d__20___ctor(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventHappinessCounterUpdateAction__CountUpAnim_d__20__MoveNext(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *v2; // x19
  int32_t _1__state; // w8
  EventHappinessCounterUpdateAction_o *_4__this; // x20
  const MethodInfo *v5; // x1
  int32_t OldHappinessPoint; // w0
  float time_5__4; // s0
  float countUpAnimTime; // s1
  int nowPoint_5__2; // w8
  UILabel_o *happinessPointLabel; // x19
  Il2CppObject *v11; // x0
  bool result; // w0
  float v13; // s0
  float v14; // s8
  double v15; // d0
  double v16; // d0
  float v17; // s2
  float v18; // s1
  __int64 v19; // x8
  float v20; // s0
  int v21; // w9
  UILabel_o *v22; // x20
  Il2CppObject *v23; // x0
  float v24; // s8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_5934DC9 & 1) == 0 )
  {
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)sub_21FFC50(&StringLiteral_26402/*"{0:D4}"*/);
    byte_5934DC9 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_31;
    time_5__4 = v2->fields._time_5__4;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_31:
      sub_21FFECC(this, method);
    v2->fields._nowPoint_5__2 = UserEventPointMaster__GetEventPoint(
                                  _4__this->fields.eventId,
                                  _4__this->fields.happinessPointGroupId,
                                  0);
    OldHappinessPoint = EventHappinessCounterUpdateAction__GetOldHappinessPoint(_4__this, v5);
    time_5__4 = 0.0;
    v2->fields._oldPoint_5__3 = OldHappinessPoint;
    v2->fields._time_5__4 = 0.0;
  }
  countUpAnimTime = _4__this->fields.countUpAnimTime;
  nowPoint_5__2 = v2->fields._nowPoint_5__2;
  if ( time_5__4 > countUpAnimTime )
  {
    happinessPointLabel = _4__this->fields.happinessPointLabel;
    LODWORD(iptr) = nowPoint_5__2;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iptr);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                       (System_String_o *)StringLiteral_26402/*"{0:D4}"*/,
                                                                       v11,
                                                                       0);
    if ( happinessPointLabel )
    {
      UILabel__set_text(happinessPointLabel, (System_String_o *)this, 0);
      return 0;
    }
    goto LABEL_31;
  }
  v13 = time_5__4 / countUpAnimTime;
  if ( v13 > 1.0 )
    v13 = 1.0;
  if ( v13 < 0.0 )
    v13 = 0.0;
  v14 = (float)(v13 * (float)((float)nowPoint_5__2 - (float)v2->fields._oldPoint_5__3))
      + (float)v2->fields._oldPoint_5__3;
  v15 = modf(v14, &iptr);
  if ( v14 >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v20 = floorf(v14 + 0.5);
      goto LABEL_27;
    }
    v16 = iptr;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v20 = ceilf(v14 + -0.5);
      goto LABEL_27;
    }
    v16 = iptr;
    v17 = -1.0;
  }
  v18 = v16;
  v19 = (__int64)v16;
  v20 = v18 + v17;
  if ( (v19 & 1) == 0 )
    v20 = v18;
LABEL_27:
  v21 = (int)v20;
  v22 = _4__this->fields.happinessPointLabel;
  if ( v20 == INFINITY )
    v21 = 0x80000000;
  LODWORD(iptr) = v21;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iptr);
  this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                     (System_String_o *)StringLiteral_26402/*"{0:D4}"*/,
                                                                     v23,
                                                                     0);
  if ( !v22 )
    goto LABEL_31;
  UILabel__set_text(v22, (System_String_o *)this, 0);
  v24 = v2->fields._time_5__4;
  v2->fields._time_5__4 = v24 + UnityEngine_Time__get_deltaTime(0);
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v26, v27, v28, v29, v30, v31);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_Collections_IEnumerator_Reset(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventHappinessCounterUpdateAction__CountUpAnim_d__20_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_Collections_IEnumerator_get_Current(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_IDisposable_Dispose(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  ;
}