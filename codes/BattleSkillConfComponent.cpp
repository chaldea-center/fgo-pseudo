void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42B2AA2 & 1) == 0 )
  {
    sub_B52984(&BattleSkillConfComponent_TypeInfo);
    byte_42B2AA2 = 1;
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
  UnityEngine_Object_o *okButton; // x21
  __int64 data; // x0
  __int64 v14; // x1
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v17; // x21
  const MethodInfo *v18; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  bool v22; // w27
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Object_o *v24; // x20
  UnityEngine_Object_o *v25; // x19
  int32_t NotActTurn; // w4
  UnityEngine_Object_o *cancelButton; // x24
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *closeButton; // x24
  UnityEngine_Object_o *v30; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x23
  SkillEntity_o *Entity; // x24
  SkillLvMaster_o *v33; // x23
  struct UILabel_o *skillNameLabel; // x26
  int32_t type; // w22
  SkillLvEntity_o *v36; // x23
  Il2CppObject *v37; // x27
  UILabel_o *v38; // x0
  System_String_o *v39; // x1
  Il2CppObject *v40; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v54; // x8
  struct UILabel_o *v55; // x25
  System_String_o *Detail_26526320; // x26
  BattleSkillConfComponent_c *v57; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v59; // x0
  System_String_o *v60; // x1
  int32_t v61; // w2
  int32_t v62; // w4
  int32_t v63; // w3
  bool activeSelf; // w25
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v66; // x26
  struct BattleSkillInfoData_o *v67; // x8
  struct UILabel_o *v68; // x26
  System_String_o *v69; // x27
  BattleSkillConfComponent_c *v70; // x0
  int32_t *v71; // x8
  UILabel_o *v72; // x0
  System_String_o *v73; // x1
  int32_t v74; // w2
  int32_t v75; // w4
  int32_t v76; // w3
  char v77; // w22
  UnityEngine_Object_o *v78; // x24
  UIButtonColor_o *v79; // x22
  const MethodInfo *v80; // x1
  int v81; // s0
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v86; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v88; // x1
  __int64 v89; // x0
  int32_t skilllv; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v92; // 0:x6.8

  if ( (byte_42B2A9C & 1) == 0 )
  {
    sub_B52984(&BattleSkillConfComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_23738/*"{0}  Lv.{1}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2A9C = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillInfo,
    (System_Int32_array **)skillInfo,
    (System_String_array **)cancelOk,
    (System_String_array **)isSetMinSize,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
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
      goto LABEL_171;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
  }
  if ( !skillInfo )
    goto LABEL_171;
  if ( skillInfo->fields.isUseSkill )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_171;
    ServantData = BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
    skillIcon = (UnityEngine_Object_o *)this->fields.skillIcon;
    v17 = ServantData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0LL, 0LL) )
    {
      if ( v17 )
      {
        canUseSkill = BattleServantData__canUseSkill(v17, skillInfo->fields.index, 0LL);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v17, 0LL);
        data = (__int64)BattleServantData__getSkillSealSelect(v17, 0LL);
        if ( !data )
          goto LABEL_171;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
        {
          v89 = sub_B52A88(data);
          sub_B52A28(v89, 0LL);
        }
        if ( *(_BYTE *)(data + index + 32) )
        {
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v17, index, 0LL);
          v22 = 1;
        }
        else
        {
          v22 = 0;
        }
        NotActTurn = BattleServantData__getNotActTurn(v17, 0LL);
      }
      else
      {
        v22 = 0;
        NotActTurn = 0;
        SkillSealTurn = 0;
        canUseSkill = 1;
      }
      data = (__int64)this->fields.skillIcon;
      if ( !data )
        goto LABEL_171;
      BattleServantSkillIConComponent__SetSkillInfo(
        (BattleServantSkillIConComponent_o *)data,
        skillInfo,
        canUseSkill,
        SkillSealTurn,
        NotActTurn,
        v22,
        v18);
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
        goto LABEL_171;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)data,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_171;
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
        goto LABEL_171;
      v30 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)data,
                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_171;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v30, cancelOk, 0LL);
      }
    }
    data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)data,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
        data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                 *p_skillInfo,
                 (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v31 )
        {
          Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v31,
                                      data,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)data,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v33 = (SkillLvMaster_o *)data;
              data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                       *p_skillInfo,
                       (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v33 )
                {
                  data = (__int64)SkillLvMaster__GetEntity(v33, data, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_165;
                  if ( *p_skillInfo )
                  {
                    skillNameLabel = this->fields.skillNameLabel;
                    type = (*p_skillInfo)->fields.type;
                    v36 = (SkillLvEntity_o *)data;
                    data = (__int64)SkillEntity__getName(Entity, 0LL);
                    v37 = (Il2CppObject *)data;
                    if ( type == 21 )
                    {
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v38 = skillNameLabel;
                      v39 = (System_String_o *)v37;
                    }
                    else
                    {
                      if ( !*p_skillInfo )
                        goto LABEL_171;
                      skilllv = (*p_skillInfo)->fields.skilllv;
                      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
                      data = (__int64)System_String__Format_44563852(
                                        (System_String_o *)StringLiteral_23738/*"{0}  Lv.{1}"*/,
                                        v37,
                                        v40,
                                        0LL);
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v39 = (System_String_o *)data;
                      v38 = skillNameLabel;
                    }
                    UILabel__set_text(v38, v39, 0LL);
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
                        goto LABEL_171;
                      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)data,
                                                             0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
                      data = (__int64)BaseMonoBehaviour__createObject_19346208(
                                        (BaseMonoBehaviour_o *)this,
                                        PATH,
                                        transform,
                                        0LL,
                                        0LL);
                      if ( data )
                      {
                        v46 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)data,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                        *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v46;
                        sub_B52920(
                          (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
                          v46,
                          v47,
                          v48,
                          v49,
                          v50,
                          v51,
                          v52);
                        data = (__int64)*p_skillStrengthStatus;
                        if ( *p_skillStrengthStatus )
                        {
                          v92 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                          ServantSkillStrengthStatus__Set(
                            (ServantSkillStrengthStatus_o *)data,
                            this->fields.skillNameLabel,
                            skillInfo->fields.strengthStatus,
                            skillInfo->fields.skillRecord,
                            34,
                            0,
                            v92,
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
                            v54 = this->fields.skillInfo;
                            if ( v54 )
                            {
                              if ( v36 )
                              {
                                v55 = this->fields.skillConfLabel;
                                Detail_26526320 = SkillLvEntity__getDetail_26526320(v36, v54->fields.skilllv, 0, 0LL);
                                if ( isSetMinSize )
                                {
                                  v57 = BattleSkillConfComponent_TypeInfo;
                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                    v57 = BattleSkillConfComponent_TypeInfo;
                                  }
                                  p_DETAIL_FONT_SIZE = &v57->static_fields->DETAIL_FONT_SIZE;
                                  v59 = v55;
                                  v60 = Detail_26526320;
                                  v61 = *p_DETAIL_FONT_SIZE;
                                  v62 = p_DETAIL_FONT_SIZE[2];
                                  v63 = *p_DETAIL_FONT_SIZE;
                                }
                                else
                                {
                                  v61 = 22;
                                  v59 = v55;
                                  v60 = Detail_26526320;
                                  v63 = 0;
                                  v62 = 0;
                                }
                                WrapControlText__textBBCodeAdjust(v59, v60, v61, v63, v62, 0LL);
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
                                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                v66 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                                if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                }
                                                if ( !v66 )
                                                  goto LABEL_171;
                                                UIWidget__set_height(
                                                  v66,
                                                  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                  0LL);
                                                v67 = this->fields.skillInfo;
                                                if ( !v67 )
                                                  goto LABEL_171;
                                                v68 = this->fields.useCondSkillConfLabel;
                                                v69 = SkillLvEntity__getDetail_26526320(
                                                        v36,
                                                        v67->fields.skilllv,
                                                        0,
                                                        0LL);
                                                if ( isSetMinSize )
                                                {
                                                  v70 = BattleSkillConfComponent_TypeInfo;
                                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                    v70 = BattleSkillConfComponent_TypeInfo;
                                                  }
                                                  v71 = &v70->static_fields->DETAIL_FONT_SIZE;
                                                  v72 = v68;
                                                  v73 = v69;
                                                  v74 = *v71;
                                                  v75 = v71[2];
                                                  v76 = *v71;
                                                }
                                                else
                                                {
                                                  v74 = 22;
                                                  v72 = v68;
                                                  v73 = v69;
                                                  v76 = 0;
                                                  v75 = 0;
                                                }
                                                WrapControlText__textBBCodeAdjust(v72, v73, v74, v76, v75, 0LL);
                                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                                                if ( !data )
                                                  goto LABEL_171;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  1,
                                                  0LL);
                                                data = (__int64)this->fields.useCondRoot;
                                                if ( !data )
                                                  goto LABEL_171;
                                                data = UnityEngine_GameObject__get_activeSelf(
                                                         (UnityEngine_GameObject_o *)data,
                                                         0LL);
                                                if ( !this->fields.useCondRoot )
                                                  goto LABEL_171;
                                                v77 = data;
                                                UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
                                                data = (__int64)this->fields.useCondScrollView;
                                                if ( !data )
                                                  goto LABEL_171;
                                                UIScrollView__ResetPosition((UIScrollView_o *)data, 0LL);
                                                data = (__int64)this->fields.useCondSkillConfLabel;
                                                if ( !data )
                                                  goto LABEL_171;
                                                UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
                                                data = (__int64)this->fields.useCondRoot;
                                                if ( !data )
                                                  goto LABEL_171;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  v77 & 1,
                                                  0LL);
                                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                                                if ( !data )
                                                  goto LABEL_171;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  activeSelf,
                                                  0LL);
                                                data = (__int64)this->fields.useCondSkillConfLabel;
                                                if ( !data )
                                                  goto LABEL_171;
                                                data = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)data,
                                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                                if ( !data )
                                                  goto LABEL_171;
                                                UnityEngine_Collider__set_enabled(
                                                  (UnityEngine_Collider_o *)data,
                                                  0,
                                                  0LL);
                                              }
                                              if ( !SkillEntity__isActive(Entity, 0LL) )
                                                goto LABEL_165;
                                              data = (__int64)this->fields.okButton;
                                              if ( data )
                                              {
                                                data = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)data,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                                    v78 = (UnityEngine_Object_o *)this->fields.okButton;
                                                    v79 = (UIButtonColor_o *)data;
                                                    if ( v17 )
                                                    {
                                                      if ( !v78 )
                                                        goto LABEL_171;
                                                      UnityEngine_GameObject__SetActive(this->fields.okButton, 1, 0LL);
                                                      if ( skillInfo->fields.chargeTurn > 0
                                                        || !BattleServantData__canUseSkill(
                                                              v17,
                                                              skillInfo->fields.index,
                                                              0LL) )
                                                      {
LABEL_157:
                                                        this->fields.isPlaySkill = 0;
                                                        *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_gray(0LL);
                                                        if ( !v79 )
                                                          goto LABEL_171;
LABEL_158:
                                                        UIButtonColor__set_defaultColor(
                                                          v79,
                                                          *(UnityEngine_Color_o *)&v81,
                                                          0LL);
                                                        goto LABEL_159;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                      {
                                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                      }
                                                      if ( !UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
                                                      {
LABEL_159:
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
                                                          goto LABEL_165;
                                                        v86 = this->fields.skillChargeLabel;
                                                        data = (__int64)System_Int32__ToString((int)v36 + 24, 0LL);
                                                        if ( v86 )
                                                        {
                                                          UILabel__set_text(v86, (System_String_o *)data, 0LL);
LABEL_165:
                                                          useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                          }
                                                          if ( UnityEngine_Object__op_Inequality(useCondRoot, 0LL, 0LL) )
                                                            BattleSkillConfComponent__SetUseCond(this, v88);
                                                          return;
                                                        }
                                                        goto LABEL_171;
                                                      }
                                                      data = (__int64)this->fields.okButton;
                                                      if ( !data )
                                                        goto LABEL_171;
                                                      UnityEngine_GameObject__SetActive(
                                                        (UnityEngine_GameObject_o *)data,
                                                        1,
                                                        0LL);
                                                      if ( skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn > 0
                                                        || !BattleSkillInfoData__IsOpenCond(skillInfo, v80) )
                                                      {
                                                        goto LABEL_157;
                                                      }
                                                    }
                                                    this->fields.isPlaySkill = 1;
                                                    *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_white(0LL);
                                                    if ( !v79 )
                                                      goto LABEL_171;
                                                    goto LABEL_158;
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
LABEL_171:
    sub_B52A5C(data, v14);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_171;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_171;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v23 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_171;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v24 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_171;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v25, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  int64_t skillInfo; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v5; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *useCondItemIcon; // x21
  UserItemEntity_o *v8; // x20
  UISprite_o *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x22
  ItemMaster_o *v12; // x20
  UISprite_o *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  int32_t v16; // w0
  UnityEngine_Object_o *useCondItemCount; // x20
  bool IsOpenCond; // w0
  UILabel_o *v19; // x20
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v23; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v25; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v27; // x19
  int v28; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v29; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42B2A9F & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_20626/*"menu_txt_remaining"*/);
    sub_B52984(&StringLiteral_20627/*"menu_txt_spend"*/);
    sub_B52984(&StringLiteral_2484/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_B52984(&StringLiteral_22336/*"skill_item_{0}"*/);
    byte_42B2A9F = 1;
  }
  v29 = 0LL;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_82;
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
    goto LABEL_82;
  }
  skillInfo = (int64_t)this->fields.noCondRoot;
  if ( !skillInfo )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 0, 0LL);
  skillInfo = (int64_t)this->fields.useCondRoot;
  if ( !skillInfo )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
  HIDWORD(v29) = 0;
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)skillInfo,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v5 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_82;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v5, skillInfo, 0LL);
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( EntityDefinitely )
  {
    v8 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL) )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v8, 0LL);
      v9 = this->fields.useCondItemIcon;
      if ( skillInfo )
      {
        v28 = *(_DWORD *)(skillInfo + 40);
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        v11 = System_String__Format((System_String_o *)StringLiteral_22336/*"skill_item_{0}"*/, v10, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v9, v11, 0LL);
      }
      else
      {
        if ( !v9 )
          goto LABEL_82;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v16 = UnityEngine_Mathf__Min_41525188(v8->fields.num, 999, 0LL);
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL) )
    {
      skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !skillInfo )
        goto LABEL_82;
      skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)skillInfo,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !this->fields.skillInfo )
        goto LABEL_82;
      v12 = (ItemMaster_o *)skillInfo;
      skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
      if ( !v12 )
        goto LABEL_82;
      skillInfo = (int64_t)ItemMaster__GetItemData(v12, skillInfo, 0LL);
      v13 = this->fields.useCondItemIcon;
      if ( skillInfo )
      {
        v28 = *(_DWORD *)(skillInfo + 40);
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        v15 = System_String__Format((System_String_o *)StringLiteral_22336/*"skill_item_{0}"*/, v14, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v13, v15, 0LL);
      }
      else
      {
        if ( !v13 )
          goto LABEL_82;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v16 = 0;
  }
  HIDWORD(v29) = v16;
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
      goto LABEL_82;
    IsOpenCond = BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, method);
    v19 = this->fields.useCondItemCount;
    if ( IsOpenCond )
    {
      skillInfo = (int64_t)System_Int32__ToString((int32_t)&v29 + 4, 0LL);
      if ( !v19 )
        goto LABEL_82;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2484/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      v28 = HIDWORD(v29);
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      skillInfo = (int64_t)System_String__Format(v20, v21, 0LL);
      if ( !v19 )
        goto LABEL_82;
    }
    UILabel__set_text(v19, (System_String_o *)skillInfo, 0LL);
    skillInfo = (int64_t)this->fields.useCondItemCount;
    if ( !skillInfo )
      goto LABEL_82;
    UILabel__SetCondensedScale((UILabel_o *)skillInfo, 40, 0LL);
  }
  useCondItemConsumeCount = (UnityEngine_Object_o *)this->fields.useCondItemConsumeCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(useCondItemConsumeCount, 0LL, 0LL) )
    goto LABEL_65;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo
    || (v23 = this->fields.useCondItemConsumeCount,
        LODWORD(v29) = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, method),
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&v29, 0LL),
        !v23) )
  {
LABEL_82:
    sub_B52A5C(skillInfo, method);
  }
  UILabel__set_text(v23, (System_String_o *)skillInfo, 0LL);
LABEL_65:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v25 = this->fields.useCondItemLess;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v25, (System_String_o *)StringLiteral_20626/*"menu_txt_remaining"*/, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v27 = this->fields.useCondItemConsume;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_20627/*"menu_txt_spend"*/, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_42B2AA0 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2AA0 = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_13;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                skillConfLabel,
                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B52A5C(skillConfLabel, method);
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B2AA1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17103/*"btn_close"*/);
    byte_42B2AA1 = 1;
  }
  return (System_String_o *)StringLiteral_17103/*"btn_close"*/;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_42B2A9D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2A9D = 1;
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
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
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
                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
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
    sub_B52A5C(v5, v4);
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_42B2A9E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2A9E = 1;
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
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
        sub_B52A5C(v5, v4);
      v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v5,
                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
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
  sub_B52920(
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