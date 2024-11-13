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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UISprite_o *titleSptite; // x20
  __int64 v23; // x1
  UILabel_o *attentionLabel; // x20
  System_String_o *fpsRadioButtonGroup; // x0
  __int64 v26; // x1
  System_String_array *v27; // x20
  __int64 v28; // x1
  GameOptionRadioButtonGroup_o *v29; // x20
  struct GameOptionRadioButtonGroup_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_int__o *v34; // x21

  if ( (byte_4B11655 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&OptionManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SetSmoothnessControl__Init_b__5_0__, v10, v11);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_9836/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_9835/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_9834/*"OPTION_SMOOTHNESS_ATTENTION"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_20764/*"img_txt_framerate"*/, v20, v21);
    byte_4B11655 = 1;
  }
  this->fields.isHighQuality = 0;
  titleSptite = this->fields.titleSptite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetMyRoomImage(titleSptite, (System_String_o *)StringLiteral_20764/*"img_txt_framerate"*/, 0LL);
  attentionLabel = this->fields.attentionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9834/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !attentionLabel )
    goto LABEL_18;
  UILabel__set_text(attentionLabel, fpsRadioButtonGroup, 0LL);
  v27 = (System_String_array *)sub_1BCA888(string___TypeInfo, 2LL);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9835/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL);
  if ( !v27 )
    goto LABEL_18;
  if ( !v27->max_length
    || (v27->m_Items[0] = fpsRadioButtonGroup,
        sub_1BCA784(v27->m_Items, fpsRadioButtonGroup),
        fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9836/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL),
        v27->max_length <= 1) )
  {
    sub_1BCAA44(fpsRadioButtonGroup, v26);
  }
  v27->m_Items[1] = fpsRadioButtonGroup;
  sub_1BCA784(&v27->m_Items[1], fpsRadioButtonGroup);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, 0LL);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, v27, 0LL);
  v29 = this->fields.fpsRadioButtonGroup;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v28);
  fpsRadioButtonGroup = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v29
    || (GameOptionRadioButtonGroup__SelectButtonByIndex(v29, (unsigned __int8)fpsRadioButtonGroup & 1, 1, 0LL),
        v30 = this->fields.fpsRadioButtonGroup,
        v34 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v31, v32, v33),
        System_Action_int____ctor(v34, (Il2CppObject *)this, (intptr_t)Method_SetSmoothnessControl__Init_b__5_0__, 0LL),
        !v30) )
  {
LABEL_18:
    sub_1BCAA3C(fpsRadioButtonGroup, v26);
  }
  v30->fields.selectedCallback = v34;
  sub_1BCA784(&v30->fields.selectedCallback, v34);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Nullable_bool__o v8; // w19
  _BOOL4 hasValue; // t1
  __int64 v10; // x1
  bool Value; // w19
  System_Nullable_bool__o v12; // 0:w0.2

  if ( (byte_4B11656 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_bool__get_HasValue__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_Value__, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    byte_4B11656 = 1;
  }
  hasValue = this->fields.isHighQuality.fields.hasValue;
  v8 = (System_Nullable_bool__o)((_WORD)this + 64);
  if ( hasValue )
  {
    v12 = v8;
    Value = System_Nullable_bool___get_Value(v12, (const MethodInfo_36BAF60 *)Method_System_Nullable_bool__get_Value__);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v10);
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
  __int64 v6; // x2
  struct System_Nullable_bool__o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct System_Nullable_bool__o v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B11657 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_bool___ctor__, *(_QWORD *)&selectedIndex, method);
    sub_1BCA7E0(&Method_SetSmoothnessControl__Init_b__5_0__, v5, v6);
    byte_4B11657 = 1;
  }
  v7 = &v10;
  v10 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v7,
    selectedIndex > 0,
    (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
  this->fields.isHighQuality = v10;
  v8 = Method_SetSmoothnessControl__Init_b__5_0__;
  if ( (*((_BYTE *)Method_SetSmoothnessControl__Init_b__5_0__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SetSmoothnessControl__Init_b__5_0__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
}