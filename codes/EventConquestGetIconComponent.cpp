void EventConquestGetIconComponent___ctor(EventConquestGetIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C50F15 & 1) == 0 )
  {
    sub_1C3E564(&ItemIconComponent_TypeInfo);
    byte_4C50F15 = 1;
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
  __int64 v19; // x1
  UILabel_o *counterLabel; // x22
  System_Text_StringBuilder_o *v21; // x22
  System_String_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  float v29; // s1 OVERLAPPED
  float v30; // s0
  float v31; // s3
  float v32; // s2
  UILabel_o *v33; // x20
  UILabel_o *possessionNameLabel; // x20
  unsigned int localScale; // s0
  float v36; // s8
  int64_t v37; // [xsp+8h] [xbp-68h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C50F14 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&StringLiteral_5564/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/);
    sub_1C3E564(&StringLiteral_5565/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/);
    sub_1C3E564(&StringLiteral_5570/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/);
    byte_4C50F14 = 1;
  }
  possessionCounterLabel = (UnityEngine_Object_o *)this->fields.possessionCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionCounterLabel, 0, 0) )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v10, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, 0);
    v38 = getCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v12, v13, v14, v15, v16, v17);
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
    v21 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5565/*"EVENT_CONQUEST_GET_ITEM_FORMAT"*/, 0);
    v37 = posCount;
    transform = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v37, v23, v24, v25, v26, v27, v28);
    if ( !v21 )
      goto LABEL_24;
    System_Text_StringBuilder__AppendFormat(v21, v22, transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    v29 = 0.0;
    if ( !isMax )
      v29 = 1.0;
    if ( !transform )
      goto LABEL_24;
    v30 = 1.0;
    v31 = 1.0;
    v32 = v29;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)(&v29 - 1), 0);
    v33 = this->fields.possessionCounterLabel;
    transform = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v21->klass->vtable._3_ToString.methodPtr)(
                                  v21,
                                  v21->klass->vtable._3_ToString.method);
    if ( !v33 )
      goto LABEL_24;
    UILabel__set_text(v33, (System_String_o *)transform, 0);
    transform = (Il2CppObject *)this->fields.possessionCounterLabel;
    if ( !transform )
      goto LABEL_24;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.possesionCouterLabelMaxWidth, 0, 0);
    possessionNameLabel = this->fields.possessionNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5564/*"EVENT_CONQUEST_GET_COUNT_LABEL"*/, 0);
    if ( !possessionNameLabel
      || (UILabel__set_text(possessionNameLabel, (System_String_o *)transform, 0),
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
      || (localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0),
          (transform = (Il2CppObject *)this->fields.possessionLabelBG) == 0)
      || (v36 = *(float *)&localScale,
          (transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0) )
    {
LABEL_24:
      sub_1C3E7C0(transform, v19);
    }
    v39.fields.x = 1.0 / v36;
    v39.fields.y = 1.0 / v36;
    v39.fields.z = 1.0 / v36;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v39, 0);
  }
}