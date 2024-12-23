void __fastcall EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B61BFF & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B61BFF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__EndClose(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventTradePopularSweetsNotificationDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BE4A70(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__OnClickCloseButton(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B61BFD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__, v3);
    sub_1BE4ACC(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__, v4);
    byte_4B61BFD = 1;
  }
  v5 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__OnEnable(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B61BFE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15850/*"Window/CloseButton"*/, method);
    byte_4B61BFE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42781316(transform, (System_String_o *)StringLiteral_15850/*"Window/CloseButton"*/, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B61C00 & 1) == 0 )
  {
    sub_1BE4ACC(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v1);
    byte_4B61C00 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v2;
  sub_1BE4A70(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___ctor(
        EventTradePopularSweetsNotificationDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___Open_b__8_0(
        EventTradePopularSweetsNotificationDialogComponent___c_o *this,
        UISprite_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (EventTradePopularSweetsNotificationDialogComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)obj,
                                                                             0LL)) == 0LL )
  {
    sub_1BE4D28(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}