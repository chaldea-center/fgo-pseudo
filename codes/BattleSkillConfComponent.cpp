void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  struct BattleSkillConfComponent_StaticFields *static_fields; // x8

  if ( (byte_4A5E20D & 1) == 0 )
  {
    sub_1B885B0(&BattleSkillConfComponent_TypeInfo);
    byte_4A5E20D = 1;
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
  Il2CppObject *Entity; // x24
  SkillLvMaster_o *v34; // x23
  int32_t type; // w27
  struct UILabel_o *skillNameLabel; // x26
  SkillLvEntity_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  bool v41; // zf
  Il2CppObject *v42; // x27
  UILabel_o *v43; // x0
  System_String_o *v44; // x1
  Il2CppObject *v45; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v51; // x0
  char v52; // w2
  char v53; // w3
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v55; // x8
  struct UILabel_o *v56; // x25
  System_String_o *Detail_39937016; // x26
  BattleSkillConfComponent_c *v58; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v60; // x0
  System_String_o *v61; // x1
  int32_t v62; // w2
  int32_t v63; // w4
  int32_t v64; // w3
  bool activeSelf; // w25
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v67; // x26
  struct BattleSkillInfoData_o *v68; // x8
  struct UILabel_o *v69; // x26
  System_String_o *v70; // x27
  BattleSkillConfComponent_c *v71; // x0
  int32_t *v72; // x8
  UILabel_o *v73; // x0
  System_String_o *v74; // x1
  int32_t v75; // w2
  int32_t v76; // w4
  int32_t v77; // w3
  char v78; // w22
  Il2CppObject *v79; // x22
  UnityEngine_Object_o *v80; // x21
  float v81; // s0
  float v82; // s3
  float v83; // s1
  float v84; // s2
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v86; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v88; // x1
  int32_t skilllv; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector2Int_o v90; // 0:x6.8

  if ( (byte_4A5E207 & 1) == 0 )
  {
    sub_1B885B0(&BattleSkillConfComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantSkillStrengthStatus_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_2990/*"BATTLE_SKILL_CONF_TITLE"*/);
    sub_1B885B0(&StringLiteral_24988/*"{0}  Lv.{1}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E207 = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillInfo, (int32_t)skillInfo, cancelOk, isSetMinSize);
  skillTitleLabel = (UnityEngine_Object_o *)this->fields.skillTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleLabel, 0LL, 0LL) )
  {
    v11 = this->fields.skillTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    data = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"BATTLE_SKILL_CONF_TITLE"*/, 0LL);
    if ( !v11 )
      goto LABEL_159;
    UILabel__set_text(v11, (System_String_o *)data, 0LL);
  }
  okButton = (UnityEngine_Object_o *)this->fields.okButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v17 = ServantData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0LL, 0LL) )
    {
      if ( v17 )
      {
        canUseSkill = BattleServantData__canUseSkill(v17, skillInfo->fields.index, 0LL);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v17, 0LL);
        data = (__int64)BattleServantData__getSkillSealSelect(v17, 0LL);
        if ( !data )
          goto LABEL_159;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
          sub_1B88814(data, index);
        v22 = *(unsigned __int8 *)(data + index + 32);
        if ( *(_BYTE *)(data + index + 32) )
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v17, index, 0LL);
        v23 = v22 != 0;
        NotActTurn = BattleServantData__getNotActTurn(v17, 0LL);
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
        goto LABEL_159;
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
    if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
    {
      data = (__int64)this->fields.cancelButton;
      if ( !data )
        goto LABEL_159;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeButton, 0LL, 0LL) )
    {
      data = (__int64)this->fields.closeButton;
      if ( !data )
        goto LABEL_159;
      v31 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)data,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_159;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v31, cancelOk, 0LL);
      }
    }
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                 *p_skillInfo,
                 (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v32 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v32,
                     data,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)data,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v34 = (SkillLvMaster_o *)data;
              data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                       *p_skillInfo,
                       (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v34 )
                {
                  data = (__int64)SkillLvMaster__GetEntity(v34, data, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_154;
                  if ( !*p_skillInfo )
                    goto LABEL_159;
                  type = (*p_skillInfo)->fields.type;
                  skillNameLabel = this->fields.skillNameLabel;
                  v37 = (SkillLvEntity_o *)data;
                  data = (__int64)SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
                  v41 = type == 21;
                  v42 = (Il2CppObject *)data;
                  if ( v41 )
                  {
                    if ( !skillNameLabel )
                      goto LABEL_159;
                    v43 = skillNameLabel;
                    v44 = (System_String_o *)v42;
                  }
                  else
                  {
                    if ( !*p_skillInfo )
                      goto LABEL_159;
                    skilllv = (*p_skillInfo)->fields.skilllv;
                    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v38, v39, v40);
                    data = (__int64)System_String__Format_61721404(
                                      (System_String_o *)StringLiteral_24988/*"{0}  Lv.{1}"*/,
                                      v42,
                                      v45,
                                      0LL);
                    if ( !skillNameLabel )
                      goto LABEL_159;
                    v44 = (System_String_o *)data;
                    v43 = skillNameLabel;
                  }
                  UILabel__set_text(v43, v44, 0LL);
                  p_skillStrengthStatus = &this->fields.skillStrengthStatus;
                  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
                  {
                    data = (__int64)*p_skillStrengthStatus;
                    if ( !*p_skillStrengthStatus )
                      goto LABEL_159;
                    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)data,
                                                           0LL);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
                  }
                  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  data = (__int64)this->fields.skillNameLabel;
                  if ( data )
                  {
                    PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
                    data = (__int64)BaseMonoBehaviour__createObject_38240928(
                                      (BaseMonoBehaviour_o *)this,
                                      PATH,
                                      transform,
                                      0LL,
                                      0LL);
                    if ( data )
                    {
                      v51 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)data,
                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                      *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v51;
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus,
                        (int32_t)v51,
                        v52,
                        v53);
                      data = (__int64)*p_skillStrengthStatus;
                      if ( *p_skillStrengthStatus )
                      {
                        v90 = (UnityEngine_Vector2Int_o)0x1E00000022LL;
                        ServantSkillStrengthStatus__Set(
                          (ServantSkillStrengthStatus_o *)data,
                          this->fields.skillNameLabel,
                          skillInfo->fields.strengthStatus,
                          skillInfo->fields.skillRecord,
                          34,
                          0,
                          v90,
                          0LL);
                        skillConfLabel = (UIWidget_o *)this->fields.skillConfLabel;
                        data = (__int64)BattleSkillConfComponent_TypeInfo;
                        if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                        if ( skillConfLabel )
                        {
                          UIWidget__set_height(
                            skillConfLabel,
                            BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                            0LL);
                          v55 = this->fields.skillInfo;
                          if ( v55 )
                          {
                            if ( v37 )
                            {
                              v56 = this->fields.skillConfLabel;
                              Detail_39937016 = SkillLvEntity__getDetail_39937016(v37, v55->fields.skilllv, 0, 0LL);
                              if ( isSetMinSize )
                              {
                                v58 = BattleSkillConfComponent_TypeInfo;
                                if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                  v58 = BattleSkillConfComponent_TypeInfo;
                                }
                                p_DETAIL_FONT_SIZE = &v58->static_fields->DETAIL_FONT_SIZE;
                                v60 = v56;
                                v61 = Detail_39937016;
                                v62 = *p_DETAIL_FONT_SIZE;
                                v63 = p_DETAIL_FONT_SIZE[2];
                                v64 = *p_DETAIL_FONT_SIZE;
                              }
                              else
                              {
                                v62 = 22;
                                v60 = v56;
                                v61 = Detail_39937016;
                                v64 = 0;
                                v63 = 0;
                              }
                              WrapControlText__textBBCodeAdjust(v60, v61, v62, v64, v63, 0LL);
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                          if ( data )
                                          {
                                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0LL);
                                            useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                            if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
                                            {
                                              data = (__int64)BattleSkillConfComponent_TypeInfo;
                                              v67 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                              if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                              if ( !v67 )
                                                goto LABEL_159;
                                              UIWidget__set_height(
                                                v67,
                                                BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                0LL);
                                              v68 = this->fields.skillInfo;
                                              if ( !v68 )
                                                goto LABEL_159;
                                              v69 = this->fields.useCondSkillConfLabel;
                                              v70 = SkillLvEntity__getDetail_39937016(v37, v68->fields.skilllv, 0, 0LL);
                                              if ( isSetMinSize )
                                              {
                                                v71 = BattleSkillConfComponent_TypeInfo;
                                                if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                  v71 = BattleSkillConfComponent_TypeInfo;
                                                }
                                                v72 = &v71->static_fields->DETAIL_FONT_SIZE;
                                                v73 = v69;
                                                v74 = v70;
                                                v75 = *v72;
                                                v76 = v72[2];
                                                v77 = *v72;
                                              }
                                              else
                                              {
                                                v75 = 22;
                                                v73 = v69;
                                                v74 = v70;
                                                v77 = 0;
                                                v76 = 0;
                                              }
                                              WrapControlText__textBBCodeAdjust(v73, v74, v75, v77, v76, 0LL);
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
                                              v78 = data;
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
                                                v78 & 1,
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
                                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
                                              if ( !data )
                                                goto LABEL_159;
                                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 1, 0LL);
                                              data = (__int64)this->fields.okButton;
                                              if ( !data )
                                                goto LABEL_159;
                                              v79 = UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)data,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                              if ( v17 )
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
                                                               v17,
                                                               skillInfo->fields.index,
                                                               0LL),
                                                      (data & 1) == 0) )
                                                {
LABEL_146:
                                                  this->fields.isPlaySkill = 0;
                                                  if ( !v79 )
                                                    goto LABEL_159;
                                                  v82 = 1.0;
                                                  v81 = 0.5;
                                                  goto LABEL_148;
                                                }
                                              }
                                              else
                                              {
                                                v80 = (UnityEngine_Object_o *)this->fields.okButton;
                                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                if ( !UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
                                                {
LABEL_149:
                                                  skillChargeLabel = (UnityEngine_Object_o *)this->fields.skillChargeLabel;
                                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                  if ( !UnityEngine_Object__op_Inequality(skillChargeLabel, 0LL, 0LL) )
                                                    goto LABEL_154;
                                                  v86 = this->fields.skillChargeLabel;
                                                  data = (__int64)System_Int32__ToString((int)v37 + 24, 0LL);
                                                  if ( v86 )
                                                  {
                                                    UILabel__set_text(v86, (System_String_o *)data, 0LL);
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
                                              if ( !v79 )
                                                goto LABEL_159;
                                              v81 = 1.0;
                                              v82 = 1.0;
LABEL_148:
                                              v83 = v81;
                                              v84 = v81;
                                              UIButtonColor__set_defaultColor(
                                                (UIButtonColor_o *)v79,
                                                *(UnityEngine_Color_o *)&v81,
                                                0LL);
                                              goto LABEL_149;
                                            }
LABEL_154:
                                            useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                            if ( UnityEngine_Object__op_Inequality(useCondRoot, 0LL, 0LL) )
                                              BattleSkillConfComponent__SetUseCond(this, v88);
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
    sub_1B8880C(data, v13);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_159;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_159;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v25 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_159;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v26 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_159;
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v27, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__SetUseCond(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  int64_t skillInfo; // x0
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
  UISprite_o *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x22
  ItemMaster_o *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UISprite_o *v26; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x21
  UnityEngine_Object_o *useCondItemCount; // x21
  UILabel_o *v30; // x21
  System_String_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v37; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v39; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v41; // x19
  int32_t v42; // [xsp+0h] [xbp-40h] BYREF
  int32_t CondItemNumber; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E20A & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_21393/*"menu_txt_remaining"*/);
    sub_1B885B0(&StringLiteral_21394/*"menu_txt_spend"*/);
    sub_1B885B0(&StringLiteral_2917/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_1B885B0(&StringLiteral_23349/*"skill_item_{0}"*/);
    byte_4A5E20A = 1;
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
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_88;
  skillInfo = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_88;
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v4 )
    goto LABEL_88;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v4,
          &entity,
          skillInfo,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_28;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_88;
    v6 = this->fields.useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = AtlasManager__SetItem(v6, monitor, 0LL);
  }
  if ( !entity )
    goto LABEL_88;
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_88;
    v8 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v8 >= 9999 )
      num = 9999;
    else
      num = v8;
  }
  else
  {
LABEL_28:
    skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_88;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)skillInfo,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    skillInfo = NetworkManager__get_UserId(0LL);
    if ( !this->fields.skillInfo )
      goto LABEL_88;
    v11 = skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !MasterData_object )
      goto LABEL_88;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, v11, skillInfo, 0LL);
    v13 = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
    v14 = EntityDefinitely;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( v14 )
    {
      if ( v15 )
      {
        skillInfo = (int64_t)UserItemEntity__getItemInfo(v14, 0LL);
        v19 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          v42 = *(_DWORD *)(skillInfo + 40);
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v16, v17, v18);
          v21 = System_String__Format((System_String_o *)StringLiteral_23349/*"skill_item_{0}"*/, v20, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v19, v21, 0LL);
        }
        else
        {
          if ( !v19 )
            goto LABEL_88;
          UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
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
        skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !skillInfo )
          goto LABEL_88;
        skillInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)skillInfo,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this->fields.skillInfo )
          goto LABEL_88;
        v22 = (ItemMaster_o *)skillInfo;
        skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
        if ( !v22 )
          goto LABEL_88;
        skillInfo = (int64_t)ItemMaster__GetItemData(v22, skillInfo, 0LL);
        v26 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          v42 = *(_DWORD *)(skillInfo + 40);
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v23, v24, v25);
          v28 = System_String__Format((System_String_o *)StringLiteral_23349/*"skill_item_{0}"*/, v27, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v26, v28, 0LL);
        }
        else
        {
          if ( !v26 )
            goto LABEL_88;
          UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
        }
      }
      num = 0;
    }
  }
  useCondItemCount = (UnityEngine_Object_o *)this->fields.useCondItemCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemCount, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_88;
    v30 = this->fields.useCondItemCount;
    if ( BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0LL) )
    {
      skillInfo = (int64_t)BasicHelper__ToCommaString(num, 0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2917/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      v42 = num;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
      skillInfo = (int64_t)System_String__Format(v31, v35, 0LL);
    }
    method = (const MethodInfo *)skillInfo;
    if ( !v30 )
      goto LABEL_88;
    UILabel__set_text(v30, (System_String_o *)skillInfo, 0LL);
    skillInfo = (int64_t)this->fields.useCondItemCount;
    if ( !skillInfo )
      goto LABEL_88;
    UILabel__SetCondensedScale((UILabel_o *)skillInfo, 40, 0LL);
  }
  useCondItemConsumeCount = (UnityEngine_Object_o *)this->fields.useCondItemConsumeCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(useCondItemConsumeCount, 0LL, 0LL) )
    goto LABEL_75;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo
    || (v37 = this->fields.useCondItemConsumeCount,
        CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0LL),
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&CondItemNumber, 0LL),
        !v37) )
  {
LABEL_88:
    sub_1B8880C(skillInfo, method);
  }
  UILabel__set_text(v37, (System_String_o *)skillInfo, 0LL);
