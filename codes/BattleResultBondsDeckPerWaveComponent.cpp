void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438B7A0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_438B7A0 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bondsIconList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


BattleResultBondsIconComponent_o *__fastcall BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *iconRoot; // x0
  Il2CppObject *bondsIcon; // x20
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x8
  BattleResultBondsIconComponent_o *v7; // x19

  if ( (byte_438B79D & 1) == 0 )
  {
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
    byte_438B79D = 1;
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
                                                (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = this->fields.bondsIconList) == 0LL) )
  {
    sub_B7769C(iconRoot, method);
  }
  v7 = (BattleResultBondsIconComponent_o *)iconRoot;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bondsIconList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)iconRoot,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
  return v7;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x0

  if ( (byte_438B79E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    byte_438B79E = 1;
  }
  bondsIconList = this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_B7769C(0LL, method);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)bondsIconList,
                                                   (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_B7769C(0LL, method);
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
  UILabel_o *waveLabel; // x0
  UILabel_o *v8; // x22
  System_String_o *v9; // x23
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  struct UILabel_o *v14; // x8
  int32_t mWidth; // w9
  int32_t v16; // w8
  int v17; // w9
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438B79F & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2596/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/);
    byte_438B79F = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_13;
  UILabel__SetDefaultFont(waveLabel, 0LL);
  v8 = this->fields.waveLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2596/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
  v19 = current;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v10);
  v18 = max;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12);
  waveLabel = (UILabel_o *)System_String__Format_44897472(v9, v11, v13, 0LL);
  if ( !v8
    || (UILabel__set_text(v8, (System_String_o *)waveLabel, 0LL), (v14 = this->fields.waveLabel) == 0LL)
    || (waveLabel = (UILabel_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_13:
    sub_B7769C(waveLabel, *(_QWORD *)&current);
  }
  mWidth = v14->fields.mWidth;
  v16 = waveLabel->fields.mWidth;
  v17 = v16 + mWidth;
  if ( v17 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)waveLabel, v16 + 276 - v17, 0LL);
}