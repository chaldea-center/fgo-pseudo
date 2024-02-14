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
  System_String_array *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  struct UILabel_o *v31; // x20
  struct UILabel_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_int__o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_4218A5A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&OptionManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SetSmoothnessControl__Init_b__5_0__, v7);
    sub_B0D8A4(&string___TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_9836/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v9);
    sub_B0D8A4(&StringLiteral_9835/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v10);
    sub_B0D8A4(&StringLiteral_9834/*"OPTION_SMOOTHNESS_ATTENTION"*/, v11);
    sub_B0D8A4(&StringLiteral_19762/*"img_txt_framerate"*/, v12);
    byte_4218A5A = 1;
  }
  LOWORD(this[1].klass) = 0;
  v13 = *(UISprite_o **)&this->fields.isHighQuality.fields.value;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(v13, (System_String_o *)StringLiteral_19762/*"img_txt_framerate"*/, 0LL);
  titleSptite = (UILabel_o *)this->fields.titleSptite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9834/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !titleSptite
    || (UILabel__set_text(titleSptite, attentionLabel, 0LL),
        v16 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 2LL),
        attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9835/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL),
        !v16) )
  {
LABEL_25:
    sub_B0D97C(attentionLabel);
  }
  v23 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B0D964(attentionLabel, v16->obj.klass->_1.element_class);
    if ( !attentionLabel )
      goto LABEL_27;
  }
  if ( !v16->max_length )
    goto LABEL_26;
  v16->m_Items[0] = (System_String_o *)v23;
  sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, v23, v17, v18, v19, v20, v21, v22);
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9836/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL);
  v30 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B0D964(attentionLabel, v16->obj.klass->_1.element_class);
    if ( !attentionLabel )
    {
LABEL_27:
      v43 = sub_B0D99C(attentionLabel);
      sub_B0D948(v43, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
  {
LABEL_26:
    v42 = sub_B0D9A8(attentionLabel);
    sub_B0D948(v42, 0LL);
  }
  v16->m_Items[1] = (System_String_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)attentionLabel, 0LL);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)attentionLabel, v16, 0LL);
  v31 = this->fields.attentionLabel;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  attentionLabel = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v31 )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SelectButtonByIndex(
    (GameOptionRadioButtonGroup_o *)v31,
    (unsigned __int8)attentionLabel & 1,
    1,
    0LL);
  v32 = this->fields.attentionLabel;
  v35 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v33, v34);
  System_Action_int____ctor(
    v35,
    (Il2CppObject *)this,
    Method_SetSmoothnessControl__Init_b__5_0__,
    (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
  if ( !v32 )
    goto LABEL_25;
  v32->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v32->fields.rightAnchor,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool Value; // w19
  System_Nullable_bool__o v6; // 0:w0.2

  if ( (byte_4218A5B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_bool__get_HasValue__, method);
    sub_B0D8A4(&Method_System_Nullable_bool__get_Value__, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    byte_4218A5B = 1;
  }
  if ( BYTE1(this[1].klass) )
  {
    v6 = (System_Nullable_bool__o)((_WORD)this + 56);
    Value = System_Nullable_bool___get_Value(v6, (const MethodInfo_297C574 *)Method_System_Nullable_bool__get_Value__);
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

  if ( (byte_4218A5C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_bool___ctor__, *(_QWORD *)&selectedIndex);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4218A5C = 1;
  }
  v6 = &v7;
  v7 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v6,
    selectedIndex > 0,
    (const MethodInfo_297C558 *)Method_System_Nullable_bool___ctor__);
  LOWORD(this[1].klass) = v7;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}