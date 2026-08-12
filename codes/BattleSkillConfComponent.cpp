void BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  if ( (byte_597428B & 1) == 0 )
  {
    sub_2213A60(&BattleSkillConfComponent_TypeInfo);
    byte_597428B = 1;
  }
  *BattleSkillConfComponent_TypeInfo->static_fields = (struct BattleSkillConfComponent_StaticFields)0x4E00000014LL;
}


void BattleSkillConfComponent___ctor(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleSkillConfComponent__CompClose(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  TweenAlpha__Begin(gameObject, 0.0, 1.0, 0);
}


void BattleSkillConfComponent__OnClick(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0) )
    BattleSkillConfComponent__onClickCancel(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleSkillConfComponent__SetSkillConf(
        BattleSkillConfComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool cancelOk,
        bool isSetMinSize,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleSkillInfoData_o **p_skillInfo; // x23
  __int64 v13; // x1
  UnityEngine_Object_o *skillTitleLabel; // x21
  __int64 v15; // x1
  UILabel_o *v16; // x21
  __int64 data; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *okButton; // x21
  BattleServantData_o *ServantData; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *skillIcon; // x25
  BattleServantData_o *v23; // x21
  bool canUseSkill; // w25
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  bool v27; // w27
  int32_t NotActTurn; // w4
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Object_o *v31; // x20
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x19
  UnityEngine_Object_o *cancelButton; // x25
  __int64 v35; // x1
  Il2CppObject *Component_object; // x25
  UnityEngine_Object_o *closeButton; // x25
  __int64 v38; // x1
  Il2CppObject *v39; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x24
  SkillEntity_o *Entity; // x25
  SkillLvMaster_o *v42; // x24
  SkillLvEntity_o *v43; // x0
  SkillLvEntity_o *v44; // x24
  System_String_o *v45; // x26
  struct BattleSkillInfoData_o *v46; // x8
  struct UILabel_o *skillNameLabel; // x27
  UILabel_o *v48; // x0
  System_String_o *v49; // x1
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x26
  UnityEngine_Object_o *skillStrengthStatus; // x27
  __int64 v54; // x1
  UnityEngine_Object_o *gameObject; // x27
  System_String_o *PATH; // x27
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  UIWidget_o *skillConfLabel; // x26
  struct UILabel_o *v66; // x26
  struct BattleSkillInfoData_o *v67; // x8
  System_String_o *Detail_49901180; // x0
  __int64 v69; // x1
  BattleSkillConfComponent_c *v70; // x8
  System_String_o *v71; // x27
  UILabel_o *v72; // x0
  System_String_o *v73; // x1
  int32_t DETAIL_FONT_SIZE; // w2
  int32_t v75; // w3
  bool activeSelf; // w26
  __int64 v77; // x1
  UnityEngine_Object_o *useCondSkillConfLabel; // x27
  UIWidget_o *v79; // x27
  struct BattleSkillInfoData_o *v80; // x8
  struct UILabel_o *v81; // x22
  System_String_o *v82; // x0
  __int64 v83; // x1
  BattleSkillConfComponent_c *v84; // x8
  System_String_o *v85; // x23
  UILabel_o *v86; // x0
  System_String_o *v87; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  struct UILabel_o *v90; // x22
  char v91; // w22
  UnityEngine_Object_o *v92; // x23
  UIButtonColor_o *v93; // x22
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v96; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v98; // x1
  int32_t skilllv; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974285 & 1) == 0 )
  {
    sub_2213A60(&BattleSkillConfComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_2995/*"BATTLE_SKILL_CONF_TITLE"*/);
    sub_2213A60(&StringLiteral_26489/*"{0}  Lv.{1}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974285 = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    (System_String_o *)cancelOk,
    (System_String_o *)isSetMinSize,
    (int32_t)method,
    v5,
    v6,
    v7);
  skillTitleLabel = (UnityEngine_Object_o *)this->fields.skillTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(skillTitleLabel, 0, 0) )
  {
    v16 = this->fields.skillTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    data = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_SKILL_CONF_TITLE"*/, 0);
    if ( !v16 )
      goto LABEL_163;
    UILabel__set_text(v16, (System_String_o *)data, 0);
  }
  okButton = (UnityEngine_Object_o *)this->fields.okButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  data = UnityEngine_Object__op_Inequality(okButton, 0, 0);
  if ( (data & 1) != 0 )
  {
    data = (__int64)this->fields.okButton;
    if ( !data )
      goto LABEL_163;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
  }
  if ( !skillInfo )
    goto LABEL_163;
  if ( skillInfo->fields.isUseSkill )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_163;
    ServantData = BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0);
    skillIcon = (UnityEngine_Object_o *)this->fields.skillIcon;
    v23 = ServantData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0, 0) )
    {
      if ( v23 )
      {
        canUseSkill = BattleServantData__canUseSkill(v23, skillInfo->fields.index, 0);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v23, 0);
        data = (__int64)BattleServantData__getSkillSealSelect(v23, 0);
        if ( !data )
          goto LABEL_163;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
          sub_2213CE4(data);
        v27 = *(_BYTE *)(data + index + 32) != 0;
        if ( *(_BYTE *)(data + index + 32) )
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v23, index, 0);
        NotActTurn = BattleServantData__getNotActTurn(v23, 0);
      }
      else
      {
        v27 = 0;
        NotActTurn = 0;
        SkillSealTurn = 0;
        canUseSkill = 1;
      }
      data = (__int64)this->fields.skillIcon;
      if ( !data )
        goto LABEL_163;
      BattleServantSkillIConComponent__SetSkillInfo(
        (BattleServantSkillIConComponent_o *)data,
        skillInfo,
        canUseSkill,
        SkillSealTurn,
        NotActTurn,
        v27,
        0);
    }
    cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(cancelButton, 0, 0) )
    {
      data = (__int64)this->fields.cancelButton;
      if ( !data )
        goto LABEL_163;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( (data & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_163;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, cancelOk, 0);
      }
    }
    closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(closeButton, 0, 0) )
    {
      data = (__int64)this->fields.closeButton;
      if ( !data )
        goto LABEL_163;
      v39 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)data,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
      if ( (data & 1) != 0 )
      {
        if ( !v39 )
          goto LABEL_163;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v39, cancelOk, 0);
      }
    }
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        data = (__int64)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))(*p_skillInfo)->klass->vtable._5_get_skillId.methodPtr)(
                          *p_skillInfo,
                          *p_skillInfo,
                          (*p_skillInfo)->klass->vtable._5_get_skillId.method);
        if ( v40 )
        {
          Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v40,
                                      data,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)data,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v42 = (SkillLvMaster_o *)data;
              data = (__int64)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))(*p_skillInfo)->klass->vtable._5_get_skillId.methodPtr)(
                                *p_skillInfo,
                                *p_skillInfo,
                                (*p_skillInfo)->klass->vtable._5_get_skillId.method);
              if ( *p_skillInfo )
              {
                if ( v42 )
                {
                  v43 = SkillLvMaster__GetEntity(v42, data, (*p_skillInfo)->fields.skilllv, 0);
                  if ( !Entity )
                    goto LABEL_158;
                  v44 = v43;
                  data = (__int64)SkillEntity__getName(Entity, 0);
                  v45 = (System_String_o *)data;
                  if ( v23 )
                  {
                    data = (__int64)v23->fields.svtlimitaddent;
                    if ( data )
                    {
                      data = (__int64)ServantLimitAddEntity__GetOverwriteSkillName(
                                        (ServantLimitAddEntity_o *)data,
                                        Entity->fields.id,
                                        v45,
                                        0);
                      v45 = (System_String_o *)data;
                    }
                  }
                  v46 = *p_skillInfo;
                  if ( *p_skillInfo )
                  {
                    skillNameLabel = this->fields.skillNameLabel;
                    if ( v46->fields.type == 21 )
                    {
                      if ( !skillNameLabel )
                        goto LABEL_163;
                      v48 = this->fields.skillNameLabel;
                      v49 = v45;
                    }
                    else
                    {
                      skilllv = v46->fields.skilllv;
                      v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &skilllv);
                      data = (__int64)System_String__Format_75697880(
                                        (System_String_o *)StringLiteral_26489/*"{0}  Lv.{1}"*/,
                                        (Il2CppObject *)v45,
                                        v50,
                                        0);
                      if ( !skillNameLabel )
                        goto LABEL_163;
                      v49 = (System_String_o *)data;
                      v48 = skillNameLabel;
                    }
                    UILabel__set_text(v48, v49, 0);
                    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
                    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
                    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
                    {
                      data = (__int64)*p_skillStrengthStatus;
                      if ( !*p_skillStrengthStatus )
                        goto LABEL_163;
                      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)data,
                                                             0);
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
                      UnityEngine_Object__Destroy_83459800(gameObject, 0);
                    }
                    if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v18);
                    data = (__int64)this->fields.skillNameLabel;
                    if ( data )
                    {
                      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
                      data = (__int64)BaseMonoBehaviour__createObject_48153028(
                                        (BaseMonoBehaviour_o *)this,
                                        PATH,
                                        transform,
                                        0,
                                        0);
                      if ( data )
                      {
                        v58 = UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                        *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v58;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)&this->fields.skillStrengthStatus,
                          (int32_t)v58,
                          v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64);
                        data = (__int64)*p_skillStrengthStatus;
                        if ( *p_skillStrengthStatus )
                        {
                          ServantSkillStrengthStatus__Set(
                            (ServantSkillStrengthStatus_o *)data,
                            this->fields.skillNameLabel,
                            skillInfo->fields.strengthStatus,
                            skillInfo->fields.skillRecord,
                            34,
                            0,
                            (UnityEngine_Vector2Int_o)0x1E00000022LL,
                            450,
                            0,
                            0);
                          skillConfLabel = (UIWidget_o *)this->fields.skillConfLabel;
                          data = (__int64)BattleSkillConfComponent_TypeInfo;
                          if ( !*(&BattleSkillConfComponent_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v18);
                          if ( skillConfLabel )
                          {
                            UIWidget__set_height(
                              skillConfLabel,
                              BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                              0);
                            v66 = this->fields.skillConfLabel;
                            v67 = this->fields.skillInfo;
                            if ( isSetMinSize )
                            {
                              if ( !v67 || !v44 )
                                goto LABEL_163;
                              Detail_49901180 = SkillLvEntity__getDetail_49901180(v44, v67->fields.skilllv, 0, 0);
                              v70 = BattleSkillConfComponent_TypeInfo;
                              v71 = Detail_49901180;
                              if ( !*(&BattleSkillConfComponent_TypeInfo->_2.cctor_finished + 1) )
                              {
                                j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v69);
                                v70 = BattleSkillConfComponent_TypeInfo;
                              }
                              v72 = v66;
                              v73 = v71;
                              DETAIL_FONT_SIZE = v70->static_fields->DETAIL_FONT_SIZE;
                              v75 = DETAIL_FONT_SIZE;
                            }
                            else
                            {
                              if ( !v67 || !v44 )
                                goto LABEL_163;
                              v73 = SkillLvEntity__getDetail_49901180(v44, v67->fields.skilllv, 0, 0);
                              v72 = v66;
                              DETAIL_FONT_SIZE = 22;
                              v75 = 0;
                            }
                            WrapControlText__textBBCodeAdjust(v72, v73, DETAIL_FONT_SIZE, v75, 0);
                            data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                            if ( !data )
                              goto LABEL_163;
                            activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)data, 0);
                            data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                            if ( !data )
                              goto LABEL_163;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
                            data = (__int64)this->fields.scrollView;
                            if ( !data )
                              goto LABEL_163;
                            UIScrollView__ResetPosition((UIScrollView_o *)data, 0);
                            data = (__int64)this->fields.skillConfLabel;
                            if ( !data )
                              goto LABEL_163;
                            UIWidget__ResizeCollider((UIWidget_o *)data, 0);
                            data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                            if ( !data )
                              goto LABEL_163;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, activeSelf, 0);
                            data = (__int64)this->fields.skillConfLabel;
                            if ( !data )
                              goto LABEL_163;
                            data = (__int64)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)data,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                            if ( !data )
                              goto LABEL_163;
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0);
                            useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
                            if ( !UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0, 0) )
                            {
LABEL_133:
                              if ( SkillEntity__isActive(Entity, 0) )
                              {
                                data = (__int64)this->fields.okButton;
                                if ( !data )
                                  goto LABEL_163;
                                data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)data,
                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
                                if ( !data )
                                  goto LABEL_163;
                                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 1, 0);
                                data = (__int64)this->fields.okButton;
                                if ( !data )
                                  goto LABEL_163;
                                data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)data,
                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                v92 = (UnityEngine_Object_o *)this->fields.okButton;
                                v93 = (UIButtonColor_o *)data;
                                if ( v23 )
                                {
                                  if ( !v92 )
                                    goto LABEL_163;
                                  UnityEngine_GameObject__SetActive(this->fields.okButton, 1, 0);
                                  data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._6_get_chargeTurn.methodPtr)(
                                           skillInfo,
                                           skillInfo->klass->vtable._6_get_chargeTurn.method);
                                  if ( (int)data > 0
                                    || (data = BattleServantData__canUseSkill(v23, skillInfo->fields.index, 0),
                                        (data & 1) == 0) )
                                  {
LABEL_150:
                                    this->fields.isPlaySkill = 0;
                                    if ( !v93 )
                                      goto LABEL_163;
                                    v100.fields.a = 1.0;
                                    v100.fields.r = 0.5;
                                    goto LABEL_152;
                                  }
                                }
                                else
                                {
                                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
                                  if ( !UnityEngine_Object__op_Inequality(v92, 0, 0) )
                                  {
LABEL_153:
                                    skillChargeLabel = (UnityEngine_Object_o *)this->fields.skillChargeLabel;
                                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
                                    if ( !UnityEngine_Object__op_Inequality(skillChargeLabel, 0, 0) )
                                      goto LABEL_158;
                                    v96 = this->fields.skillChargeLabel;
                                    data = (__int64)System_Int32__ToString((int)v44 + 24, 0);
                                    if ( v96 )
                                    {
                                      UILabel__set_text(v96, (System_String_o *)data, 0);
                                      goto LABEL_158;
                                    }
                                    goto LABEL_163;
                                  }
                                  data = (__int64)this->fields.okButton;
                                  if ( !data )
                                    goto LABEL_163;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
                                  data = BattleSkillInfoData__getChargeTurn(skillInfo, 0);
                                  if ( (int)data > 0 )
                                    goto LABEL_150;
                                  data = BattleSkillInfoData__IsOpenCond(skillInfo, 0);
                                  if ( (data & 1) == 0 )
                                    goto LABEL_150;
                                }
                                this->fields.isPlaySkill = 1;
                                if ( !v93 )
                                  goto LABEL_163;
                                v100.fields.r = 1.0;
                                v100.fields.a = 1.0;
