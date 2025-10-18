void WarBoardBuffPopupComponent___ctor(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  this->fields.ADD_DEPTH = 400;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardBuffPopupComponent__Destroy(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C40822 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40822 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void WarBoardBuffPopupComponent__SetLabel(
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
  UnityEngine_GameObject_o *v12; // x0
  UISprite_o *buffIcon; // x23
  UnityEngine_GameObject_o *v14; // x22
  struct UISprite_o *v15; // x8
  UnityEngine_Transform_o *v16; // x20
  float v17; // s0
  float v18; // s8
  float v19; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  if ( (byte_4C40821 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C40821 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_18;
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v20, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_18;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  buffIcon = this->fields.buffIcon;
  v14 = v12;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetSBuffIconByIconId(buffIcon, popupIconId, 0);
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v14, (unsigned __int8)gameObject & 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_18;
  UIWidget__set_depth((UIWidget_o *)gameObject, this->fields.ADD_DEPTH + LODWORD(gameObject[7].monitor), 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel;
  if ( !gameObject )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)gameObject, popupName, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel;
  if ( !gameObject )
    goto LABEL_18;
  UIWidget__set_depth((UIWidget_o *)gameObject, this->fields.ADD_DEPTH + LODWORD(gameObject[7].monitor), 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0),
        (v15 = this->fields.buffIcon) == 0)
    || (v16 = (UnityEngine_Transform_o *)gameObject,
        ((void (__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))v15->klass->vtable._22_get_localSize.methodPtr)(
          v15,
          this->fields.buffIcon,
          v15->klass->vtable._22_get_localSize.method),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel) == 0)
    || (v18 = v17, LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0), !v16) )
  {
LABEL_18:
    sub_1C372B4(gameObject);
  }
  v21.fields.y = 2.0;
  v21.fields.x = -(float)((float)(v18 * 0.5) + (float)(v19 * 0.5));
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v16, v21, 0);
}