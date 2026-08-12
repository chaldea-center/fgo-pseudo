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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  CombineAppendPassiveSkillMaster_o *SelfUserGame; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Int32_array *svtUseSkillIdList; // x8
  int64_t MasterName_k__BackingField; // x22
  __int64 v19; // x29
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v21; // x21
  struct System_Int32_array *svtSkillLvList; // x8
  __int64 v23; // x2
  struct UserServantEntity_o *materialUserServantEntity; // x8
  CombineAppendPassiveSkillMaster_o *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v29; // x9
  struct System_Int32_array *v30; // x8
  struct System_Int32_array *v31; // x9
  _QWORD *v32; // x8
  __int64 MasterName_k__BackingField_low; // x10
  struct System_Collections_Generic_List_int__o **p_enableSkillList; // [xsp+0h] [xbp-70h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_596C5B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C5B6 = 1;
  }
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillList = v7;
  p_enableSkillList = &this->fields.enableSkillList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enableSkillList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SelfUserGame = (CombineAppendPassiveSkillMaster_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || !skillInfo || (svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList) == 0 )
LABEL_35:
    sub_2213CDC(SelfUserGame, v15);
  MasterName_k__BackingField = (int64_t)SelfUserGame[1].fields._MasterName_k__BackingField;
  v19 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    v21 = v19 - 8;
    if ( v19 - 8 >= (int)max_length_low )
      break;
    if ( v21 >= max_length_low )
      goto LABEL_37;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v19) >= 1 )
    {
      svtSkillLvList = skillInfo->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_35;
      if ( v21 >= LODWORD(svtSkillLvList->max_length) )
        goto LABEL_37;
      if ( *((int *)&svtSkillLvList->obj.klass + v19) >= 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        if ( !item )
          goto LABEL_35;
        materialUserServantEntity = item->fields.materialUserServantEntity;
        if ( !materialUserServantEntity )
          goto LABEL_35;
        v25 = SelfUserGame;
        v26 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v23);
        *(_QWORD *)&v36.fields.currentCryptoKey = v26;
        *(_QWORD *)&v36.fields.fakeValue = v27;
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                              v36,
                                                              0);
        svtSkillNumsList = skillInfo->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_35;
        if ( v21 >= LODWORD(svtSkillNumsList->max_length) )
          goto LABEL_37;
        v29 = skillInfo->fields.svtSkillLvList;
        if ( !v29 )
          goto LABEL_35;
        if ( v21 >= LODWORD(v29->max_length) )
          goto LABEL_37;
        if ( !v25 )
          goto LABEL_35;
        SelfUserGame = (CombineAppendPassiveSkillMaster_o *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                                              v25,
                                                              &entity,
                                                              (int32_t)SelfUserGame,
                                                              *((_DWORD *)&svtSkillNumsList->obj.klass + v19),
                                                              *((_DWORD *)&v29->obj.klass + v19),
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
            v30 = skillInfo->fields.svtUseSkillIdList;
            if ( !v30 )
              goto LABEL_35;
            if ( v21 >= LODWORD(v30->max_length) )
LABEL_37:
              sub_2213CE4(SelfUserGame);
            SelfUserGame = (CombineAppendPassiveSkillMaster_o *)*p_enableSkillList;
            if ( !*p_enableSkillList )
              goto LABEL_35;
            v15 = *((unsigned int *)&v30->obj.klass + v19);
            v31 = *(struct System_Int32_array **)&SelfUserGame->fields._MasterKind_k__BackingField;
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(SelfUserGame->fields._MasterName_k__BackingField);
            if ( !v31 )
              goto LABEL_35;
            MasterName_k__BackingField_low = SLODWORD(SelfUserGame->fields._MasterName_k__BackingField);
            if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v31->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v15,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(SelfUserGame->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
              v31->m_Items[MasterName_k__BackingField_low] = v15;
            }
          }
        }
      }
    }
    svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList;
    ++v19;
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
  __int64 v8; // x2
  struct UserServantEntity_o *materialUserServantEntity; // x8
  UISprite_o *subInfo; // x22
  int32_t rarity; // w20
  int32_t exceedCount; // w23
  int32_t lv; // w24
  int32_t warningTextType; // w8
  SvtUseSkillData_o *AppendSkillInfo; // x20
  const MethodInfo *v16; // x3
  System_Text_StringBuilder_o *v17; // x21
  __int64 v18; // x2
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v21; // x24
  __int64 v22; // x26
  __int64 v23; // x29
  __int64 v24; // x28
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v26; // x8
  struct System_Int32_array *v27; // x9
  int32_t v28; // w23
  System_String_o *v29; // x0
  __int64 v30; // x2
  Il2CppObject *v31; // x22
  LocalizationManager_c *v32; // x0
  __int64 *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  bool v36; // w23
  __int64 *v37; // x8
  System_String_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  UISprite_o *warningSprite; // x20
  __int64 *v42; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  UISprite_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  UISprite_o *v48; // x20
  UILabel_o *appendSkillLevelLabel; // x19

  if ( (byte_596C5B5 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_12752/*"SKILL_LVDISP_TXT"*/);
    sub_2213A60(&StringLiteral_12750/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_2213A60(&StringLiteral_24320/*"ribbon_noblephantasmup_01"*/);
    sub_2213A60(&StringLiteral_21196/*"icon_reinforced"*/);
    sub_2213A60(&StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_2213A60(&StringLiteral_21185/*"icon_noblephantasmup"*/);
    sub_2213A60(&StringLiteral_21195/*"icon_rarity5"*/);
    sub_2213A60(&StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_2213A60(&StringLiteral_9673/*"NONSKILL_TXT"*/);
    byte_596C5B5 = 1;
  }
  if ( !item || !mode )
    return;
  servantEquipIcon = this->fields.servantEquipIcon;
  if ( !servantEquipIcon )
    goto LABEL_105;
  ServantFaceIconComponent__Set_48049524(
    servantEquipIcon,
    item->fields.materialUserServantEntity,
    item->fields.materialIconLabelInfo,
    0,
    1,
    0);
  materialUserServantEntity = item->fields.materialUserServantEntity;
  if ( !materialUserServantEntity )
    goto LABEL_105;
  subInfo = this->fields.subInfo;
  rarity = item->fields.rarity;
  exceedCount = materialUserServantEntity->fields.exceedCount;
  lv = materialUserServantEntity->fields.lv;
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, item, v8);
  Rarity__setRarityIcon(subInfo, rarity, exceedCount, lv, rarity, 0);
  warningTextType = item->fields.warningTextType;
  if ( warningTextType <= 1 )
  {
    if ( !warningTextType )
    {
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( !servantEquipIcon )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( !servantEquipIcon )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
      goto LABEL_96;
    }
    if ( warningTextType != 1 )
      return;
    servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
    if ( !servantEquipIcon )
      goto LABEL_105;
    servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)servantEquipIcon,
                                                       0);
    if ( !servantEquipIcon )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
    servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
    if ( !servantEquipIcon )
      goto LABEL_105;
    servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)servantEquipIcon,
                                                       0);
    if ( !servantEquipIcon )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
    warningSprite = this->fields.warningSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39, v40);
    AtlasManager__SetCommon(warningSprite, 0);
    servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
    if ( !servantEquipIcon )
      goto LABEL_105;
    v42 = &StringLiteral_21196/*"icon_reinforced"*/;
