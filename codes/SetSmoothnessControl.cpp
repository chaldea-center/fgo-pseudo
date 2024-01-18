void __fastcall SetSmoothnessControl___ctor(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSmoothnessControl__Awake(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SetSmoothnessControl__Init(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *v13; // x20
  UILabel_o *titleSptite; // x20
  System_String_o *attentionLabel; // x0
  __int64 v16; // x1
  System_String_array *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  struct UILabel_o *v32; // x20
  struct UILabel_o *v33; // x20
  System_Action_int__o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x0

  if ( (byte_418BC38 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&AtlasManager_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&OptionManager_TypeInfo, v6);
    sub_B2C35C(&Method_SetSmoothnessControl__Init_b__5_0__, v7);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_9812/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v9);
    sub_B2C35C(&StringLiteral_9811/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v10);
    sub_B2C35C(&StringLiteral_9810/*"OPTION_SMOOTHNESS_ATTENTION"*/, v11);
    sub_B2C35C(&StringLiteral_19700/*"img_txt_framerate"*/, v12);
    byte_418BC38 = 1;
  }
  LOWORD(this[1].klass) = 0;
  v13 = *(UISprite_o **)&this->fields.isHighQuality.fields.value;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(v13, (System_String_o *)StringLiteral_19700/*"img_txt_framerate"*/, 0LL);
  titleSptite = (UILabel_o *)this->fields.titleSptite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9810/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !titleSptite
    || (UILabel__set_text(titleSptite, attentionLabel, 0LL),
        v17 = (System_String_array *)sub_B2C374(string___TypeInfo, 2LL),
        attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9811/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL),
        !v17) )
  {
LABEL_25:
    sub_B2C434(attentionLabel, v16);
  }
  v24 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B2C41C(attentionLabel, v17->obj.klass->_1.element_class);
    if ( !attentionLabel )
      goto LABEL_27;
  }
  if ( !v17->max_length )
    goto LABEL_26;
  v17->m_Items[0] = (System_String_o *)v24;
  sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, v24, v18, v19, v20, v21, v22, v23);
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9812/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL);
  v31 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B2C41C(attentionLabel, v17->obj.klass->_1.element_class);
    if ( !attentionLabel )
    {
LABEL_27:
      v42 = sub_B2C454(attentionLabel);
      sub_B2C400(v42, 0LL);
    }
  }
  if ( v17->max_length <= 1 )
  {
LABEL_26:
    v41 = sub_B2C460(attentionLabel);
    sub_B2C400(v41, 0LL);
  }
  v17->m_Items[1] = (System_String_o *)v31;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)attentionLabel, 0LL);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)attentionLabel, v17, 0LL);
  v32 = this->fields.attentionLabel;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  attentionLabel = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v32 )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SelectButtonByIndex(
    (GameOptionRadioButtonGroup_o *)v32,
    (unsigned __int8)attentionLabel & 1,
    1,
    0LL);
  v33 = this->fields.attentionLabel;
  v34 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v34,
    (Il2CppObject *)this,
    Method_SetSmoothnessControl__Init_b__5_0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  if ( !v33 )
    goto LABEL_25;
  v33->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v33->fields.rightAnchor,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool Value; // w19
  System_Nullable_bool__o v6; // 0:w0.2

  if ( (byte_418BC39 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_bool__get_HasValue__, method);
    sub_B2C35C(&Method_System_Nullable_bool__get_Value__, v3);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    byte_418BC39 = 1;
  }
  if ( BYTE1(this[1].klass) )
  {
    v6 = (System_Nullable_bool__o)((_WORD)this + 56);
    Value = System_Nullable_bool___get_Value(v6, (const MethodInfo_214E818 *)Method_System_Nullable_bool__get_Value__);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__SetBattleFpsHighOrNot(Value, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetSmoothnessControl___Init_b__5_0(
        SetSmoothnessControl_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int16 *v6; // x0
  __int16 v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418BC3A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_bool___ctor__, *(_QWORD *)&selectedIndex);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418BC3A = 1;
  }
  v6 = &v7;
  v7 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v6,
    selectedIndex > 0,
    (const MethodInfo_214E7FC *)Method_System_Nullable_bool___ctor__);
  LOWORD(this[1].klass) = v7;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}