void EventInfoPassiveSkillChangeConfirmDialog___ctor(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31E01 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D31E01 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoPassiveSkillChangeConfirmDialog__Awake(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *EventInfoPassiveSkillChangeConfirmDialog__GetServantName(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v5; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  int64_t userIdNumber; // x21
  __int64 ServantLimitCountSealAfter; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  ServantLimitImageMaster_o *v14; // x20
  int32_t v15; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D31DFF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D31DFF = 1;
  }
  entity = 0;
  if ( !servantEntity )
    return string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  userIdNumber = v5->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v18, 0);
  if ( !Master_object )
    goto LABEL_30;
  if ( UserServantCollectionMaster__TryGetEntity(
         (UserServantCollectionMaster_o *)Master_object,
         &entity,
         userIdNumber,
         ServantLimitCountSealAfter,
         0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v13 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v12 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v14 = (ServantLimitImageMaster_o *)v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v13;
    *(_QWORD *)&v19.fields.fakeValue = v12;
    ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v19, 0);
    if ( entity )
    {
      if ( v14 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v14,
                                       ServantLimitCountSealAfter,
                                       entity->fields.maxLimitCount,
                                       0);
        if ( entity )
        {
          if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
            v15 = -1;
          else
            v15 = ServantLimitCountSealAfter;
          return ServantEntity__getName(servantEntity, v15, -1, 1, 0);
        }
      }
    }
LABEL_30:
    sub_1C93D2C(ServantLimitCountSealAfter, v10);
  }
  v15 = -1;
  return ServantEntity__getName(servantEntity, v15, -1, 1, 0);
}


void EventInfoPassiveSkillChangeConfirmDialog__OnClose(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D31DFE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeConfirmDialog__OnClose_b__9_0__);
    byte_4D31DFE = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoPassiveSkillChangeConfirmDialog__OnClose_b__9_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoPassiveSkillChangeConfirmDialog__Open(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        ServantEntity_o *servantEntity,
        SkillEntity_o *beforeSkillEntity,
        SkillEntity_o *afterSkillEntity,
        System_Action_o *inOnClose,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *descriptionLabel; // x23
  System_String_o *v14; // x24
  System_String_o *ClassName; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Object_array *v23; // x25
  Il2CppObject *v24; // x26
  EventInfoPassiveSkillChangeConfirmDialog_o *v25; // x0
  const MethodInfo *v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x22
  const MethodInfo *v34; // x3
  __int64 v35; // x0

  if ( (byte_4D31DFD & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&StringLiteral_5645/*"EVENT_INFO_PASSIVE_SKILL_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4D31DFD = 1;
  }
  this->fields.onClose = inOnClose;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClose,
    (int32_t)inOnClose,
    (int32_t)beforeSkillEntity,
    (int32_t)afterSkillEntity,
    (System_String_o *)inOnClose,
    (int32_t)method,
    v6,
    v7);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_INFO_PASSIVE_SKILL_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
  ClassName = (System_String_o *)sub_1C93B7C(object___TypeInfo, 2);
  v23 = (System_Object_array *)ClassName;
  if ( !servantEntity )
  {
    if ( ClassName )
    {
      v24 = 0;
      goto LABEL_12;
    }
LABEL_18:
    sub_1C93D2C(ClassName, v16);
  }
  ClassName = ServantEntity__getClassName(servantEntity, 0);
  if ( !v23 )
    goto LABEL_18;
  v24 = (Il2CppObject *)ClassName;
  if ( ClassName )
  {
    ClassName = (System_String_o *)sub_1C93C10(ClassName, v23->obj.klass->_1.element_class);
    if ( !ClassName )
    {
LABEL_19:
      v35 = sub_1C93D50(ClassName);
      sub_1C93BFC(v35, 0);
    }
  }
LABEL_12:
  if ( !LODWORD(v23->max_length) )
    goto LABEL_17;
  v23->m_Items[0] = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v23->m_Items, (int32_t)v24, v17, v18, v19, v20, v21, v22);
  ClassName = EventInfoPassiveSkillChangeConfirmDialog__GetServantName(v25, servantEntity, v26);
  v33 = (Il2CppObject *)ClassName;
  if ( ClassName )
  {
    ClassName = (System_String_o *)sub_1C93C10(ClassName, v23->obj.klass->_1.element_class);
    if ( !ClassName )
      goto LABEL_19;
  }
  if ( LODWORD(v23->max_length) <= 1 )
LABEL_17:
    sub_1C93D34(ClassName);
  v23->m_Items[1] = v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[1], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  UILabelHelper__SetTextSafely_44847596(descriptionLabel, v14, v23, 0);
  EventInfoPassiveSkillChangeConfirmDialog__SetupSkill(this, beforeSkillEntity, afterSkillEntity, v34);
}


void EventInfoPassiveSkillChangeConfirmDialog__SetupSkill(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        SkillEntity_o *beforeSkillEntity,
        SkillEntity_o *afterSkillEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *beforeSkill; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  EventInfoPassiveSkillComponent_o *v10; // x0
  UnityEngine_Object_o *afterSkill; // x21
  const MethodInfo *v12; // x4

  if ( (byte_4D31E00 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E00 = 1;
  }
  beforeSkill = (UnityEngine_Object_o *)this->fields.beforeSkill;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(beforeSkill, 0, 0) )
  {
    v10 = this->fields.beforeSkill;
    if ( !v10 )
      goto LABEL_14;
    EventInfoPassiveSkillComponent__Setup(v10, beforeSkillEntity, 0, 0, v9);
  }
  afterSkill = (UnityEngine_Object_o *)this->fields.afterSkill;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(afterSkill, 0, 0) )
  {
    v10 = this->fields.afterSkill;
    if ( v10 )
    {
      EventInfoPassiveSkillComponent__Setup(v10, afterSkillEntity, 0, 0, v12);
      return;
    }
LABEL_14:
    sub_1C93D2C(v10, v8);
  }
}


void EventInfoPassiveSkillChangeConfirmDialog___OnClose_b__9_0(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4D31E02 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E02 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  ActionExtensions__Call(this->fields.onClose, 0);
}


UnityEngine_GameObject_o *EventInfoPassiveSkillChangeConfirmDialog__get_closeBtnObject(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeBtn;
}