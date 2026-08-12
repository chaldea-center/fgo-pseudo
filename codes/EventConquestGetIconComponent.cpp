void EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A4B5 & 1) == 0 )
  {
    sub_2213A60(&ItemIconComponent_TypeInfo);
    byte_596A4B5 = 1;
  }
  if ( !*(&ItemIconComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, method, v2);
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventConquestGetIconComponent__setPossessionCounterLabel(
        EventConquestGetIconComponent_o *this,
        int64_t posCount,
        int32_t getCount,
        bool isMax,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionCounterLabel; // x23
  System_Text_StringBuilder_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x24
  Il2CppObject *transform; // x0
  __int64 v15; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v17; // x22
  System_String_o *v18; // x23
  UILabel_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *possessionNameLabel; // x20
  float v24; // s8
  unsigned int localScale; // s0
  int64_t v26; // [xsp+8h] [xbp-68h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A4B4 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_5764/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/);
    sub_2213A60(&StringLiteral_5765/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/);
    sub_2213A60(&StringLiteral_5770/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/);
    byte_596A4B4 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, posCount, *(_QWORD *)&getCount);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0, 0) )
  {
    v10 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v10, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0);
    v27 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v27);
    if ( !v10 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v10, v13, transform, 0);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v10->klass->vtable._3_ToString.methodPtr)(
                                  v10,
                                  v10->klass->vtable._3_ToString.method);
    if ( !counterLabel )
      goto LABEL_24;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0);
    v17 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v17, 0);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0);
    v26 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v26);
    if ( !v17 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v17, v18, transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    v29.fields.g = 1.0;
    v29.fields.a = 1.0;
    if ( isMax )
      v29.fields.g = 0.0;
    v29.fields.r = 1.0;
    v29.fields.b = v29.fields.g;
    UIWidget__set_color((UIWidget_o *)transform, v29, 0);
    v20 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v17->klass->vtable._3_ToString.methodPtr)(
                                  v17,
                                  v17->klass->vtable._3_ToString.method);
    if ( !v20 )
      goto LABEL_24;
    UILabel__set_text(v20, (System_String_o *)transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0, 0);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0)
      || (v24 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0) )
    {
LABEL_24:
      sub_2213CDC(transform, v15);
    }
    v28.fields.x = 1.0 / v24;
    v28.fields.y = 1.0 / v24;
    v28.fields.z = 1.0 / v24;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v28, 0);
  }
}