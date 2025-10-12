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
  struct UISprite_o *v6; // x0
  UnityEngine_Object_o *v7; // x21
  UISprite_o *v8; // x21

  if ( (byte_4C32009 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32009 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) )
  {
    v6 = this->fields.bgSprite;
    if ( v6 )
    {
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._26_get_mainTexture.methodPtr)(
                                     v6,
                                     v6->klass->vtable._26_get_mainTexture.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v7, 0, 0) || System_String__IsNullOrEmpty(spriteName, 0) )
        return;
      v8 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v8, spriteName, 0);
      v6 = this->fields.bgSprite;
      if ( v6 )
      {
        ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v6,
          v6->klass->vtable._33_MakePixelPerfect.method);
        return;
      }
    }
    sub_1C32E7C(v6);
  }
}


void BuddyPointResultReplayButton__Setup(
        BuddyPointResultReplayButton_o *this,
        EventDelegate_Callback_o *onClickAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  struct UICommonButton_o *v8; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v11; // w10
  System_Collections_Generic_List_object__o *v12; // x21
  EventDelegate_o *v13; // x22
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C32008 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32008 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(button, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.button;
    if ( !v8 )
      goto LABEL_16;
    onClick = v8->fields.onClick;
    if ( !onClick )
      goto LABEL_16;
    size = onClick->fields._size;
    v11 = onClick->fields._version + 1;
    onClick->fields._size = 0;
    onClick->fields._version = v11;
    if ( size >= 1 )
    {
      System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
      v8 = this->fields.button;
      if ( !v8 )
        goto LABEL_16;
    }
    v12 = (System_Collections_Generic_List_object__o *)v8->fields.onClick;
    v13 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor_49230836(v13, onClickAction, 0);
    if ( !v12
      || (items = v12->fields._items,
          v15 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++v12->fields._version,
          !items) )
    {
LABEL_16:
      sub_1C32E7C(v6);
    }
    v16 = v12->fields._size;
    if ( (unsigned int)v16 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v13,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + v16;
      v12->fields._size = v16 + 1;
      v17[4] = (Il2CppClass *)v13;
      sub_1C32BC4(v17 + 4, v13);
    }
  }
  BuddyPointResultReplayButton__SetBgSprite(this, this->fields.bgSpriteName, v7);
}