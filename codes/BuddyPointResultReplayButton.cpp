void __fastcall BuddyPointResultReplayButton___ctor(BuddyPointResultReplayButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BuddyPointResultReplayButton__SetBgSprite(
        BuddyPointResultReplayButton_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  UnityEngine_Object_o *v8; // x21
  UISprite_o *v9; // x21

  if ( (byte_42B17EE & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B17EE = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
  {
    v7 = this->fields.bgSprite;
    if ( v7 )
    {
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._26_get_mainTexture.method)(
                                     v7,
                                     v7->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) || System_String__IsNullOrEmpty(spriteName, 0LL) )
        return;
      v9 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v9, spriteName, 0LL);
      v7 = this->fields.bgSprite;
      if ( v7 )
      {
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
          v7,
          v7->klass->vtable._34_get_minWidth.methodPtr);
        return;
      }
    }
    sub_B52A5C(v7, v6);
  }
}


void __fastcall BuddyPointResultReplayButton__Setup(
        BuddyPointResultReplayButton_o *this,
        EventDelegate_Callback_o *onClickAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UICommonButton_o *v9; // x8
  struct UICommonButton_o *v10; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  EventDelegate_o *v12; // x22

  if ( (byte_42B17ED & 1) == 0 )
  {
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B17ED = 1;
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
    v9 = this->fields.button;
    if ( !v9
      || (onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v9->fields.onClick) == 0LL
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            onClick,
            (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
          (v10 = this->fields.button) == 0LL)
      || (v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10->fields.onClick,
          v12 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo),
          EventDelegate___ctor_29649660(v12, onClickAction, 0LL),
          !v11) )
    {
      sub_B52A5C(onClick, v7);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v8);
}