void BuddyPointResultReplayButton___ctor(BuddyPointResultReplayButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BuddyPointResultReplayButton__SetBgSprite(
        BuddyPointResultReplayButton_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  UnityEngine_Object_o *v8; // x21
  UISprite_o *v9; // x21

  if ( (byte_4CB08BB & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB08BB = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) )
  {
    v7 = this->fields.bgSprite;
    if ( v7 )
    {
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._26_get_mainTexture.methodPtr)(
                                     v7,
                                     v7->klass->vtable._26_get_mainTexture.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v8, 0, 0) || System_String__IsNullOrEmpty(spriteName, 0) )
        return;
      v9 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v9, spriteName, 0);
      v7 = this->fields.bgSprite;
      if ( v7 )
      {
        ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v7,
          v7->klass->vtable._33_MakePixelPerfect.method);
        return;
      }
    }
    sub_1C6BC60(v7, v6);
  }
}


void BuddyPointResultReplayButton__Setup(
        BuddyPointResultReplayButton_o *this,
        EventDelegate_Callback_o *onClickAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UICommonButton_o *v9; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v12; // w10
  System_Collections_Generic_List_object__o *v13; // x21
  EventDelegate_o *v14; // x22
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CB08BA & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB08BA = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(button, 0, 0);
  if ( v6 )
  {
    v9 = this->fields.button;
    if ( !v9 )
      goto LABEL_16;
    onClick = v9->fields.onClick;
    if ( !onClick )
      goto LABEL_16;
    size = onClick->fields._size;
    v12 = onClick->fields._version + 1;
    onClick->fields._size = 0;
    onClick->fields._version = v12;
    if ( size >= 1 )
    {
      System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
      v9 = this->fields.button;
      if ( !v9 )
        goto LABEL_16;
    }
    v13 = (System_Collections_Generic_List_object__o *)v9->fields.onClick;
    v14 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
    EventDelegate___ctor_49576072(v14, onClickAction, 0);
    if ( !v13
      || (items = v13->fields._items,
          v16 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++v13->fields._version,
          !items) )
    {
LABEL_16:
      sub_1C6BC60(v6, v7);
    }
    v17 = v13->fields._size;
    if ( (unsigned int)v17 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        (Il2CppObject *)v14,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + v17;
      v13->fields._size = v17 + 1;
      v18[4] = (Il2CppClass *)v14;
      sub_1C6B9AC(v18 + 4, v14);
    }
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v8);
}