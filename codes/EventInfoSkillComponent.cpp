void __fastcall EventInfoSkillComponent___ctor(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoSkillComponent__Awake(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoSkillComponent__CreateEventInfoSkillDialog(
        EventInfoSkillComponent_o *this,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventInfoSkillDialogPrefab; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4BDDBD8 & 1) == 0 )
  {
    sub_1C21E38(&Method_GameObjectHelper_Instantiate_EventInfoSkillDialog___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDDBD8 = 1;
  }
  eventInfoSkillDialogPrefab = this->fields.eventInfoSkillDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v7);
  v8 = GameObjectHelper__Instantiate_object_(
         eventInfoSkillDialogPrefab,
         (UnityEngine_Transform_o *)Instance[8].monitor,
         0,
         (const MethodInfo_3002158 *)Method_GameObjectHelper_Instantiate_EventInfoSkillDialog___);
  if ( v8 )
    EventInfoSkillDialog__Open((EventInfoSkillDialog_o *)v8, this->fields.imagePartsGroupId, onClosed, v9);
}


bool __fastcall EventInfoSkillComponent__IsBusy(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void __fastcall EventInfoSkillComponent__OnClick(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  EventInfoSkillComponent_o *v3; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4BDDBD7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoSkillComponent_OnClick__);
    sub_1C21E38(&Method_EventInfoSkillComponent__OnClick_b__5_0__);
    byte_4BDDBD7 = 1;
  }
  v3 = (EventInfoSkillComponent_o *)((__int64 (__fastcall *)(EventInfoSkillComponent_o *, Il2CppMethodPointer))this->klass->vtable._17_IsBusy.method)(
                                      this,
                                      this->klass->vtable._18_IsDisplaying.methodPtr);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    this->fields.isBusy = 1;
    EventInfoSkillComponent__SetTerminalTouchEnable(v3, 0, v4);
    v5 = Method_EventInfoSkillComponent_OnClick__;
    if ( (*((_BYTE *)Method_EventInfoSkillComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_EventInfoSkillComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoSkillComponent__OnClick_b__5_0__, 0LL);
    EventInfoSkillComponent__CreateEventInfoSkillDialog(this, v7, v8);
  }
}


void __fastcall EventInfoSkillComponent__SetTerminalTouchEnable(
        EventInfoSkillComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *v7; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4BDDBD9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDDBD9 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.mEventBgTexture->klass;
    if ( !klass || (v7 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1C22094(v7, v6);
    TitleInfoControl__SetTouchEnable(v7, enable, 0LL);
  }
}


void __fastcall EventInfoSkillComponent___OnClick_b__5_0(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.isBusy = 0;
  EventInfoSkillComponent__SetTerminalTouchEnable(this, 1, v2);
}