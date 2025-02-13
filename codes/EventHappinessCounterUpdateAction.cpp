void __fastcall EventHappinessCounterUpdateAction___ctor(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventHappinessCounterUpdateAction__Awake(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventHappinessCounterUpdateAction__CheckAssertions(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall EventHappinessCounterUpdateAction__CountUpAnim(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD904A & 1) == 0 )
  {
    sub_1C21E38(&EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
    byte_4BD904A = 1;
  }
  v3 = sub_1C22084(EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


int32_t __fastcall EventHappinessCounterUpdateAction__GetOldHappinessPoint(
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

  if ( (byte_4BD904B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD904B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v3->static_fields->_OldUserEventPoint_k__BackingField;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OldUserEventPoint_k__BackingField, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !OldUserEventPoint_k__BackingField )
LABEL_20:
    sub_1C22094(IsNullOrEmpty, v6);
  max_length = OldUserEventPoint_k__BackingField->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( max_length == v8 )
      sub_1C2209C(IsNullOrEmpty, v6);
    v9 = OldUserEventPoint_k__BackingField->m_Items[v8];
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields.groupId == this->fields.happinessPointGroupId )
      return v9->fields.value;
    if ( max_length == ++v8 )
      return 0;
  }
}


void __fastcall EventHappinessCounterUpdateAction__Init(
        EventHappinessCounterUpdateAction_o *this,
        int32_t currentEventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int32_t OldHappinessPoint; // w0
  UILabel_o *happinessPointLabel; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD9047 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventHappinessCounterUpdateAction__Init_b__16_0__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25396/*"{0:D4}"*/);
    byte_4BD9047 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.state = 0;
  this->fields.eventId = currentEventId;
  OldHappinessPoint = EventHappinessCounterUpdateAction__GetOldHappinessPoint(this, v7);
  happinessPointLabel = this->fields.happinessPointLabel;
  v24 = OldHappinessPoint;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v10, v11, v12);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25396/*"{0:D4}"*/, v13, 0LL);
  if ( !happinessPointLabel )
    goto LABEL_14;
  UILabel__set_text(happinessPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
  if ( !this->fields.animation )
    goto LABEL_14;
  v14 = (System_String_o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                             this->fields.animation,
                                             (System_String_o *)gameObject,
                                             0LL);
  if ( !gameObject
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.animation) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   v14,
                                                   0LL)) == 0LL
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL),
        effectActionComponent = this->fields.effectActionComponent,
        v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Init_b__16_0__, 0LL),
        !effectActionComponent) )
  {
LABEL_14:
    sub_1C22094(gameObject, v6);
  }
  effectActionComponent->fields.endAction = v16;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&effectActionComponent->fields.endAction,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  EventHappinessCounterUpdateAction__SetupScreenTouchInfo(this, v23);
}


void __fastcall EventHappinessCounterUpdateAction__Play(
        EventHappinessCounterUpdateAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *gameObject; // x0
  __int64 v11; // x1
  float *p_fadeInTime; // x8
  CommonUI_o *v13; // x20
  System_String_o *v14; // x20

  if ( (byte_4BD9049 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD9049 = 1;
  }
  this->fields.state = 1;
  this->fields.endAct = endAction;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endAct,
    (int64_t)endAction,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  p_fadeInTime = &this->fields.fadeInTime;
  v13 = (CommonUI_o *)gameObject;
  if ( this->fields.fadeInTime <= 0.0 )
  {
    gameObject = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      gameObject = AvalonSceneManager_TypeInfo;
    }
    p_fadeInTime = (float *)*((_QWORD *)gameObject + 23);
  }
  if ( !v13 )
    goto LABEL_16;
  CommonUI__maskFadein(v13, *p_fadeInTime, 0LL, 0LL);
  gameObject = this->fields.animation;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  gameObject = this->fields.animation;
  if ( !gameObject
    || (gameObject = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL), !this->fields.animation)
    || (v14 = (System_String_o *)gameObject,
        (gameObject = UnityEngine_Animation__get_Item(this->fields.animation, (System_String_o *)gameObject, 0LL)) == 0LL)
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 1.0, 0LL),
        (gameObject = this->fields.animation) == 0LL) )
  {
LABEL_16:
    sub_1C22094(gameObject, v11);
  }
  UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)gameObject, v14, 0LL);
}


