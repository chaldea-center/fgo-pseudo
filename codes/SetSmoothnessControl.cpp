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
  UISprite_o *v3; // x20
  UILabel_o *titleSptite; // x20
  System_String_o *attentionLabel; // x0
  __int64 v6; // x1
  System_String_array *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x21
  struct UILabel_o *v22; // x20
  struct UILabel_o *v23; // x20
  System_Action_int__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_4356309 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SetSmoothnessControl__Init_b__5_0__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_9934/*"OPTION_SMOOTHNESS_BUTTON_2"*/);
    sub_B70694(&StringLiteral_9933/*"OPTION_SMOOTHNESS_BUTTON_1"*/);
    sub_B70694(&StringLiteral_9932/*"OPTION_SMOOTHNESS_ATTENTION"*/);
    sub_B70694(&StringLiteral_20008/*"img_txt_framerate"*/);
    byte_4356309 = 1;
  }
  LOWORD(this[1].klass) = 0;
  v3 = *(UISprite_o **)&this->fields.isHighQuality.fields.value;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(v3, (System_String_o *)StringLiteral_20008/*"img_txt_framerate"*/, 0LL);
  titleSptite = (UILabel_o *)this->fields.titleSptite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9932/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !titleSptite
    || (UILabel__set_text(titleSptite, attentionLabel, 0LL),
        v7 = (System_String_array *)sub_B706AC(string___TypeInfo, 2LL),
        attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9933/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL),
        !v7) )
  {
LABEL_25:
    sub_B7076C(attentionLabel, v6);
  }
  v14 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B70754(attentionLabel, v7->obj.klass->_1.element_class);
    if ( !attentionLabel )
      goto LABEL_27;
  }
  if ( !v7->max_length )
    goto LABEL_26;
  v7->m_Items[0] = (System_String_o *)v14;
  sub_B70630((BattleServantConfConponent_o *)v7->m_Items, v14, v8, v9, v10, v11, v12, v13);
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9934/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL);
  v21 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B70754(attentionLabel, v7->obj.klass->_1.element_class);
    if ( !attentionLabel )
    {
LABEL_27:
      v32 = sub_B7078C(attentionLabel);
      sub_B70738(v32, 0LL);
    }
  }
  if ( v7->max_length <= 1 )
  {
LABEL_26:
    v31 = sub_B70798(attentionLabel);
    sub_B70738(v31, 0LL);
  }
  v7->m_Items[1] = (System_String_o *)v21;
  sub_B70630((BattleServantConfConponent_o *)&v7->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)attentionLabel, 0LL);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)attentionLabel, v7, 0LL);
  v22 = this->fields.attentionLabel;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  attentionLabel = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v22 )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SelectButtonByIndex(
    (GameOptionRadioButtonGroup_o *)v22,
    (unsigned __int8)attentionLabel & 1,
    1,
    0LL);
  v23 = this->fields.attentionLabel;
  v24 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v24,
    (Il2CppObject *)this,
    Method_SetSmoothnessControl__Init_b__5_0__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  if ( !v23 )
    goto LABEL_25;
  v23->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&v23->fields.rightAnchor,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  bool Value; // w19
  System_Nullable_bool__o v4; // 0:w0.2

  if ( (byte_435630A & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_bool__get_HasValue__);
    sub_B70694(&Method_System_Nullable_bool__get_Value__);
    sub_B70694(&OptionManager_TypeInfo);
    byte_435630A = 1;
  }
  if ( BYTE1(this[1].klass) )
  {
    v4 = (System_Nullable_bool__o)((_WORD)this + 56);
    Value = System_Nullable_bool___get_Value(v4, (const MethodInfo_2434D60 *)Method_System_Nullable_bool__get_Value__);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__SetBattleFpsHighOrNot(Value, 0LL);
  }
}


void __fastcall SetSmoothnessControl___Init_b__5_0(
        SetSmoothnessControl_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  __int16 *v5; // x0
  __int16 v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_435630B & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_bool___ctor__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435630B = 1;
  }
  v5 = &v6;
  v6 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v5,
    selectedIndex > 0,
    (const MethodInfo_2434D44 *)Method_System_Nullable_bool___ctor__);
  LOWORD(this[1].klass) = v6;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}