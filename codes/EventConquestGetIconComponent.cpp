void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A0001E & 1) == 0 )
  {
    sub_1B640C8(&ItemIconComponent_TypeInfo, method);
    byte_4A0001E = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
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
  float v26; // s1
  float v27; // s0
  float v28; // s3
  float v29; // s2
  UILabel_o *v30; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v33; // s8
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0001D & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&posCount);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_5560/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, v12);
    sub_1B640C8(&StringLiteral_5561/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, v13);
    sub_1B640C8(&StringLiteral_5566/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, v14);
    byte_4A0001D = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v18 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v16, v17);
    System_Text_StringBuilder___ctor(v18, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5566/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v35 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    if ( !v18 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v18, v19, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                  v18,
                                  v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_24;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v24 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v22, v23);
    System_Text_StringBuilder___ctor(v24, 0LL);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5561/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v34 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    if ( !v24 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v24, v25, transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v26 = 0.0;
    if ( !isMax )
      v26 = 1.0;
    if ( !transform )
      goto LABEL_24;
    v27 = 1.0;
    v28 = 1.0;
    v29 = v26;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)(&v26 - 1), 0LL);
    v30 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                                  v24,
                                  v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v30 )
      goto LABEL_24;
    UILabel__set_text(v30, (System_String_o *)transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0LL);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v33 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1B64324(transform);
    }
    v36.fields.x = 1.0 / v33;
    v36.fields.y = 1.0 / v33;
    v36.fields.z = 1.0 / v33;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v36, 0LL);
  }
}