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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItemDraw__SetItem(
        ServantCheckEquipListViewItemDraw_o *this,
        ServantCheckEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantCheckEquipListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct UserServantEntity_o *materialUserServantEntity; // x8
  __int128 v20; // q1
  ServantFaceIconComponent_o *servantEquipIcon; // x21
  struct UserServantEntity_o *v22; // x8
  UISprite_o *subInfo; // x24
  int32_t rarity; // w23
  int32_t exceedCount; // w21
  int32_t lv; // w22
  __int64 v27; // x1
  UISprite_o *warningSprite; // x20
  __int64 *v29; // x8
  __int64 v30; // x1
  UISprite_o *v31; // x20
  __int64 v32; // x1
  UISprite_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4B124B1 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&Rarity_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20382/*"icon_reinforced"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20371/*"icon_noblephantasmup"*/, v15, v16);
    this = (ServantCheckEquipListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_20381/*"icon_rarity5"*/, v17, v18);
    byte_4B124B1 = 1;
  }
  if ( item && mode )
  {
    materialUserServantEntity = item->fields.materialUserServantEntity;
    if ( !materialUserServantEntity )
      goto LABEL_48;
    v20 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.fakeValue;
    servantEquipIcon = v6->fields.servantEquipIcon;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&materialUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v20;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    v34 = v35;
    this = (ServantCheckEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                    &v34,
                                                    0LL);
    if ( !servantEquipIcon
      || (ServantFaceIconComponent__Set_38931044(
            servantEquipIcon,
            (int64_t)this,
            item->fields.materialIconLabelInfo,
            0LL,
            0LL),
          (v22 = item->fields.materialUserServantEntity) == 0LL) )
    {
LABEL_48:
      sub_1BCAA3C(this, item);
    }
    subInfo = v6->fields.subInfo;
    rarity = item->fields.rarity;
    exceedCount = v22->fields.exceedCount;
    lv = v22->fields.lv;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, item);
    Rarity__setRarityIcon(subInfo, rarity, exceedCount, lv, 0LL);
    switch ( item->fields.warningTextType )
    {
      case 0:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_35;
      case 1:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        warningSprite = v6->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27);
        AtlasManager__SetCommon(warningSprite, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_48;
        v29 = &StringLiteral_20382/*"icon_reinforced"*/;
        goto LABEL_34;
      case 2:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v31 = v6->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
        AtlasManager__SetCommon(v31, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_48;
        v29 = &StringLiteral_20381/*"icon_rarity5"*/;
LABEL_34:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v29, 0LL);
LABEL_35:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.materialTdSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        break;
      case 3:
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.equipSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.warningSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v33 = v6->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
        AtlasManager__SetEventSprite(v33, (System_String_o *)StringLiteral_20371/*"icon_noblephantasmup"*/, 0LL);
        this = (ServantCheckEquipListViewItemDraw_o *)v6->fields.materialTdSprite;
        if ( !this )
          goto LABEL_48;
        this = (ServantCheckEquipListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        AtlasManager__SetEventSprite(v6->fields.materialTdSprite, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
        return;
      default:
        return;
    }
  }
}