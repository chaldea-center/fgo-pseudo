void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB2C3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillConfComponent_TypeInfo, v1, v2, v3);
    byte_42EB2C3 = 1;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  struct BattleSkillInfoData_o **p_skillInfo; // x25
  UnityEngine_Object_o *okButton; // x21
  __int64 data; // x0
  __int64 v53; // x1
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v56; // x21
  const MethodInfo *v57; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  bool v61; // w27
  UnityEngine_Object_o *v62; // x20
  UnityEngine_Object_o *v63; // x20
  UnityEngine_Object_o *v64; // x19
  int32_t NotActTurn; // w4
  UnityEngine_Object_o *cancelButton; // x24
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *closeButton; // x24
  UnityEngine_Object_o *v69; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x23
  SkillEntity_o *Entity; // x24
  SkillLvMaster_o *v72; // x23
  struct UILabel_o *skillNameLabel; // x26
  int32_t type; // w22
  SkillLvEntity_o *v75; // x23
  Il2CppObject *v76; // x27
  UILabel_o *v77; // x0
  System_String_o *v78; // x1
  Il2CppObject *v79; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v93; // x8
  struct UILabel_o *v94; // x25
  System_String_o *Detail_26810736; // x26
  BattleSkillConfComponent_c *v96; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v98; // x0
  System_String_o *v99; // x1
  int32_t v100; // w2
  int32_t v101; // w4
  int32_t v102; // w3
  bool activeSelf; // w25
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v105; // x26
  struct BattleSkillInfoData_o *v106; // x8
  struct UILabel_o *v107; // x26
  System_String_o *v108; // x27
  BattleSkillConfComponent_c *v109; // x0
  int32_t *v110; // x8
  UILabel_o *v111; // x0
  System_String_o *v112; // x1
  int32_t v113; // w2
  int32_t v114; // w4
  int32_t v115; // w3
  char v116; // w22
  UnityEngine_Object_o *v117; // x24
  UIButtonColor_o *v118; // x22
  const MethodInfo *v119; // x1
  int v120; // s0
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v125; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v127; // x1
  __int64 v128; // x0
  int32_t skilllv; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v131; // 0:x6.8

  if ( (byte_42EB2BD & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillConfComponent_TypeInfo, (_DWORD)skillInfo, cancelOk, isSetMinSize);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v29, v30, v31);
    sub_B5D5C4(&int_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_23856/*"{0}  Lv.{1}"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    byte_42EB2BD = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_B5D560(
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
    v56 = ServantData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0LL, 0LL) )
    {
      if ( v56 )
      {
        canUseSkill = BattleServantData__canUseSkill(v56, skillInfo->fields.index, 0LL);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v56, 0LL);
        data = (__int64)BattleServantData__getSkillSealSelect(v56, 0LL);
        if ( !data )
          goto LABEL_171;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
        {
          v128 = sub_B5D6C8(data);
          sub_B5D668(v128, 0LL);
        }
        if ( *(_BYTE *)(data + index + 32) )
        {
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v56, index, 0LL);
          v61 = 1;
        }
        else
        {
          v61 = 0;
        }
        NotActTurn = BattleServantData__getNotActTurn(v56, 0LL);
      }
      else
      {
        v61 = 0;
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
        v61,
        v57);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
      v69 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)data,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !v69 )
          goto LABEL_171;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v69, cancelOk, 0LL);
      }
    }
    data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)data,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
        data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                 *p_skillInfo,
                 (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v70 )
        {
          Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v70,
                                      data,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)data,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v72 = (SkillLvMaster_o *)data;
              data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                       *p_skillInfo,
                       (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v72 )
                {
                  data = (__int64)SkillLvMaster__GetEntity(v72, data, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_165;
                  if ( *p_skillInfo )
                  {
                    skillNameLabel = this->fields.skillNameLabel;
                    type = (*p_skillInfo)->fields.type;
                    v75 = (SkillLvEntity_o *)data;
                    data = (__int64)SkillEntity__getName(Entity, 0LL);
                    v76 = (Il2CppObject *)data;
                    if ( type == 21 )
                    {
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v77 = skillNameLabel;
                      v78 = (System_String_o *)v76;
                    }
                    else
                    {
                      if ( !*p_skillInfo )
                        goto LABEL_171;
                      skilllv = (*p_skillInfo)->fields.skilllv;
                      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
                      data = (__int64)System_String__Format_44573324(
                                        (System_String_o *)StringLiteral_23856/*"{0}  Lv.{1}"*/,
                                        v76,
                                        v79,
                                        0LL);
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v78 = (System_String_o *)data;
                      v77 = skillNameLabel;
                    }
                    UILabel__set_text(v77, v78, 0LL);
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
                      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
                      data = (__int64)BaseMonoBehaviour__createObject_21082944(
                                        (BaseMonoBehaviour_o *)this,
                                        PATH,
                                        transform,
                                        0LL,
                                        0LL);
                      if ( data )
                      {
                        v85 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)data,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                        *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v85;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
                          v85,
                          v86,
                          v87,
                          v88,
                          v89,
                          v90,
                          v91);
                        data = (__int64)*p_skillStrengthStatus;
                        if ( *p_skillStrengthStatus )
                        {
                          v131 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                          ServantSkillStrengthStatus__Set(
                            (ServantSkillStrengthStatus_o *)data,
                            this->fields.skillNameLabel,
                            skillInfo->fields.strengthStatus,
                            skillInfo->fields.skillRecord,
                            34,
                            0,
                            v131,
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
                            v93 = this->fields.skillInfo;
                            if ( v93 )
                            {
                              if ( v75 )
                              {
                                v94 = this->fields.skillConfLabel;
                                Detail_26810736 = SkillLvEntity__getDetail_26810736(v75, v93->fields.skilllv, 0, 0LL);
                                if ( isSetMinSize )
                                {
                                  v96 = BattleSkillConfComponent_TypeInfo;
                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                    v96 = BattleSkillConfComponent_TypeInfo;
                                  }
                                  p_DETAIL_FONT_SIZE = &v96->static_fields->DETAIL_FONT_SIZE;
                                  v98 = v94;
                                  v99 = Detail_26810736;
                                  v100 = *p_DETAIL_FONT_SIZE;
                                  v101 = p_DETAIL_FONT_SIZE[2];
                                  v102 = *p_DETAIL_FONT_SIZE;
                                }
                                else
                                {
                                  v100 = 22;
                                  v98 = v94;
                                  v99 = Detail_26810736;
                                  v102 = 0;
                                  v101 = 0;
                                }
                                WrapControlText__textBBCodeAdjust(v98, v99, v100, v102, v101, 0LL);
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
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                v105 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                                if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                }
                                                if ( !v105 )
                                                  goto LABEL_171;
                                                UIWidget__set_height(
                                                  v105,
                                                  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                  0LL);
                                                v106 = this->fields.skillInfo;
                                                if ( !v106 )
                                                  goto LABEL_171;
                                                v107 = this->fields.useCondSkillConfLabel;
                                                v108 = SkillLvEntity__getDetail_26810736(
                                                         v75,
                                                         v106->fields.skilllv,
                                                         0,
                                                         0LL);
                                                if ( isSetMinSize )
                                                {
                                                  v109 = BattleSkillConfComponent_TypeInfo;
                                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                    v109 = BattleSkillConfComponent_TypeInfo;
                                                  }
                                                  v110 = &v109->static_fields->DETAIL_FONT_SIZE;
                                                  v111 = v107;
                                                  v112 = v108;
                                                  v113 = *v110;
                                                  v114 = v110[2];
                                                  v115 = *v110;
                                                }
                                                else
                                                {
                                                  v113 = 22;
                                                  v111 = v107;
                                                  v112 = v108;
                                                  v115 = 0;
                                                  v114 = 0;
                                                }
                                                WrapControlText__textBBCodeAdjust(v111, v112, v113, v115, v114, 0LL);
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
                                                v116 = data;
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
                                                  v116 & 1,
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
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                                    v117 = (UnityEngine_Object_o *)this->fields.okButton;
                                                    v118 = (UIButtonColor_o *)data;
                                                    if ( v56 )
                                                    {
                                                      if ( !v117 )
                                                        goto LABEL_171;
                                                      UnityEngine_GameObject__SetActive(this->fields.okButton, 1, 0LL);
                                                      if ( skillInfo->fields.chargeTurn > 0
                                                        || !BattleServantData__canUseSkill(
                                                              v56,
                                                              skillInfo->fields.index,
                                                              0LL) )
                                                      {
LABEL_157:
                                                        this->fields.isPlaySkill = 0;
                                                        *(UnityEngine_Color_o *)&v120 = UnityEngine_Color__get_gray(0LL);
                                                        if ( !v118 )
                                                          goto LABEL_171;
LABEL_158:
                                                        UIButtonColor__set_defaultColor(
                                                          v118,
                                                          *(UnityEngine_Color_o *)&v120,
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
                                                      if ( !UnityEngine_Object__op_Inequality(v117, 0LL, 0LL) )
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
                                                        v125 = this->fields.skillChargeLabel;
                                                        data = (__int64)System_Int32__ToString((int)v75 + 24, 0LL);
                                                        if ( v125 )
                                                        {
                                                          UILabel__set_text(v125, (System_String_o *)data, 0LL);
LABEL_165:
                                                          useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                          }
                                                          if ( UnityEngine_Object__op_Inequality(useCondRoot, 0LL, 0LL) )
                                                            BattleSkillConfComponent__SetUseCond(this, v127);
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
                                                        || !BattleSkillInfoData__IsOpenCond(skillInfo, v119) )
                                                      {
                                                        goto LABEL_157;
                                                      }
                                                    }
                                                    this->fields.isPlaySkill = 1;
                                                    *(UnityEngine_Color_o *)&v120 = UnityEngine_Color__get_white(0LL);
                                                    if ( !v118 )
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
    sub_B5D69C(data, v53);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_171;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_171;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v62 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_171;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v63 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_171;
    v64 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v64, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int64_t skillInfo; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x20
  UnityEngine_Object_o *useCondItemIcon; // x20
  UISprite_o *v53; // x20
  int32_t longName; // w21
  int32_t num; // w0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v57; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v59; // x21
  UserItemEntity_o *v60; // x20
  UISprite_o *v61; // x21
  Il2CppObject *v62; // x0
  System_String_o *v63; // x22
  ItemMaster_o *v64; // x20
  UISprite_o *v65; // x20
  Il2CppObject *v66; // x0
  System_String_o *v67; // x21
  int v68; // w20
  UnityEngine_Object_o *useCondItemCount; // x21
  UILabel_o *v70; // x21
  System_String_o *v71; // x22
  Il2CppObject *v72; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v74; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v76; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v78; // x19
  int v79; // [xsp+8h] [xbp-38h] BYREF
  int32_t CondItemNumber; // [xsp+Ch] [xbp-34h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EB2C0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&string_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_20731/*"menu_txt_remaining"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_20732/*"menu_txt_spend"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_2505/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_22451/*"skill_item_{0}"*/, v47, v48, v49);
    byte_42EB2C0 = 1;
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
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_104;
  skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_104;
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
  if ( !v51 )
    goto LABEL_104;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v51,
         &entity,
         skillInfo,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
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
      v53 = this->fields.useCondItemIcon;
      longName = (int32_t)entity->fields.longName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      skillInfo = AtlasManager__SetItem(v53, longName, 0LL);
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
      skillInfo = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( !entity || !skillInfo )
        goto LABEL_104;
      num = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, entity->fields.id, 0LL);
      goto LABEL_62;
    }
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_104;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)skillInfo,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_104;
  v57 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_104;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v57, skillInfo, 0LL);
  v59 = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( EntityDefinitely )
  {
    v60 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v60, 0LL);
      v61 = this->fields.useCondItemIcon;
      if ( skillInfo )
      {
        v79 = *(_DWORD *)(skillInfo + 40);
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
        v63 = System_String__Format((System_String_o *)StringLiteral_22451/*"skill_item_{0}"*/, v62, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v61, v63, 0LL);
      }
      else
      {
        if ( !v61 )
          goto LABEL_104;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v60->fields.num;
LABEL_62:
    v68 = UnityEngine_Mathf__Min_41629336(num, 9999, 0LL);
    goto LABEL_66;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) )
  {
    skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_104;
    skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)skillInfo,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_104;
    v64 = (ItemMaster_o *)skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, method);
    if ( !v64 )
      goto LABEL_104;
    skillInfo = (int64_t)ItemMaster__GetItemData(v64, skillInfo, 0LL);
    v65 = this->fields.useCondItemIcon;
    if ( skillInfo )
    {
      v79 = *(_DWORD *)(skillInfo + 40);
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
      v67 = System_String__Format((System_String_o *)StringLiteral_22451/*"skill_item_{0}"*/, v66, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v65, v67, 0LL);
    }
    else
    {
      if ( !v65 )
        goto LABEL_104;
      UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
  v68 = 0;
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
    v70 = this->fields.useCondItemCount;
    if ( BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, method) )
    {
      skillInfo = (int64_t)BasicHelper__ToCommaString(v68, 0LL);
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      v79 = v68;
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
      skillInfo = (int64_t)System_String__Format(v71, v72, 0LL);
    }
    method = (const MethodInfo *)skillInfo;
    if ( !v70 )
      goto LABEL_104;
    UILabel__set_text(v70, (System_String_o *)skillInfo, 0LL);
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
    || (v74 = this->fields.useCondItemConsumeCount,
        CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, method),
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&CondItemNumber, 0LL),
        !v74) )
  {
LABEL_104:
    sub_B5D69C(skillInfo, method);
  }
  UILabel__set_text(v74, (System_String_o *)skillInfo, 0LL);
