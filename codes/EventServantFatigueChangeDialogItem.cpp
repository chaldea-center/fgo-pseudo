void __fastcall EventServantFatigueChangeDialogItem___ctor(
        EventServantFatigueChangeDialogItem_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventServantFatigueChangeDialogItem__Set(
        EventServantFatigueChangeDialogItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  IconLabelInfo_o *v6; // x21
  ServantFaceIconComponent_o *LevelMax; // x0
  __int64 v8; // x1
  int32_t lv; // w22
  LimitCountIconComponent_o *limitCountIconComponent; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B61AEE & 1) == 0 )
  {
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, userServantEntity);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B61AEE = 1;
  }
  v6 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v6, 0LL);
  if ( !userServantEntity )
    goto LABEL_11;
  lv = userServantEntity->fields.lv;
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v6 )
    goto LABEL_11;
  IconLabelInfo__Set_39043324(v6, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL);
  LevelMax = this->fields.servantFaceIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  ServantFaceIconComponent__Set_39125412(LevelMax, userServantEntity, v6, 0LL, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)this->fields.limitCountIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)LevelMax, 0LL);
  limitCountIconComponent = this->fields.limitCountIconComponent;
  v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v14, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  if ( !limitCountIconComponent )
LABEL_11:
    sub_1BE4D28(LevelMax, v8);
  LimitCountIconComponent__Set(limitCountIconComponent, v13, (int32_t)LevelMax, 0LL);
}