void __fastcall BattleSkillConfComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSkillConfComponent_StaticFields *static_fields; // x8

  if ( (byte_4A01B5C & 1) == 0 )
  {
    sub_1B64A00(&BattleSkillConfComponent_TypeInfo, v1);
    byte_4A01B5C = 1;
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
  struct BattleSkillInfoData_o **p_skillInfo; // x25
  UnityEngine_Object_o *skillTitleLabel; // x21
  UILabel_o *v26; // x21
  __int64 data; // x0
  __int64 v28; // x1
  UnityEngine_Object_o *okButton; // x21
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *skillIcon; // x24
  BattleServantData_o *v32; // x21
  const MethodInfo *v33; // x6
  bool canUseSkill; // w24
  int32_t SkillSealTurn; // w26
  __int64 index; // x1
  int v37; // w27
  bool v38; // w27
  int32_t NotActTurn; // w4
  UnityEngine_Object_o *v40; // x20
  UnityEngine_Object_o *v41; // x20
  UnityEngine_Object_o *v42; // x19
  UnityEngine_Object_o *cancelButton; // x24
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *closeButton; // x24
  Il2CppObject *v46; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x23
  Il2CppObject *Entity; // x24
  SkillLvMaster_o *v49; // x23
  int32_t type; // w27
  struct UILabel_o *skillNameLabel; // x26
  SkillLvEntity_o *v52; // x23
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  bool v56; // zf
  Il2CppObject *v57; // x27
  UILabel_o *v58; // x0
  System_String_o *v59; // x1
  Il2CppObject *v60; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x25
  UnityEngine_Object_o *skillStrengthStatus; // x26
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *PATH; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v66; // x0
  char v67; // w2
  char v68; // w3
  UIWidget_o *skillConfLabel; // x25
  struct BattleSkillInfoData_o *v70; // x8
  struct UILabel_o *v71; // x25
  System_String_o *Detail_39525416; // x26
  BattleSkillConfComponent_c *v73; // x0
  int32_t *p_DETAIL_FONT_SIZE; // x8
  UILabel_o *v75; // x0
  System_String_o *v76; // x1
  int32_t v77; // w2
  int32_t v78; // w4
  int32_t v79; // w3
  bool activeSelf; // w25
  UnityEngine_Object_o *useCondSkillConfLabel; // x26
  UIWidget_o *v82; // x26
  struct BattleSkillInfoData_o *v83; // x8
  struct UILabel_o *v84; // x26
  System_String_o *v85; // x27
  BattleSkillConfComponent_c *v86; // x0
  int32_t *v87; // x8
  UILabel_o *v88; // x0
  System_String_o *v89; // x1
  int32_t v90; // w2
  int32_t v91; // w4
  int32_t v92; // w3
  char v93; // w22
  Il2CppObject *v94; // x22
  UnityEngine_Object_o *v95; // x21
  float v96; // s0
  float v97; // s3
  float v98; // s1
  float v99; // s2
  UnityEngine_Object_o *skillChargeLabel; // x20
  UILabel_o *v101; // x20
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v103; // x1
  int32_t skilllv; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector2Int_o v105; // 0:x6.8

  if ( (byte_4A01B56 & 1) == 0 )
  {
    sub_1B64A00(&BattleSkillConfComponent_TypeInfo, skillInfo);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v9);
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillMaster___, v11);
    sub_1B64A00(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_Collider___, v13);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v14);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v15);
    sub_1B64A00(&int_TypeInfo, v16);
    sub_1B64A00(&LocalizationManager_TypeInfo, v17);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v18);
    sub_1B64A00(&ServantSkillStrengthStatus_TypeInfo, v19);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B64A00(&StringLiteral_2970/*"BATTLE_SKILL_CONF_TITLE"*/, v21);
    sub_1B64A00(&StringLiteral_24892/*"{0}  Lv.{1}"*/, v22);
    sub_1B64A00(&StringLiteral_1/*""*/, v23);
    byte_4A01B56 = 1;
  }
  this->fields.skillInfo = skillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.isPlayedSe = 0;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.skillInfo, (int32_t)skillInfo, cancelOk, isSetMinSize);
  skillTitleLabel = (UnityEngine_Object_o *)this->fields.skillTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleLabel, 0LL, 0LL) )
  {
    v26 = this->fields.skillTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    data = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"BATTLE_SKILL_CONF_TITLE"*/, 0LL);
    if ( !v26 )
      goto LABEL_159;
    UILabel__set_text(v26, (System_String_o *)data, 0LL);
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
    v32 = ServantData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIcon, 0LL, 0LL) )
    {
      if ( v32 )
      {
        canUseSkill = BattleServantData__canUseSkill(v32, skillInfo->fields.index, 0LL);
        SkillSealTurn = BattleServantData__getSkillSealTurn(v32, 0LL);
        data = (__int64)BattleServantData__getSkillSealSelect(v32, 0LL);
        if ( !data )
          goto LABEL_159;
        index = skillInfo->fields.index;
        if ( (unsigned int)index >= *(_DWORD *)(data + 24) )
          sub_1B64C64(data, index);
        v37 = *(unsigned __int8 *)(data + index + 32);
        if ( *(_BYTE *)(data + index + 32) )
          SkillSealTurn = BattleServantData__getSkillSealSelectTurn(v32, index, 0LL);
        v38 = v37 != 0;
        NotActTurn = BattleServantData__getNotActTurn(v32, 0LL);
      }
      else
      {
        v38 = 0;
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
        v38,
        v33);
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
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
      v46 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)data,
              (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_159;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v46, cancelOk, 0LL);
      }
    }
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( data )
    {
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( *p_skillInfo )
      {
        v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                 *p_skillInfo,
                 (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v47 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v47,
                     data,
                     (const MethodInfo_30D6798 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( data )
          {
            data = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)data,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
            if ( *p_skillInfo )
            {
              v49 = (SkillLvMaster_o *)data;
              data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))(*p_skillInfo)->klass->vtable._5_get_skillId.method)(
                       *p_skillInfo,
                       (*p_skillInfo)->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( *p_skillInfo )
              {
                if ( v49 )
                {
                  data = (__int64)SkillLvMaster__GetEntity(v49, data, (*p_skillInfo)->fields.skilllv, 0LL);
                  if ( !Entity )
                    goto LABEL_154;
                  if ( !*p_skillInfo )
                    goto LABEL_159;
                  type = (*p_skillInfo)->fields.type;
                  skillNameLabel = this->fields.skillNameLabel;
                  v52 = (SkillLvEntity_o *)data;
                  data = (__int64)SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
                  v56 = type == 21;
                  v57 = (Il2CppObject *)data;
                  if ( v56 )
                  {
                    if ( !skillNameLabel )
                      goto LABEL_159;
                    v58 = skillNameLabel;
                    v59 = (System_String_o *)v57;
                  }
                  else
                  {
                    if ( !*p_skillInfo )
                      goto LABEL_159;
                    skilllv = (*p_skillInfo)->fields.skilllv;
                    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v53, v54, v55);
                    data = (__int64)System_String__Format_61399508(
                                      (System_String_o *)StringLiteral_24892/*"{0}  Lv.{1}"*/,
                                      v57,
                                      v60,
                                      0LL);
                    if ( !skillNameLabel )
                      goto LABEL_159;
                    v59 = (System_String_o *)data;
                    v58 = skillNameLabel;
                  }
                  UILabel__set_text(v58, v59, 0LL);
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
                    UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
                  }
                  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  data = (__int64)this->fields.skillNameLabel;
                  if ( data )
                  {
                    PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
                    data = (__int64)BaseMonoBehaviour__createObject_37999632(
                                      (BaseMonoBehaviour_o *)this,
                                      PATH,
                                      transform,
                                      0LL,
                                      0LL);
                    if ( data )
                    {
                      v66 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)data,
                              (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                      *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)v66;
                      sub_1B649A4(
                        (ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus,
                        (int32_t)v66,
                        v67,
                        v68);
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
                        if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                        if ( skillConfLabel )
                        {
                          UIWidget__set_height(
                            skillConfLabel,
                            BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                            0LL);
                          v70 = this->fields.skillInfo;
                          if ( v70 )
                          {
                            if ( v52 )
                            {
                              v71 = this->fields.skillConfLabel;
                              Detail_39525416 = SkillLvEntity__getDetail_39525416(v52, v70->fields.skilllv, 0, 0LL);
                              if ( isSetMinSize )
                              {
                                v73 = BattleSkillConfComponent_TypeInfo;
                                if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                  v73 = BattleSkillConfComponent_TypeInfo;
                                }
                                p_DETAIL_FONT_SIZE = &v73->static_fields->DETAIL_FONT_SIZE;
                                v75 = v71;
                                v76 = Detail_39525416;
                                v77 = *p_DETAIL_FONT_SIZE;
                                v78 = p_DETAIL_FONT_SIZE[2];
                                v79 = *p_DETAIL_FONT_SIZE;
                              }
                              else
                              {
                                v77 = 22;
                                v75 = v71;
                                v76 = Detail_39525416;
                                v79 = 0;
                                v78 = 0;
                              }
                              WrapControlText__textBBCodeAdjust(v75, v76, v77, v79, v78, 0LL);
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
                                                            (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                          if ( data )
                                          {
                                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 0, 0LL);
                                            useCondSkillConfLabel = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                            if ( UnityEngine_Object__op_Inequality(useCondSkillConfLabel, 0LL, 0LL) )
                                            {
                                              data = (__int64)BattleSkillConfComponent_TypeInfo;
                                              v82 = (UIWidget_o *)this->fields.useCondSkillConfLabel;
                                              if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                              if ( !v82 )
                                                goto LABEL_159;
                                              UIWidget__set_height(
                                                v82,
                                                BattleSkillConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                                                0LL);
                                              v83 = this->fields.skillInfo;
                                              if ( !v83 )
                                                goto LABEL_159;
                                              v84 = this->fields.useCondSkillConfLabel;
                                              v85 = SkillLvEntity__getDetail_39525416(v52, v83->fields.skilllv, 0, 0LL);
                                              if ( isSetMinSize )
                                              {
                                                v86 = BattleSkillConfComponent_TypeInfo;
                                                if ( !BattleSkillConfComponent_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BattleSkillConfComponent_TypeInfo);
                                                  v86 = BattleSkillConfComponent_TypeInfo;
                                                }
                                                v87 = &v86->static_fields->DETAIL_FONT_SIZE;
                                                v88 = v84;
                                                v89 = v85;
                                                v90 = *v87;
                                                v91 = v87[2];
                                                v92 = *v87;
                                              }
                                              else
                                              {
                                                v90 = 22;
                                                v88 = v84;
                                                v89 = v85;
                                                v92 = 0;
                                                v91 = 0;
                                              }
                                              WrapControlText__textBBCodeAdjust(v88, v89, v90, v92, v91, 0LL);
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
                                              v93 = data;
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
                                                v93 & 1,
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
                                                                (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
                                              if ( !data )
                                                goto LABEL_159;
                                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)data, 1, 0LL);
                                              data = (__int64)this->fields.okButton;
                                              if ( !data )
                                                goto LABEL_159;
                                              v94 = UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)data,
                                                      (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
                                              if ( v32 )
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
                                                               v32,
                                                               skillInfo->fields.index,
                                                               0LL),
                                                      (data & 1) == 0) )
                                                {
LABEL_146:
                                                  this->fields.isPlaySkill = 0;
                                                  if ( !v94 )
                                                    goto LABEL_159;
                                                  v97 = 1.0;
                                                  v96 = 0.5;
                                                  goto LABEL_148;
                                                }
                                              }
                                              else
                                              {
                                                v95 = (UnityEngine_Object_o *)this->fields.okButton;
                                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                if ( !UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
                                                {
LABEL_149:
                                                  skillChargeLabel = (UnityEngine_Object_o *)this->fields.skillChargeLabel;
                                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                  if ( !UnityEngine_Object__op_Inequality(skillChargeLabel, 0LL, 0LL) )
                                                    goto LABEL_154;
                                                  v101 = this->fields.skillChargeLabel;
                                                  data = (__int64)System_Int32__ToString((int)v52 + 24, 0LL);
                                                  if ( v101 )
                                                  {
                                                    UILabel__set_text(v101, (System_String_o *)data, 0LL);
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
                                              if ( !v94 )
                                                goto LABEL_159;
                                              v96 = 1.0;
                                              v97 = 1.0;
LABEL_148:
                                              v98 = v96;
                                              v99 = v96;
                                              UIButtonColor__set_defaultColor(
                                                (UIButtonColor_o *)v94,
                                                *(UnityEngine_Color_o *)&v96,
                                                0LL);
                                              goto LABEL_149;
                                            }
LABEL_154:
                                            useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                            if ( UnityEngine_Object__op_Inequality(useCondRoot, 0LL, 0LL) )
                                              BattleSkillConfComponent__SetUseCond(this, v103);
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
    sub_1B64C5C(data, v28);
  }
  data = (__int64)this->fields.skillNameLabel;
  if ( !data )
    goto LABEL_159;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  data = (__int64)this->fields.skillConfLabel;
  if ( !data )
    goto LABEL_159;
  UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v40 = (UnityEngine_Object_o *)this->fields.useCondSkillConfLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    data = (__int64)this->fields.useCondSkillConfLabel;
    if ( !data )
      goto LABEL_159;
    UILabel__set_text((UILabel_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v41 = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    data = (__int64)this->fields.skillStrengthStatus;
    if ( !data )
      goto LABEL_159;
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v42, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t skillInfo; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  UnityEngine_Object_o *useCondItemIcon; // x20
  UISprite_o *v20; // x20
  int32_t monitor; // w21
  int32_t v22; // w0
  int32_t num; // w20
  Il2CppObject *MasterData_object; // x20
  int64_t v25; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v27; // x21
  UserItemEntity_o *v28; // x20
  bool v29; // w0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UISprite_o *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x22
  ItemMaster_o *v36; // x20
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  UISprite_o *v40; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x21
  UnityEngine_Object_o *useCondItemCount; // x21
  UILabel_o *v44; // x21
  System_String_o *v45; // x22
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  UnityEngine_Object_o *useCondItemConsumeCount; // x20
  UILabel_o *v51; // x20
  UnityEngine_Object_o *useCondItemLess; // x20
  UISprite_o *v53; // x20
  UnityEngine_Object_o *useCondItemConsume; // x20
  UISprite_o *v55; // x19
  int32_t v56; // [xsp+0h] [xbp-40h] BYREF
  int32_t CondItemNumber; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A01B59 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1B64A00(&int_TypeInfo, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64A00(&Method_SingletonTemplate_BattleItemData__get_Instance__, v11);
    sub_1B64A00(&string_TypeInfo, v12);
    sub_1B64A00(&StringLiteral_21314/*"menu_txt_remaining"*/, v13);
    sub_1B64A00(&StringLiteral_21315/*"menu_txt_spend"*/, v14);
    sub_1B64A00(&StringLiteral_2897/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v15);
    sub_1B64A00(&StringLiteral_23255/*"skill_item_{0}"*/, v16);
    byte_4A01B59 = 1;
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
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_88;
  skillInfo = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_88;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v18 )
    goto LABEL_88;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v18,
          &entity,
          skillInfo,
          (const MethodInfo_30D67EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_28;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = UnityEngine_Object__op_Inequality(useCondItemIcon, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_88;
    v20 = this->fields.useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = AtlasManager__SetItem(v20, monitor, 0LL);
  }
  if ( !entity )
    goto LABEL_88;
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_88;
    v22 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v22 >= 9999 )
      num = 9999;
    else
      num = v22;
  }
  else
  {
LABEL_28:
    skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_88;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)skillInfo,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    skillInfo = NetworkManager__get_UserId(0LL);
    if ( !this->fields.skillInfo )
      goto LABEL_88;
    v25 = skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !MasterData_object )
      goto LABEL_88;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, v25, skillInfo, 0LL);
    v27 = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
    v28 = EntityDefinitely;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
    if ( v28 )
    {
      if ( v29 )
      {
        skillInfo = (int64_t)UserItemEntity__getItemInfo(v28, 0LL);
        v33 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          v56 = *(_DWORD *)(skillInfo + 40);
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v30, v31, v32);
          v35 = System_String__Format((System_String_o *)StringLiteral_23255/*"skill_item_{0}"*/, v34, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v33, v35, 0LL);
        }
        else
        {
          if ( !v33 )
            goto LABEL_88;
          UISprite__set_spriteName(this->fields.useCondItemIcon, string_TypeInfo->static_fields->Empty, 0LL);
        }
      }
      if ( v28->fields.num >= 9999 )
        num = 9999;
      else
        num = v28->fields.num;
    }
    else
    {
      if ( v29 )
      {
        skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !skillInfo )
          goto LABEL_88;
        skillInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)skillInfo,
                               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this->fields.skillInfo )
          goto LABEL_88;
        v36 = (ItemMaster_o *)skillInfo;
        skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
        if ( !v36 )
          goto LABEL_88;
        skillInfo = (int64_t)ItemMaster__GetItemData(v36, skillInfo, 0LL);
        v40 = this->fields.useCondItemIcon;
        if ( skillInfo )
        {
          v56 = *(_DWORD *)(skillInfo + 40);
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v37, v38, v39);
          v42 = System_String__Format((System_String_o *)StringLiteral_23255/*"skill_item_{0}"*/, v41, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v40, v42, 0LL);
        }
        else
        {
          if ( !v40 )
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
    v44 = this->fields.useCondItemCount;
    if ( BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0LL) )
    {
      skillInfo = (int64_t)BasicHelper__ToCommaString(num, 0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_2897/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      v56 = num;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v46, v47, v48);
      skillInfo = (int64_t)System_String__Format(v45, v49, 0LL);
    }
    method = (const MethodInfo *)skillInfo;
    if ( !v44 )
      goto LABEL_88;
    UILabel__set_text(v44, (System_String_o *)skillInfo, 0LL);
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
    || (v51 = this->fields.useCondItemConsumeCount,
        CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0LL),
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&CondItemNumber, 0LL),
        !v51) )
  {
LABEL_88:
    sub_1B64C5C(skillInfo, method);
  }
  UILabel__set_text(v51, (System_String_o *)skillInfo, 0LL);
