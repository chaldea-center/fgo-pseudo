void CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0);
}


void CombineUICommonButton__OnClick(CombineUICommonButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *current; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 *monitor; // x9
  __int64 v23; // x9
  __int64 naturalAligment; // x10
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x9
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  CombineUICommonButton_o *v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_5932231 & 1) == 0 )
  {
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    sub_21FFC50(&Method_CombineUICommonButton_OnClick__);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&UICommonButton_TypeInfo);
    byte_5932231 = 1;
  }
  if ( this->fields.isPassive && UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, 0) < 1.0 )
    return;
  current = (UnityEngine_Object_o *)UICommonButton_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(current, 0, 0) )
    return;
  if ( (((__int64 (__fastcall *)(CombineUICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    UICommonButton_TypeInfo->static_fields->current = (struct UICommonButton_o *)this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)UICommonButton_TypeInfo->static_fields,
      (int32_t)this,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    onClick = this->fields.onClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v11, v12);
    EventDelegate__Execute_56080488(onClick, 0);
    UICommonButton_TypeInfo->static_fields->current = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)UICommonButton_TypeInfo->static_fields,
      0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  monitor = (__int64 *)gameObject[1].monitor;
  if ( !monitor
    || (v23 = *monitor,
        naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(v23 + 304) < (unsigned int)naturalAligment)
    || *(CombineRootComponent_c **)(*(_QWORD *)(v23 + 200) + 8 * naturalAligment - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_24:
    v28 = Method_CombineUICommonButton_OnClick__;
    if ( (*((_BYTE *)Method_CombineUICommonButton_OnClick__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_21FFC68(Method_CombineUICommonButton_OnClick__);
    v29 = (System_Reflection_MethodBase_o *)sub_21FFC34(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].monitor) == 0 )
LABEL_27:
    sub_21FFECC(gameObject, v21);
  v27 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( gameObject->klass->_2.naturalAligment < (unsigned int)v27
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v27 - 1] != CombineRootComponent_TypeInfo )
  {
    v30 = (CombineUICommonButton_o *)sub_220024C(gameObject, CombineRootComponent_TypeInfo, v25, v26);
    CombineUICommonButton___ctor(v30, v31);
    return;
  }
  if ( HIDWORD(gameObject[28].monitor) != 5 )
    goto LABEL_24;
}