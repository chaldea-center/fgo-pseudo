void EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CB045D & 1) == 0 )
  {
    sub_1C6BA08(&ItemIconComponent_TypeInfo);
    byte_4CB045D = 1;
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
  Il2CppObject *transform; // x0
  __int64 v13; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v15; // x22
  System_String_o *v16; // x23
  float v17; // s1 OVERLAPPED
  float v18; // s0
  float v19; // s3
  float v20; // s2
  UILabel_o *v21; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v24; // s8
  int64_t v25; // [xsp+8h] [xbp-68h] BYREF
  int32_t v26; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB045C & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_5554/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/);
    sub_1C6BA08(&StringLiteral_5555/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/);
    sub_1C6BA08(&StringLiteral_5560/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/);
    byte_4CB045C = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0, 0) )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v10, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0);
    v26 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
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
    v15 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v15, 0);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5555/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0);
    v25 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
    if ( !v15 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v15, v16, transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v17 = 0.0;
    if ( !isMax )
      v17 = 1.0;
    if ( !transform )
      goto LABEL_24;
    v18 = 1.0;
    v19 = 1.0;
    v20 = v17;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)(&v17 - 1), 0);
    v21 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                                  v15,
                                  v15->klass->vtable._3_ToString.method);
    if ( !v21 )
      goto LABEL_24;
    UILabel__set_text(v21, (System_String_o *)transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0, 0);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5554/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0)
      || (v24 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0) )
    {
LABEL_24:
      sub_1C6BC60(transform, v13);
    }
    v27.fields.x = 1.0 / v24;
    v27.fields.y = 1.0 / v24;
    v27.fields.z = 1.0 / v24;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v27, 0);
  }
}