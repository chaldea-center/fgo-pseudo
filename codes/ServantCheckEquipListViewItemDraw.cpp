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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserServantEntity_o *materialUserServantEntity; // x8
  __int128 v14; // q1
  ServantFaceIconComponent_o *servantEquipIcon; // x21
  int64_t v16; // x0
  struct UserServantEntity_o *v17; // x8
  UISprite_o *subInfo; // x24
  int32_t rarity; // w23
  int32_t exceedCount; // w21
  int32_t lv; // w22
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *warningSprite; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UISprite_o *v30; // x20
  UISprite_o *v31; // x0
  __int64 *v32; // x8
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UISprite_o *v37; // x20
  UnityEngine_Component_o *materialTdSprite; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UISprite_o *v44; // x20
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-50h]

  if ( (byte_40F94E1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Rarity_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_21736, v9);
    sub_B16FFC(&StringLiteral_19282, v10);
    sub_B16FFC(&StringLiteral_19274, v11);
    sub_B16FFC(&StringLiteral_19281, v12);
    byte_40F94E1 = 1;
  }
  if ( item && mode )
  {
    materialUserServantEntity = item->fields.materialUserServantEntity;
    if ( !materialUserServantEntity )
      goto LABEL_53;
    v14 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.fakeValue;
    servantEquipIcon = this->fields.servantEquipIcon;
    *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&materialUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v48.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v47 = v48;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v47, 0LL);
    if ( !servantEquipIcon
      || (ServantFaceIconComponent__Set_30705604(servantEquipIcon, v16, item->fields.materialIconLabelInfo, 0LL, 0LL),
          (v17 = item->fields.materialUserServantEntity) == 0LL) )
    {
LABEL_53:
      sub_B170D4();
    }
    subInfo = this->fields.subInfo;
    rarity = item->fields.rarity;
    exceedCount = v17->fields.exceedCount;
    lv = v17->fields.lv;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Rarity__setRarityIcon(subInfo, rarity, exceedCount, lv, 0LL);
    switch ( item->fields.warningTextType )
    {
      case 0:
        equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( !equipSprite )
          goto LABEL_53;
        gameObject = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
        if ( !gameObject )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        warningSprite = (UnityEngine_Component_o *)this->fields.warningSprite;
        if ( !warningSprite )
          goto LABEL_53;
        v25 = UnityEngine_Component__get_gameObject(warningSprite, 0LL);
        if ( !v25 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v25, 0, 0LL);
        goto LABEL_39;
      case 1:
        v26 = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( !v26 )
          goto LABEL_53;
        v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
        if ( !v27 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v27, 0, 0LL);
        v28 = (UnityEngine_Component_o *)this->fields.warningSprite;
        if ( !v28 )
          goto LABEL_53;
        v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
        if ( !v29 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v29, 1, 0LL);
        v30 = this->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v30, 0LL);
        v31 = this->fields.warningSprite;
        if ( !v31 )
          goto LABEL_53;
        v32 = &StringLiteral_19282;
        goto LABEL_38;
      case 2:
        v33 = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( !v33 )
          goto LABEL_53;
        v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
        if ( !v34 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v34, 0, 0LL);
        v35 = (UnityEngine_Component_o *)this->fields.warningSprite;
        if ( !v35 )
          goto LABEL_53;
        v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
        if ( !v36 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v36, 1, 0LL);
        v37 = this->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v37, 0LL);
        v31 = this->fields.warningSprite;
        if ( !v31 )
          goto LABEL_53;
        v32 = &StringLiteral_19281;
LABEL_38:
        UISprite__set_spriteName(v31, (System_String_o *)*v32, 0LL);
LABEL_39:
        materialTdSprite = (UnityEngine_Component_o *)this->fields.materialTdSprite;
        if ( !materialTdSprite )
          goto LABEL_53;
        v39 = UnityEngine_Component__get_gameObject(materialTdSprite, 0LL);
        if ( !v39 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v39, 0, 0LL);
        break;
      case 3:
        v40 = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( !v40 )
          goto LABEL_53;
        v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
        if ( !v41 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v41, 0, 0LL);
        v42 = (UnityEngine_Component_o *)this->fields.warningSprite;
        if ( !v42 )
          goto LABEL_53;
        v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
        if ( !v43 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v43, 1, 0LL);
        v44 = this->fields.warningSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v44, (System_String_o *)StringLiteral_19274, 0LL);
        v45 = (UnityEngine_Component_o *)this->fields.materialTdSprite;
        if ( !v45 )
          goto LABEL_53;
        v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
        if ( !v46 )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive(v46, 1, 0LL);
        AtlasManager__SetEventSprite(this->fields.materialTdSprite, (System_String_o *)StringLiteral_21736, 0LL);
        return;
      default:
        return;
    }
  }
}