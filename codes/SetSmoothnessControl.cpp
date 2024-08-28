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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UISprite_o *titleSptite; // x20
  UILabel_o *attentionLabel; // x20
  System_String_o *fpsRadioButtonGroup; // x0
  const MethodInfo *v15; // x1
  System_String_array *v16; // x20
  const MethodInfo *v17; // x2
  GameOptionRadioButtonGroup_o *v18; // x20
  const MethodInfo *v19; // x3
  struct GameOptionRadioButtonGroup_o *v20; // x20
  System_Action_int__o *v21; // x21

  if ( (byte_4A04272 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_int__TypeInfo, method);
    sub_1B686D4(&AtlasManager_TypeInfo, v3);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&OptionManager_TypeInfo, v5);
    sub_1B686D4(&Method_SetSmoothnessControl__Init_b__5_0__, v6);
    sub_1B686D4(&string___TypeInfo, v7);
    sub_1B686D4(&StringLiteral_9662/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v8);
    sub_1B686D4(&StringLiteral_9661/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v9);
    sub_1B686D4(&StringLiteral_9660/*"OPTION_SMOOTHNESS_ATTENTION"*/, v10);
    sub_1B686D4(&StringLiteral_20471/*"img_txt_framerate"*/, v11);
    byte_4A04272 = 1;
  }
  this->fields.isHighQuality = 0;
  titleSptite = this->fields.titleSptite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(titleSptite, (System_String_o *)StringLiteral_20471/*"img_txt_framerate"*/, 0LL);
  attentionLabel = this->fields.attentionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9660/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !attentionLabel )
    goto LABEL_18;
  UILabel__set_text(attentionLabel, fpsRadioButtonGroup, 0LL);
  v16 = (System_String_array *)sub_1B6877C(string___TypeInfo, 2LL);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9661/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL);
  if ( !v16 )
    goto LABEL_18;
  if ( !v16->max_length
    || (v16->m_Items[0] = fpsRadioButtonGroup,
        sub_1B68678(v16->m_Items),
        fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9662/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL),
        v16->max_length <= 1) )
  {
    sub_1B68938(fpsRadioButtonGroup, v15);
  }
  v16->m_Items[1] = fpsRadioButtonGroup;
  sub_1B68678(&v16->m_Items[1]);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, v15);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, v16, v17);
  v18 = this->fields.fpsRadioButtonGroup;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  fpsRadioButtonGroup = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v18
    || (GameOptionRadioButtonGroup__SelectButtonByIndex(v18, (unsigned __int8)fpsRadioButtonGroup & 1, 1, v19),
        v20 = this->fields.fpsRadioButtonGroup,
        v21 = (System_Action_int__o *)sub_1B68920(System_Action_int__TypeInfo),
        System_Action_int____ctor(v21, (Il2CppObject *)this, (intptr_t)Method_SetSmoothnessControl__Init_b__5_0__, 0LL),
        !v20) )
  {
LABEL_18:
    sub_1B68930(fpsRadioButtonGroup, v15);
  }
  v20->fields.selectedCallback = v21;
  sub_1B68678(&v20->fields.selectedCallback);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Nullable_bool__o v5; // w19
  _BOOL4 hasValue; // t1
  bool Value; // w19
  System_Nullable_bool__o v8; // 0:w0.2

  if ( (byte_4A04273 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Nullable_bool__get_HasValue__, method);
    sub_1B686D4(&Method_System_Nullable_bool__get_Value__, v3);
    sub_1B686D4(&OptionManager_TypeInfo, v4);
    byte_4A04273 = 1;
  }
  hasValue = this->fields.isHighQuality.fields.hasValue;
  v5 = (System_Nullable_bool__o)((_WORD)this + 64);
  if ( hasValue )
  {
    v8 = v5;
    Value = System_Nullable_bool___get_Value(v8, (const MethodInfo_35D560C *)Method_System_Nullable_bool__get_Value__);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
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
  struct System_Nullable_bool__o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct System_Nullable_bool__o v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A04274 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Nullable_bool___ctor__, *(_QWORD *)&selectedIndex);
    sub_1B686D4(&Method_SetSmoothnessControl__Init_b__5_0__, v5);
    byte_4A04274 = 1;
  }
  v6 = &v9;
  v9 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v6,
    selectedIndex > 0,
    (const MethodInfo_35D55F0 *)Method_System_Nullable_bool___ctor__);
  this->fields.isHighQuality = v9;
  v7 = Method_SetSmoothnessControl__Init_b__5_0__;
  if ( (*((_BYTE *)Method_SetSmoothnessControl__Init_b__5_0__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B686EC(Method_SetSmoothnessControl__Init_b__5_0__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B686B8(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
}