LABEL_75:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v39 = this->fields.useCondItemLess;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_21393/*"menu_txt_remaining"*/, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v41 = this->fields.useCondItemConsume;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v41, (System_String_o *)StringLiteral_21394/*"menu_txt_spend"*/, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_4A5E20B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E20B = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_12;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                skillConfLabel,
                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !skillConfLabel )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
  useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
  {
    skillConfLabel = (UnityEngine_Component_o *)this->fields.useCondSkillConfLabel;
    if ( skillConfLabel )
    {
      skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    skillConfLabel,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(skillConfLabel, method);
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E20C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17503/*"btn_close"*/);
    byte_4A5E20C = 1;
  }
  return (System_String_o *)StringLiteral_17503/*"btn_close"*/;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v7; // x20

  if ( (byte_4A5E208 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E208 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    v5 = this->fields.target;
    if ( !v5 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_20;
      BattlePerformancePlayer__onClickSkillCancel((BattlePerformancePlayer_o *)Component_object, 0LL);
    }
    v5 = this->fields.target;
    if ( v5 )
    {
      v7 = UnityEngine_GameObject__GetComponent_object_(
             v5,
             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
      if ( ((unsigned __int8)v5 & 1) == 0 )
        goto LABEL_18;
      if ( v7 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v7, 0LL);
LABEL_18:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_20:
    sub_1B8880C(v5, v4);
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E209 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSkillConfComponent_onClickOK__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E209 = 1;
  }
  if ( this->fields.isPlaySkill )
  {
    if ( !this->fields.isPlayedSe )
    {
      v3 = Method_BattleSkillConfComponent_onClickOK__;
      if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1B885C8(Method_BattleSkillConfComponent_onClickOK__);
      v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
    {
      v7 = this->fields.target;
      if ( !v7 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v7,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_27;
        BattlePerformancePlayer__onClickSkillOK(
          (BattlePerformancePlayer_o *)Component_object,
          this->fields.skillInfo,
          0LL);
      }
      v7 = this->fields.target;
      if ( !v7 )
LABEL_27:
        sub_1B8880C(v7, v6);
      v9 = UnityEngine_GameObject__GetComponent_object_(
             v7,
             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( v9 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v9, this->fields.skillInfo, 0LL);
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
      v10 = (_QWORD *)sub_1B885C8(Method_BattleSkillConfComponent_onClickOK__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
    this->fields.isPlayedSe = 1;
  }
}


void __fastcall BattleSkillConfComponent__setInit(
        BattleSkillConfComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.data = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}