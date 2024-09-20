void __fastcall SetSmoothnessControl___ctor(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetSmoothnessControl__Awake(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SetSmoothnessControl__Init(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  UISprite_o *titleSptite; // x20
  UILabel_o *attentionLabel; // x20
  System_String_o *fpsRadioButtonGroup; // x0
  const MethodInfo *v6; // x1
  System_String_array *v7; // x20
  const MethodInfo *v8; // x2
  GameOptionRadioButtonGroup_o *v9; // x20
  const MethodInfo *v10; // x3
  struct GameOptionRadioButtonGroup_o *v11; // x20
  System_Action_int__o *v12; // x21

  if ( (byte_4A56733 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SetSmoothnessControl__Init_b__5_0__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_9703/*"OPTION_SMOOTHNESS_BUTTON_2"*/);
    sub_1B885B0(&StringLiteral_9702/*"OPTION_SMOOTHNESS_BUTTON_1"*/);
    sub_1B885B0(&StringLiteral_9701/*"OPTION_SMOOTHNESS_ATTENTION"*/);
    sub_1B885B0(&StringLiteral_20542/*"img_txt_framerate"*/);
    byte_4A56733 = 1;
  }
  this->fields.isHighQuality = 0;
  titleSptite = this->fields.titleSptite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(titleSptite, (System_String_o *)StringLiteral_20542/*"img_txt_framerate"*/, 0LL);
  attentionLabel = this->fields.attentionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9701/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !attentionLabel )
    goto LABEL_18;
  UILabel__set_text(attentionLabel, fpsRadioButtonGroup, 0LL);
  v7 = (System_String_array *)sub_1B88658(string___TypeInfo, 2LL);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9702/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL);
  if ( !v7 )
    goto LABEL_18;
  if ( !v7->max_length
    || (v7->m_Items[0] = fpsRadioButtonGroup,
        sub_1B88554(v7->m_Items, fpsRadioButtonGroup),
        fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9703/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL),
        v7->max_length <= 1) )
  {
    sub_1B88814(fpsRadioButtonGroup, v6);
  }
  v7->m_Items[1] = fpsRadioButtonGroup;
  sub_1B88554(&v7->m_Items[1], fpsRadioButtonGroup);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, v6);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, v7, v8);
  v9 = this->fields.fpsRadioButtonGroup;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  fpsRadioButtonGroup = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v9
    || (GameOptionRadioButtonGroup__SelectButtonByIndex(v9, (unsigned __int8)fpsRadioButtonGroup & 1, 1, v10),
        v11 = this->fields.fpsRadioButtonGroup,
        v12 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v12, (Il2CppObject *)this, (intptr_t)Method_SetSmoothnessControl__Init_b__5_0__, 0LL),
        !v11) )
  {
LABEL_18:
    sub_1B8880C(fpsRadioButtonGroup, v6);
  }
  v11->fields.selectedCallback = v12;
  sub_1B88554(&v11->fields.selectedCallback, v12);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  System_Nullable_bool__o v3; // w19
  _BOOL4 hasValue; // t1
  bool Value; // w19
  System_Nullable_bool__o v6; // 0:w0.2

  if ( (byte_4A56734 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_bool__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_bool__get_Value__);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A56734 = 1;
  }
  hasValue = this->fields.isHighQuality.fields.hasValue;
  v3 = (System_Nullable_bool__o)((_WORD)this + 64);
  if ( hasValue )
  {
    v6 = v3;
    Value = System_Nullable_bool___get_Value(v6, (const MethodInfo_3616780 *)Method_System_Nullable_bool__get_Value__);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetBattleFpsHighOrNot(Value, 0LL);
  }
}


void __fastcall SetSmoothnessControl___Init_b__5_0(
        SetSmoothnessControl_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  struct System_Nullable_bool__o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct System_Nullable_bool__o v8; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A56735 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_bool___ctor__);
    sub_1B885B0(&Method_SetSmoothnessControl__Init_b__5_0__);
    byte_4A56735 = 1;
  }
  v5 = &v8;
  v8 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v5,
    selectedIndex > 0,
    (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__);
  this->fields.isHighQuality = v8;
  v6 = Method_SetSmoothnessControl__Init_b__5_0__;
  if ( (*((_BYTE *)Method_SetSmoothnessControl__Init_b__5_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_SetSmoothnessControl__Init_b__5_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
}