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
  struct System_Action_BuffList_TYPE__o **p_callback; // x19
  UILabel_o *v8; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4CB78A4 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_TYPE_TypeInfo);
    byte_4CB78A4 = 1;
  }
  this->fields.callback = callback;
  p_callback = &this->fields.callback;
  *((_DWORD *)p_callback - 2) = buffType;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_callback, (int32_t)callback, (int32_t)callback, method);
  v8 = (UILabel_o *)*(p_callback - 2);
  v11.klass = (System_Enum_c *)BuffList_TYPE_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = *((_DWORD *)p_callback - 2);
  v9 = System_Enum__ToString(&v11, 0);
  if ( !v8 )
    sub_1C6BC60(v9, v10);
  UILabel__set_text(v8, v9, 0);
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