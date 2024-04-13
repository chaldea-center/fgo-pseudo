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
  int v4; // w2
  __int64 v5; // x3
  float y; // s8
  float x; // s9
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *messageLabel; // x0
  UILabel_o *v14; // x20
  UnityEngine_Transform_o *rotation; // x20
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

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42EAD07 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v4, v5);
    sub_B5D5C4(&StringLiteral_13615/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, v10, v11, v12);
    byte_42EAD07 = 1;
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
  v14 = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13615/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0LL);
  if ( !v14 )
    goto LABEL_18;
  UILabel__set_text(v14, (System_String_o *)messageLabel, 0LL);
  rotation = this->fields.rotation;
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Euler(0.0, 0.0, way, 0LL);
  if ( !rotation )
    goto LABEL_18;
  UnityEngine_Transform__set_localRotation(rotation, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = sinf(way * 0.017453);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_18;
  v22 = v20;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel )
    goto LABEL_18;
  v24 = *(float *)&localPosition;
  *(UnityEngine_Vector3_o *)(&v25 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)messageLabel,
                                           0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.touchIconPosition;
  if ( !messageLabel
    || (v26 = v25,
        v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL),
        v27.fields.y = (float)(fabsf(v22) * 40.0) + v26,
        v27.fields.x = v24,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v27, 0LL),
        (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(messageLabel, method);
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v28, 0LL);
}