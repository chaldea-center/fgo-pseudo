void __fastcall EventMaskFadeTouchBlockObject___ctor(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMaskFadeTouchBlockObject__OnClickObject(
        EventMaskFadeTouchBlockObject_o *this,
        const MethodInfo *method)
{
  System_Action_o *onClickCallback; // x0
  BattleServantConfConponent_o *p_onClickCallback; // x19
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  p_onClickCallback = (BattleServantConfConponent_o *)&this->fields.onClickCallback;
  onClickCallback = this->fields.onClickCallback;
  if ( onClickCallback )
  {
    System_Action__Invoke(onClickCallback, 0LL);
    p_onClickCallback->klass = 0LL;
    sub_B0D840(p_onClickCallback, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall EventMaskFadeTouchBlockObject__RemoveCallback(
        EventMaskFadeTouchBlockObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_onClickCallback; // x19
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (BattleServantConfConponent_o *)&this->fields.onClickCallback;
    if ( onClickCallback )
    {
      p_onClickCallback->klass = 0LL;
      sub_B0D840(p_onClickCallback, 0LL, v3, v4, v5, v6, v7, v8);
    }
  }
}


void __fastcall EventMaskFadeTouchBlockObject__SetCallback(
        EventMaskFadeTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_onClickCallback; // x20
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (BattleServantConfConponent_o *)&this->fields.onClickCallback;
    if ( !onClickCallback )
    {
      p_onClickCallback->klass = (BattleServantConfConponent_c *)callback;
      sub_B0D840(p_onClickCallback, (System_Int32_array **)callback, v5, v6, v7, v8, v9, v10);
    }
  }
}