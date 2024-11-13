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
  __int64 v4; // x2
  float y; // s8
  float x; // s9
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v12; // x1
  UILabel_o *v13; // x20
  UnityEngine_Transform_o *rotation; // x20
  float v15; // s10
  int v16; // s0
  float v20; // s0
  UnityEngine_Transform_o *touchIconPosition; // x20
  float v22; // s11
  unsigned int localPosition; // s0
  float v24; // s10
  float v25; // s1
  float v26; // s12
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B14E62 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v4);
    sub_1BCA7E0(&StringLiteral_13607/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, v9, v10);
    byte_4B14E62 = 1;
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
  v13 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13607/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0LL);
  if ( !v13 )
    goto LABEL_17;
  UILabel__set_text(v13, (System_String_o *)messageLabel, 0LL);
  rotation = this->fields.rotation;
  v27.fields.y = 0.0;
  v15 = way * 0.017453;
  v27.fields.x = 0.0;
  v27.fields.z = v15;
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Internal_FromEulerRad(v27, 0LL);
  if ( !rotation )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(rotation, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = sinf(v15);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_17;
  v22 = v20;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_17;
  v24 = *(float *)&localPosition;
  *(UnityEngine_Vector3_o *)(&v25 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)messageLabel,
                                           0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v26 = v25,
        v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL),
        v28.fields.y = (float)(fabsf(v22) * 40.0) + v26,
        v28.fields.x = v24,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v28, 0LL),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(messageLabel, method);
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v29, 0LL);
}