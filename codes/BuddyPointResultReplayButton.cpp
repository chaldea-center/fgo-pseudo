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
  struct UISprite_o *v7; // x0
  UnityEngine_Object_o *v8; // x21
  UISprite_o *v9; // x21
  struct UISprite_o *v10; // x0

  if ( (byte_40FB4A7 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spriteName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB4A7 = 1;
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
      v10 = this->fields.bgSprite;
      if ( v10 )
      {
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
          v10,
          v10->klass->vtable._34_get_minWidth.methodPtr);
        return;
      }
    }
    sub_B170D4();
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
  const MethodInfo *v9; // x2
  struct UICommonButton_o *v10; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct UICommonButton_o *v16; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  EventDelegate_o *v18; // x22

  if ( (byte_40FB4A6 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, onClickAction);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FB4A6 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v10 = this->fields.button;
    if ( !v10
      || (onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->fields.onClick) == 0LL
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            onClick,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
          (v16 = this->fields.button) == 0LL)
      || (v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16->fields.onClick,
          v18 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v12, v13, v14, v15),
          EventDelegate___ctor_29412484(v18, onClickAction, 0LL),
          !v17) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v17,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v9);
}