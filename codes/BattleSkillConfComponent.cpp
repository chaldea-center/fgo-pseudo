void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A59D & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillConfComponent_TypeInfo, v1);
    byte_418A59D = 1;
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
  struct BattleSkillInfoData_o **p_skillInfo; // x25
  UnityEngine_Object_o *okButton; // x21
  __int64 data; // x0
  __int64 v27; // x1
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v30; // x21
  const MethodInfo *v31; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  bool v35; // w27
  UnityEngine_Object_o *v36; // x20
  UnityEngine_Object_o *v37; // x20
  UnityEngine_Object_o *v38; // x19
  int32_t NotActTurn; // w4
  UnityEngine_Object_o *cancelButton; // x24
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *closeButton; // x24
  UnityEngine_Object_o *v43; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x23
  SkillEntity_o *Entity; // x24
  SkillLvMaster_o *v46; // x23
  struct UILabel_o *skillNameLabel; // x26
  int32_t type; // w22
  SkillLvEntity_o *v49; // x23
  Il2CppObject *v50; // x27
  UILabel_o *v51; // x0
  System_String_o *v52; // x1
  Il2CppObject *v53; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v67; // x8
  struct UILabel_o *v68; // x25
  System_String_o *Detail_23775852; // x26
  BattleSkillConfComponent_c *v70; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v72; // x0
  System_String_o *v73; // x1
  int32_t v74; // w2
  int32_t v75; // w4
  int32_t v76; // w3
  bool activeSelf; // w25
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v79; // x26
  struct BattleSkillInfoData_o *v80; // x8
  struct UILabel_o *v81; // x26
  System_String_o *v82; // x27
  BattleSkillConfComponent_c *v83; // x0
  int32_t *v84; // x8
  UILabel_o *v85; // x0
  System_String_o *v86; // x1
  int32_t v87; // w2
  int32_t v88; // w4
  int32_t v89; // w3
  char v90; // w22
  UnityEngine_Object_o *v91; // x24
  UIButtonColor_o *v92; // x22
  const MethodInfo *v93; // x1
  int v94; // s0
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v99; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v101; // x1
  __int64 v102; // x0
  int32_t skilllv; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v105; // 0:x6.8

  if ( (byte_418A597 & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillConfComponent_TypeInfo, skillInfo);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Collider___, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v17);
    sub_B2C35C(&int_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&ServantSkillStrengthStatus_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_23544/*"{0}  Lv.{1}"*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    byte_418A597 = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_B2C2F8(
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
    v30 = ServantData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0LL, 0LL) )
    {
      if ( v30 )
      {
        canUseSkill = BattleServantData__canUseSkill(v30, skillInfo->fields.index, 0LL);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v30, 0LL);
        data = (__int64)BattleServantData__getSkillSealSelect(v30, 0LL);
        if ( !data )
          goto LABEL_171;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
        {
          v102 = sub_B2C460(data);
          sub_B2C400(v102, 0LL);
        }
        if ( *(_BYTE *)(data + index + 32) )
        {
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v30, index, 0LL);
          v35 = 1;
        }
        else
        {
          v35 = 0;
        }
        NotActTurn = BattleServantData__getNotActTurn(v30, 0LL);
      }
      else
      {
        v35 = 0;
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
        v35,
        v31);
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
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
      v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)data,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_171;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v43, cancelOk, 0LL);
      }
    }
    data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)data,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
        data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                 *p_skillInfo,
                 (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v44 )
        {
          Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v44,
                                      data,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)data,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v46 = (SkillLvMaster_o *)data;
              data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                       *p_skillInfo,
                       (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v46 )
                {
                  data = (__int64)SkillLvMaster__GetEntity(v46, data, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_165;
                  if ( *p_skillInfo )
                  {
                    skillNameLabel = this->fields.skillNameLabel;
                    type = (*p_skillInfo)->fields.type;
                    v49 = (SkillLvEntity_o *)data;
                    data = (__int64)SkillEntity__getName(Entity, 0LL);
                    v50 = (Il2CppObject *)data;
                    if ( type == 21 )
                    {
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v51 = skillNameLabel;
                      v52 = (System_String_o *)v50;
                    }
                    else
                    {
                      if ( !*p_skillInfo )
                        goto LABEL_171;
                      skilllv = (*p_skillInfo)->fields.skilllv;
                      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
                      data = (__int64)System_String__Format_44301068(
                                        (System_String_o *)StringLiteral_23544/*"{0}  Lv.{1}"*/,
                                        v50,
                                        v53,
                                        0LL);
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v52 = (System_String_o *)data;
                      v51 = skillNameLabel;
                    }
                    UILabel__set_text(v51, v52, 0LL);
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
                      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
                      data = (__int64)BaseMonoBehaviour__createObject_19214240(
                                        (BaseMonoBehaviour_o *)this,
                                        PATH,
                                        transform,
                                        0LL,
                                        0LL);
                      if ( data )
                      {
                        v59 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)data,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                        *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v59;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
                          v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64,
                          v65);
                        data = (__int64)*p_skillStrengthStatus;
                        if ( *p_skillStrengthStatus )
                        {
                          v105 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                          ServantSkillStrengthStatus__Set(
                            (ServantSkillStrengthStatus_o *)data,
                            this->fields.skillNameLabel,
                            skillInfo->fields.strengthStatus,
                            skillInfo->fields.skillRecord,
                            34,
                            0,
                            v105,
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
                            v67 = this->fields.skillInfo;
                            if ( v67 )
                            {
                              if ( v49 )
                              {
                                v68 = this->fields.skillConfLabel;
                                Detail_23775852 = SkillLvEntity__getDetail_23775852(v49, v67->fields.skilllv, 0, 0LL);
                                if ( isSetMinSize )
                                {
                                  v70 = BattleSkillConfComponent_TypeInfo;
                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                    v70 = BattleSkillConfComponent_TypeInfo;
                                  }
                                  p_DETAIL_FONT_SIZE = &v70->static_fields->DETAIL_FONT_SIZE;
                                  v72 = v68;
                                  v73 = Detail_23775852;
                                  v74 = *p_DETAIL_FONT_SIZE;
                                  v75 = p_DETAIL_FONT_SIZE[2];
                                  v76 = *p_DETAIL_FONT_SIZE;
                                }
                                else
                                {
                                  v74 = 22;
                                  v72 = v68;
                                  v73 = Detail_23775852;
                                  v76 = 0;
                                  v75 = 0;
                                }
                                WrapControlText__textBBCodeAdjust(v72, v73, v74, v76, v75, 0LL);
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
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                v79 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                                if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                }
                                                if ( !v79 )
                                                  goto LABEL_171;
                                                UIWidget__set_height(
                                                  v79,
                                                  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                  0LL);
                                                v80 = this->fields.skillInfo;
                                                if ( !v80 )
                                                  goto LABEL_171;
                                                v81 = this->fields.useCondSkillConfLabel;
                                                v82 = SkillLvEntity__getDetail_23775852(
                                                        v49,
                                                        v80->fields.skilllv,
                                                        0,
                                                        0LL);
                                                if ( isSetMinSize )
                                                {
                                                  v83 = BattleSkillConfComponent_TypeInfo;
                                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                    v83 = BattleSkillConfComponent_TypeInfo;
                                                  }
                                                  v84 = &v83->static_fields->DETAIL_FONT_SIZE;
                                                  v85 = v81;
                                                  v86 = v82;
                                                  v87 = *v84;
                                                  v88 = v84[2];
                                                  v89 = *v84;
                                                }
                                                else
                                                {
                                                  v87 = 22;
                                                  v85 = v81;
                                                  v86 = v82;
                                                  v89 = 0;
                                                  v88 = 0;
                                                }
                                                WrapControlText__textBBCodeAdjust(v85, v86, v87, v89, v88, 0LL);
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
                                                v90 = data;
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
                                                  v90 & 1,
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
                                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                                    v91 = (UnityEngine_Object_o *)this->fields.okButton;
                                                    v92 = (UIButtonColor_o *)data;
                                                    if ( v30 )
                                                    {
                                                      if ( !v91 )
                                                        goto LABEL_171;
                                                      UnityEngine_GameObject__SetActive(this->fields.okButton, 1, 0LL);
                                                      if ( skillInfo->fields.chargeTurn > 0
                                                        || !BattleServantData__canUseSkill(
                                                              v30,
                                                              skillInfo->fields.index,
                                                              0LL) )
                                                      {
LABEL_157:
                                                        this->fields.isPlaySkill = 0;
                                                        *(UnityEngine_Color_o *)&v94 = UnityEngine_Color__get_gray(0LL);
                                                        if ( !v92 )
                                                          goto LABEL_171;
LABEL_158:
                                                        UIButtonColor__set_defaultColor(
                                                          v92,
                                                          *(UnityEngine_Color_o *)&v94,
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
                                                      if ( !UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
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
                                                        v99 = this->fields.skillChargeLabel;
                                                        data = (__int64)System_Int32__ToString((int)v49 + 24, 0LL);
                                                        if ( v99 )
                                                        {
                                                          UILabel__set_text(v99, (System_String_o *)data, 0LL);
LABEL_165:
                                                          useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                          }
                                                          if ( UnityEngine_Object__op_Inequality(useCondRoot, 0LL, 0LL) )
                                                            BattleSkillConfComponent__SetUseCond(this, v101);
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
                                                        || !BattleSkillInfoData__IsOpenCond(skillInfo, v93) )
                                                      {
                                                        goto LABEL_157;
                                                      }
                                                    }
                                                    this->fields.isPlaySkill = 1;
                                                    *(UnityEngine_Color_o *)&v94 = UnityEngine_Color__get_white(0LL);
                                                    if ( !v92 )
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
    sub_B2C434(data, v27);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_171;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_171;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v36 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_171;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v37 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_171;
    v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v38, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t skillInfo; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v17; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *useCondItemIcon; // x21
  UserItemEntity_o *v20; // x20
  UISprite_o *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  ItemMaster_o *v24; // x20
  UISprite_o *v25; // x20
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  int32_t v28; // w0
  UnityEngine_Object_o *useCondItemCount; // x20
  bool IsOpenCond; // w0
  UILabel_o *v31; // x20
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v35; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v37; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v39; // x19
  int v40; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v41; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_418A59A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&string_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_20471/*"menu_txt_remaining"*/, v11);
    sub_B2C35C(&StringLiteral_20472/*"menu_txt_spend"*/, v12);
    sub_B2C35C(&StringLiteral_2452/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v13);
    sub_B2C35C(&StringLiteral_22149/*"skill_item_{0}"*/, v14);
    byte_418A59A = 1;
  }
  v41 = 0LL;
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
  HIDWORD(v41) = 0;
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)skillInfo,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v17 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_82;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v17, skillInfo, 0LL);
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( EntityDefinitely )
  {
    v20 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL) )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v20, 0LL);
      v21 = this->fields.useCondItemIcon;
      if ( skillInfo )
      {
        v40 = *(_DWORD *)(skillInfo + 40);
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
        v23 = System_String__Format((System_String_o *)StringLiteral_22149/*"skill_item_{0}"*/, v22, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v21, v23, 0LL);
      }
      else
      {
        if ( !v21 )
          goto LABEL_82;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v28 = UnityEngine_Mathf__Min_40694704(v20->fields.num, 999, 0LL);
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
      skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !skillInfo )
        goto LABEL_82;
      skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)skillInfo,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !this->fields.skillInfo )
        goto LABEL_82;
      v24 = (ItemMaster_o *)skillInfo;
      skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
      if ( !v24 )
        goto LABEL_82;
      skillInfo = (int64_t)ItemMaster__GetItemData(v24, skillInfo, 0LL);
      v25 = this->fields.useCondItemIcon;
      if ( skillInfo )
      {
        v40 = *(_DWORD *)(skillInfo + 40);
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
        v27 = System_String__Format((System_String_o *)StringLiteral_22149/*"skill_item_{0}"*/, v26, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v25, v27, 0LL);
      }
      else
      {
        if ( !v25 )
          goto LABEL_82;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v28 = 0;
  }
  HIDWORD(v41) = v28;
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
    v31 = this->fields.useCondItemCount;
    if ( IsOpenCond )
    {
      skillInfo = (int64_t)System_Int32__ToString((int32_t)&v41 + 4, 0LL);
      if ( !v31 )
        goto LABEL_82;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2452/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      v40 = HIDWORD(v41);
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      skillInfo = (int64_t)System_String__Format(v32, v33, 0LL);
      if ( !v31 )
        goto LABEL_82;
    }
    UILabel__set_text(v31, (System_String_o *)skillInfo, 0LL);
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
    || (v35 = this->fields.useCondItemConsumeCount,
        LODWORD(v41) = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, method),
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&v41, 0LL),
        !v35) )
  {
LABEL_82:
    sub_B2C434(skillInfo, method);
  }
  UILabel__set_text(v35, (System_String_o *)skillInfo, 0LL);
