void EventInfoSkillGetDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EventInfoSkillGetDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct EventInfoSkillGetDialog_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4E793D0 & 1) == 0 )
  {
    sub_1D0F0B4(&EventInfoSkillGetDialog_TypeInfo);
    sub_1D0F0B4(&StringLiteral_5682/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/);
    sub_1D0F0B4(&StringLiteral_5683/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/);
    sub_1D0F0B4(&StringLiteral_5681/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/);
    byte_4E793D0 = 1;
  }
  EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey = (struct System_String_o *)StringLiteral_5683/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)EventInfoSkillGetDialog_TypeInfo->static_fields,
    StringLiteral_5683/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5681/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/;
  static_fields = EventInfoSkillGetDialog_TypeInfo->static_fields;
  static_fields->MessageTitleLocalizationKeyDefault = (struct System_String_o *)StringLiteral_5681/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&static_fields->MessageTitleLocalizationKeyDefault,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_5682/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/;
  v16 = EventInfoSkillGetDialog_TypeInfo->static_fields;
  v16->MessageTitleLocalizationKey = (struct System_String_o *)StringLiteral_5682/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v16->MessageTitleLocalizationKey, v15, v17, v18, v19, v20, v21, v22);
}


void EventInfoSkillGetDialog___ctor(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4E793CF & 1) == 0 )
  {
    sub_1D0F0B4(&BaseDialog_TypeInfo);
    byte_4E793CF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  if ( (byte_4E793CC & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    sub_1D0F0B4(&Method_EventInfoSkillGetDialog__OnClickCloseButton_b__22_0__);
    byte_4E793CC = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventInfoSkillGetDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillGetDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  ImagePartsGroupEntity_o *v31; // x0
  __int64 v32; // x8
  System_String_o *imagePartsIconSpriteNameFormat; // x20
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w20
  System_Action_o *v44; // x21
  UnityEngine_Object_o *gameObject; // x19
  int v46; // [xsp+8h] [xbp-38h] BYREF
  int v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E793CA & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__0__);
    sub_1D0F0B4(&EventInfoSkillGetDialog___c__DisplayClass20_0_TypeInfo);
    byte_4E793CA = 1;
  }
  v9 = sub_1D0F300(EventInfoSkillGetDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = eventId;
  *(_QWORD *)(v9 + 48) = imagePartsGroupEntity;
  v18 = v9 + 48;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)imagePartsGroupEntity, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v9 + 56) = closeAction;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 56), (int32_t)closeAction, v25, v26, v27, v28, v29, v30);
  v31 = *(ImagePartsGroupEntity_o **)(v9 + 48);
  if ( v31 )
  {
    SkillId = ImagePartsGroupEntity__GetSkillId(v31, 0);
    v32 = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(v9 + 40) = SkillId;
    if ( v32 )
    {
      imagePartsIconSpriteNameFormat = this->fields.imagePartsIconSpriteNameFormat;
      v47 = *(_DWORD *)(v32 + 24);
      SkillId = j_il2cpp_value_box_0(int_TypeInfo, &v47);
      if ( *(_QWORD *)v18 )
      {
        v34 = (Il2CppObject *)SkillId;
        v46 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
        v36 = System_String__Format_65604080(imagePartsIconSpriteNameFormat, v34, v35, 0);
        *(_QWORD *)(v9 + 32) = v36;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
        v43 = *(_DWORD *)(v9 + 24);
        v44 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(
          v44,
          (Il2CppObject *)v9,
          Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__0__,
          0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI_41966848(v43, v44, 1, 0);
        return;
      }
    }
LABEL_13:
    sub_1D0F30C(SkillId, v11);
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 56), 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_73359484(gameObject, 0);
}


