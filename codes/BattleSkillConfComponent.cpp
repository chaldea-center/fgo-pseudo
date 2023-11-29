void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FCD54 & 1) == 0 )
  {
    sub_B16FFC(&BattleSkillConfComponent_TypeInfo, v1);
    byte_40FCD54 = 1;
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
  UnityEngine_GameObject_o *v26; // x0
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v30; // x21
  const MethodInfo *v31; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  System_Boolean_array *SkillSealSelect; // x0
  __int64 v35; // x2
  __int64 index; // x1
  bool v37; // w27
  UILabel_o *v38; // x0
  UILabel_o *v39; // x0
  UnityEngine_Object_o *v40; // x20
  UILabel_o *v41; // x0
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Component_o *v43; // x0
  UnityEngine_Object_o *v44; // x19
  int32_t NotActTurn; // w4
  BattleServantSkillIConComponent_o *v46; // x0
  UnityEngine_Object_o *cancelButton; // x24
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *closeButton; // x24
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Collider_o *v52; // x24
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x23
  int32_t v56; // w0
  SkillEntity_o *Entity; // x24
  WebViewManager_o *v58; // x0
  WarQuestSelectionMaster_o *v59; // x0
  SkillLvMaster_o *v60; // x23
  int32_t v61; // w0
  SkillLvEntity_o *v62; // x0
  struct UILabel_o *skillNameLabel; // x26
  int32_t type; // w22
  SkillLvEntity_o *v65; // x23
  Il2CppObject *Name; // x27
  UILabel_o *v67; // x0
  System_String_o *v68; // x1
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  UnityEngine_Component_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  UnityEngine_Component_o *v74; // x0
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v86; // x8
  struct UILabel_o *v87; // x25
  System_String_o *Detail_23602036; // x26
  BattleSkillConfComponent_c *v89; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v91; // x0
  System_String_o *v92; // x1
  int32_t v93; // w2
  int32_t v94; // w4
  int32_t v95; // w3
  UnityEngine_GameObject_o *v96; // x0
  bool activeSelf; // w25
  UnityEngine_GameObject_o *v98; // x0
  UIScrollView_o *scrollView; // x0
  UIWidget_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  UnityEngine_Component_o *v102; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
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
  UnityEngine_GameObject_o *v116; // x0
  UnityEngine_GameObject_o *useCondRoot; // x0
  bool v118; // w0
  bool v119; // w22
  UIScrollView_o *useCondScrollView; // x0
  UIWidget_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_Component_o *v124; // x0
  UnityEngine_Collider_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_Collider_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  srcLineSprite_o *v129; // x0
  UnityEngine_Object_o *v130; // x24
  UIButtonColor_o *v131; // x22
  UnityEngine_GameObject_o *v132; // x0
  const MethodInfo *v133; // x1
  int v134; // s0
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v139; // x20
  System_String_o *v140; // x0
  UnityEngine_Object_o *v141; // x20
  const MethodInfo *v142; // x1
  int32_t skilllv; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v145; // 0:x6.8

  if ( (byte_40FCD4E & 1) == 0 )
  {
    sub_B16FFC(&BattleSkillConfComponent_TypeInfo, skillInfo);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Collider___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_23450, v22);
    sub_B16FFC(&StringLiteral_1, v23);
    byte_40FCD4E = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_B16F98(
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
  if ( UnityEngine_Object__op_Inequality(okButton, 0LL, 0LL) )
  {
    v26 = this->fields.okButton;
    if ( !v26 )
      goto LABEL_171;
    UnityEngine_GameObject__SetActive(v26, 0, 0LL);
  }
  if ( !skillInfo )
    goto LABEL_171;
  if ( skillInfo->fields.isUseSkill )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_171;
    ServantData = BattleData__getServantData(data, skillInfo->fields.svtUniqueId, 0LL);
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
        SkillSealSelect = BattleServantData__getSkillSealSelect(v30, 0LL);
        if ( !SkillSealSelect )
          goto LABEL_171;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= SkillSealSelect->max_length )
        {
          sub_B17100(SkillSealSelect, index, v35);
          sub_B170A0();
        }
        if ( SkillSealSelect->m_Items[index + 4] )
        {
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v30, index, 0LL);
          v37 = 1;
        }
        else
        {
          v37 = 0;
        }
        NotActTurn = BattleServantData__getNotActTurn(v30, 0LL);
      }
      else
      {
        v37 = 0;
        NotActTurn = 0;
        SkillSealTurn = 0;
        canUseSkill = 1;
      }
      v46 = this->fields.skillIcon;
      if ( !v46 )
        goto LABEL_171;
      BattleServantSkillIConComponent__SetSkillInfo(v46, skillInfo, canUseSkill, SkillSealTurn, NotActTurn, v37, v31);
    }
    cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
    {
      v48 = this->fields.cancelButton;
      if ( !v48 )
        goto LABEL_171;
      Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v48,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_171;
        UnityEngine_Collider__set_enabled(Component_srcLineSprite, cancelOk, 0LL);
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
      v51 = this->fields.closeButton;
      if ( !v51 )
        goto LABEL_171;
      v52 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v51,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL) )
      {
        if ( !v52 )
          goto LABEL_171;
        UnityEngine_Collider__set_enabled(v52, cancelOk, 0LL);
      }
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
        v56 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                *p_skillInfo,
                (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v55 )
        {
          Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v55,
                                      v56,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v58 )
          {
            v59 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)v58,
                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v60 = (SkillLvMaster_o *)v59;
              v61 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                      *p_skillInfo,
                      (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v60 )
                {
                  v62 = SkillLvMaster__GetEntity(v60, v61, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_165;
                  if ( *p_skillInfo )
                  {
                    skillNameLabel = this->fields.skillNameLabel;
                    type = (*p_skillInfo)->fields.type;
                    v65 = v62;
                    Name = (Il2CppObject *)SkillEntity__getName(Entity, 0LL);
                    if ( type == 21 )
                    {
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v67 = skillNameLabel;
                      v68 = (System_String_o *)Name;
                    }
                    else
                    {
                      if ( !*p_skillInfo )
                        goto LABEL_171;
                      skilllv = (*p_skillInfo)->fields.skilllv;
                      v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
                      v70 = System_String__Format_43739268((System_String_o *)StringLiteral_23450, Name, v69, 0LL);
                      if ( !skillNameLabel )
                        goto LABEL_171;
                      v68 = v70;
                      v67 = skillNameLabel;
                    }
                    UILabel__set_text(v67, v68, 0LL);
                    p_skillStrengthStatus = (UnityEngine_Component_o **)&this->fields.skillStrengthStatus;
                    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
                    {
                      if ( !*p_skillStrengthStatus )
                        goto LABEL_171;
                      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                             *p_skillStrengthStatus,
                                                             0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
                    }
                    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    v74 = (UnityEngine_Component_o *)this->fields.skillNameLabel;
                    if ( v74 )
                    {
                      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                      transform = UnityEngine_Component__get_transform(v74, 0LL);
                      Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                                          (BaseMonoBehaviour_o *)this,
                                          PATH,
                                          transform,
                                          0LL,
                                          0LL);
                      if ( Object_19257936 )
                      {
                        v78 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       Object_19257936,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                        *p_skillStrengthStatus = (UnityEngine_Component_o *)v78;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
                          v78,
                          v79,
                          v80,
                          v81,
                          v82,
                          v83,
                          v84);
                        if ( *p_skillStrengthStatus )
                        {
                          v145 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                          ServantSkillStrengthStatus__Set(
                            (ServantSkillStrengthStatus_o *)*p_skillStrengthStatus,
                            this->fields.skillNameLabel,
                            skillInfo->fields.strengthStatus,
                            skillInfo->fields.skillRecord,
                            34,
                            0,
                            v145,
                            0LL);
                          skillConfLabel = (UIWidget_o *)this->fields.skillConfLabel;
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
                            v86 = this->fields.skillInfo;
                            if ( v86 )
                            {
                              if ( v65 )
                              {
                                v87 = this->fields.skillConfLabel;
                                Detail_23602036 = SkillLvEntity__getDetail_23602036(v65, v86->fields.skilllv, 0, 0LL);
                                if ( isSetMinSize )
                                {
                                  v89 = BattleSkillConfComponent_TypeInfo;
                                  if ( (BYTE3(BattleSkillConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                    v89 = BattleSkillConfComponent_TypeInfo;
                                  }
                                  p_DETAIL_FONT_SIZE = &v89->static_fields->DETAIL_FONT_SIZE;
                                  v91 = v87;
                                  v92 = Detail_23602036;
                                  v93 = *p_DETAIL_FONT_SIZE;
                                  v94 = p_DETAIL_FONT_SIZE[2];
                                  v95 = *p_DETAIL_FONT_SIZE;
                                }
                                else
                                {
                                  v93 = 22;
                                  v91 = v87;
                                  v92 = Detail_23602036;
                                  v95 = 0;
                                  v94 = 0;
                                }
                                WrapControlText__textBBCodeAdjust(v91, v92, v93, v95, v94, 0LL);
                                v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                                if ( v96 )
                                {
                                  activeSelf = UnityEngine_GameObject__get_activeSelf(v96, 0LL);
                                  v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                                  if ( v98 )
                                  {
                                    UnityEngine_GameObject__SetActive(v98, 1, 0LL);
                                    scrollView = this->fields.scrollView;
                                    if ( scrollView )
                                    {
                                      UIScrollView__ResetPosition(scrollView, 0LL);
                                      v100 = (UIWidget_o *)this->fields.skillConfLabel;
                                      if ( v100 )
                                      {
                                        UIWidget__ResizeCollider(v100, 0LL);
                                        v101 = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
                                        if ( v101 )
                                        {
                                          UnityEngine_GameObject__SetActive(v101, activeSelf, 0LL);
                                          v102 = (UnityEngine_Component_o *)this->fields.skillConfLabel;
                                          if ( v102 )
                                          {
                                            Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                                  v102,
                                                                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                            if ( Component_WebViewObject )
                                            {
                                              UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
                                              useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
                                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              }
                                              if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
                                              {
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
                                                v108 = SkillLvEntity__getDetail_23602036(
                                                         v65,
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
                                                v116 = UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                                                if ( !v116 )
                                                  goto LABEL_171;
                                                UnityEngine_GameObject__SetActive(v116, 1, 0LL);
                                                useCondRoot = this->fields.useCondRoot;
                                                if ( !useCondRoot )
                                                  goto LABEL_171;
                                                v118 = UnityEngine_GameObject__get_activeSelf(useCondRoot, 0LL);
                                                if ( !this->fields.useCondRoot )
                                                  goto LABEL_171;
                                                v119 = v118;
                                                UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
                                                useCondScrollView = this->fields.useCondScrollView;
                                                if ( !useCondScrollView )
                                                  goto LABEL_171;
                                                UIScrollView__ResetPosition(useCondScrollView, 0LL);
                                                v121 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                                if ( !v121 )
                                                  goto LABEL_171;
                                                UIWidget__ResizeCollider(v121, 0LL);
                                                v122 = this->fields.useCondRoot;
                                                if ( !v122 )
                                                  goto LABEL_171;
                                                UnityEngine_GameObject__SetActive(v122, v119, 0LL);
                                                v123 = UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                                                if ( !v123 )
                                                  goto LABEL_171;
                                                UnityEngine_GameObject__SetActive(v123, activeSelf, 0LL);
                                                v124 = (UnityEngine_Component_o *)this->fields.useCondSkillConfLabel;
                                                if ( !v124 )
                                                  goto LABEL_171;
                                                v125 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                   v124,
                                                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                                if ( !v125 )
                                                  goto LABEL_171;
                                                UnityEngine_Collider__set_enabled(v125, 0, 0LL);
                                              }
                                              if ( !SkillEntity__isActive(Entity, 0LL) )
                                                goto LABEL_165;
                                              v126 = this->fields.okButton;
                                              if ( v126 )
                                              {
                                                v127 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                   v126,
                                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
                                                if ( v127 )
                                                {
                                                  UnityEngine_Collider__set_enabled(v127, 1, 0LL);
                                                  v128 = this->fields.okButton;
                                                  if ( v128 )
                                                  {
                                                    v129 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v128,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                                    v130 = (UnityEngine_Object_o *)this->fields.okButton;
                                                    v131 = (UIButtonColor_o *)v129;
                                                    if ( v30 )
                                                    {
                                                      if ( !v130 )
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
                                                        *(UnityEngine_Color_o *)&v134 = UnityEngine_Color__get_gray(0LL);
                                                        if ( !v131 )
                                                          goto LABEL_171;
LABEL_158:
                                                        UIButtonColor__set_defaultColor(
                                                          v131,
                                                          *(UnityEngine_Color_o *)&v134,
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
                                                      if ( !UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
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
                                                        v139 = this->fields.skillChargeLabel;
                                                        v140 = System_Int32__ToString((int)v65 + 24, 0LL);
                                                        if ( v139 )
                                                        {
                                                          UILabel__set_text(v139, v140, 0LL);
LABEL_165:
                                                          v141 = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                          }
                                                          if ( UnityEngine_Object__op_Inequality(v141, 0LL, 0LL) )
                                                            BattleSkillConfComponent__SetUseCond(this, v142);
                                                          return;
                                                        }
                                                        goto LABEL_171;
                                                      }
                                                      v132 = this->fields.okButton;
                                                      if ( !v132 )
                                                        goto LABEL_171;
                                                      UnityEngine_GameObject__SetActive(v132, 1, 0LL);
                                                      if ( skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn > 0
                                                        || !BattleSkillInfoData__IsOpenCond(skillInfo, v133) )
                                                      {
                                                        goto LABEL_157;
                                                      }
                                                    }
                                                    this->fields.isPlaySkill = 1;
                                                    *(UnityEngine_Color_o *)&v134 = UnityEngine_Color__get_white(0LL);
                                                    if ( !v131 )
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
    sub_B170D4();
  }
  v38 = this->fields.skillNameLabel;
  if ( !v38 )
    goto LABEL_171;
  UILabel__set_text(v38, (System_String_o *)StringLiteral_1, 0LL);
  v39 = this->fields.skillConfLabel;
  if ( !v39 )
    goto LABEL_171;
  UILabel__set_text(v39, (System_String_o *)StringLiteral_1, 0LL);
  v40 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    v41 = this->fields.useCondSkillConfLabel;
    if ( !v41 )
      goto LABEL_171;
    UILabel__set_text(v41, (System_String_o *)StringLiteral_1, 0LL);
  }
  v42 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    v43 = (UnityEngine_Component_o *)this->fields.skillStrengthStatus;
    if ( !v43 )
      goto LABEL_171;
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v43, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v44, 0LL);
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
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x21
  int32_t CondItemId; // w0
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *useCondItemIcon; // x21
  UserItemEntity_o *v26; // x20
  ItemEntity_o *ItemInfo; // x0
  UISprite_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x22
  UnityEngine_GameObject_o *useCondRoot; // x0
  UnityEngine_GameObject_o *noCondRoot; // x0
  WebViewManager_o *v33; // x0
  WarQuestSelectionMaster_o *v34; // x0
  const MethodInfo *v35; // x1
  ItemMaster_o *v36; // x20
  int32_t v37; // w0
  ItemEntity_o *ItemData; // x0
  UISprite_o *v39; // x20
  Il2CppObject *v40; // x0
  System_String_o *v41; // x21
  int32_t v42; // w0
  UnityEngine_Object_o *useCondItemCount; // x20
  const MethodInfo *v44; // x1
  BattleSkillInfoData_o *v45; // x0
  bool IsOpenCond; // w0
  UILabel_o *v47; // x20
  System_String_o *v48; // x0
  System_String_o *v49; // x21
  Il2CppObject *v50; // x0
  UILabel_o *v51; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  const MethodInfo *v53; // x1
  BattleSkillInfoData_o *v54; // x0
  UILabel_o *v55; // x20
  System_String_o *v56; // x0
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v58; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v60; // x19
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v62; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FCD51 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&string_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_20388, v11);
    sub_B16FFC(&StringLiteral_20389, v12);
    sub_B16FFC(&StringLiteral_2443, v13);
    sub_B16FFC(&StringLiteral_22057, v14);
    byte_40FCD51 = 1;
  }
  v62 = 0LL;
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_82;
  if ( !BattleSkillInfoData__HasCond(skillInfo, method) )
  {
    useCondRoot = this->fields.useCondRoot;
    if ( useCondRoot )
    {
      UnityEngine_GameObject__SetActive(useCondRoot, 0, 0LL);
      noCondRoot = this->fields.noCondRoot;
      if ( noCondRoot )
      {
        UnityEngine_GameObject__SetActive(noCondRoot, 1, 0LL);
        return;
      }
    }
    goto LABEL_82;
  }
  v16 = this->fields.noCondRoot;
  if ( !v16 )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  v17 = this->fields.useCondRoot;
  if ( !v17 )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  HIDWORD(v62) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v22 = UserId;
  CondItemId = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v21);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_82;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v22, CondItemId, 0LL);
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( EntityDefinitely )
  {
    v26 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL) )
    {
      ItemInfo = UserItemEntity__getItemInfo(v26, 0LL);
      v28 = this->fields.useCondItemIcon;
      if ( ItemInfo )
      {
        imageId = ItemInfo->fields.imageId;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
        v30 = System_String__Format((System_String_o *)StringLiteral_22057, v29, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v28, v30, 0LL);
      }
      else
      {
        if ( !v28 )
          goto LABEL_82;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v42 = UnityEngine_Mathf__Min_40727532(v26->fields.num, 999, 0LL);
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
      v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v33 )
        goto LABEL_82;
      v34 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v33,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !this->fields.skillInfo )
        goto LABEL_82;
      v36 = (ItemMaster_o *)v34;
      v37 = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v35);
      if ( !v36 )
        goto LABEL_82;
      ItemData = ItemMaster__GetItemData(v36, v37, 0LL);
      v39 = this->fields.useCondItemIcon;
      if ( ItemData )
      {
        imageId = ItemData->fields.imageId;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
        v41 = System_String__Format((System_String_o *)StringLiteral_22057, v40, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v39, v41, 0LL);
      }
      else
      {
        if ( !v39 )
          goto LABEL_82;
        UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v42 = 0;
  }
  HIDWORD(v62) = v42;
  useCondItemCount = (UnityEngine_Object_o *)this->fields.useCondItemCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemCount, 0LL, 0LL) )
  {
    v45 = this->fields.skillInfo;
    if ( !v45 )
      goto LABEL_82;
    IsOpenCond = BattleSkillInfoData__IsOpenCond(v45, v44);
    v47 = this->fields.useCondItemCount;
    if ( IsOpenCond )
    {
      v48 = System_Int32__ToString((int32_t)&v62 + 4, 0LL);
      if ( !v47 )
        goto LABEL_82;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2443, 0LL);
      imageId = HIDWORD(v62);
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v48 = System_String__Format(v49, v50, 0LL);
      if ( !v47 )
        goto LABEL_82;
    }
    UILabel__set_text(v47, v48, 0LL);
    v51 = this->fields.useCondItemCount;
    if ( !v51 )
      goto LABEL_82;
    UILabel__SetCondensedScale(v51, 40, 0LL);
  }
  useCondItemConsumeCount = (UnityEngine_Object_o *)this->fields.useCondItemConsumeCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(useCondItemConsumeCount, 0LL, 0LL) )
    goto LABEL_65;
  v54 = this->fields.skillInfo;
  if ( !v54
    || (v55 = this->fields.useCondItemConsumeCount,
        LODWORD(v62) = BattleSkillInfoData__GetCondItemNumber(v54, v53),
        v56 = System_Int32__ToString((int32_t)&v62, 0LL),
        !v55) )
  {
LABEL_82:
    sub_B170D4();
  }
  UILabel__set_text(v55, v56, 0LL);
LABEL_65:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v58 = this->fields.useCondItemLess;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v58, (System_String_o *)StringLiteral_20388, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v60 = this->fields.useCondItemConsume;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v60, (System_String_o *)StringLiteral_20389, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Collider_o *v8; // x0

  if ( (byte_40FCD52 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCD52 = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_13;
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        skillConfLabel,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !Component_WebViewObject )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
  useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.useCondSkillConfLabel;
    if ( v7 )
    {
      v8 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                       v7,
                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( v8 )
      {
        UnityEngine_Collider__set_enabled(v8, 1, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B170D4();
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCD53 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16919, method);
    byte_40FCD53 = 1;
  }
  return (System_String_o *)StringLiteral_16919;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v6; // x0
  BattlePerformancePlayer_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *v9; // x20

  if ( (byte_40FCD4F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FCD4F = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    v6 = this->fields.target;
    if ( !v6 )
      goto LABEL_23;
    Component_srcLineSprite = (BattlePerformancePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v6,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      BattlePerformancePlayer__onClickSkillCancel(Component_srcLineSprite, 0LL);
    }
    v8 = this->fields.target;
    if ( v8 )
    {
      v9 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v8,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v7; // x0
  BattlePerformancePlayer_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v9; // x0
  BattlePerformanceMaster_o *v10; // x20

  if ( (byte_40FCD50 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FCD50 = 1;
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
      v7 = this->fields.target;
      if ( !v7 )
        goto LABEL_32;
      Component_srcLineSprite = (BattlePerformancePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v7,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_32;
        BattlePerformancePlayer__onClickSkillOK(Component_srcLineSprite, this->fields.skillInfo, 0LL);
      }
      v9 = this->fields.target;
      if ( !v9 )
LABEL_32:
        sub_B170D4();
      v10 = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v9,
                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
      {
        if ( v10 )
        {
          BattlePerformanceMaster__onClickSkillOK(v10, this->fields.skillInfo, 0LL);
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
  sub_B16F98(
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