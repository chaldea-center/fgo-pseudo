void EventInfoSkillGetDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoSkillGetDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventInfoSkillGetDialog_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5972653 & 1) == 0 )
  {
    sub_2213A60(&EventInfoSkillGetDialog_TypeInfo);
    sub_2213A60(&StringLiteral_5836/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/);
    sub_2213A60(&StringLiteral_5837/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/);
    sub_2213A60(&StringLiteral_5835/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/);
    byte_5972653 = 1;
  }
  v7 = StringLiteral_5837/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/;
  EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey = (struct System_String_o *)StringLiteral_5837/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoSkillGetDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5835/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/;
  static_fields = EventInfoSkillGetDialog_TypeInfo->static_fields;
  static_fields->MessageTitleLocalizationKeyDefault = (struct System_String_o *)StringLiteral_5835/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->MessageTitleLocalizationKeyDefault,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_5836/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/;
  v17 = EventInfoSkillGetDialog_TypeInfo->static_fields;
  v17->MessageTitleLocalizationKey = (struct System_String_o *)StringLiteral_5836/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->MessageTitleLocalizationKey, v16, v18, v19, v20, v21, v22, v23);
}


void EventInfoSkillGetDialog___ctor(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5972652 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5972652 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillGetDialog__Awake(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillGetDialog__CheckAssertion(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillGetDialog__OnClickCloseButton(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_597264F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    sub_2213A60(&Method_EventInfoSkillGetDialog__OnClickCloseButton_b__22_0__);
    byte_597264F = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventInfoSkillGetDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillGetDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoSkillGetDialog__OnClickCloseButton_b__22_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoSkillGetDialog__Open(
        EventInfoSkillGetDialog_o *this,
        int32_t eventId,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 SkillId; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  ImagePartsGroupEntity_o *v31; // x0
  __int64 v32; // x8
  System_String_o *imagePartsIconSpriteNameFormat; // x20
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w20
  System_Action_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x1
  UnityEngine_Object_o *gameObject; // x19
  int v48; // [xsp+8h] [xbp-48h] BYREF
  int v49; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_597264D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__0__);
    sub_2213A60(&EventInfoSkillGetDialog___c__DisplayClass20_0_TypeInfo);
    byte_597264D = 1;
  }
  v9 = sub_2213CCC(EventInfoSkillGetDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = eventId;
  *(_QWORD *)(v9 + 48) = imagePartsGroupEntity;
  v18 = v9 + 48;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v9 + 48),
    (int32_t)imagePartsGroupEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v9 + 56) = closeAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)closeAction, v25, v26, v27, v28, v29, v30);
  v31 = *(ImagePartsGroupEntity_o **)(v9 + 48);
  if ( v31 )
  {
    SkillId = ImagePartsGroupEntity__GetSkillId(v31, 0);
    v32 = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(v9 + 40) = SkillId;
    if ( v32 )
    {
      imagePartsIconSpriteNameFormat = this->fields.imagePartsIconSpriteNameFormat;
      v49 = *(_DWORD *)(v32 + 24);
      SkillId = j_il2cpp_value_box_0(qword_5984348, &v49);
      if ( *(_QWORD *)v18 )
      {
        v34 = (Il2CppObject *)SkillId;
        v48 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v48);
        v36 = System_String__Format_75697880(imagePartsIconSpriteNameFormat, v34, v35, 0);
        *(_QWORD *)(v9 + 32) = v36;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
        v43 = *(_DWORD *)(v9 + 24);
        v44 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v44,
          (Il2CppObject *)v9,
          Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__0__,
          0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v45);
        AtlasManager__LoadEventUI_47569188(v43, v44, 1, 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(SkillId, v11);
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 56), 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void EventInfoSkillGetDialog__SetBasePanel(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5972651 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_5972651 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_2213CDC(transform, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.basePanel,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


Cysharp_Threading_Tasks_UniTask_o EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync(
        EventInfoSkillGetDialog_o *this,
        System_Threading_CancellationToken_o cancellationToken,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  Cysharp_Threading_Tasks_UniTask_o v25; // kr00_16
  EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o v26; // [xsp+0h] [xbp-70h] BYREF
  Cysharp_Threading_Tasks_UniTask_o result; // 0:x0.16

  if ( (byte_597264E & 1) == 0 )
  {
    sub_2213A60(&Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
    byte_597264E = 1;
  }
  memset(&v26, 0, sizeof(v26));
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v26.fields.__t__builder,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v26.fields.__4__this = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26.fields.__4__this, (int32_t)this, v10, v11, v12, v13, v14, v15);
  v26.fields.cancellationToken = cancellationToken;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26.fields.cancellationToken, 0, v16, v17, v18, v19, v20, v21);
  v26.fields.__1__state = -1;
  if ( !*((_QWORD *)Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___
        + 7) )
    sub_224B964(Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
  EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21__MoveNext(&v26, v22);
  v25 = sub_307F42C(&v26.fields.__t__builder, 0);
  *(_QWORD *)&result.fields.token = *(_QWORD *)&v25.fields.token;
  result.fields.source = v25.fields.source;
  return result;
}


void EventInfoSkillGetDialog___OnClickCloseButton_b__22_0(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5972654 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972654 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback, 0, v3, v4, v5, v6, v7, v8);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


UnityEngine_GameObject_o *EventInfoSkillGetDialog__get_closeBtnObject(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_5972650 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972650 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21__MoveNext(
        EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *this,
        const MethodInfo *method)
{
  EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *v2; // x19
  int32_t _1__state; // w8
  struct EventInfoSkillGetDialog_o *_4__this; // x22
  EventInfoSkillGetDialog___c_c *v5; // x0
  struct EventInfoSkillGetDialog___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__21_0; // x20
  Il2CppObject *v8; // x21
  struct EventInfoSkillGetDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Threading_CancellationToken_o v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Cysharp_Threading_Tasks_UniTask_o v23; // kr10_16
  struct Cysharp_Threading_Tasks_UniTask_Awaiter_o u__1; // q0
  Cysharp_Threading_Tasks_IUniTaskSource_c *klass; // x8
  __int64 v26; // x9
  int *p_offset; // x10
  __int64 v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Cysharp_Threading_Tasks_IUniTaskSource_c *v35; // x8
  __int64 v36; // x9
  Cysharp_Threading_Tasks_IUniTaskSource_c **v37; // x10
  __int64 v38; // x0
  UnityEngine_Object_o *closeButton; // x20
  __int64 v40; // x1
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v43; // w8
  struct Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *runnerPromise; // x19
  Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c *v45; // x8
  __int64 v46; // x9
  Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **v47; // x10
  __int64 v48; // x0
  struct Cysharp_Threading_Tasks_UniTask_Awaiter_o v49; // q0
  Cysharp_Threading_Tasks_UniTask_o task; // [xsp+10h] [xbp-60h] BYREF
  Cysharp_Threading_Tasks_UniTask_o v51; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_5972658 & 1) == 0 )
  {
    sub_2213A60(&Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTask_Awaiter__EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillGetDialog___c__WaitFadeAndRegisterBackKeyAsync_b__21_0__);
    sub_2213A60(&EventInfoSkillGetDialog___c_TypeInfo);
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)sub_2213A60(&Cysharp_Threading_Tasks_UniTask_TypeInfo);
    byte_5972658 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  task = (Cysharp_Threading_Tasks_UniTask_o)0LL;
  if ( _1__state )
  {
    v5 = EventInfoSkillGetDialog___c_TypeInfo;
    if ( !*(&EventInfoSkillGetDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog___c_TypeInfo, method);
      v5 = EventInfoSkillGetDialog___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__21_0 = static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, method);
        static_fields = EventInfoSkillGetDialog___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__21_0,
        v8,
        Method_EventInfoSkillGetDialog___c__WaitFadeAndRegisterBackKeyAsync_b__21_0__,
        0);
      v9 = EventInfoSkillGetDialog___c_TypeInfo->static_fields;
      v9->__9__21_0 = _9__21_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__21_0, (int32_t)_9__21_0, v10, v11, v12, v13, v14, v15);
    }
    v16.fields._source = v2->fields.cancellationToken.fields._source;
    if ( !*(&Cysharp_Threading_Tasks_UniTask_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Cysharp_Threading_Tasks_UniTask_TypeInfo, method);
    v51 = Cysharp_Threading_Tasks_UniTask__WaitWhile(_9__21_0, 8, v16, 0, 0);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v51, 0, v17, v18, v19, v20, v21, v22);
    v23 = v51;
    task = v51;
    if ( !byte_597201D )
    {
      sub_2213A60(&Cysharp_Threading_Tasks_UniTask_TypeInfo);
      byte_597201D = 1;
    }
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)Cysharp_Threading_Tasks_UniTask_TypeInfo;
    if ( !*(&Cysharp_Threading_Tasks_UniTask_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Cysharp_Threading_Tasks_UniTask_TypeInfo, method);
    if ( byte_597201E )
    {
      if ( !v23.fields.source )
        goto LABEL_28;
    }
    else
    {
      this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)sub_2213A60(&Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo);
      byte_597201E = 1;
      if ( !v23.fields.source )
        goto LABEL_28;
    }
    klass = v23.fields.source->klass;
    v26 = *(unsigned __int16 *)&v23.fields.source->klass->_2.rank;
    if ( *(_WORD *)&v23.fields.source->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Cysharp_Threading_Tasks_IUniTaskSource_c **)p_offset - 1) != Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_25;
      }
      v28 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_25:
      v28 = sub_224BC3C(v23.fields.source, Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo, 0);
    }
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)(*(__int64 (__fastcall **)(struct Cysharp_Threading_Tasks_IUniTaskSource_o *, _QWORD, _QWORD))v28)(
                                                                                 v23.fields.source,
                                                                                 *(unsigned int *)&v23.fields.token,
                                                                                 *(_QWORD *)(v28 + 8));
    if ( !(_DWORD)this )
    {
      v49 = (struct Cysharp_Threading_Tasks_UniTask_Awaiter_o)task;
      v2->fields.__1__state = 0;
      v2->fields.__u__1 = v49;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__u__1, 0, v29, v30, v31, v32, v33, v34);
      sub_312C280(
        &v2->fields.__t__builder,
        &task,
        v2,
        Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTask_Awaiter__EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
      return;
    }
  }
  else
  {
    u__1 = v2->fields.__u__1;
    v2->fields.__u__1.fields.task.fields.source = 0;
    *(_QWORD *)&v2->fields.__u__1.fields.task.fields.token = 0;
    v2->fields.__1__state = -1;
    task = u__1.fields.task;
  }
