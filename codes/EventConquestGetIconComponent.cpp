void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FC5E0 & 1) == 0 )
  {
    sub_B16FFC(&ItemIconComponent_TypeInfo, method);
    byte_40FC5E0 = 1;
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Text_StringBuilder_o *v20; // x23
  System_String_o *v21; // x24
  Il2CppObject *v22; // x0
  UILabel_o *counterLabel; // x22
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Text_StringBuilder_o *v29; // x22
  System_String_o *v30; // x23
  Il2CppObject *v31; // x0
  UIWidget_o *v32; // x21
  int v33; // s0
  UILabel_o *v37; // x20
  System_String_o *v38; // x0
  UILabel_o *v39; // x0
  UILabel_o *possessionNameLabel; // x20
  System_String_o *v41; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localScale; // s0
  UnityEngine_Component_o *possessionLabelBG; // x0
  float v45; // s8
  UnityEngine_Transform_o *v46; // x0
  int32_t v47; // [xsp+8h] [xbp-58h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC5DF & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&posCount);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5579, v12);
    sub_B16FFC(&StringLiteral_5580, v13);
    sub_B16FFC(&StringLiteral_5585, v14);
    byte_40FC5DF = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v20 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v16, v17, v18, v19);
    System_Text_StringBuilder___ctor(v20, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5585, 0LL);
    v48 = getCount;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    if ( !v20 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v20, v21, v22, 0LL);
    counterLabel = this->fields.counterLabel;
    v24 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
                               v20,
                               v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_28;
    UILabel__set_text(counterLabel, v24, 0LL);
    v29 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v25, v26, v27, v28);
    System_Text_StringBuilder___ctor(v29, 0LL);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5580, 0LL);
    v47 = posCount;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
    if ( !v29 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v29, v30, v31, 0LL);
    v32 = (UIWidget_o *)this->fields.possessionCounterLabel;
    if ( isMax )
    {
      *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_red(0LL);
      if ( !v32 )
        goto LABEL_28;
    }
    else
    {
      *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
      if ( !v32 )
        goto LABEL_28;
    }
    UIWidget__set_color(v32, *(UnityEngine_Color_o *)&v33, 0LL);
    v37 = this->fields.possessionCounterLabel;
    v38 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v29->klass->vtable._3_ToString.method)(
                               v29,
                               v29->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v37 )
      goto LABEL_28;
    UILabel__set_text(v37, v38, 0LL);
    v39 = this->fields.possessionCounterLabel;
    if ( !v39 )
      goto LABEL_28;
    UILabel__SetCondensedScale(v39, this->fields.possesionCouterLabelMaxWidth, 0LL);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5579, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, v41, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL),
          (possessionLabelBG = (UnityEngine_Component_o *)this->fields.possessionLabelBG) == 0LL)
      || (v45 = *(float *)&localScale, (v46 = UnityEngine_Component__get_transform(possessionLabelBG, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B170D4();
    }
    v49.fields.x = 1.0 / v45;
    v49.fields.y = 1.0 / v45;
    v49.fields.z = 1.0 / v45;
    UnityEngine_Transform__set_localScale(v46, v49, 0LL);
  }
}