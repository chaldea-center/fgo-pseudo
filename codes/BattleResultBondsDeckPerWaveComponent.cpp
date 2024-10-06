void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A72FC6 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v3);
    byte_4A72FC6 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.bondsIconList, (int32_t)v4, v5, v6);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *bondsIconList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v11; // x10
  __int64 size; // x11
  BattleResultBondsIconComponent_o *v13; // x19
  Il2CppClass **v14; // x0

  if ( (byte_4A72FC3 & 1) == 0 )
  {
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___, method);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__, v3);
    byte_4A72FC3 = 1;
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
                                                (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList) == 0LL)
    || (items = bondsIconList->fields._items,
        v11 = Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__,
        ++bondsIconList->fields._version,
        !items) )
  {
    sub_1B9026C(iconRoot, method);
  }
  size = bondsIconList->fields._size;
  v13 = (BattleResultBondsIconComponent_o *)iconRoot;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bondsIconList,
      (Il2CppObject *)iconRoot,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    bondsIconList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v13;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v13, v7, v8);
  }
  return v13;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bondsIconList; // x0

  if ( (byte_4A72FC4 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, method);
    byte_4A72FC4 = 1;
  }
  bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_1B9026C(0LL, method);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_object___ToArray(
                                                   bondsIconList,
                                                   (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_1B9026C(0LL, method);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  struct UILabel_o *v20; // x8
  int32_t mWidth; // w9
  int32_t v22; // w8
  int v23; // w9
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A72FC5 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&current);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&StringLiteral_2956/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v8);
    byte_4A72FC5 = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_12;
  UILabel__SetDefaultFont(waveLabel, 0LL);
  v10 = this->fields.waveLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
  v25 = current;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14);
  v24 = max;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v16, v17, v18);
  waveLabel = (UILabel_o *)System_String__Format_61801464(v11, v15, v19, 0LL);
  if ( !v10
    || (UILabel__set_text(v10, (System_String_o *)waveLabel, 0LL), (v20 = this->fields.waveLabel) == 0LL)
    || (waveLabel = (UILabel_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_12:
    sub_1B9026C(waveLabel, *(_QWORD *)&current);
  }
  mWidth = v20->fields.mWidth;
  v22 = waveLabel->fields.mWidth;
  v23 = v22 + mWidth;
  if ( v23 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)waveLabel, v22 - v23 + 276, 0LL);
}