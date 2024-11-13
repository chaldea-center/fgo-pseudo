void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B194B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v5, v6);
    byte_4B194B1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bondsIconList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


BattleResultBondsIconComponent_o *__fastcall BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *iconRoot; // x0
  Il2CppObject *bondsIcon; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *bondsIconList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  BattleResultBondsIconComponent_o *v19; // x19
  Il2CppClass **v20; // x0

  if ( (byte_4B194AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__, v4, v5);
    byte_4B194AE = 1;
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
                                                (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList) == 0LL)
    || (items = bondsIconList->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__,
        ++bondsIconList->fields._version,
        !items) )
  {
    sub_1BCAA3C(iconRoot, method);
  }
  size = bondsIconList->fields._size;
  v19 = (BattleResultBondsIconComponent_o *)iconRoot;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bondsIconList,
      (Il2CppObject *)iconRoot,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    bondsIconList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v19, v9, v10, v11, v12, v13, v14);
  }
  return v19;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *bondsIconList; // x0

  if ( (byte_4B194AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, method, v2);
    byte_4B194AF = 1;
  }
  bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_1BCAA3C(0LL, method);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_object___ToArray(
                                                   bondsIconList,
                                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_1BCAA3C(0LL, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *waveLabel; // x0
  __int64 v12; // x1
  UILabel_o *v13; // x22
  System_String_o *v14; // x23
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  struct UILabel_o *v17; // x8
  int32_t mWidth; // w9
  int32_t v19; // w8
  int v20; // w9
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B194B0 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&max);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2976/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v9, v10);
    byte_4B194B0 = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_12;
  UILabel__SetDefaultFont(waveLabel, 0LL);
  v13 = this->fields.waveLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2976/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
  v22 = current;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v21 = max;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  waveLabel = (UILabel_o *)System_String__Format_62415592(v14, v15, v16, 0LL);
  if ( !v13
    || (UILabel__set_text(v13, (System_String_o *)waveLabel, 0LL), (v17 = this->fields.waveLabel) == 0LL)
    || (waveLabel = (UILabel_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(waveLabel, *(_QWORD *)&current);
  }
  mWidth = v17->fields.mWidth;
  v19 = waveLabel->fields.mWidth;
  v20 = v19 + mWidth;
  if ( v20 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)waveLabel, v19 - v20 + 276, 0LL);
}