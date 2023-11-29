void __fastcall WarBoardBuffPopupComponent___ctor(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  this->fields.ADD_DEPTH = 400;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBuffPopupComponent__Destroy(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F8933 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8933 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBuffPopupComponent__SetLabel(
        WarBoardBuffPopupComponent_o *this,
        System_String_o *popupName,
        int32_t popupIconId,
        UnityEngine_Vector3_o targetPosition,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *buffIcon; // x0
  UnityEngine_GameObject_o *v14; // x0
  UISprite_o *v15; // x23
  UnityEngine_GameObject_o *v16; // x22
  bool v17; // w0
  UIWidget_o *v18; // x0
  UILabel_o *buffNameLabel; // x0
  UIWidget_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0
  struct UISprite_o *v24; // x8
  UnityEngine_Transform_o *v25; // x20
  float v26; // s0
  UILabel_o *v27; // x0
  float v28; // s8
  float v29; // s0
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  if ( (byte_40F8932 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, popupName);
    byte_40F8932 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !transform )
    goto LABEL_19;
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v30, 0LL);
  buffIcon = (UnityEngine_Component_o *)this->fields.buffIcon;
  if ( !buffIcon )
    goto LABEL_19;
  v14 = UnityEngine_Component__get_gameObject(buffIcon, 0LL);
  v15 = this->fields.buffIcon;
  v16 = v14;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v17 = AtlasManager__SetSBuffIconByIconId(v15, popupIconId, 0LL);
  if ( !v16 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v16, v17, 0LL);
  v18 = (UIWidget_o *)this->fields.buffIcon;
  if ( !v18 )
    goto LABEL_19;
  UIWidget__set_depth(v18, this->fields.ADD_DEPTH + v18->fields.mDepth, 0LL);
  buffNameLabel = this->fields.buffNameLabel;
  if ( !buffNameLabel )
    goto LABEL_19;
  UILabel__set_text(buffNameLabel, popupName, 0LL);
  v20 = (UIWidget_o *)this->fields.buffNameLabel;
  if ( !v20 )
    goto LABEL_19;
  UIWidget__set_depth(v20, this->fields.ADD_DEPTH + v20->fields.mDepth, 0LL);
  v21 = (UnityEngine_Component_o *)this->fields.buffIcon;
  if ( !v21 )
    goto LABEL_19;
  v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !v22
    || (v23 = UnityEngine_GameObject__get_transform(v22, 0LL), (v24 = this->fields.buffIcon) == 0LL)
    || (v25 = v23,
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v24->klass->vtable._22_get_localSize.method)(
          this->fields.buffIcon,
          v24->klass->vtable._23_get_drawingDimensions.methodPtr),
        (v27 = this->fields.buffNameLabel) == 0LL)
    || (v28 = v26, LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize(v27, 0LL), !v25) )
  {
LABEL_19:
    sub_B170D4();
  }
  v31.fields.y = 2.0;
  v31.fields.x = -(float)((float)(v28 * 0.5) + (float)(v29 * 0.5));
  v31.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v25, v31, 0LL);
}