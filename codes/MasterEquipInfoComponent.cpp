void __fastcall MasterEquipInfoComponent___ctor(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall MasterEquipInfoComponent__getEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipEnt; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40FB1A8 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FB1A8 = 1;
  }
  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_B170D4();
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
}


int32_t __fastcall MasterEquipInfoComponent__getMoveBannerIdx(
        MasterEquipInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveEqIdx;
}


int64_t __fastcall MasterEquipInfoComponent__getUsrEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipEnt; // x8

  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_B170D4();
  return usrEquipEnt->fields.id;
}


bool __fastcall MasterEquipInfoComponent__isChangeEquip(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setDispEffectObj(
        MasterEquipInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FB1A9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40FB1A9 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    v6 = this->fields.effectObj;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setEquipInfo(
        MasterEquipInfoComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *equipStatusInfo; // x0
  ItemIconComponent_o *equipIconComp; // x0
  UnityEngine_GameObject_o *v19; // x0
  struct UnityEngine_GameObject_o *equipEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o **p_effectObj; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v30; // x22
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Transform_o *v32; // x22
  int v33; // s0
  UnityEngine_Transform_o *v36; // x21
  int v37; // s0
  UILabel_o *equipLevelLb; // x21
  System_String_o *v41; // x0
  UILabel_o *equipMaxLvLb; // x21
  System_String_o *v43; // x0
  UILabel_o *equipNameLb; // x0
  UILabel_o *equipExpLb; // x21
  System_String_o *v46; // x0
  UIProgressBar_o *equipExpBar; // x0
  UILabel_o *equipDetailLb; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x1
  int32_t Kind; // w0
  int32_t v57; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v61; // x21
  UISprite_o *v62; // x20
  UILabel_o *skillCheckHelpLb; // x20
  System_String_o *v64; // x0
  UILabel_o *equipChangeHelpLb; // x19
  System_String_o *v66; // x0
  int32_t lateExp[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 exp; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+28h] [xbp-28h] BYREF
  int32_t condUsrLv; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_40FB1A5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, usrEquipData);
    sub_B16FFC(&Grade_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_340/*"#,0"*/, v14);
    sub_B16FFC(&StringLiteral_8607/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, v15);
    sub_B16FFC(&StringLiteral_8604/*"MASTER_EQUIP_EXPLANATION_TXT"*/, v16);
    byte_40FB1A5 = 1;
  }
  condUsrLv = 0;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  *(_QWORD *)lateExp = 0LL;
  exp = 0LL;
  equipStatusInfo = this->fields.equipStatusInfo;
  if ( !equipStatusInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(equipStatusInfo, 0, 0LL);
  this->fields.isChange = 1;
  this->fields.moveEqIdx = moveIdx;
  if ( !usrEquipData )
    goto LABEL_46;
  UserEquipEntity__getEquipInfo(usrEquipData, &condUsrLv, &maxLv, &equipName, &detail, (int32_t *)&exp + 1, 0LL);
  equipIconComp = this->fields.equipIconComp;
  if ( !equipIconComp )
    goto LABEL_46;
  ItemIconComponent__SetEquipItem(equipIconComp, SHIDWORD(exp), 0LL);
  if ( usrEquipData->fields.id != usrEquipId )
    goto LABEL_19;
  v19 = this->fields.equipStatusInfo;
  if ( !v19 )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  equipEffectPrefab = this->fields.equipEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)equipEffectPrefab,
                                             (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.effectObj = v21;
  p_effectObj = &this->fields.effectObj;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectObj,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !this->fields.effectObj )
    goto LABEL_46;
  transform = UnityEngine_GameObject__get_transform(this->fields.effectObj, 0LL);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_46;
  v30 = transform;
  v31 = UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0LL);
  if ( !v30
    || (UnityEngine_Transform__set_parent(v30, v31, 0LL), !*p_effectObj)
    || (v32 = UnityEngine_GameObject__get_transform(*p_effectObj, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_zero(0LL),
        !v32)
    || (UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&v33, 0LL), !*p_effectObj)
    || (v36 = UnityEngine_GameObject__get_transform(*p_effectObj, 0LL),
        *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL),
        !v36) )
  {
LABEL_46:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v36, *(UnityEngine_Vector3_o *)&v37, 0LL);
LABEL_19:
  equipLevelLb = this->fields.equipLevelLb;
  v41 = System_Int32__ToString((int)usrEquipData + 48, 0LL);
  if ( !equipLevelLb )
    goto LABEL_46;
  UILabel__set_text(equipLevelLb, v41, 0LL);
  equipMaxLvLb = this->fields.equipMaxLvLb;
  v43 = System_Int32__ToString((int32_t)&maxLv, 0LL);
  if ( !equipMaxLvLb )
    goto LABEL_46;
  UILabel__set_text(equipMaxLvLb, v43, 0LL);
  equipNameLb = this->fields.equipNameLb;
  if ( !equipNameLb )
    goto LABEL_46;
  UILabel__set_text(equipNameLb, equipName, 0LL);
  UserEquipEntity__getExpInfo(usrEquipData, (int32_t *)&exp, &lateExp[1], (float *)lateExp, 0LL);
  equipExpLb = this->fields.equipExpLb;
  v46 = System_Int32__ToString_38275808((int32_t)&lateExp[1], (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
  if ( !equipExpLb )
    goto LABEL_46;
  UILabel__set_text(equipExpLb, v46, 0LL);
  equipExpBar = (UIProgressBar_o *)this->fields.equipExpBar;
  if ( !equipExpBar )
    goto LABEL_46;
  UIProgressBar__set_value(equipExpBar, *(float *)lateExp, 0LL);
  equipDetailLb = this->fields.equipDetailLb;
  if ( !equipDetailLb )
    goto LABEL_46;
  UILabel__set_text(equipDetailLb, detail, 0LL);
  this->fields.usrEquipEnt = usrEquipData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrEquipEnt,
    (System_Int32_array **)usrEquipData,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v55);
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v57 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v57, 0LL);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v61 = MasterEquipBgImage;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(bg, v61, partyOrganizationAtlas, 0LL);
  }
  else
  {
    v62 = this->fields.bg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v62, 0LL);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8607/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0LL);
  if ( !skillCheckHelpLb )
    goto LABEL_46;
  UILabel__set_text(skillCheckHelpLb, v64, 0LL);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8604/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0LL);
  if ( !equipChangeHelpLb )
    goto LABEL_46;
  UILabel__set_text(equipChangeHelpLb, v66, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setEquipSkillInfo(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserEquipEntity_o *usrEquipEnt; // x0
  System_Int32_array *SkillIdList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  System_Int32_array *v13; // x20
  unsigned __int64 v14; // x21
  UserEquipEntity_o *v15; // x0
  int32_t v16; // w22
  int32_t SkillLv; // w0
  int32_t v18; // w23
  bool IsNew; // w24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  int32_t IconId; // w0
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  int32_t v25; // w25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v28; // x26
  UnityEngine_Transform_o *v29; // x27
  int v30; // s0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Transform_o *v34; // x27
  UnityEngine_Transform_o *v35; // x0
  int v36; // s0
  EquipSkillInfoComponent_o *Component_srcLineSprite; // x26
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  EquipSkillInfoComponent_ClickDelegate_o *v44; // x27

  if ( (byte_40FB1A6 & 1) == 0 )
  {
    sub_B16FFC(&EquipSkillInfoComponent_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___, v5);
    sub_B16FFC(&Method_MasterEquipInfoComponent_setSkillCallBack__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FB1A6 = 1;
  }
  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_22;
  SkillIdList = UserEquipEntity__getSkillIdList(usrEquipEnt, 0LL);
  if ( !SkillIdList )
    goto LABEL_22;
  v12 = *(_QWORD *)&SkillIdList->max_length;
  v13 = SkillIdList;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
        sub_B17100(SkillIdList, v10, v11);
        sub_B170A0();
      }
      v15 = this->fields.usrEquipEnt;
      if ( !v15 )
        break;
      v16 = v13->m_Items[v14 + 1];
      SkillLv = UserEquipEntity__getSkillLv(v15, v14, 0LL);
      if ( !this->fields.usrEquipEnt )
        break;
      v18 = SkillLv;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  v16,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !Entity )
        break;
      IconId = SkillEntity__GetIconId(Entity, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      skillInfoPrefab = this->fields.skillInfoPrefab;
      v25 = IconId;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.skillInfoGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
      if ( !Object )
        break;
      v28 = Object;
      v29 = UnityEngine_GameObject__get_transform(Object, 0LL);
      *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
      if ( !v29 )
        break;
      UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
      v33 = UnityEngine_GameObject__get_transform(v28, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      v34 = v33;
      v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.skillInfoGrid, 0LL);
      if ( !v35 )
        break;
      *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(v35, 0LL);
      if ( !v34 )
        break;
      UnityEngine_Transform__set_localPosition(v34, *(UnityEngine_Vector3_o *)&v36, 0LL);
      Component_srcLineSprite = (EquipSkillInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v28,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v44 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_B170CC(
                                                         EquipSkillInfoComponent_ClickDelegate_TypeInfo,
                                                         v40,
                                                         v41,
                                                         v42,
                                                         v43);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v44,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(Component_srcLineSprite, v14, v16, v18, v25, IsNew, v44, 0LL);
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        return;
    }
LABEL_22:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setSkillCallBack(
        MasterEquipInfoComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x21
  WebViewManager_o *v18; // x0
  SkillLvMaster_o *v19; // x0
  SkillLvEntity_o *v20; // x0
  SkillLvEntity_o *v21; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x19
  Il2CppObject *v28; // x0
  System_String_o *v29; // x19
  CommonUI_o *v30; // x0
  int32_t chargeTurn; // [xsp+0h] [xbp-40h] BYREF
  int32_t v32; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FB1A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_80/*" "*/, v12);
    sub_B16FFC(&StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_B16FFC(&StringLiteral_2508/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_40FB1A7 = 1;
  }
  name = 0LL;
  detail = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              skillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v18 )
    goto LABEL_14;
  v19 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v18,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !v19 )
    goto LABEL_14;
  v20 = SkillLvMaster__GetEntity(v19, skillId, skillLv, 0LL);
  if ( !Entity )
    goto LABEL_14;
  v21 = v20;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, skillLv, 0LL);
  v22 = name;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  v32 = skillLv;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v25 = System_String__Format(v23, v24, 0LL);
  name = System_String__Concat_43746016(v22, (System_String_o *)StringLiteral_80/*" "*/, v25, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
  if ( !v21
    || (v27 = v26,
        chargeTurn = v21->fields.chargeTurn,
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn),
        v29 = System_String__Format(v27, v28, 0LL),
        (v30 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  CommonUI__OpenDetailLongInfoDialog(v30, name, v29, detail, 0, 0, 0LL);
}