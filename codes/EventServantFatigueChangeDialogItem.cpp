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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  IconLabelInfo_o *v8; // x21
  ServantFaceIconComponent_o *LevelMax; // x0
  __int64 v10; // x1
  int32_t lv; // w22
  __int64 v12; // x1
  LimitCountIconComponent_o *limitCountIconComponent; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B111CA & 1) == 0 )
  {
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, userServantEntity, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B111CA = 1;
  }
  v8 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, userServantEntity, method, v3);
  IconLabelInfo___ctor(v8, 0LL);
  if ( !userServantEntity )
    goto LABEL_11;
  lv = userServantEntity->fields.lv;
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v8 )
    goto LABEL_11;
  IconLabelInfo__Set_38850420(v8, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL);
  LevelMax = this->fields.servantFaceIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  ServantFaceIconComponent__Set_38931252(LevelMax, userServantEntity, v8, 0LL, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)this->fields.limitCountIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)LevelMax, 0LL);
  limitCountIconComponent = this->fields.limitCountIconComponent;
  v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  if ( !limitCountIconComponent )
LABEL_11:
    sub_1BCAA3C(LevelMax, v10);
  LimitCountIconComponent__Set(limitCountIconComponent, v16, (int32_t)LevelMax, 0LL);
}