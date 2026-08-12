void WarBoardBuffPopupComponent___ctor(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  this->fields.ADD_DEPTH = 400;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardBuffPopupComponent__Destroy(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596DEF4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEF4 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UISprite_o *buffIcon; // x23
  UnityEngine_GameObject_o *v17; // x22
  struct UISprite_o *v18; // x8
  UnityEngine_Transform_o *v19; // x20
  float v20; // s0
  float v21; // s8
  float v22; // s0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  if ( (byte_596DEF3 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596DEF3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_18;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_18;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  buffIcon = this->fields.buffIcon;
  v17 = v13;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetSBuffIconByIconId(buffIcon, popupIconId, 0);
  if ( !v17 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v17, (unsigned __int8)gameObject & 1, 0);
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
        (v18 = this->fields.buffIcon) == 0)
    || (v19 = (UnityEngine_Transform_o *)gameObject,
        ((void (__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))v18->klass->vtable._22_get_localSize.methodPtr)(
          v18,
          this->fields.buffIcon,
          v18->klass->vtable._22_get_localSize.method),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel) == 0)
    || (v21 = v20, LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0), !v19) )
  {
LABEL_18:
    sub_2213CDC(gameObject, v12);
  }
  v24.fields.y = 2.0;
  v24.fields.z = 0.0;
  v24.fields.x = -(float)((float)(v21 * 0.5) + (float)(v22 * 0.5));
  UnityEngine_Transform__set_localPosition(v19, v24, 0);
}