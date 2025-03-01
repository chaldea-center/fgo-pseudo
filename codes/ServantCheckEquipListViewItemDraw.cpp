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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  void *SelfUserGame; // x0
  __int64 v20; // x1
  struct System_Int32_array *svtUseSkillIdList; // x8
  int32_t v22; // w22
  __int64 v23; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 v25; // x21
  struct System_Int32_array *svtSkillLvList; // x8
  struct UserServantEntity_o *materialUserServantEntity; // x8
  CombineAppendPassiveSkillMaster_o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v32; // x9
  struct System_Int32_array *v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  struct System_Collections_Generic_List_int__o **p_enableSkillList; // [xsp+0h] [xbp-70h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4BF9946 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, item);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BF9946 = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillList = v12;
  p_enableSkillList = &this->fields.enableSkillList;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.enableSkillList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !skillInfo || (svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList) == 0LL )
LABEL_35:
    sub_1C2E388(SelfUserGame, v20);
  v22 = *((_DWORD *)SelfUserGame + 24);
  v23 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v25 = v23 - 8;
    if ( v23 - 8 >= (int)max_length )
      break;
    if ( v25 >= max_length )
      goto LABEL_37;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v23) >= 1 )
    {
      svtSkillLvList = skillInfo->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_35;
      if ( v25 >= svtSkillLvList->max_length )
        goto LABEL_37;
      if ( *((int *)&svtSkillLvList->obj.klass + v23) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        if ( !item )
          goto LABEL_35;
        materialUserServantEntity = item->fields.materialUserServantEntity;
        if ( !materialUserServantEntity )
          goto LABEL_35;
        v28 = (CombineAppendPassiveSkillMaster_o *)SelfUserGame;
        v30 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v29 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = v30;
        *(_QWORD *)&v39.fields.fakeValue = v29;
        SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v39, 0LL);
        svtSkillNumsList = skillInfo->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_35;
        if ( v25 >= svtSkillNumsList->max_length )
          goto LABEL_37;
        v32 = skillInfo->fields.svtSkillLvList;
        if ( !v32 )
          goto LABEL_35;
        if ( v25 >= v32->max_length )
          goto LABEL_37;
        if ( !v28 )
          goto LABEL_35;
        SelfUserGame = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                 v28,
                                 &entity,
                                 (int32_t)SelfUserGame,
                                 *((_DWORD *)&svtSkillNumsList->obj.klass + v23),
                                 *((_DWORD *)&v32->obj.klass + v23),
                                 0LL);
        if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_35;
          SelfUserGame = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                   item->fields.materialUserServantEntity,
                                   entity->fields.itemIds,
                                   entity->fields.itemNums,
                                   v22,
                                   entity->fields.qp,
                                   0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
          {
            v33 = skillInfo->fields.svtUseSkillIdList;
            if ( !v33 )
              goto LABEL_35;
            if ( v25 >= v33->max_length )
LABEL_37:
              sub_1C2E390(SelfUserGame, v20);
            SelfUserGame = *p_enableSkillList;
            if ( !*p_enableSkillList )
              goto LABEL_35;
            v20 = *((unsigned int *)&v33->obj.klass + v23);
            v34 = *((_QWORD *)SelfUserGame + 2);
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)SelfUserGame + 7);
            if ( !v34 )
              goto LABEL_35;
            v36 = *((int *)SelfUserGame + 6);
            if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v20,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              *((_DWORD *)SelfUserGame + 6) = v36 + 1;
              *(_DWORD *)(v34 + 4 * v36 + 32) = v20;
            }
          }
        }
      }
    }
    svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList;
    ++v23;
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
  int32_t rarity; // w23
  int32_t exceedCount; // w20
  int32_t lv; // w22
  UISprite_o *warningSprite; // x20
  __int64 *v27; // x8
  UISprite_o *v28; // x20
  UISprite_o *v29; // x20
  SvtUseSkillData_o *AppendSkillInfo; // x20
  const MethodInfo *v31; // x3
  System_Text_StringBuilder_o *v32; // x21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v34; // x8
  unsigned __int64 v35; // x24
  __int64 v36; // x25
  __int64 v37; // x26
  __int64 v38; // x27
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x9
  int32_t v42; // w23
  System_String_o *v43; // x0
  Il2CppObject *v44; // x22
  __int64 *v45; // x8
  bool v46; // w23
  UILabel_o *appendSkillLevelLabel; // x19

  if ( (byte_4BF9945 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v8);
    sub_1C2E12C(&Rarity_TypeInfo, v9);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_12400/*"SKILL_LVDISP_TXT"*/, v11);
    sub_1C2E12C(&StringLiteral_12398/*"SKILL_LVDISP_ENABLE_TXT"*/, v12);
    sub_1C2E12C(&StringLiteral_23375/*"ribbon_noblephantasmup_01"*/, v13);
    sub_1C2E12C(&StringLiteral_20534/*"icon_reinforced"*/, v14);
    sub_1C2E12C(&StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v15);
    sub_1C2E12C(&StringLiteral_20523/*"icon_noblephantasmup"*/, v16);
    sub_1C2E12C(&StringLiteral_20533/*"icon_rarity5"*/, v17);
    sub_1C2E12C(&StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/, v18);
    sub_1C2E12C(&StringLiteral_9450/*"NONSKILL_TXT"*/, v19);
    byte_4BF9945 = 1;
  }
  if ( item && mode )
  {
    servantEquipIcon = this->fields.servantEquipIcon;
    if ( !servantEquipIcon )
      goto LABEL_96;
    ServantFaceIconComponent__Set_39534600(
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
    Rarity__setRarityIcon(subInfo, rarity, exceedCount, lv, 0LL);
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
        v27 = &StringLiteral_20534/*"icon_reinforced"*/;
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
        v27 = &StringLiteral_20533/*"icon_rarity5"*/;
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
        AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_20523/*"icon_noblephantasmup"*/, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        AtlasManager__SetEventSprite(this->fields.materialTdSprite, (System_String_o *)StringLiteral_23375/*"ribbon_noblephantasmup_01"*/, 0LL);
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
        v32 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v32, 0LL);
        if ( !AppendSkillInfo )
          goto LABEL_96;
        svtUseSkillIdList = AppendSkillInfo->fields.svtUseSkillIdList;
        if ( !svtUseSkillIdList )
          goto LABEL_96;
        v34 = *(_QWORD *)&svtUseSkillIdList->max_length;
        if ( (int)v34 >= 1 )
        {
          v35 = 0LL;
          v36 = (unsigned int)(v34 - 1);
          v37 = (unsigned int)v34;
          v38 = 32LL;
          while ( 1 )
          {
            svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
            if ( !svtSkillLvList )
              goto LABEL_96;
            if ( v35 >= svtSkillLvList->max_length )
              goto LABEL_97;
            if ( *(int *)((char *)&svtSkillLvList->obj.klass + v38) >= 2 )
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
            v40 = AppendSkillInfo->fields.svtUseSkillIdList;
            if ( !v40 )
              goto LABEL_96;
            if ( v35 >= v40->max_length )
              goto LABEL_97;
            v41 = AppendSkillInfo->fields.svtSkillLvList;
            if ( !v41 )
              goto LABEL_96;
            if ( v35 >= v41->max_length )
LABEL_97:
              sub_1C2E390(servantEquipIcon, item);
            v42 = *(_DWORD *)((char *)&v40->obj.klass + v38);
            if ( *(int *)((char *)&v41->obj.klass + v38) <= 0 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSKILL_TXT"*/, 0LL);
            }
            else
            {
              v43 = System_Int32__ToString((int)v41 + (int)v38, 0LL);
            }
            v44 = (Il2CppObject *)v43;
            servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.enableSkillList;
            if ( v36 == v35 )
            {
              if ( servantEquipIcon
                && System_Collections_Generic_List_int___Contains(
                     (System_Collections_Generic_List_int__o *)servantEquipIcon,
                     v42,
                     (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                v45 = &StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v45 = &StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                }
              }
              else
              {
                v45 = &StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v45 = &StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/;
                }
              }
            }
            else
            {
              if ( !servantEquipIcon )
                goto LABEL_96;
              v46 = System_Collections_Generic_List_int___Contains(
                      (System_Collections_Generic_List_int__o *)servantEquipIcon,
                      v42,
                      (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v45 = &StringLiteral_12398/*"SKILL_LVDISP_ENABLE_TXT"*/;
              if ( !v46 )
                v45 = &StringLiteral_12400/*"SKILL_LVDISP_TXT"*/;
            }
            servantEquipIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v45, 0LL);
            if ( !v32 )
              goto LABEL_96;
            servantEquipIcon = (ServantFaceIconComponent_o *)System_Text_StringBuilder__AppendFormat(
                                                               v32,
                                                               (System_String_o *)servantEquipIcon,
                                                               v44,
                                                               0LL);
            ++v35;
            v38 += 4LL;
            if ( v37 == v35 )
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
          sub_1C2E388(servantEquipIcon, item);
        UILabel__set_text(appendSkillLevelLabel, (System_String_o *)servantEquipIcon, 0LL);
        break;
      default:
        return;
    }
  }
}