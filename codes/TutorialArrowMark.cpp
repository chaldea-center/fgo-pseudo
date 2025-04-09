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
  __int64 v8; // x1
  UnityEngine_Component_o *messageLabel; // x0
  UILabel_o *v10; // x20
  UnityEngine_Transform_o *rotation; // x20
  float v12; // s10
  int v13; // s0
  float v17; // s0
  UnityEngine_Transform_o *touchIconPosition; // x20
  float v19; // s11
  unsigned int localPosition; // s0
  float v21; // s10
  float v22; // s1
  float v23; // s12
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_49B9AAC & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_13239/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, v8);
    byte_49B9AAC = 1;
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
  v10 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13239/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0LL);
  if ( !v10 )
    goto LABEL_17;
  UILabel__set_text(v10, (System_String_o *)messageLabel, 0LL);
  rotation = this->fields.rotation;
  v24.fields.y = 0.0;
  v12 = way * 0.017453;
  v24.fields.x = 0.0;
  v24.fields.z = v12;
  *(UnityEngine_Quaternion_o *)&v13 = UnityEngine_Quaternion__Internal_FromEulerRad(v24, 0LL);
  if ( !rotation )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(rotation, *(UnityEngine_Quaternion_o *)&v13, 0LL);
  v17 = sinf(v12);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_17;
  v19 = v17;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_17;
  v21 = *(float *)&localPosition;
  *(UnityEngine_Vector3_o *)(&v22 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)messageLabel,
                                           0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v23 = v22,
        v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL),
        v25.fields.y = (float)(fabsf(v19) * 40.0) + v23,
        v25.fields.x = v21,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v25, 0LL),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL) )
  {
LABEL_17:
    sub_1B4D1EC(messageLabel, method);
  }
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v26, 0LL);
}