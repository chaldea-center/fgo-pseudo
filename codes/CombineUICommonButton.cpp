void __fastcall CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0LL);
}


void __fastcall CombineUICommonButton__OnClick(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x10
  __int64 v13; // x9
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  CombineUICommonButton_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4A5ECC8 & 1) == 0 )
  {
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&Method_CombineUICommonButton_OnClick__);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&UICommonButton_TypeInfo);
    byte_4A5ECC8 = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)UICommonButton_TypeInfo->static_fields, (int32_t)this, v4, v5);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_46761624(onClick, 0LL);
    UICommonButton_TypeInfo->static_fields->current = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)UICommonButton_TypeInfo->static_fields, 0, v7, v8);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  monitor = gameObject[1].monitor;
  if ( !monitor
    || (methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) < (unsigned int)methodPtr_low)
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_24:
    v14 = Method_CombineUICommonButton_OnClick__;
    if ( (*((_BYTE *)Method_CombineUICommonButton_OnClick__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B885C8(Method_CombineUICommonButton_OnClick__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].monitor) == 0LL )
LABEL_27:
    sub_1B8880C(gameObject, v10);
  v13 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v13
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v13 - 1] != CombineRootComponent_TypeInfo )
  {
    sub_1B88ACC(gameObject);
    CombineUICommonButton___ctor(v16, v17);
    return;
  }
  if ( *((_DWORD *)&gameObject[25].fields + 1) != 5 )
    goto LABEL_24;
}