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
  int32_t v13; // w25
  System_String_o **p_name; // x26
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Action_int__string__string__int__o **p_callback; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UILabel_o *v20; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1

  if ( (byte_4CB789F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB789F = 1;
  }
  this->fields.id = id;
  v13 = (_DWORD)this + 40;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, (int32_t)name, (const MethodInfo *)detail);
  this->fields.detail = detail;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.detail, (int32_t)detail, v15, v16);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_callback, (int32_t)callback, v18, v19);
  v20 = (UILabel_o *)*(p_callback - 5);
  *((_DWORD *)p_callback - 2) = buffType;
  v21 = System_Int32__ToString(v13, 0);
  v22 = System_String__Concat_64005056(v21, (System_String_o *)StringLiteral_1449/*":"*/, *p_name, 0);
  if ( !v20 )
    sub_1C6BC60(v22, v23);
  UILabel__set_text(v20, v22, 0);
}


void DebugBuffSelectCellComponent__Tap(DebugBuffSelectCellComponent_o *this, const MethodInfo *method)
{
  struct System_Action_int__string__string__int__o *callback; // x8

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