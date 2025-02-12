void __fastcall ScriptMessageWindow___ctor(ScriptMessageWindow_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.talkNameBackBaseWidth = xmmword_BF9B10;
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
        UnityEngine_Transform__SetParent_70815820(child, this->fields.messageScroll, 0, 0LL),
        this = (ScriptMessageWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)child, 0LL),
        (messageScroll = (UnityEngine_Component_o *)v4->fields.messageScroll) == 0LL)
    || (v6 = this, (this = (ScriptMessageWindow_o *)UnityEngine_Component__get_gameObject(messageScroll, 0LL)) == 0LL)
    || (this = (ScriptMessageWindow_o *)UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL), !v6) )
  {
    sub_1C1AE30(this, child);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t monitor; // x1
  UnityEngine_Component_o *v17; // x8
  UnityEngine_Component_o *v18; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1

  if ( (byte_4BC97BE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_ScriptMessageGestureReciver___, src);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_UITouchPressMarge___, v5);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ScriptMessageGestureReciver___, v6);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UITouchPressMarge___, v7);
    byte_4BC97BE = 1;
  }
  messageBackBase = (UnityEngine_Component_o *)this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL);
  if ( !messageBackBase )
    goto LABEL_17;
  messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 (UnityEngine_GameObject_o *)messageBackBase,
                                                 (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_ScriptMessageGestureReciver___);
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
                                                 (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ScriptMessageGestureReciver___);
  if ( !messageBackBase )
    goto LABEL_17;
  if ( !v9 )
    goto LABEL_17;
  monitor = (int64_t)messageBackBase[1].monitor;
  v9[1].monitor = (void *)monitor;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v9[1].monitor, monitor, v10, v11, v12, v13, v14, v15);
  messageBackBase = (UnityEngine_Component_o *)this->fields.messageBackBase;
  if ( !messageBackBase
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageBackBase, 0LL)) == 0LL
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                       (UnityEngine_GameObject_o *)messageBackBase,
                                                       (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPressMarge___),
        (v17 = (UnityEngine_Component_o *)src->fields.messageBackBase) == 0LL)
    || (v18 = messageBackBase,
        (messageBackBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v17, 0LL)) == 0LL)
    || (messageBackBase = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)messageBackBase,
                                                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UITouchPressMarge___)) == 0LL
    || !v18 )
  {
LABEL_17:
    sub_1C1AE30(messageBackBase, src);
  }
  v25 = (int64_t)messageBackBase[1].monitor;
  v18[1].monitor = (void *)v25;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v18[1].monitor, v25, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4BC97BF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, isEnable);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    byte_4BC97BF = 1;
  }
  messageBackBase = this->fields.messageBackBase;
  if ( !messageBackBase )
    goto LABEL_9;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)messageBackBase,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C1AE30(messageBackBase, isEnable);
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