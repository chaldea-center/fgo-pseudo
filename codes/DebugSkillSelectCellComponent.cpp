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
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w24
  System_String_o **p_name; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Action_int__string__string__o **p_callback; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UILabel_o *v28; // x19
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1

  if ( (byte_4CC8A28 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC8A28 = 1;
  }
  this->fields.id = id;
  v13 = (_DWORD)this + 40;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.name,
    (int32_t)name,
    (int32_t)name,
    (int32_t)detail,
    (System_String_o *)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.detail = detail;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.detail, (int32_t)detail, v15, v16, v17, v18, v19, v20);
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_callback, (int32_t)callback, v22, v23, v24, v25, v26, v27);
  v28 = (UILabel_o *)*(p_callback - 4);
  v29 = System_Int32__ToString(v13, 0);
  v30 = System_String__Concat_64069988(v29, (System_String_o *)StringLiteral_1450/*":"*/, *p_name, 0);
  if ( !v28 )
    sub_1C71608(v30, v31);
  UILabel__set_text(v28, v30, 0);
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