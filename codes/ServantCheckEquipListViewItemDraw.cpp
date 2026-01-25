void ServantCheckEquipListViewItemDraw___ctor(ServantCheckEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantCheckEquipListViewItemDraw__GetCanSkillCombineList(
        ServantCheckEquipListViewItemDraw_o *this,
        ServantCheckEquipListViewItem_o *item,
        SvtUseSkillData_o *skillInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  CombineAppendPassiveSkillMaster_o *SelfUserGame; // x0
  __int64 v15; // x1
  struct System_Int32_array *svtUseSkillIdList; // x8
  int64_t MasterName_k__BackingField; // x22
  __int64 v18; // x29
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v20; // x21
  struct System_Int32_array *svtSkillLvList; // x8
  struct UserServantEntity_o *materialUserServantEntity; // x8
  CombineAppendPassiveSkillMaster_o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v27; // x9
  struct System_Int32_array *v28; // x8
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 MasterName_k__BackingField_low; // x10
  struct System_Collections_Generic_List_int__o **p_enableSkillList; // [xsp+0h] [xbp-70h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4CEA4FB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA4FB = 1;
  }
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillList = v7;
  p_enableSkillList = &this->fields.enableSkillList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.enableSkillList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  SelfUserGame = (CombineAppendPassiveSkillMaster_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || !skillInfo || (svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList) == 0 )
LABEL_35:
    sub_1C7BD40(SelfUserGame, v15);
  MasterName_k__BackingField = (int64_t)SelfUserGame[1].fields._MasterName_k__BackingField;
  v18 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    v20 = v18 - 8;
    if ( v18 - 8 >= (int)max_length_low )
      break;
    if ( v20 >= max_length_low )
      goto LABEL_37;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v18) >= 1 )
    {
      svtSkillLvList = skillInfo->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_35;
      if ( v20 >= LODWORD(svtSkillLvList->max_length) )
        goto LABEL_37;
      if ( *((int *)&svtSkillLvList->obj.klass + v18) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        if ( !item )
          goto LABEL_35;
        materialUserServantEntity = item->fields.materialUserServantEntity;
        if ( !materialUserServantEntity )
          goto LABEL_35;
        v23 = SelfUserGame;
        v25 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v24 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v25;
        *(_QWORD *)&v34.fields.fakeValue = v24;
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                              v34,
                                                              0);
        svtSkillNumsList = skillInfo->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_35;
        if ( v20 >= LODWORD(svtSkillNumsList->max_length) )
          goto LABEL_37;
        v27 = skillInfo->fields.svtSkillLvList;
        if ( !v27 )
          goto LABEL_35;
        if ( v20 >= LODWORD(v27->max_length) )
          goto LABEL_37;
        if ( !v23 )
          goto LABEL_35;
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                                              v23,
                                                              &entity,
                                                              (int32_t)SelfUserGame,
                                                              *((_DWORD *)&svtSkillNumsList->obj.klass + v18),
                                                              *((_DWORD *)&v27->obj.klass + v18),
                                                              0);
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
                                                                0);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
          {
            v28 = skillInfo->fields.svtUseSkillIdList;
            if ( !v28 )
              goto LABEL_35;
            if ( v20 >= LODWORD(v28->max_length) )
LABEL_37:
              sub_1C7BD48(SelfUserGame);
            SelfUserGame = (CombineAppendPassiveSkillMaster_o *)*p_enableSkillList;
            if ( !*p_enableSkillList )
              goto LABEL_35;
            v15 = *((unsigned int *)&v28->obj.klass + v18);
            v29 = *(struct System_Int32_array **)&SelfUserGame->fields._MasterKind_k__BackingField;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(SelfUserGame->fields._MasterName_k__BackingField);
            if ( !v29 )
              goto LABEL_35;
            MasterName_k__BackingField_low = SLODWORD(SelfUserGame->fields._MasterName_k__BackingField);
            if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v29->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v15,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(SelfUserGame->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
              v29->m_Items[MasterName_k__BackingField_low] = v15;
            }
          }
        }
      }
    }
    svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList;
    ++v18;
    if ( !svtUseSkillIdList )
      goto LABEL_35;
  }
}


