void __fastcall ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
        ComponentPool_SubmarineEffectScannablePanelComponent__o *this,
        const MethodInfo_24A6A6C *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( !this )
    sub_B5D69C(0LL, method);
  method->klass->rgctx_data->_20_ComponentPool_T__Clear->methodPointer();
  this->fields.prefab = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.prefab, 0LL, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
        ComponentPool_SubmarineEffectScannablePanelComponent__o *this,
        int32_t count,
        const MethodInfo_24A6094 *method)
{
  __int64 v3; // x3
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w0
  int32_t v11; // w0
  int32_t v12; // w21
  int v13; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefab; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v15; // x0
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v16; // x22

  v6 = this;
  if ( (byte_42F0DD1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, count, (_DWORD)method, v3);
    this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)sub_B5D5C4(
                                                                        &UnityEngine_Object_TypeInfo,
                                                                        v7,
                                                                        v8,
                                                                        v9);
    byte_42F0DD1 = 1;
  }
  if ( !v6 )
    goto LABEL_14;
  v10 = ((__int64 (__fastcall *)(ComponentPool_SubmarineEffectScannablePanelComponent__o *))method->klass->rgctx_data->_3_ComponentPool_T__get_currentPoolSize->methodPointer)(v6);
  v11 = UnityEngine_Mathf__Min_41629336(count - v10, 0, 0LL);
  if ( v11 >= 1 )
  {
    v12 = v11;
    v13 = 0;
    while ( 1 )
    {
      prefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
              prefab,
              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)((__int64 (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *))method->klass->rgctx_data->_4_GameObjectExtensions_SafeGetComponent_T_->methodPointer)(v15);
      if ( !this )
        break;
      v16 = this;
      this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)v6->fields.availableComponentList;
      if ( !this )
        break;
      ((void (__fastcall *)(ComponentPool_SubmarineEffectScannablePanelComponent__o *, ComponentPool_SubmarineEffectScannablePanelComponent__o *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
        this,
        v16);
      if ( ++v13 >= v12 )
        return;
    }
LABEL_14:
    sub_B5D69C(this, *(_QWORD *)&count);
  }
}