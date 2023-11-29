void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FA8EB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v6);
    byte_40FA8EB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bondsIconList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  Il2CppObject *Object_object; // x0
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x8
  BattleResultBondsIconComponent_o *v9; // x19

  if ( (byte_40FA8E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__, v3);
    byte_40FA8E8 = 1;
  }
  iconRoot = (UnityEngine_Component_o *)this->fields.iconRoot;
  if ( !iconRoot
    || (bondsIcon = (Il2CppObject *)this->fields.bondsIcon,
        transform = UnityEngine_Component__get_transform(iconRoot, 0LL),
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          bondsIcon,
                          transform,
                          0LL,
                          (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = this->fields.bondsIconList) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = (BattleResultBondsIconComponent_o *)Object_object;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bondsIconList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
  return v9;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *bondsIconList; // x0

  if ( (byte_40FA8E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, method);
    byte_40FA8E9 = 1;
  }
  bondsIconList = this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_B170D4();
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)bondsIconList,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_B170D4();
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
  System_String_o *v14; // x0
  struct UILabel_o *v15; // x8
  UIWidget_o *waveLabelLine; // x0
  int32_t mWidth; // w9
  int32_t v18; // w8
  int v19; // w9
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA8EA & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&current);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2480, v8);
    byte_40FA8EA = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2480, 0LL);
  v21 = current;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = max;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v14 = System_String__Format_43739268(v11, v12, v13, 0LL);
  if ( !v10
    || (UILabel__set_text(v10, v14, 0LL), (v15 = this->fields.waveLabel) == 0LL)
    || (waveLabelLine = (UIWidget_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  mWidth = v15->fields.mWidth;
  v18 = waveLabelLine->fields.mWidth;
  v19 = v18 + mWidth;
  if ( v19 + 9 >= 286 )
    UIWidget__set_width(waveLabelLine, v18 + 276 - v19, 0LL);
}