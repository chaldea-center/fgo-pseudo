void __fastcall CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B59 & 1) == 0 )
  {
    sub_B5D5C4(&UICommonButton_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B59 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UICommonButton_c *v20; // x0
  UnityEngine_Object_o *current; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UICommonButton_c *v28; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  BattleServantConfConponent_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v41; // x10
  __int64 v42; // x9
  CombineUICommonButton_o *v43; // x0
  const MethodInfo *v44; // x1

  if ( (byte_42E8B58 & 1) == 0 )
  {
    sub_B5D5C4(&CombineRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UICommonButton_TypeInfo, v17, v18, v19);
    byte_42E8B58 = 1;
  }
  if ( this->fields.isPassive && UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, 0LL) < 1.0 )
    return;
  v20 = UICommonButton_TypeInfo;
  if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
    v20 = UICommonButton_TypeInfo;
  }
  current = (UnityEngine_Object_o *)v20->static_fields->current;
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
    v28 = UICommonButton_TypeInfo;
    if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButton_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
      v28 = UICommonButton_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v28->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)this;
    sub_B5D560(static_fields, (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
    onClick = this->fields.onClick;
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Execute_29825792(onClick, 0LL);
    v31 = (BattleServantConfConponent_o *)UICommonButton_TypeInfo->static_fields;
    v31->klass = 0LL;
    sub_B5D560(v31, 0LL, v32, v33, v34, v35, v36, v37);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_36;
  klass = gameObject[1].klass;
  if ( !klass
    || (v41 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1),
        *((unsigned __int8 *)klass->_1.image + 300) < (unsigned int)v41)
    || *(CombineRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v41 - 8) != CombineRootComponent_TypeInfo )
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].klass) == 0LL )
LABEL_36:
    sub_B5D69C(gameObject, v39);
  v42 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&gameObject->klass->_2.bitflags2 + 1) < (unsigned int)v42
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v42 - 1] != CombineRootComponent_TypeInfo )
  {
    v43 = (CombineUICommonButton_o *)sub_B5D990(gameObject);
    CombineUICommonButton___ctor(v43, v44);
    return;
  }
  if ( HIDWORD(gameObject[25].monitor) != 5 )
    goto LABEL_32;
}