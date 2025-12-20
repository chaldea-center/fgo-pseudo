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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D29021 & 1) == 0 )
  {
    sub_1C94098(&EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
    byte_4D29021 = 1;
  }
  v3 = sub_1C942E4(EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


int32_t EventHappinessCounterUpdateAction__GetOldHappinessPoint(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  int max_length; // w8
  int v8; // w9
  UserEventPointEntity_o *v9; // x10

  if ( (byte_4D29022 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29022 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29104 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29104 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v3->static_fields->_OldUserEventPoint_k__BackingField;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OldUserEventPoint_k__BackingField, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !OldUserEventPoint_k__BackingField )
LABEL_20:
    sub_1C942F0(IsNullOrEmpty, v6);
  max_length = OldUserEventPoint_k__BackingField->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( max_length == v8 )
      sub_1C942F8(IsNullOrEmpty);
    v9 = OldUserEventPoint_k__BackingField->m_Items[v8];
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields.groupId == this->fields.happinessPointGroupId )
      return v9->fields.value;
    if ( max_length == ++v8 )
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2901E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventHappinessCounterUpdateAction__Init_b__16_0__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_25324/*"{0:D4}"*/);
    byte_4D2901E = 1;
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
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25324/*"{0:D4}"*/, v10, 0);
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
        v13 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Init_b__16_0__, 0),
        !effectActionComponent) )
  {
LABEL_14:
    sub_1C942F0(gameObject, v6);
  }
  effectActionComponent->fields.endAction = v13;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&effectActionComponent->fields.endAction,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  float *p_fadeInTime; // x8
  CommonUI_o *v13; // x20
  System_String_o *v14; // x20

  if ( (byte_4D29020 & 1) == 0 )
  {
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29020 = 1;
  }
  this->fields.state = 1;
  this->fields.endAct = endAction;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endAct,
    (int32_t)endAction,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  p_fadeInTime = &this->fields.fadeInTime;
  v13 = (CommonUI_o *)gameObject;
  if ( this->fields.fadeInTime <= 0.0 )
  {
    gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
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
    || (v14 = (System_String_o *)gameObject,
        (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                    this->fields.animation,
                                                    (System_String_o *)gameObject,
                                                    0)) == 0)
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 1.0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.animation) == 0) )
  {
LABEL_16:
    sub_1C942F0(gameObject, v11);
  }
  UnityEngine_Animation__Play_71854448((UnityEngine_Animation_o *)gameObject, v14, 0);
}


void EventHappinessCounterUpdateAction__SetupScreenTouchInfo(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_screenTouchObj; // x19
  UnityEngine_Object_o *screenTouchObj; // x21
  __int64 v5; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v8; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2901F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2901F = 1;
  }
  p_screenTouchObj = (GrandQuestFolderBoardItem_o *)&this->fields.screenTouchObj;
  screenTouchObj = (UnityEngine_Object_o *)this->fields.screenTouchObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchObj, 0, 0) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v8 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0), !v8) )
    {
LABEL_11:
      sub_1C942F0(Instance, v5);
    }
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v8, Instance, 0, 0);
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0);
    p_screenTouchObj->klass = (GrandQuestFolderBoardItem_c *)ScreeenTouchInfo;
    sub_1C9403C(p_screenTouchObj, (int32_t)ScreeenTouchInfo, v10, v11, v12, v13, v14, v15);
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
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


