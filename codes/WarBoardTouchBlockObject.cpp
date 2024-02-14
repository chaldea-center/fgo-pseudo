void __fastcall WarBoardTouchBlockObject___ctor(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall WarBoardTouchBlockObject__Activate(
        WarBoardTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  bool v11; // w19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
    return 0;
  this->fields.onClickCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClickCallback,
    (System_Int32_array **)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  v11 = 1;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  return v11;
}


void __fastcall WarBoardTouchBlockObject__Deactivate(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onClickCallback = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onClickCallback, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall WarBoardTouchBlockObject__OnClickObject(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
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


void __fastcall WarBoardTouchBlockObject__RemoveCallback(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
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


void __fastcall WarBoardTouchBlockObject__SetCallback(
        WarBoardTouchBlockObject_o *this,
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