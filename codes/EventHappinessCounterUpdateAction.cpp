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
  const MethodInfo *v5; // x3

  if ( (byte_4C3F8D9 & 1) == 0 )
  {
    sub_1C37058(&EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
    byte_4C3F8D9 = 1;
  }
  v3 = sub_1C372A4(EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


int32_t EventHappinessCounterUpdateAction__GetOldHappinessPoint(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x20
  _BOOL8 IsNullOrEmpty; // x0
  int max_length; // w8
  int v7; // w9
  UserEventPointEntity_o *v8; // x10

  if ( (byte_4C3F8DA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F8DA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F9BC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F9BC = 1;
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
    sub_1C372B4(IsNullOrEmpty);
  max_length = OldUserEventPoint_k__BackingField->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      sub_1C372BC(IsNullOrEmpty);
    v8 = OldUserEventPoint_k__BackingField->m_Items[v7];
    if ( !v8 )
      goto LABEL_20;
    if ( v8->fields.groupId == this->fields.happinessPointGroupId )
      return v8->fields.value;
    if ( max_length == ++v7 )
      return 0;
  }
}


void EventHappinessCounterUpdateAction__Init(
        EventHappinessCounterUpdateAction_o *this,
        int32_t currentEventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  int32_t OldHappinessPoint; // w0
  UILabel_o *happinessPointLabel; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3F8D6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventHappinessCounterUpdateAction__Init_b__16_0__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25072/*"{0:D4}"*/);
    byte_4C3F8D6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.state = 0;
  this->fields.eventId = currentEventId;
  OldHappinessPoint = EventHappinessCounterUpdateAction__GetOldHappinessPoint(this, v6);
  happinessPointLabel = this->fields.happinessPointLabel;
  v22 = OldHappinessPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v9, v10, v11, v12, v13, v14);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25072/*"{0:D4}"*/, v15, 0);
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
  v16 = (System_String_o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                             this->fields.animation,
                                             (System_String_o *)gameObject,
                                             0);
  if ( !gameObject
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.animation) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   v16,
                                                   0)) == 0
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)gameObject, 0.0, 0),
        effectActionComponent = this->fields.effectActionComponent,
        v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v18, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Init_b__16_0__, 0),
        !effectActionComponent) )
  {
LABEL_14:
    sub_1C372B4(gameObject);
  }
  effectActionComponent->fields.endAction = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&effectActionComponent->fields.endAction, (int32_t)v18, v19, v20);
  EventHappinessCounterUpdateAction__SetupScreenTouchInfo(this, v21);
}


void EventHappinessCounterUpdateAction__Play(
        EventHappinessCounterUpdateAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  float *p_fadeInTime; // x8
  CommonUI_o *v8; // x20
  System_String_o *v9; // x20

  if ( (byte_4C3F8D8 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F8D8 = 1;
  }
  this->fields.state = 1;
  this->fields.endAct = endAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)endAction, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  p_fadeInTime = &this->fields.fadeInTime;
  v8 = (CommonUI_o *)gameObject;
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
  if ( !v8 )
    goto LABEL_16;
  CommonUI__maskFadein(v8, *p_fadeInTime, 0, 0);
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
    || (v9 = (System_String_o *)gameObject,
        (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                    this->fields.animation,
                                                    (System_String_o *)gameObject,
                                                    0)) == 0)
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 1.0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.animation) == 0) )
  {
LABEL_16:
    sub_1C372B4(gameObject);
  }
  UnityEngine_Animation__Play_71012036((UnityEngine_Animation_o *)gameObject, v9, 0);
}


void EventHappinessCounterUpdateAction__SetupScreenTouchInfo(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_screenTouchObj; // x19
  UnityEngine_Object_o *screenTouchObj; // x21
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v7; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3F8D7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F8D7 = 1;
  }
  p_screenTouchObj = (CGThumbnailListItem_o *)&this->fields.screenTouchObj;
  screenTouchObj = (UnityEngine_Object_o *)this->fields.screenTouchObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchObj, 0, 0) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v7 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0), !v7) )
    {
LABEL_11:
      sub_1C372B4(Instance);
    }
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v7, Instance, 0, 0);
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0);
    p_screenTouchObj->klass = (CGThumbnailListItem_c *)ScreeenTouchInfo;
    sub_1C36FFC(p_screenTouchObj, (int32_t)ScreeenTouchInfo, v9, v10);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


