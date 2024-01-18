void __fastcall ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
        ComponentPool_SubmarineEffectScannablePanelComponent__o *this,
        const MethodInfo_25E4668 *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( !this )
    sub_B2C434(0LL, method);
  method->klass->rgctx_data->_20_ComponentPool_T__Clear->methodPointer();
  this->fields.prefab = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.prefab, 0LL, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
        ComponentPool_SubmarineEffectScannablePanelComponent__o *this,
        int32_t count,
        const MethodInfo_25E3C90 *method)
{
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v5; // x20
  __int64 v6; // x1
  int v7; // w0
  int32_t v8; // w0
  int32_t v9; // w21
  int v10; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefab; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x0
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v13; // x22

  v5 = this;
  if ( (byte_4191168 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&count);
    this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4191168 = 1;
  }
  if ( !v5 )
    goto LABEL_14;
  v7 = ((__int64 (__fastcall *)(ComponentPool_SubmarineEffectScannablePanelComponent__o *))method->klass->rgctx_data->_3_ComponentPool_T__get_currentPoolSize->methodPointer)(v5);
  v8 = UnityEngine_Mathf__Min_40694704(count - v7, 0, 0LL);
  if ( v8 >= 1 )
  {
    v9 = v8;
    v10 = 0;
    while ( 1 )
    {
      prefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
              prefab,
              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)((__int64 (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *))method->klass->rgctx_data->_4_GameObjectExtensions_SafeGetComponent_T_->methodPointer)(v12);
      if ( !this )
        break;
      v13 = this;
      this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)v5->fields.availableComponentList;
      if ( !this )
        break;
      ((void (__fastcall *)(ComponentPool_SubmarineEffectScannablePanelComponent__o *, ComponentPool_SubmarineEffectScannablePanelComponent__o *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
        this,
        v13);
      if ( ++v10 >= v9 )
        return;
    }
LABEL_14:
    sub_B2C434(this, *(_QWORD *)&count);
  }
}