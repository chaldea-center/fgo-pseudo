void TutorialArrowMark___ctor(TutorialArrowMark_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TutorialArrowMark__Init(TutorialArrowMark_o *this, UnityEngine_Vector2_o pos, float way, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *v11; // x20
  UnityEngine_Transform_o *rotation; // x20
  float v13; // s10
  float v14; // s0
  UnityEngine_Transform_o *touchIconPosition; // x20
  float v16; // s11
  unsigned int localPosition; // s0
  float v18; // s10
  float v19; // s12
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_5937288 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_14064/*"TUTORIAL_ARROW_MARK_MESSAGE"*/);
    byte_5937288 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_17;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.oldArrow;
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.arrow;
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIcon;
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
  v11 = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14064/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0);
  if ( !v11 )
    goto LABEL_17;
  UILabel__set_text(v11, (System_String_o *)messageLabel, 0);
  v20.fields.y = 0.0;
  rotation = this->fields.rotation;
  v13 = way * 0.017453;
  v20.fields.x = 0.0;
  v20.fields.z = v13;
  v24 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0);
  if ( !rotation )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(rotation, v24, 0);
  v14 = sinf(v13);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_17;
  v16 = v14;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_17;
  v18 = *(float *)&localPosition;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v19 = v21.fields.y,
        v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0),
        v22.fields.y = (float)(fabsf(v16) * 40.0) + v19,
        v22.fields.x = v18,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v22, 0),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0) )
  {
LABEL_17:
    sub_21FFECC(messageLabel, method);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v23, 0);
}