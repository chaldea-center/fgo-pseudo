void BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B190 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4C3B190 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bondsIconList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


BattleResultBondsIconComponent_o *BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *iconRoot; // x0
  Il2CppObject *bondsIcon; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *bondsIconList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v10; // x10
  __int64 size; // x11
  BattleResultBondsIconComponent_o *v12; // x19
  Il2CppClass **v13; // x0

  if ( (byte_4C3B18C & 1) == 0 )
  {
    sub_1C32C20(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
    byte_4C3B18C = 1;
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
                                                (const MethodInfo_30C6068 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList) == 0)
    || (items = bondsIconList->fields._items,
        v10 = Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__,
        ++bondsIconList->fields._version,
        !items) )
  {
    sub_1C32E7C(iconRoot);
  }
  size = bondsIconList->fields._size;
  v12 = (BattleResultBondsIconComponent_o *)iconRoot;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bondsIconList,
      (Il2CppObject *)iconRoot,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    bondsIconList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v6, v7);
  }
  return v12;
}


BattleResultBondsIconComponent_array *BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bondsIconList; // x0

  if ( (byte_4C3B18D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    byte_4C3B18D = 1;
  }
  bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_1C32E7C(0);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_object___ToArray(
                                                   bondsIconList,
                                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UIGrid_o *, const MethodInfo *))iconRoot->klass->vtable._8_Reposition.methodPtr)(
    iconRoot,
    iconRoot->klass->vtable._8_Reposition.method);
}


void BattleResultBondsDeckPerWaveComponent__SetLine(
        BattleResultBondsDeckPerWaveComponent_o *this,
        bool isPartyNameDialog,
        const MethodInfo *method)
{
  BattleResultBondsDeckPerWaveComponent_o *v3; // x19
  struct UILabel_o *waveLabel; // x8
  int32_t mWidth; // w9
  int m_CancellationTokenSource; // w8
  int v7; // w9

  v3 = this;
  if ( isPartyNameDialog )
  {
    this = (BattleResultBondsDeckPerWaveComponent_o *)this->fields.waveLabelLine;
    if ( !this )
      goto LABEL_9;
    UIWidget__set_width((UIWidget_o *)this, LODWORD(this[2].fields.m_CancellationTokenSource) + 22, 0);
  }
  waveLabel = v3->fields.waveLabel;
  if ( !waveLabel || (this = (BattleResultBondsDeckPerWaveComponent_o *)v3->fields.waveLabelLine) == 0 )
LABEL_9:
    sub_1C32E7C(this);
  mWidth = waveLabel->fields.mWidth;
  m_CancellationTokenSource = (int)this[2].fields.m_CancellationTokenSource;
  v7 = m_CancellationTokenSource + mWidth;
  if ( v7 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)this, m_CancellationTokenSource - v7 + 276, 0);
}


void BattleResultBondsDeckPerWaveComponent__SetPartyName(
        BattleResultBondsDeckPerWaveComponent_o *this,
        int32_t partyId,
        const MethodInfo *method)
{
  UILabel_o *waveLabel; // x0
  UILabel_o *v6; // x21
  System_String_o *v7; // x22
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4C3B18F & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2838/*"BATTLE_RESULT_BONDS_PARTY_ID"*/);
    byte_4C3B18F = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_8;
  UILabel__SetDefaultFont(waveLabel, 0);
  v6 = this->fields.waveLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2838/*"BATTLE_RESULT_BONDS_PARTY_ID"*/, 0);
  v8 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(partyId, 0);
  waveLabel = (UILabel_o *)System_String__Format(v7, v8, 0);
  if ( !v6 )
LABEL_8:
    sub_1C32E7C(waveLabel);
  UILabel__set_text(v6, (System_String_o *)waveLabel, 0);
  BattleResultBondsDeckPerWaveComponent__SetLine(this, 1, v9);
}


void BattleResultBondsDeckPerWaveComponent__SetWaveCount(
        BattleResultBondsDeckPerWaveComponent_o *this,
        int32_t current,
        int32_t max,
        const MethodInfo *method)
{
  UILabel_o *waveLabel; // x0
  UILabel_o *v8; // x22
  System_String_o *v9; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  int32_t v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3B18E & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2839/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/);
    byte_4C3B18E = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_8;
  UILabel__SetDefaultFont(waveLabel, 0);
  v8 = this->fields.waveLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2839/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0);
  v26 = current;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v10, v11, v12, v13, v14, v15);
  v25 = max;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v17, v18, v19, v20, v21, v22);
  waveLabel = (UILabel_o *)System_String__Format_63559836(v9, v16, v23, 0);
  if ( !v8 )
LABEL_8:
    sub_1C32E7C(waveLabel);
  UILabel__set_text(v8, (System_String_o *)waveLabel, 0);
  BattleResultBondsDeckPerWaveComponent__SetLine(this, 0, v24);
}