void CombineUICommonButton___ctor(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0);
}


void CombineUICommonButton__OnClick(CombineUICommonButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  void *monitor; // x8
  __int64 naturalAligment; // x10
  __int64 v9; // x9
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  CombineUICommonButton_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4CC13DB & 1) == 0 )
  {
    sub_1C713B0(&CombineRootComponent_TypeInfo);
    sub_1C713B0(&Method_CombineUICommonButton_OnClick__);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&UICommonButton_TypeInfo);
    byte_4CC13DB = 1;
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
    sub_1C71354(UICommonButton_TypeInfo->static_fields, this);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onClick, 0);
    UICommonButton_TypeInfo->static_fields->current = 0;
    sub_1C71354(UICommonButton_TypeInfo->static_fields, 0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  monitor = gameObject[1].monitor;
  if ( !monitor
    || (naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) < (unsigned int)naturalAligment)
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * naturalAligment - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_24:
    v10 = Method_CombineUICommonButton_OnClick__;
    if ( (*((_BYTE *)Method_CombineUICommonButton_OnClick__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C713C8(Method_CombineUICommonButton_OnClick__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C71394(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject || (gameObject = (UnityEngine_GameObject_o *)gameObject[1].monitor) == 0 )
LABEL_27:
    sub_1C71608(gameObject, v6);
  v9 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( gameObject->klass->_2.naturalAligment < (unsigned int)v9
    || (CombineRootComponent_c *)gameObject->klass->_2.typeHierarchy[v9 - 1] != CombineRootComponent_TypeInfo )
  {
    v12 = (CombineUICommonButton_o *)sub_1C719A4(gameObject);
    CombineUICommonButton___ctor(v12, v13);
    return;
  }
  if ( HIDWORD(gameObject[28].monitor) != 5 )
    goto LABEL_24;
}