LABEL_87:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v76 = this->fields.useCondItemLess;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v76, (System_String_o *)StringLiteral_20731/*"menu_txt_remaining"*/, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v78 = this->fields.useCondItemConsume;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v78, (System_String_o *)StringLiteral_20732/*"menu_txt_spend"*/, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_42EB2C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB2C1 = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_13;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                skillConfLabel,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B5D69C(skillConfLabel, method);
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB2C2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17194/*"btn_close"*/, (_DWORD)method, v2, v3);
    byte_42EB2C2 = 1;
  }
  return (System_String_o *)StringLiteral_17194/*"btn_close"*/;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *target; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v15; // x20

  if ( (byte_42EB2BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EB2BE = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    v13 = this->fields.target;
    if ( !v13 )
      goto LABEL_23;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v13,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      BattlePerformancePlayer__onClickSkillCancel((BattlePerformancePlayer_o *)Component_srcLineSprite, 0LL);
    }
    v13 = this->fields.target;
    if ( v13 )
    {
      v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v13,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)v13 & 1) == 0 )
        goto LABEL_21;
      if ( v15 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v15, 0LL);
LABEL_21:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_23:
    sub_B5D69C(v13, v12);
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *target; // x20
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v18; // x20

  if ( (byte_42EB2BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB2BF = 1;
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
      v16 = this->fields.target;
      if ( !v16 )
        goto LABEL_32;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v16,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)v16 & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_32;
        BattlePerformancePlayer__onClickSkillOK(
          (BattlePerformancePlayer_o *)Component_srcLineSprite,
          this->fields.skillInfo,
          0LL);
      }
      v16 = this->fields.target;
      if ( !v16 )
LABEL_32:
        sub_B5D69C(v16, v15);
      v18 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v16,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)v16 & 1) != 0 )
      {
        if ( v18 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v18, this->fields.skillInfo, 0LL);
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
  sub_B5D560(
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