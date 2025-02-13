void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF8ED & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4BDF8ED = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bondsIconList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


BattleResultBondsIconComponent_o *__fastcall BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *iconRoot; // x0
  Il2CppObject *bondsIcon; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_List_object__o *bondsIconList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  BattleResultBondsIconComponent_o *v16; // x19
  Il2CppClass **v17; // x0

  if ( (byte_4BDF8EA & 1) == 0 )
  {
    sub_1C21E38(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__);
    byte_4BDF8EA = 1;
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
                                                (const MethodInfo_2F9A6E4 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList) == 0LL)
    || (items = bondsIconList->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__,
        ++bondsIconList->fields._version,
        !items) )
  {
    sub_1C22094(iconRoot, method);
  }
  size = bondsIconList->fields._size;
  v16 = (BattleResultBondsIconComponent_o *)iconRoot;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bondsIconList,
      (Il2CppObject *)iconRoot,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    bondsIconList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v16;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)v16, v6, v7, v8, v9, v10, v11);
  }
  return v16;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bondsIconList; // x0

  if ( (byte_4BDF8EB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    byte_4BDF8EB = 1;
  }
  bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_1C22094(0LL, method);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_object___ToArray(
                                                   bondsIconList,
                                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_1C22094(0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  struct UILabel_o *v18; // x8
  int32_t mWidth; // w9
  int32_t v20; // w8
  int v21; // w9
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDF8EC & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2995/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/);
    byte_4BDF8EC = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_12;
  UILabel__SetDefaultFont(waveLabel, 0LL);
  v8 = this->fields.waveLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
  v23 = current;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v10, v11, v12);
  v22 = max;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
  waveLabel = (UILabel_o *)System_String__Format_63129848(v9, v13, v17, 0LL);
  if ( !v8
    || (UILabel__set_text(v8, (System_String_o *)waveLabel, 0LL), (v18 = this->fields.waveLabel) == 0LL)
    || (waveLabel = (UILabel_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_12:
    sub_1C22094(waveLabel, *(_QWORD *)&current);
  }
  mWidth = v18->fields.mWidth;
  v20 = waveLabel->fields.mWidth;
  v21 = v20 + mWidth;
  if ( v21 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)waveLabel, v20 - v21 + 276, 0LL);
}