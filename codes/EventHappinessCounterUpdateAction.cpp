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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12D76 & 1) == 0 )
  {
    sub_1BCA7E0(&EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo, method, v2);
    byte_4B12D76 = 1;
  }
  v5 = sub_1BCAA2C(EventHappinessCounterUpdateAction__CountUpAnim_d__20_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t __fastcall EventHappinessCounterUpdateAction__GetOldHappinessPoint(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  int max_length; // w8
  int v9; // w9
  UserEventPointEntity_o *v10; // x10

  if ( (byte_4B12D77 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12D77 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DD0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DD0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v4->static_fields->_OldUserEventPoint_k__BackingField;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OldUserEventPoint_k__BackingField, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !OldUserEventPoint_k__BackingField )
LABEL_20:
    sub_1BCAA3C(IsNullOrEmpty, v7);
  max_length = OldUserEventPoint_k__BackingField->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1BCAA44(IsNullOrEmpty, v7);
    v10 = OldUserEventPoint_k__BackingField->m_Items[v9];
    if ( !v10 )
      goto LABEL_20;
    if ( v10->fields.groupId == this->fields.happinessPointGroupId )
      return v10->fields.value;
    if ( max_length == ++v9 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHappinessCounterUpdateAction__Init(
        EventHappinessCounterUpdateAction_o *this,
        int32_t currentEventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  int32_t OldHappinessPoint; // w0
  UILabel_o *happinessPointLabel; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B12D73 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&currentEventId, method);
    sub_1BCA7E0(&Method_EventHappinessCounterUpdateAction__Init_b__16_0__, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_25207/*"{0:D4}"*/, v9, v10);
    byte_4B12D73 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.state = 0;
  this->fields.eventId = currentEventId;
  OldHappinessPoint = EventHappinessCounterUpdateAction__GetOldHappinessPoint(this, v13);
  happinessPointLabel = this->fields.happinessPointLabel;
  v30 = OldHappinessPoint;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25207/*"{0:D4}"*/, v16, 0LL);
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
  v17 = (System_String_o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                             this->fields.animation,
                                             (System_String_o *)gameObject,
                                             0LL);
  if ( !gameObject
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.animation) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   v17,
                                                   0LL)) == 0LL
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL),
        effectActionComponent = this->fields.effectActionComponent,
        v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21),
        System_Action___ctor(v22, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Init_b__16_0__, 0LL),
        !effectActionComponent) )
  {
LABEL_14:
    sub_1BCAA3C(gameObject, v12);
  }
  effectActionComponent->fields.endAction = v22;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&effectActionComponent->fields.endAction,
    (int64_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  EventHappinessCounterUpdateAction__SetupScreenTouchInfo(this, v29);
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
  __int64 v10; // x1
  __int64 v11; // x2
  void *gameObject; // x0
  __int64 v13; // x1
  float *p_fadeInTime; // x8
  CommonUI_o *v15; // x20
  System_String_o *v16; // x20

  if ( (byte_4B12D75 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B12D75 = 1;
  }
  this->fields.state = 1;
  this->fields.endAct = endAction;
  sub_1BCA784(
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  p_fadeInTime = &this->fields.fadeInTime;
  v15 = (CommonUI_o *)gameObject;
  if ( this->fields.fadeInTime <= 0.0 )
  {
    gameObject = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13);
      gameObject = AvalonSceneManager_TypeInfo;
    }
    p_fadeInTime = (float *)*((_QWORD *)gameObject + 23);
  }
  if ( !v15 )
    goto LABEL_16;
  CommonUI__maskFadein(v15, *p_fadeInTime, 0LL, 0LL);
  gameObject = this->fields.animation;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  gameObject = this->fields.animation;
  if ( !gameObject
    || (gameObject = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL), !this->fields.animation)
    || (v16 = (System_String_o *)gameObject,
        (gameObject = UnityEngine_Animation__get_Item(this->fields.animation, (System_String_o *)gameObject, 0LL)) == 0LL)
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 1.0, 0LL),
        (gameObject = this->fields.animation) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(gameObject, v13);
  }
  UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)gameObject, v16, 0LL);
}


void __fastcall EventHappinessCounterUpdateAction__SetupScreenTouchInfo(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_screenTouchObj; // x19
  UnityEngine_Object_o *screenTouchObj; // x21
  __int64 v8; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v11; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12D74 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B12D74 = 1;
  }
  p_screenTouchObj = (PartyOrganizationUtility_o *)&this->fields.screenTouchObj;
  screenTouchObj = (UnityEngine_Object_o *)this->fields.screenTouchObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(screenTouchObj, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v11 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v11) )
    {
LABEL_11:
      sub_1BCAA3C(Instance, v8);
    }
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v11, Instance, 0, 0LL);
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0LL);
    p_screenTouchObj->klass = (PartyOrganizationUtility_c *)ScreeenTouchInfo;
    sub_1BCA784(p_screenTouchObj, (int64_t)ScreeenTouchInfo, v13, v14, v15, v16, v17, v18);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


