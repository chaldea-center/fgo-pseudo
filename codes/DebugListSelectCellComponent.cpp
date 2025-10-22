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
  __int64 v9; // x1
  UILabel_o *v10; // x0
  struct System_Action_string__int__o **p_callback; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  this->fields.id = id;
  p_id = &this->fields.id;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.id, (int32_t)id, index, (const MethodInfo *)callback);
  v10 = (UILabel_o *)*(p_id - 1);
  if ( !v10 )
    sub_1C3E7C0(0, v9);
  UILabel__set_text(v10, this->fields.id, 0);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  *((_DWORD *)p_callback - 2) = index;
  sub_1C3E508((CGThumbnailListItem_o *)p_callback, (int32_t)callback, v12, v13);
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