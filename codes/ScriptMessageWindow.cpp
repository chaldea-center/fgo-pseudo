void __fastcall ScriptMessageWindow___ctor(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.talkNameBackBaseWidth = xmmword_BDDD90;
  this->fields.defaultWindowDispCenter = (struct UnityEngine_Vector2_o)0xC35A000000000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptMessageWindow__AddChildMessageScroll(
        ScriptMessageWindow_o *this,
        UnityEngine_Transform_o *child,
        const MethodInfo *method)
{
  ScriptMessageWindow_o *v4; // x19
  UnityEngine_Component_o *messageScroll; // x8
  ScriptMessageWindow_o *v6; // x19

  if ( !child
    || (v4 = this,
        UnityEngine_Transform__SetParent_70057560(child, this->fields.messageScroll, 0, 0LL),
        this = (ScriptMessageWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)child, 0LL),
        (messageScroll = (UnityEngine_Component_o *)v4->fields.messageScroll) == 0LL)
    || (v6 = this, (this = (ScriptMessageWindow_o *)UnityEngine_Component__get_gameObject(messageScroll, 0LL)) == 0LL)
    || (this = (ScriptMessageWindow_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL), !v6) )
  {
    sub_1BC3264(this, child);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v6, (int32_t)this, 0LL);
}


void __fastcall ScriptMessageWindow__CopyTouchComponents(
        ScriptMessageWindow_o *this,
        ScriptMessageWindow_o *src,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *messageBackBase; // x0
  UnityEngine_Component_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  void *monitor; // x1
  UnityEngine_Component_o *v13; // x8
  UnityEngine_Component_o *v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  void *v17; // x1

  if ( (byte_4B03E8C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_ScriptMessageGestureReciver___, src);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_UITouchPressMarge___, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ScriptMessageGestureReciver___, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UITouchPressMarge___, v7);
    byte_4B03E8C = 1;
  }
  messageBackBase = (UnityEngine_Component_o *)this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL);
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 (UnityEngine_GameObject_o *)messageBackBase,
                                                 (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_ScriptMessageGestureReciver___);
  if ( !src )
    goto LABEL_17;
  v9 = messageBackBase;
  messageBackBase = (UnityEngine_Component_o *)src->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL);
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)messageBackBase,
                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ScriptMessageGestureReciver___);
  if ( !messageBackBase )
    goto LABEL_17;
  if ( !v9 )
    goto LABEL_17;
  monitor = messageBackBase[1].monitor;
  v9[1].monitor = monitor;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v9[1].monitor, (int32_t)monitor, v10, v11);
  messageBackBase = (UnityEngine_Component_o *)this->fields.messageBackBase;
  if ( !messageBackBase
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL)) == 0LL
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                       (UnityEngine_GameObject_o *)messageBackBase,
                                                       (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPressMarge___),
        (v13 = (UnityEngine_Component_o *)src->fields.messageBackBase) == 0LL)
    || (v14 = messageBackBase,
        (messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v13, 0LL)) == 0LL)
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)messageBackBase,
                                                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UITouchPressMarge___)) == 0LL
    || !v14 )
  {
LABEL_17:
    sub_1BC3264(messageBackBase, src);
  }
  v17 = messageBackBase[1].monitor;
  v14[1].monitor = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v14[1].monitor, (int32_t)v17, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptMessageWindow__SetEnabledCollider(
        ScriptMessageWindow_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UIWidget_o *messageBackBase; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4B03E8D & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_BoxCollider___, isEnable);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B03E8D = 1;
  }
  messageBackBase = this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_9;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)messageBackBase,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageBackBase = (struct UIWidget_o *)UnityEngine_Object__op_Equality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)messageBackBase & 1) == 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
      return;
    }
LABEL_9:
    sub_1BC3264(messageBackBase, isEnable);
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