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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x10
  __int64 v26; // x9
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  CombineUICommonButton_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4BB83CA & 1) == 0 )
  {
    sub_1C13D24(&CombineRootComponent_TypeInfo, method);
    sub_1C13D24(&Method_CombineUICommonButton_OnClick__, v3);
    sub_1C13D24(&EventDelegate_TypeInfo, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C13D24(&UICommonButton_TypeInfo, v7);
    byte_4BB83CA = 1;
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
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)UICommonButton_TypeInfo->static_fields,
      (int64_t)this,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_47802740(onClick, 0LL);
    UICommonButton_TypeInfo->static_fields->current = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)UICommonButton_TypeInfo->static_fields, 0LL, v16, v17, v18, v19, v20, v21);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  monitor = gameObject[1].monitor;
  if ( !monitor
    || (methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) < (unsigned int)methodPtr_low)
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_24:
    v27 = Method_CombineUICommonButton_OnClick__;
    if ( (*((_BYTE *)Method_CombineUICommonButton_OnClick__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1C13D3C(Method_CombineUICommonButton_OnClick__);
    v28 = (System_Reflection_MethodBase_o *)sub_1C13D08(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].monitor) == 0LL )
LABEL_27:
    sub_1C13F80(gameObject, v23);
  v26 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v26
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v26 - 1] != CombineRootComponent_TypeInfo )
  {
    sub_1C14240(gameObject);
    CombineUICommonButton___ctor(v29, v30);
    return;
  }
  if ( HIDWORD(gameObject[27].klass) != 5 )
    goto LABEL_24;
}