LABEL_75:
  useCondItemLess = (UnityEngine_Object_o *)this->fields.useCondItemLess;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemLess, 0LL, 0LL) )
  {
    v53 = this->fields.useCondItemLess;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v53, (System_String_o *)StringLiteral_21314/*"menu_txt_remaining"*/, 0LL);
  }
  useCondItemConsume = (UnityEngine_Object_o *)this->fields.useCondItemConsume;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useCondItemConsume, 0LL, 0LL) )
  {
    v55 = this->fields.useCondItemConsume;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v55, (System_String_o *)StringLiteral_21315/*"menu_txt_spend"*/, 0LL);
  }
}


void __fastcall BattleSkillConfComponent__ToEnableLabelCollider(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *skillConfLabel; // x0
  UnityEngine_Object_o *useCondSkillConfLabel; // x20

  if ( (byte_4A01B5A & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A01B5A = 1;
  }
  skillConfLabel = (UnityEngine_Component_o *)this->fields.skillConfLabel;
  if ( !skillConfLabel )
    goto LABEL_12;
  skillConfLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                skillConfLabel,
                                                (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( skillConfLabel )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skillConfLabel, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B64C5C(skillConfLabel, method);
  }
}


System_String_o *__fastcall BattleSkillConfComponent__get_closeBtnPath(
        BattleSkillConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A01B5B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17436/*"btn_close"*/, method);
    byte_4A01B5B = 1;
  }
  return (System_String_o *)StringLiteral_17436/*"btn_close"*/;
}


