void __fastcall ServantCheckEquipListViewItemDraw___ctor(
        ServantCheckEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCheckEquipListViewItemDraw__GetCanSkillCombineList(
        ServantCheckEquipListViewItemDraw_o *this,
        ServantCheckEquipListViewItem_o *item,
        SvtUseSkillData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CombineAppendPassiveSkillMaster_o *SelfUserGame; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Int32_array *svtUseSkillIdList; // x8
  int64_t MasterName_k__BackingField; // x22
  __int64 v20; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 v22; // x21
  struct System_Int32_array *svtSkillLvList; // x8
  struct UserServantEntity_o *materialUserServantEntity; // x8
  CombineAppendPassiveSkillMaster_o *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v29; // x9
  struct System_Int32_array *v30; // x8
  struct System_Int32_array *v31; // x8
  _QWORD *v32; // x9
  __int64 MasterName_k__BackingField_low; // x10
  struct System_Collections_Generic_List_int__o **p_enableSkillList; // [xsp+0h] [xbp-70h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B18583 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B18583 = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillList = v12;
  p_enableSkillList = &this->fields.enableSkillList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.enableSkillList, (int32_t)v12, v13, v14);
  SelfUserGame = (CombineAppendPassiveSkillMaster_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !skillInfo || (svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList) == 0LL )
LABEL_35:
    sub_1BCB254(SelfUserGame, v16);
  MasterName_k__BackingField = (int64_t)SelfUserGame[1].fields._MasterName_k__BackingField;
  v20 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v22 = v20 - 8;
    if ( v20 - 8 >= (int)max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_37;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v20) >= 1 )
    {
      svtSkillLvList = skillInfo->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_35;
      if ( v22 >= svtSkillLvList->max_length )
        goto LABEL_37;
      if ( *((int *)&svtSkillLvList->obj.klass + v20) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        if ( !item )
          goto LABEL_35;
        materialUserServantEntity = item->fields.materialUserServantEntity;
        if ( !materialUserServantEntity )
          goto LABEL_35;
        v25 = SelfUserGame;
        v27 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v26 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v27;
        *(_QWORD *)&v36.fields.fakeValue = v26;
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                              v36,
                                                              0LL);
        svtSkillNumsList = skillInfo->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_35;
        if ( v22 >= svtSkillNumsList->max_length )
          goto LABEL_37;
        v29 = skillInfo->fields.svtSkillLvList;
        if ( !v29 )
          goto LABEL_35;
        if ( v22 >= v29->max_length )
          goto LABEL_37;
        if ( !v25 )
          goto LABEL_35;
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                                              v25,
                                                              &entity,
                                                              (int32_t)SelfUserGame,
                                                              *((_DWORD *)&svtSkillNumsList->obj.klass + v20),
                                                              *((_DWORD *)&v29->obj.klass + v20),
                                                              0LL);
        if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_35;
          SelfUserGame = (CombineAppendPassiveSkillMaster_o *)CombineUtility__CheckCombineNeedItemsEnough(
                                                                item->fields.materialUserServantEntity,
                                                                entity->fields.itemIds,
                                                                entity->fields.itemNums,
                                                                MasterName_k__BackingField,
                                                                entity->fields.qp,
                                                                0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
          {
            v30 = skillInfo->fields.svtUseSkillIdList;
            if ( !v30 )
              goto LABEL_35;
            if ( v22 >= v30->max_length )
LABEL_37:
              sub_1BCB25C(SelfUserGame, v16, v17);
            SelfUserGame = (CombineAppendPassiveSkillMaster_o *)*p_enableSkillList;
            if ( !*p_enableSkillList )
              goto LABEL_35;
            v16 = *((unsigned int *)&v30->obj.klass + v20);
            v31 = *(struct System_Int32_array **)&SelfUserGame->fields._MasterKind_k__BackingField;
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(SelfUserGame->fields._MasterName_k__BackingField);
            if ( !v31 )
              goto LABEL_35;
            MasterName_k__BackingField_low = SLODWORD(SelfUserGame->fields._MasterName_k__BackingField);
            if ( (unsigned int)MasterName_k__BackingField_low >= v31->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v16,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(SelfUserGame->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
              v31->m_Items[MasterName_k__BackingField_low + 1] = v16;
            }
          }
        }
      }
    }
    svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList;
    ++v20;
    if ( !svtUseSkillIdList )
      goto LABEL_35;
  }
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  ServantFaceIconComponent_o *servantEquipIcon; // x0
  struct UserServantEntity_o *materialUserServantEntity; // x8
  UISprite_o *subInfo; // x24
  int32_t rarity; // w20
  int32_t exceedCount; // w22
  int32_t lv; // w23
  UISprite_o *warningSprite; // x20
  __int64 *v27; // x8
  UISprite_o *v28; // x20
  UISprite_o *v29; // x20
  SvtUseSkillData_o *AppendSkillInfo; // x20
  const MethodInfo *v31; // x3
  System_Text_StringBuilder_o *v32; // x21
  __int64 v33; // x2
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v35; // x8
  unsigned __int64 v36; // x24
  __int64 v37; // x25
  __int64 v38; // x26
  __int64 v39; // x27
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *v42; // x9
  int32_t v43; // w23
  System_String_o *v44; // x0
  Il2CppObject *v45; // x22
  __int64 *v46; // x8
  bool v47; // w23
  UILabel_o *appendSkillLevelLabel; // x19

  if ( (byte_4B18582 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&Rarity_TypeInfo, v9);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_12132/*"SKILL_LVDISP_TXT"*/, v11);
    sub_1BCAFF8(&StringLiteral_12130/*"SKILL_LVDISP_ENABLE_TXT"*/, v12);
    sub_1BCAFF8(&StringLiteral_22902/*"ribbon_noblephantasmup_01"*/, v13);
    sub_1BCAFF8(&StringLiteral_20040/*"icon_reinforced"*/, v14);
    sub_1BCAFF8(&StringLiteral_12129/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v15);
    sub_1BCAFF8(&StringLiteral_20029/*"icon_noblephantasmup"*/, v16);
    sub_1BCAFF8(&StringLiteral_20039/*"icon_rarity5"*/, v17);
    sub_1BCAFF8(&StringLiteral_12131/*"SKILL_LVDISP_SINGLE_TXT"*/, v18);
    sub_1BCAFF8(&StringLiteral_9217/*"NONSKILL_TXT"*/, v19);
    byte_4B18582 = 1;
  }
  if ( item && mode )
  {
    servantEquipIcon = this->fields.servantEquipIcon;
    if ( !servantEquipIcon )
      goto LABEL_96;
    ServantFaceIconComponent__Set_40190236(
      servantEquipIcon,
      item->fields.materialUserServantEntity,
      item->fields.materialIconLabelInfo,
      0LL,
      0LL);
    materialUserServantEntity = item->fields.materialUserServantEntity;
    if ( !materialUserServantEntity )
      goto LABEL_96;
    subInfo = this->fields.subInfo;
    rarity = item->fields.rarity;
    exceedCount = materialUserServantEntity->fields.exceedCount;
    lv = materialUserServantEntity->fields.lv;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Rarity__setRarityIcon(subInfo, rarity, exceedCount, lv, rarity, 0LL);
    switch ( item->fields.warningTextType )
    {
      case 0:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        goto LABEL_33;
      case 1:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        warningSprite = this->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCommon(warningSprite, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        v27 = &StringLiteral_20040/*"icon_reinforced"*/;
        goto LABEL_32;
      case 2:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        v28 = this->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCommon(v28, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        v27 = &StringLiteral_20039/*"icon_rarity5"*/;
LABEL_32:
        UISprite__set_spriteName((UISprite_o *)servantEquipIcon, (System_String_o *)*v27, 0LL);
LABEL_33:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
LABEL_45:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.appendSkillLevelLabel;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        return;
      case 3:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        v29 = this->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_20029/*"icon_noblephantasmup"*/, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        AtlasManager__SetEventSprite(this->fields.materialTdSprite, (System_String_o *)StringLiteral_22902/*"ribbon_noblephantasmup_01"*/, 0LL);
        goto LABEL_45;
      case 4:
        servantEquipIcon = this->fields.servantEquipIcon;
        if ( !servantEquipIcon )
          goto LABEL_96;
        ServantFaceIconComponent__SetDispLimitCountIcon(servantEquipIcon, 0, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.appendSkillLevelLabel;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)item->fields.materialUserServantEntity;
        if ( !servantEquipIcon )
          goto LABEL_96;
        AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)servantEquipIcon, 0LL);
        ServantCheckEquipListViewItemDraw__GetCanSkillCombineList(this, item, AppendSkillInfo, v31);
        v32 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v32, 0LL);
        if ( !AppendSkillInfo )
          goto LABEL_96;
        svtUseSkillIdList = AppendSkillInfo->fields.svtUseSkillIdList;
        if ( !svtUseSkillIdList )
          goto LABEL_96;
        v35 = *(_QWORD *)&svtUseSkillIdList->max_length;
        if ( (int)v35 >= 1 )
        {
          v36 = 0LL;
          v37 = (unsigned int)(v35 - 1);
          v38 = (unsigned int)v35;
          v39 = 32LL;
          while ( 1 )
          {
            svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
            if ( !svtSkillLvList )
              goto LABEL_96;
            if ( v36 >= svtSkillLvList->max_length )
              goto LABEL_97;
            if ( *(int *)((char *)&svtSkillLvList->obj.klass + v39) >= 2 )
            {
              servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
              if ( !servantEquipIcon )
                goto LABEL_96;
              servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)servantEquipIcon,
                                                                 0LL);
              if ( !servantEquipIcon )
                goto LABEL_96;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
            }
            v41 = AppendSkillInfo->fields.svtUseSkillIdList;
            if ( !v41 )
              goto LABEL_96;
            if ( v36 >= v41->max_length )
              goto LABEL_97;
            v42 = AppendSkillInfo->fields.svtSkillLvList;
            if ( !v42 )
              goto LABEL_96;
            if ( v36 >= v42->max_length )
LABEL_97:
              sub_1BCB25C(servantEquipIcon, item, v33);
            v43 = *(_DWORD *)((char *)&v41->obj.klass + v39);
            if ( *(int *)((char *)&v42->obj.klass + v39) <= 0 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9217/*"NONSKILL_TXT"*/, 0LL);
            }
            else
            {
              v44 = System_Int32__ToString((int)v42 + (int)v39, 0LL);
            }
            v45 = (Il2CppObject *)v44;
            servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.enableSkillList;
            if ( v37 == v36 )
            {
              if ( servantEquipIcon
                && System_Collections_Generic_List_int___Contains(
                     (System_Collections_Generic_List_int__o *)servantEquipIcon,
                     v43,
                     (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                v46 = &StringLiteral_12129/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v46 = &StringLiteral_12129/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                }
              }
              else
              {
                v46 = &StringLiteral_12131/*"SKILL_LVDISP_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v46 = &StringLiteral_12131/*"SKILL_LVDISP_SINGLE_TXT"*/;
                }
              }
            }
            else
            {
              if ( !servantEquipIcon )
                goto LABEL_96;
              v47 = System_Collections_Generic_List_int___Contains(
                      (System_Collections_Generic_List_int__o *)servantEquipIcon,
                      v43,
                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v46 = &StringLiteral_12130/*"SKILL_LVDISP_ENABLE_TXT"*/;
              if ( !v47 )
                v46 = &StringLiteral_12132/*"SKILL_LVDISP_TXT"*/;
            }
            servantEquipIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v46, 0LL);
            if ( !v32 )
              goto LABEL_96;
            servantEquipIcon = (ServantFaceIconComponent_o *)System_Text_StringBuilder__AppendFormat(
                                                               v32,
                                                               (System_String_o *)servantEquipIcon,
                                                               v45,
                                                               0LL);
            ++v36;
            v39 += 4LL;
            if ( v38 == v36 )
              goto LABEL_94;
          }
        }
        if ( !v32 )
          goto LABEL_96;
LABEL_94:
        appendSkillLevelLabel = this->fields.appendSkillLevelLabel;
        servantEquipIcon = (ServantFaceIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v32->klass->vtable._3_ToString.method)(
                                                           v32,
                                                           v32->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !appendSkillLevelLabel )
LABEL_96:
          sub_1BCB254(servantEquipIcon, item);
        UILabel__set_text(appendSkillLevelLabel, (System_String_o *)servantEquipIcon, 0LL);
        break;
      default:
        return;
    }
  }
}