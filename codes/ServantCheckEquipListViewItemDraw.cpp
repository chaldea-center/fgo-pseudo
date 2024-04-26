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
  struct UserServantEntity_o *materialUserServantEntity; // x8
  __int128 v8; // q1
  ServantFaceIconComponent_o *servantEquipIcon; // x21
  struct UserServantEntity_o *v10; // x8
  UISprite_o *subInfo; // x24
  int32_t rarity; // w23
  int32_t exceedCount; // w21
  int32_t lv; // w22
  UISprite_o *warningSprite; // x20
  __int64 *v16; // x8
  UISprite_o *v17; // x20
  UISprite_o *v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4352F54 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&StringLiteral_22192/*"ribbon_noblephantasmup_01"*/);
    sub_B70694(&StringLiteral_19658/*"icon_reinforced"*/);
    sub_B70694(&StringLiteral_19650/*"icon_noblephantasmup"*/);
    this = (ServantCheckEquipListViewItemDraw_o *)sub_B70694(&StringLiteral_19657/*"icon_rarity5"*/);
    byte_4352F54 = 1;
  }
  if ( item && mode )
  {
    materialUserServantEntity = item->fields.materialUserServantEntity;
    if ( !materialUserServantEntity )
      goto LABEL_53;
    v8 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.fakeValue;
    servantEquipIcon = v6->fields.servantEquipIcon;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&materialUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v8;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v19 = v20;
    this = (ServantCheckEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(
                                                    &v19,
                                                    0LL);
    if ( !servantEquipIcon
      || (ServantFaceIconComponent__Set_31481092(
            servantEquipIcon,
            (int64_t)this,
            item->fields.materialIconLabelInfo,
            0LL,
            0LL),
          (v10 = item->fields.materialUserServantEntity) == 0LL) )
    {
LABEL_53:
      sub_B7076C(this, item);
    }
    subInfo = v6->fields.subInfo;
    rarity = item->fields.rarity;
    exceedCount = v10->fields.exceedCount;
    lv = v10->fields.lv;
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
        v16 = &StringLiteral_19658/*"icon_reinforced"*/;
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
        v17 = v6->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v17, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_53;
        v16 = &StringLiteral_19657/*"icon_rarity5"*/;
LABEL_38:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v16, 0LL);
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
        v18 = v6->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_19650/*"icon_noblephantasmup"*/, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.materialTdSprite;
        if ( !this )
          goto LABEL_53;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        AtlasManager__SetEventSprite(v6->fields.materialTdSprite, (System_String_o *)StringLiteral_22192/*"ribbon_noblephantasmup_01"*/, 0LL);
        return;
      default:
        return;
    }
  }
}