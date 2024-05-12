void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438E227 & 1) == 0 )
  {
    sub_B775C4(&BattleSkillConfComponent_TypeInfo);
    byte_438E227 = 1;
  }
  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 20;
  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT = 78;
  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleSkillInfoData_o **p_skillInfo; // x25
  UnityEngine_Object_o *skillTitleLabel; // x21
  UILabel_o *v13; // x21
  __int64 data; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *okButton; // x21
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v19; // x21
  const MethodInfo *v20; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  bool v24; // w27
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_o *v27; // x19
  int32_t NotActTurn; // w4
  UnityEngine_Object_o *cancelButton; // x24
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *closeButton; // x24
  UnityEngine_Object_o *v32; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x23
  SkillEntity_o *Entity; // x24
  SkillLvMaster_o *v35; // x23
  struct UILabel_o *skillNameLabel; // x26
  int32_t type; // w22
  SkillLvEntity_o *v38; // x23
  __int64 v39; // x2
  Il2CppObject *v40; // x27
  UILabel_o *v41; // x0
  System_String_o *v42; // x1
  Il2CppObject *v43; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v57; // x8
  struct UILabel_o *v58; // x25
  System_String_o *Detail_26832724; // x26
  BattleSkillConfComponent_c *v60; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v62; // x0
  System_String_o *v63; // x1
  int32_t v64; // w2
  int32_t v65; // w4
  int32_t v66; // w3
  bool activeSelf; // w25
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v69; // x26
  struct BattleSkillInfoData_o *v70; // x8
  struct UILabel_o *v71; // x26
  System_String_o *v72; // x27
  BattleSkillConfComponent_c *v73; // x0
  int32_t *v74; // x8
  UILabel_o *v75; // x0
  System_String_o *v76; // x1
  int32_t v77; // w2
  int32_t v78; // w4
  int32_t v79; // w3
  char v80; // w22
  UnityEngine_Object_o *v81; // x24
  UIButtonColor_o *v82; // x22
  const MethodInfo *v83; // x1
  int v84; // s0
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v89; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v91; // x1
  __int64 v92; // x0
  int32_t skilllv; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v95; // 0:x6.8

  if ( (byte_438E221 & 1) == 0 )
  {
    sub_B775C4(&BattleSkillConfComponent_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantSkillStrengthStatus_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_2632/*"BATTLE_SKILL_CONF_TITLE"*/);
    sub_B775C4(&StringLiteral_24031/*"{0}  Lv.{1}"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E221 = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillInfo,
    (System_Int32_array **)skillInfo,
    (System_String_array **)cancelOk,
    (System_String_array **)isSetMinSize,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  skillTitleLabel = (UnityEngine_Object_o *)this->fields.skillTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleLabel, 0LL, 0LL) )
  {
    v13 = this->fields.skillTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    data = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2632/*"BATTLE_SKILL_CONF_TITLE"*/, 0LL);
    if ( !v13 )
      goto LABEL_180;
    UILabel__set_text(v13, (System_String_o *)data, 0LL);
  }
  okButton = (UnityEngine_Object_o *)this->fields.okButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  data = UnityEngine_Object__op_Inequality(okButton, 0LL, 0LL);
  if ( (data & 1) != 0 )
  {
    data = (__int64)this->fields.okButton;
    if ( !data )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
  }
  if ( !skillInfo )
    goto LABEL_180;
  if ( skillInfo->fields.isUseSkill )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_180;
    ServantData = BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
    skillIcon = (UnityEngine_Object_o *)this->fields.skillIcon;
    v19 = ServantData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0LL, 0LL) )
    {
      if ( v19 )
      {
        canUseSkill = BattleServantData__canUseSkill(v19, skillInfo->fields.index, 0LL);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v19, 0LL);
        data = (__int64)BattleServantData__getSkillSealSelect(v19, 0LL);
        if ( !data )
          goto LABEL_180;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
        {
          v92 = sub_B776C8(data);
          sub_B77668(v92, 0LL);
        }
        if ( *(_BYTE *)(data + index + 32) )
        {
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v19, index, 0LL);
          v24 = 1;
        }
        else
        {
          v24 = 0;
        }
        NotActTurn = BattleServantData__getNotActTurn(v19, 0LL);
      }
      else
      {
        v24 = 0;
        NotActTurn = 0;
        SkillSealTurn = 0;
        canUseSkill = 1;
      }
      data = (__int64)this->fields.skillIcon;
      if ( !data )
        goto LABEL_180;
      BattleServantSkillIConComponent__SetSkillInfo(
        (BattleServantSkillIConComponent_o *)data,
        skillInfo,
        canUseSkill,
        SkillSealTurn,
        NotActTurn,
        v24,
        v20);
    }
    cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
    {
      data = (__int64)this->fields.cancelButton;
      if ( !data )
        goto LABEL_180;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)data,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_180;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_srcLineSprite, cancelOk, 0LL);
      }
    }
    closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeButton, 0LL, 0LL) )
    {
      data = (__int64)this->fields.closeButton;
      if ( !data )
        goto LABEL_180;
      v32 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)data,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_180;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v32, cancelOk, 0LL);
      }
    }
    data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)data,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
        data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                 *p_skillInfo,
                 (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v33 )
        {
          Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v33,
                                      data,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)data,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v35 = (SkillLvMaster_o *)data;
              data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                       *p_skillInfo,
                       (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v35 )
                {
                  data = (__int64)SkillLvMaster__GetEntity(v35, data, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_174;
                  if ( *p_skillInfo )
                  {
                    skillNameLabel = this->fields.skillNameLabel;
                    type = (*p_skillInfo)->fields.type;
                    v38 = (SkillLvEntity_o *)data;
                    data = (__int64)SkillEntity__getName(Entity, 0LL);
                    v40 = (Il2CppObject *)data;
                    if ( type == 21 )
                    {
                      if ( !skillNameLabel )
                        goto LABEL_180;
                      v41 = skillNameLabel;
                      v42 = (System_String_o *)v40;
                    }
                    else
                    {
                      if ( !*p_skillInfo )
                        goto LABEL_180;
                      skilllv = (*p_skillInfo)->fields.skilllv;
                      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v39);
                      data = (__int64)System_String__Format_44897472(
                                        (System_String_o *)StringLiteral_24031/*"{0}  Lv.{1}"*/,
                                        v40,
                                        v43,
                                        0LL);
                      if ( !skillNameLabel )
                        goto LABEL_180;
                      v42 = (System_String_o *)data;
                      v41 = skillNameLabel;
                    }
                    UILabel__set_text(v41, v42, 0LL);
                    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
                    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
                    {
                      data = (__int64)*p_skillStrengthStatus;
                      if ( !*p_skillStrengthStatus )
                        goto LABEL_180;
                      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)data,
                                                             0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
                    }
                    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    data = (__int64)this->fields.skillNameLabel;
                    if ( data )
                    {
                      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
                      data = (__int64)BaseMonoBehaviour__createObject_22413920(
                                        (BaseMonoBehaviour_o *)this,
                                        PATH,
                                        transform,
                                        0LL,
                                        0LL);
                      if ( data )
                      {
                        v49 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)data,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                        *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v49;
                        sub_B77560(
                          (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
                          v49,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55);
                        data = (__int64)*p_skillStrengthStatus;
                        if ( *p_skillStrengthStatus )
                        {
                          v95 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                          ServantSkillStrengthStatus__Set(
                            (ServantSkillStrengthStatus_o *)data,
                            this->fields.skillNameLabel,
                            skillInfo->fields.strengthStatus,
                            skillInfo->fields.skillRecord,
                            34,
                            0,
                            v95,
                            0LL);
                          skillConfLabel = (UIWidget_o *)this->fields.skillConfLabel;
                          data = (__int64)BattleSkillConfComponent_TypeInfo;
                          if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                          }
                          if ( skillConfLabel )
                          {
                            UIWidget__set_height(
                              skillConfLabel,
                              BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                              0LL);
                            v57 = this->fields.skillInfo;
                            if ( v57 )
                            {
                              if ( v38 )
                              {
                                v58 = this->fields.skillConfLabel;
                                Detail_26832724 = SkillLvEntity__getDetail_26832724(v38, v57->fields.skilllv, 0, 0LL);
                                if ( isSetMinSize )
                                {
                                  v60 = BattleSkillConfComponent_TypeInfo;
                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                    v60 = BattleSkillConfComponent_TypeInfo;
                                  }
                                  p_DETAIL_FONT_SIZE = &v60->static_fields->DETAIL_FONT_SIZE;
                                  v62 = v58;
                                  v63 = Detail_26832724;
                                  v64 = *p_DETAIL_FONT_SIZE;
                                  v65 = p_DETAIL_FONT_SIZE[2];
                                  v66 = *p_DETAIL_FONT_SIZE;
                                }
                                else
                                {
                                  v64 = 22;
                                  v62 = v58;
                                  v63 = Detail_26832724;
                                  v66 = 0;
                                  v65 = 0;
                                }
                                WrapControlText__textBBCodeAdjust(v62, v63, v64, v66, v65, 0LL);
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
                                            data = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)data,
                                                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                            if ( data )
                                            {
                                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0LL);
                                              useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
                                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              }
                                              if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
                                              {
                                                data = (__int64)BattleSkillConfComponent_TypeInfo;
                                                v69 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                                if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                }
                                                if ( !v69 )
                                                  goto LABEL_180;
                                                UIWidget__set_height(
                                                  v69,
                                                  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                  0LL);
                                                v70 = this->fields.skillInfo;
                                                if ( !v70 )
                                                  goto LABEL_180;
                                                v71 = this->fields.useCondSkillConfLabel;
                                                v72 = SkillLvEntity__getDetail_26832724(
                                                        v38,
                                                        v70->fields.skilllv,
                                                        0,
                                                        0LL);
                                                if ( isSetMinSize )
                                                {
                                                  v73 = BattleSkillConfComponent_TypeInfo;
                                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                    v73 = BattleSkillConfComponent_TypeInfo;
                                                  }
                                                  v74 = &v73->static_fields->DETAIL_FONT_SIZE;
                                                  v75 = v71;
                                                  v76 = v72;
                                                  v77 = *v74;
                                                  v78 = v74[2];
                                                  v79 = *v74;
                                                }
                                                else
                                                {
                                                  v77 = 22;
                                                  v75 = v71;
                                                  v76 = v72;
                                                  v79 = 0;
                                                  v78 = 0;
                                                }
                                                WrapControlText__textBBCodeAdjust(v75, v76, v77, v79, v78, 0LL);
                                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                                                if ( !data )
                                                  goto LABEL_180;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  1,
                                                  0LL);
                                                data = (__int64)this->fields.useCondRoot;
                                                if ( !data )
                                                  goto LABEL_180;
                                                data = UnityEngine_GameObject__get_activeSelf(
                                                         (UnityEngine_GameObject_o *)data,
                                                         0LL);
                                                if ( !this->fields.useCondRoot )
                                                  goto LABEL_180;
                                                v80 = data;
                                                UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
                                                data = (__int64)this->fields.useCondScrollView;
                                                if ( !data )
                                                  goto LABEL_180;
                                                UIScrollView__ResetPosition((UIScrollView_o *)data, 0LL);
                                                data = (__int64)this->fields.useCondSkillConfLabel;
                                                if ( !data )
                                                  goto LABEL_180;
                                                UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
                                                data = (__int64)this->fields.useCondRoot;
                                                if ( !data )
                                                  goto LABEL_180;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  v80 & 1,
                                                  0LL);
                                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                                                if ( !data )
                                                  goto LABEL_180;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  activeSelf,
                                                  0LL);
                                                data = (__int64)this->fields.useCondSkillConfLabel;
                                                if ( !data )
                                                  goto LABEL_180;
                                                data = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)data,
                                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                                if ( !data )
                                                  goto LABEL_180;
                                                UnityEngine_Collider__set_enabled(
                                                  (UnityEngine_Collider_o *)data,
                                                  0,
                                                  0LL);
                                              }
                                              if ( !SkillEntity__isActive(Entity, 0LL) )
                                                goto LABEL_174;
                                              data = (__int64)this->fields.okButton;
                                              if ( data )
                                              {
                                                data = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)data,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
                                                if ( data )
                                                {
                                                  UnityEngine_Collider__set_enabled(
                                                    (UnityEngine_Collider_o *)data,
                                                    1,
                                                    0LL);
                                                  data = (__int64)this->fields.okButton;
                                                  if ( data )
                                                  {
                                                    data = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)data,
                                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                                    v81 = (UnityEngine_Object_o *)this->fields.okButton;
                                                    v82 = (UIButtonColor_o *)data;
                                                    if ( v19 )
                                                    {
                                                      if ( !v81 )
                                                        goto LABEL_180;
                                                      UnityEngine_GameObject__SetActive(this->fields.okButton, 1, 0LL);
                                                      if ( skillInfo->fields.chargeTurn > 0
                                                        || !BattleServantData__canUseSkill(
                                                              v19,
                                                              skillInfo->fields.index,
                                                              0LL) )
                                                      {
LABEL_166:
                                                        this->fields.isPlaySkill = 0;
                                                        *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_gray(0LL);
                                                        if ( !v82 )
                                                          goto LABEL_180;
LABEL_167:
                                                        UIButtonColor__set_defaultColor(
                                                          v82,
                                                          *(UnityEngine_Color_o *)&v84,
                                                          0LL);
                                                        goto LABEL_168;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                      {
                                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                      }
                                                      if ( !UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
                                                      {
LABEL_168:
                                                        skillChargeLabel = (UnityEngine_Object_o *)this->fields.skillChargeLabel;
                                                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                        {
                                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                        }
                                                        if ( !UnityEngine_Object__op_Inequality(
                                                                skillChargeLabel,
                                                                0LL,
                                                                0LL) )
                                                          goto LABEL_174;
                                                        v89 = this->fields.skillChargeLabel;
                                                        data = (__int64)System_Int32__ToString((int)v38 + 24, 0LL);
                                                        if ( v89 )
                                                        {
                                                          UILabel__set_text(v89, (System_String_o *)data, 0LL);
LABEL_174:
                                                          useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                          }
                                                          if ( UnityEngine_Object__op_Inequality(useCondRoot, 0LL, 0LL) )
                                                            BattleSkillConfComponent__SetUseCond(this, v91);
                                                          return;
                                                        }
                                                        goto LABEL_180;
                                                      }
                                                      data = (__int64)this->fields.okButton;
                                                      if ( !data )
                                                        goto LABEL_180;
                                                      UnityEngine_GameObject__SetActive(
                                                        (UnityEngine_GameObject_o *)data,
                                                        1,
                                                        0LL);
                                                      if ( skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn > 0
                                                        || !BattleSkillInfoData__IsOpenCond(skillInfo, v83) )
                                                      {
                                                        goto LABEL_166;
                                                      }
                                                    }
                                                    this->fields.isPlaySkill = 1;
                                                    *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
                                                    if ( !v82 )
                                                      goto LABEL_180;
                                                    goto LABEL_167;
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
LABEL_180:
    sub_B7769C(data, v15);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_180;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_180;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v25 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_180;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v26 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_180;
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v27, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  int64_t skillInfo; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v4; // x20
  UnityEngine_Object_o *useCondItemIcon; // x20
  UISprite_o *v6; // x20
  int32_t longName; // w21
  int32_t num; // w0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v10; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v12; // x21
  UserItemEntity_o *v13; // x20
  __int64 v14; // x2
  UISprite_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  ItemMaster_o *v18; // x20
  __int64 v19; // x2
  UISprite_o *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  int v23; // w20
  UnityEngine_Object_o *useCondItemCount; // x21
  UILabel_o *v25; // x21
  System_String_o *v26; // x22
  __int64 v27; // x2
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v30; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v32; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v34; // x19
  int v35; // [xsp+8h] [xbp-38h] BYREF
  int32_t CondItemNumber; // [xsp+Ch] [xbp-34h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_438E224 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_B775C4(&SingletonTemplate_BattleItemData__TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_20887/*"menu_txt_remaining"*/);
    sub_B775C4(&StringLiteral_20888/*"menu_txt_spend"*/);
    sub_B775C4(&StringLiteral_2558/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_B775C4(&StringLiteral_22622/*"skill_item_{0}"*/);
    byte_438E224 = 1;
  }
  entity = 0LL;
  CondItemNumber = 0;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_104;
  if ( !BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)skillInfo, method) )
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
    goto LABEL_104;
  }
  skillInfo = (int64_t)this->fields.noCondRoot;
  if ( !skillInfo )
    goto LABEL_104;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 0, 0LL);
  skillInfo = (int64_t)this->fields.useCondRoot;
  if ( !skillInfo )
    goto LABEL_104;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_104;
  skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_104;
  v4 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
  if ( !v4 )
    goto LABEL_104;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v4,
         &entity,
         skillInfo,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    skillInfo = UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL);
    if ( (skillInfo & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_104;
      v6 = this->fields.useCondItemIcon;
      longName = (int32_t)entity->fields.longName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      skillInfo = AtlasManager__SetItem(v6, longName, 0LL);
    }
    if ( !entity )
      goto LABEL_104;
    if ( entity->fields.bannerId == 35 )
    {
      if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
      }
      skillInfo = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( !entity || !skillInfo )
        goto LABEL_104;
      num = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, entity->fields.id, 0LL);
      goto LABEL_62;
    }
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_104;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)skillInfo,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_104;
  v10 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_104;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v10, skillInfo, 0LL);
  v12 = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( EntityDefinitely )
  {
    v13 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v13, 0LL);
      v15 = this->fields.useCondItemIcon;
      if ( skillInfo )
      {
        v35 = *(_DWORD *)(skillInfo + 40);
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v14);
        v17 = System_String__Format((System_String_o *)StringLiteral_22622/*"skill_item_{0}"*/, v16, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v15, v17, 0LL);
      }
      else
      {
        if ( !v15 )
          goto LABEL_104;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v13->fields.num;
LABEL_62:
    v23 = UnityEngine_Mathf__Min_41473676(num, 9999, 0LL);
    goto LABEL_66;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_104;
    skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)skillInfo,
                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_104;
    v18 = (ItemMaster_o *)skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
    if ( !v18 )
      goto LABEL_104;
    skillInfo = (int64_t)ItemMaster__GetItemData(v18, skillInfo, 0LL);
    v20 = this->fields.useCondItemIcon;
    if ( skillInfo )
    {
      v35 = *(_DWORD *)(skillInfo + 40);
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v19);
      v22 = System_String__Format((System_String_o *)StringLiteral_22622/*"skill_item_{0}"*/, v21, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v20, v22, 0LL);
    }
    else
    {
      if ( !v20 )
        goto LABEL_104;
      UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
  v23 = 0;
LABEL_66:
  useCondItemCount = (UnityEngine_Object_o *)this->fields.useCondItemCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemCount, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_104;
    v25 = this->fields.useCondItemCount;
    if ( BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, method) )
    {
      skillInfo = (int64_t)BasicHelper__ToCommaString(v23, 0LL);
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2558/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      v35 = v23;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v27);
      skillInfo = (int64_t)System_String__Format(v26, v28, 0LL);
    }
    method = (const MethodInfo *)skillInfo;
    if ( !v25 )
      goto LABEL_104;
    UILabel__set_text(v25, (System_String_o *)skillInfo, 0LL);
    skillInfo = (int64_t)this->fields.useCondItemCount;
    if ( !skillInfo )
      goto LABEL_104;
    UILabel__SetCondensedScale((UILabel_o *)skillInfo, 40, 0LL);
  }
  useCondItemConsumeCount = (UnityEngine_Object_o *)this->fields.useCondItemConsumeCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(useCondItemConsumeCount, 0LL, 0LL) )
    goto LABEL_87;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo
    || (v30 = this->fields.useCondItemConsumeCount,
        CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, method),
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&CondItemNumber, 0LL),
        !v30) )
  {
LABEL_104:
    sub_B7769C(skillInfo, method);
  }
  UILabel__set_text(v30, (System_String_o *)skillInfo, 0LL);
