void GrandBondEquipSkillSelectDialog___ctor(GrandBondEquipSkillSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59730B9 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_59730B9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v6; // x1

  if ( (byte_59730B6 & 1) == 0 )
  {
    sub_2213A60(&Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59730B6 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_GrandBondEquipSkillSelectDialog_OnClickAnotherSKillBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
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
  __int64 v6; // x1

  if ( (byte_59730B7 & 1) == 0 )
  {
    sub_2213A60(&Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59730B7 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_GrandBondEquipSkillSelectDialog_OnClickCancelBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
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
  __int64 v6; // x1

  if ( (byte_59730B5 & 1) == 0 )
  {
    sub_2213A60(&Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59730B5 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__;
    if ( (*((_BYTE *)Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_GrandBondEquipSkillSelectDialog_OnClickNormalSKillBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
    CommonUI__CloseGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, 1, 0, 0);
  }
}


void GrandBondEquipSkillSelectDialog__OnEnable(GrandBondEquipSkillSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_59730B8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16256/*"Window/Buttons/CancelButton"*/);
    byte_59730B8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16256/*"Window/Buttons/CancelButton"*/, 0);
}


void GrandBondEquipSkillSelectDialog__Open(
        GrandBondEquipSkillSelectDialog_o *this,
        int64_t equipUserSvtId,
        int32_t anotherSkillId,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *normalSkillHeader; // x22
  UILabel_o *anotherSkillHeader; // x22
  UILabel_o *normalSkillBtnLabel; // x22
  UILabel_o *anotherSkillBtnLabel; // x22
  UILabel_o *cancelBtnLabel; // x22
  const MethodInfo *v16; // x3

  if ( (byte_59730B3 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7282/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_7281/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_HEADER"*/);
    sub_2213A60(&StringLiteral_7279/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_7277/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_BUTTON"*/);
    sub_2213A60(&StringLiteral_7278/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_HEADER"*/);
    sub_2213A60(&StringLiteral_7280/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_BUTTON"*/);
    byte_59730B3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, equipUserSvtId);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_7282/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v8, 0);
  messageLabel = this->fields.messageLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_7279/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, v8, 0);
  normalSkillHeader = this->fields.normalSkillHeader;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_7281/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_HEADER"*/, 0);
  if ( !normalSkillHeader )
    goto LABEL_13;
  UILabel__set_text(normalSkillHeader, v8, 0);
  anotherSkillHeader = this->fields.anotherSkillHeader;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_7278/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_HEADER"*/, 0);
  if ( !anotherSkillHeader )
    goto LABEL_13;
  UILabel__set_text(anotherSkillHeader, v8, 0);
  normalSkillBtnLabel = this->fields.normalSkillBtnLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_7280/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_NORMAL_SKILL_BUTTON"*/, 0);
  if ( !normalSkillBtnLabel
    || (UILabel__set_text(normalSkillBtnLabel, v8, 0),
        anotherSkillBtnLabel = this->fields.anotherSkillBtnLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_7277/*"GRAND_BOND_EQUIP_FUNC_SELECT_DIALOG_ANOTHER_SKILL_BUTTON"*/, 0),
        !anotherSkillBtnLabel)
    || (UILabel__set_text(anotherSkillBtnLabel, v8, 0),
        cancelBtnLabel = this->fields.cancelBtnLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelBtnLabel) )
  {
LABEL_13:
    sub_2213CDC(v8, v9);
  }
  UILabel__set_text(cancelBtnLabel, v8, 0);
  GrandBondEquipSkillSelectDialog__SetSkillUi(this, equipUserSvtId, anotherSkillId, v16);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandBondEquipSkillSelectDialog__SetSkillUi(
        GrandBondEquipSkillSelectDialog_o *this,
        int64_t equipUserSvtId,
        int32_t anotherSkillId,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x21
  void *EffectTitle; // x0
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  __int64 v13; // x1
  Il2CppObject *v14; // x24
  int32_t v15; // w23
  SkillEntity_o *v16; // x22
  UILabel_o *normalSkillName; // x23
  UILabel_o *normalSkillDetail; // x23
  UILabel_o *anotherSkillName; // x20
  UILabel_o *anotherSkillDetail; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_59730B4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59730B4 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, equipUserSvtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  EffectTitle = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !EffectTitle )
    goto LABEL_24;
  EffectTitle = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)EffectTitle,
                  equipUserSvtId,
                  (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !EffectTitle )
    goto LABEL_24;
  v11 = *((_QWORD *)EffectTitle + 10);
  v12 = *((_QWORD *)EffectTitle + 11);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  EffectTitle = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
  if ( !v14 )
    goto LABEL_24;
  EffectTitle = ServantSkillMaster__GetEntity((ServantSkillMaster_o *)v14, (int32_t)EffectTitle, 1, 1, 0);
  if ( !EffectTitle )
    goto LABEL_24;
  if ( !Master_object )
    goto LABEL_24;
  v15 = *((_DWORD *)EffectTitle + 7);
  EffectTitle = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  v15,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !this->fields.normalSkillIcon )
    goto LABEL_24;
  v16 = (SkillEntity_o *)EffectTitle;
  SkillIconComponent__Set(this->fields.normalSkillIcon, v15, 0);
  if ( !v16 )
    goto LABEL_24;
  normalSkillName = this->fields.normalSkillName;
  EffectTitle = SkillEntity__getEffectTitle(v16, 0, 0);
  if ( !normalSkillName )
    goto LABEL_24;
  UILabel__set_text(normalSkillName, (System_String_o *)EffectTitle, 0);
  normalSkillDetail = this->fields.normalSkillDetail;
  EffectTitle = SkillEntity__getEffectExplanation(v16, 0, 0);
  if ( !normalSkillDetail )
    goto LABEL_24;
  UILabel__set_text(normalSkillDetail, (System_String_o *)EffectTitle, 0);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          anotherSkillId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_2213CDC(EffectTitle, v10);
  }
  UILabel__set_text(anotherSkillDetail, (System_String_o *)EffectTitle, 0);
}