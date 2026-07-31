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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_BuffList_TYPE__o **p_callback; // x19
  int v12; // w10
  UILabel_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_Enum_o v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+18h] [xbp-38h]

  if ( (byte_5939C91 & 1) == 0 )
  {
    sub_21FFC50(&BuffList_TYPE_TypeInfo);
    byte_5939C91 = 1;
  }
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  *((_DWORD *)p_callback - 2) = buffType;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_callback,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v12 = *((_DWORD *)p_callback - 2);
  v13 = (UILabel_o *)*(p_callback - 2);
  v16.klass = (System_Enum_c *)BuffList_TYPE_TypeInfo;
  v16.monitor = (void *)-1LL;
  v17 = v12;
  v14 = System_Enum__ToString(&v16, 0);
  if ( !v13 )
    sub_21FFECC(v14, v15);
  UILabel__set_text(v13, v14, 0);
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