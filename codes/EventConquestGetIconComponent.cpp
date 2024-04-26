void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_43544F7 & 1) == 0 )
  {
    sub_B70694(&ItemIconComponent_TypeInfo);
    byte_43544F7 = 1;
  }
  if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  }
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetIconComponent__setPossessionCounterLabel(
        EventConquestGetIconComponent_o *this,
        int32_t posCount,
        int32_t getCount,
        bool isMax,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionCounterLabel; // x23
  System_Text_StringBuilder_o *v10; // x23
  System_String_o *v11; // x24
  __int64 v12; // x2
  Il2CppObject *transform; // x0
  __int64 v14; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v16; // x22
  System_String_o *v17; // x23
  __int64 v18; // x2
  UIWidget_o *v19; // x21
  int v20; // s0
  UILabel_o *v24; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v27; // s8
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43544F6 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_5682/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/);
    sub_B70694(&StringLiteral_5683/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/);
    sub_B70694(&StringLiteral_5688/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/);
    byte_43544F6 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v10 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v10, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v29 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v12);
    if ( !v10 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v10, v11, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                  v10,
                                  v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_28;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v16 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v16, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v28 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v18);
    if ( !v16 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v16, v17, transform, 0LL);
    v19 = (UIWidget_o *)this->fields.possessionCounterLabel;
    if ( isMax )
    {
      *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_red(0LL);
      if ( !v19 )
        goto LABEL_28;
    }
    else
    {
      *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
      if ( !v19 )
        goto LABEL_28;
    }
    UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v20, 0LL);
    v24 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                                  v16,
                                  v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v24 )
      goto LABEL_28;
    UILabel__set_text(v24, (System_String_o *)transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0LL);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5682/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v27 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B7076C(transform, v14);
    }
    v30.fields.x = 1.0 / v27;
    v30.fields.y = 1.0 / v27;
    v30.fields.z = 1.0 / v27;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v30, 0LL);
  }
}