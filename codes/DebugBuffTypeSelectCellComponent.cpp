void DebugBuffTypeSelectCellComponent___ctor(DebugBuffTypeSelectCellComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugBuffTypeSelectCellComponent__Set(
        DebugBuffTypeSelectCellComponent_o *this,
        int32_t buffType,
        System_Action_BuffList_TYPE__o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_BuffList_TYPE__o **p_callback; // x19
  UILabel_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_Enum_o v15; // [xsp+8h] [xbp-48h] BYREF
  int v16; // [xsp+18h] [xbp-38h]

  if ( (byte_4D2DE6A & 1) == 0 )
  {
    sub_1C94098(&BuffList_TYPE_TypeInfo);
    byte_4D2DE6A = 1;
  }
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  *((_DWORD *)p_callback - 2) = buffType;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_callback,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (UILabel_o *)*(p_callback - 2);
  v15.klass = (System_Enum_c *)BuffList_TYPE_TypeInfo;
  v15.monitor = (void *)-1LL;
  v16 = *((_DWORD *)p_callback - 2);
  v13 = System_Enum__ToString(&v15, 0);
  if ( !v12 )
    sub_1C942F0(v13, v14);
  UILabel__set_text(v12, v13, 0);
}


void DebugBuffTypeSelectCellComponent__Tap(DebugBuffTypeSelectCellComponent_o *this, const MethodInfo *method)
{
  struct System_Action_BuffList_TYPE__o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      (unsigned int)this->fields.buffType,
      callback->fields.method);
}