LABEL_65:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v37 = this->fields.useCondItemLess;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v37, (System_String_o *)StringLiteral_20471/*"menu_txt_remaining"*/, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v39 = this->fields.useCondItemConsume;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_20472/*"menu_txt_spend"*/, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_418A59B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A59B = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_13;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                skillConfLabel,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B2C434(skillConfLabel, method);
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A59C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16985/*"btn_close"*/, method);
    byte_418A59C = 1;
  }
  return (System_String_o *)StringLiteral_16985/*"btn_close"*/;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v9; // x20

  if ( (byte_418A598 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418A598 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    v7 = this->fields.target;
    if ( !v7 )
      goto LABEL_23;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v7,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      BattlePerformancePlayer__onClickSkillCancel((BattlePerformancePlayer_o *)Component_srcLineSprite, 0LL);
    }
    v7 = this->fields.target;
    if ( v7 )
    {
      v9 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v7,
                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) == 0 )
        goto LABEL_21;
      if ( v9 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v9, 0LL);
LABEL_21:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_23:
    sub_B2C434(v7, v6);
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v10; // x20

  if ( (byte_418A599 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A599 = 1;
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
      v8 = this->fields.target;
      if ( !v8 )
        goto LABEL_32;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v8,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_32;
        BattlePerformancePlayer__onClickSkillOK(
          (BattlePerformancePlayer_o *)Component_srcLineSprite,
          this->fields.skillInfo,
          0LL);
      }
      v8 = this->fields.target;
      if ( !v8 )
LABEL_32:
        sub_B2C434(v8, v7);
      v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v8,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( v10 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v10, this->fields.skillInfo, 0LL);
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
  sub_B2C2F8(
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