LABEL_87:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v32 = this->fields.useCondItemLess;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v32, (System_String_o *)StringLiteral_20887/*"menu_txt_remaining"*/, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v34 = this->fields.useCondItemConsume;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v34, (System_String_o *)StringLiteral_20888/*"menu_txt_spend"*/, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_438E225 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E225 = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_13;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                skillConfLabel,
                                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !skillConfLabel )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
  useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
  {
    skillConfLabel = (UnityEngine_Component_o *)this->fields.useCondSkillConfLabel;
    if ( skillConfLabel )
    {
      skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    skillConfLabel,
                                                    (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B7769C(skillConfLabel, method);
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E226 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17324/*"btn_close"*/);
    byte_438E226 = 1;
  }
  return (System_String_o *)StringLiteral_17324/*"btn_close"*/;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_438E222 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E222 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    v5 = this->fields.target;
    if ( !v5 )
      goto LABEL_23;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v5,
                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      BattlePerformancePlayer__onClickSkillCancel((BattlePerformancePlayer_o *)Component_srcLineSprite, 0LL);
    }
    v5 = this->fields.target;
    if ( v5 )
    {
      v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v5,
                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)v5 & 1) == 0 )
        goto LABEL_21;
      if ( v7 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v7, 0LL);
LABEL_21:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_23:
    sub_B7769C(v5, v4);
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_438E223 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E223 = 1;
  }
  if ( this->fields.isPlaySkill )
  {
    if ( !this->fields.isPlayedSe )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        goto LABEL_32;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v5,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_32;
        BattlePerformancePlayer__onClickSkillOK(
          (BattlePerformancePlayer_o *)Component_srcLineSprite,
          this->fields.skillInfo,
          0LL);
      }
      v5 = this->fields.target;
      if ( !v5 )
LABEL_32:
        sub_B7769C(v5, v4);
      v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v5,
                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( v7 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v7, this->fields.skillInfo, 0LL);
          return;
        }
        goto LABEL_32;
      }
    }
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    this->fields.isPlayedSe = 1;
  }
}


void __fastcall BattleSkillConfComponent__setInit(
        BattleSkillConfComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}