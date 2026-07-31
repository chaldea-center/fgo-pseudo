void EquipSkillInfoComponent___ctor(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59332A2 & 1) == 0 )
  {
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    byte_59332A2 = 1;
  }
  v3 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0);
  this->fields.iconLabelInfo = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipSkillInfoComponent__OnClickSkill(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EquipSkillInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_59332A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_EquipSkillInfoComponent_OnClickSkill__);
    byte_59332A1 = 1;
  }
  v3 = Method_EquipSkillInfoComponent_OnClickSkill__;
  if ( (*((_BYTE *)Method_EquipSkillInfoComponent_OnClickSkill__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EquipSkillInfoComponent_OnClickSkill__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))clickCallbackFunc->fields.invoke_impl)(
      clickCallbackFunc->fields.method_code,
      (unsigned int)this->fields.equipSkillId,
      (unsigned int)this->fields.equipSkillLv,
      clickCallbackFunc->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void EquipSkillInfoComponent__setEquipSkillInfo(
        EquipSkillInfoComponent_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        int32_t skillIconId,
        bool isNew,
        EquipSkillInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v14; // x1
  long double v15; // q0
  __int64 v16; // x0
  __int64 v17; // x0
  DataManager_o *MasterData_object; // x0
  SkillEntity_o *Entity; // x24
  UISprite_o *skillIndxImg; // x25
  System_String_o *v21; // x0
  UILabel_o *skillNameLb; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *skillLvLabel; // x23
  System_String_o *v26; // x25
  Il2CppObject *v27; // x26
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_c *v31; // x0
  UnityEngine_Object_o *newIcon; // x23
  int32_t maxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int v35; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_59332A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&StringLiteral_8899/*"MASTER_EQSKILL_LV_INFO"*/);
    sub_21FFC50(&StringLiteral_21529/*"img_skill_0"*/);
    byte_59332A0 = 1;
  }
  v35 = 0;
  this->fields.clickCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    *(System_String_o **)&skillId,
    *(System_String_o **)&skillLv,
    skillIconId,
    isNew,
    (bool)callback,
    (bool)method);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_2237AF8(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_2237AF8(v15);
  MasterData_object = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_25;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              skillId,
                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillIndxImg = this->fields.skillIndxImg;
  v35 = idx + 1;
  v21 = System_Int32__ToString((int32_t)&v35, 0);
  MasterData_object = (DataManager_o *)System_String__Concat_75438412((System_String_o *)StringLiteral_21529/*"img_skill_0"*/, v21, 0);
  if ( !skillIndxImg )
    goto LABEL_25;
  UISprite__set_spriteName(skillIndxImg, (System_String_o *)MasterData_object, 0);
  MasterData_object = (DataManager_o *)this->fields.skillIconInfo;
  if ( !MasterData_object )
    goto LABEL_25;
  SkillIconComponent__Set_48036300((SkillIconComponent_o *)MasterData_object, skillId, skillLv, 0);
  if ( !Entity )
    goto LABEL_25;
  skillNameLb = this->fields.skillNameLb;
  MasterData_object = (DataManager_o *)SkillEntity__getName(Entity, 0);
  if ( !skillNameLb )
    goto LABEL_25;
  UILabel__set_text(skillNameLb, (System_String_o *)MasterData_object, 0);
  skillLvLabel = this->fields.skillLvLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8899/*"MASTER_EQSKILL_LV_INFO"*/, 0);
  v34 = skillLv;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v34);
  maxLv = Entity->fields.maxLv;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &maxLv);
  MasterData_object = (DataManager_o *)System_String__Format_75484576(v26, v27, v28, 0);
  if ( !skillLvLabel )
    goto LABEL_25;
  UILabel__set_text(skillLvLabel, (System_String_o *)MasterData_object, 0);
  v31 = UnityEngine_Object_TypeInfo;
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  this->fields.equipSkillId = skillId;
  this->fields.equipSkillLv = skillLv;
  if ( !*(&v31->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v31, v29, v30);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0, 0) )
  {
    MasterData_object = (DataManager_o *)this->fields.newIcon;
    if ( isNew )
    {
      if ( MasterData_object )
      {
        ShiningIconComponent__Set((ShiningIconComponent_o *)MasterData_object, 0);
        return;
      }
LABEL_25:
      sub_21FFECC(MasterData_object, v14);
    }
    if ( !MasterData_object )
      goto LABEL_25;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)MasterData_object, 0);
  }
}


void EquipSkillInfoComponent_ClickDelegate___ctor(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEEB7C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEEB24;
}


System_IAsyncResult_o *EquipSkillInfoComponent_ClickDelegate__BeginInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+28h] [xbp-28h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v11 = skillLv;
  v12 = skillId;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_594C070, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void EquipSkillInfoComponent_ClickDelegate__EndInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void EquipSkillInfoComponent_ClickDelegate__Invoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    skillId,
    skillLv,
    this->fields.method);
}