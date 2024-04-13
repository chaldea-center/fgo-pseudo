void __fastcall ScriptMessageWindow___ctor(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.talkNameBackBaseWidth = 0xDC00000050LL;
  *(_OWORD *)&this->fields.defaultWindowDispSize.fields.x = xmmword_32C42A0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptMessageWindow__AddChildMessageScroll(
        ScriptMessageWindow_o *this,
        UnityEngine_Transform_o *child,
        const MethodInfo *method)
{
  ScriptMessageWindow_o *v4; // x19
  UnityEngine_Component_o *messageScroll; // x8
  UnityEngine_GameObject_o *v6; // x19

  if ( !child
    || (v4 = this,
        UnityEngine_Transform__SetParent_35741212(child, this->fields.messageScroll, 0, 0LL),
        this = (ScriptMessageWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)child, 0LL),
        (messageScroll = (UnityEngine_Component_o *)v4->fields.messageScroll) == 0LL)
    || (v6 = (UnityEngine_GameObject_o *)this,
        (this = (ScriptMessageWindow_o *)UnityEngine_Component__get_gameObject(messageScroll, 0LL)) == 0LL)
    || (this = (ScriptMessageWindow_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL), !v6) )
  {
    sub_B5D69C(this, child);
  }
  UnityEngine_GameObject__set_layer(v6, (int32_t)this, 0LL);
}


void __fastcall ScriptMessageWindow__CopyTouchComponents(
        ScriptMessageWindow_o *this,
        ScriptMessageWindow_o *src,
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
  UnityEngine_Component_o *messageBackBase; // x0
  UnityEngine_Component_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **klass; // x1
  UnityEngine_Component_o *v24; // x8
  UnityEngine_Component_o *v25; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1

  if ( (byte_42EE453 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_AddComponent_ScriptMessageGestureReciver___,
      (_DWORD)src,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UITouchPressMarge___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScriptMessageGestureReciver___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITouchPressMarge___, v12, v13, v14);
    byte_42EE453 = 1;
  }
  messageBackBase = (UnityEngine_Component_o *)this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL);
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                 (UnityEngine_GameObject_o *)messageBackBase,
                                                 (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_ScriptMessageGestureReciver___);
  if ( !src )
    goto LABEL_17;
  v16 = messageBackBase;
  messageBackBase = (UnityEngine_Component_o *)src->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL);
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)messageBackBase,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScriptMessageGestureReciver___);
  if ( !messageBackBase )
    goto LABEL_17;
  if ( !v16 )
    goto LABEL_17;
  klass = (System_Int32_array **)messageBackBase[1].klass;
  v16[1].klass = (UnityEngine_Component_c *)klass;
  sub_B5D560((BattleServantConfConponent_o *)&v16[1], klass, v17, v18, v19, v20, v21, v22);
  messageBackBase = (UnityEngine_Component_o *)this->fields.messageBackBase;
  if ( !messageBackBase
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL)) == 0LL
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                       (UnityEngine_GameObject_o *)messageBackBase,
                                                       (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPressMarge___),
        (v24 = (UnityEngine_Component_o *)src->fields.messageBackBase) == 0LL)
    || (v25 = messageBackBase,
        (messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v24, 0LL)) == 0LL)
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)messageBackBase,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITouchPressMarge___)) == 0LL
    || !v25 )
  {
LABEL_17:
    sub_B5D69C(messageBackBase, src);
  }
  v32 = (System_Int32_array **)messageBackBase[1].klass;
  v25[1].klass = (UnityEngine_Component_c *)v32;
  sub_B5D560((BattleServantConfConponent_o *)&v25[1], v32, v26, v27, v28, v29, v30, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageWindow__SetEnabledCollider(
        ScriptMessageWindow_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UIWidget_o *messageBackBase; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_42EE454 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, isEnable, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EE454 = 1;
  }
  messageBackBase = this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_10;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)messageBackBase,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageBackBase = (struct UIWidget_o *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)messageBackBase & 1) == 0 )
  {
    if ( Component_WebViewObject )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isEnable, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(messageBackBase, isEnable);
  }
}


UnityEngine_Vector2_o __fastcall ScriptMessageWindow__get_DefaultWindowDispCenter(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.defaultWindowDispCenter.fields.x;
  y = this->fields.defaultWindowDispCenter.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall ScriptMessageWindow__get_DefaultWindowDispSize(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.defaultWindowDispSize.fields.x;
  y = this->fields.defaultWindowDispSize.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UIPanel_o *__fastcall ScriptMessageWindow__get_DispPanel(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.dispPanel;
}


System_String_o *__fastcall ScriptMessageWindow__get_ImageSuffix(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.imageSuffix;
}


UILabel_o *__fastcall ScriptMessageWindow__get_MessageMainLabel(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.messageMainLabel;
}


UILabel_o *__fastcall ScriptMessageWindow__get_MessageRubyLabel(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.messageRubyLabel;
}


UnityEngine_Transform_o *__fastcall ScriptMessageWindow__get_MessageScroll(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  return this->fields.messageScroll;
}


UISprite_o *__fastcall ScriptMessageWindow__get_MessageWindowBack(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  return this->fields.messageWindowBack;
}


UISprite_o *__fastcall ScriptMessageWindow__get_TalkNameBack(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.talkNameBack;
}


int32_t __fastcall ScriptMessageWindow__get_TalkNameBackBaseWidth(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  return this->fields.talkNameBackBaseWidth;
}


int32_t __fastcall ScriptMessageWindow__get_TalkNameBackDefaultWidth(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  return this->fields.talkNameBackDefaultWidth;
}


UISprite_o *__fastcall ScriptMessageWindow__get_TalkNameIcon(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.talkNameIcon;
}


UILabel_o *__fastcall ScriptMessageWindow__get_TalkNameMainLabel(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.talkNameMainLabel;
}


UnityEngine_Transform_o *__fastcall ScriptMessageWindow__get_TalkNameMessageRoot(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  return this->fields.talkNameMessageRoot;
}


UnityEngine_GameObject_o *__fastcall ScriptMessageWindow__get_TalkNameRootObject(
        ScriptMessageWindow_o *this,
        const MethodInfo *method)
{
  return this->fields.talkNameRootObject;
}


UILabel_o *__fastcall ScriptMessageWindow__get_TalkNameRubyLabel(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  return this->fields.talkNameRubyLabel;
}