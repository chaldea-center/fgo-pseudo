void GrandBondEquipSkillSelectDialog___ctor(GrandBondEquipSkillSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A303 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3A303 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void GrandBondEquipSkillSelectDialog__Init(GrandBondEquipSkillSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void GrandBondEquipSkillSelectDialog__OnClickAnotherSKillBtn(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C3A300 & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3A300 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    CommonUI__CloseGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, 1, 1, 0);
  }
}


void GrandBondEquipSkillSelectDialog__OnClickCancelBtn(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C3A301 & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3A301 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    CommonUI__CloseGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, 0, 0, 0);
  }
}


void GrandBondEquipSkillSelectDialog__OnClickNormalSKillBtn(
        GrandBondEquipSkillSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C3A2FF & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3A2FF = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    CommonUI__CloseGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, 1, 0, 0);
  }
}


void GrandBondEquipSkillSelectDialog__OnEnable(GrandBondEquipSkillSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3A302 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15636/*"Window/Buttons/CancelButton"*/);
    byte_4C3A302 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_15636/*"Window/Buttons/CancelButton"*/, 0);
}


void GrandBondEquipSkillSelectDialog__Open(
        GrandBondEquipSkillSelectDialog_o *this,
        int64_t equipUserSvtId,
        int32_t anotherSkillId,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *v8; // x0
  UILabel_o *messageLabel; // x22
  UILabel_o *normalSkillHeader; // x22
  UILabel_o *anotherSkillHeader; // x22
  UILabel_o *normalSkillBtnLabel; // x22
  UILabel_o *anotherSkillBtnLabel; // x22
  UILabel_o *cancelBtnLabel; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4C3A2FD & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6987/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_6986/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_HEADER"*/);
    sub_1C32C20(&StringLiteral_6984/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_6982/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_BUTTON"*/);
    sub_1C32C20(&StringLiteral_6983/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_HEADER"*/);
    sub_1C32C20(&StringLiteral_6985/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_BUTTON"*/);
    byte_4C3A2FD = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6987/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v8, 0);
  messageLabel = this->fields.messageLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6984/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, v8, 0);
  normalSkillHeader = this->fields.normalSkillHeader;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6986/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_HEADER"*/, 0);
  if ( !normalSkillHeader )
    goto LABEL_13;
  UILabel__set_text(normalSkillHeader, v8, 0);
  anotherSkillHeader = this->fields.anotherSkillHeader;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6983/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_HEADER"*/, 0);
  if ( !anotherSkillHeader )
    goto LABEL_13;
  UILabel__set_text(anotherSkillHeader, v8, 0);
  normalSkillBtnLabel = this->fields.normalSkillBtnLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6985/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_BUTTON"*/, 0);
  if ( !normalSkillBtnLabel
    || (UILabel__set_text(normalSkillBtnLabel, v8, 0),
        anotherSkillBtnLabel = this->fields.anotherSkillBtnLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6982/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_BUTTON"*/, 0),
        !anotherSkillBtnLabel)
    || (UILabel__set_text(anotherSkillBtnLabel, v8, 0),
        cancelBtnLabel = this->fields.cancelBtnLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelBtnLabel) )
  {
LABEL_13:
    sub_1C32E7C(v8);
  }
  UILabel__set_text(cancelBtnLabel, v8, 0);
  GrandBondEquipSkillSelectDialog__SetSkillUi(this, equipUserSvtId, anotherSkillId, v15);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandBondEquipSkillSelectDialog__SetSkillUi(
        GrandBondEquipSkillSelectDialog_o *this,
        int64_t equipUserSvtId,
        int32_t anotherSkillId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  void *EffectTitle; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  Il2CppObject *v11; // x22
  int32_t v12; // w23
  SkillEntity_o *v13; // x22
  UILabel_o *normalSkillName; // x23
  UILabel_o *normalSkillDetail; // x23
  UILabel_o *anotherSkillName; // x20
  UILabel_o *anotherSkillDetail; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C3A2FE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3A2FE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
  EffectTitle = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !EffectTitle )
    goto LABEL_24;
  EffectTitle = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)EffectTitle,
                  equipUserSvtId,
                  (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !EffectTitle )
    goto LABEL_24;
  v9 = *((_QWORD *)EffectTitle + 10);
  v10 = *((_QWORD *)EffectTitle + 11);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  EffectTitle = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v19, 0);
  if ( !v11 )
    goto LABEL_24;
  EffectTitle = ServantSkillMaster__GetEntity((ServantSkillMaster_o *)v11, (int32_t)EffectTitle, 1, 1, 0);
  if ( !EffectTitle )
    goto LABEL_24;
  if ( !Master_object )
    goto LABEL_24;
  v12 = *((_DWORD *)EffectTitle + 7);
  EffectTitle = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  v12,
                  (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !this->fields.normalSkillIcon )
    goto LABEL_24;
  v13 = (SkillEntity_o *)EffectTitle;
  SkillIconComponent__Set(this->fields.normalSkillIcon, v12, 0);
  if ( !v13 )
    goto LABEL_24;
  normalSkillName = this->fields.normalSkillName;
  EffectTitle = SkillEntity__getEffectTitle(v13, 0, 0);
  if ( !normalSkillName )
    goto LABEL_24;
  UILabel__set_text(normalSkillName, (System_String_o *)EffectTitle, 0);
  normalSkillDetail = this->fields.normalSkillDetail;
  EffectTitle = SkillEntity__getEffectExplanation(v13, 0, 0);
  if ( !normalSkillDetail )
    goto LABEL_24;
  UILabel__set_text(normalSkillDetail, (System_String_o *)EffectTitle, 0);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          anotherSkillId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  EffectTitle = this->fields.anotherSkillIcon;
  if ( !EffectTitle )
    goto LABEL_24;
  SkillIconComponent__Set((SkillIconComponent_o *)EffectTitle, anotherSkillId, 0);
  EffectTitle = entity;
  if ( !entity
    || (anotherSkillName = this->fields.anotherSkillName,
        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)entity, 0, 0),
        !anotherSkillName)
    || (UILabel__set_text(anotherSkillName, (System_String_o *)EffectTitle, 0), (EffectTitle = entity) == 0)
    || (anotherSkillDetail = this->fields.anotherSkillDetail,
        EffectTitle = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0),
        !anotherSkillDetail) )
  {
LABEL_24:
    sub_1C32E7C(EffectTitle);
  }
  UILabel__set_text(anotherSkillDetail, (System_String_o *)EffectTitle, 0);
}