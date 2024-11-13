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
  __int64 v6; // x2
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v8; // x1
  struct UISprite_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  UISprite_o *v13; // x21

  if ( (byte_4B1A386 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spriteName, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1A386 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteName);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
  {
    v9 = this->fields.bgSprite;
    if ( v9 )
    {
      v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._26_get_mainTexture.method)(
                                      v9,
                                      v9->klass->vtable._27_set_mainTexture.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) || System_String__IsNullOrEmpty(spriteName, 0LL) )
        return;
      v13 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      AtlasManager__SetEventUI(v13, spriteName, 0LL);
      v9 = this->fields.bgSprite;
      if ( v9 )
      {
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
          v9,
          v9->klass->vtable._34_get_minWidth.methodPtr);
        return;
      }
    }
    sub_1BCAA3C(v9, v8);
  }
}


void __fastcall BuddyPointResultReplayButton__Setup(
        BuddyPointResultReplayButton_o *this,
        EventDelegate_Callback_o *onClickAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *button; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  struct UICommonButton_o *v16; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  __int64 size; // x2
  int v19; // w10
  System_Collections_Generic_List_object__o *v20; // x21
  EventDelegate_o *v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B1A385 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, onClickAction, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1A385 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onClickAction);
  v12 = UnityEngine_Object__op_Inequality(button, 0LL, 0LL);
  if ( v12 )
  {
    v16 = this->fields.button;
    if ( !v16 )
      goto LABEL_16;
    onClick = v16->fields.onClick;
    if ( !onClick )
      goto LABEL_16;
    size = (unsigned int)onClick->fields._size;
    v19 = onClick->fields._version + 1;
    onClick->fields._size = 0;
    onClick->fields._version = v19;
    if ( (int)size >= 1 )
    {
      System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
      v16 = this->fields.button;
      if ( !v16 )
        goto LABEL_16;
    }
    v20 = (System_Collections_Generic_List_object__o *)v16->fields.onClick;
    v21 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v13, size, v15);
    EventDelegate___ctor_47348668(v21, onClickAction, 0LL);
    if ( !v20
      || (items = v20->fields._items,
          v29 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++v20->fields._version,
          !items) )
    {
LABEL_16:
      sub_1BCAA3C(v12, v13);
    }
    v30 = v20->fields._size;
    if ( (unsigned int)v30 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v21,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + v30;
      v20->fields._size = v30 + 1;
      v31[4] = (Il2CppClass *)v21;
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v21, v22, v23, v24, v25, v26, v27);
    }
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v14);
}