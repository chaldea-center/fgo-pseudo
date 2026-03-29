void EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A9EA & 1) == 0 )
  {
    sub_1C93AD4(&ItemIconComponent_TypeInfo);
    byte_4D2A9EA = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0);
}


void EventConquestGetIconComponent__setPossessionCounterLabel(
        EventConquestGetIconComponent_o *this,
        int64_t posCount,
        int32_t getCount,
        bool isMax,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionCounterLabel; // x23
  System_Text_StringBuilder_o *v10; // x23
  System_String_o *v11; // x24
  Il2CppObject *transform; // x0
  __int64 v13; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v15; // x22
  System_String_o *v16; // x23
  UILabel_o *v17; // x20
  UILabel_o *possessionNameLabel; // x20
  float v19; // s8
  unsigned int localScale; // s0
  int64_t v21; // [xsp+8h] [xbp-68h] BYREF
  int32_t v22; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A9E9 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&StringLiteral_5588/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/);
    sub_1C93AD4(&StringLiteral_5589/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/);
    sub_1C93AD4(&StringLiteral_5594/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/);
    byte_4D2A9E9 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0, 0) )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v10, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0);
    v22 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    if ( !v10 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v10, v11, transform, 0);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v10->klass->vtable._3_ToString.methodPtr)(
                                  v10,
                                  v10->klass->vtable._3_ToString.method);
    if ( !counterLabel )
      goto LABEL_24;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0);
    v15 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v15, 0);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5589/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0);
    v21 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
    if ( !v15 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v15, v16, transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v24.fields.g = 0.0;
    if ( !isMax )
      v24.fields.g = 1.0;
    if ( !transform )
      goto LABEL_24;
    v24.fields.r = 1.0;
    v24.fields.a = 1.0;
    v24.fields.b = v24.fields.g;
    UIWidget__set_color((UIWidget_o *)transform, v24, 0);
    v17 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                                  v15,
                                  v15->klass->vtable._3_ToString.method);
    if ( !v17 )
      goto LABEL_24;
    UILabel__set_text(v17, (System_String_o *)transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0, 0);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5588/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0)
      || (v19 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0) )
    {
LABEL_24:
      sub_1C93D2C(transform, v13);
    }
    v23.fields.x = 1.0 / v19;
    v23.fields.y = 1.0 / v19;
    v23.fields.z = 1.0 / v19;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v23, 0);
  }
}