void __fastcall EventHappinessCounterUpdateAction__SetupScreenTouchInfo(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_screenTouchObj; // x19
  UnityEngine_Object_o *screenTouchObj; // x21
  __int64 v5; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v8; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD9048 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD9048 = 1;
  }
  p_screenTouchObj = (PartyOrganizationUtility_o *)&this->fields.screenTouchObj;
  screenTouchObj = (UnityEngine_Object_o *)this->fields.screenTouchObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchObj, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v8 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v8) )
    {
LABEL_11:
      sub_1C22094(Instance, v5);
    }
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v8, Instance, 0, 0LL);
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0LL);
    p_screenTouchObj->klass = (PartyOrganizationUtility_c *)ScreeenTouchInfo;
    sub_1C21DDC(p_screenTouchObj, (int64_t)ScreeenTouchInfo, v10, v11, v12, v13, v14, v15);
  }
  Instance = (UnityEngine_Transform_o *)p_screenTouchObj->klass;
  if ( !p_screenTouchObj->klass )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall EventHappinessCounterUpdateAction__StartCountUp(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = EventHappinessCounterUpdateAction__CountUpAnim(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


void __fastcall EventHappinessCounterUpdateAction__Update(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
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

  if ( (byte_4BD9046 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&CTouch_TypeInfo);
    sub_1C21E38(&Method_EventHappinessCounterUpdateAction__Update_b__15_0__);
    sub_1C21E38(&Method_EventHappinessCounterUpdateAction_Update__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD9046 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0LL);
    if ( CTouch__isTouchPush(0LL) )
    {
      screenTouchObj = this->fields.screenTouchObj;
      this->fields.state = 0;
      if ( !screenTouchObj )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(screenTouchObj, 0, 0LL);
      v5 = Method_EventHappinessCounterUpdateAction_Update__;
      if ( (*((_BYTE *)Method_EventHappinessCounterUpdateAction_Update__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C21E50(Method_EventHappinessCounterUpdateAction_Update__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Update_b__15_0__, 0LL);
      if ( !v9 )
LABEL_17:
        sub_1C22094(screenTouchObj, v3);
      CommonUI__maskFadeout(v9, 1, fadeOutTime, v11, 0LL);
    }
  }
}


void __fastcall EventHappinessCounterUpdateAction___Init_b__16_0(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *screenTouchObj; // x0

  screenTouchObj = this->fields.screenTouchObj;
  if ( !screenTouchObj )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(screenTouchObj, 1, 0LL);
  this->fields.state = 2;
}


void __fastcall EventHappinessCounterUpdateAction___Update_b__15_0(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall EventHappinessCounterUpdateAction__CountUpAnim_d__20___ctor(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventHappinessCounterUpdateAction__CountUpAnim_d__20__MoveNext(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *v5; // x19
  int32_t _1__state; // w8
  EventHappinessCounterUpdateAction_o *_4__this; // x20
  const MethodInfo *v8; // x1
  float time_5__4; // s0
  float countUpAnimTime; // s1
  UILabel_o *happinessPointLabel; // x20
  Il2CppObject *v12; // x0
  bool result; // w0
  float v14; // s8
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  double v18; // d0
  double v19; // d0
  float v20; // s1
  __int64 v21; // x8
  float v22; // s0
  float v23; // s1
  UILabel_o *v24; // x20
  int v25; // w8
  Il2CppObject *v26; // x0
  float v27; // s8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4BD904C & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)sub_1C21E38(&StringLiteral_25396/*"{0:D4}"*/);
    byte_4BD904C = 1;
  }
  _1__state = v5->fields.__1__state;
  _4__this = v5->fields.__4__this;
  if ( _1__state == 1 )
  {
    v5->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_27;
    time_5__4 = v5->fields._time_5__4;
  }
  else
  {
    if ( _1__state )
      return 0;
    v5->fields.__1__state = -1;
    if ( !_4__this )
LABEL_27:
      sub_1C22094(this, method);
    v5->fields._nowPoint_5__2 = UserEventPointMaster__GetEventPoint(
                                  _4__this->fields.eventId,
                                  _4__this->fields.happinessPointGroupId,
                                  0LL);
    v5->fields._oldPoint_5__3 = EventHappinessCounterUpdateAction__GetOldHappinessPoint(_4__this, v8);
    v5->fields._time_5__4 = 0.0;
    time_5__4 = 0.0;
  }
  countUpAnimTime = _4__this->fields.countUpAnimTime;
  if ( time_5__4 > countUpAnimTime )
  {
    happinessPointLabel = _4__this->fields.happinessPointLabel;
    LODWORD(iptr) = v5->fields._nowPoint_5__2;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr, v2, v3, v4);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                       (System_String_o *)StringLiteral_25396/*"{0:D4}"*/,
                                                                       v12,
                                                                       0LL);
    if ( happinessPointLabel )
    {
      UILabel__set_text(happinessPointLabel, (System_String_o *)this, 0LL);
      return 0;
    }
    goto LABEL_27;
  }
  v14 = (float)(fmaxf(fminf(time_5__4 / countUpAnimTime, 1.0), 0.0)
              * (float)((float)v5->fields._nowPoint_5__2 - (float)v5->fields._oldPoint_5__3))
      + (float)v5->fields._oldPoint_5__3;
  v18 = modf(v14, &iptr);
  if ( v14 >= 0.0 )
  {
    if ( v18 != 0.5 )
    {
      v22 = floorf(v14 + 0.5);
      goto LABEL_23;
    }
    v19 = iptr;
    v20 = 1.0;
  }
  else
  {
    if ( v18 != -0.5 )
    {
      v22 = ceilf(v14 + -0.5);
      goto LABEL_23;
    }
    v19 = iptr;
    v20 = -1.0;
  }
  v21 = (__int64)v19;
  v22 = v19;
  v23 = v22 + v20;
  if ( (v21 & 1) != 0 )
    v22 = v23;
LABEL_23:
  v24 = _4__this->fields.happinessPointLabel;
  v25 = (int)v22;
  if ( v22 == INFINITY )
    v25 = 0x80000000;
  LODWORD(iptr) = v25;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr, v15, v16, v17);
  this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                     (System_String_o *)StringLiteral_25396/*"{0:D4}"*/,
                                                                     v26,
                                                                     0LL);
  if ( !v24 )
    goto LABEL_27;
  UILabel__set_text(v24, (System_String_o *)this, 0LL);
  v27 = v5->fields._time_5__4;
  v5->fields._time_5__4 = v27 + UnityEngine_Time__get_deltaTime(0LL);
  v5->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
  sub_1C21DDC(p__2__current, 0LL, v29, v30, v31, v32, v33, v34);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_Collections_IEnumerator_Reset(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_EventHappinessCounterUpdateAction__CountUpAnim_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_Collections_IEnumerator_get_Current(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventHappinessCounterUpdateAction__CountUpAnim_d__20__System_IDisposable_Dispose(
        EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *this,
        const MethodInfo *method)
{
  ;
}