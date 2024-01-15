void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1
  EventRewardAssistConfirmDialog_c *v11; // x8

  if ( (byte_40F613E & 1) == 0 )
  {
    sub_B16FFC(&EventRewardAssistConfirmDialog_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18516/*"event_skill_icon_{0}{1:D2}"*/, v8);
    byte_40F613E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRewardAssistConfirmDialog_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18516/*"event_skill_icon_{0}{1:D2}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18516/*"event_skill_icon_{0}{1:D2}"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = EventRewardAssistConfirmDialog_TypeInfo;
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 270;
  v11->static_fields->TITLE_NAME_LABEL_MAX_WIDTH = 620;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F613D & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F613D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__Close(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__EndOpen(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall EventRewardAssistConfirmDialog__Init(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__OnClickCancel(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_40F613B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F613B = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B170D4();
    System_Action_int___Invoke(onDecide, 0, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__OnClickDecide(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_40F613A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F613A = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B170D4();
    System_Action_int___Invoke(onDecide, 1, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__Open(
        EventRewardAssistConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x8
  __int64 v44; // x9
  Il2CppObject *v45; // x27
  int32_t v46; // w21
  WebViewManager_o *Instance; // x0
  AssistMaster_o *MasterData_WarQuestSelectionMaster; // x0
  AssistMaster_o *v49; // x25
  System_Int32_array **CurrentLevelEntity; // x0
  AssistEntity_o **v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **AssistEntity; // x0
  AssistEntity_o **v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Action_int__o **p_onDecide; // x25
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x8
  int32_t v74; // w24
  int v75; // w28
  WebViewManager_o *v76; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x0
  WarEntity_o *Entity; // x0
  AssistEntity_o *v79; // x8
  SkillEntity_o *v80; // x24
  int32_t skillId; // w25
  WebViewManager_o *v82; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // x0
  WarEntity_o *v84; // x0
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v86; // x25
  System_String_o *Name; // x0
  UILabel_o *combineSkillNameLabel; // x24
  System_String_o *v89; // x0
  UILabel_o *v90; // x24
  UILabel_o *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  System_Action_o *v96; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v98; // x24
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v102; // x24
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  AssistEntity_o *v105; // x0
  UILabel_o *skillInfoLabel; // x22
  System_String_o *Detail; // x0
  struct UILabel_o *v108; // x8
  AssistEntity_o *v109; // x0
  UILabel_o *combineSkillInfoLabel; // x21
  System_String_o *v111; // x0
  struct UILabel_o *v112; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v114; // x0
  System_String_o *v115; // x0
  UILabel_o *v116; // x0
  UILabel_o *detailMsgLabel; // x20
  System_String_o *v118; // x0
  struct UICrossNarrowLabel_o *v119; // x8
  System_String_o *v120; // x0
  UILabel_o *confirmMsgLabel; // x20
  System_String_o *v122; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v124; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v126; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  System_Action_o *v132; // x20
  int skillLv; // [xsp+Ch] [xbp-64h]
  int v134; // [xsp+18h] [xbp-58h] BYREF
  int v135; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40F6139 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, shopEnt);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&AtlasManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_AssistMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_EventRewardAssistConfirmDialog_EndOpen__, v13);
    sub_B16FFC(&EventRewardAssistConfirmDialog_TypeInfo, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__, v18);
    sub_B16FFC(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_8348/*"LEVEL_INFO"*/, v20);
    sub_B16FFC(&StringLiteral_5678/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, v21);
    sub_B16FFC(&StringLiteral_5677/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, v22);
    sub_B16FFC(&StringLiteral_5680/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v23);
    sub_B16FFC(&StringLiteral_3255/*"COMMON_CONFIRM_NO"*/, v24);
    sub_B16FFC(&StringLiteral_3258/*"COMMON_CONFIRM_YES"*/, v25);
    sub_B16FFC(&StringLiteral_5676/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/, v26);
    byte_40F6139 = 1;
  }
  v27 = sub_B170CC(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, shopEnt, onDecide, method, v4);
  EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(
    (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_49;
  *(_QWORD *)(v27 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v27 + 24) = shopEnt;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)shopEnt, v34, v35, v36, v37, v38, v39);
  v43 = *(_QWORD *)(v27 + 24);
  if ( !v43 )
    goto LABEL_49;
  v44 = *(_QWORD *)(v43 + 56);
  if ( !v44 )
    goto LABEL_49;
  if ( !*(_DWORD *)(v44 + 24) )
  {
    sub_B17100(v40, v41, v42);
    sub_B170A0();
  }
  v45 = *(Il2CppObject **)(v43 + 104);
  v46 = *(_DWORD *)(v44 + 32);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_WarQuestSelectionMaster = (AssistMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_49;
  v49 = MasterData_WarQuestSelectionMaster;
  CurrentLevelEntity = (System_Int32_array **)AssistMaster__GetCurrentLevelEntity(
                                                MasterData_WarQuestSelectionMaster,
                                                v46,
                                                0LL);
  *(_QWORD *)(v27 + 32) = CurrentLevelEntity;
  v51 = (AssistEntity_o **)(v27 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 32), CurrentLevelEntity, v52, v53, v54, v55, v56, v57);
  if ( !*(_QWORD *)(v27 + 32) )
    goto LABEL_49;
  AssistEntity = (System_Int32_array **)AssistMaster__GetAssistEntity(
                                          v49,
                                          v46,
                                          *(_DWORD *)(*(_QWORD *)(v27 + 32) + 32LL) + 1,
                                          0LL);
  *(_QWORD *)(v27 + 40) = AssistEntity;
  v59 = (AssistEntity_o **)(v27 + 40);
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 40), AssistEntity, v60, v61, v62, v63, v64, v65);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = *(_QWORD *)(v27 + 32);
  if ( v73 && *v59 )
  {
    v74 = *(_DWORD *)(v73 + 40);
    v75 = *(_DWORD *)(v73 + 44);
    v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v76 )
    {
      v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v76,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( v77 )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v77,
                   v74,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v79 = *v59;
        if ( *v59 )
        {
          v80 = (SkillEntity_o *)Entity;
          skillId = v79->fields.skillId;
          skillLv = v79->fields.skillLv;
          v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v82 )
          {
            v83 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)v82,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( v83 )
            {
              v84 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      v83,
                      skillId,
                      (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v80 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v86 = (SkillEntity_o *)v84;
                Name = SkillEntity__getName(v80, 0LL);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, Name, 0LL);
                  if ( v86 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    v89 = SkillEntity__getName(v86, 0LL);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, v89, 0LL);
                      v90 = (UILabel_o *)this->fields.skillNameLabel;
                      if ( (BYTE3(EventRewardAssistConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      }
                      if ( v90 )
                      {
                        UILabel__SetCondensedScale(
                          v90,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0LL);
                        v91 = (UILabel_o *)this->fields.combineSkillNameLabel;
                        if ( v91 )
                        {
                          UILabel__SetCondensedScale(
                            v91,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0LL);
                          v96 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v92, v93, v94, v95);
                          System_Action___ctor(
                            v96,
                            (Il2CppObject *)v27,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          }
                          AtlasManager__LoadEventUI(v96, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LEVEL_INFO"*/, 0LL);
                          v135 = v75;
                          v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
                          v100 = System_String__Format(v98, v99, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, v100, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v102 = LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v134 = skillLv;
                            v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v134);
                            v104 = System_String__Format(v102, v103, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, v104, 0LL);
                              v105 = *v51;
                              if ( *v51 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Detail = AssistEntity__GetDetail(v105, 0, 0LL);
                                v108 = this->fields.skillInfoLabel;
                                if ( v108 )
                                {
                                  WrapControlText__textAdjust(skillInfoLabel, Detail, v108->fields.mFontSize, 0, 0, 0LL);
                                  v109 = *v59;
                                  if ( *v59 )
                                  {
                                    combineSkillInfoLabel = this->fields.combineSkillInfoLabel;
                                    v111 = AssistEntity__GetDetail(v109, 0, 0LL);
                                    v112 = this->fields.combineSkillInfoLabel;
                                    if ( v112 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        v111,
                                        v112->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v114 = LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      v115 = System_String__Format(v114, v45, 0LL);
                                      if ( titleLabel )
                                      {
                                        UILabel__set_text(titleLabel, v115, 0LL);
                                        v116 = this->fields.titleLabel;
                                        if ( v116 )
                                        {
                                          UILabel__SetCondensedScale(
                                            v116,
                                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->TITLE_NAME_LABEL_MAX_WIDTH,
                                            0LL);
                                          detailMsgLabel = this->fields.detailMsgLabel;
                                          v118 = LocalizationManager__Get((System_String_o *)StringLiteral_5678/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, 0LL);
                                          v119 = this->fields.skillNameLabel;
                                          if ( v119 )
                                          {
                                            v120 = System_String__Format(v118, (Il2CppObject *)v119->fields.mText, 0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, v120, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              v122 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_5676/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                       0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, v122, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                v124 = LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3258/*"COMMON_CONFIRM_YES"*/,
                                                         0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, v124, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  v126 = LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3255/*"COMMON_CONFIRM_NO"*/,
                                                           0LL);
                                                  if ( cancelLabel )
                                                  {
                                                    UILabel__set_text(cancelLabel, v126, 0LL);
                                                    gameObject = UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
                                                    if ( gameObject )
                                                    {
                                                      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                                      this->fields.state = 2;
                                                      v132 = (System_Action_o *)sub_B170CC(
                                                                                  System_Action_TypeInfo,
                                                                                  v128,
                                                                                  v129,
                                                                                  v130,
                                                                                  v131);
                                                      System_Action___ctor(
                                                        v132,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v132, 0, 0LL);
                                                      return;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_B170D4();
  }
  if ( !*p_onDecide )
    goto LABEL_49;
  System_Action_int___Invoke(*p_onDecide, 0, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
}


System_String_o *__fastcall EventRewardAssistConfirmDialog__get_closeBtnPath(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F613C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_40F613C = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
}


void __fastcall EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(
        EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog___c__DisplayClass22_0___Open_b__0(
        EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  EventRewardAssistConfirmDialog_c *v7; // x0
  struct ShopEntity_o *shopEnt; // x8
  System_String_o *ASSIST_SKILL_ICON; // x21
  __int64 v10; // x0
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  struct EventRewardAssistConfirmDialog_o *v15; // x8
  struct ShopEntity_o *v16; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *v18; // x21
  __int64 v19; // x0
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v21; // x19
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // [xsp+0h] [xbp-40h] BYREF
  int32_t v25; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F7031 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&EventRewardAssistConfirmDialog_TypeInfo, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    byte_40F7031 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  skillIcon = _4__this->fields.skillIcon;
  v7 = EventRewardAssistConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAssistConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
    v7 = EventRewardAssistConfirmDialog_TypeInfo;
  }
  shopEnt = this->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_16;
  ASSIST_SKILL_ICON = v7->static_fields->ASSIST_SKILL_ICON;
  eventId = shopEnt->fields.eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  beforeAssistEnt = this->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_16;
  v12 = (Il2CppObject *)v10;
  imageId = beforeAssistEnt->fields.imageId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  v14 = System_String__Format_43739268(ASSIST_SKILL_ICON, v12, v13, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(skillIcon, v14, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15
    || (v16 = this->fields.shopEnt) == 0LL
    || (combineSkillIcon = v15->fields.combineSkillIcon,
        v18 = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v25 = v16->fields.eventId,
        v19 = j_il2cpp_value_box_0(int_TypeInfo, &v25),
        (afterAssistEnt = this->fields.afterAssistEnt) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  v21 = (Il2CppObject *)v19;
  v24 = afterAssistEnt->fields.imageId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = System_String__Format_43739268(v18, v21, v22, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v23, 0LL);
}