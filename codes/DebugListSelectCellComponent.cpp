void DebugListSelectCellComponent___ctor(DebugListSelectCellComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugListSelectCellComponent__Set(
        DebugListSelectCellComponent_o *this,
        System_String_o *id,
        int32_t index,
        System_Action_string__int__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_id; // x22
  __int64 v12; // x1
  UILabel_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  this->fields.id = id;
  p_id = &this->fields.id;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.id,
    (int32_t)id,
    *(System_String_o **)&index,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  v13 = (UILabel_o *)*(p_id - 1);
  if ( !v13 )
    sub_21FFECC(0, v12);
  UILabel__set_text(v13, this->fields.id, 0);
  this->fields.callback = callback;
  this->fields.index = index;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
    (int32_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void DebugListSelectCellComponent__Tap(DebugListSelectCellComponent_o *this, const MethodInfo *method)
{
  struct System_Action_string__int__o *callback; // x9

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      this->fields.id,
      (unsigned int)this->fields.index,
      callback->fields.method);
}