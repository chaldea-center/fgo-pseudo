void __fastcall EquipSkillInfoComponent___ctor(EquipSkillInfoComponent_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4355077 & 1) == 0 )
  {
    sub_B70694(&IconLabelInfo_TypeInfo);
    byte_4355077 = 1;
  }
  v3 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0LL);
  this->fields.iconLabelInfo = v3;
  sub_B70630(
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

  if ( (byte_4355076 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355076 = 1;
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
  __int64 v25; // x2
  Il2CppObject *v26; // x26
  __int64 v27; // x2
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *newIcon; // x21
  int32_t maxLv; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v31; // [xsp+18h] [xbp-48h] BYREF
  int v32; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4355075 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&StringLiteral_8733/*"MASTER_EQSKILL_LV_INFO"*/);
    sub_B70694(&StringLiteral_19936/*"img_skill_0"*/);
    byte_4355075 = 1;
  }
  v32 = 0;
  this->fields.clickCallbackFunc = callback;
  sub_B70630(
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
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_B08394(v16);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v16 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             skillId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillIndxImg = this->fields.skillIndxImg;
  v20 = (SkillEntity_o *)Entity;
  v32 = idx + 1;
  v21 = System_Int32__ToString((int32_t)&v32, 0LL);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_String__Concat_44758168(
                                                          (System_String_o *)StringLiteral_19936/*"img_skill_0"*/,
                                                          v21,
                                                          0LL);
  if ( !skillIndxImg )
    goto LABEL_26;
  UISprite__set_spriteName(skillIndxImg, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.skillIconInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  SkillIconComponent__Set_26485508((SkillIconComponent_o *)MasterData_WarQuestSelectionMaster, skillId, skillLv, 0LL);
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
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8733/*"MASTER_EQSKILL_LV_INFO"*/, 0LL);
  v31 = skillLv;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v25);
  maxLv = v20->fields.maxLv;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxLv, v27);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_String__Format_44753704(v24, v26, v28, 0LL);
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
    sub_B7076C(MasterData_WarQuestSelectionMaster, v14);
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
  sub_B70630(p_method);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = skillLv;
  v13 = skillId;
  if ( (byte_434F02F & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_434F02F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, *(_QWORD *)&skillLv);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall EquipSkillInfoComponent_ClickDelegate__EndInvoke(
        EquipSkillInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EquipSkillInfoComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(_QWORD, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  EquipSkillInfoComponent_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
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
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&skillId);
      if ( (sub_B706C4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23((unsigned int)skillId, (unsigned int)skillLv, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_B08590(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
        (*v19)(v21, (unsigned int)skillId, (unsigned int)skillLv, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B08590(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            (unsigned int)skillId,
            (unsigned int)skillLv,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)skillId,
            (unsigned int)skillLv,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(
      v21,
      (unsigned int)skillId,
      (unsigned int)skillLv,
      v22);
    goto LABEL_36;
  }
}