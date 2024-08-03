void __fastcall BattleResultBondsDeckPerWaveComponent___ctor(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF4DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v4);
    byte_49FF4DC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  this->fields.bondsIconList = (struct System_Collections_Generic_List_BattleResultBondsIconComponent__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bondsIconList, (int32_t)v5, v6, v7);
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

  if ( (byte_49FF4D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__, v3);
    byte_49FF4D9 = 1;
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
                                                (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsIconComponent___),
        (bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList) == 0LL)
    || (items = bondsIconList->fields._items,
        v11 = Method_System_Collections_Generic_List_BattleResultBondsIconComponent__Add__,
        ++bondsIconList->fields._version,
        !items) )
  {
    sub_1B64324(iconRoot);
  }
  size = bondsIconList->fields._size;
  v13 = (BattleResultBondsIconComponent_o *)iconRoot;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bondsIconList,
      (Il2CppObject *)iconRoot,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    bondsIconList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v13, v7, v8);
  }
  return v13;
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bondsIconList; // x0

  if ( (byte_49FF4DA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, method);
    byte_49FF4DA = 1;
  }
  bondsIconList = (System_Collections_Generic_List_object__o *)this->fields.bondsIconList;
  if ( !bondsIconList )
    sub_1B64324(0LL);
  return (BattleResultBondsIconComponent_array *)System_Collections_Generic_List_object___ToArray(
                                                   bondsIconList,
                                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
}


void __fastcall BattleResultBondsDeckPerWaveComponent__RepositionIcons(
        BattleResultBondsDeckPerWaveComponent_o *this,
        const MethodInfo *method)
{
  struct UIGrid_o *iconRoot; // x0

  iconRoot = this->fields.iconRoot;
  if ( !iconRoot )
    sub_1B64324(0LL);
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

  if ( (byte_49FF4DB & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&current);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_2935/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v8);
    byte_49FF4DB = 1;
  }
  waveLabel = this->fields.waveLabel;
  if ( !waveLabel )
    goto LABEL_12;
  UILabel__SetDefaultFont(waveLabel, 0LL);
  v10 = this->fields.waveLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2935/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
  v19 = current;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = max;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  waveLabel = (UILabel_o *)System_String__Format_61389768(v11, v12, v13, 0LL);
  if ( !v10
    || (UILabel__set_text(v10, (System_String_o *)waveLabel, 0LL), (v14 = this->fields.waveLabel) == 0LL)
    || (waveLabel = (UILabel_o *)this->fields.waveLabelLine) == 0LL )
  {
LABEL_12:
    sub_1B64324(waveLabel);
  }
  mWidth = v14->fields.mWidth;
  v16 = waveLabel->fields.mWidth;
  v17 = v16 + mWidth;
  if ( v17 + 9 >= 286 )
    UIWidget__set_width((UIWidget_o *)waveLabel, v16 - v17 + 276, 0LL);
}