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
  struct System_String_o **p_id; // x22
  UILabel_o *v9; // x0
  struct System_Action_string__int__o **p_callback; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  this->fields.id = id;
  p_id = &this->fields.id;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.id, (int32_t)id, index, (const MethodInfo *)callback);
  v9 = (UILabel_o *)*(p_id - 1);
  if ( !v9 )
    sub_1C372B4(0);
  UILabel__set_text(v9, this->fields.id, 0);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  *((_DWORD *)p_callback - 2) = index;
  sub_1C36FFC((CGThumbnailListItem_o *)p_callback, (int32_t)callback, v11, v12);
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