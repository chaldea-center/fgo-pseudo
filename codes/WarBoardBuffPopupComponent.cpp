void __fastcall WarBoardBuffPopupComponent___ctor(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  this->fields.ADD_DEPTH = 400;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBuffPopupComponent__Destroy(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_41865E4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41865E4 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UISprite_o *buffIcon; // x23
  UnityEngine_GameObject_o *v15; // x22
  struct UISprite_o *v16; // x8
  UnityEngine_Transform_o *v17; // x20
  float v18; // s0
  float v19; // s8
  float v20; // s0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  if ( (byte_41865E3 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, popupName);
    byte_41865E3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v21, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_19;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  buffIcon = this->fields.buffIcon;
  v15 = v13;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetSBuffIconByIconId(buffIcon, popupIconId, 0LL);
  if ( !v15 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v15, (unsigned __int8)gameObject & 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_19;
  UIWidget__set_depth((UIWidget_o *)gameObject, this->fields.ADD_DEPTH + LODWORD(gameObject[7].klass), 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel;
  if ( !gameObject )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)gameObject, popupName, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel;
  if ( !gameObject )
    goto LABEL_19;
  UIWidget__set_depth((UIWidget_o *)gameObject, this->fields.ADD_DEPTH + LODWORD(gameObject[7].klass), 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL),
        (v16 = this->fields.buffIcon) == 0LL)
    || (v17 = (UnityEngine_Transform_o *)gameObject,
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._22_get_localSize.method)(
          this->fields.buffIcon,
          v16->klass->vtable._23_get_drawingDimensions.methodPtr),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel) == 0LL)
    || (v19 = v18, LODWORD(v20) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL), !v17) )
  {
LABEL_19:
    sub_B2C434(gameObject, v12);
  }
  v22.fields.y = 2.0;
  v22.fields.x = -(float)((float)(v19 * 0.5) + (float)(v20 * 0.5));
  v22.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v17, v22, 0LL);
}