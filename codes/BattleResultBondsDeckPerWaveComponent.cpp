void BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597442B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_597442B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bondsIconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


BattleResultBondsIconComponent_o *BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *iconRoot; // x0
  Il2CppObject *bondsIcon; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *bondsIconList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  BattleResultBondsIconComponent_o *v16; // x19
  Il2CppClass **v17; // x0

  if ( (byte_5974427 & 1) == 0 )
  {
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
    byte_5974427 = 1;
  }
  iconRoot = (UnityEngine_Component_o *)this->fields.iconRoot;
  if ( !iconRoot
    || (bondsIcon = (Il2CppObject *)this->fields.bondsIcon,
        transform = UnityEngine_Component__get_transform(iconRoot, 0),
        iconRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_object_(
                                                (BaseMonoBehaviour_o *)this,
                                                bondsIcon,
                                                transform,
                                                0,
                                                (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList) == 0)
    || (items = bondsIconList->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__,
        ++bondsIconList->fields._version,
        !items) )
  {
    sub_2213CDC(iconRoot, method);
  }
  size = bondsIconList->fields._size;
  v16 = (BattleResultBondsIconComponent_o *)iconRoot;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bondsIconList,
      (Il2CppObject *)iconRoot,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    bondsIconList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v16, v6, v7, v8, v9, v10, v11);
  }
  return v16;
}


BattleResultBondsIconComponent_array *BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bondsIconList; // x0

  if ( (byte_5974428 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    byte_5974428 = 1;
  }
  bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_2213CDC(0, method);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_object___ToArray(
                                                   bondsIconList,
                                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UIGrid_o *, const MethodInfo *))iconRoot->klass->vtable._8_Reposition.methodPtr)(
    iconRoot,
    iconRoot->klass->vtable._8_Reposition.method);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultBondsDeckPerWaveComponent__SetLine(
        BattleResultBondsDeckPerWaveComponent_o *this,
        bool isPartyNameDialog,
        const MethodInfo *method)
{
  BattleResultBondsDeckPerWaveComponent_o *v3; // x19
  struct UILabel_o *waveLabel; // x8
  int32_t mWidth; // w9
  int v6; // w8
  int v7; // w9

  v3 = this;
  if ( isPartyNameDialog )
  {
    this = (BattleResultBondsDeckPerWaveComponent_o *)this->fields.waveLabelLine;
    if ( !this )
      goto LABEL_9;
    UIWidget__set_width((UIWidget_o *)this, *((_DWORD *)this + 42) + 22, 0);
  }
  waveLabel = v3->fields.waveLabel;
  if ( !waveLabel || (this = (BattleResultBondsDeckPerWaveComponent_o *)v3->fields.waveLabelLine) == 0 )
LABEL_9:
    sub_2213CDC(this, isPartyNameDialog);
  mWidth = waveLabel->fields.mWidth;
  v6 = *((_DWORD *)this + 42);
  v7 = v6 + mWidth;
  if ( v7 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)this, v6 - v7 + 276, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultBondsDeckPerWaveComponent__SetPartyName(
        BattleResultBondsDeckPerWaveComponent_o *this,
        int32_t partyId,
        const MethodInfo *method)
{
  UILabel_o *waveLabel; // x0
  __int64 v6; // x1
  UILabel_o *v7; // x21
  System_String_o *v8; // x22
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_597442A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2953/*"BATTLE_RESULT_BONDS_PARTY_ID"*/);
    byte_597442A = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_8;
  UILabel__SetDefaultFont(waveLabel, 0);
  v7 = this->fields.waveLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_RESULT_BONDS_PARTY_ID"*/, 0);
  v9 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(partyId, 0);
  waveLabel = (UILabel_o *)System_String__Format(v8, v9, 0);
  if ( !v7 )
LABEL_8:
    sub_2213CDC(waveLabel, *(_QWORD *)&partyId);
  UILabel__set_text(v7, (System_String_o *)waveLabel, 0);
  BattleResultBondsDeckPerWaveComponent__SetLine(this, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultBondsDeckPerWaveComponent__SetWaveCount(
        BattleResultBondsDeckPerWaveComponent_o *this,
        int32_t current,
        int32_t max,
        const MethodInfo *method)
{
  UILabel_o *waveLabel; // x0
  __int64 v8; // x1
  UILabel_o *v9; // x22
  System_String_o *v10; // x23
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // [xsp+8h] [xbp-38h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974429 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2954/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/);
    byte_5974429 = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_8;
  UILabel__SetDefaultFont(waveLabel, 0);
  v9 = this->fields.waveLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0);
  v15 = current;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15);
  v14 = max;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
  waveLabel = (UILabel_o *)System_String__Format_75697880(v10, v11, v12, 0);
  if ( !v9 )
LABEL_8:
    sub_2213CDC(waveLabel, *(_QWORD *)&current);
  UILabel__set_text(v9, (System_String_o *)waveLabel, 0);
  BattleResultBondsDeckPerWaveComponent__SetLine(this, 0, v13);
}