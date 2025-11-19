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
  int32_t v11; // w24
  System_String_o **p_name; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Action_int__string__string__o **p_callback; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *v18; // x19
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1

  if ( (byte_4CB78FF & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB78FF = 1;
  }
  this->fields.id = id;
  v11 = (_DWORD)this + 40;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, (int32_t)name, (const MethodInfo *)detail);
  this->fields.detail = detail;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.detail, (int32_t)detail, v13, v14);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_callback, (int32_t)callback, v16, v17);
  v18 = (UILabel_o *)*(p_callback - 4);
  v19 = System_Int32__ToString(v11, 0);
  v20 = System_String__Concat_64005056(v19, (System_String_o *)StringLiteral_1449/*":"*/, *p_name, 0);
  if ( !v18 )
    sub_1C6BC60(v20, v21);
  UILabel__set_text(v18, v20, 0);
}


void DebugSkillSelectCellComponent__Tap(DebugSkillSelectCellComponent_o *this, const MethodInfo *method)
{
  struct System_Action_int__string__string__o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, struct System_String_o *, struct System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      (unsigned int)this->fields.id,
      this->fields.name,
      this->fields.detail,
      callback->fields.method);
}