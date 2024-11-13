void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BattleSkillConfComponent_StaticFields *static_fields; // x8

  if ( (byte_4B19336 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillConfComponent_TypeInfo, v1, v2);
    byte_4B19336 = 1;
  }
  static_fields = BattleSkillConfComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x4E00000014LL;
  static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
}


void __fastcall BattleSkillConfComponent___ctor(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleSkillConfComponent__CompClose(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(gameObject, 0.0, 1.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillConfComponent__SetSkillConf(
        BattleSkillConfComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool cancelOk,
        bool isSetMinSize,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
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
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  struct BattleSkillInfoData_o **p_skillInfo; // x25
  __int64 v43; // x1
  UnityEngine_Object_o *skillTitleLabel; // x21
  __int64 v45; // x1
  UILabel_o *v46; // x21
  __int64 data; // x0
  __int64 v48; // x1
  UnityEngine_Object_o *okButton; // x21
  BattleServantData_o *ServantData; // x0
  __int64 v51; // x1
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v53; // x21
  const MethodInfo *v54; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  int v58; // w27
  bool v59; // w27
  int32_t NotActTurn; // w4
  __int64 v61; // x1
  UnityEngine_Object_o *v62; // x20
  UnityEngine_Object_o *v63; // x20
  __int64 v64; // x1
  UnityEngine_Object_o *v65; // x19
  UnityEngine_Object_o *cancelButton; // x24
  __int64 v67; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *closeButton; // x24
  __int64 v70; // x1
  Il2CppObject *v71; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x23
  Il2CppObject *Entity; // x24
  SkillLvMaster_o *v74; // x23
  int32_t type; // w27
  struct UILabel_o *skillNameLabel; // x26
  SkillLvEntity_o *v77; // x23
  bool v78; // zf
  Il2CppObject *v79; // x27
  UILabel_o *v80; // x0
  System_String_o *v81; // x1
  Il2CppObject *v82; // x0
  __int64 v83; // x1
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  __int64 v86; // x1
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v90; // x0
  int64_t v91; // x2
  char v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v98; // x8
  struct UILabel_o *v99; // x25
  __int64 v100; // x1
  System_String_o *Detail_40665920; // x26
  BattleSkillConfComponent_c *v102; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v104; // x0
  System_String_o *v105; // x1
  int32_t v106; // w2
  int32_t v107; // w4
  int32_t v108; // w3
  bool activeSelf; // w25
  __int64 v110; // x1
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v112; // x26
  struct BattleSkillInfoData_o *v113; // x8
  struct UILabel_o *v114; // x26
  __int64 v115; // x1
  System_String_o *v116; // x27
  BattleSkillConfComponent_c *v117; // x0
  int32_t *v118; // x8
  UILabel_o *v119; // x0
  System_String_o *v120; // x1
  int32_t v121; // w2
  int32_t v122; // w4
  int32_t v123; // w3
  char v124; // w22
  Il2CppObject *v125; // x22
  UnityEngine_Object_o *v126; // x21
  float v127; // s0
  float v128; // s3
  float v129; // s1
  float v130; // s2
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v132; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v134; // x1
  int32_t skilllv; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector2Int_o v136; // 0:x6.8

  if ( (byte_4B19330 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillConfComponent_TypeInfo, skillInfo, cancelOk);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Collider___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v24, v25);
    sub_1BCA7E0(&int_TypeInfo, v26, v27);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&StringLiteral_3011/*"BATTLE_SKILL_CONF_TITLE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_25243/*"{0}  Lv.{1}"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    byte_4B19330 = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillInfo,
    (int64_t)skillInfo,
    cancelOk,
    isSetMinSize,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  skillTitleLabel = (UnityEngine_Object_o *)this->fields.skillTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( UnityEngine_Object__op_Inequality(skillTitleLabel, 0LL, 0LL) )
  {
    v46 = this->fields.skillTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    data = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3011/*"BATTLE_SKILL_CONF_TITLE"*/, 0LL);
    if ( !v46 )
      goto LABEL_159;
    UILabel__set_text(v46, (System_String_o *)data, 0LL);
  }
  okButton = (UnityEngine_Object_o *)this->fields.okButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  data = UnityEngine_Object__op_Inequality(okButton, 0LL, 0LL);
  if ( (data & 1) != 0 )
  {
    data = (__int64)this->fields.okButton;
    if ( !data )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
  }
  if ( !skillInfo )
    goto LABEL_159;
  if ( skillInfo->fields.isUseSkill )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_159;
    ServantData = BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
    skillIcon = (UnityEngine_Object_o *)this->fields.skillIcon;
    v53 = ServantData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0LL, 0LL) )
    {
      if ( v53 )
      {
        canUseSkill = BattleServantData__canUseSkill(v53, skillInfo->fields.index, 0LL);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v53, 0LL);
        data = (__int64)BattleServantData__getSkillSealSelect(v53, 0LL);
        if ( !data )
          goto LABEL_159;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
          sub_1BCAA44(data, index);
        v58 = *(unsigned __int8 *)(data + index + 32);
        if ( *(_BYTE *)(data + index + 32) )
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v53, index, 0LL);
        v59 = v58 != 0;
        NotActTurn = BattleServantData__getNotActTurn(v53, 0LL);
      }
      else
      {
        v59 = 0;
        NotActTurn = 0;
        SkillSealTurn = 0;
        canUseSkill = 1;
      }
      data = (__int64)this->fields.skillIcon;
      if ( !data )
        goto LABEL_159;
      BattleServantSkillIConComponent__SetSkillInfo(
        (BattleServantSkillIConComponent_o *)data,
        skillInfo,
        canUseSkill,
        SkillSealTurn,
        NotActTurn,
        v59,
        v54);
    }
    cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
    {
      data = (__int64)this->fields.cancelButton;
      if ( !data )
        goto LABEL_159;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_159;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, cancelOk, 0LL);
      }
    }
    closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( UnityEngine_Object__op_Inequality(closeButton, 0LL, 0LL) )
    {
      data = (__int64)this->fields.closeButton;
      if ( !data )
        goto LABEL_159;
      v71 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)data,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v71, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !v71 )
          goto LABEL_159;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v71, cancelOk, 0LL);
      }
    }
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                 *p_skillInfo,
                 (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v72 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v72,
                     data,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)data,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v74 = (SkillLvMaster_o *)data;
              data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                       *p_skillInfo,
                       (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v74 )
                {
                  data = (__int64)SkillLvMaster__GetEntity(v74, data, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_154;
                  if ( !*p_skillInfo )
                    goto LABEL_159;
                  type = (*p_skillInfo)->fields.type;
                  skillNameLabel = this->fields.skillNameLabel;
                  v77 = (SkillLvEntity_o *)data;
                  data = (__int64)SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
                  v78 = type == 21;
                  v79 = (Il2CppObject *)data;
                  if ( v78 )
                  {
                    if ( !skillNameLabel )
                      goto LABEL_159;
                    v80 = skillNameLabel;
                    v81 = (System_String_o *)v79;
                  }
                  else
                  {
                    if ( !*p_skillInfo )
                      goto LABEL_159;
                    skilllv = (*p_skillInfo)->fields.skilllv;
                    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
                    data = (__int64)System_String__Format_62415592(
                                      (System_String_o *)StringLiteral_25243/*"{0}  Lv.{1}"*/,
                                      v79,
                                      v82,
                                      0LL);
                    if ( !skillNameLabel )
                      goto LABEL_159;
                    v81 = (System_String_o *)data;
                    v80 = skillNameLabel;
                  }
                  UILabel__set_text(v80, v81, 0LL);
                  p_skillStrengthStatus = &this->fields.skillStrengthStatus;
                  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
                  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
                  {
                    data = (__int64)*p_skillStrengthStatus;
                    if ( !*p_skillStrengthStatus )
                      goto LABEL_159;
                    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)data,
                                                           0LL);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
                    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
                  }
                  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v48);
                  data = (__int64)this->fields.skillNameLabel;
                  if ( data )
                  {
                    PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
                    data = (__int64)BaseMonoBehaviour__createObject_38952608(
                                      (BaseMonoBehaviour_o *)this,
                                      PATH,
                                      transform,
                                      0LL,
                                      0LL);
                    if ( data )
                    {
                      v90 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)data,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                      *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v90;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&this->fields.skillStrengthStatus,
                        (int64_t)v90,
                        v91,
                        v92,
                        v93,
                        v94,
                        v95,
                        v96);
                      data = (__int64)*p_skillStrengthStatus;
                      if ( *p_skillStrengthStatus )
                      {
                        v136 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                        ServantSkillStrengthStatus__Set(
                          (ServantSkillStrengthStatus_o *)data,
                          this->fields.skillNameLabel,
                          skillInfo->fields.strengthStatus,
                          skillInfo->fields.skillRecord,
                          34,
                          0,
                          v136,
                          0LL);
                        skillConfLabel = (UIWidget_o *)this->fields.skillConfLabel;
                        data = (__int64)BattleSkillConfComponent_TypeInfo;
                        if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v48);
                        if ( skillConfLabel )
                        {
                          UIWidget__set_height(
                            skillConfLabel,
                            BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                            0LL);
                          v98 = this->fields.skillInfo;
                          if ( v98 )
                          {
                            if ( v77 )
                            {
                              v99 = this->fields.skillConfLabel;
                              Detail_40665920 = SkillLvEntity__getDetail_40665920(v77, v98->fields.skilllv, 0, 0LL);
                              if ( isSetMinSize )
                              {
                                v102 = BattleSkillConfComponent_TypeInfo;
                                if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v100);
                                  v102 = BattleSkillConfComponent_TypeInfo;
                                }
                                p_DETAIL_FONT_SIZE = &v102->static_fields->DETAIL_FONT_SIZE;
                                v104 = v99;
                                v105 = Detail_40665920;
                                v106 = *p_DETAIL_FONT_SIZE;
                                v107 = p_DETAIL_FONT_SIZE[2];
                                v108 = *p_DETAIL_FONT_SIZE;
                              }
                              else
                              {
                                v106 = 22;
                                v104 = v99;
                                v105 = Detail_40665920;
                                v108 = 0;
                                v107 = 0;
                              }
                              WrapControlText__textBBCodeAdjust(v104, v105, v106, v108, v107, 0LL);
                              data = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
                              if ( data )
                              {
                                activeSelf = UnityEngine_GameObject__get_activeSelf(
                                               (UnityEngine_GameObject_o *)data,
                                               0LL);
                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                                if ( data )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
                                  data = (__int64)this->fields.scrollView;
                                  if ( data )
                                  {
                                    UIScrollView__ResetPosition((UIScrollView_o *)data, 0LL);
                                    data = (__int64)this->fields.skillConfLabel;
                                    if ( data )
                                    {
                                      UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
                                      data = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
                                      if ( data )
                                      {
                                        UnityEngine_GameObject__SetActive(
                                          (UnityEngine_GameObject_o *)data,
                                          activeSelf,
                                          0LL);
                                        data = (__int64)this->fields.skillConfLabel;
                                        if ( data )
                                        {
                                          data = (__int64)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)data,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                          if ( data )
                                          {
                                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0LL);
                                            useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v110);
                                            if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
                                            {
                                              data = (__int64)BattleSkillConfComponent_TypeInfo;
                                              v112 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                              if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v48);
                                              if ( !v112 )
                                                goto LABEL_159;
                                              UIWidget__set_height(
                                                v112,
                                                BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                0LL);
                                              v113 = this->fields.skillInfo;
                                              if ( !v113 )
                                                goto LABEL_159;
                                              v114 = this->fields.useCondSkillConfLabel;
                                              v116 = SkillLvEntity__getDetail_40665920(
                                                       v77,
                                                       v113->fields.skilllv,
                                                       0,
                                                       0LL);
                                              if ( isSetMinSize )
                                              {
                                                v117 = BattleSkillConfComponent_TypeInfo;
                                                if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v115);
                                                  v117 = BattleSkillConfComponent_TypeInfo;
                                                }
                                                v118 = &v117->static_fields->DETAIL_FONT_SIZE;
                                                v119 = v114;
                                                v120 = v116;
                                                v121 = *v118;
                                                v122 = v118[2];
                                                v123 = *v118;
                                              }
                                              else
                                              {
                                                v121 = 22;
                                                v119 = v114;
                                                v120 = v116;
                                                v123 = 0;
                                                v122 = 0;
                                              }
                                              WrapControlText__textBBCodeAdjust(v119, v120, v121, v123, v122, 0LL);
                                              data = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
                                              if ( !data )
                                                goto LABEL_159;
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)data,
                                                1,
                                                0LL);
                                              data = (__int64)this->fields.useCondRoot;
                                              if ( !data )
                                                goto LABEL_159;
                                              data = UnityEngine_GameObject__get_activeSelf(
                                                       (UnityEngine_GameObject_o *)data,
                                                       0LL);
                                              if ( !this->fields.useCondRoot )
                                                goto LABEL_159;
                                              v124 = data;
                                              UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
                                              data = (__int64)this->fields.useCondScrollView;
                                              if ( !data )
                                                goto LABEL_159;
                                              UIScrollView__ResetPosition((UIScrollView_o *)data, 0LL);
                                              data = (__int64)this->fields.useCondSkillConfLabel;
                                              if ( !data )
                                                goto LABEL_159;
                                              UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
                                              data = (__int64)this->fields.useCondRoot;
                                              if ( !data )
                                                goto LABEL_159;
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)data,
                                                v124 & 1,
                                                0LL);
                                              data = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
                                              if ( !data )
                                                goto LABEL_159;
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)data,
                                                activeSelf,
                                                0LL);
                                              data = (__int64)this->fields.useCondSkillConfLabel;
                                              if ( !data )
                                                goto LABEL_159;
                                              data = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)data,
                                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                              if ( !data )
                                                goto LABEL_159;
                                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0LL);
                                            }
                                            if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
                                            {
                                              data = (__int64)this->fields.okButton;
                                              if ( !data )
                                                goto LABEL_159;
                                              data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)data,
                                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
                                              if ( !data )
                                                goto LABEL_159;
                                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 1, 0LL);
                                              data = (__int64)this->fields.okButton;
                                              if ( !data )
                                                goto LABEL_159;
                                              v125 = UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)data,
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                              if ( v53 )
                                              {
                                                data = (__int64)this->fields.okButton;
                                                if ( !data )
                                                  goto LABEL_159;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  1,
                                                  0LL);
                                                if ( skillInfo->fields.chargeTurn > 0
                                                  || (data = BattleServantData__canUseSkill(
                                                               v53,
                                                               skillInfo->fields.index,
                                                               0LL),
                                                      (data & 1) == 0) )
                                                {
LABEL_146:
                                                  this->fields.isPlaySkill = 0;
                                                  if ( !v125 )
                                                    goto LABEL_159;
                                                  v128 = 1.0;
                                                  v127 = 0.5;
                                                  goto LABEL_148;
                                                }
                                              }
                                              else
                                              {
                                                v126 = (UnityEngine_Object_o *)this->fields.okButton;
                                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
                                                if ( !UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
                                                {
LABEL_149:
                                                  skillChargeLabel = (UnityEngine_Object_o *)this->fields.skillChargeLabel;
                                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
                                                  if ( !UnityEngine_Object__op_Inequality(skillChargeLabel, 0LL, 0LL) )
                                                    goto LABEL_154;
                                                  v132 = this->fields.skillChargeLabel;
                                                  data = (__int64)System_Int32__ToString((int)v77 + 24, 0LL);
                                                  if ( v132 )
                                                  {
                                                    UILabel__set_text(v132, (System_String_o *)data, 0LL);
                                                    goto LABEL_154;
                                                  }
                                                  goto LABEL_159;
                                                }
                                                data = (__int64)this->fields.okButton;
                                                if ( !data )
                                                  goto LABEL_159;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  1,
                                                  0LL);
                                                data = BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
                                                if ( (int)data > 0 )
                                                  goto LABEL_146;
                                                data = BattleSkillInfoData__IsOpenCond(skillInfo, 0LL);
                                                if ( (data & 1) == 0 )
                                                  goto LABEL_146;
                                              }
                                              this->fields.isPlaySkill = 1;
                                              if ( !v125 )
                                                goto LABEL_159;
                                              v127 = 1.0;
                                              v128 = 1.0;
