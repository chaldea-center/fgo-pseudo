void __fastcall BuddyPointResultReplayButton___ctor(BuddyPointResultReplayButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BuddyPointResultReplayButton__SetBgSprite(
        BuddyPointResultReplayButton_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0
  UnityEngine_Object_o *v9; // x21
  UISprite_o *v10; // x21

  if ( (byte_4189717 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, spriteName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189717 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
  {
    v8 = this->fields.bgSprite;
    if ( v8 )
    {
      v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._26_get_mainTexture.method)(
                                     v8,
                                     v8->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) || System_String__IsNullOrEmpty(spriteName, 0LL) )
        return;
      v10 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v10, spriteName, 0LL);
      v8 = this->fields.bgSprite;
      if ( v8 )
      {
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
          v8,
          v8->klass->vtable._34_get_minWidth.methodPtr);
        return;
      }
    }
    sub_B2C434(v8, v7);
  }
}


void __fastcall BuddyPointResultReplayButton__Setup(
        BuddyPointResultReplayButton_o *this,
        EventDelegate_Callback_o *onClickAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *button; // x21
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct UICommonButton_o *v12; // x8
  struct UICommonButton_o *v13; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  EventDelegate_o *v15; // x22

  if ( (byte_4189716 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, onClickAction);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4189716 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Inequality(
                                                                         button,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)onClick & 1) != 0 )
  {
    v12 = this->fields.button;
    if ( !v12
      || (onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12->fields.onClick) == 0LL
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            onClick,
            (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
          (v13 = this->fields.button) == 0LL)
      || (v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13->fields.onClick,
          v15 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo),
          EventDelegate___ctor_29723424(v15, onClickAction, 0LL),
          !v14) )
    {
      sub_B2C434(onClick, v10);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v11);
}