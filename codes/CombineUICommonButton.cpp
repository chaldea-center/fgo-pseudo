void __fastcall CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  if ( (byte_418806E & 1) == 0 )
  {
    sub_B2C35C(&UICommonButton_TypeInfo, method);
    byte_418806E = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UICommonButton_c *v8; // x0
  UnityEngine_Object_o *current; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UICommonButton_c *v16; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  BattleServantConfConponent_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v29; // x10
  __int64 v30; // x9
  CombineUICommonButton_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_418806D & 1) == 0 )
  {
    sub_B2C35C(&CombineRootComponent_TypeInfo, method);
    sub_B2C35C(&EventDelegate_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&UICommonButton_TypeInfo, v7);
    byte_418806D = 1;
  }
  if ( this->fields.isPassive && UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, 0LL) < 1.0 )
    return;
  v8 = UICommonButton_TypeInfo;
  if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
    v8 = UICommonButton_TypeInfo;
  }
  current = (UnityEngine_Object_o *)v8->static_fields->current;
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
    v16 = UICommonButton_TypeInfo;
    if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButton_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
      v16 = UICommonButton_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v16->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)this;
    sub_B2C2F8(static_fields, (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
    onClick = this->fields.onClick;
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Execute_29726908(onClick, 0LL);
    v19 = (BattleServantConfConponent_o *)UICommonButton_TypeInfo->static_fields;
    v19->klass = 0LL;
    sub_B2C2F8(v19, 0LL, v20, v21, v22, v23, v24, v25);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_36;
  klass = gameObject[1].klass;
  if ( !klass
    || (v29 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1),
        *((unsigned __int8 *)klass->_1.image + 300) < (unsigned int)v29)
    || *(CombineRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v29 - 8) != CombineRootComponent_TypeInfo )
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].klass) == 0LL )
LABEL_36:
    sub_B2C434(gameObject, v27);
  v30 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&gameObject->klass->_2.bitflags2 + 1) < (unsigned int)v30
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v30 - 1] != CombineRootComponent_TypeInfo )
  {
    v31 = (CombineUICommonButton_o *)sub_B2C728(gameObject);
    CombineUICommonButton___ctor(v31, v32);
    return;
  }
  if ( HIDWORD(gameObject[25].monitor) != 5 )
    goto LABEL_32;
}