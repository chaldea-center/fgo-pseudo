void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB158 & 1) == 0 )
  {
    sub_B5D5C4(&ItemIconComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB158 = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Object_o *possessionCounterLabel; // x23
  System_Text_StringBuilder_o *v28; // x23
  System_String_o *v29; // x24
  Il2CppObject *transform; // x0
  __int64 v31; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v33; // x22
  System_String_o *v34; // x23
  UIWidget_o *v35; // x21
  int v36; // s0
  UILabel_o *v40; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v43; // s8
  int32_t v44; // [xsp+8h] [xbp-58h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB157 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, posCount, getCount, isMax);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5671/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5672/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_5677/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, v24, v25, v26);
    byte_42EB157 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v28 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v28, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v45 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    if ( !v28 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v28, v29, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v28->klass->vtable._3_ToString.method)(
                                  v28,
                                  v28->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_28;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v33 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v33, 0LL);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5672/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v44 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    if ( !v33 )
      goto LABEL_28;
    System_Text_StringBuilder__AppendFormat(v33, v34, transform, 0LL);
    v35 = (UIWidget_o *)this->fields.possessionCounterLabel;
    if ( isMax )
    {
      *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_red(0LL);
      if ( !v35 )
        goto LABEL_28;
    }
    else
    {
      *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
      if ( !v35 )
        goto LABEL_28;
    }
    UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL);
    v40 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v33->klass->vtable._3_ToString.method)(
                                  v33,
                                  v33->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v40 )
      goto LABEL_28;
    UILabel__set_text(v40, (System_String_o *)transform, 0LL);
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
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5671/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v43 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B5D69C(transform, v31);
    }
    v46.fields.x = 1.0 / v43;
    v46.fields.y = 1.0 / v43;
    v46.fields.z = 1.0 / v43;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v46, 0LL);
  }
}