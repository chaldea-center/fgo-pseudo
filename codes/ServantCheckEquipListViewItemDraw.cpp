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
  void *SelfUserGame; // x0
  __int64 v16; // x1
  struct System_Int32_array *svtUseSkillIdList; // x8
  int32_t v18; // w22
  __int64 v19; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x21
  struct System_Int32_array *svtSkillLvList; // x8
  struct UserServantEntity_o *materialUserServantEntity; // x8
  CombineAppendPassiveSkillMaster_o *v24; // x23
  __int64 v25; // x24
  __int64 v26; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v28; // x9
  struct System_Int32_array *v29; // x8
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  struct System_Collections_Generic_List_int__o **p_enableSkillList; // [xsp+0h] [xbp-70h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A4A56E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, item);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4A4A56E = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillList = v12;
  p_enableSkillList = &this->fields.enableSkillList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.enableSkillList, (int32_t)v12, v13, v14);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !skillInfo || (svtUseSkillIdList = skillInfo->fields.svtUseSkillIdList) == 0LL )
LABEL_35:
    sub_1B86614(SelfUserGame, v16);
  v18 = *((_DWORD *)SelfUserGame + 24);
  v19 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v21 = v19 - 8;
    if ( v19 - 8 >= (int)max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_37;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v19) >= 1 )
    {
      svtSkillLvList = skillInfo->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_35;
      if ( v21 >= svtSkillLvList->max_length )
        goto LABEL_37;
      if ( *((int *)&svtSkillLvList->obj.klass + v19) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        if ( !item )
          goto LABEL_35;
        materialUserServantEntity = item->fields.materialUserServantEntity;
        if ( !materialUserServantEntity )
          goto LABEL_35;
        v24 = (CombineAppendPassiveSkillMaster_o *)SelfUserGame;
        v26 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&materialUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v26;
        *(_QWORD *)&v35.fields.fakeValue = v25;
        SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v35, 0LL);
        svtSkillNumsList = skillInfo->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_35;
        if ( v21 >= svtSkillNumsList->max_length )
          goto LABEL_37;
        v28 = skillInfo->fields.svtSkillLvList;
        if ( !v28 )
          goto LABEL_35;
        if ( v21 >= v28->max_length )
          goto LABEL_37;
        if ( !v24 )
          goto LABEL_35;
        SelfUserGame = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                 v24,
                                 &entity,
                                 (int32_t)SelfUserGame,
                                 *((_DWORD *)&svtSkillNumsList->obj.klass + v19),
                                 *((_DWORD *)&v28->obj.klass + v19),
                                 0LL);
        if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_35;
          SelfUserGame = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                   item->fields.materialUserServantEntity,
                                   entity->fields.itemIds,
                                   entity->fields.itemNums,
                                   v18,
                                   entity->fields.qp,
                                   0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
          {
            v29 = skillInfo->fields.svtUseSkillIdList;
            if ( !v29 )
              goto LABEL_35;
            if ( v21 >= v29->max_length )
LABEL_37:
              sub_1B8661C(SelfUserGame, v16);
            SelfUserGame = *p_enableSkillList;
            if ( !*p_enableSkillList )
              goto LABEL_35;
            v16 = *((unsigned int *)&v29->obj.klass + v19);
            v30 = *((_QWORD *)SelfUserGame + 2);
            v31 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)SelfUserGame + 7);
            if ( !v30 )
              goto LABEL_35;
            v32 = *((int *)SelfUserGame + 6);
            if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v16,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              *((_DWORD *)SelfUserGame + 6) = v32 + 1;
              *(_DWORD *)(v30 + 4 * v32 + 32) = v16;
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

  if ( (byte_4A4A56D & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B863B8(&LocalizationManager_TypeInfo, v8);
    sub_1B863B8(&Rarity_TypeInfo, v9);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_12024/*"SKILL_LVDISP_TXT"*/, v11);
    sub_1B863B8(&StringLiteral_12022/*"SKILL_LVDISP_ENABLE_TXT"*/, v12);
    sub_1B863B8(&StringLiteral_22784/*"ribbon_noblephantasmup_01"*/, v13);
    sub_1B863B8(&StringLiteral_19956/*"icon_reinforced"*/, v14);
    sub_1B863B8(&StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v15);
    sub_1B863B8(&StringLiteral_19945/*"icon_noblephantasmup"*/, v16);
    sub_1B863B8(&StringLiteral_19955/*"icon_rarity5"*/, v17);
    sub_1B863B8(&StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/, v18);
    sub_1B863B8(&StringLiteral_9140/*"NONSKILL_TXT"*/, v19);
    byte_4A4A56D = 1;
  }
  if ( item && mode )
  {
    servantEquipIcon = this->fields.servantEquipIcon;
    if ( !servantEquipIcon )
      goto LABEL_96;
    ServantFaceIconComponent__Set_39177000(
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
        v27 = &StringLiteral_19956/*"icon_reinforced"*/;
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
        v27 = &StringLiteral_19955/*"icon_rarity5"*/;
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
        AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_19945/*"icon_noblephantasmup"*/, 0LL);
        servantEquipIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
        if ( !servantEquipIcon )
          goto LABEL_96;
        servantEquipIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantEquipIcon,
                                                           0LL);
        if ( !servantEquipIcon )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipIcon, 1, 0LL);
        AtlasManager__SetEventSprite(this->fields.materialTdSprite, (System_String_o *)StringLiteral_22784/*"ribbon_noblephantasmup_01"*/, 0LL);
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
        v32 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
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
              sub_1B8661C(servantEquipIcon, item);
            v42 = *(_DWORD *)((char *)&v40->obj.klass + v38);
            if ( *(int *)((char *)&v41->obj.klass + v38) <= 0 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9140/*"NONSKILL_TXT"*/, 0LL);
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
                     (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                v45 = &StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v45 = &StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
                }
              }
              else
              {
                v45 = &StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v45 = &StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/;
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
                      (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v45 = &StringLiteral_12022/*"SKILL_LVDISP_ENABLE_TXT"*/;
              if ( !v46 )
                v45 = &StringLiteral_12024/*"SKILL_LVDISP_TXT"*/;
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
          sub_1B86614(servantEquipIcon, item);
        UILabel__set_text(appendSkillLevelLabel, (System_String_o *)servantEquipIcon, 0LL);
        break;
      default:
        return;
    }
  }
}