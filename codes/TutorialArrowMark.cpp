void TutorialArrowMark___ctor(TutorialArrowMark_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TutorialArrowMark__Init(TutorialArrowMark_o *this, UnityEngine_Vector2_o pos, float way, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Component_o *messageLabel; // x0
  UILabel_o *v9; // x20
  UnityEngine_Transform_o *rotation; // x20
  float v11; // s10
  float v12; // s0
  UnityEngine_Transform_o *touchIconPosition; // x20
  float v14; // s11
  unsigned int localPosition; // s0
  float v16; // s10
  float v17; // s12
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D2B46C & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_13592/*"TUTORIAL_ARROW_MARK_MESSAGE"*/);
    byte_4D2B46C = 1;
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
  v9 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13592/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0);
  if ( !v9 )
    goto LABEL_17;
  UILabel__set_text(v9, (System_String_o *)messageLabel, 0);
  rotation = this->fields.rotation;
  v18.fields.y = 0.0;
  v11 = way * 0.017453;
  v18.fields.x = 0.0;
  v18.fields.z = v11;
  v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v18, 0);
  if ( !rotation )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(rotation, v22, 0);
  v12 = sinf(v11);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_17;
  v14 = v12;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_17;
  v16 = *(float *)&localPosition;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v17 = v19.fields.y,
        v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0),
        v20.fields.y = (float)(fabsf(v14) * 40.0) + v17,
        v20.fields.x = v16,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v20, 0),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0) )
  {
LABEL_17:
    sub_1C942F0(messageLabel, method);
  }
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v21, 0);
}