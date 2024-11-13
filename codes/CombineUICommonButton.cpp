void __fastcall CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0LL);
}


void __fastcall CombineUICommonButton__OnClick(CombineUICommonButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *current; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x10
  __int64 v33; // x9
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  CombineUICommonButton_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_4B19E34 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineUICommonButton_OnClick__, v4, v5);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&UICommonButton_TypeInfo, v12, v13);
    byte_4B19E34 = 1;
  }
  if ( this->fields.isPassive && UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, 0LL) < 1.0 )
    return;
  current = (UnityEngine_Object_o *)UICommonButton_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(current, 0LL, 0LL) )
    return;
  if ( (((__int64 (__fastcall *)(CombineUICommonButton_o *, Il2CppMethodPointer))this->klass->vtable._4_get_isEnabled.method)(
          this,
          this->klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
  {
    UICommonButton_TypeInfo->static_fields->current = (struct UICommonButton_o *)this;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)UICommonButton_TypeInfo->static_fields,
      (int64_t)this,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v21);
    EventDelegate__Execute_47323556(onClick, 0LL);
    UICommonButton_TypeInfo->static_fields->current = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)UICommonButton_TypeInfo->static_fields, 0LL, v23, v24, v25, v26, v27, v28);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  monitor = gameObject[1].monitor;
  if ( !monitor
    || (methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) < (unsigned int)methodPtr_low)
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_24:
    v34 = Method_CombineUICommonButton_OnClick__;
    if ( (*((_BYTE *)Method_CombineUICommonButton_OnClick__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1BCA7F8(Method_CombineUICommonButton_OnClick__);
    v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].monitor) == 0LL )
LABEL_27:
    sub_1BCAA3C(gameObject, v30);
  v33 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v33
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v33 - 1] != CombineRootComponent_TypeInfo )
  {
    sub_1BCACFC(gameObject);
    CombineUICommonButton___ctor(v36, v37);
    return;
  }
  if ( HIDWORD(gameObject[27].klass) != 5 )
    goto LABEL_24;
}