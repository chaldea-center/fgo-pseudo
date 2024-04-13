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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
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
  int32_t v39; // w22
  ServantStatusLimitCountGauge_o *genderTypeImageExplanationLabel; // x21
  struct ServantEntity_o *svtEntity; // x8
  UnityEngine_Object_o *servantFacceIcon; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  ServantStatusListViewItemDrawEquipMain_c *klass; // x19
  float barExp[2]; // [xsp+18h] [xbp-38h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42ECB55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, (_DWORD)item, mode, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_20624/*"maleImageId"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_6934/*"GENDER_TYPE_IMAGE_EXPLANATION"*/, v25, v26, v27);
    byte_42ECB55 = 1;
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
      ServantFaceIconComponent__Set_30775392(levelLabel, userSvtEntity, 0LL, 0LL, 0LL);
    }
    else
    {
      userSvtEntity = (UserServantEntity_o *)item->fields.userSvtCollectionEntity;
      if ( userSvtEntity )
      {
        levelLabel = (ServantFaceIconComponent_o *)this->fields.levelLabel;
        if ( !levelLabel )
          goto LABEL_53;
        ServantFaceIconComponent__Set_30851756(
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
          ServantFaceIconComponent__Set_30776084(levelLabel, (ServantLeaderInfo_o *)userSvtEntity, 0LL, 0LL, 0, 0, 0LL);
        }
        else
        {
          userSvtEntity = (UserServantEntity_o *)item->fields.equipTargetInfo;
          levelLabel = (ServantFaceIconComponent_o *)this->fields.levelLabel;
          if ( userSvtEntity )
          {
            if ( !levelLabel )
              goto LABEL_53;
            ServantFaceIconComponent__Set_30854332(levelLabel, (EquipTargetInfo_o *)userSvtEntity, 0LL, 0LL, 0LL);
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
            UIIconLabel__Set_41886452(hpIconLabel, 5, Atk, (int32_t)levelLabel, 0, 0LL, 0, 0, 0, 0LL);
            costLabel = (UIIconLabel_o *)this->fields.costLabel;
            Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
            levelLabel = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
            if ( costLabel )
            {
              UIIconLabel__Set_41886452(costLabel, 3, Hp, (int32_t)levelLabel, 0, 0LL, 0, 0, 0, 0LL);
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
                  v39 = LODWORD(barExp[1]);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  levelLabel = (ServantFaceIconComponent_o *)LocalizationManager__GetNumberFormat(v39, 0LL);
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
                    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
                    levelLabel = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
                    if ( Master_WarQuestSelectionMaster )
                    {
                      levelLabel = (ServantFaceIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                   Master_WarQuestSelectionMaster,
                                                                   &entity,
                                                                   (int32_t)levelLabel,
                                                                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                      if ( ((unsigned __int8)levelLabel & 1) == 0 )
                        return;
                      if ( entity )
                      {
                        if ( !EntityScriptUtil__ScriptHasKey(
                                *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                                (System_String_o *)StringLiteral_20624/*"maleImageId"*/,
                                0LL) )
                          return;
                        klass = this[1].klass;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        levelLabel = (ServantFaceIconComponent_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_6934/*"GENDER_TYPE_IMAGE_EXPLANATION"*/,
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
    sub_B5D69C(levelLabel, userSvtEntity);
  }
}