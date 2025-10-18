void CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0);
}


void CombineUICommonButton__OnClick(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  void *monitor; // x8
  __int64 naturalAligment; // x10
  __int64 v8; // x9
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  CombineUICommonButton_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3D011 & 1) == 0 )
  {
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&Method_CombineUICommonButton_OnClick__);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&UICommonButton_TypeInfo);
    byte_4C3D011 = 1;
  }
  if ( this->fields.isPassive && UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, 0) < 1.0 )
    return;
  current = (UnityEngine_Object_o *)UICommonButton_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(current, 0, 0) )
    return;
  if ( (((__int64 (__fastcall *)(CombineUICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    UICommonButton_TypeInfo->static_fields->current = (struct UICommonButton_o *)this;
    sub_1C36FFC(UICommonButton_TypeInfo->static_fields, this);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49220500(onClick, 0);
    UICommonButton_TypeInfo->static_fields->current = 0;
    sub_1C36FFC(UICommonButton_TypeInfo->static_fields, 0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  monitor = gameObject[1].monitor;
  if ( !monitor
    || (naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) < (unsigned int)naturalAligment)
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * naturalAligment - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_24:
    v9 = Method_CombineUICommonButton_OnClick__;
    if ( (*((_BYTE *)Method_CombineUICommonButton_OnClick__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C37070(Method_CombineUICommonButton_OnClick__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].monitor) == 0 )
LABEL_27:
    sub_1C372B4(gameObject);
  v8 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( gameObject->klass->_2.naturalAligment < (unsigned int)v8
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v8 - 1] != CombineRootComponent_TypeInfo )
  {
    v11 = (CombineUICommonButton_o *)sub_1C37574(gameObject);
    CombineUICommonButton___ctor(v11, v12);
    return;
  }
  if ( HIDWORD(gameObject[28].monitor) != 5 )
    goto LABEL_24;
}