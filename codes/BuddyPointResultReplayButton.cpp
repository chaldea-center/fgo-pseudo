void __fastcall BuddyPointResultReplayButton___ctor(BuddyPointResultReplayButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BuddyPointResultReplayButton__SetBgSprite(
        BuddyPointResultReplayButton_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v10; // x1
  struct UISprite_o *v11; // x0
  UnityEngine_Object_o *v12; // x21
  UISprite_o *v13; // x21

  if ( (byte_42EA5D0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spriteName, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EA5D0 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
  {
    v11 = this->fields.bgSprite;
    if ( v11 )
    {
      v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v11->klass->vtable._26_get_mainTexture.method)(
                                      v11,
                                      v11->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) || System_String__IsNullOrEmpty(spriteName, 0LL) )
        return;
      v13 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v13, spriteName, 0LL);
      v11 = this->fields.bgSprite;
      if ( v11 )
      {
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v11->klass->vtable._33_MakePixelPerfect.method)(
          v11,
          v11->klass->vtable._34_get_minWidth.methodPtr);
        return;
      }
    }
    sub_B5D69C(v11, v10);
  }
}


void __fastcall BuddyPointResultReplayButton__Setup(
        BuddyPointResultReplayButton_o *this,
        EventDelegate_Callback_o *onClickAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *button; // x21
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct UICommonButton_o *v19; // x8
  struct UICommonButton_o *v20; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  EventDelegate_o *v22; // x22

  if ( (byte_42EA5CF & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)onClickAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EA5CF = 1;
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
    v19 = this->fields.button;
    if ( !v19
      || (onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v19->fields.onClick) == 0LL
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            onClick,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
          (v20 = this->fields.button) == 0LL)
      || (v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20->fields.onClick,
          v22 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo),
          EventDelegate___ctor_29822308(v22, onClickAction, 0LL),
          !v21) )
    {
      sub_B5D69C(onClick, v17);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v21,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v18);
}