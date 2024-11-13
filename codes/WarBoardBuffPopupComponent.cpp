void __fastcall WarBoardBuffPopupComponent___ctor(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  this->fields.ADD_DEPTH = 400;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBuffPopupComponent__Destroy(WarBoardBuffPopupComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B13B88 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13B88 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  __int64 v14; // x1
  UISprite_o *buffIcon; // x23
  UnityEngine_GameObject_o *v16; // x22
  struct UISprite_o *v17; // x8
  UnityEngine_Transform_o *v18; // x20
  float v19; // s0
  float v20; // s8
  float v21; // s0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  if ( (byte_4B13B87 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, popupName, *(_QWORD *)&popupIconId);
    byte_4B13B87 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v22, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_18;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  buffIcon = this->fields.buffIcon;
  v16 = v13;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetSBuffIconByIconId(buffIcon, popupIconId, 0LL);
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v16, (unsigned __int8)gameObject & 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_18;
  UIWidget__set_depth((UIWidget_o *)gameObject, this->fields.ADD_DEPTH + LODWORD(gameObject[7].monitor), 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel;
  if ( !gameObject )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)gameObject, popupName, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel;
  if ( !gameObject )
    goto LABEL_18;
  UIWidget__set_depth((UIWidget_o *)gameObject, this->fields.ADD_DEPTH + LODWORD(gameObject[7].monitor), 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.buffIcon;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL),
        (v17 = this->fields.buffIcon) == 0LL)
    || (v18 = (UnityEngine_Transform_o *)gameObject,
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v17->klass->vtable._22_get_localSize.method)(
          this->fields.buffIcon,
          v17->klass->vtable._23_get_drawingDimensions.methodPtr),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.buffNameLabel) == 0LL)
    || (v20 = v19, LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL), !v18) )
  {
LABEL_18:
    sub_1BCAA3C(gameObject, v12);
  }
  v23.fields.y = 2.0;
  v23.fields.x = -(float)((float)(v20 * 0.5) + (float)(v21 * 0.5));
  v23.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v18, v23, 0LL);
}