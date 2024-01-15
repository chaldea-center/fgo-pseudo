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
  System_String_o *v15; // x0
  __int64 v16; // x2
  System_String_array *v17; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  struct UILabel_o *attentionLabel; // x0
  struct UILabel_o *v34; // x0
  struct UILabel_o *v35; // x20
  bool IsBattleFpsHigh; // w0
  struct UILabel_o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Action_int__o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40FF31A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&AtlasManager_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&OptionManager_TypeInfo, v6);
    sub_B16FFC(&Method_SetSmoothnessControl__Init_b__5_0__, v7);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_9782/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v9);
    sub_B16FFC(&StringLiteral_9781/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v10);
    sub_B16FFC(&StringLiteral_9780/*"OPTION_SMOOTHNESS_ATTENTION"*/, v11);
    sub_B16FFC(&StringLiteral_19626/*"img_txt_framerate"*/, v12);
    byte_40FF31A = 1;
  }
  LOWORD(this[1].klass) = 0;
  v13 = *(UISprite_o **)&this->fields.isHighQuality.fields.value;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(v13, (System_String_o *)StringLiteral_19626/*"img_txt_framerate"*/, 0LL);
  titleSptite = (UILabel_o *)this->fields.titleSptite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9780/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !titleSptite
    || (UILabel__set_text(titleSptite, v15, 0LL),
        v17 = (System_String_array *)sub_B17014(string___TypeInfo, 2LL, v16),
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9781/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL),
        !v17) )
  {
LABEL_25:
    sub_B170D4();
  }
  v26 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_27;
  }
  if ( !v17->max_length )
    goto LABEL_26;
  v17->m_Items[0] = (System_String_o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)v17->m_Items, v26, v20, v21, v22, v23, v24, v25);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9782/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL);
  v32 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_27:
      sub_B170F4(v18);
      sub_B170A0();
    }
  }
  if ( v17->max_length <= 1 )
  {
LABEL_26:
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  v17->m_Items[1] = (System_String_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[1], v32, v20, v27, v28, v29, v30, v31);
  attentionLabel = this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)attentionLabel, 0LL);
  v34 = this->fields.attentionLabel;
  if ( !v34 )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)v34, v17, 0LL);
  v35 = this->fields.attentionLabel;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  IsBattleFpsHigh = OptionManager__IsBattleFpsHigh(0LL);
  if ( !v35 )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SelectButtonByIndex((GameOptionRadioButtonGroup_o *)v35, IsBattleFpsHigh, 0LL);
  v37 = this->fields.attentionLabel;
  v42 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v38, v39, v40, v41);
  System_Action_int____ctor(
    v42,
    (Il2CppObject *)this,
    Method_SetSmoothnessControl__Init_b__5_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  if ( !v37 )
    goto LABEL_25;
  v37->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v37->fields.rightAnchor,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool Value; // w19
  System_Nullable_bool__o v6; // 0:w0.2

  if ( (byte_40FF31B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_bool__get_HasValue__, method);
    sub_B16FFC(&Method_System_Nullable_bool__get_Value__, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    byte_40FF31B = 1;
  }
  if ( BYTE1(this[1].klass) )
  {
    v6 = (System_Nullable_bool__o)((_WORD)this + 56);
    Value = System_Nullable_bool___get_Value(v6, (const MethodInfo_2965378 *)Method_System_Nullable_bool__get_Value__);
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

  if ( (byte_40FF31C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_bool___ctor__, *(_QWORD *)&selectedIndex);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FF31C = 1;
  }
  v6 = &v7;
  v7 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v6,
    selectedIndex > 0,
    (const MethodInfo_296535C *)Method_System_Nullable_bool___ctor__);
  LOWORD(this[1].klass) = v7;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}