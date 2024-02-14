void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215236 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v4);
    byte_4215236 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bondsIconList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


BattleResultBondsIconComponent_o *__fastcall BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *iconRoot; // x0
  Il2CppObject *bondsIcon; // x20
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x8
  BattleResultBondsIconComponent_o *v8; // x19

  if ( (byte_4215233 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__, v3);
    byte_4215233 = 1;
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
                                                (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = this->fields.bondsIconList) == 0LL) )
  {
    sub_B0D97C(iconRoot);
  }
  v8 = (BattleResultBondsIconComponent_o *)iconRoot;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bondsIconList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)iconRoot,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
  return v8;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x0

  if ( (byte_4215234 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, method);
    byte_4215234 = 1;
  }
  bondsIconList = this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_B0D97C(0LL);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)bondsIconList,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_B0D97C(0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *waveLabel; // x0
  UILabel_o *v10; // x22
  System_String_o *v11; // x23
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  struct UILabel_o *v14; // x8
  int32_t mWidth; // w9
  int32_t v16; // w8
  int v17; // w9
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4215235 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&current);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_2501/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v8);
    byte_4215235 = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_13;
  UILabel__SetDefaultFont(waveLabel, 0LL);
  v10 = this->fields.waveLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2501/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
  v19 = current;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = max;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  waveLabel = (UILabel_o *)System_String__Format_43845440(v11, v12, v13, 0LL);
  if ( !v10
    || (UILabel__set_text(v10, (System_String_o *)waveLabel, 0LL), (v14 = this->fields.waveLabel) == 0LL)
    || (waveLabel = (UILabel_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_13:
    sub_B0D97C(waveLabel);
  }
  mWidth = v14->fields.mWidth;
  v16 = waveLabel->fields.mWidth;
  v17 = v16 + mWidth;
  if ( v17 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)waveLabel, v16 + 276 - v17, 0LL);
}