void __fastcall EventHappinessCounterUpdateAction__Update(
        EventHappinessCounterUpdateAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  UnityEngine_GameObject_o *screenTouchObj; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  float fadeOutTime; // s8
  CommonUI_o *v23; // x20
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_4B12D72 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CTouch_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventHappinessCounterUpdateAction__Update_b__15_0__, v8, v9);
    sub_1BCA7E0(&Method_EventHappinessCounterUpdateAction_Update__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B12D72 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    CTouch__process(0LL);
    if ( CTouch__isTouchPush(0LL) )
    {
      screenTouchObj = this->fields.screenTouchObj;
      this->fields.state = 0;
      if ( !screenTouchObj )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(screenTouchObj, 0, 0LL);
      v16 = Method_EventHappinessCounterUpdateAction_Update__;
      if ( (*((_BYTE *)Method_EventHappinessCounterUpdateAction_Update__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1BCA7F8(Method_EventHappinessCounterUpdateAction_Update__);
      v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      fadeOutTime = this->fields.fadeOutTime;
      v23 = (CommonUI_o *)Instance;
      if ( fadeOutTime <= 0.0 )
      {
        v24 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19);
          v24 = AvalonSceneManager_TypeInfo;
        }
        fadeOutTime = v24->static_fields->DEFAULT_FADE_TIME;
      }
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventHappinessCounterUpdateAction__Update_b__15_0__, 0LL);
      if ( !v23 )
LABEL_17:
        sub_1BCAA3C(screenTouchObj, v14);
      CommonUI__maskFadeout(v23, 1, fadeOutTime, v25, 0LL);
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
    sub_1BCAA3C(0LL, method);
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
  EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  EventHappinessCounterUpdateAction_o *_4__this; // x20
  const MethodInfo *v8; // x1
  float time_5__4; // s0
  float countUpAnimTime; // s1
  UILabel_o *happinessPointLabel; // x20
  Il2CppObject *v12; // x0
  bool result; // w0
  float v14; // s8
  double v15; // d0
  double v16; // d0
  float v17; // s1
  __int64 v18; // x8
  float v19; // s0
  float v20; // s1
  UILabel_o *v21; // x20
  int v22; // w8
  Il2CppObject *v23; // x0
  float v24; // s8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B12D78 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)sub_1BCA7E0(&StringLiteral_25207/*"{0:D4}"*/, v4, v5);
    byte_4B12D78 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_27;
    time_5__4 = v3->fields._time_5__4;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
LABEL_27:
      sub_1BCAA3C(this, method);
    v3->fields._nowPoint_5__2 = UserEventPointMaster__GetEventPoint(
                                  _4__this->fields.eventId,
                                  _4__this->fields.happinessPointGroupId,
                                  0LL);
    v3->fields._oldPoint_5__3 = EventHappinessCounterUpdateAction__GetOldHappinessPoint(_4__this, v8);
    v3->fields._time_5__4 = 0.0;
    time_5__4 = 0.0;
  }
  countUpAnimTime = _4__this->fields.countUpAnimTime;
  if ( time_5__4 > countUpAnimTime )
  {
    happinessPointLabel = _4__this->fields.happinessPointLabel;
    LODWORD(iptr) = v3->fields._nowPoint_5__2;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr);
    this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                       (System_String_o *)StringLiteral_25207/*"{0:D4}"*/,
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
              * (float)((float)v3->fields._nowPoint_5__2 - (float)v3->fields._oldPoint_5__3))
      + (float)v3->fields._oldPoint_5__3;
  v15 = modf(v14, &iptr);
  if ( v14 >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v19 = floorf(v14 + 0.5);
      goto LABEL_23;
    }
    v16 = iptr;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v19 = ceilf(v14 + -0.5);
      goto LABEL_23;
    }
    v16 = iptr;
    v17 = -1.0;
  }
  v18 = (__int64)v16;
  v19 = v16;
  v20 = v19 + v17;
  if ( (v18 & 1) != 0 )
    v19 = v20;
LABEL_23:
  v21 = _4__this->fields.happinessPointLabel;
  v22 = (int)v19;
  if ( v19 == INFINITY )
    v22 = 0x80000000;
  LODWORD(iptr) = v22;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iptr);
  this = (EventHappinessCounterUpdateAction__CountUpAnim_d__20_o *)System_String__Format(
                                                                     (System_String_o *)StringLiteral_25207/*"{0:D4}"*/,
                                                                     v23,
                                                                     0LL);
  if ( !v21 )
    goto LABEL_27;
  UILabel__set_text(v21, (System_String_o *)this, 0LL);
  v24 = v3->fields._time_5__4;
  v3->fields._time_5__4 = v24 + UnityEngine_Time__get_deltaTime(0LL);
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventHappinessCounterUpdateAction__CountUpAnim_d__20_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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