LABEL_81:
    UISprite__set_spriteName((UISprite_o *)servantEquipIcon, (System_String_o *)*v42, 0);
LABEL_96:
    servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
    if ( !servantEquipIcon )
      goto LABEL_105;
    servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)servantEquipIcon,
                                                       0);
    if ( !servantEquipIcon )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
LABEL_99:
    servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.appendSkillLevelLabel;
    if ( servantEquipIcon )
    {
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( servantEquipIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
        return;
      }
    }
    goto LABEL_105;
  }
  switch ( warningTextType )
  {
    case 2:
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( !servantEquipIcon )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( !servantEquipIcon )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
      v45 = this->fields.warningSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43, v44);
      AtlasManager__SetCommon(v45, 0);
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      v42 = &StringLiteral_21195/*"icon_rarity5"*/;
      goto LABEL_81;
    case 3:
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( !servantEquipIcon )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( !servantEquipIcon )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
      v48 = this->fields.warningSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v46, v47);
      AtlasManager__SetEventSprite(v48, (System_String_o *)StringLiteral_21185/*"icon_noblephantasmup"*/, 0);
      servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
      if ( !servantEquipIcon )
        goto LABEL_105;
      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                         0);
      if ( !servantEquipIcon )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
      AtlasManager__SetEventSprite(this->fields.materialTdSprite, (System_String_o *)StringLiteral_24320/*"ribbon_noblephantasmup_01"*/, 0);
      goto LABEL_99;
    case 4:
      servantEquipIcon = this->fields.servantEquipIcon;
      if ( servantEquipIcon )
      {
        ServantFaceIconComponent__SetDispLimitCountIcon(servantEquipIcon, 0, 0);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.equipSprite;
        if ( servantEquipIcon )
        {
          servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)servantEquipIcon,
                                                             0);
          if ( servantEquipIcon )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
            servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
            if ( servantEquipIcon )
            {
              servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)servantEquipIcon,
                                                                 0);
              if ( servantEquipIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
                servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
                if ( servantEquipIcon )
                {
                  servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)servantEquipIcon,
                                                                     0);
                  if ( servantEquipIcon )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 0, 0);
                    servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.appendSkillLevelLabel;
                    if ( servantEquipIcon )
                    {
                      servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)servantEquipIcon,
                                                                         0);
                      if ( servantEquipIcon )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0);
                        servantEquipIcon = (ServantFaceIconComponent_o *)item->fields.materialUserServantEntity;
                        if ( servantEquipIcon )
                        {
                          AppendSkillInfo = UserServantEntity__getAppendSkillInfo(
                                              (UserServantEntity_o *)servantEquipIcon,
                                              0);
                          ServantCheckEquipListViewItemDraw__GetCanSkillCombineList(this, item, AppendSkillInfo, v16);
                          v17 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v17, 0);
                          if ( AppendSkillInfo )
                          {
                            svtUseSkillIdList = AppendSkillInfo->fields.svtUseSkillIdList;
                            if ( svtUseSkillIdList )
                            {
                              max_length = svtUseSkillIdList->max_length;
                              if ( (int)max_length >= 1 )
                              {
                                v21 = 0;
                                v22 = (unsigned int)(max_length - 1);
                                v23 = (unsigned int)max_length;
                                v24 = 32;
                                while ( 1 )
                                {
                                  svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
                                  if ( !svtSkillLvList )
                                    goto LABEL_105;
                                  if ( v21 >= LODWORD(svtSkillLvList->max_length) )
                                    goto LABEL_106;
                                  if ( *(int *)((char *)&svtSkillLvList->obj.klass + v24) >= 2 )
                                  {
                                    servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.warningSprite;
                                    if ( !servantEquipIcon )
                                      goto LABEL_105;
                                    servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)servantEquipIcon,
                                                                                       0);
                                    if ( !servantEquipIcon )
                                      goto LABEL_105;
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)servantEquipIcon,
                                      1,
                                      0);
                                  }
                                  v26 = AppendSkillInfo->fields.svtUseSkillIdList;
                                  if ( !v26 )
                                    goto LABEL_105;
                                  if ( v21 >= LODWORD(v26->max_length) )
                                    goto LABEL_106;
                                  v27 = AppendSkillInfo->fields.svtSkillLvList;
                                  if ( !v27 )
                                    goto LABEL_105;
                                  if ( v21 >= LODWORD(v27->max_length) )
