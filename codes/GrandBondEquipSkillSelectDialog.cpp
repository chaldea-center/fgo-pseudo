void __fastcall GrandBondEquipSkillSelectDialog___ctor(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1EE72 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1EE72 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall GrandBondEquipSkillSelectDialog__Init(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall GrandBondEquipSkillSelectDialog__OnClickAnotherSKillBtn(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1EE6F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B1EE6F = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v4 = Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v7);
    CommonUI__CloseGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, 1, 1, 0LL);
  }
}


void __fastcall GrandBondEquipSkillSelectDialog__OnClickCancelBtn(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1EE70 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B1EE70 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v4 = Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v7);
    CommonUI__CloseGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, 0, 0, 0LL);
  }
}


void __fastcall GrandBondEquipSkillSelectDialog__OnClickNormalSKillBtn(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1EE6E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B1EE6E = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v4 = Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v7);
    CommonUI__CloseGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, 1, 0, 0LL);
  }
}


void __fastcall GrandBondEquipSkillSelectDialog__OnEnable(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B1EE71 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15504/*"Window/Buttons/CancelButton"*/, method);
    byte_4B1EE71 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_44083552(transform, (System_String_o *)StringLiteral_15504/*"Window/Buttons/CancelButton"*/, 0LL);
}


void __fastcall GrandBondEquipSkillSelectDialog__Open(
        GrandBondEquipSkillSelectDialog_o *this,
        int64_t equipUserSvtId,
        int32_t anotherSkillId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *normalSkillHeader; // x22
  UILabel_o *anotherSkillHeader; // x22
  UILabel_o *normalSkillBtnLabel; // x22
  UILabel_o *anotherSkillBtnLabel; // x22
  UILabel_o *cancelBtnLabel; // x22
  const MethodInfo *v23; // x3

  if ( (byte_4B1EE6C & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, equipUserSvtId);
    sub_1BCAFF8(&StringLiteral_6935/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_TITLE"*/, v7);
    sub_1BCAFF8(&StringLiteral_6934/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_HEADER"*/, v8);
    sub_1BCAFF8(&StringLiteral_6932/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_MESSAGE"*/, v9);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v10);
    sub_1BCAFF8(&StringLiteral_6930/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_BUTTON"*/, v11);
    sub_1BCAFF8(&StringLiteral_6931/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_HEADER"*/, v12);
    sub_1BCAFF8(&StringLiteral_6933/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_BUTTON"*/, v13);
    byte_4B1EE6C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6935/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v15, 0LL);
  messageLabel = this->fields.messageLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6932/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, v15, 0LL);
  normalSkillHeader = this->fields.normalSkillHeader;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6934/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_HEADER"*/, 0LL);
  if ( !normalSkillHeader )
    goto LABEL_13;
  UILabel__set_text(normalSkillHeader, v15, 0LL);
  anotherSkillHeader = this->fields.anotherSkillHeader;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6931/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_HEADER"*/, 0LL);
  if ( !anotherSkillHeader )
    goto LABEL_13;
  UILabel__set_text(anotherSkillHeader, v15, 0LL);
  normalSkillBtnLabel = this->fields.normalSkillBtnLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6933/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_BUTTON"*/, 0LL);
  if ( !normalSkillBtnLabel
    || (UILabel__set_text(normalSkillBtnLabel, v15, 0LL),
        anotherSkillBtnLabel = this->fields.anotherSkillBtnLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6930/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_BUTTON"*/, 0LL),
        !anotherSkillBtnLabel)
    || (UILabel__set_text(anotherSkillBtnLabel, v15, 0LL),
        cancelBtnLabel = this->fields.cancelBtnLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelBtnLabel) )
  {
LABEL_13:
    sub_1BCB254(v15, v16);
  }
  UILabel__set_text(cancelBtnLabel, v15, 0LL);
  GrandBondEquipSkillSelectDialog__SetSkillUi(this, equipUserSvtId, anotherSkillId, v23);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall GrandBondEquipSkillSelectDialog__SetSkillUi(
        GrandBondEquipSkillSelectDialog_o *this,
        int64_t equipUserSvtId,
        int32_t anotherSkillId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x21
  void *EffectTitle; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  Il2CppObject *v19; // x22
  int32_t v20; // w23
  SkillEntity_o *v21; // x22
  UILabel_o *normalSkillName; // x23
  UILabel_o *normalSkillDetail; // x23
  UILabel_o *anotherSkillName; // x20
  UILabel_o *anotherSkillDetail; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B1EE6D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantSkillMaster___, equipUserSvtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    byte_4B1EE6D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  EffectTitle = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !EffectTitle )
    goto LABEL_24;
  EffectTitle = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)EffectTitle,
                  equipUserSvtId,
                  (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !EffectTitle )
    goto LABEL_24;
  v17 = *((_QWORD *)EffectTitle + 10);
  v18 = *((_QWORD *)EffectTitle + 11);
  v19 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  EffectTitle = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v27, 0LL);
  if ( !v19 )
    goto LABEL_24;
  EffectTitle = ServantSkillMaster__GetEntity((ServantSkillMaster_o *)v19, (int32_t)EffectTitle, 1, 1, 0LL);
  if ( !EffectTitle )
    goto LABEL_24;
  if ( !Master_object )
    goto LABEL_24;
  v20 = *((_DWORD *)EffectTitle + 7);
  EffectTitle = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  v20,
                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !this->fields.normalSkillIcon )
    goto LABEL_24;
  v21 = (SkillEntity_o *)EffectTitle;
  SkillIconComponent__Set(this->fields.normalSkillIcon, v20, 0LL);
  if ( !v21 )
    goto LABEL_24;
  normalSkillName = this->fields.normalSkillName;
  EffectTitle = SkillEntity__getEffectTitle(v21, 0, 0LL);
  if ( !normalSkillName )
    goto LABEL_24;
  UILabel__set_text(normalSkillName, (System_String_o *)EffectTitle, 0LL);
  normalSkillDetail = this->fields.normalSkillDetail;
  EffectTitle = SkillEntity__getEffectExplanation(v21, 0, 0LL);
  if ( !normalSkillDetail )
    goto LABEL_24;
  UILabel__set_text(normalSkillDetail, (System_String_o *)EffectTitle, 0LL);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          anotherSkillId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  EffectTitle = this->fields.anotherSkillIcon;
  if ( !EffectTitle )
    goto LABEL_24;
  SkillIconComponent__Set((SkillIconComponent_o *)EffectTitle, anotherSkillId, 0LL);
  EffectTitle = entity;
  if ( !entity
    || (anotherSkillName = this->fields.anotherSkillName,
        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)entity, 0, 0LL),
        !anotherSkillName)
    || (UILabel__set_text(anotherSkillName, (System_String_o *)EffectTitle, 0LL), (EffectTitle = entity) == 0LL)
    || (anotherSkillDetail = this->fields.anotherSkillDetail,
        EffectTitle = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL),
        !anotherSkillDetail) )
  {
LABEL_24:
    sub_1BCB254(EffectTitle, v16);
  }
  UILabel__set_text(anotherSkillDetail, (System_String_o *)EffectTitle, 0LL);
}