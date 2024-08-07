void __fastcall EventMaskFadeTouchBlockObject___ctor(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMaskFadeTouchBlockObject__OnClickObject(
        EventMaskFadeTouchBlockObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *onClickCallback; // x8
  ServantStatusBattleListViewItem_o *p_onClickCallback; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  p_onClickCallback = (ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback;
  onClickCallback = this->fields.onClickCallback;
  if ( onClickCallback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickCallback->fields.m_target)(
      onClickCallback->fields.original_method_info,
      *(_QWORD *)&onClickCallback->fields.extra_arg);
    p_onClickCallback->klass = 0LL;
    sub_1B649A4(p_onClickCallback, 0, v4, v5);
  }
}


void __fastcall EventMaskFadeTouchBlockObject__RemoveCallback(
        EventMaskFadeTouchBlockObject_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_onClickCallback; // x19
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback;
    if ( onClickCallback )
    {
      p_onClickCallback->klass = 0LL;
      sub_1B649A4(p_onClickCallback, 0, v3, v4);
    }
  }
}


void __fastcall EventMaskFadeTouchBlockObject__SetCallback(
        EventMaskFadeTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_onClickCallback; // x20
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback;
    if ( !onClickCallback )
    {
      p_onClickCallback->klass = (ServantStatusBattleListViewItem_c *)callback;
      sub_1B649A4(p_onClickCallback, (int32_t)callback, v5, v6);
    }
  }
}