LABEL_152:
                                v100.fields.g = v100.fields.r;
                                v100.fields.b = v100.fields.r;
                                UIButtonColor__set_defaultColor(v93, v100, 0);
                                goto LABEL_153;
                              }
LABEL_158:
                              useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
                              if ( UnityEngine_Object__op_Inequality(useCondRoot, 0, 0) )
                                BattleSkillConfComponent__SetUseCond(this, v98);
                              return;
                            }
                            data = (__int64)BattleSkillConfComponent_TypeInfo;
                            v79 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                            if ( !*(&BattleSkillConfComponent_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v18);
                            if ( v79 )
                            {
                              UIWidget__set_height(
                                v79,
                                BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                0);
                              if ( isSetMinSize )
                              {
                                v80 = this->fields.skillInfo;
                                if ( !v80 )
                                  goto LABEL_163;
                                v81 = this->fields.useCondSkillConfLabel;
                                v82 = SkillLvEntity__getDetail_49901180(v44, v80->fields.skilllv, 0, 0);
                                v84 = BattleSkillConfComponent_TypeInfo;
                                v85 = v82;
                                if ( !*(&BattleSkillConfComponent_TypeInfo->_2.cctor_finished + 1) )
                                {
                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo, v83);
                                  v84 = BattleSkillConfComponent_TypeInfo;
                                }
                                v86 = v81;
                                v87 = v85;
                                v88 = v84->static_fields->DETAIL_FONT_SIZE;
                                v89 = v88;
                              }
                              else
                              {
                                if ( !*p_skillInfo )
                                  goto LABEL_163;
                                v90 = this->fields.useCondSkillConfLabel;
                                v87 = SkillLvEntity__getDetail_49901180(v44, (*p_skillInfo)->fields.skilllv, 0, 0);
                                v86 = v90;
                                v88 = 22;
                                v89 = 0;
                              }
                              WrapControlText__textBBCodeAdjust(v86, v87, v88, v89, 0);
                              data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                              if ( data )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
                                data = (__int64)this->fields.useCondRoot;
                                if ( data )
                                {
                                  data = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)data, 0);
                                  if ( this->fields.useCondRoot )
                                  {
                                    v91 = data;
                                    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0);
                                    data = (__int64)this->fields.useCondScrollView;
                                    if ( data )
                                    {
                                      UIScrollView__ResetPosition((UIScrollView_o *)data, 0);
                                      data = (__int64)this->fields.useCondSkillConfLabel;
                                      if ( data )
                                      {
                                        UIWidget__ResizeCollider((UIWidget_o *)data, 0);
                                        data = (__int64)this->fields.useCondRoot;
                                        if ( data )
                                        {
                                          UnityEngine_GameObject__SetActive(
                                            (UnityEngine_GameObject_o *)data,
                                            v91 & 1,
                                            0);
                                          data = (__int64)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
                                          if ( data )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)data,
                                              activeSelf,
                                              0);
                                            data = (__int64)this->fields.useCondSkillConfLabel;
                                            if ( data )
                                            {
                                              data = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)data,
                                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                              if ( data )
                                              {
                                                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0);
                                                goto LABEL_133;
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
LABEL_163:
    sub_2213CDC(data, v18);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_163;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_163;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0);
  v30 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_163;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v31 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_163;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    UnityEngine_Object__Destroy_83459800(v33, 0);
  }
}


void BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillInfo; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *useCondItemIcon; // x20
  UISprite_o *v7; // x20
  int32_t monitor; // w21
  int32_t v9; // w0
  __int64 v10; // x1
  int32_t num; // w20
  Il2CppObject *MasterData_object; // x20
  int64_t v13; // x21
  __int64 v14; // x1
  UserItemEntity_o *EntityDefinitely; // x20
  UnityEngine_Object_o *v16; // x21
  int v17; // w8
  UISprite_o *v18; // x21
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x22
  ItemMaster_o *v22; // x20
  UISprite_o *v23; // x20
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x21
  UnityEngine_Object_o *useCondItemCount; // x21
  UILabel_o *v28; // x21
  __int64 v29; // x1
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v33; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  __int64 v35; // x1
  UISprite_o *v36; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  __int64 v38; // x1
  UISprite_o *v39; // x19
  int32_t m_CachedPtr; // [xsp+8h] [xbp-48h] BYREF
  int32_t CondItemNumber; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974288 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_2213A60(&StringLiteral_22635/*"menu_txt_remaining"*/);
    sub_2213A60(&StringLiteral_22636/*"menu_txt_spend"*/);
    sub_2213A60(&StringLiteral_2915/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_2213A60(&StringLiteral_24765/*"skill_item_{0}"*/);
    byte_5974288 = 1;
  }
  skillInfo = (UnityEngine_GameObject_o *)this->fields.skillInfo;
  entity = 0;
  CondItemNumber = 0;
  if ( !skillInfo )
    goto LABEL_94;
  if ( !BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)skillInfo, 0) )
  {
    skillInfo = this->fields.useCondRoot;
    if ( skillInfo )
    {
      UnityEngine_GameObject__SetActive(skillInfo, 0, 0);
      skillInfo = this->fields.noCondRoot;
      if ( skillInfo )
      {
        UnityEngine_GameObject__SetActive(skillInfo, 1, 0);
        return;
      }
    }
    goto LABEL_94;
  }
  skillInfo = this->fields.noCondRoot;
  if ( !skillInfo )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive(skillInfo, 0, 0);
  skillInfo = this->fields.useCondRoot;
  if ( !skillInfo )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive(skillInfo, 1, 0);
  skillInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_94;
  skillInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)skillInfo,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_94;
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = (UnityEngine_GameObject_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !v4 )
    goto LABEL_94;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v4,
          &entity,
          (int32_t)skillInfo,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_28;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  skillInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(useCondItemIcon, 0, 0);
  if ( ((unsigned __int8)skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_94;
    v7 = this->fields.useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    skillInfo = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v7, monitor, 0);
  }
  if ( !entity )
    goto LABEL_94;
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_94;
    v9 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0);
    if ( v9 >= 9999 )
      num = 9999;
    else
      num = v9;
  }
  else
  {
LABEL_28:
    skillInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_94;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)skillInfo,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    skillInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
      skillInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    }
    if ( !this->fields.skillInfo )
      goto LABEL_94;
    v13 = *(_QWORD *)(skillInfo[7].fields.m_CachedPtr + 64);
    skillInfo = (UnityEngine_GameObject_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
    if ( !MasterData_object )
      goto LABEL_94;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         (UserItemMaster_o *)MasterData_object,
                         v13,
                         (int32_t)skillInfo,
                         0);
    v16 = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
    v17 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( EntityDefinitely )
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
      {
        skillInfo = (UnityEngine_GameObject_o *)UserItemEntity__getItemInfo(EntityDefinitely, 0);
        v18 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          m_CachedPtr = skillInfo[1].fields.m_CachedPtr;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CachedPtr);
          v21 = System_String__Format((System_String_o *)StringLiteral_24765/*"skill_item_{0}"*/, v19, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
          AtlasManager__SetEventSprite(v18, v21, 0);
        }
        else
        {
          if ( !v18 )
            goto LABEL_94;
          UISprite__set_spriteName(this->fields.useCondItemIcon, **(System_String_o ***)(qword_5984390 + 184), 0);
        }
      }
      if ( EntityDefinitely->fields.num >= 9999 )
        num = 9999;
      else
        num = EntityDefinitely->fields.num;
    }
    else
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
      {
        skillInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !skillInfo )
          goto LABEL_94;
        skillInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)skillInfo,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this->fields.skillInfo )
          goto LABEL_94;
        v22 = (ItemMaster_o *)skillInfo;
        skillInfo = (UnityEngine_GameObject_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
        if ( !v22 )
          goto LABEL_94;
        skillInfo = (UnityEngine_GameObject_o *)ItemMaster__GetItemData(v22, (int32_t)skillInfo, -1, 0);
        v23 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          m_CachedPtr = skillInfo[1].fields.m_CachedPtr;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CachedPtr);
          v26 = System_String__Format((System_String_o *)StringLiteral_24765/*"skill_item_{0}"*/, v24, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
          AtlasManager__SetEventSprite(v23, v26, 0);
        }
        else
        {
          if ( !v23 )
            goto LABEL_94;
          UISprite__set_spriteName(this->fields.useCondItemIcon, **(System_String_o ***)(qword_5984390 + 184), 0);
        }
      }
      num = 0;
    }
  }
  useCondItemCount = (UnityEngine_Object_o *)this->fields.useCondItemCount;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(useCondItemCount, 0, 0) )
  {
    skillInfo = (UnityEngine_GameObject_o *)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_94;
    v28 = this->fields.useCondItemCount;
    if ( BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0) )
    {
      skillInfo = (UnityEngine_GameObject_o *)BasicHelper__ToCommaString(num, 0);
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2915/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0);
      m_CachedPtr = num;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CachedPtr);
      skillInfo = (UnityEngine_GameObject_o *)System_String__Format(v30, v31, 0);
    }
    method = (const MethodInfo *)skillInfo;
    if ( !v28 )
      goto LABEL_94;
    UILabel__set_text(v28, (System_String_o *)skillInfo, 0);
    skillInfo = (UnityEngine_GameObject_o *)this->fields.useCondItemCount;
    if ( !skillInfo )
      goto LABEL_94;
    UILabel__SetCondensedScale((UILabel_o *)skillInfo, 40, 0, 0);
  }
  useCondItemConsumeCount = (UnityEngine_Object_o *)this->fields.useCondItemConsumeCount;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(useCondItemConsumeCount, 0, 0) )
    goto LABEL_81;
  skillInfo = (UnityEngine_GameObject_o *)this->fields.skillInfo;
  if ( !skillInfo
    || (v33 = this->fields.useCondItemConsumeCount,
        CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0),
        skillInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&CondItemNumber, 0),
        !v33) )
  {
LABEL_94:
    sub_2213CDC(skillInfo, method);
  }
  UILabel__set_text(v33, (System_String_o *)skillInfo, 0);