LABEL_148:
                                              v129 = v127;
                                              v130 = v127;
                                              UIButtonColor__set_defaultColor(
                                                (UIButtonColor_o *)v125,
                                                *(UnityEngine_Color_o *)&v127,
                                                0LL);
                                              goto LABEL_149;
                                            }
LABEL_154:
                                            useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
                                            if ( UnityEngine_Object__op_Inequality(useCondRoot, 0LL, 0LL) )
                                              BattleSkillConfComponent__SetUseCond(this, v134);
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
LABEL_159:
    sub_1BCAA3C(data, v48);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_159;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_159;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v62 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
  if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_159;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v63 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_159;
    v65 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
    UnityEngine_Object__Destroy_70154244(v65, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
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
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int64_t skillInfo; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x20
  __int64 v34; // x1
  UnityEngine_Object_o *useCondItemIcon; // x20
  UISprite_o *v36; // x20
  int32_t monitor; // w21
  int32_t v38; // w0
  __int64 v39; // x1
  int32_t num; // w20
  __int64 v41; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t v43; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v45; // x1
  UnityEngine_Object_o *v46; // x21
  UserItemEntity_o *v47; // x20
  bool v48; // w0
  UISprite_o *v49; // x21
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  System_String_o *v52; // x22
  ItemMaster_o *v53; // x20
  UISprite_o *v54; // x20
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x21
  UnityEngine_Object_o *useCondItemCount; // x21
  UILabel_o *v59; // x21
  __int64 v60; // x1
  System_String_o *v61; // x22
  Il2CppObject *v62; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v64; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  __int64 v66; // x1
  UISprite_o *v67; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  __int64 v69; // x1
  UISprite_o *v70; // x19
  int32_t v71; // [xsp+0h] [xbp-40h] BYREF
  int32_t CondItemNumber; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19333 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v20, v21);
    sub_1BCA7E0(&string_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_21625/*"menu_txt_remaining"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_21626/*"menu_txt_spend"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_2938/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_23597/*"skill_item_{0}"*/, v30, v31);
    byte_4B19333 = 1;
  }
  entity = 0LL;
  CondItemNumber = 0;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_88;
  if ( !BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)skillInfo, 0LL) )
  {
    skillInfo = (int64_t)this->fields.useCondRoot;
    if ( skillInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 0, 0LL);
      skillInfo = (int64_t)this->fields.noCondRoot;
      if ( skillInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return;
      }
    }
    goto LABEL_88;
  }
  skillInfo = (int64_t)this->fields.noCondRoot;
  if ( !skillInfo )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 0, 0LL);
  skillInfo = (int64_t)this->fields.useCondRoot;
  if ( !skillInfo )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_88;
  skillInfo = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_88;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v33 )
    goto LABEL_88;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v33,
          &entity,
          skillInfo,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_28;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  skillInfo = UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_88;
    v36 = this->fields.useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    skillInfo = AtlasManager__SetItem(v36, monitor, 0LL);
  }
  if ( !entity )
    goto LABEL_88;
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_88;
    v38 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v38 >= 9999 )
      num = 9999;
    else
      num = v38;
  }
  else
  {
LABEL_28:
    skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_88;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)skillInfo,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
    skillInfo = NetworkManager__get_UserId(0LL);
    if ( !this->fields.skillInfo )
      goto LABEL_88;
    v43 = skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !MasterData_object )
      goto LABEL_88;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, v43, skillInfo, 0LL);
    v46 = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
    v47 = EntityDefinitely;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
    v48 = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
    if ( v47 )
    {
      if ( v48 )
      {
        skillInfo = (int64_t)UserItemEntity__getItemInfo(v47, 0LL);
        v49 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          v71 = *(_DWORD *)(skillInfo + 40);
          v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
          v52 = System_String__Format((System_String_o *)StringLiteral_23597/*"skill_item_{0}"*/, v50, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v51);
          AtlasManager__SetEventSprite(v49, v52, 0LL);
        }
        else
        {
          if ( !v49 )
            goto LABEL_88;
          UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
        }
      }
      if ( v47->fields.num >= 9999 )
        num = 9999;
      else
        num = v47->fields.num;
    }
    else
    {
      if ( v48 )
      {
        skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !skillInfo )
          goto LABEL_88;
        skillInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)skillInfo,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this->fields.skillInfo )
          goto LABEL_88;
        v53 = (ItemMaster_o *)skillInfo;
        skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
        if ( !v53 )
          goto LABEL_88;
        skillInfo = (int64_t)ItemMaster__GetItemData(v53, skillInfo, 0LL);
        v54 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          v71 = *(_DWORD *)(skillInfo + 40);
          v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
          v57 = System_String__Format((System_String_o *)StringLiteral_23597/*"skill_item_{0}"*/, v55, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v56);
          AtlasManager__SetEventSprite(v54, v57, 0LL);
        }
        else
        {
          if ( !v54 )
            goto LABEL_88;
          UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
        }
      }
      num = 0;
    }
  }
  useCondItemCount = (UnityEngine_Object_o *)this->fields.useCondItemCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Inequality(useCondItemCount, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_88;
    v59 = this->fields.useCondItemCount;
    if ( BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0LL) )
    {
      skillInfo = (int64_t)BasicHelper__ToCommaString(num, 0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      v71 = num;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
      skillInfo = (int64_t)System_String__Format(v61, v62, 0LL);
    }
    method = (const MethodInfo *)skillInfo;
    if ( !v59 )
      goto LABEL_88;
    UILabel__set_text(v59, (System_String_o *)skillInfo, 0LL);
    skillInfo = (int64_t)this->fields.useCondItemCount;
    if ( !skillInfo )
      goto LABEL_88;
    UILabel__SetCondensedScale((UILabel_o *)skillInfo, 40, 0LL);
  }
  useCondItemConsumeCount = (UnityEngine_Object_o *)this->fields.useCondItemConsumeCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(useCondItemConsumeCount, 0LL, 0LL) )
    goto LABEL_75;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo
    || (v64 = this->fields.useCondItemConsumeCount,
        CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0LL),
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&CondItemNumber, 0LL),
        !v64) )
  {
LABEL_88:
    sub_1BCAA3C(skillInfo, method);
  }
  UILabel__set_text(v64, (System_String_o *)skillInfo, 0LL);
