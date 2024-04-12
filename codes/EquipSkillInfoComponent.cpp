void __fastcall EquipSkillInfoComponent___ctor(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B2634 & 1) == 0 )
  {
    sub_B52984(&IconLabelInfo_TypeInfo);
    byte_42B2634 = 1;
  }
  v3 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0LL);
  this->fields.iconLabelInfo = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipSkillInfoComponent__OnClickSkill(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  EquipSkillInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_42B2633 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2633 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    EquipSkillInfoComponent_ClickDelegate__Invoke(
      clickCallbackFunc,
      this->fields.equipSkillId,
      this->fields.equipSkillLv,
      0LL);
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
  __int64 v15; // x24
  __int64 v16; // x24
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  UISprite_o *skillIndxImg; // x25
  SkillEntity_o *v20; // x24
  System_String_o *v21; // x0
  UILabel_o *skillNameLb; // x23
  UILabel_o *skillLvLabel; // x23
  System_String_o *v24; // x25
  Il2CppObject *v25; // x26
  Il2CppObject *v26; // x0
  UnityEngine_Object_o *newIcon; // x21
  int32_t maxLv; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v29; // [xsp+18h] [xbp-48h] BYREF
  int v30; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42B2632 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&StringLiteral_8681/*"MASTER_EQSKILL_LV_INFO"*/);
    sub_B52984(&StringLiteral_19775/*"img_skill_0"*/);
    byte_42B2632 = 1;
  }
  v30 = 0;
  this->fields.clickCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&skillId,
    *(System_String_array ***)&skillLv,
    *(System_Boolean_array ***)&skillIconId,
    (System_Int32_array **)isNew,
    (System_Int32_array *)callback,
    (System_Int32_array *)method);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AEB684(v16);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v16 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             skillId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillIndxImg = this->fields.skillIndxImg;
  v20 = (SkillEntity_o *)Entity;
  v30 = idx + 1;
  v21 = System_Int32__ToString((int32_t)&v30, 0LL);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_String__Concat_44568316(
                                                          (System_String_o *)StringLiteral_19775/*"img_skill_0"*/,
                                                          v21,
                                                          0LL);
  if ( !skillIndxImg )
    goto LABEL_26;
  UISprite__set_spriteName(skillIndxImg, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.skillIconInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  SkillIconComponent__Set_26537744((SkillIconComponent_o *)MasterData_WarQuestSelectionMaster, skillId, skillLv, 0LL);
  if ( !v20 )
    goto LABEL_26;
  skillNameLb = this->fields.skillNameLb;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getName(v20, 0LL);
  if ( !skillNameLb )
    goto LABEL_26;
  UILabel__set_text(skillNameLb, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  skillLvLabel = this->fields.skillLvLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8681/*"MASTER_EQSKILL_LV_INFO"*/, 0LL);
  v29 = skillLv;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  maxLv = v20->fields.maxLv;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxLv);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_String__Format_44563852(v24, v25, v26, 0LL);
  if ( !skillLvLabel )
    goto LABEL_26;
  UILabel__set_text(skillLvLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  this->fields.equipSkillId = skillId;
  this->fields.equipSkillLv = skillLv;
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.newIcon;
    if ( MasterData_WarQuestSelectionMaster )
    {
      if ( isNew )
        ShiningIconComponent__Set((ShiningIconComponent_o *)MasterData_WarQuestSelectionMaster, 0LL);
      else
        ShiningIconComponent__Clear((ShiningIconComponent_o *)MasterData_WarQuestSelectionMaster, 0LL);
      return;
    }
LABEL_26:
    sub_B52A5C(MasterData_WarQuestSelectionMaster, v14);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall EquipSkillInfoComponent_ClickDelegate__BeginInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = skillLv;
  v12 = skillId;
  if ( (byte_42AD8A5 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AD8A5 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall EquipSkillInfoComponent_ClickDelegate__EndInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipSkillInfoComponent_ClickDelegate__Invoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  EquipSkillInfoComponent_ClickDelegate_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EquipSkillInfoComponent_ClickDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(_QWORD, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  EquipSkillInfoComponent_ClickDelegate_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (EquipSkillInfoComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&skillId, *(_QWORD *)&skillLv, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24((unsigned int)skillId, (unsigned int)skillLv, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AEB880(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, (unsigned int)skillId, (unsigned int)skillLv, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            (unsigned int)skillId,
            (unsigned int)skillLv,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            (unsigned int)skillId,
            (unsigned int)skillLv,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(
      v22,
      (unsigned int)skillId,
      (unsigned int)skillLv,
      v23);
    goto LABEL_36;
  }
}