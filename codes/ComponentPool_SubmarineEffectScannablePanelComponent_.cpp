void __fastcall ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
        ComponentPool_SubmarineEffectScannablePanelComponent__o *this,
        const MethodInfo_25CB5B8 *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( !this )
    sub_B170D4();
  method->klass->rgctx_data->_20_ComponentPool_T__Clear->methodPointer();
  this->fields.prefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.prefab, 0LL, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
        ComponentPool_SubmarineEffectScannablePanelComponent__o *this,
        int32_t count,
        const MethodInfo_25CABE0 *method)
{
  __int64 v6; // x1
  int v7; // w0
  int32_t v8; // w0
  int32_t v9; // w21
  int v10; // w23
  struct UnityEngine_GameObject_o *prefab; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Component_o *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0

  if ( (byte_4103511 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&count);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_4103511 = 1;
  }
  if ( !this )
    goto LABEL_14;
  v7 = ((__int64 (__fastcall *)(ComponentPool_SubmarineEffectScannablePanelComponent__o *))method->klass->rgctx_data->_3_ComponentPool_T__get_currentPoolSize->methodPointer)(this);
  v8 = UnityEngine_Mathf__Min_40727532(count - v7, 0, 0LL);
  if ( v8 >= 1 )
  {
    v9 = v8;
    v10 = 0;
    while ( 1 )
    {
      prefab = this->fields.prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
              (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
              (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v13 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *))method->klass->rgctx_data->_4_GameObjectExtensions_SafeGetComponent_T_->methodPointer)(v12);
      if ( !v13 )
        break;
      v14 = v13;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      availableComponentList = this->fields.availableComponentList;
      if ( !availableComponentList )
        break;
      ((void (__fastcall *)(struct System_Collections_Generic_List_T__o *, UnityEngine_Component_o *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
        availableComponentList,
        v14);
      if ( ++v10 >= v9 )
        return;
    }
LABEL_14:
    sub_B170D4();
  }
}