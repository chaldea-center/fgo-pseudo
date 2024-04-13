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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UISprite_o *v35; // x20
  UILabel_o *titleSptite; // x20
  System_String_o *attentionLabel; // x0
  __int64 v38; // x1
  System_String_array *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x21
  struct UILabel_o *v54; // x20
  struct UILabel_o *v55; // x20
  System_Action_int__o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0
  __int64 v64; // x0

  if ( (byte_42ECEEA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AtlasManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&OptionManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SetSmoothnessControl__Init_b__5_0__, v17, v18, v19);
    sub_B5D5C4(&string___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9918/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_9917/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9916/*"OPTION_SMOOTHNESS_ATTENTION"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_19949/*"img_txt_framerate"*/, v32, v33, v34);
    byte_42ECEEA = 1;
  }
  LOWORD(this[1].klass) = 0;
  v35 = *(UISprite_o **)&this->fields.isHighQuality.fields.value;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(v35, (System_String_o *)StringLiteral_19949/*"img_txt_framerate"*/, 0LL);
  titleSptite = (UILabel_o *)this->fields.titleSptite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9916/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !titleSptite
    || (UILabel__set_text(titleSptite, attentionLabel, 0LL),
        v39 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 2LL),
        attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9917/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL),
        !v39) )
  {
LABEL_25:
    sub_B5D69C(attentionLabel, v38);
  }
  v46 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B5D684(attentionLabel, v39->obj.klass->_1.element_class);
    if ( !attentionLabel )
      goto LABEL_27;
  }
  if ( !v39->max_length )
    goto LABEL_26;
  v39->m_Items[0] = (System_String_o *)v46;
  sub_B5D560((BattleServantConfConponent_o *)v39->m_Items, v46, v40, v41, v42, v43, v44, v45);
  attentionLabel = LocalizationManager__Get((System_String_o *)StringLiteral_9918/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL);
  v53 = (System_Int32_array **)attentionLabel;
  if ( attentionLabel )
  {
    attentionLabel = (System_String_o *)sub_B5D684(attentionLabel, v39->obj.klass->_1.element_class);
    if ( !attentionLabel )
    {
LABEL_27:
      v64 = sub_B5D6BC(attentionLabel);
      sub_B5D668(v64, 0LL);
    }
  }
  if ( v39->max_length <= 1 )
  {
LABEL_26:
    v63 = sub_B5D6C8(attentionLabel);
    sub_B5D668(v63, 0LL);
  }
  v39->m_Items[1] = (System_String_o *)v53;
  sub_B5D560((BattleServantConfConponent_o *)&v39->m_Items[1], v53, v47, v48, v49, v50, v51, v52);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)attentionLabel, 0LL);
  attentionLabel = (System_String_o *)this->fields.attentionLabel;
  if ( !attentionLabel )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)attentionLabel, v39, 0LL);
  v54 = this->fields.attentionLabel;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  attentionLabel = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v54 )
    goto LABEL_25;
  GameOptionRadioButtonGroup__SelectButtonByIndex(
    (GameOptionRadioButtonGroup_o *)v54,
    (unsigned __int8)attentionLabel & 1,
    1,
    0LL);
  v55 = this->fields.attentionLabel;
  v56 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v56,
    (Il2CppObject *)this,
    Method_SetSmoothnessControl__Init_b__5_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  if ( !v55 )
    goto LABEL_25;
  v55->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v55->fields.rightAnchor,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  bool Value; // w19
  System_Nullable_bool__o v12; // 0:w0.2

  if ( (byte_42ECEEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_bool__get_HasValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_bool__get_Value__, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    byte_42ECEEB = 1;
  }
  if ( BYTE1(this[1].klass) )
  {
    v12 = (System_Nullable_bool__o)((_WORD)this + 56);
    Value = System_Nullable_bool___get_Value(v12, (const MethodInfo_2347EEC *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int16 *v9; // x0
  __int16 v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECEEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_bool___ctor__, selectedIndex, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42ECEEC = 1;
  }
  v9 = &v10;
  v10 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v9,
    selectedIndex > 0,
    (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__);
  LOWORD(this[1].klass) = v10;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}