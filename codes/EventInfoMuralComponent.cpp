void EventInfoMuralComponent___ctor(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5971D05 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18398/*"btn_wallpainting"*/);
    byte_5971D05 = 1;
  }
  v9 = StringLiteral_18398/*"btn_wallpainting"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_18398/*"btn_wallpainting"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.buttonSpriteName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoMuralComponent__CheckAssertions(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoMuralComponent__InitDisplay(
        EventInfoMuralComponent_o *this,
        int32_t eventId,
        EventInfoCircleProgressControl_o *eventInfoCircleProgressControl,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  DataManager_c *v16; // x0
  int v17; // w8
  EventMuralMaster_o *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x20
  UILabel_o *currentNumLabel; // x20
  UILabel_o *totalNumLabel; // x20
  int32_t total[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971D01 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMuralMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D01 = 1;
  }
  *(_QWORD *)total = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)eventInfoCircleProgressControl, 0, 0) )
  {
    this->fields.eventInfoCircleProgressControl = eventInfoCircleProgressControl;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventInfoCircleProgressControl,
      (int32_t)eventInfoCircleProgressControl,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = (UnityEngine_Object_o *)this->fields.eventInfoCircleProgressControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality(v14, 0, 0) || this->fields.isNotCircleProgress )
  {
    v16 = DataManager_TypeInfo;
    v17 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
    this->fields.isEnableClick = 0;
    this->fields.eventId = eventId;
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(v16, v15);
    Master_object = (EventMuralMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMuralMaster___);
    if ( Master_object )
    {
      EventMuralMaster__GetOpenedEntitiesFromEventId(Master_object, eventId, &total[1], total, 0);
      v21 = (UnityEngine_Object_o *)this->fields.eventInfoCircleProgressControl;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality(v21, 0, 0) && !this->fields.isNotCircleProgress )
      {
        Master_object = (EventMuralMaster_o *)this->fields.eventInfoCircleProgressControl;
        if ( !Master_object )
          goto LABEL_24;
        EventInfoCircleProgressControl__SetSprite(
          (EventInfoCircleProgressControl_o *)Master_object,
          this->fields.buttonSprite,
          this->fields.buttonSpriteName,
          0);
      }
      currentNumLabel = this->fields.currentNumLabel;
      Master_object = (EventMuralMaster_o *)System_Int32__ToString((int32_t)&total[1], 0);
      if ( currentNumLabel )
      {
        UILabel__set_text(currentNumLabel, (System_String_o *)Master_object, 0);
        totalNumLabel = this->fields.totalNumLabel;
        Master_object = (EventMuralMaster_o *)System_Int32__ToString((int32_t)total, 0);
        if ( totalNumLabel )
        {
          UILabel__set_text(totalNumLabel, (System_String_o *)Master_object, 0);
          this->fields.isEnableClick = 1;
          return;
        }
      }
    }
LABEL_24:
    sub_2213CDC(Master_object, v19);
  }
}


void EventInfoMuralComponent__Initialization(
        EventInfoMuralComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventUiEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoMuralComponent__LoadEventMuralUpdate(
        EventInfoMuralComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  AvalonSceneManager_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  TerminalSceneComponent_c *v21; // x0
  UnityEngine_Object_o *mInstance; // x22
  Il2CppClass *klass; // x8
  UnityEngine_Object_o *v24; // x22
  const MethodInfo *v25; // x2
  System_Action_o *v26; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v35; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21

  if ( (byte_5971D03 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__0__);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__1__);
    sub_2213A60(&EventInfoMuralComponent___c__DisplayClass15_0_TypeInfo);
    byte_5971D03 = 1;
  }
  v5 = sub_2213CCC(EventInfoMuralComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v21 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v21->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v6 = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
      v6 = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v6[1].fields.sendData->klass;
    if ( klass )
    {
      v24 = *(UnityEngine_Object_o **)&klass->_2.element_size;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
        goto LABEL_23;
      v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v5,
        Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__0__,
        0);
      *(_QWORD *)(v5 + 32) = v26;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v33);
        v35 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
      v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)v5,
        Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v37, 0);
        return;
      }
    }
LABEL_31:
    sub_2213CDC(v6, v7);
  }
LABEL_23:
  v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v6 )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(v6, 72, 0) )
    EventInfoMuralComponent__LoadEventMuralUpdateByEventRewardScene(this, *(System_Action_o **)(v5 + 16), v25);
}


void EventInfoMuralComponent__LoadEventMuralUpdateByEventRewardScene(
        EventInfoMuralComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  AvalonSceneManager_c *v29; // x8
  CommonUI_o *v30; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_5971D04 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__0__);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__1__);
    sub_2213A60(&EventInfoMuralComponent___c__DisplayClass16_0_TypeInfo);
    byte_5971D04 = 1;
  }
  v5 = sub_2213CCC(EventInfoMuralComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__0__,
    0);
  *(_QWORD *)(v5 + 32) = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  v30 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v28);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__1__,
    0);
  if ( !v30 )
LABEL_8:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v30, 1, DEFAULT_FADE_TIME, v32, 0);
}


void EventInfoMuralComponent__OnClickButton(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ScrTerminalMap_o *v10; // x0
  UnityEngine_GameObject_c *klass; // x8
  EventInfoMuralComponent___c_c *v12; // x0
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__14_0; // x20
  Il2CppObject *v15; // x21
  struct EventInfoMuralComponent___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5971D02 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoMuralComponent_OnClickButton__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_EventInfoMuralComponent___c__OnClickButton_b__14_0__);
    sub_2213A60(&EventInfoMuralComponent___c_TypeInfo);
    byte_5971D02 = 1;
  }
  if ( this->fields.isEnableClick )
  {
    v3 = Method_EventInfoMuralComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoMuralComponent_OnClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoMuralComponent_OnClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
        v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = v10->fields.subRootGimmickP->klass;
      if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
        sub_2213CDC(v10, v8);
      ScrTerminalMap__SetMapCameraTouchEnable(v10, 0, 0);
    }
    v12 = EventInfoMuralComponent___c_TypeInfo;
    if ( !*(&EventInfoMuralComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoMuralComponent___c_TypeInfo, v8);
      v12 = EventInfoMuralComponent___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__14_0 = static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, v8);
        static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__14_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__14_0, v15, Method_EventInfoMuralComponent___c__OnClickButton_b__14_0__, 0);
      v16 = EventInfoMuralComponent___c_TypeInfo->static_fields;
      v16->__9__14_0 = _9__14_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__14_0, (int32_t)_9__14_0, v17, v18, v19, v20, v21, v22);
    }
    EventInfoMuralComponent__LoadEventMuralUpdate(this, _9__14_0, v9);
  }
}


void EventInfoMuralComponent__Redisplay(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoMuralComponent__InitDisplay(this, eventUiEntity->fields.eventId, 0, v2);
}


void EventInfoMuralComponent__Setup(
        EventInfoMuralComponent_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  ((void (__fastcall *)(EventInfoMuralComponent_o *, const MethodInfo *))this->klass->vtable._10_Redisplay.methodPtr)(
    this,
    this->klass->vtable._10_Redisplay.method);
}


void EventInfoMuralComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971D06 & 1) == 0 )
  {
    sub_2213A60(&EventInfoMuralComponent___c_TypeInfo);
    byte_5971D06 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoMuralComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoMuralComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoMuralComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoMuralComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoMuralComponent___c___ctor(EventInfoMuralComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoMuralComponent___c___OnClickButton_b__14_0(EventInfoMuralComponent___c_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v4; // x1
  ScrTerminalMap_o *v5; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_5971D07 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5971D07 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v5 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4);
      v5 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v5->fields.subRootGimmickP->klass;
    if ( !klass || (v5 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
      sub_2213CDC(v5, v4);
    ScrTerminalMap__SetMapCameraTouchEnable(v5, 1, 0);
  }
}


void EventInfoMuralComponent___c__DisplayClass15_0___ctor(
        EventInfoMuralComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoMuralComponent___c__DisplayClass15_0___LoadEventMuralUpdate_b__0(
        EventInfoMuralComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__2; // x22
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971D08 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__2__);
    byte_5971D08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  _9__2 = this->fields.__9__2;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__2, 0);
}


void EventInfoMuralComponent___c__DisplayClass15_0___LoadEventMuralUpdate_b__1(
        EventInfoMuralComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct EventInfoMuralComponent_o *_4__this; // x9
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t eventId; // w21
  System_Action_o *_9__3; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971D09 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__3__);
    byte_5971D09 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_15;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  mTerminalList = mInstance->fields.mTerminalList;
  eventId = _4__this->fields.eventId;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass15_0__LoadEventMuralUpdate_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !mTerminalList )
LABEL_15:
    sub_2213CDC(v3, method);
  ScrTerminalListTop__StartEventMuralUpdateNoAnim(mTerminalList, eventId, _9__3, 0);
}


void EventInfoMuralComponent___c__DisplayClass15_0___LoadEventMuralUpdate_b__2(
        EventInfoMuralComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoMuralComponent___c__DisplayClass15_0___LoadEventMuralUpdate_b__3(
        EventInfoMuralComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endAction; // x8

  endAction = this->fields.endAction;
  if ( !endAction )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl)(
    endAction->fields.method_code,
    endAction->fields.method);
}


void EventInfoMuralComponent___c__DisplayClass16_0___ctor(
        EventInfoMuralComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoMuralComponent___c__DisplayClass16_0___LoadEventMuralUpdateByEventRewardScene_b__0(
        EventInfoMuralComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__2; // x22
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971D0A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__2__);
    byte_5971D0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  _9__2 = this->fields.__9__2;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__2, 0);
}


void EventInfoMuralComponent___c__DisplayClass16_0___LoadEventMuralUpdateByEventRewardScene_b__1(
        EventInfoMuralComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventRewardRootComponent_c *v4; // x1
  __int64 v5; // x2
  struct EventInfoMuralComponent_o *_4__this; // x8
  System_Action_o *_9__3; // x22
  EventRewardRootComponent_o *klass; // x20
  int32_t eventId; // w21
  __int64 v10; // x9
  __int64 naturalAligment; // x9
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  EventInfoMuralComponent___c__DisplayClass16_0_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_5971D0B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__3__);
    byte_5971D0B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _9__3 = this->fields.__9__3;
  klass = (EventRewardRootComponent_o *)Instance[2].klass;
  eventId = _4__this->fields.eventId;
  v4 = EventRewardRootComponent_TypeInfo;
  if ( !_9__3 )
  {
    if ( klass )
    {
      naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
      if ( klass->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventRewardRootComponent_c *)klass->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
      {
        goto LABEL_16;
      }
    }
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass16_0__LoadEventMuralUpdateByEventRewardScene_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v12, v13, v14, v15, v16, v17);
    if ( klass )
    {
LABEL_14:
      EventRewardRootComponent__StartEventMuralUpdateNoAnim(klass, eventId, _9__3, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(Instance, v4);
  }
  if ( !klass )
    goto LABEL_15;
  v10 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( klass->klass->_2.naturalAligment >= (unsigned int)v10
    && (EventRewardRootComponent_c *)klass->klass->_2.typeHierarchy[v10 - 1] == EventRewardRootComponent_TypeInfo )
  {
    goto LABEL_14;
  }
LABEL_16:
  sub_221405C(Instance[2].klass, EventRewardRootComponent_TypeInfo, v5);
  EventInfoMuralComponent___c__DisplayClass16_0___LoadEventMuralUpdateByEventRewardScene_b__3(v18, v19);
}


void EventInfoMuralComponent___c__DisplayClass16_0___LoadEventMuralUpdateByEventRewardScene_b__2(
        EventInfoMuralComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoMuralComponent___c__DisplayClass16_0___LoadEventMuralUpdateByEventRewardScene_b__3(
        EventInfoMuralComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endAction; // x8

  endAction = this->fields.endAction;
  if ( !endAction )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl)(
    endAction->fields.method_code,
    endAction->fields.method);
}