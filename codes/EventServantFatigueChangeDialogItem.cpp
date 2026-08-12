void EventServantFatigueChangeDialogItem___ctor(EventServantFatigueChangeDialogItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EventServantFatigueChangeDialogItem__Set(
        EventServantFatigueChangeDialogItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  IconLabelInfo_o *v5; // x21
  ServantFaceIconComponent_o *LevelMax; // x0
  __int64 v7; // x1
  int32_t lv; // w22
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x21
  __int64 v12; // x22
  LimitCountIconComponent_o *limitCountIconComponent; // x20
  int32_t v14; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_596AC70 & 1) == 0 )
  {
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AC70 = 1;
  }
  v5 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v5, 0);
  if ( !userServantEntity )
    goto LABEL_11;
  lv = userServantEntity->fields.lv;
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v5 )
    goto LABEL_11;
  IconLabelInfo__Set_47880948(v5, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0);
  LevelMax = this->fields.servantFaceIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  ServantFaceIconComponent__Set_48049524(LevelMax, userServantEntity, v5, 0, 1, 0);
  LevelMax = (ServantFaceIconComponent_o *)this->fields.limitCountIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)LevelMax, 0);
  v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  limitCountIconComponent = this->fields.limitCountIconComponent;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLimitCntMax(userServantEntity, 0);
  if ( !limitCountIconComponent )
LABEL_11:
    sub_2213CDC(LevelMax, v7);
  LimitCountIconComponent__Set(limitCountIconComponent, v14, (int32_t)LevelMax, 0);
}