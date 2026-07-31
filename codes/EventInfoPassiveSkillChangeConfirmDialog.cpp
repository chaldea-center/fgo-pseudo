void EventInfoPassiveSkillChangeConfirmDialog___ctor(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_593999C & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593999C = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v6; // x0
  __int64 v7; // x22
  __int64 v8; // x23
  int64_t userIdNumber; // x21
  __int64 ServantLimitCountSealAfter; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x22
  ServantLimitImageMaster_o *v17; // x20
  int32_t v18; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_593999A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593999A = 1;
  }
  entity = 0;
  if ( !servantEntity )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    v6 = NetworkManager_TypeInfo;
  }
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  userIdNumber = v6->static_fields->userIdNumber;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v21.fields.currentCryptoKey = v7;
  *(_QWORD *)&v21.fields.fakeValue = v8;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v21, 0);
  if ( !Master_object )
    goto LABEL_30;
  if ( UserServantCollectionMaster__TryGetEntity(
         (UserServantCollectionMaster_o *)Master_object,
         &entity,
         userIdNumber,
         ServantLimitCountSealAfter,
         0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
    v13 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v15 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v16 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v17 = (ServantLimitImageMaster_o *)v13;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v22.fields.currentCryptoKey = v15;
    *(_QWORD *)&v22.fields.fakeValue = v16;
    ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0);
    if ( entity )
    {
      if ( v17 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v17,
                                       ServantLimitCountSealAfter,
                                       entity->fields.maxLimitCount,
                                       0);
        if ( entity )
        {
          if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
            v18 = -1;
          else
            v18 = ServantLimitCountSealAfter;
          return ServantEntity__getName(servantEntity, v18, -1, 1, 0, 0);
        }
      }
    }
LABEL_30:
    sub_21FFECC(ServantLimitCountSealAfter, v11);
  }
  v18 = -1;
  return ServantEntity__getName(servantEntity, v18, -1, 1, 0, 0);
}


void EventInfoPassiveSkillChangeConfirmDialog__OnClose(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5939999 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeConfirmDialog__OnClose_b__9_0__);
    byte_5939999 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoPassiveSkillChangeConfirmDialog_OnClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x1
  UILabel_o *descriptionLabel; // x23
  System_String_o *v15; // x24
  System_String_o *ClassName; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Object_array *v24; // x25
  Il2CppObject *v25; // x26
  __int64 v26; // x1
  EventInfoPassiveSkillChangeConfirmDialog_o *v27; // x0
  const MethodInfo *v28; // x2
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // x22
  const MethodInfo *v36; // x3
  __int64 v37; // x0

  if ( (byte_5939998 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_5817/*"EVENT_INFO_PASSIVE_SKILL_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_5939998 = 1;
  }
  this->fields.onClose = inOnClose;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)inOnClose,
    (System_String_o *)beforeSkillEntity,
    (System_String_o *)afterSkillEntity,
    (int32_t)inOnClose,
    (int32_t)method,
    v6,
    v7);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  descriptionLabel = this->fields.descriptionLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5817/*"EVENT_INFO_PASSIVE_SKILL_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
  ClassName = (System_String_o *)sub_21FFD10(object___TypeInfo, 2);
  v24 = (System_Object_array *)ClassName;
  if ( !servantEntity )
  {
    if ( ClassName )
    {
      v25 = 0;
      goto LABEL_12;
    }
LABEL_19:
    sub_21FFECC(ClassName, v17);
  }
  ClassName = ServantEntity__getClassName(servantEntity, 0);
  if ( !v24 )
    goto LABEL_19;
  v25 = (Il2CppObject *)ClassName;
  if ( ClassName )
  {
    ClassName = (System_String_o *)sub_21FFDA4(ClassName, v24->obj.klass->_1.element_class);
    if ( !ClassName )
    {
LABEL_18:
      v37 = sub_21FFEF0(ClassName, v26);
      sub_21FFD90(v37, 0);
    }
  }
LABEL_12:
  if ( !LODWORD(v24->max_length) )
    goto LABEL_17;
  v24->m_Items[0] = v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v24->m_Items, (int32_t)v25, v18, v19, v20, v21, v22, v23);
  ClassName = EventInfoPassiveSkillChangeConfirmDialog__GetServantName(v27, servantEntity, v28);
  v35 = (Il2CppObject *)ClassName;
  if ( ClassName )
  {
    ClassName = (System_String_o *)sub_21FFDA4(ClassName, v24->obj.klass->_1.element_class);
    if ( !ClassName )
      goto LABEL_18;
  }
  if ( (v24->max_length & 0xFFFFFFFE) == 0 )
LABEL_17:
    sub_21FFED4(ClassName);
  v24->m_Items[1] = v35;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->m_Items[1], (int32_t)v35, v29, v30, v31, v32, v33, v34);
  UILabelHelper__SetTextSafely_51104760(descriptionLabel, v15, v24, 0);
  EventInfoPassiveSkillChangeConfirmDialog__SetupSkill(this, beforeSkillEntity, afterSkillEntity, v36);
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

  if ( (byte_593999B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593999B = 1;
  }
  beforeSkill = (UnityEngine_Object_o *)this->fields.beforeSkill;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, beforeSkillEntity);
  if ( UnityEngine_Object__op_Inequality(beforeSkill, 0, 0) )
  {
    v10 = this->fields.beforeSkill;
    if ( !v10 )
      goto LABEL_14;
    EventInfoPassiveSkillComponent__Setup(v10, beforeSkillEntity, 0, 0, v9);
  }
  afterSkill = (UnityEngine_Object_o *)this->fields.afterSkill;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(afterSkill, 0, 0) )
  {
    v10 = this->fields.afterSkill;
    if ( v10 )
    {
      EventInfoPassiveSkillComponent__Setup(v10, afterSkillEntity, 0, 0, v12);
      return;
    }
LABEL_14:
    sub_21FFECC(v10, v8);
  }
}


void EventInfoPassiveSkillChangeConfirmDialog___OnClose_b__9_0(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_593999D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593999D = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  ActionExtensions__Call(this->fields.onClose, 0);
}


UnityEngine_GameObject_o *EventInfoPassiveSkillChangeConfirmDialog__get_closeBtnObject(
        EventInfoPassiveSkillChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeBtn;
}