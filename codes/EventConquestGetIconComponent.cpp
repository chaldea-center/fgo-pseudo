void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4216EF7 & 1) == 0 )
  {
    sub_B0D8A4(&ItemIconComponent_TypeInfo, method);
    byte_4216EF7 = 1;
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Text_StringBuilder_o *v18; // x23
  System_String_o *v19; // x24
  Il2CppObject *transform; // x0
  UILabel_o *counterLabel; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Text_StringBuilder_o *v24; // x22
  System_String_o *v25; // x23
  UIWidget_o *v26; // x21
  int v27; // s0
  UILabel_o *v31; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v34; // s8
  int32_t v35; // [xsp+8h] [xbp-58h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216EF6 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&posCount);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_5610/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, v12);
    sub_B0D8A4(&StringLiteral_5611/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, v13);
    sub_B0D8A4(&StringLiteral_5616/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, v14);
    byte_4216EF6 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v18 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v16, v17);
    System_Text_StringBuilder___ctor(v18, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5616/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v36 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    if ( !v18 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v18, v19, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                  v18,
                                  v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_28;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v24 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v22, v23);
    System_Text_StringBuilder___ctor(v24, 0LL);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5611/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v35 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    if ( !v24 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v24, v25, transform, 0LL);
    v26 = (UIWidget_o *)this->fields.possessionCounterLabel;
    if ( isMax )
    {
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_red(0LL);
      if ( !v26 )
        goto LABEL_28;
    }
    else
    {
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
      if ( !v26 )
        goto LABEL_28;
    }
    UIWidget__set_color(v26, *(UnityEngine_Color_o *)&v27, 0LL);
    v31 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                                  v24,
                                  v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v31 )
      goto LABEL_28;
    UILabel__set_text(v31, (System_String_o *)transform, 0LL);
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
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5610/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v34 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B0D97C(transform);
    }
    v37.fields.x = 1.0 / v34;
    v37.fields.y = 1.0 / v34;
    v37.fields.z = 1.0 / v34;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v37, 0LL);
  }
}