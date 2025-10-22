void BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C5A4DA & 1) == 0 )
  {
    sub_1C3E564(&BattleSkillConfComponent_TypeInfo);
    byte_4C5A4DA = 1;
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
  struct BattleSkillInfoData_o **p_skillInfo; // x25
  UnityEngine_Object_o *skillTitleLabel; // x21
  UILabel_o *v11; // x21
  __int64 data; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *okButton; // x21
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v17; // x21
  const MethodInfo *v18; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  int v22; // w27
  bool v23; // w27
  int32_t NotActTurn; // w4
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_o *v27; // x19
  UnityEngine_Object_o *cancelButton; // x24
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *closeButton; // x24
  Il2CppObject *v31; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x23
  SkillEntity_o *Entity; // x24
  SkillLvMaster_o *v34; // x23
  SkillLvEntity_o *v35; // x0
  SkillLvEntity_o *v36; // x27
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  System_String_o *v43; // x26
  struct BattleSkillInfoData_o *v44; // x8
  struct UILabel_o *skillNameLabel; // x25
  UILabel_o *v46; // x0
  System_String_o *v47; // x1
  Il2CppObject *v48; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v54; // x0
  char v55; // w2
  const MethodInfo *v56; // x3
  UnityEngine_Vector2Int_o v57; // x6
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v59; // x8
  struct UILabel_o *v60; // x25
  System_String_o *Detail_42932260; // x26
  BattleSkillConfComponent_c *v62; // x0
  int32_t *static_fields; // x8
  UILabel_o *v64; // x0
  System_String_o *v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  bool activeSelf; // w25
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v70; // x26
  struct BattleSkillInfoData_o *v71; // x8
  struct UILabel_o *v72; // x26
  int v73; // w23
  System_String_o *v74; // x27
  BattleSkillConfComponent_c *v75; // x0
  int32_t *v76; // x8
  UILabel_o *v77; // x0
  System_String_o *v78; // x1
  int32_t v79; // w2
  int32_t v80; // w3
  char v81; // w22
  Il2CppObject *v82; // x22
  UnityEngine_Object_o *v83; // x21
  float v84; // s0 OVERLAPPED
  float v85; // s3
  float v86; // s1
  float v87; // s2
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v89; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v91; // x1
  int32_t skilllv; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C5A4D4 & 1) == 0 )
  {
    sub_1C3E564(&BattleSkillConfComponent_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_2879/*"BATTLE_SKILL_CONF_TITLE"*/);
    sub_1C3E564(&StringLiteral_25126/*"{0}  Lv.{1}"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A4D4 = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    cancelOk,
    (const MethodInfo *)isSetMinSize);
  skillTitleLabel = (UnityEngine_Object_o *)this->fields.skillTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleLabel, 0, 0) )
  {
    v11 = this->fields.skillTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    data = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_SKILL_CONF_TITLE"*/, 0);
    if ( !v11 )
      goto LABEL_160;
    UILabel__set_text(v11, (System_String_o *)data, 0);
  }
  okButton = (UnityEngine_Object_o *)this->fields.okButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = UnityEngine_Object__op_Inequality(okButton, 0, 0);
  if ( (data & 1) != 0 )
  {
    data = (__int64)this->fields.okButton;
    if ( !data )
      goto LABEL_160;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
  }
  if ( !skillInfo )
    goto LABEL_160;
  if ( skillInfo->fields.isUseSkill )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_160;
    ServantData = BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0);
    skillIcon = (UnityEngine_Object_o *)this->fields.skillIcon;
    v17 = ServantData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0, 0) )
    {
      if ( v17 )
      {
        canUseSkill = BattleServantData__canUseSkill(v17, skillInfo->fields.index, 0);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v17, 0);
        data = (__int64)BattleServantData__getSkillSealSelect(v17, 0);
        if ( !data )
          goto LABEL_160;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
          sub_1C3E7C8(data, index);
        v22 = *(unsigned __int8 *)(data + index + 32);
        if ( *(_BYTE *)(data + index + 32) )
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v17, index, 0);
        v23 = v22 != 0;
        NotActTurn = BattleServantData__getNotActTurn(v17, 0);
      }
      else
      {
        v23 = 0;
        NotActTurn = 0;
        SkillSealTurn = 0;
        canUseSkill = 1;
      }
      data = (__int64)this->fields.skillIcon;
      if ( !data )
        goto LABEL_160;
      BattleServantSkillIConComponent__SetSkillInfo(
        (BattleServantSkillIConComponent_o *)data,
        skillInfo,
        canUseSkill,
        SkillSealTurn,
        NotActTurn,
        v23,
        v18);
    }
    cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cancelButton, 0, 0) )
    {
      data = (__int64)this->fields.cancelButton;
      if ( !data )
        goto LABEL_160;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( (data & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_160;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, cancelOk, 0);
      }
    }
    closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeButton, 0, 0) )
    {
      data = (__int64)this->fields.closeButton;
      if ( !data )
        goto LABEL_160;
      v31 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)data,
              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0, 0);
      if ( (data & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_160;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v31, cancelOk, 0);
      }
    }
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        data = (__int64)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))(*p_skillInfo)->klass->vtable._5_get_skillId.methodPtr)(
                          *p_skillInfo,
                          *p_skillInfo,
                          (*p_skillInfo)->klass->vtable._5_get_skillId.method);
        if ( v32 )
        {
          Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v32,
                                      data,
                                      (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)data,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v34 = (SkillLvMaster_o *)data;
              data = (__int64)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))(*p_skillInfo)->klass->vtable._5_get_skillId.methodPtr)(
                                *p_skillInfo,
                                *p_skillInfo,
                                (*p_skillInfo)->klass->vtable._5_get_skillId.method);
              if ( *p_skillInfo )
              {
                if ( v34 )
                {
                  v35 = SkillLvMaster__GetEntity(v34, data, (*p_skillInfo)->fields.skilllv, 0);
                  if ( !Entity )
                    goto LABEL_155;
                  v36 = v35;
                  data = (__int64)SkillEntity__getName(Entity, 0);
                  v43 = (System_String_o *)data;
                  if ( v17 )
                  {
                    data = (__int64)v17->fields.svtlimitaddent;
                    if ( data )
                    {
                      data = (__int64)ServantLimitAddEntity__GetOverwriteSkillName(
                                        (ServantLimitAddEntity_o *)data,
                                        Entity->fields.id,
                                        v43,
                                        0);
                      v43 = (System_String_o *)data;
                    }
                  }
                  v44 = *p_skillInfo;
                  if ( *p_skillInfo )
                  {
                    skillNameLabel = this->fields.skillNameLabel;
                    if ( v44->fields.type == 21 )
                    {
                      if ( !skillNameLabel )
                        goto LABEL_160;
                      v46 = this->fields.skillNameLabel;
                      v47 = v43;
                    }
                    else
                    {
                      skilllv = v44->fields.skilllv;
                      v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v37, v38, v39, v40, v41, v42);
                      data = (__int64)System_String__Format_63677760(
                                        (System_String_o *)StringLiteral_25126/*"{0}  Lv.{1}"*/,
                                        (Il2CppObject *)v43,
                                        v48,
                                        0);
                      if ( !skillNameLabel )
                        goto LABEL_160;
                      v47 = (System_String_o *)data;
                      v46 = skillNameLabel;
                    }
                    UILabel__set_text(v46, v47, 0);
                    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
                    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
                    {
                      data = (__int64)*p_skillStrengthStatus;
                      if ( !*p_skillStrengthStatus )
                        goto LABEL_160;
                      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)data,
                                                             0);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_71341564(gameObject, 0);
                    }
                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    data = (__int64)this->fields.skillNameLabel;
                    if ( data )
                    {
                      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
                      data = (__int64)BaseMonoBehaviour__createObject_41233740(
                                        (BaseMonoBehaviour_o *)this,
                                        PATH,
                                        transform,
                                        0,
                                        0);
                      if ( data )
                      {
                        v54 = UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                        *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v54;
                        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.skillStrengthStatus, (int32_t)v54, v55, v56);
                        data = (__int64)*p_skillStrengthStatus;
                        if ( *p_skillStrengthStatus )
                        {
                          v57 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                          ServantSkillStrengthStatus__Set(
                            (ServantSkillStrengthStatus_o *)data,
                            this->fields.skillNameLabel,
                            skillInfo->fields.strengthStatus,
                            skillInfo->fields.skillRecord,
                            34,
                            0,
                            v57,
                            450,
                            0,
                            0);
                          skillConfLabel = (UIWidget_o *)this->fields.skillConfLabel;
                          data = (__int64)BattleSkillConfComponent_TypeInfo;
                          if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                          if ( skillConfLabel )
                          {
                            UIWidget__set_height(
                              skillConfLabel,
                              BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                              0);
                            v59 = this->fields.skillInfo;
                            if ( v59 )
                            {
                              if ( v36 )
                              {
                                v60 = this->fields.skillConfLabel;
                                Detail_42932260 = SkillLvEntity__getDetail_42932260(v36, v59->fields.skilllv, 0, 0);
                                if ( isSetMinSize )
                                {
                                  v62 = BattleSkillConfComponent_TypeInfo;
                                  if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                    v62 = BattleSkillConfComponent_TypeInfo;
                                  }
                                  static_fields = (int32_t *)v62->static_fields;
                                  v64 = v60;
                                  v65 = Detail_42932260;
                                  v66 = *static_fields;
                                  v67 = *static_fields;
                                }
                                else
                                {
                                  v66 = 22;
                                  v64 = v60;
                                  v65 = Detail_42932260;
                                  v67 = 0;
                                }
                                WrapControlText__textBBCodeAdjust(v64, v65, v66, v67, 0);
                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
                                if ( data )
                                {
                                  activeSelf = UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)data,
                                                 0);
                                  data = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
                                  if ( data )
                                  {
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
                                    data = (__int64)this->fields.scrollView;
                                    if ( data )
                                    {
                                      UIScrollView__ResetPosition((UIScrollView_o *)data, 0);
                                      data = (__int64)this->fields.skillConfLabel;
                                      if ( data )
                                      {
                                        UIWidget__ResizeCollider((UIWidget_o *)data, 0);
                                        data = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
                                        if ( data )
                                        {
                                          UnityEngine_GameObject__SetActive(
                                            (UnityEngine_GameObject_o *)data,
                                            activeSelf,
                                            0);
                                          data = (__int64)this->fields.skillConfLabel;
                                          if ( data )
                                          {
                                            data = (__int64)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)data,
                                                              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                            if ( data )
                                            {
                                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0);
                                              useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
                                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0, 0) )
                                              {
                                                data = (__int64)BattleSkillConfComponent_TypeInfo;
                                                v70 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                                if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                if ( !v70 )
                                                  goto LABEL_160;
                                                UIWidget__set_height(
                                                  v70,
                                                  BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                  0);
                                                v71 = this->fields.skillInfo;
                                                if ( !v71 )
                                                  goto LABEL_160;
                                                v72 = this->fields.useCondSkillConfLabel;
                                                v73 = (int)v36;
                                                v74 = SkillLvEntity__getDetail_42932260(v36, v71->fields.skilllv, 0, 0);
                                                if ( isSetMinSize )
                                                {
                                                  v75 = BattleSkillConfComponent_TypeInfo;
                                                  if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                    v75 = BattleSkillConfComponent_TypeInfo;
                                                  }
                                                  v76 = (int32_t *)v75->static_fields;
                                                  v77 = v72;
                                                  v78 = v74;
                                                  v79 = *v76;
                                                  v80 = *v76;
                                                }
                                                else
                                                {
                                                  v79 = 22;
                                                  v77 = v72;
                                                  v78 = v74;
                                                  v80 = 0;
                                                }
                                                WrapControlText__textBBCodeAdjust(v77, v78, v79, v80, 0);
                                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
                                                if ( !data )
                                                  goto LABEL_160;
                                                LODWORD(v36) = v73;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  1,
                                                  0);
                                                data = (__int64)this->fields.useCondRoot;
                                                if ( !data )
                                                  goto LABEL_160;
                                                data = UnityEngine_GameObject__get_activeSelf(
                                                         (UnityEngine_GameObject_o *)data,
                                                         0);
                                                if ( !this->fields.useCondRoot )
                                                  goto LABEL_160;
                                                v81 = data;
                                                UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0);
                                                data = (__int64)this->fields.useCondScrollView;
                                                if ( !data )
                                                  goto LABEL_160;
                                                UIScrollView__ResetPosition((UIScrollView_o *)data, 0);
                                                data = (__int64)this->fields.useCondSkillConfLabel;
                                                if ( !data )
                                                  goto LABEL_160;
                                                UIWidget__ResizeCollider((UIWidget_o *)data, 0);
                                                data = (__int64)this->fields.useCondRoot;
                                                if ( !data )
                                                  goto LABEL_160;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  v81 & 1,
                                                  0);
                                                data = (__int64)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
                                                if ( !data )
                                                  goto LABEL_160;
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)data,
                                                  activeSelf,
                                                  0);
                                                data = (__int64)this->fields.useCondSkillConfLabel;
                                                if ( !data )
                                                  goto LABEL_160;
                                                data = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)data,
                                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                                if ( !data )
                                                  goto LABEL_160;
                                                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0);
                                              }
                                              if ( SkillEntity__isActive(Entity, 0) )
                                              {
                                                data = (__int64)this->fields.okButton;
                                                if ( !data )
                                                  goto LABEL_160;
                                                data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)data,
                                                                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
                                                if ( !data )
                                                  goto LABEL_160;
                                                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 1, 0);
                                                data = (__int64)this->fields.okButton;
                                                if ( !data )
                                                  goto LABEL_160;
                                                v82 = UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)data,
                                                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                                if ( v17 )
                                                {
                                                  data = (__int64)this->fields.okButton;
                                                  if ( !data )
                                                    goto LABEL_160;
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)data,
                                                    1,
                                                    0);
                                                  data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._6_get_chargeTurn.methodPtr)(
                                                           skillInfo,
                                                           skillInfo->klass->vtable._6_get_chargeTurn.method);
                                                  if ( (int)data > 0
                                                    || (data = BattleServantData__canUseSkill(
                                                                 v17,
                                                                 skillInfo->fields.index,
                                                                 0),
                                                        (data & 1) == 0) )
                                                  {
LABEL_147:
                                                    this->fields.isPlaySkill = 0;
                                                    if ( !v82 )
                                                      goto LABEL_160;
                                                    v85 = 1.0;
                                                    v84 = 0.5;
                                                    goto LABEL_149;
                                                  }
                                                }
                                                else
                                                {
                                                  v83 = (UnityEngine_Object_o *)this->fields.okButton;
                                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                  if ( !UnityEngine_Object__op_Inequality(v83, 0, 0) )
                                                  {
LABEL_150:
                                                    skillChargeLabel = (UnityEngine_Object_o *)this->fields.skillChargeLabel;
                                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                    if ( !UnityEngine_Object__op_Inequality(skillChargeLabel, 0, 0) )
                                                      goto LABEL_155;
                                                    v89 = this->fields.skillChargeLabel;
                                                    data = (__int64)System_Int32__ToString((int)v36 + 24, 0);
                                                    if ( v89 )
                                                    {
                                                      UILabel__set_text(v89, (System_String_o *)data, 0);
                                                      goto LABEL_155;
                                                    }
                                                    goto LABEL_160;
                                                  }
                                                  data = (__int64)this->fields.okButton;
                                                  if ( !data )
                                                    goto LABEL_160;
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)data,
                                                    1,
                                                    0);
                                                  data = BattleSkillInfoData__getChargeTurn(skillInfo, 0);
                                                  if ( (int)data > 0 )
                                                    goto LABEL_147;
                                                  data = BattleSkillInfoData__IsOpenCond(skillInfo, 0);
                                                  if ( (data & 1) == 0 )
                                                    goto LABEL_147;
                                                }
                                                this->fields.isPlaySkill = 1;
                                                if ( !v82 )
                                                  goto LABEL_160;
                                                v84 = 1.0;
                                                v85 = 1.0;
