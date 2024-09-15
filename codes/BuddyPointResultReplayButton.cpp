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

  if ( (byte_4A31F3B & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, spriteName);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    byte_4A31F3B = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
  {
    v8 = this->fields.bgSprite;
    if ( v8 )
    {
      v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._26_get_mainTexture.method)(
                                     v8,
                                     v8->klass->vtable._27_set_mainTexture.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) || System_String__IsNullOrEmpty(spriteName, 0LL) )
        return;
      v10 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
    sub_1B7641C(v8, v7);
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
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct UICommonButton_o *v12; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v15; // w10
  System_Collections_Generic_List_object__o *v16; // x21
  EventDelegate_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A31F3A & 1) == 0 )
  {
    sub_1B761C0(&EventDelegate_TypeInfo, onClickAction);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v6);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v7);
    byte_4A31F3A = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(button, 0LL, 0LL);
  if ( v9 )
  {
    v12 = this->fields.button;
    if ( !v12 )
      goto LABEL_16;
    onClick = v12->fields.onClick;
    if ( !onClick )
      goto LABEL_16;
    size = onClick->fields._size;
    v15 = onClick->fields._version + 1;
    onClick->fields._size = 0;
    onClick->fields._version = v15;
    if ( size >= 1 )
    {
      System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
      v12 = this->fields.button;
      if ( !v12 )
        goto LABEL_16;
    }
    v16 = (System_Collections_Generic_List_object__o *)v12->fields.onClick;
    v17 = (EventDelegate_o *)sub_1B7640C(EventDelegate_TypeInfo);
    EventDelegate___ctor_46673908(v17, onClickAction, 0LL);
    if ( !v16
      || (items = v16->fields._items,
          v21 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++v16->fields._version,
          !items) )
    {
LABEL_16:
      sub_1B7641C(v9, v10);
    }
    v22 = v16->fields._size;
    if ( (unsigned int)v22 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)v17,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + v22;
      v16->fields._size = v22 + 1;
      v23[4] = (Il2CppClass *)v17;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
    }
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v11);
}