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

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4189A07 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_13459/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, v8);
    byte_4189A07 = 1;
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
  v10 = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13459/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0LL);
  if ( !v10 )
    goto LABEL_18;
  UILabel__set_text(v10, (System_String_o *)messageLabel, 0LL);
  rotation = this->fields.rotation;
  *(UnityEngine_Quaternion_o *)&v12 = UnityEngine_Quaternion__Euler(0.0, 0.0, way, 0LL);
  if ( !rotation )
    goto LABEL_18;
  UnityEngine_Transform__set_localRotation(rotation, *(UnityEngine_Quaternion_o *)&v12, 0LL);
  v16 = sinf(way * 0.017453);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_18;
  v18 = v16;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_18;
  v20 = *(float *)&localPosition;
  *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)messageLabel,
                                           0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v22 = v21,
        v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL),
        v23.fields.y = (float)(fabsf(v18) * 40.0) + v22,
        v23.fields.x = v20,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v23, 0LL),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL) )
  {
LABEL_18:
    sub_B2C434(messageLabel, method);
  }
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v24, 0LL);
}