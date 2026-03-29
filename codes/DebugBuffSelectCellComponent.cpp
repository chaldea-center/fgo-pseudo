void DebugBuffSelectCellComponent___ctor(DebugBuffSelectCellComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugBuffSelectCellComponent__Set(
        DebugBuffSelectCellComponent_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *detail,
        int32_t buffType,
        System_Action_int__string__string__int__o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w25
  System_String_o **p_name; // x26
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Action_int__string__string__int__o **p_callback; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UILabel_o *v29; // x20
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  __int64 v32; // x1

  if ( (byte_4D31F56 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D31F56 = 1;
  }
  this->fields.id = id;
  v14 = (_DWORD)this + 40;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.name,
    (int32_t)name,
    (int32_t)name,
    (int32_t)detail,
    *(System_String_o **)&buffType,
    (int32_t)callback,
    (int64_t)method,
    v7);
  this->fields.detail = detail;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.detail, (int32_t)detail, v16, v17, v18, v19, v20, v21);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_callback, (int32_t)callback, v23, v24, v25, v26, v27, v28);
  v29 = (UILabel_o *)*(p_callback - 5);
  *((_DWORD *)p_callback - 2) = buffType;
  v30 = System_Int32__ToString(v14, 0);
  v31 = System_String__Concat_64463988(v30, (System_String_o *)StringLiteral_1451/*":"*/, *p_name, 0);
  if ( !v29 )
    sub_1C93D2C(v31, v32);
  UILabel__set_text(v29, v31, 0);
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