void __fastcall LinkableObject___ctor(LinkableObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LinkableObject__OnClick(LinkableObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int linkUrl; // w8
  System_String_o *klass; // x19

  if ( (byte_4213EF7 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&WebViewManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4213EF7 = 1;
  }
  linkUrl = (int)this->fields.linkUrl;
  if ( linkUrl == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    UnityEngine_Application__OpenURL((System_String_o *)this[1].klass, 0LL);
  }
  else if ( linkUrl == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    klass = (System_String_o *)this[1].klass;
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, klass, 0LL, 0LL);
  }
}


void __fastcall LinkableObject__SetUp(
        LinkableObject_o *this,
        int32_t lnkType,
        System_String_o *lnkUrl,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v8; // x0

  this[1].klass = (LinkableObject_c *)lnkUrl;
  v8 = (BattleServantConfConponent_o *)&this[1];
  *(_DWORD *)&v8[-1].fields.isOpenAfter = lnkType;
  sub_B0D840(
    v8,
    (System_Int32_array **)lnkUrl,
    (System_String_array **)lnkUrl,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}