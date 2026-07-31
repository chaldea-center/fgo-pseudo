void DebugSkillSelectCellComponent___ctor(DebugSkillSelectCellComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugSkillSelectCellComponent__Set(
        DebugSkillSelectCellComponent_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *detail,
        System_Action_int__string__string__o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o **p_name; // x25
  int32_t v14; // w24
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Action_int__string__string__o **p_callback; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UILabel_o *v28; // x19
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1

  if ( (byte_5939CE9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    byte_5939CE9 = 1;
  }
  this->fields.name = name;
  p_name = &this->fields.name;
  this->fields.id = id;
  v14 = (_DWORD)this + 40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.name,
    (int32_t)name,
    name,
    detail,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.detail = detail;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.detail, (int32_t)detail, v15, v16, v17, v18, v19, v20);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_callback, (int32_t)callback, v22, v23, v24, v25, v26, v27);
  v28 = (UILabel_o *)*(p_callback - 4);
  v29 = System_Int32__ToString(v14, 0);
  v30 = System_String__Concat_75481624(v29, (System_String_o *)StringLiteral_1532/*":"*/, *p_name, 0);
  if ( !v28 )
    sub_21FFECC(v30, v31);
  UILabel__set_text(v28, v30, 0);
}


void DebugSkillSelectCellComponent__Tap(DebugSkillSelectCellComponent_o *this, const MethodInfo *method)
{
  struct System_Action_int__string__string__o *callback; // x9

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, struct System_String_o *, struct System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      (unsigned int)this->fields.id,
      this->fields.name,
      this->fields.detail,
      callback->fields.method);
}