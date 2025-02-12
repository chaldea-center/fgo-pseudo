void __fastcall EquipSkillInfoComponent___ctor(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20

  if ( (byte_4BC2CAE & 1) == 0 )
  {
    sub_1C1ABD4(&IconLabelInfo_TypeInfo, method);
    byte_4BC2CAE = 1;
  }
  v3 = (IconLabelInfo_o *)sub_1C1AE20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0LL);
  this->fields.iconLabelInfo = v3;
  sub_1C1AB78(&this->fields.iconLabelInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipSkillInfoComponent__OnClickSkill(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EquipSkillInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4BC2CAD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipSkillInfoComponent_OnClickSkill__, method);
    byte_4BC2CAD = 1;
  }
  v3 = Method_EquipSkillInfoComponent_OnClickSkill__;
  if ( (*((_BYTE *)Method_EquipSkillInfoComponent_OnClickSkill__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_EquipSkillInfoComponent_OnClickSkill__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  DataManager_o *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  UISprite_o *skillIndxImg; // x25
  SkillEntity_o *v28; // x24
  System_String_o *v29; // x0
  UILabel_o *skillNameLb; // x23
  UILabel_o *skillLvLabel; // x23
  System_String_o *v32; // x25
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x26
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  UnityEngine_Object_o *newIcon; // x21
  int32_t maxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v43; // [xsp+8h] [xbp-58h] BYREF
  int v44; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BC2CAC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1C1ABD4(&int_TypeInfo, v15);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v16);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_1C1ABD4(&StringLiteral_8695/*"MASTER_EQSKILL_LV_INFO"*/, v19);
    sub_1C1ABD4(&StringLiteral_20816/*"img_skill_0"*/, v20);
    byte_4BC2CAC = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_1C1AB78(&this->fields.clickCallbackFunc);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C6CAB0(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C6CAB0(v22);
  MasterData_object = **(DataManager_o ***)(v24 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             skillId,
             (const MethodInfo_3248678 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillIndxImg = this->fields.skillIndxImg;
  v28 = (SkillEntity_o *)Entity;
  v44 = idx + 1;
  v29 = System_Int32__ToString((int32_t)&v44, 0LL);
  MasterData_object = (DataManager_o *)System_String__Concat_63040368((System_String_o *)StringLiteral_20816/*"img_skill_0"*/, v29, 0LL);
  if ( !skillIndxImg )
    goto LABEL_24;
  UISprite__set_spriteName(skillIndxImg, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = (DataManager_o *)this->fields.skillIconInfo;
  if ( !MasterData_object )
    goto LABEL_24;
  SkillIconComponent__Set_39433940((SkillIconComponent_o *)MasterData_object, skillId, skillLv, 0LL);
  if ( !v28 )
    goto LABEL_24;
  skillNameLb = this->fields.skillNameLb;
  MasterData_object = (DataManager_o *)SkillEntity__getName(v28, 0LL);
  if ( !skillNameLb )
    goto LABEL_24;
  UILabel__set_text(skillNameLb, (System_String_o *)MasterData_object, 0LL);
  skillLvLabel = this->fields.skillLvLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8695/*"MASTER_EQSKILL_LV_INFO"*/, 0LL);
  v43 = skillLv;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v33, v34, v35);
  maxLv = v28->fields.maxLv;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxLv, v37, v38, v39);
  MasterData_object = (DataManager_o *)System_String__Format_63054740(v32, v36, v40, 0LL);
  if ( !skillLvLabel )
    goto LABEL_24;
  UILabel__set_text(skillLvLabel, (System_String_o *)MasterData_object, 0LL);
  this->fields.equipSkillId = skillId;
  this->fields.equipSkillLv = skillLv;
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C1AE30(MasterData_object, v21);
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
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A54C14;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A54BBC;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-34h] BYREF

  v14 = skillLv;
  v15 = skillId;
  if ( (byte_4BC2CAF & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&skillId);
    byte_4BC2CAF = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&skillLv, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v13, callback, object);
}


void __fastcall EquipSkillInfoComponent_ClickDelegate__EndInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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