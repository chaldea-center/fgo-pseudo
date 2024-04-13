void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E889C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v5, v6, v7);
    byte_42E889C = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bondsIconList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


BattleResultBondsIconComponent_o *__fastcall BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *iconRoot; // x0
  Il2CppObject *bondsIcon; // x20
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x8
  BattleResultBondsIconComponent_o *v12; // x19

  if ( (byte_42E8899 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__, v5, v6, v7);
    byte_42E8899 = 1;
  }
  iconRoot = (UnityEngine_Component_o *)this->fields.iconRoot;
  if ( !iconRoot
    || (bondsIcon = (Il2CppObject *)this->fields.bondsIcon,
        transform = UnityEngine_Component__get_transform(iconRoot, 0LL),
        iconRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_object_(
                                                (BaseMonoBehaviour_o *)this,
                                                bondsIcon,
                                                transform,
                                                0LL,
                                                (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = this->fields.bondsIconList) == 0LL) )
  {
    sub_B5D69C(iconRoot, method);
  }
  v12 = (BattleResultBondsIconComponent_o *)iconRoot;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bondsIconList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)iconRoot,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
  return v12;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x0

  if ( (byte_42E889A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E889A = 1;
  }
  bondsIconList = this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_B5D69C(0LL, method);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)bondsIconList,
                                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))iconRoot->klass->vtable._8_Reposition.method)(
    iconRoot,
    iconRoot->klass->vtable._9_ResetPosition.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsDeckPerWaveComponent__SetWaveCount(
        BattleResultBondsDeckPerWaveComponent_o *this,
        int32_t current,
        int32_t max,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UILabel_o *waveLabel; // x0
  UILabel_o *v14; // x22
  System_String_o *v15; // x23
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  struct UILabel_o *v18; // x8
  int32_t mWidth; // w9
  int32_t v20; // w8
  int v21; // w9
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E889B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, current, max, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_2543/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v10, v11, v12);
    byte_42E889B = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_13;
  UILabel__SetDefaultFont(waveLabel, 0LL);
  v14 = this->fields.waveLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2543/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
  v23 = current;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v22 = max;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  waveLabel = (UILabel_o *)System_String__Format_44573324(v15, v16, v17, 0LL);
  if ( !v14
    || (UILabel__set_text(v14, (System_String_o *)waveLabel, 0LL), (v18 = this->fields.waveLabel) == 0LL)
    || (waveLabel = (UILabel_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_13:
    sub_B5D69C(waveLabel, *(_QWORD *)&current);
  }
  mWidth = v18->fields.mWidth;
  v20 = waveLabel->fields.mWidth;
  v21 = v20 + mWidth;
  if ( v21 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)waveLabel, v20 + 276 - v21, 0LL);
}