LABEL_106:
                                    sub_2213CE4(servantEquipIcon);
                                  v28 = *(_DWORD *)((char *)&v26->obj.klass + v24);
                                  if ( *(int *)((char *)&v27->obj.klass + v24) <= 0 )
                                  {
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v18);
                                    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9673/*"NONSKILL_TXT"*/, 0);
                                  }
                                  else
                                  {
                                    v29 = System_Int32__ToString((int)v27 + (int)v24, 0);
                                  }
                                  v31 = (Il2CppObject *)v29;
                                  servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.enableSkillList;
                                  if ( v22 != v21 )
                                  {
                                    if ( !servantEquipIcon )
                                      goto LABEL_105;
                                    v36 = System_Collections_Generic_List_int___Contains(
                                            (System_Collections_Generic_List_int__o *)servantEquipIcon,
                                            v28,
                                            (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
                                    v37 = &StringLiteral_12750/*"SKILL_LVDISP_ENABLE_TXT"*/;
                                    if ( !v36 )
                                      v37 = &StringLiteral_12752/*"SKILL_LVDISP_TXT"*/;
                                    v38 = (System_String_o *)*v37;
                                    goto LABEL_59;
                                  }
                                  if ( servantEquipIcon
                                    && System_Collections_Generic_List_int___Contains(
                                         (System_Collections_Generic_List_int__o *)servantEquipIcon,
                                         v28,
                                         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
                                  {
                                    v32 = LocalizationManager_TypeInfo;
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      v33 = &StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                                      goto LABEL_57;
                                    }
                                    v33 = &StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                                  }
                                  else
                                  {
                                    v32 = LocalizationManager_TypeInfo;
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      v33 = &StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/;
LABEL_57:
                                      j_il2cpp_runtime_class_init_0(v32, item, v30);
                                      goto LABEL_58;
                                    }
                                    v33 = &StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/;
                                  }
LABEL_58:
                                  v38 = (System_String_o *)*v33;
LABEL_59:
                                  servantEquipIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get(v38, 0);
                                  if ( !v17 )
                                    goto LABEL_105;
                                  servantEquipIcon = (ServantFaceIconComponent_o *)System_Text_StringBuilder__AppendFormat(
                                                                                     v17,
                                                                                     (System_String_o *)servantEquipIcon,
                                                                                     v31,
                                                                                     0);
                                  ++v21;
                                  v24 += 4;
                                  if ( v23 == v21 )
                                    goto LABEL_103;
                                }
                              }
                              if ( v17 )
                              {
LABEL_103:
                                appendSkillLevelLabel = this->fields.appendSkillLevelLabel;
                                servantEquipIcon = (ServantFaceIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v17->klass->vtable._3_ToString.methodPtr)(
                                                                                   v17,
                                                                                   v17->klass->vtable._3_ToString.method);
                                if ( appendSkillLevelLabel )
                                {
                                  UILabel__set_text(appendSkillLevelLabel, (System_String_o *)servantEquipIcon, 0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_105:
      sub_2213CDC(servantEquipIcon, item);
  }
}