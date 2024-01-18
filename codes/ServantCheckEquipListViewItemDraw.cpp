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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserServantEntity_o *materialUserServantEntity; // x8
  __int128 v14; // q1
  ServantFaceIconComponent_o *servantEquipIcon; // x21
  struct UserServantEntity_o *v16; // x8
  UISprite_o *subInfo; // x24
  int32_t rarity; // w23
  int32_t exceedCount; // w21
  int32_t lv; // w22
  UISprite_o *warningSprite; // x20
  __int64 *v22; // x8
  UISprite_o *v23; // x20
  UISprite_o *v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4187C50 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Rarity_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, v9);
    sub_B2C35C(&StringLiteral_19356/*"icon_reinforced"*/, v10);
    sub_B2C35C(&StringLiteral_19348/*"icon_noblephantasmup"*/, v11);
    this = (ServantCheckEquipListViewItemDraw_o *)sub_B2C35C(&StringLiteral_19355/*"icon_rarity5"*/, v12);
    byte_4187C50 = 1;
  }
  if ( item && mode )
  {
    materialUserServantEntity = item->fields.materialUserServantEntity;
    if ( !materialUserServantEntity )
      goto LABEL_53;
    v14 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.fakeValue;
    servantEquipIcon = v6->fields.servantEquipIcon;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&materialUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v25 = v26;
    this = (ServantCheckEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                    &v25,
                                                    0LL);
    if ( !servantEquipIcon
      || (ServantFaceIconComponent__Set_30793276(
            servantEquipIcon,
            (int64_t)this,
            item->fields.materialIconLabelInfo,
            0LL,
            0LL),
          (v16 = item->fields.materialUserServantEntity) == 0LL) )
    {
LABEL_53:
      sub_B2C434(this, item);
    }
    subInfo = v6->fields.subInfo;
    rarity = item->fields.rarity;
    exceedCount = v16->fields.exceedCount;
    lv = v16->fields.lv;
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
        v22 = &StringLiteral_19356/*"icon_reinforced"*/;
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
        v23 = v6->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v23, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        v22 = &StringLiteral_19355/*"icon_rarity5"*/;
LABEL_38:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v22, 0LL);
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
        v24 = v6->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v24, (System_String_o *)StringLiteral_19348/*"icon_noblephantasmup"*/, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.materialTdSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        AtlasManager__SetEventSprite(v6->fields.materialTdSprite, (System_String_o *)StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, 0LL);
        return;
      default:
        return;
    }
  }
}