void EventHappinessCounterUpdateAction__Update(EventHappinessCounterUpdateAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *screenTouchObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  float fadeOutTime; // s8
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x0
  System_Action_o *v10; // x21

  if ( (byte_4C3F8D5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_EventHappinessCounterUpdateAction__Update_b__15_0__);
    sub_1C37058(&Method_EventHappinessCounterUpdateAction_Update__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F8D5 = 1;
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
      v4 = Method_EventHappinessCounterUpdateAction_Update__;
      if ( (*((_BYTE *)Method_EventHappinessCounterUpdateAction_Update__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C37070(Method_EventHappinessCounterUpdateAction_Update__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      fadeOutTime = this->fields.fadeOutTime;
      v8 = (CommonUI_o *)Instance;
      if ( fadeOutTime <= 0.0 )
      {
        v9 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v9 = AvalonSceneManager_TypeInfo;
        }
        fadeOutTime = v9->static_fields->DEFAULT_FADE_TIME;
      }
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Update_b__15_0__, 0);
      if ( !v8 )
LABEL_17:
        sub_1C372B4(screenTouchObj);
      CommonUI__maskFadeout(v8, 1, fadeOutTime, v10, 0);
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
    sub_1C372B4(0);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *v8; // x19
  int32_t _1__state; // w8
  EventHappinessCounterUpdateAction_o *_4__this; // x20
  const MethodInfo *v11; // x1
  float time_5__4; // s0
  float countUpAnimTime; // s1
  UILabel_o *happinessPointLabel; // x20
  Il2CppObject *v15; // x0
  bool result; // w0
  float v17; // s8
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  double v24; // d0
  double v25; // d0
  float v26; // s1
  __int64 v27; // x8
  float v28; // s0
  float v29; // s1
  UILabel_o *v30; // x20
  int v31; // w8
  Il2CppObject *v32; // x0
  float v33; // s8
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  v8 = this;
  if ( (byte_4C3F8DB & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)sub_1C37058(&StringLiteral_25072/*"{0:D4}"*/);
    byte_4C3F8DB = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_27;
    time_5__4 = v8->fields._time_5__4;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
LABEL_27:
      sub_1C372B4(this);
    v8->fields._nowPoint_5__2 = UserEventPointMaster__GetEventPoint(
                                  _4__this->fields.eventId,
                                  _4__this->fields.happinessPointGroupId,
                                  0);
    v8->fields._oldPoint_5__3 = EventHappinessCounterUpdateAction__GetOldHappinessPoint(_4__this, v11);
    v8->fields._time_5__4 = 0.0;
    time_5__4 = 0.0;
  }
  countUpAnimTime = _4__this->fields.countUpAnimTime;
  if ( time_5__4 > countUpAnimTime )
  {
    happinessPointLabel = _4__this->fields.happinessPointLabel;
    LODWORD(iptr) = v8->fields._nowPoint_5__2;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr, v2, v3, v4, v5, v6, v7);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                       (System_String_o *)StringLiteral_25072/*"{0:D4}"*/,
                                                                       v15,
                                                                       0);
    if ( happinessPointLabel )
    {
      UILabel__set_text(happinessPointLabel, (System_String_o *)this, 0);
      return 0;
    }
    goto LABEL_27;
  }
  v17 = (float)(fmaxf(fminf(time_5__4 / countUpAnimTime, 1.0), 0.0)
              * (float)((float)v8->fields._nowPoint_5__2 - (float)v8->fields._oldPoint_5__3))
      + (float)v8->fields._oldPoint_5__3;
  v24 = modf(v17, &iptr);
  if ( v17 >= 0.0 )
  {
    if ( v24 != 0.5 )
    {
      v28 = floorf(v17 + 0.5);
      goto LABEL_23;
    }
    v25 = iptr;
    v26 = 1.0;
  }
  else
  {
    if ( v24 != -0.5 )
    {
      v28 = ceilf(v17 + -0.5);
      goto LABEL_23;
    }
    v25 = iptr;
    v26 = -1.0;
  }
  v27 = (__int64)v25;
  v28 = v25;
  v29 = v28 + v26;
  if ( (v27 & 1) != 0 )
    v28 = v29;
LABEL_23:
  v30 = _4__this->fields.happinessPointLabel;
  v31 = (int)v28;
  if ( v28 == INFINITY )
    v31 = 0x80000000;
  LODWORD(iptr) = v31;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr, v18, v19, v20, v21, v22, v23);
  this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                     (System_String_o *)StringLiteral_25072/*"{0:D4}"*/,
                                                                     v32,
                                                                     0);
  if ( !v30 )
    goto LABEL_27;
  UILabel__set_text(v30, (System_String_o *)this, 0);
  v33 = v8->fields._time_5__4;
  v8->fields._time_5__4 = v33 + UnityEngine_Time__get_deltaTime(0);
  v8->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v8->fields.__2__current;
  sub_1C36FFC(p__2__current, 0, v35, v36);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventHappinessCounterUpdateAction__CountUpAnim_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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