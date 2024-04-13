void __fastcall ServantCheckEquipListViewItemDraw___ctor(
        ServantCheckEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCheckEquipListViewItemDraw__SetInput(
        ServantCheckEquipListViewItemDraw_o *this,
        ServantCheckEquipListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantCheckEquipListViewItemDraw__SetItem(
        ServantCheckEquipListViewItemDraw_o *this,
        ServantCheckEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantCheckEquipListViewItemDraw_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct UserServantEntity_o *materialUserServantEntity; // x8
  __int128 v26; // q1
  ServantFaceIconComponent_o *servantEquipIcon; // x21
  struct UserServantEntity_o *v28; // x8
  UISprite_o *subInfo; // x24
  int32_t rarity; // w23
  int32_t exceedCount; // w21
  int32_t lv; // w22
  UISprite_o *warningSprite; // x20
  __int64 *v34; // x8
  UISprite_o *v35; // x20
  UISprite_o *v36; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_42E9C64 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Rarity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19600/*"icon_reinforced"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_19592/*"icon_noblephantasmup"*/, v19, v20, v21);
    this = (ServantCheckEquipListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_19599/*"icon_rarity5"*/, v22, v23, v24);
    byte_42E9C64 = 1;
  }
  if ( item && mode )
  {
    materialUserServantEntity = item->fields.materialUserServantEntity;
    if ( !materialUserServantEntity )
      goto LABEL_53;
    v26 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.fakeValue;
    servantEquipIcon = v6->fields.servantEquipIcon;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&materialUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v37 = v38;
    this = (ServantCheckEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v37,
                                                    0LL);
    if ( !servantEquipIcon
      || (ServantFaceIconComponent__Set_30849484(
            servantEquipIcon,
            (int64_t)this,
            item->fields.materialIconLabelInfo,
            0LL,
            0LL),
          (v28 = item->fields.materialUserServantEntity) == 0LL) )
    {
LABEL_53:
      sub_B5D69C(this, item);
    }
    subInfo = v6->fields.subInfo;
    rarity = item->fields.rarity;
    exceedCount = v28->fields.exceedCount;
    lv = v28->fields.lv;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Rarity__setRarityIcon(subInfo, rarity, exceedCount, lv, 0LL);
    switch ( item->fields.warningTextType )
    {
      case 0:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_39;
      case 1:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        warningSprite = v6->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(warningSprite, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        v34 = &StringLiteral_19600/*"icon_reinforced"*/;
        goto LABEL_38;
      case 2:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v35 = v6->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v35, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        v34 = &StringLiteral_19599/*"icon_rarity5"*/;
LABEL_38:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v34, 0LL);
LABEL_39:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.materialTdSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        break;
      case 3:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v36 = v6->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v36, (System_String_o *)StringLiteral_19592/*"icon_noblephantasmup"*/, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.materialTdSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        AtlasManager__SetEventSprite(v6->fields.materialTdSprite, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
        return;
      default:
        return;
    }
  }
}