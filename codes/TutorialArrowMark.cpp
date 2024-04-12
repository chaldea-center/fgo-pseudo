void __fastcall TutorialArrowMark___ctor(TutorialArrowMark_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMark__Init(
        TutorialArrowMark_o *this,
        UnityEngine_Vector2_o pos,
        float way,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Component_o *messageLabel; // x0
  UILabel_o *v9; // x20
  UnityEngine_Transform_o *rotation; // x20
  int v11; // s0
  float v15; // s0
  UnityEngine_Transform_o *touchIconPosition; // x20
  float v17; // s11
  unsigned int localPosition; // s0
  float v19; // s10
  float v20; // s1
  float v21; // s12
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42B23A5 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_13556/*"TUTORIAL_ARROW_MARK_MESSAGE"*/);
    byte_42B23A5 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_18;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.oldArrow;
  if ( !messageLabel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.arrow;
  if ( !messageLabel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIcon;
  if ( !messageLabel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  v9 = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13556/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0LL);
  if ( !v9 )
    goto LABEL_18;
  UILabel__set_text(v9, (System_String_o *)messageLabel, 0LL);
  rotation = this->fields.rotation;
  *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Quaternion__Euler(0.0, 0.0, way, 0LL);
  if ( !rotation )
    goto LABEL_18;
  UnityEngine_Transform__set_localRotation(rotation, *(UnityEngine_Quaternion_o *)&v11, 0LL);
  v15 = sinf(way * 0.017453);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_18;
  v17 = v15;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_18;
  v19 = *(float *)&localPosition;
  *(UnityEngine_Vector3_o *)(&v20 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)messageLabel,
                                           0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v21 = v20,
        v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL),
        v22.fields.y = (float)(fabsf(v17) * 40.0) + v21,
        v22.fields.x = v19,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v22, 0LL),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(messageLabel, method);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v23, 0LL);
}