void EventInfoSkillGetDialog__SetBasePanel(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E793CE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4E793CE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1D0F30C(transform, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.basePanel,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
Cysharp_Threading_Tasks_UniTask_o EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync(
        EventInfoSkillGetDialog_o *this,
        System_Threading_CancellationToken_o cancellationToken,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  struct Cysharp_Threading_Tasks_IUniTaskSource_o *v23; // x0
  __int64 v24; // x1
  EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o v25; // [xsp+0h] [xbp-80h] BYREF
  Cysharp_Threading_Tasks_UniTask_o result; // 0:x0.16

  if ( (byte_4E793CB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
    byte_4E793CB = 1;
  }
  memset(&v25, 0, sizeof(v25));
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v25.fields.__t__builder, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v25.fields.__4__this = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v25.fields.__4__this, (int32_t)this, v10, v11, v12, v13, v14, v15);
  v25.fields.cancellationToken = cancellationToken;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v25.fields.cancellationToken, 0, v16, v17, v18, v19, v20, v21);
  v25.fields.__1__state = -1;
  if ( !*((_QWORD *)Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___
        + 7) )
    sub_1CE5198(Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
  EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21__MoveNext(&v25, v22);
  v23 = (struct Cysharp_Threading_Tasks_IUniTaskSource_o *)sub_2B18FE4(&v25.fields.__t__builder, 0);
  *(_QWORD *)&result.fields.token = v24;
  result.fields.source = v23;
  return result;
}


void EventInfoSkillGetDialog___OnClickCloseButton_b__22_0(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4E793D1 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E793D1 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.closeCallback, 0, v3, v4, v5, v6, v7, v8);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_73359484(gameObject, 0);
}


UnityEngine_GameObject_o *EventInfoSkillGetDialog__get_closeBtnObject(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4E793CD & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E793CD = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1D0F30C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21__MoveNext(
        EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *this,
        const MethodInfo *method)
{
  EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *v2; // x19
  struct EventInfoSkillGetDialog_o *_4__this; // x22
  EventInfoSkillGetDialog___c_c *v4; // x8
  System_Func_bool__o *_9__21_0; // x20
  Il2CppObject *v6; // x21
  struct EventInfoSkillGetDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Threading_CancellationTokenSource_o *source; // x21
  System_Threading_CancellationToken_o v15; // x2
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Cysharp_Threading_Tasks_IUniTaskSource_c *klass; // x8
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Cysharp_Threading_Tasks_IUniTaskSource_c *v32; // x8
  __int64 v33; // x9
  Cysharp_Threading_Tasks_IUniTaskSource_c **v34; // x10
  __int64 v35; // x0
  UnityEngine_Object_o *closeButton; // x20
  __int64 v37; // x1
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *runnerPromise; // x19
  Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c *v41; // x8
  __int64 v42; // x9
  Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **v43; // x10
  __int64 v44; // x0
  struct Cysharp_Threading_Tasks_UniTask_Awaiter_o u__1; // [xsp+0h] [xbp-50h] BYREF
  Cysharp_Threading_Tasks_UniTask_o v46; // [xsp+10h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4E793D5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTask_Awaiter__EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
    sub_1D0F0B4(&System_Func_bool__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_EventInfoSkillGetDialog___c__WaitFadeAndRegisterBackKeyAsync_b__21_0__);
    sub_1D0F0B4(&EventInfoSkillGetDialog___c_TypeInfo);
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)sub_1D0F0B4(&Cysharp_Threading_Tasks_UniTask_TypeInfo);
    byte_4E793D5 = 1;
  }
  u__1 = (struct Cysharp_Threading_Tasks_UniTask_Awaiter_o)0LL;
  _4__this = v2->fields.__4__this;
  if ( v2->fields.__1__state )
  {
    v4 = EventInfoSkillGetDialog___c_TypeInfo;
    if ( !EventInfoSkillGetDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog___c_TypeInfo);
      v4 = EventInfoSkillGetDialog___c_TypeInfo;
    }
    _9__21_0 = v4->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = EventInfoSkillGetDialog___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__21_0 = (System_Func_bool__o *)sub_1D0F300(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__21_0,
        v6,
        Method_EventInfoSkillGetDialog___c__WaitFadeAndRegisterBackKeyAsync_b__21_0__,
        0);
      static_fields = EventInfoSkillGetDialog___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = _9__21_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0,
        (int32_t)_9__21_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    source = v2->fields.cancellationToken.fields._source;
    if ( !Cysharp_Threading_Tasks_UniTask_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Cysharp_Threading_Tasks_UniTask_TypeInfo);
    v15.fields._source = source;
    v46 = Cysharp_Threading_Tasks_UniTask__WaitWhile(_9__21_0, 8, v15, 0, 0);
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v46, 0, v16, v17, v18, v19, v20, v21);
    u__1 = (struct Cysharp_Threading_Tasks_UniTask_Awaiter_o)v46;
    if ( !byte_4E78DFB )
    {
      sub_1D0F0B4(&Cysharp_Threading_Tasks_UniTask_TypeInfo);
      byte_4E78DFB = 1;
    }
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)Cysharp_Threading_Tasks_UniTask_TypeInfo;
    if ( !Cysharp_Threading_Tasks_UniTask_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Cysharp_Threading_Tasks_UniTask_TypeInfo);
    if ( !byte_4E78DFC )
    {
      this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)sub_1D0F0B4(&Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo);
      byte_4E78DFC = 1;
    }
    if ( u__1.fields.task.fields.source )
    {
      klass = u__1.fields.task.fields.source->klass;
      v23 = *(unsigned __int16 *)&u__1.fields.task.fields.source->klass->_2.rank;
      if ( *(_WORD *)&u__1.fields.task.fields.source->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((Cysharp_Threading_Tasks_IUniTaskSource_c **)p_offset - 1) != Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_23;
        }
        v25 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_23:
        v25 = sub_1CE5430(u__1.fields.task.fields.source, Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo, 0);
      }
      this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)(*(__int64 (__fastcall **)(struct Cysharp_Threading_Tasks_IUniTaskSource_o *, _QWORD, _QWORD))v25)(
                                                                                   u__1.fields.task.fields.source,
                                                                                   (unsigned __int16)u__1.fields.task.fields.token,
                                                                                   *(_QWORD *)(v25 + 8));
      if ( !(_DWORD)this )
      {
        v2->fields.__1__state = 0;
        v2->fields.__u__1 = u__1;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields.__u__1, 0, v26, v27, v28, v29, v30, v31);
        sub_2BC8638(
          &v2->fields.__t__builder,
          &u__1,
          v2,
          Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTask_Awaiter__EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21___);
        return;
      }
    }
  }
  else
  {
    u__1 = v2->fields.__u__1;
    v2->fields.__u__1.fields.task.fields.source = 0;
    *(_QWORD *)&v2->fields.__u__1.fields.task.fields.token = 0;
    v2->fields.__1__state = -1;
  }
  if ( !byte_4E78DFD )
  {
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)sub_1D0F0B4(&Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo);
    byte_4E78DFD = 1;
  }
  if ( u__1.fields.task.fields.source )
  {
    v32 = u__1.fields.task.fields.source->klass;
    v33 = *(unsigned __int16 *)&u__1.fields.task.fields.source->klass->_2.rank;
    if ( *(_WORD *)&u__1.fields.task.fields.source->klass->_2.rank )
    {
      v34 = (Cysharp_Threading_Tasks_IUniTaskSource_c **)&v32->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_34;
      }
      v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 2];
    }
    else
    {
LABEL_34:
      v35 = sub_1CE5430(u__1.fields.task.fields.source, Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo, 2);
    }
    this = (EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync_d__21_o *)(*(__int64 (__fastcall **)(struct Cysharp_Threading_Tasks_IUniTaskSource_o *, _QWORD, _QWORD))v35)(
                                                                                 u__1.fields.task.fields.source,
                                                                                 (unsigned __int16)u__1.fields.task.fields.token,
                                                                                 *(_QWORD *)(v35 + 8));
  }
  if ( !_4__this )
    sub_1D0F30C(this, method);
  closeButton = (UnityEngine_Object_o *)_4__this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeButton, 0, 0) )
  {
    v38 = (UnityEngine_Component_o *)_4__this->fields.closeButton;
    if ( !v38 )
      sub_1D0F30C(0, v37);
    gameObject = UnityEngine_Component__get_gameObject(v38, 0);
    AndroidBackKeyManager__AddBackBtn(gameObject, 0);
  }
  v2->fields.__1__state = -2;
  if ( !byte_4E78DFF )
  {
    sub_1D0F0B4(&Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo);
    byte_4E78DFF = 1;
  }
  runnerPromise = v2->fields.__t__builder.fields.runnerPromise;
  if ( runnerPromise )
  {
    v41 = runnerPromise->klass;
    v42 = *(unsigned __int16 *)&runnerPromise->klass->_2.rank;
    if ( *(_WORD *)&runnerPromise->klass->_2.rank )
    {
      v43 = (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)&v41->_1.interfaceOffsets->offset;
      while ( *(v43 - 1) != Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo )
      {
        --v42;
        v43 += 2;
        if ( !v42 )
          goto LABEL_50;
      }
      v44 = (__int64)&v41->vtable[*(_DWORD *)v43 + 2];
    }
    else
    {
LABEL_50:
      v44 = sub_1CE5430(runnerPromise, Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *, _QWORD))v44)(
      runnerPromise,
      *(_QWORD *)(v44 + 8));
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E793D2 & 1) == 0 )
  {
    sub_1D0F0B4(&EventInfoSkillGetDialog___c_TypeInfo);
    byte_4E793D2 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(EventInfoSkillGetDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSkillGetDialog___c_TypeInfo->static_fields->__9 = (struct EventInfoSkillGetDialog___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)EventInfoSkillGetDialog___c_TypeInfo->static_fields,
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
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1

  if ( (byte_4E793D3 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E793D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v3 )
    sub_1D0F30C(0, v4);
  return CommonUI__maskFadeIsBusy((CommonUI_o *)v3, 0);
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
  int32_t eventId; // w22
  UISprite_o *imagePartsIconSprite; // x20
  System_String_o *spriteName; // x21
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
  SkillLvMaster_o *v22; // x20
  int32_t v23; // w21
  struct ImagePartsGroupEntity_o *imagePartsGroupEntity; // x8
  Il2CppObject *v25; // x20
  struct ImagePartsGroupEntity_o *v26; // x8
  System_String_o *MessageLocalizationKey; // x21
  Il2CppObject *v28; // x0
  struct EventInfoSkillGetDialog_o *v29; // x8
  System_String_o *v30; // x22
  UILabel_o *messageLabel; // x21
  System_String_o *v32; // x0
  struct EventInfoSkillGetDialog_o *v33; // x8
  UILabel_o *skillExplanationTitle; // x20
  struct ImagePartsGroupEntity_o *v35; // x8
  __int64 v36; // x21
  System_String_o *MessageTitleLocalizationKey; // x22
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_String_o *MessageTitleLocalizationKeyDefault; // x1
  struct EventInfoSkillGetDialog_o *v52; // x8
  UILabel_o *skillName; // x20
  struct EventInfoSkillGetDialog_o *v54; // x8
  UILabel_o *skillExplanationLabel; // x20
  struct EventInfoSkillGetDialog_o *v56; // x8
  UILabel_o *closeLabel; // x20
  System_Action_o *_9__1; // x21
  BaseDialog_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct System_Action_o *closeAction; // x1
  UnityEngine_Object_o *gameObject; // x19
  int32_t id; // [xsp+8h] [xbp-48h] BYREF
  int32_t condId; // [xsp+Ch] [xbp-44h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E793D4 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&EventInfoSkillGetDialog_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__1__);
    sub_1D0F0B4(&StringLiteral_3724/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4E793D4 = 1;
  }
  entity = 0;
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Equality(_4__this, 0, 0);
  if ( (Master_object & 1) == 0 )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_63;
    eventId = this->fields.eventId;
    imagePartsIconSprite = v6->fields.imagePartsIconSprite;
    spriteName = this->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = AtlasManager__SetEventUI_41967144(eventId, imagePartsIconSprite, spriteName, 0);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_63;
    v11 = Master_object;
    if ( (Master_object & 1) != 0 )
    {
      imagePartsSkillIcon = v10->fields.imagePartsSkillIcon;
      skillId = this->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = AtlasManager__SetSkillIcon(imagePartsSkillIcon, skillId, 0);
      v14 = this->fields.__4__this;
      if ( !v14 )
        goto LABEL_63;
      Master_object = AtlasManager__SetEventUI_41967144(
                        this->fields.eventId,
                        v14->fields.imagePartsSkillIconBg,
                        v14->fields.imagePartsSkillIconBgName,
                        0);
      v15 = this->fields.__4__this;
      if ( !v15 )
        goto LABEL_63;
      imagePartsSkillIconObject = v15->fields.imagePartsSkillIconObject;
      v17 = 1;
    }
    else
    {
      skillIcon = v10->fields.skillIcon;
      v19 = this->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = AtlasManager__SetSkillIcon(skillIcon, v19, 0);
      v20 = this->fields.__4__this;
      if ( !v20 )
        goto LABEL_63;
      imagePartsSkillIconObject = v20->fields.imagePartsSkillIconObject;
      v17 = 0;
    }
    GameObjectHelper__SetActiveSafely(imagePartsSkillIconObject, v17, 0);
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_63;
    GameObjectHelper__SetActiveSafely(v21->fields.skillIconObject, (v11 & 1) == 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !this->fields.imagePartsGroupEntity )
      goto LABEL_63;
    v22 = (SkillLvMaster_o *)Master_object;
    Master_object = ImagePartsGroupEntity__GetSkillId(this->fields.imagePartsGroupEntity, 0);
    if ( !this->fields.imagePartsGroupEntity )
      goto LABEL_63;
    v23 = Master_object;
    Master_object = ImagePartsGroupEntity__GetSkillLv(this->fields.imagePartsGroupEntity, 0);
    if ( !v22 )
      goto LABEL_63;
    if ( SkillLvMaster__TryGetEntity(v22, &entity, v23, Master_object, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestMaster___);
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
            v25 = (Il2CppObject *)Master_object;
            if ( !EventInfoSkillGetDialog_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog_TypeInfo);
            v26 = this->fields.imagePartsGroupEntity;
            if ( v26 )
            {
              MessageLocalizationKey = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey;
              condId = v26->fields.condId;
              v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId);
              Master_object = (__int64)System_String__Format(MessageLocalizationKey, v28, 0);
              v29 = this->fields.__4__this;
              if ( v29 )
              {
                v30 = (System_String_o *)Master_object;
                messageLabel = v29->fields.messageLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v32 = LocalizationManager__Get(v30, 0);
                Master_object = (__int64)System_String__Format(v32, v25, 0);
                if ( messageLabel )
                {
                  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
                  v33 = this->fields.__4__this;
                  if ( v33 )
                  {
                    skillExplanationTitle = v33->fields.skillExplanationTitle;
                    Master_object = sub_1D0F15C(string___TypeInfo, 2);
                    v35 = this->fields.imagePartsGroupEntity;
                    if ( v35 )
                    {
                      v36 = Master_object;
                      MessageTitleLocalizationKey = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageTitleLocalizationKey;
                      id = v35->fields.id;
                      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
                      Master_object = (__int64)System_String__Format(MessageTitleLocalizationKey, v38, 0);
                      if ( v36 )
                      {
                        if ( !*(_DWORD *)(v36 + 24)
                          || (*(_QWORD *)(v36 + 32) = Master_object,
                              sub_1D0F058(
                                (GrandQuestFolderBoardItem_o *)(v36 + 32),
                                Master_object,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43,
                                v44),
                              *(_DWORD *)(v36 + 24) <= 1u) )
                        {
                          sub_1D0F314(Master_object);
                        }
                        MessageTitleLocalizationKeyDefault = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageTitleLocalizationKeyDefault;
                        *(_QWORD *)(v36 + 40) = MessageTitleLocalizationKeyDefault;
                        sub_1D0F058(
                          (GrandQuestFolderBoardItem_o *)(v36 + 40),
                          (int32_t)MessageTitleLocalizationKeyDefault,
                          v45,
                          v46,
                          v47,
                          v48,
                          v49,
                          v50);
                        Master_object = (__int64)LocalizationManager__GetIfExists((System_String_array *)v36, 0);
                        if ( skillExplanationTitle )
                        {
                          UILabel__set_text(skillExplanationTitle, (System_String_o *)Master_object, 0);
                          v52 = this->fields.__4__this;
                          if ( v52 )
                          {
                            Master_object = (__int64)this->fields.imagePartsGroupEntity;
                            if ( Master_object )
                            {
                              skillName = v52->fields.skillName;
                              Master_object = (__int64)ImagePartsGroupEntity__GetSkillName(
                                                         (ImagePartsGroupEntity_o *)Master_object,
                                                         0);
                              if ( skillName )
                              {
                                UILabel__set_text(skillName, (System_String_o *)Master_object, 0);
                                v54 = this->fields.__4__this;
                                if ( v54 )
                                {
                                  Master_object = (__int64)entity;
                                  if ( entity )
                                  {
                                    skillExplanationLabel = v54->fields.skillExplanationLabel;
                                    Master_object = (__int64)SkillLvEntity__getDetail(entity, 0, 0, 0);
                                    if ( skillExplanationLabel )
                                    {
                                      UILabel__set_text(skillExplanationLabel, (System_String_o *)Master_object, 0);
                                      v56 = this->fields.__4__this;
                                      if ( v56 )
                                      {
                                        closeLabel = v56->fields.closeLabel;
                                        Master_object = (__int64)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3724/*"COMMON_CONFIRM_CLOSE"*/,
                                                                   0);
                                        if ( closeLabel )
                                        {
                                          UILabel__set_text(closeLabel, (System_String_o *)Master_object, 0);
                                          _9__1 = this->fields.__9__1;
                                          v59 = (BaseDialog_o *)this->fields.__4__this;
                                          if ( !_9__1 )
                                          {
                                            _9__1 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                                            System_Action___ctor(
                                              _9__1,
                                              (Il2CppObject *)this,
                                              Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__1__,
                                              0);
                                            this->fields.__9__1 = _9__1;
                                            sub_1D0F058(
                                              (GrandQuestFolderBoardItem_o *)&this->fields.__9__1,
                                              (int32_t)_9__1,
                                              v60,
                                              v61,
                                              v62,
                                              v63,
                                              v64,
                                              v65);
                                          }
                                          if ( v59 )
                                          {
                                            BaseDialog__SafeOpen(v59, _9__1, 0, 0);
                                            Master_object = (__int64)this->fields.__4__this;
                                            if ( Master_object )
                                            {
                                              closeAction = this->fields.closeAction;
                                              *(_QWORD *)(Master_object + 216) = closeAction;
                                              sub_1D0F058(
                                                (GrandQuestFolderBoardItem_o *)(Master_object + 216),
                                                (int32_t)closeAction,
                                                v66,
                                                v67,
                                                v68,
                                                v69,
                                                v70,
                                                v71);
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
LABEL_63:
      sub_1D0F30C(Master_object, v5);
    }
    ActionExtensions__Call(this->fields.closeAction, 0);
    Master_object = (__int64)this->fields.__4__this;
    if ( !Master_object )
      goto LABEL_63;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Master_object,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(gameObject, 0);
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
  System_Threading_CancellationToken_o v6; // x1
  Cysharp_Threading_Tasks_UniTask_o Dialog__WaitFadeAndRegisterBackKeyAsync; // 0:x0.16

  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  v3.fields._source = Cysharp_Threading_Tasks_UniTaskCancellationExtensions__GetCancellationTokenOnDestroy(_4__this, 0).fields._source;
  if ( !_4__this )
    sub_1D0F30C(v3.fields._source, v4.fields._source);
  v6.fields._source = v3.fields._source;
  Dialog__WaitFadeAndRegisterBackKeyAsync = EventInfoSkillGetDialog__WaitFadeAndRegisterBackKeyAsync(
                                              (EventInfoSkillGetDialog_o *)_4__this,
                                              v6,
                                              (const MethodInfo *)v5.fields._source);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(Dialog__WaitFadeAndRegisterBackKeyAsync, 0);
}