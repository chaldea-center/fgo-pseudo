void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418A317 & 1) == 0 )
  {
    sub_B2C35C(&ItemIconComponent_TypeInfo, method);
    byte_418A317 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *possessionCounterLabel; // x23
  System_Text_StringBuilder_o *v16; // x23
  System_String_o *v17; // x24
  Il2CppObject *transform; // x0
  __int64 v19; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v21; // x22
  System_String_o *v22; // x23
  UIWidget_o *v23; // x21
  int v24; // s0
  UILabel_o *v28; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v31; // s8
  int32_t v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A316 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&posCount);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_5594/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, v12);
    sub_B2C35C(&StringLiteral_5595/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, v13);
    sub_B2C35C(&StringLiteral_5600/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, v14);
    byte_418A316 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v16 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v16, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5600/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v33 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    if ( !v16 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v16, v17, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                                  v16,
                                  v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_28;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v21 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0LL);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5595/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v32 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    if ( !v21 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v21, v22, transform, 0LL);
    v23 = (UIWidget_o *)this->fields.possessionCounterLabel;
    if ( isMax )
    {
      *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_red(0LL);
      if ( !v23 )
        goto LABEL_28;
    }
    else
    {
      *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
      if ( !v23 )
        goto LABEL_28;
    }
    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
    v28 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                                  v21,
                                  v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v28 )
      goto LABEL_28;
    UILabel__set_text(v28, (System_String_o *)transform, 0LL);
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
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v31 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B2C434(transform, v19);
    }
    v34.fields.x = 1.0 / v31;
    v34.fields.y = 1.0 / v31;
    v34.fields.z = 1.0 / v31;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v34, 0LL);
  }
}