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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *oldArrow; // x0
  UnityEngine_GameObject_o *arrow; // x0
  UnityEngine_GameObject_o *touchIcon; // x0
  UILabel_o *v14; // x20
  System_String_o *v15; // x0
  UnityEngine_Transform_o *rotation; // x20
  int v17; // s0
  float v21; // s0
  UnityEngine_Transform_o *touchIconPosition; // x20
  float v23; // s11
  unsigned int localPosition; // s0
  UnityEngine_Transform_o *v25; // x0
  float v26; // s10
  float v27; // s1
  UnityEngine_Transform_o *v28; // x0
  float v29; // s12
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FB8CE & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_13403/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, v8);
    byte_40FB8CE = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  oldArrow = this->fields.oldArrow;
  if ( !oldArrow )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(oldArrow, 0, 0LL);
  arrow = this->fields.arrow;
  if ( !arrow )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(arrow, 1, 0LL);
  touchIcon = this->fields.touchIcon;
  if ( !touchIcon )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(touchIcon, 1, 0LL);
  v14 = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13403/*"TUTORIAL_ARROW_MARK_MESSAGE"*/, 0LL);
  if ( !v14 )
    goto LABEL_18;
  UILabel__set_text(v14, v15, 0LL);
  rotation = this->fields.rotation;
  *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__Euler(0.0, 0.0, way, 0LL);
  if ( !rotation )
    goto LABEL_18;
  UnityEngine_Transform__set_localRotation(rotation, *(UnityEngine_Quaternion_o *)&v17, 0LL);
  v21 = sinf(way * 0.017453);
  touchIconPosition = this->fields.touchIconPosition;
  if ( !touchIconPosition )
    goto LABEL_18;
  v23 = v21;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.touchIconPosition, 0LL);
  v25 = this->fields.touchIconPosition;
  if ( !v25 )
    goto LABEL_18;
  v26 = *(float *)&localPosition;
  *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(v25, 0LL);
  v28 = this->fields.touchIconPosition;
  if ( !v28
    || (v29 = v27,
        v31 = UnityEngine_Transform__get_localPosition(v28, 0LL),
        v31.fields.y = (float)(fabsf(v23) * 40.0) + v29,
        v31.fields.x = v26,
        UnityEngine_Transform__set_localPosition(touchIconPosition, v31, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v32, 0LL);
}