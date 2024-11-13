void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19F79 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemIconComponent_TypeInfo, method, v2);
    byte_4B19F79 = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *possessionCounterLabel; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Text_StringBuilder_o *v25; // x23
  __int64 v26; // x1
  System_String_o *v27; // x24
  Il2CppObject *transform; // x0
  __int64 v29; // x1
  UILabel_o *counterLabel; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Text_StringBuilder_o *v34; // x22
  System_String_o *v35; // x23
  float v36; // s1
  float v37; // s0
  float v38; // s3
  float v39; // s2
  UILabel_o *v40; // x20
  __int64 v41; // x1
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v44; // s8
  int32_t v45; // [xsp+8h] [xbp-58h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F78 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&posCount, *(_QWORD *)&getCount);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_5665/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5666/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_5671/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, v19, v20);
    byte_4B19F78 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&posCount);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v25 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v22, v23, v24);
    System_Text_StringBuilder___ctor(v25, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5671/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v46 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    if ( !v25 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v25, v27, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v25->klass->vtable._3_ToString.method)(
                                  v25,
                                  v25->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_24;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v34 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v31, v32, v33);
    System_Text_StringBuilder___ctor(v34, 0LL);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v45 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    if ( !v34 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v34, v35, transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v36 = 0.0;
    if ( !isMax )
      v36 = 1.0;
    if ( !transform )
      goto LABEL_24;
    v37 = 1.0;
    v38 = 1.0;
    v39 = v36;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)(&v36 - 1), 0LL);
    v40 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v34->klass->vtable._3_ToString.method)(
                                  v34,
                                  v34->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v40 )
      goto LABEL_24;
    UILabel__set_text(v40, (System_String_o *)transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0LL);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v44 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1BCAA3C(transform, v29);
    }
    v47.fields.x = 1.0 / v44;
    v47.fields.y = 1.0 / v44;
    v47.fields.z = 1.0 / v44;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v47, 0LL);
  }
}