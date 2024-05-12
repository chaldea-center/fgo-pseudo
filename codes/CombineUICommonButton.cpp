void __fastcall CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  if ( (byte_438DEB9 & 1) == 0 )
  {
    sub_B775C4(&UICommonButton_TypeInfo);
    byte_438DEB9 = 1;
  }
  if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
  }
  UICommonButton___ctor((UICommonButton_o *)this, 0LL);
}


void __fastcall CombineUICommonButton__OnClick(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UICommonButton_c *v3; // x0
  UnityEngine_Object_o *current; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UICommonButton_c *v11; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  BattleServantConfConponent_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v24; // x10
  __int64 v25; // x9
  CombineUICommonButton_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_438DEB8 & 1) == 0 )
  {
    sub_B775C4(&CombineRootComponent_TypeInfo);
    sub_B775C4(&EventDelegate_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&UICommonButton_TypeInfo);
    byte_438DEB8 = 1;
  }
  if ( this->fields.isPassive && UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, 0LL) < 1.0 )
    return;
  v3 = UICommonButton_TypeInfo;
  if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
    v3 = UICommonButton_TypeInfo;
  }
  current = (UnityEngine_Object_o *)v3->static_fields->current;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(current, 0LL, 0LL) )
    return;
  if ( (((__int64 (__fastcall *)(CombineUICommonButton_o *, Il2CppMethodPointer))this->klass->vtable._4_get_isEnabled.method)(
          this,
          this->klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
  {
    v11 = UICommonButton_TypeInfo;
    if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButton_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
      v11 = UICommonButton_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v11->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)this;
    sub_B77560(static_fields, (System_Int32_array **)this, v5, v6, v7, v8, v9, v10);
    onClick = this->fields.onClick;
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Execute_30349004(onClick, 0LL);
    v14 = (BattleServantConfConponent_o *)UICommonButton_TypeInfo->static_fields;
    v14->klass = 0LL;
    sub_B77560(v14, 0LL, v15, v16, v17, v18, v19, v20);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_36;
  klass = gameObject[1].klass;
  if ( !klass
    || (v24 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1),
        *((unsigned __int8 *)klass->_1.image + 300) < (unsigned int)v24)
    || *(CombineRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v24 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_32:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].klass) == 0LL )
LABEL_36:
    sub_B7769C(gameObject, v22);
  v25 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&gameObject->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v25 - 1] != CombineRootComponent_TypeInfo )
  {
    sub_B77990(gameObject);
    CombineUICommonButton___ctor(v26, v27);
    return;
  }
  if ( HIDWORD(gameObject[25].monitor) != 5 )
    goto LABEL_32;
}