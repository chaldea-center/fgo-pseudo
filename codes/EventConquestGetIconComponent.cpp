void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B061D1 & 1) == 0 )
  {
    sub_1BC3008(&ItemIconComponent_TypeInfo, method);
    byte_4B061D1 = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetIconComponent__setPossessionCounterLabel(
        EventConquestGetIconComponent_o *this,
        int64_t posCount,
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
  __int64 v15; // x1
  UnityEngine_Object_o *possessionCounterLabel; // x23
  System_Text_StringBuilder_o *v17; // x23
  System_String_o *v18; // x24
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *transform; // x0
  __int64 v23; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v25; // x22
  System_String_o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  float v30; // s1
  float v31; // s0
  float v32; // s3
  float v33; // s2
  UILabel_o *v34; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v37; // s8
  int64_t v38; // [xsp+8h] [xbp-68h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B061D0 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, posCount);
    sub_1BC3008(&long_TypeInfo, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_5515/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, v13);
    sub_1BC3008(&StringLiteral_5516/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, v14);
    sub_1BC3008(&StringLiteral_5521/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, v15);
    byte_4B061D0 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v17 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v17, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5521/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v39 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v19, v20, v21);
    if ( !v17 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v17, v18, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                                  v17,
                                  v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_24;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v25 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v25, 0LL);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5516/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v38 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v27, v28, v29);
    if ( !v25 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v25, v26, transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v30 = 0.0;
    if ( !isMax )
      v30 = 1.0;
    if ( !transform )
      goto LABEL_24;
    v31 = 1.0;
    v32 = 1.0;
    v33 = v30;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)(&v30 - 1), 0LL);
    v34 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v25->klass->vtable._3_ToString.method)(
                                  v25,
                                  v25->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v34 )
      goto LABEL_24;
    UILabel__set_text(v34, (System_String_o *)transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0, 0LL);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5515/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v37 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1BC3264(transform, v23);
    }
    v40.fields.x = 1.0 / v37;
    v40.fields.y = 1.0 / v37;
    v40.fields.z = 1.0 / v37;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v40, 0LL);
  }
}