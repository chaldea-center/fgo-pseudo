void __fastcall CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0LL);
}


void __fastcall CombineUICommonButton__OnClick(CombineUICommonButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *current; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x10
  __int64 v18; // x9
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  CombineUICommonButton_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4B48AAC & 1) == 0 )
  {
    sub_1BDB878(&CombineRootComponent_TypeInfo, method);
    sub_1BDB878(&Method_CombineUICommonButton_OnClick__, v3);
    sub_1BDB878(&EventDelegate_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BDB878(&UICommonButton_TypeInfo, v7);
    byte_4B48AAC = 1;
  }
  if ( this->fields.isPassive && UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, 0LL) < 1.0 )
    return;
  current = (UnityEngine_Object_o *)UICommonButton_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(current, 0LL, 0LL) )
    return;
  if ( (((__int64 (__fastcall *)(CombineUICommonButton_o *, Il2CppMethodPointer))this->klass->vtable._4_get_isEnabled.method)(
          this,
          this->klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
  {
    UICommonButton_TypeInfo->static_fields->current = (struct UICommonButton_o *)this;
    sub_1BDB81C((CGThumbnailListItem_o *)UICommonButton_TypeInfo->static_fields, (int32_t)this, v9, v10);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_48515104(onClick, 0LL);
    UICommonButton_TypeInfo->static_fields->current = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)UICommonButton_TypeInfo->static_fields, 0, v12, v13);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  monitor = gameObject[1].monitor;
  if ( !monitor
    || (methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) < (unsigned int)methodPtr_low)
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_24:
    v19 = Method_CombineUICommonButton_OnClick__;
    if ( (*((_BYTE *)Method_CombineUICommonButton_OnClick__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1BDB890(Method_CombineUICommonButton_OnClick__);
    v20 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].monitor) == 0LL )
LABEL_27:
    sub_1BDBAD4(gameObject, v15);
  v18 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v18
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v18 - 1] != CombineRootComponent_TypeInfo )
  {
    sub_1BDBD94(gameObject);
    CombineUICommonButton___ctor(v21, v22);
    return;
  }
  if ( HIDWORD(gameObject[27].monitor) != 5 )
    goto LABEL_24;
}