LABEL_75:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v67 = this->fields.useCondItemLess;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v66);
    AtlasManager__SetEventSprite(v67, (System_String_o *)StringLiteral_21625/*"menu_txt_remaining"*/, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v70 = this->fields.useCondItemConsume;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v69);
    AtlasManager__SetEventSprite(v70, (System_String_o *)StringLiteral_21626/*"menu_txt_spend"*/, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *skillConfLabel; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_4B19334 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19334 = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_12;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                skillConfLabel,
                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !skillConfLabel )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
  useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
  {
    skillConfLabel = (UnityEngine_Component_o *)this->fields.useCondSkillConfLabel;
    if ( skillConfLabel )
    {
      skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    skillConfLabel,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(skillConfLabel, method);
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19335 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17676/*"btn_close"*/, method, v2);
    byte_4B19335 = 1;
  }
  return (System_String_o *)StringLiteral_17676/*"btn_close"*/;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *target; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  __int64 v13; // x1
  Il2CppObject *v14; // x20

  if ( (byte_4B19331 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19331 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    v10 = this->fields.target;
    if ( !v10 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v10,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_20;
      BattlePerformancePlayer__onClickSkillCancel((BattlePerformancePlayer_o *)Component_object, 0LL);
    }
    v10 = this->fields.target;
    if ( v10 )
    {
      v14 = UnityEngine_GameObject__GetComponent_object_(
              v10,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
      if ( ((unsigned __int8)v10 & 1) == 0 )
        goto LABEL_18;
      if ( v14 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v14, 0LL);
LABEL_18:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_20:
    sub_1BCAA3C(v10, v9);
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  UnityEngine_Object_o *target; // x20
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  __int64 v17; // x1
  Il2CppObject *v18; // x20
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4B19332 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSkillConfComponent_onClickOK__, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B19332 = 1;
  }
  if ( this->fields.isPlaySkill )
  {
    if ( !this->fields.isPlayedSe )
    {
      v10 = Method_BattleSkillConfComponent_onClickOK__;
      if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCA7F8(Method_BattleSkillConfComponent_onClickOK__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
    {
      v14 = this->fields.target;
      if ( !v14 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v14,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_27;
        BattlePerformancePlayer__onClickSkillOK(
          (BattlePerformancePlayer_o *)Component_object,
          this->fields.skillInfo,
          0LL);
      }
      v14 = this->fields.target;
      if ( !v14 )
LABEL_27:
        sub_1BCAA3C(v14, v13);
      v18 = UnityEngine_GameObject__GetComponent_object_(
              v14,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
        if ( v18 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v18, this->fields.skillInfo, 0LL);
          return;
        }
        goto LABEL_27;
      }
    }
  }
  else
  {
    v19 = Method_BattleSkillConfComponent_onClickOK__;
    if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1BCA7F8(Method_BattleSkillConfComponent_onClickOK__);
    v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
    this->fields.isPlayedSe = 1;
  }
}


void __fastcall BattleSkillConfComponent__setInit(
        BattleSkillConfComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.data = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}