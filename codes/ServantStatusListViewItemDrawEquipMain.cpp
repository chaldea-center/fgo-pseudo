void __fastcall ServantStatusListViewItemDrawEquipMain___ctor(
        ServantStatusListViewItemDrawEquipMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x1
  ServantFaceIconComponent_o *v17; // x0
  ServantLeaderInfo_o *servantLeaderInfo; // x1
  ServantFaceIconComponent_o *v19; // x0
  EquipTargetInfo_o *equipTargetInfo; // x1
  ServantFaceIconComponent_o *v21; // x0
  struct UILabel_o *maxLevelLabel; // x21
  System_String_o *v23; // x0
  struct UIIconLabel_o *attackIconLabel; // x21
  System_String_o *v25; // x0
  struct UnityEngine_GameObject_o *expBase; // x21
  int32_t Cost; // w22
  System_String_o *v28; // x0
  UIIconLabel_o *hpIconLabel; // x21
  int32_t Atk; // w22
  int32_t AdjustAtk; // w0
  UIIconLabel_o *costLabel; // x21
  int32_t Hp; // w22
  int32_t AdjustHp; // w0
  bool ExpInfo; // w0
  UnityEngine_GameObject_o *lateExpLabel; // x0
  UILabel_o *expBar; // x21
  int32_t v38; // w22
  System_String_o *NumberFormat; // x0
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x0
  ServantStatusLimitCountGauge_o *genderTypeImageExplanationLabel; // x21
  int32_t LimitCount; // w0
  struct ServantEntity_o *svtEntity; // x8
  UnityEngine_Object_o *servantFacceIcon; // x21
  ServantStatusListViewItemDrawEquipMain_c *klass; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  int32_t SvtId; // w0
  ServantStatusListViewItemDrawEquipMain_c *v48; // x19
  System_String_o *v49; // x0
  float barExp[2]; // [xsp+18h] [xbp-38h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40FDE99 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, item);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_20282, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    sub_B16FFC(&StringLiteral_6823, v13);
    byte_40FDE99 = 1;
  }
  *(_QWORD *)exp = 0LL;
  entity = 0LL;
  *(_QWORD *)barExp = 0LL;
  LODWORD(this->fields.baseButton) = mode;
  if ( item && mode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      levelLabel = (ServantFaceIconComponent_o *)this->fields.levelLabel;
      if ( !levelLabel )
        goto LABEL_53;
      ServantFaceIconComponent__Set_30631556(levelLabel, userSvtEntity, 0LL, 0LL, 0LL);
    }
    else
    {
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( userSvtCollectionEntity )
      {
        v17 = (ServantFaceIconComponent_o *)this->fields.levelLabel;
        if ( !v17 )
          goto LABEL_53;
        ServantFaceIconComponent__Set_30707876(v17, userSvtCollectionEntity, 0LL, 0LL, 0, 0LL);
      }
      else
      {
        servantLeaderInfo = item->fields.servantLeaderInfo;
        if ( servantLeaderInfo )
        {
          v19 = (ServantFaceIconComponent_o *)this->fields.levelLabel;
          if ( !v19 )
            goto LABEL_53;
          ServantFaceIconComponent__Set_30632248(v19, servantLeaderInfo, 0LL, 0LL, 0, 0, 0LL);
        }
        else
        {
          equipTargetInfo = item->fields.equipTargetInfo;
          v21 = (ServantFaceIconComponent_o *)this->fields.levelLabel;
          if ( equipTargetInfo )
          {
            if ( !v21 )
              goto LABEL_53;
            ServantFaceIconComponent__Set_30710412(v21, equipTargetInfo, 0LL, 0LL, 0LL);
          }
          else
          {
            if ( !v21 )
              goto LABEL_53;
            ServantFaceIconComponent__NoMount(v21, 0LL);
          }
        }
      }
    }
    maxLevelLabel = this->fields.maxLevelLabel;
    exp[1] = ServantStatusListViewItem__get_Level(item, 0LL);
    v23 = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( maxLevelLabel )
    {
      UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, v23, 0LL);
      attackIconLabel = this->fields.attackIconLabel;
      exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
      v25 = System_Int32__ToString((int32_t)&exp[1], 0LL);
      if ( attackIconLabel )
      {
        UILabel__set_text((UILabel_o *)attackIconLabel, v25, 0LL);
        expBase = this->fields.expBase;
        Cost = ServantStatusListViewItem__get_Cost(item, 0LL);
        exp[1] = ServantStatusListViewItem__get_EquipCost(item, 0LL) + Cost;
        v28 = System_Int32__ToString((int32_t)&exp[1], 0LL);
        if ( expBase )
        {
          UILabel__set_text((UILabel_o *)expBase, v28, 0LL);
          hpIconLabel = this->fields.hpIconLabel;
          Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
          AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
          if ( hpIconLabel )
          {
            UIIconLabel__Set_40377052(hpIconLabel, 5, Atk, AdjustAtk, 0, 0LL, 0, 0, 0, 0LL);
            costLabel = (UIIconLabel_o *)this->fields.costLabel;
            Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
            AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
            if ( costLabel )
            {
              UIIconLabel__Set_40377052(costLabel, 3, Hp, AdjustHp, 0, 0LL, 0, 0, 0, 0LL);
              ExpInfo = ServantStatusListViewItem__GetExpInfo(item, exp, (int32_t *)&barExp[1], barExp, 0LL);
              if ( this->fields.lateExpBase )
              {
                if ( ExpInfo )
                {
                  UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
                  lateExpLabel = (UnityEngine_GameObject_o *)this->fields.lateExpLabel;
                  if ( !lateExpLabel )
                    goto LABEL_53;
                  UnityEngine_GameObject__SetActive(lateExpLabel, SLODWORD(barExp[1]) > 0, 0LL);
                  expBar = (UILabel_o *)this->fields.expBar;
                  v38 = LODWORD(barExp[1]);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  NumberFormat = LocalizationManager__GetNumberFormat(v38, 0LL);
                  if ( !expBar )
                    goto LABEL_53;
                  UILabel__set_text(expBar, NumberFormat, 0LL);
                  limitCountGauge = this->fields.limitCountGauge;
                  if ( !limitCountGauge )
                    goto LABEL_53;
                  UIProgressBar__set_value((UIProgressBar_o *)limitCountGauge, barExp[0], 0LL);
                }
                else
                {
                  UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
                }
                genderTypeImageExplanationLabel = (ServantStatusLimitCountGauge_o *)this->fields.genderTypeImageExplanationLabel;
                LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
                svtEntity = item->fields.svtEntity;
                if ( svtEntity && genderTypeImageExplanationLabel )
                {
                  ServantStatusLimitCountGauge__Set(
                    genderTypeImageExplanationLabel,
                    LimitCount,
                    svtEntity->fields.limitMax,
                    0LL);
                  servantFacceIcon = (UnityEngine_Object_o *)this->fields.servantFacceIcon;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  UnityEngine_Object__op_Inequality(servantFacceIcon, 0LL, 0LL);
                  klass = this[1].klass;
                  if ( klass )
                  {
                    UILabel__set_text((UILabel_o *)klass, (System_String_o *)StringLiteral_1, 0LL);
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
                    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
                    if ( Master_WarQuestSelectionMaster )
                    {
                      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                              Master_WarQuestSelectionMaster,
                              &entity,
                              SvtId,
                              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                        return;
                      if ( entity )
                      {
                        if ( !EntityScriptUtil__ScriptHasKey(
                                *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                                (System_String_o *)StringLiteral_20282,
                                0LL) )
                          return;
                        v48 = this[1].klass;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_6823, 0LL);
                        if ( v48 )
                        {
                          UILabel__set_text((UILabel_o *)v48, v49, 0LL);
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
    sub_B170D4();
  }
}