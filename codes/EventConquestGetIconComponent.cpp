void __fastcall EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BE03C5 & 1) == 0 )
  {
    sub_1C21E38(&ItemIconComponent_TypeInfo);
    byte_4BE03C5 = 1;
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
  UnityEngine_Object_o *possessionCounterLabel; // x23
  System_Text_StringBuilder_o *v10; // x23
  System_String_o *v11; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *transform; // x0
  __int64 v16; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v18; // x22
  System_String_o *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  float v23; // s1
  float v24; // s0
  float v25; // s3
  float v26; // s2
  UILabel_o *v27; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v30; // s8
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE03C4 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_5704/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/);
    sub_1C21E38(&StringLiteral_5705/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/);
    sub_1C21E38(&StringLiteral_5710/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/);
    byte_4BE03C4 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0LL, 0LL) )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v10, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5710/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0LL);
    v32 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v12, v13, v14);
    if ( !v10 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v10, v11, transform, 0LL);
    counterLabel = this->fields.counterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                  v10,
                                  v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !counterLabel )
      goto LABEL_24;
    UILabel__set_text(counterLabel, (System_String_o *)transform, 0LL);
    v18 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v18, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5705/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0LL);
    v31 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v20, v21, v22);
    if ( !v18 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v18, v19, transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v23 = 0.0;
    if ( !isMax )
      v23 = 1.0;
    if ( !transform )
      goto LABEL_24;
    v24 = 1.0;
    v25 = 1.0;
    v26 = v23;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)(&v23 - 1), 0LL);
    v27 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                  v18,
                                  v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v27 )
      goto LABEL_24;
    UILabel__set_text(v27, (System_String_o *)transform, 0LL);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0, 0LL);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0LL);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0LL),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0LL)
      || (v30 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1C22094(transform, v16);
    }
    v33.fields.x = 1.0 / v30;
    v33.fields.y = 1.0 / v30;
    v33.fields.z = 1.0 / v30;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v33, 0LL);
  }
}