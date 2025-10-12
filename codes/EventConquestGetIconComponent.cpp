void EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C31BAB & 1) == 0 )
  {
    sub_1C32C20(&ItemIconComponent_TypeInfo);
    byte_4C31BAB = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
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
  System_String_o *v11; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *transform; // x0
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v20; // x22
  System_String_o *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  float v28; // s1 OVERLAPPED
  float v29; // s0
  float v30; // s3
  float v31; // s2
  UILabel_o *v32; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v35; // s8
  int64_t v36; // [xsp+8h] [xbp-68h] BYREF
  int32_t v37; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C31BAA & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_5563/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/);
    sub_1C32C20(&StringLiteral_5564/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/);
    sub_1C32C20(&StringLiteral_5569/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/);
    byte_4C31BAA = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0, 0) )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v10, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5569/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0);
    v37 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v12, v13, v14, v15, v16, v17);
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
    v20 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v20, 0);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5564/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0);
    v36 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v22, v23, v24, v25, v26, v27);
    if ( !v20 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v20, v21, transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v28 = 0.0;
    if ( !isMax )
      v28 = 1.0;
    if ( !transform )
      goto LABEL_24;
    v29 = 1.0;
    v30 = 1.0;
    v31 = v28;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)(&v28 - 1), 0);
    v32 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v20->klass->vtable._3_ToString.methodPtr)(
                                  v20,
                                  v20->klass->vtable._3_ToString.method);
    if ( !v32 )
      goto LABEL_24;
    UILabel__set_text(v32, (System_String_o *)transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0, 0);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5563/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0)
      || (v35 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0) )
    {
LABEL_24:
      sub_1C32E7C(transform);
    }
    v38.fields.x = 1.0 / v35;
    v38.fields.y = 1.0 / v35;
    v38.fields.z = 1.0 / v35;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v38, 0);
  }
}