void EventHappinessCounterUpdateAction__Update(EventHappinessCounterUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *screenTouchObj; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  float fadeOutTime; // s8
  CommonUI_o *v9; // x20
  AvalonSceneManager_c *v10; // x0
  System_Action_o *v11; // x21

  if ( (byte_4D2901D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_EventHappinessCounterUpdateAction__Update_b__15_0__);
    sub_1C94098(&Method_EventHappinessCounterUpdateAction_Update__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2901D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0);
    if ( CTouch__isTouchPush(0) )
    {
      screenTouchObj = this->fields.screenTouchObj;
      this->fields.state = 0;
      if ( !screenTouchObj )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(screenTouchObj, 0, 0);
      v5 = Method_EventHappinessCounterUpdateAction_Update__;
      if ( (*((_BYTE *)Method_EventHappinessCounterUpdateAction_Update__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C940B0(Method_EventHappinessCounterUpdateAction_Update__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      fadeOutTime = this->fields.fadeOutTime;
      v9 = (CommonUI_o *)Instance;
      if ( fadeOutTime <= 0.0 )
      {
        v10 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v10 = AvalonSceneManager_TypeInfo;
        }
        fadeOutTime = v10->static_fields->DEFAULT_FADE_TIME;
      }
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Update_b__15_0__, 0);
      if ( !v9 )
LABEL_17:
        sub_1C942F0(screenTouchObj, v3);
      CommonUI__maskFadeout(v9, 1, fadeOutTime, v11, 0);
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
    sub_1C942F0(0, method);
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
  float time_5__4; // s0
  float countUpAnimTime; // s1
  UILabel_o *happinessPointLabel; // x20
  Il2CppObject *v9; // x0
  bool result; // w0
  float v11; // s8
  double v12; // d0
  double v13; // d0
  float v14; // s1
  __int64 v15; // x8
  float v16; // s0
  float v17; // s1
  UILabel_o *v18; // x20
  int v19; // w8
  Il2CppObject *v20; // x0
  float v21; // s8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4D29023 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)sub_1C94098(&StringLiteral_25324/*"{0:D4}"*/);
    byte_4D29023 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_27;
    time_5__4 = v2->fields._time_5__4;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_27:
      sub_1C942F0(this, method);
    v2->fields._nowPoint_5__2 = UserEventPointMaster__GetEventPoint(
                                  _4__this->fields.eventId,
                                  _4__this->fields.happinessPointGroupId,
                                  0);
    v2->fields._oldPoint_5__3 = EventHappinessCounterUpdateAction__GetOldHappinessPoint(_4__this, v5);
    v2->fields._time_5__4 = 0.0;
    time_5__4 = 0.0;
  }
  countUpAnimTime = _4__this->fields.countUpAnimTime;
  if ( time_5__4 > countUpAnimTime )
  {
    happinessPointLabel = _4__this->fields.happinessPointLabel;
    LODWORD(iptr) = v2->fields._nowPoint_5__2;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                       (System_String_o *)StringLiteral_25324/*"{0:D4}"*/,
                                                                       v9,
                                                                       0);
    if ( happinessPointLabel )
    {
      UILabel__set_text(happinessPointLabel, (System_String_o *)this, 0);
      return 0;
    }
    goto LABEL_27;
  }
  v11 = (float)(fmaxf(fminf(time_5__4 / countUpAnimTime, 1.0), 0.0)
              * (float)((float)v2->fields._nowPoint_5__2 - (float)v2->fields._oldPoint_5__3))
      + (float)v2->fields._oldPoint_5__3;
  v12 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v16 = floorf(v11 + 0.5);
      goto LABEL_23;
    }
    v13 = iptr;
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v16 = ceilf(v11 + -0.5);
      goto LABEL_23;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v15 = (__int64)v13;
  v16 = v13;
  v17 = v16 + v14;
  if ( (v15 & 1) != 0 )
    v16 = v17;
LABEL_23:
  v18 = _4__this->fields.happinessPointLabel;
  v19 = (int)v16;
  if ( v16 == INFINITY )
    v19 = 0x80000000;
  LODWORD(iptr) = v19;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr);
  this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                     (System_String_o *)StringLiteral_25324/*"{0:D4}"*/,
                                                                     v20,
                                                                     0);
  if ( !v18 )
    goto LABEL_27;
  UILabel__set_text(v18, (System_String_o *)this, 0);
  v21 = v2->fields._time_5__4;
  v2->fields._time_5__4 = v21 + UnityEngine_Time__get_deltaTime(0);
  v2->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(p__2__current, 0, v23, v24, v25, v26, v27, v28);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_EventHappinessCounterUpdateAction__CountUpAnim_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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