LABEL_81:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0, 0) )
  {
    v36 = this->fields.useCondItemLess;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
    AtlasManager__SetEventSprite(v36, (System_String_o *)StringLiteral_22635/*"menu_txt_remaining"*/, 0);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0, 0) )
  {
    v39 = this->fields.useCondItemConsume;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
    AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_22636/*"menu_txt_spend"*/, 0);
  }
}


void BattleSkillConfComponent__ToEnableLabelCollider(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *skillConfLabel; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_5974289 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974289 = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_12;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                skillConfLabel,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !skillConfLabel )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0);
  useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0, 0) )
  {
    skillConfLabel = (UnityEngine_Component_o *)this->fields.useCondSkillConfLabel;
    if ( skillConfLabel )
    {
      skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    skillConfLabel,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(skillConfLabel, method);
  }
}


System_String_o *BattleSkillConfComponent__get_closeBtnPath(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  if ( (byte_597428A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18236/*"btn_close"*/);
    byte_597428A = 1;
  }
  return (System_String_o *)StringLiteral_18236/*"btn_close"*/;
}


void BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x20

  if ( (byte_5974286 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974286 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    v5 = this->fields.target;
    if ( !v5 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_20;
      BattlePerformancePlayer__onClickSkillCancel((BattlePerformancePlayer_o *)Component_object, 0);
    }
    v5 = this->fields.target;
    if ( v5 )
    {
      v9 = UnityEngine_GameObject__GetComponent_object_(
             v5,
             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
      if ( ((unsigned __int8)v5 & 1) == 0 )
        goto LABEL_18;
      if ( v9 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v9, 0);
LABEL_18:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_20:
    sub_2213CDC(v5, v4);
  }
}


void BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_5974287 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleSkillConfComponent_onClickOK__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974287 = 1;
  }
  if ( this->fields.isPlaySkill )
  {
    if ( !this->fields.isPlayedSe )
    {
      v3 = Method_BattleSkillConfComponent_onClickOK__;
      if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_BattleSkillConfComponent_onClickOK__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
      this->fields.isPlayedSe = 1;
    }
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(target, 0, 0) )
    {
      v7 = this->fields.target;
      if ( !v7 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v7,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_27;
        BattlePerformancePlayer__onClickSkillOK(
          (BattlePerformancePlayer_o *)Component_object,
          this->fields.skillInfo,
          0);
      }
      v7 = this->fields.target;
      if ( !v7 )
LABEL_27:
        sub_2213CDC(v7, v6);
      v11 = UnityEngine_GameObject__GetComponent_object_(
              v7,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( v11 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v11, this->fields.skillInfo, 0);
          return;
        }
        goto LABEL_27;
      }
    }
  }
  else
  {
    v12 = Method_BattleSkillConfComponent_onClickOK__;
    if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_2213A78(Method_BattleSkillConfComponent_onClickOK__);
    v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
    this->fields.isPlayedSe = 1;
  }
}


void BattleSkillConfComponent__setInit(BattleSkillConfComponent_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.data = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0);
}