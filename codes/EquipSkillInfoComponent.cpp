void __fastcall EquipSkillInfoComponent___ctor(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  IconLabelInfo_o *v5; // x20

  if ( (byte_4B114F4 & 1) == 0 )
  {
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, method, v2);
    byte_4B114F4 = 1;
  }
  v5 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, method, v2, v3);
  IconLabelInfo___ctor(v5, 0LL);
  this->fields.iconLabelInfo = v5;
  sub_1BCA784(&this->fields.iconLabelInfo, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipSkillInfoComponent__OnClickSkill(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct EquipSkillInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4B114F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipSkillInfoComponent_OnClickSkill__, method, v2);
    byte_4B114F3 = 1;
  }
  v4 = Method_EquipSkillInfoComponent_OnClickSkill__;
  if ( (*((_BYTE *)Method_EquipSkillInfoComponent_OnClickSkill__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EquipSkillInfoComponent_OnClickSkill__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))clickCallbackFunc->fields.m_target)(
      clickCallbackFunc->fields.original_method_info,
      (unsigned int)this->fields.equipSkillId,
      (unsigned int)this->fields.equipSkillLv,
      *(_QWORD *)&clickCallbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipSkillInfoComponent__setEquipSkillInfo(
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  long double v29; // q0
  __int64 v30; // x0
  __int64 v31; // x0
  DataManager_o *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  UISprite_o *skillIndxImg; // x25
  SkillEntity_o *v35; // x24
  System_String_o *v36; // x0
  UILabel_o *skillNameLb; // x23
  __int64 v38; // x1
  UILabel_o *skillLvLabel; // x23
  System_String_o *v40; // x25
  Il2CppObject *v41; // x26
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  UnityEngine_Object_o *newIcon; // x21
  int32_t maxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v46; // [xsp+8h] [xbp-58h] BYREF
  int v47; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B114F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx, *(_QWORD *)&skillId);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&int_TypeInfo, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v22, v23);
    sub_1BCA7E0(&StringLiteral_8647/*"MASTER_EQSKILL_LV_INFO"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_20684/*"img_skill_0"*/, v26, v27);
    byte_4B114F2 = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_1BCA784(&this->fields.clickCallbackFunc, callback);
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1C1C6BC(v29);
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1C1C6BC(v29);
  MasterData_object = **(DataManager_o ***)(v31 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillIndxImg = this->fields.skillIndxImg;
  v35 = (SkillEntity_o *)Entity;
  v47 = idx + 1;
  v36 = System_Int32__ToString((int32_t)&v47, 0LL);
  MasterData_object = (DataManager_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_20684/*"img_skill_0"*/, v36, 0LL);
  if ( !skillIndxImg )
    goto LABEL_24;
  UISprite__set_spriteName(skillIndxImg, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = (DataManager_o *)this->fields.skillIconInfo;
  if ( !MasterData_object )
    goto LABEL_24;
  SkillIconComponent__Set_38947272((SkillIconComponent_o *)MasterData_object, skillId, skillLv, 0LL);
  if ( !v35 )
    goto LABEL_24;
  skillNameLb = this->fields.skillNameLb;
  MasterData_object = (DataManager_o *)SkillEntity__getName(v35, 0LL);
  if ( !skillNameLb )
    goto LABEL_24;
  UILabel__set_text(skillNameLb, (System_String_o *)MasterData_object, 0LL);
  skillLvLabel = this->fields.skillLvLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8647/*"MASTER_EQSKILL_LV_INFO"*/, 0LL);
  v46 = skillLv;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  maxLv = v35->fields.maxLv;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxLv);
  MasterData_object = (DataManager_o *)System_String__Format_62415592(v40, v41, v42, 0LL);
  if ( !skillLvLabel )
    goto LABEL_24;
  UILabel__set_text(skillLvLabel, (System_String_o *)MasterData_object, 0LL);
  this->fields.equipSkillId = skillId;
  this->fields.equipSkillLv = skillLv;
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    MasterData_object = (DataManager_o *)this->fields.newIcon;
    if ( MasterData_object )
    {
      if ( isNew )
        ShiningIconComponent__Set((ShiningIconComponent_o *)MasterData_object, 0LL);
      else
        ShiningIconComponent__Clear((ShiningIconComponent_o *)MasterData_object, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(MasterData_object, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipSkillInfoComponent_ClickDelegate___ctor(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A05914;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A058BC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipSkillInfoComponent_ClickDelegate__BeginInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v11 = skillLv;
  v12 = skillId;
  if ( (byte_4B114F5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&skillId, *(_QWORD *)&skillLv);
    byte_4B114F5 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v10, callback, object);
}


void __fastcall EquipSkillInfoComponent_ClickDelegate__EndInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EquipSkillInfoComponent_ClickDelegate__Invoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    skillId,
    skillLv,
    *(_QWORD *)&this->fields.extra_arg);
}