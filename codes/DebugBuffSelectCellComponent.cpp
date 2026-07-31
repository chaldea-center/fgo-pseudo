void DebugBuffSelectCellComponent___ctor(DebugBuffSelectCellComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugBuffSelectCellComponent__Set(
        DebugBuffSelectCellComponent_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *detail,
        int32_t buffType,
        System_Action_int__string__string__int__o *callback,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o **p_name; // x26
  int32_t v15; // w25
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Action_int__string__string__int__o **p_callback; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UILabel_o *v29; // x20
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  __int64 v32; // x1

  if ( (byte_5939C8C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    byte_5939C8C = 1;
  }
  this->fields.name = name;
  p_name = &this->fields.name;
  this->fields.id = id;
  v15 = (_DWORD)this + 40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.name,
    (int32_t)name,
    name,
    detail,
    buffType,
    (int32_t)callback,
    (bool)method,
    v7);
  this->fields.detail = detail;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.detail, (int32_t)detail, v16, v17, v18, v19, v20, v21);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_callback, (int32_t)callback, v23, v24, v25, v26, v27, v28);
  v29 = (UILabel_o *)*(p_callback - 5);
  *((_DWORD *)p_callback - 2) = buffType;
  v30 = System_Int32__ToString(v15, 0);
  v31 = System_String__Concat_75481624(v30, (System_String_o *)StringLiteral_1532/*":"*/, *p_name, 0);
  if ( !v29 )
    sub_21FFECC(v31, v32);
  UILabel__set_text(v29, v31, 0);
}


void DebugBuffSelectCellComponent__Tap(DebugBuffSelectCellComponent_o *this, const MethodInfo *method)
{
  struct System_Action_int__string__string__int__o *callback; // x9

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, struct System_String_o *, struct System_String_o *, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      (unsigned int)this->fields.id,
      this->fields.name,
      this->fields.detail,
      (unsigned int)this->fields.buffType,
      callback->fields.method);
}