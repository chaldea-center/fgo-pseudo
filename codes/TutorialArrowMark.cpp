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
  float v11; // s10
  int v12; // s0
  float v16; // s0
  UnityEngine_Transform_o *touchIconPosition; // x20
  float v18; // s11
  unsigned int localPosition; // s0
  float v20; // s10
  float v21; // s1
  float v22; // s12
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4A59E0C & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13444/*"TUTORIAL_ARROW_MARK_MESSAGE"*/);
    byte_4A59E0C = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_17;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.oldArrow;
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.arrow;
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIcon;
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  v9 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13444/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0LL);
  if ( !v9 )
    goto LABEL_17;
  UILabel__set_text(v9, (System_String_o *)messageLabel, 0LL);
  rotation = this->fields.rotation;
  v23.fields.y = 0.0;
  v11 = way * 0.017453;
  v23.fields.x = 0.0;
  v23.fields.z = v11;
  *(UnityEngine_Quaternion_o *)&v12 = UnityEngine_Quaternion__Internal_FromEulerRad(v23, 0LL);
  if ( !rotation )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(rotation, *(UnityEngine_Quaternion_o *)&v12, 0LL);
  v16 = sinf(v11);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_17;
  v18 = v16;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_17;
  v20 = *(float *)&localPosition;
  *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)messageLabel,
                                           0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v22 = v21,
        v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL),
        v24.fields.y = (float)(fabsf(v18) * 40.0) + v22,
        v24.fields.x = v20,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v24, 0LL),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(messageLabel, method);
  }
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v25, 0LL);
}