LABEL_149:
                                                v86 = v84;
                                                v87 = v84;
                                                UIButtonColor__set_defaultColor(
                                                  (UIButtonColor_o *)v82,
                                                  *(UnityEngine_Color_o *)&v84,
                                                  0);
                                                goto LABEL_150;
                                              }
LABEL_155:
                                              useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              if ( UnityEngine_Object__op_Inequality(useCondRoot, 0, 0) )
                                                BattleSkillConfComponent__SetUseCond(this, v91);
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
LABEL_160:
    sub_1C3E7C0(data, v13);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_160;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_160;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0);
  v25 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_160;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v26 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_160;
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v27, 0);
  }
}


void BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillInfo; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x20
  UnityEngine_Object_o *useCondItemIcon; // x20
  UISprite_o *v6; // x20
  int32_t monitor; // w21
  int32_t v8; // w0
  int32_t num; // w20
  Il2CppObject *MasterData_object; // x20
  int64_t v11; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v13; // x21
  UserItemEntity_o *v14; // x20
  bool v15; // w0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  UISprite_o *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x22
  ItemMaster_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  UISprite_o *v32; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x21
  UnityEngine_Object_o *useCondItemCount; // x21
  UILabel_o *v36; // x21
  System_String_o *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v46; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v48; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v50; // x19
  int32_t m_CachedPtr; // [xsp+8h] [xbp-48h] BYREF
  int32_t CondItemNumber; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C5A4D7 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_21555/*"menu_txt_remaining"*/);
    sub_1C3E564(&StringLiteral_21556/*"menu_txt_spend"*/);
    sub_1C3E564(&StringLiteral_2800/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_1C3E564(&StringLiteral_23543/*"skill_item_{0}"*/);
    byte_4C5A4D7 = 1;
  }
  entity = 0;
  CondItemNumber = 0;
  skillInfo = (UnityEngine_GameObject_o *)this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_92;
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
    goto LABEL_92;
  }
  skillInfo = this->fields.noCondRoot;
  if ( !skillInfo )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive(skillInfo, 0, 0);
  skillInfo = this->fields.useCondRoot;
  if ( !skillInfo )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive(skillInfo, 1, 0);
  skillInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_92;
  skillInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)skillInfo,
                                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_92;
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = (UnityEngine_GameObject_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !v4 )
    goto LABEL_92;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v4,
          &entity,
          (int32_t)skillInfo,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_28;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(useCondItemIcon, 0, 0);
  if ( ((unsigned __int8)skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_92;
    v6 = this->fields.useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v6, monitor, 0);
  }
  if ( !entity )
    goto LABEL_92;
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_92;
    v8 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0);
    if ( v8 >= 9999 )
      num = 9999;
    else
      num = v8;
  }
  else
  {
LABEL_28:
    skillInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_92;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)skillInfo,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    skillInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      skillInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    }
    if ( !this->fields.skillInfo )
      goto LABEL_92;
    v11 = *(_QWORD *)(skillInfo[7].fields.m_CachedPtr + 64);
    skillInfo = (UnityEngine_GameObject_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
    if ( !MasterData_object )
      goto LABEL_92;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         (UserItemMaster_o *)MasterData_object,
                         v11,
                         (int32_t)skillInfo,
                         0);
    v13 = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
    v14 = EntityDefinitely;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(v13, 0, 0);
    if ( v14 )
    {
      if ( v15 )
      {
        skillInfo = (UnityEngine_GameObject_o *)UserItemEntity__getItemInfo(v14, 0);
        v22 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          m_CachedPtr = skillInfo[1].fields.m_CachedPtr;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v16, v17, v18, v19, v20, v21);
          v24 = System_String__Format((System_String_o *)StringLiteral_23543/*"skill_item_{0}"*/, v23, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v22, v24, 0);
        }
        else
        {
          if ( !v22 )
            goto LABEL_92;
          UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0);
        }
      }
      if ( v14->fields.num >= 9999 )
        num = 9999;
      else
        num = v14->fields.num;
    }
    else
    {
      if ( v15 )
      {
        skillInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !skillInfo )
          goto LABEL_92;
        skillInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)skillInfo,
                                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this->fields.skillInfo )
          goto LABEL_92;
        v25 = (ItemMaster_o *)skillInfo;
        skillInfo = (UnityEngine_GameObject_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
        if ( !v25 )
          goto LABEL_92;
        skillInfo = (UnityEngine_GameObject_o *)ItemMaster__GetItemData(v25, (int32_t)skillInfo, -1, 0);
        v32 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          m_CachedPtr = skillInfo[1].fields.m_CachedPtr;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v26, v27, v28, v29, v30, v31);
          v34 = System_String__Format((System_String_o *)StringLiteral_23543/*"skill_item_{0}"*/, v33, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v32, v34, 0);
        }
        else
        {
          if ( !v32 )
            goto LABEL_92;
          UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0);
        }
      }
      num = 0;
    }
  }
  useCondItemCount = (UnityEngine_Object_o *)this->fields.useCondItemCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemCount, 0, 0) )
  {
    skillInfo = (UnityEngine_GameObject_o *)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_92;
    v36 = this->fields.useCondItemCount;
    if ( BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0) )
    {
      skillInfo = (UnityEngine_GameObject_o *)BasicHelper__ToCommaString(num, 0);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2800/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0);
      m_CachedPtr = num;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v38, v39, v40, v41, v42, v43);
      skillInfo = (UnityEngine_GameObject_o *)System_String__Format(v37, v44, 0);
    }
    method = (const MethodInfo *)skillInfo;
    if ( !v36 )
      goto LABEL_92;
    UILabel__set_text(v36, (System_String_o *)skillInfo, 0);
    skillInfo = (UnityEngine_GameObject_o *)this->fields.useCondItemCount;
    if ( !skillInfo )
      goto LABEL_92;
    UILabel__SetCondensedScale((UILabel_o *)skillInfo, 40, 0, 0);
  }
  useCondItemConsumeCount = (UnityEngine_Object_o *)this->fields.useCondItemConsumeCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(useCondItemConsumeCount, 0, 0) )
    goto LABEL_79;
  skillInfo = (UnityEngine_GameObject_o *)this->fields.skillInfo;
  if ( !skillInfo
    || (v46 = this->fields.useCondItemConsumeCount,
        CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0),
        skillInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&CondItemNumber, 0),
        !v46) )
  {
LABEL_92:
    sub_1C3E7C0(skillInfo, method);
  }
  UILabel__set_text(v46, (System_String_o *)skillInfo, 0);