void ServantCheckEquipListViewItemDraw__SetInput(
        ServantCheckEquipListViewItemDraw_o *this,
        ServantCheckEquipListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


void ServantCheckEquipListViewItemDraw__SetItem(
        ServantCheckEquipListViewItemDraw_o *this,
        ServantCheckEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantEquipIcon; // x0
  struct UserServantEntity_o *materialUserServantEntity; // x8
  UISprite_o *subInfo; // x24
  int32_t rarity; // w20
  int32_t exceedCount; // w22
  int32_t lv; // w23
  UISprite_o *warningSprite; // x20
  __int64 *v14; // x8
  UISprite_o *v15; // x20
  UISprite_o *v16; // x20
  SvtUseSkillData_o *AppendSkillInfo; // x20
  const MethodInfo *v18; // x3
  System_Text_StringBuilder_o *v19; // x21
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  __int64 v25; // x27
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v27; // x8
  struct System_Int32_array *v28; // x9
  int32_t v29; // w23
  System_String_o *v30; // x0
  Il2CppObject *v31; // x22
  __int64 *v32; // x8
  bool v33; // w23
  UILabel_o *appendSkillLevelLabel; // x19

  if ( (byte_4CEA4FA & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Rarity_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12286/*"SKILL_LVDISP_TXT"*/);
    sub_1C7BAE8(&StringLiteral_12284/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C7BAE8(&StringLiteral_23336/*"ribbon_noblephantasmup_01"*/);
    sub_1C7BAE8(&StringLiteral_20386/*"icon_reinforced"*/);
    sub_1C7BAE8(&StringLiteral_12283/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C7BAE8(&StringLiteral_20375/*"icon_noblephantasmup"*/);
    sub_1C7BAE8(&StringLiteral_20385/*"icon_rarity5"*/);
    sub_1C7BAE8(&StringLiteral_12285/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C7BAE8(&StringLiteral_9314/*"NONSKILL_TXT"*/);
    byte_4CEA4FA = 1;
  }
  if ( item && mode )
  {
    servantEquipIcon = this->fields.servantEquipIcon;
    if ( !servantEquipIcon )
      goto LABEL_96;
    ServantFaceIconComponent__Set_41658632(
      servantEquipIcon,
      item->fields.materialUserServantEntity,
      item->fields.materialIconLabelInfo,
      0,
      0);
    materialUserServantEntity = item->fields.materialUserServantEntity;
    if ( !materialUserServantEntity )
      goto LABEL_96;
    subInfo = this->fields.subInfo;
    rarity = item->fields.rarity;
    exceedCount = materialUserServantEntity->fields.exceedCount;
    lv = materialUserServantEntity->fields.lv;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Rarity__setRarityIcon(subInfo, rarity, exceedCount, lv, rarity, 0);
    switch ( item->fields.warningTextType )
    {
      case 0:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        goto LABEL_33;
      case 1:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
        warningSprite = this->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCommon(warningSprite, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        v14 = &StringLiteral_20386/*"icon_reinforced"*/;
        goto LABEL_32;
      case 2:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
        v15 = this->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCommon(v15, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        v14 = &StringLiteral_20385/*"icon_rarity5"*/;
LABEL_32:
        UISprite__set_spriteName((UISprite_o *)servantEquipIcon, (System_String_o *)*v14, 0);
LABEL_33:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
LABEL_45:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.appendSkillLevelLabel;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        return;
      case 3:
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
        v16 = this->fields.warningSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20375/*"icon_noblephantasmup"*/, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
        AtlasManager__SetEventSprite(this->fields.materialTdSprite, (System_String_o *)StringLiteral_23336/*"ribbon_noblephantasmup_01"*/, 0);
        goto LABEL_45;
      case 4:
        servantEquipIcon = this->fields.servantEquipIcon;
        if ( !servantEquipIcon )
          goto LABEL_96;
        ServantFaceIconComponent__SetDispLimitCountIcon(servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.appendSkillLevelLabel;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)item->fields.materialUserServantEntity;
        if ( !servantEquipIcon )
          goto LABEL_96;
        AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)servantEquipIcon, 0);
        ServantCheckEquipListViewItemDraw__GetCanSkillCombineList(this, item, AppendSkillInfo, v18);
        v19 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v19, 0);
        if ( !AppendSkillInfo )
          goto LABEL_96;
        svtUseSkillIdList = AppendSkillInfo->fields.svtUseSkillIdList;
        if ( !svtUseSkillIdList )
          goto LABEL_96;
        max_length = svtUseSkillIdList->max_length;
        if ( (int)max_length >= 1 )
        {
          v22 = 0;
          v23 = (unsigned int)(max_length - 1);
          v24 = (unsigned int)max_length;
          v25 = 32;
          while ( 1 )
          {
            svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
            if ( !svtSkillLvList )
              goto LABEL_96;
            if ( v22 >= LODWORD(svtSkillLvList->max_length) )
              goto LABEL_97;
            if ( *(int *)((char *)&svtSkillLvList->obj.klass + v25) >= 2 )
            {
              servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
              if ( !servantEquipIcon )
                goto LABEL_96;
              servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)servantEquipIcon,
                                                                 0);
              if ( !servantEquipIcon )
                goto LABEL_96;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
            }
            v27 = AppendSkillInfo->fields.svtUseSkillIdList;
            if ( !v27 )
              goto LABEL_96;
            if ( v22 >= LODWORD(v27->max_length) )
              goto LABEL_97;
            v28 = AppendSkillInfo->fields.svtSkillLvList;
            if ( !v28 )
              goto LABEL_96;
            if ( v22 >= LODWORD(v28->max_length) )
LABEL_97:
              sub_1C7BD48(servantEquipIcon);
            v29 = *(_DWORD *)((char *)&v27->obj.klass + v25);
            if ( *(int *)((char *)&v28->obj.klass + v25) <= 0 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9314/*"NONSKILL_TXT"*/, 0);
            }
            else
            {
              v30 = System_Int32__ToString((int)v28 + (int)v25, 0);
            }
            v31 = (Il2CppObject *)v30;
            servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.enableSkillList;
            if ( v23 == v22 )
            {
              if ( servantEquipIcon
                && System_Collections_Generic_List_int___Contains(
                     (System_Collections_Generic_List_int__o *)servantEquipIcon,
                     v29,
                     (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                v32 = &StringLiteral_12283/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v32 = &StringLiteral_12283/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                }
              }
              else
              {
                v32 = &StringLiteral_12285/*"SKILL_LVDISP_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v32 = &StringLiteral_12285/*"SKILL_LVDISP_SINGLE_TXT"*/;
                }
              }
            }
            else
            {
              if ( !servantEquipIcon )
                goto LABEL_96;
              v33 = System_Collections_Generic_List_int___Contains(
                      (System_Collections_Generic_List_int__o *)servantEquipIcon,
                      v29,
                      (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v32 = &StringLiteral_12284/*"SKILL_LVDISP_ENABLE_TXT"*/;
              if ( !v33 )
                v32 = &StringLiteral_12286/*"SKILL_LVDISP_TXT"*/;
            }
            servantEquipIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v32, 0);
            if ( !v19 )
              goto LABEL_96;
            servantEquipIcon = (ServantFaceIconComponent_o *)System_Text_StringBuilder__AppendFormat(
                                                               v19,
                                                               (System_String_o *)servantEquipIcon,
                                                               v31,
                                                               0);
            ++v22;
            v25 += 4;
            if ( v24 == v22 )
              goto LABEL_94;
          }
        }
        if ( !v19 )
          goto LABEL_96;
LABEL_94:
        appendSkillLevelLabel = this->fields.appendSkillLevelLabel;
        servantEquipIcon = (ServantFaceIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v19->klass->vtable._3_ToString.methodPtr)(
                                                           v19,
                                                           v19->klass->vtable._3_ToString.method);
        if ( !appendSkillLevelLabel )
LABEL_96:
          sub_1C7BD40(servantEquipIcon, item);
        UILabel__set_text(appendSkillLevelLabel, (System_String_o *)servantEquipIcon, 0);
        break;
      default:
        return;
    }
  }
}