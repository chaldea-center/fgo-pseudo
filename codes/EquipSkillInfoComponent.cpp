void EquipSkillInfoComponent___ctor(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20

  if ( (byte_4C51B8D & 1) == 0 )
  {
    sub_1C3E564(&IconLabelInfo_TypeInfo);
    byte_4C51B8D = 1;
  }
  v3 = (IconLabelInfo_o *)sub_1C3E7B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0);
  this->fields.iconLabelInfo = v3;
  sub_1C3E508(&this->fields.iconLabelInfo, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipSkillInfoComponent__OnClickSkill(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EquipSkillInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4C51B8C & 1) == 0 )
  {
    sub_1C3E564(&Method_EquipSkillInfoComponent_OnClickSkill__);
    byte_4C51B8C = 1;
  }
  v3 = Method_EquipSkillInfoComponent_OnClickSkill__;
  if ( (*((_BYTE *)Method_EquipSkillInfoComponent_OnClickSkill__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_EquipSkillInfoComponent_OnClickSkill__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))clickCallbackFunc->fields.invoke_impl)(
      clickCallbackFunc->fields.method_code,
      (unsigned int)this->fields.equipSkillId,
      (unsigned int)this->fields.equipSkillLv,
      clickCallbackFunc->fields.method);
}


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
  Il2CppObject *Entity; // x0
  UISprite_o *skillIndxImg; // x25
  SkillEntity_o *v21; // x24
  System_String_o *v22; // x0
  UILabel_o *skillNameLb; // x23
  UILabel_o *skillLvLabel; // x23
  System_String_o *v25; // x25
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x26
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x0
  UnityEngine_Object_o *newIcon; // x21
  int32_t maxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v42; // [xsp+8h] [xbp-58h] BYREF
  int v43; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C51B8B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&StringLiteral_8549/*"MASTER_EQSKILL_LV_INFO"*/);
    sub_1C3E564(&StringLiteral_20594/*"img_skill_0"*/);
    byte_4C51B8B = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_1C3E508(&this->fields.clickCallbackFunc, callback);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C8EC78(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8EC78(v15);
  MasterData_object = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             skillId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillIndxImg = this->fields.skillIndxImg;
  v21 = (SkillEntity_o *)Entity;
  v43 = idx + 1;
  v22 = System_Int32__ToString((int32_t)&v43, 0);
  MasterData_object = (DataManager_o *)System_String__Concat_63636468((System_String_o *)StringLiteral_20594/*"img_skill_0"*/, v22, 0);
  if ( !skillIndxImg )
    goto LABEL_24;
  UISprite__set_spriteName(skillIndxImg, (System_String_o *)MasterData_object, 0);
  MasterData_object = (DataManager_o *)this->fields.skillIconInfo;
  if ( !MasterData_object )
    goto LABEL_24;
  SkillIconComponent__Set_41071720((SkillIconComponent_o *)MasterData_object, skillId, skillLv, 0);
  if ( !v21 )
    goto LABEL_24;
  skillNameLb = this->fields.skillNameLb;
  MasterData_object = (DataManager_o *)SkillEntity__getName(v21, 0);
  if ( !skillNameLb )
    goto LABEL_24;
  UILabel__set_text(skillNameLb, (System_String_o *)MasterData_object, 0);
  skillLvLabel = this->fields.skillLvLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8549/*"MASTER_EQSKILL_LV_INFO"*/, 0);
  v42 = skillLv;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v26, v27, v28, v29, v30, v31);
  maxLv = v21->fields.maxLv;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxLv, v33, v34, v35, v36, v37, v38);
  MasterData_object = (DataManager_o *)System_String__Format_63677760(v25, v32, v39, 0);
  if ( !skillLvLabel )
    goto LABEL_24;
  UILabel__set_text(skillLvLabel, (System_String_o *)MasterData_object, 0);
  this->fields.equipSkillId = skillId;
  this->fields.equipSkillLv = skillLv;
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0, 0) )
  {
    MasterData_object = (DataManager_o *)this->fields.newIcon;
    if ( MasterData_object )
    {
      if ( isNew )
        ShiningIconComponent__Set((ShiningIconComponent_o *)MasterData_object, 0);
      else
        ShiningIconComponent__Clear((ShiningIconComponent_o *)MasterData_object, 0);
      return;
    }
LABEL_24:
    sub_1C3E7C0(MasterData_object, v14);
  }
}


void EquipSkillInfoComponent_ClickDelegate___ctor(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7B21C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7B1C4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *EquipSkillInfoComponent_ClickDelegate__BeginInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v19; // [xsp+18h] [xbp-38h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-34h] BYREF

  v19 = skillLv;
  v20 = skillId;
  if ( (byte_4C51B8E & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C51B8E = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&skillLv, callback, object, method, v6, v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v18, callback, object);
}


void EquipSkillInfoComponent_ClickDelegate__EndInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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