LABEL_79:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0, 0) )
  {
    v48 = this->fields.useCondItemLess;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v48, (System_String_o *)StringLiteral_21555/*"menu_txt_remaining"*/, 0);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0, 0) )
  {
    v50 = this->fields.useCondItemConsume;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v50, (System_String_o *)StringLiteral_21556/*"menu_txt_spend"*/, 0);
  }
}


void BattleSkillConfComponent__ToEnableLabelCollider(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_4C5A4D8 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4D8 = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_12;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                skillConfLabel,
                                                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !skillConfLabel )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0);
  useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0, 0) )
  {
    skillConfLabel = (UnityEngine_Component_o *)this->fields.useCondSkillConfLabel;
    if ( skillConfLabel )
    {
      skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    skillConfLabel,
                                                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(skillConfLabel, method);
  }
}


System_String_o *BattleSkillConfComponent__get_closeBtnPath(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C5A4D9 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17489/*"btn_close"*/);
    byte_4C5A4D9 = 1;
  }
  return (System_String_o *)StringLiteral_17489/*"btn_close"*/;
}


void BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v7; // x20

  if ( (byte_4C5A4D5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4D5 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    v5 = this->fields.target;
    if ( !v5 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v7 = UnityEngine_GameObject__GetComponent_object_(
             v5,
             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
      if ( ((unsigned __int8)v5 & 1) == 0 )
        goto LABEL_18;
      if ( v7 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v7, 0);
LABEL_18:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_20:
    sub_1C3E7C0(v5, v4);
  }
}


void BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4C5A4D6 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleSkillConfComponent_onClickOK__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4D6 = 1;
  }
  if ( this->fields.isPlaySkill )
  {
    if ( !this->fields.isPlayedSe )
    {
      v3 = Method_BattleSkillConfComponent_onClickOK__;
      if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1C3E57C(Method_BattleSkillConfComponent_onClickOK__);
      v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
      this->fields.isPlayedSe = 1;
    }
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(target, 0, 0) )
    {
      v7 = this->fields.target;
      if ( !v7 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v7,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C3E7C0(v7, v6);
      v9 = UnityEngine_GameObject__GetComponent_object_(
             v7,
             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( v9 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v9, this->fields.skillInfo, 0);
          return;
        }
        goto LABEL_27;
      }
    }
  }
  else
  {
    v10 = Method_BattleSkillConfComponent_onClickOK__;
    if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C3E57C(Method_BattleSkillConfComponent_onClickOK__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C3E548(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
    this->fields.isPlayedSe = 1;
  }
}


void BattleSkillConfComponent__setInit(BattleSkillConfComponent_o *this, BattleData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.data = data;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0);
}