void __fastcall BattleSkillConfComponent__onClickCancel(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v9; // x20

  if ( (byte_4A01B57 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    byte_4A01B57 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    v7 = this->fields.target;
    if ( !v7 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v7,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_20;
      BattlePerformancePlayer__onClickSkillCancel((BattlePerformancePlayer_o *)Component_object, 0LL);
    }
    v7 = this->fields.target;
    if ( v7 )
    {
      v9 = UnityEngine_GameObject__GetComponent_object_(
             v7,
             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) == 0 )
        goto LABEL_18;
      if ( v9 )
      {
        BattlePerformanceMaster__onClickSkillCancel((BattlePerformanceMaster_o *)v9, 0LL);
LABEL_18:
        this->fields.isPlayedSe = 1;
        return;
      }
    }
LABEL_20:
    sub_1B64C5C(v7, v6);
  }
}


void __fastcall BattleSkillConfComponent__onClickOK(BattleSkillConfComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UnityEngine_Object_o *target; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4A01B58 & 1) == 0 )
  {
    sub_1B64A00(&Method_BattleSkillConfComponent_onClickOK__, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, v3);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, v4);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A01B58 = 1;
  }
  if ( this->fields.isPlaySkill )
  {
    if ( !this->fields.isPlayedSe )
    {
      v6 = Method_BattleSkillConfComponent_onClickOK__;
      if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B64A18(Method_BattleSkillConfComponent_onClickOK__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
    {
      v10 = this->fields.target;
      if ( !v10 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v10,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_27;
        BattlePerformancePlayer__onClickSkillOK(
          (BattlePerformancePlayer_o *)Component_object,
          this->fields.skillInfo,
          0LL);
      }
      v10 = this->fields.target;
      if ( !v10 )
LABEL_27:
        sub_1B64C5C(v10, v9);
      v12 = UnityEngine_GameObject__GetComponent_object_(
              v10,
              (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( v12 )
        {
          BattlePerformanceMaster__onClickSkillOK((BattlePerformanceMaster_o *)v12, this->fields.skillInfo, 0LL);
          return;
        }
        goto LABEL_27;
      }
    }
  }
  else
  {
    v13 = Method_BattleSkillConfComponent_onClickOK__;
    if ( (*((_BYTE *)Method_BattleSkillConfComponent_onClickOK__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1B64A18(Method_BattleSkillConfComponent_onClickOK__);
    v14 = (System_Reflection_MethodBase_o *)sub_1B649E4(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}