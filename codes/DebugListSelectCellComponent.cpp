void DebugListSelectCellComponent___ctor(DebugListSelectCellComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugListSelectCellComponent__Set(
        DebugListSelectCellComponent_o *this,
        System_String_o *id,
        int32_t index,
        System_Action_string__int__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_id; // x22
  __int64 v12; // x1
  UILabel_o *v13; // x0
  struct System_Action_string__int__o **p_callback; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  this->fields.id = id;
  p_id = &this->fields.id;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.id,
    (int32_t)id,
    index,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v13 = (UILabel_o *)*(p_id - 1);
  if ( !v13 )
    sub_1C93D2C(0, v12);
  UILabel__set_text(v13, this->fields.id, 0);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  *((_DWORD *)p_callback - 2) = index;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_callback, (int32_t)callback, v15, v16, v17, v18, v19, v20);
}


void DebugListSelectCellComponent__Tap(DebugListSelectCellComponent_o *this, const MethodInfo *method)
{
  struct System_Action_string__int__o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      this->fields.id,
      (unsigned int)this->fields.index,
      callback->fields.method);
}