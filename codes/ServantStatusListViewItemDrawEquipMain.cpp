void __fastcall ServantStatusListViewItemDrawEquipMain___ctor(
        ServantStatusListViewItemDrawEquipMain_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawEquipMain__GetKind(
        ServantStatusListViewItemDrawEquipMain_o *this,
        const MethodInfo *method)
{
  return 2;
}


void __fastcall ServantStatusListViewItemDrawEquipMain__SetItem(
        ServantStatusListViewItemDrawEquipMain_o *this,
        ServantStatusListViewItem_o *item,
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
  UserServantEntity_o *userSvtEntity; // x1
  ServantFaceIconComponent_o *levelLabel; // x0
  struct UILabel_o *maxLevelLabel; // x21
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  int32_t Cost; // w22
  UIIconLabel_o *hpIconLabel; // x21
  int32_t Atk; // w22
  UIIconLabel_o *costLabel; // x21
  int32_t Hp; // w22
  UILabel_o *expBar; // x21
  int32_t v25; // w22
  ServantStatusLimitCountGauge_o *genderTypeImageExplanationLabel; // x21
  struct ServantEntity_o *svtEntity; // x8
  UnityEngine_Object_o *servantFacceIcon; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  ServantStatusListViewItemDrawEquipMain_c *klass; // x19
  float barExp[2]; // [xsp+18h] [xbp-38h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_418A7C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, item);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_20365/*"maleImageId"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    sub_B2C35C(&StringLiteral_6851/*"GENDER_TYPE_IMAGE_EXPLANATION"*/, v13);
    byte_418A7C1 = 1;
  }
  *(_QWORD *)exp = 0LL;
  entity = 0LL;
  *(_QWORD *)barExp = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      levelLabel = (ServantFaceIconComponent_o *)this->fields.levelLabel;
      if ( !levelLabel )
        goto LABEL_53;
      ServantFaceIconComponent__Set_30719352(levelLabel, userSvtEntity, 0LL, 0LL, 0LL);
    }
    else
    {
      userSvtEntity = (UserServantEntity_o *)item->fields.userSvtCollectionEntity;
      if ( userSvtEntity )
      {
        levelLabel = (ServantFaceIconComponent_o *)this->fields.levelLabel;
        if ( !levelLabel )
          goto LABEL_53;
        ServantFaceIconComponent__Set_30795548(
          levelLabel,
          (UserServantCollectionEntity_o *)userSvtEntity,
          0LL,
          0LL,
          0,
          0LL);
      }
      else
      {
        userSvtEntity = (UserServantEntity_o *)item->fields.servantLeaderInfo;
        if ( userSvtEntity )
        {
          levelLabel = (ServantFaceIconComponent_o *)this->fields.levelLabel;
          if ( !levelLabel )
            goto LABEL_53;
          ServantFaceIconComponent__Set_30720044(levelLabel, (ServantLeaderInfo_o *)userSvtEntity, 0LL, 0LL, 0, 0, 0LL);
        }
        else
        {
          userSvtEntity = (UserServantEntity_o *)item->fields.equipTargetInfo;
          levelLabel = (ServantFaceIconComponent_o *)this->fields.levelLabel;
          if ( userSvtEntity )
          {
            if ( !levelLabel )
              goto LABEL_53;
            ServantFaceIconComponent__Set_30798084(levelLabel, (EquipTargetInfo_o *)userSvtEntity, 0LL, 0LL, 0LL);
          }
          else
          {
            if ( !levelLabel )
              goto LABEL_53;
            ServantFaceIconComponent__NoMount(levelLabel, 0LL);
          }
        }
      }
    }
    maxLevelLabel = this->fields.maxLevelLabel;
    exp[1] = ServantStatusListViewItem__get_Level(item, 0LL);
    levelLabel = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( maxLevelLabel )
    {
      UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, (System_String_o *)levelLabel, 0LL);
      attackIconLabel = this->fields.attackIconLabel;
      exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
      levelLabel = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
      if ( attackIconLabel )
      {
        UILabel__set_text((UILabel_o *)attackIconLabel, (System_String_o *)levelLabel, 0LL);
        expBase = this->fields.expBase;
        Cost = ServantStatusListViewItem__get_Cost(item, 0LL);
        exp[1] = ServantStatusListViewItem__get_EquipCost(item, 0LL) + Cost;
        levelLabel = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
        if ( expBase )
        {
          UILabel__set_text((UILabel_o *)expBase, (System_String_o *)levelLabel, 0LL);
          hpIconLabel = this->fields.hpIconLabel;
          Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
          levelLabel = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
          if ( hpIconLabel )
          {
            UIIconLabel__Set_41609428(hpIconLabel, 5, Atk, (int32_t)levelLabel, 0, 0LL, 0, 0, 0, 0LL);
            costLabel = (UIIconLabel_o *)this->fields.costLabel;
            Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
            levelLabel = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
            if ( costLabel )
            {
              UIIconLabel__Set_41609428(costLabel, 3, Hp, (int32_t)levelLabel, 0, 0LL, 0, 0, 0, 0LL);
              levelLabel = (ServantFaceIconComponent_o *)ServantStatusListViewItem__GetExpInfo(
                                                           item,
                                                           exp,
                                                           (int32_t *)&barExp[1],
                                                           barExp,
                                                           0LL);
              if ( this->fields.lateExpBase )
              {
                if ( ((unsigned __int8)levelLabel & 1) != 0 )
                {
                  UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
                  levelLabel = (ServantFaceIconComponent_o *)this->fields.lateExpLabel;
                  if ( !levelLabel )
                    goto LABEL_53;
                  UnityEngine_GameObject__SetActive(
                    (UnityEngine_GameObject_o *)levelLabel,
                    SLODWORD(barExp[1]) > 0,
                    0LL);
                  expBar = (UILabel_o *)this->fields.expBar;
                  v25 = LODWORD(barExp[1]);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  levelLabel = (ServantFaceIconComponent_o *)LocalizationManager__GetNumberFormat(v25, 0LL);
                  if ( !expBar )
                    goto LABEL_53;
                  UILabel__set_text(expBar, (System_String_o *)levelLabel, 0LL);
                  levelLabel = (ServantFaceIconComponent_o *)this->fields.limitCountGauge;
                  if ( !levelLabel )
                    goto LABEL_53;
                  UIProgressBar__set_value((UIProgressBar_o *)levelLabel, barExp[0], 0LL);
                }
                else
                {
                  UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
                }
                genderTypeImageExplanationLabel = (ServantStatusLimitCountGauge_o *)this->fields.genderTypeImageExplanationLabel;
                levelLabel = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
                svtEntity = item->fields.svtEntity;
                if ( svtEntity && genderTypeImageExplanationLabel )
                {
                  ServantStatusLimitCountGauge__Set(
                    genderTypeImageExplanationLabel,
                    (int32_t)levelLabel,
                    svtEntity->fields.limitMax,
                    0LL);
                  servantFacceIcon = (UnityEngine_Object_o *)this->fields.servantFacceIcon;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  UnityEngine_Object__op_Inequality(servantFacceIcon, 0LL, 0LL);
                  levelLabel = (ServantFaceIconComponent_o *)this[1].klass;
                  if ( levelLabel )
                  {
                    UILabel__set_text((UILabel_o *)levelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
                    levelLabel = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
                    if ( Master_WarQuestSelectionMaster )
                    {
                      levelLabel = (ServantFaceIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                   Master_WarQuestSelectionMaster,
                                                                   &entity,
                                                                   (int32_t)levelLabel,
                                                                   (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                      if ( ((unsigned __int8)levelLabel & 1) == 0 )
                        return;
                      if ( entity )
                      {
                        if ( !EntityScriptUtil__ScriptHasKey(
                                *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                                (System_String_o *)StringLiteral_20365/*"maleImageId"*/,
                                0LL) )
                          return;
                        klass = this[1].klass;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        levelLabel = (ServantFaceIconComponent_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_6851/*"GENDER_TYPE_IMAGE_EXPLANATION"*/,
                                                                     0LL);
                        if ( klass )
                        {
                          UILabel__set_text((UILabel_o *)klass, (System_String_o *)levelLabel, 0LL);
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
LABEL_53:
    sub_B2C434(levelLabel, userSvtEntity);
  }
}