LABEL_28:
  if ( !byte_597201F )
  {
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)sub_2213A60(&Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo);
    byte_597201F = 1;
  }
  if ( task.fields.source )
  {
    v35 = task.fields.source->klass;
    v36 = *(unsigned __int16 *)&task.fields.source->klass->_2.rank;
    if ( *(_WORD *)&task.fields.source->klass->_2.rank )
    {
      v37 = (Cysharp_Threading_Tasks_IUniTaskSource_c **)&v35->_1.interfaceOffsets->offset;
      while ( *(v37 - 1) != Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo )
      {
        --v36;
        v37 += 2;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = (__int64)&v35->vtable[*(_DWORD *)v37 + 2];
    }
    else
    {
LABEL_35:
      v38 = sub_224BC3C(task.fields.source, Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo, 2);
    }
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)(*(__int64 (__fastcall **)(struct Cysharp_Threading_Tasks_IUniTaskSource_o *, _QWORD, _QWORD))v38)(
                                                                                 task.fields.source,
                                                                                 (unsigned __int16)task.fields.token,
                                                                                 *(_QWORD *)(v38 + 8));
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  closeButton = (UnityEngine_Object_o *)_4__this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(closeButton, 0, 0) )
  {
    v41 = (UnityEngine_Component_o *)_4__this->fields.closeButton;
    if ( !v41 )
      sub_2213CDC(0, v40);
    gameObject = UnityEngine_Component__get_gameObject(v41, 0);
    AndroidBackKeyManager__AddBackBtn(gameObject, 0);
  }
  v43 = (unsigned __int8)byte_5972021;
  v2->fields.__1__state = -2;
  if ( !v43 )
  {
    sub_2213A60(&Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo);
    byte_5972021 = 1;
  }
  runnerPromise = v2->fields.__t__builder.fields.runnerPromise;
  if ( runnerPromise )
  {
    v45 = runnerPromise->klass;
    v46 = *(unsigned __int16 *)&runnerPromise->klass->_2.rank;
    if ( *(_WORD *)&runnerPromise->klass->_2.rank )
    {
      v47 = (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)&v45->_1.interfaceOffsets->offset;
      while ( *(v47 - 1) != Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo )
      {
        --v46;
        v47 += 2;
        if ( !v46 )
          goto LABEL_51;
      }
      v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 2];
    }
    else
    {
LABEL_51:
      v48 = sub_224BC3C(runnerPromise, Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *, _QWORD))v48)(
      runnerPromise,
      *(_QWORD *)(v48 + 8));
  }
}


void EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21__SetStateMachine(
        EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *this,
        System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,
        const MethodInfo *method)
{
  ;
}


void EventInfoSkillGetDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972655 & 1) == 0 )
  {
    sub_2213A60(&EventInfoSkillGetDialog___c_TypeInfo);
    byte_5972655 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoSkillGetDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSkillGetDialog___c_TypeInfo->static_fields->__9 = (struct EventInfoSkillGetDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoSkillGetDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoSkillGetDialog___c___ctor(EventInfoSkillGetDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoSkillGetDialog___c___WaitFadeAndRegisterBackKeyAsync_b__21_0(
        EventInfoSkillGetDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  __int64 v5; // x1

  if ( (byte_5972656 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5972656 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v4 )
    sub_2213CDC(0, v5);
  return CommonUI__maskFadeIsBusy((CommonUI_o *)v4, 0);
}


void EventInfoSkillGetDialog___c__DisplayClass20_0___ctor(
        EventInfoSkillGetDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSkillGetDialog___c__DisplayClass20_0___Open_b__0(
        EventInfoSkillGetDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *_4__this; // x20
  __int64 Master_object; // x0
  __int64 v5; // x1
  struct EventInfoSkillGetDialog_o *v6; // x8
  int32_t eventId; // w20
  UISprite_o *imagePartsIconSprite; // x21
  System_String_o *spriteName; // x22
  struct EventInfoSkillGetDialog_o *v10; // x8
  char v11; // w20
  UISprite_o *imagePartsSkillIcon; // x21
  int32_t skillId; // w22
  struct EventInfoSkillGetDialog_o *v14; // x8
  struct EventInfoSkillGetDialog_o *v15; // x8
  UnityEngine_GameObject_o *imagePartsSkillIconObject; // x0
  bool v17; // w1
  UISprite_o *skillIcon; // x21
  int32_t v19; // w22
  struct EventInfoSkillGetDialog_o *v20; // x8
  struct EventInfoSkillGetDialog_o *v21; // x8
  __int64 v22; // x1
  SkillLvMaster_o *v23; // x20
  int32_t v24; // w21
  __int64 v25; // x1
  struct ImagePartsGroupEntity_o *imagePartsGroupEntity; // x8
  Il2CppObject *v27; // x20
  struct ImagePartsGroupEntity_o *v28; // x8
  System_String_o *MessageLocalizationKey; // x21
  Il2CppObject *v30; // x0
  struct EventInfoSkillGetDialog_o *v31; // x8
  System_String_o *v32; // x22
  UILabel_o *messageLabel; // x21
  System_String_o *v34; // x0
  struct EventInfoSkillGetDialog_o *v35; // x8
  UILabel_o *skillExplanationTitle; // x20
  struct ImagePartsGroupEntity_o *v37; // x8
  __int64 v38; // x21
  struct EventInfoSkillGetDialog_StaticFields *static_fields; // x9
  System_String_o *MessageTitleLocalizationKey; // x22
  Il2CppObject *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_String_o *MessageTitleLocalizationKeyDefault; // x1
  struct EventInfoSkillGetDialog_o *v55; // x8
  UILabel_o *skillName; // x20
  struct EventInfoSkillGetDialog_o *v57; // x8
  UILabel_o *skillExplanationLabel; // x20
  struct EventInfoSkillGetDialog_o *v59; // x8
  UILabel_o *closeLabel; // x20
  System_Action_o *_9__1; // x21
  BaseDialog_o *v62; // x20
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct System_Action_o *closeAction; // x1
  __int64 v76; // x1
  UnityEngine_Object_o *gameObject; // x19
  int32_t id; // [xsp+8h] [xbp-48h] BYREF
  int32_t condId; // [xsp+Ch] [xbp-44h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5972657 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventInfoSkillGetDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__1__);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_5972657 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Master_object = UnityEngine_Object__op_Equality(_4__this, 0, 0);
  if ( (Master_object & 1) == 0 )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_64;
    eventId = this->fields.eventId;
    imagePartsIconSprite = v6->fields.imagePartsIconSprite;
    spriteName = this->fields.spriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
    Master_object = AtlasManager__SetEventUI_47569484(eventId, imagePartsIconSprite, spriteName, 0);
    v10 = this->fields.__4__this;
    v11 = Master_object;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_64;
      imagePartsSkillIcon = v10->fields.imagePartsSkillIcon;
      skillId = this->fields.skillId;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
      Master_object = AtlasManager__SetSkillIcon(imagePartsSkillIcon, skillId, 0);
      v14 = this->fields.__4__this;
      if ( !v14 )
        goto LABEL_64;
      Master_object = AtlasManager__SetEventUI_47569484(
                        this->fields.eventId,
                        v14->fields.imagePartsSkillIconBg,
                        v14->fields.imagePartsSkillIconBgName,
                        0);
      v15 = this->fields.__4__this;
      if ( !v15 )
        goto LABEL_64;
      imagePartsSkillIconObject = v15->fields.imagePartsSkillIconObject;
      v17 = 1;
    }
    else
    {
      if ( !v10 )
        goto LABEL_64;
      skillIcon = v10->fields.skillIcon;
      v19 = this->fields.skillId;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
      Master_object = AtlasManager__SetSkillIcon(skillIcon, v19, 0);
      v20 = this->fields.__4__this;
      if ( !v20 )
        goto LABEL_64;
      imagePartsSkillIconObject = v20->fields.imagePartsSkillIconObject;
      v17 = 0;
    }
    GameObjectHelper__SetActiveSafely(imagePartsSkillIconObject, v17, 0);
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_64;
    GameObjectHelper__SetActiveSafely(v21->fields.skillIconObject, (v11 & 1) == 0, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !this->fields.imagePartsGroupEntity )
      goto LABEL_64;
    v23 = (SkillLvMaster_o *)Master_object;
    Master_object = ImagePartsGroupEntity__GetSkillId(this->fields.imagePartsGroupEntity, 0);
    if ( !this->fields.imagePartsGroupEntity )
      goto LABEL_64;
    v24 = Master_object;
    Master_object = ImagePartsGroupEntity__GetSkillLv(this->fields.imagePartsGroupEntity, 0);
    if ( !v23 )
      goto LABEL_64;
    if ( SkillLvMaster__TryGetEntity(v23, &entity, v24, Master_object, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
      imagePartsGroupEntity = this->fields.imagePartsGroupEntity;
      if ( imagePartsGroupEntity )
      {
        if ( Master_object )
        {
          Master_object = (__int64)QuestMaster__getQuestEntity(
                                     (QuestMaster_o *)Master_object,
                                     imagePartsGroupEntity->fields.condId,
                                     0);
          if ( Master_object )
          {
            Master_object = (__int64)QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
            v27 = (Il2CppObject *)Master_object;
            if ( !*(&EventInfoSkillGetDialog_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog_TypeInfo, v5);
            v28 = this->fields.imagePartsGroupEntity;
            if ( v28 )
            {
              MessageLocalizationKey = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey;
              condId = v28->fields.condId;
              v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &condId);
              Master_object = (__int64)System_String__Format(MessageLocalizationKey, v30, 0);
              v31 = this->fields.__4__this;
              if ( v31 )
              {
                v32 = (System_String_o *)Master_object;
                messageLabel = v31->fields.messageLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
                v34 = LocalizationManager__Get(v32, 0);
                Master_object = (__int64)System_String__Format(v34, v27, 0);
                if ( messageLabel )
                {
                  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
                  v35 = this->fields.__4__this;
                  if ( v35 )
                  {
                    skillExplanationTitle = v35->fields.skillExplanationTitle;
                    Master_object = sub_2213B20(string___TypeInfo, 2);
                    v37 = this->fields.imagePartsGroupEntity;
                    if ( v37 )
                    {
                      v38 = Master_object;
                      static_fields = EventInfoSkillGetDialog_TypeInfo->static_fields;
                      id = v37->fields.id;
                      MessageTitleLocalizationKey = static_fields->MessageTitleLocalizationKey;
                      v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
                      Master_object = (__int64)System_String__Format(MessageTitleLocalizationKey, v41, 0);
                      if ( v38 )
                      {
                        if ( !*(_DWORD *)(v38 + 24)
                          || (*(_QWORD *)(v38 + 32) = Master_object,
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v38 + 32),
                                Master_object,
                                v42,
                                v43,
                                v44,
                                v45,
                                v46,
                                v47),
                              (*(_DWORD *)(v38 + 24) & 0xFFFFFFFE) == 0) )
                        {
                          sub_2213CE4(Master_object);
                        }
                        MessageTitleLocalizationKeyDefault = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageTitleLocalizationKeyDefault;
                        *(_QWORD *)(v38 + 40) = MessageTitleLocalizationKeyDefault;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v38 + 40),
                          (int32_t)MessageTitleLocalizationKeyDefault,
                          v48,
                          v49,
                          v50,
                          v51,
                          v52,
                          v53);
                        Master_object = (__int64)LocalizationManager__GetIfExists((System_String_array *)v38, 0);
                        if ( skillExplanationTitle )
                        {
                          UILabel__set_text(skillExplanationTitle, (System_String_o *)Master_object, 0);
                          v55 = this->fields.__4__this;
                          if ( v55 )
                          {
                            Master_object = (__int64)this->fields.imagePartsGroupEntity;
                            if ( Master_object )
                            {
                              skillName = v55->fields.skillName;
                              Master_object = (__int64)ImagePartsGroupEntity__GetSkillName(
                                                         (ImagePartsGroupEntity_o *)Master_object,
                                                         0);
                              if ( skillName )
                              {
                                UILabel__set_text(skillName, (System_String_o *)Master_object, 0);
                                v57 = this->fields.__4__this;
                                if ( v57 )
                                {
                                  Master_object = (__int64)entity;
                                  if ( entity )
                                  {
                                    skillExplanationLabel = v57->fields.skillExplanationLabel;
                                    Master_object = (__int64)SkillLvEntity__getDetail(entity, 0, 0, 0);
                                    if ( skillExplanationLabel )
                                    {
                                      UILabel__set_text(skillExplanationLabel, (System_String_o *)Master_object, 0);
                                      v59 = this->fields.__4__this;
                                      if ( v59 )
                                      {
                                        closeLabel = v59->fields.closeLabel;
                                        Master_object = (__int64)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/,
                                                                   0);
                                        if ( closeLabel )
                                        {
                                          UILabel__set_text(closeLabel, (System_String_o *)Master_object, 0);
                                          _9__1 = this->fields.__9__1;
                                          v62 = (BaseDialog_o *)this->fields.__4__this;
                                          if ( !_9__1 )
                                          {
                                            _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                            System_Action___ctor(
                                              _9__1,
                                              (Il2CppObject *)this,
                                              Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__1__,
                                              0);
                                            this->fields.__9__1 = _9__1;
                                            sub_2213A04(
                                              (MissionNaviTransitionBoardItem_o *)&this->fields.__9__1,
                                              (int32_t)_9__1,
                                              v63,
                                              v64,
                                              v65,
                                              v66,
                                              v67,
                                              v68);
                                          }
                                          if ( v62 )
                                          {
                                            BaseDialog__SafeOpen(v62, _9__1, 0, 0);
                                            Master_object = (__int64)this->fields.__4__this;
                                            if ( Master_object )
                                            {
                                              closeAction = this->fields.closeAction;
                                              *(_QWORD *)(Master_object + 216) = closeAction;
                                              sub_2213A04(
                                                (MissionNaviTransitionBoardItem_o *)(Master_object + 216),
                                                (int32_t)closeAction,
                                                v69,
                                                v70,
                                                v71,
                                                v72,
                                                v73,
                                                v74);
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
                }
              }
            }
          }
        }
      }
LABEL_64:
      sub_2213CDC(Master_object, v5);
    }
    ActionExtensions__Call(this->fields.closeAction, 0);
    Master_object = (__int64)this->fields.__4__this;
    if ( !Master_object )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Master_object,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
}


void EventInfoSkillGetDialog___c__DisplayClass20_0___Open_b__1(
        EventInfoSkillGetDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Threading_CancellationToken_o v3; // x0
  System_Threading_CancellationToken_o v4; // x1
  System_Threading_CancellationToken_o v5; // x2
  Cysharp_Threading_Tasks_UniTask_o Dialog__WaitFadeAndRegisterBackKeyAsync; // 0:x0.16

  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  v3.fields._source = Cysharp_Threading_Tasks_UniTaskCancellationExtensions__GetCancellationTokenOnDestroy(_4__this, 0).fields._source;
  if ( !_4__this )
    sub_2213CDC(v3.fields._source, v4.fields._source);
  Dialog__WaitFadeAndRegisterBackKeyAsync = EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync(
                                              (EventInfoSkillGetDialog_o *)_4__this,
                                              v3,
                                              (const MethodInfo *)v5.fields._source);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(Dialog__WaitFadeAndRegisterBackKeyAsync, 0);
}