void ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4D2E577 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_4D2E577 = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleStartPosY = 0xC23E000040A00000LL;
  *(_OWORD *)&static_fields->TransformNameAddHeight = xmmword_D00C50;
}


void ServantStatusListViewItemDrawSkill___ctor(ServantStatusListViewItemDrawSkill_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct ServantStatusPossessionSkillComponent_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2E576 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&ServantStatusPossessionSkillComponent___TypeInfo);
    byte_4D2E576 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct ServantStatusPossessionSkillComponent_array *)sub_1C93B7C(
                                                               ServantStatusPossessionSkillComponent___TypeInfo,
                                                               (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0);
}


void ServantStatusListViewItemDrawSkill__Awake(ServantStatusListViewItemDrawSkill_o *this, const MethodInfo *method)
{
  ;
}


int32_t ServantStatusListViewItemDrawSkill__GetKind(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  return 4;
}


void ServantStatusListViewItemDrawSkill__SetItem(
        ServantStatusListViewItemDrawSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawSkill___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *skillList; // x22
  System_Action_object__o *_9__18_0; // x23
  Il2CppObject *v10; // x24
  struct ServantStatusListViewItemDrawSkill___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x1
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o **v21; // x8
  System_String_o *v22; // x22
  int32_t SvtId; // w26
  int32_t ConvertOverwriteDispImageLimitCount; // w23
  ServantStatusListViewItem_o *v25; // x0
  bool v26; // w2
  int v27; // w25
  __int64 i; // x21
  unsigned __int64 v29; // x22
  SkillInfo_o *v30; // x24
  int64_t UserId; // x0
  UnityEngine_GameObject_o *v32; // x24
  ServantStatusListViewItemDrawSkill_c *v33; // x0
  float v34; // s8
  UILabel_o *transformNameLabel; // x24
  UnityEngine_GameObject_o *skillBaseObject; // x24
  ServantStatusListViewItemDrawSkill_c *v37; // x0
  Il2CppObject *Master_object; // x24
  int v39; // w29
  bool v40; // w28
  signed __int64 v41; // x22
  __int64 j; // x23
  unsigned __int64 v43; // x21
  SkillInfo_o *v44; // x25
  int32_t id; // w26
  struct ServantStatusPossessionSkillComponent_array *v46; // x8
  __int64 v47; // x8
  ServantSkillAddEntity_o *v48; // x26
  const MethodInfo *v49; // x4
  struct ServantStatusPossessionSkillComponent_array *v50; // x8
  struct ServantStatusPossessionSkillComponent_array *v51; // x8
  _BOOL4 isUse; // w8
  int32_t lv; // w25
  struct ServantStatusPossessionSkillComponent_array *v54; // x9
  __int64 v55; // x8
  int v56; // w25
  struct ServantStatusPossessionSkillComponent_array *v57; // x8
  __int64 v58; // x8
  float v59; // s8
  int v60; // w8
  float v61; // s8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItemDrawSkill_c *v63; // x0
  struct ServantStatusListViewItemDrawSkill_StaticFields *v64; // x8
  ServantStatusListViewItemDrawSkill_c *v65; // x0
  UnityEngine_GameObject_o *reinforceObject; // x20
  ServantStatusListViewItemDrawSkill_c *v67; // x0
  UIWidget_o *baseSprite; // x20
  float TitleStartPosY; // s9
  float v70; // s0
  int32_t v71; // w1
  UnityEngine_BoxCollider_o *baseCollider; // x20
  bool v74; // [xsp+0h] [xbp-90h]
  int32_t v75; // [xsp+4h] [xbp-8Ch]
  int32_t limitCount; // [xsp+8h] [xbp-88h]
  int32_t maxLimitCount; // [xsp+Ch] [xbp-84h]
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E575 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_1C93AD4(&Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__);
    sub_1C93AD4(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_12021/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C93AD4(&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    byte_4D2E575 = 1;
  }
  entity = 0;
  skillInfoList = 0;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
  v7 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
  skillList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillList;
  if ( !ServantStatusListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill___c_TypeInfo);
    v7 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
  }
  _9__18_0 = (System_Action_object__o *)v7->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__18_0 = (System_Action_object__o *)sub_1C93D20(System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    System_Action_object____ctor(_9__18_0, v10, Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, 0);
    static_fields = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Action_ServantStatusPossessionSkillComponent__o *)_9__18_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_0,
      (int32_t)_9__18_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  BasicHelper__ForEach_object_(
    skillList,
    (System_Action_T__o *)_9__18_0,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_129;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0) )
    v21 = (System_String_o **)&StringLiteral_12021/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v21 = (System_String_o **)&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v22 = *v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEntity = (__int64)LocalizationManager__Get(v22, 0);
  if ( !explanationLabel )
    goto LABEL_129;
  UILabel__set_text(explanationLabel, (System_String_o *)svtEntity, 0);
  SvtId = ServantStatusListViewItem__GetSvtId(item, !item->fields._TransformIsNotSkillChange_k__BackingField, 0);
  maxLimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  if ( item->fields._IsTransformed_k__BackingField && !item->fields._TransformIsNotSkillChange_k__BackingField )
  {
    v26 = 1;
    v25 = item;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !svtEntity )
      goto LABEL_129;
    ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                            (ServantLimitImageMaster_o *)svtEntity,
                                            SvtId,
                                            ConvertOverwriteDispImageLimitCount,
                                            0);
    if ( ServantStatusListViewItem__get_IsMine(item, 0) )
    {
      ServantStatusListViewItem__GetSkillInfo_36589440(item, &skillInfoList, ConvertOverwriteDispImageLimitCount, 0);
      goto LABEL_28;
    }
    v25 = item;
    v26 = 0;
  }
  ServantStatusListViewItem__GetSkillInfo(v25, &skillInfoList, v26, 0);
LABEL_28:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  limitCount = ImageLimitCount__GetLimitCountByDispLimit(ConvertOverwriteDispImageLimitCount, maxLimitCount, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0) )
  {
    v27 = 0;
    for ( i = 4; ; ++i )
    {
      svtEntity = (__int64)BalanceConfig_TypeInfo;
      v29 = i - 4;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v29 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
        break;
      if ( !skillInfoList )
        goto LABEL_129;
      if ( v29 >= LODWORD(skillInfoList->max_length) )
LABEL_130:
        sub_1C93D34(svtEntity);
      v30 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
      if ( v30 )
      {
        if ( v30->fields.id >= 1 )
        {
          UserId = ServantStatusListViewItem__get_UserId(item, 0);
          SkillInfo__OverwriteNextSkill(v30, UserId, SvtId, item->fields._BeforeClearQuestId_k__BackingField, 0);
          v27 = i - 3;
        }
      }
    }
    if ( item->fields._IsTransformServant_k__BackingField && !item->fields._TransformIsNotSkillChange_k__BackingField )
    {
      svtEntity = (__int64)this->fields.transformNameLabel;
      if ( !svtEntity )
        goto LABEL_129;
      UIWidget__set_color((UIWidget_o *)svtEntity, item->fields._TransformNameLabelColor_k__BackingField, 0);
      svtEntity = (__int64)this->fields.transformNameSprite;
      if ( !svtEntity )
        goto LABEL_129;
      UIWidget__set_color((UIWidget_o *)svtEntity, item->fields._TransformNameSpriteColor_k__BackingField, 0);
      svtEntity = (__int64)this->fields.transformNameSprite;
      if ( !svtEntity )
        goto LABEL_129;
      svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
      if ( !svtEntity )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
      transformNameLabel = this->fields.transformNameLabel;
      svtEntity = (__int64)ServantStatusListViewItem__GetTransformName(item, 0);
      if ( !transformNameLabel )
        goto LABEL_129;
      UILabel__set_text(transformNameLabel, (System_String_o *)svtEntity, 0);
      skillBaseObject = this->fields.skillBaseObject;
      v37 = ServantStatusListViewItemDrawSkill_TypeInfo;
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v37 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(
        skillBaseObject,
        v37->static_fields->SkillStartPosY - (float)v37->static_fields->TransformNameAddHeight,
        0);
      v34 = (float)((float)ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->TransformNameAddHeight
                  - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY)
          + 0.0;
    }
    else
    {
      svtEntity = (__int64)this->fields.transformNameSprite;
      if ( !svtEntity )
        goto LABEL_129;
      svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
      if ( !svtEntity )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
      v32 = this->fields.skillBaseObject;
      v33 = ServantStatusListViewItemDrawSkill_TypeInfo;
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v33 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v32, v33->static_fields->SkillStartPosY, 0);
      v34 = 0.0 - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( svtEntity )
    {
      v75 = SvtId;
      ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)svtEntity, &entity, SvtId, limitCount, 0);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
      svtEntity = (__int64)BalanceConfig_TypeInfo;
      v39 = 0;
      v74 = 0;
      v40 = 0;
      v41 = v27;
      for ( j = 4; ; ++j )
      {
        v43 = j - 4;
        if ( !*(_DWORD *)(svtEntity + 224) )
        {
          j_il2cpp_runtime_class_init_0(svtEntity);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v43 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
          break;
        if ( (__int64)v43 < v41 )
        {
          if ( !skillInfoList )
            goto LABEL_129;
          if ( v43 >= LODWORD(skillInfoList->max_length) )
            goto LABEL_130;
          v44 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + j);
          if ( v44 )
          {
            id = v44->fields.id;
            svtEntity = ServantStatusListViewItem__get_IsMine(item, 0);
            if ( !Master_object )
              goto LABEL_129;
            svtEntity = (__int64)ServantSkillAddMaster__GetEnableEntity(
                                   (ServantSkillAddMaster_o *)Master_object,
                                   v75,
                                   maxLimitCount,
                                   id,
                                   0,
                                   limitCount,
                                   svtEntity & 1,
                                   0);
            v46 = this->fields.skillList;
            if ( !v46 )
              goto LABEL_129;
            if ( v43 >= LODWORD(v46->max_length) )
              goto LABEL_130;
            v47 = *((_QWORD *)&v46->obj.klass + j);
            if ( !v47 )
              goto LABEL_129;
            v48 = (ServantSkillAddEntity_o *)svtEntity;
            svtEntity = *(_QWORD *)(v47 + 32);
            if ( !svtEntity )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
            v50 = this->fields.skillList;
            if ( !v50 )
              goto LABEL_129;
            if ( v43 >= LODWORD(v50->max_length) )
              goto LABEL_130;
            svtEntity = *((_QWORD *)&v50->obj.klass + j);
            if ( !svtEntity )
              goto LABEL_129;
            ServantStatusPossessionSkillComponent__Set(
              (ServantStatusPossessionSkillComponent_o *)svtEntity,
              v44,
              v48,
              entity,
              v49);
            v51 = this->fields.skillList;
            if ( !v51 )
              goto LABEL_129;
            if ( v43 >= LODWORD(v51->max_length) )
              goto LABEL_130;
            ComponentHelper__SetLocalPositionY(*((UnityEngine_Component_o **)&v51->obj.klass + j), (float)-v39, 0);
            isUse = v44->fields.isUse;
            if ( v44->fields.isUse )
            {
              lv = v44->fields.lv;
              svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
              if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
              }
              isUse = lv < *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 12LL);
            }
            v54 = this->fields.skillList;
            v40 = isUse || v40;
            if ( !v54 )
              goto LABEL_129;
            if ( v43 >= LODWORD(v54->max_length) )
              goto LABEL_130;
            v55 = *((_QWORD *)&v54->obj.klass + j);
            if ( !v55 )
              goto LABEL_129;
            svtEntity = (__int64)BalanceConfig_TypeInfo;
            v56 = *(_DWORD *)(v55 + 64);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              svtEntity = (__int64)BalanceConfig_TypeInfo;
            }
            v39 += v56;
            if ( v43 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 40LL) - 1 )
            {
              v57 = this->fields.skillList;
              if ( !v57 )
                goto LABEL_129;
              if ( v43 >= LODWORD(v57->max_length) )
                goto LABEL_130;
              v58 = *((_QWORD *)&v57->obj.klass + j);
              if ( !v58 )
                goto LABEL_129;
              v74 = *(_BYTE *)(v58 + 68) != 0;
            }
          }
        }
      }
      if ( !byte_4D2A7BA )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A7BA = 1;
      }
      v59 = v34 + (float)v39;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v60 = vcvtps_s32_f32(v59);
      if ( ceilf(v59) == INFINITY )
        v61 = -2147500000.0;
      else
        v61 = (float)v60;
      if ( v40 && item->fields._IsDisplayCombineButton_k__BackingField )
      {
        userSvtEntity = item->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
          {
            v63 = ServantStatusListViewItemDrawSkill_TypeInfo;
            if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
              v63 = ServantStatusListViewItemDrawSkill_TypeInfo;
            }
            v64 = v63->static_fields;
            v61 = v61 + (float)v64->CombineAdjustHeight;
            if ( v74 )
            {
              if ( !v63->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v63);
                v64 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
              }
              v61 = v61 + (float)v64->CombineAddAdjustHeight;
            }
            svtEntity = (__int64)this->fields.reinforceObject;
            if ( !svtEntity )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
            svtEntity = (__int64)this->fields.reinforceButton;
            if ( !svtEntity )
              goto LABEL_129;
            *(_BYTE *)(svtEntity + 97) = 1;
            UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0);
            v65 = ServantStatusListViewItemDrawSkill_TypeInfo;
            reinforceObject = this->fields.reinforceObject;
            if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
              v65 = ServantStatusListViewItemDrawSkill_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(
              reinforceObject,
              v65->static_fields->TitleStartPosY
            + (float)((float)((float)v65->static_fields->CombineAdjustHeight * 0.5) - v61),
              0);
          }
        }
      }
      v67 = ServantStatusListViewItemDrawSkill_TypeInfo;
      baseSprite = (UIWidget_o *)this->fields.baseSprite;
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v67 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      TitleStartPosY = v67->static_fields->TitleStartPosY;
      if ( !byte_4D2A138 )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A138 = 1;
      }
      svtEntity = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( baseSprite )
      {
        v70 = floorf(v61 + (float)(TitleStartPosY * -0.5));
        v71 = v70 == INFINITY ? 0x80000000 : (int)v70;
        UIWidget__set_height(baseSprite, v71, 0);
        svtEntity = (__int64)this->fields.baseSprite;
        if ( svtEntity )
        {
          baseCollider = this->fields.baseCollider;
          svtEntity = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svtEntity + 664LL))(
                        svtEntity,
                        *(_QWORD *)(*(_QWORD *)svtEntity + 672LL));
          if ( baseCollider )
          {
            v80.fields.z = 0.0;
            UnityEngine_BoxCollider__set_size(baseCollider, v80, 0);
            svtEntity = (__int64)this->fields.baseSprite;
            if ( svtEntity )
            {
              ComponentHelper__SetLocalPositionY(
                (UnityEngine_Component_o *)svtEntity,
                (float)*(int *)(svtEntity + 172) * 0.5,
                0);
              return;
            }
          }
        }
      }
    }
LABEL_129:
    sub_1C93D2C(svtEntity, v18);
  }
}


void ServantStatusListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E578 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    byte_4D2E578 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantStatusListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawSkill___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusListViewItemDrawSkill___c___ctor(
        ServantStatusListViewItemDrawSkill___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusListViewItemDrawSkill___c___SetItem_b__18_0(
        ServantStatusListViewItemDrawSkill___c_o *this,
        ServantStatusPossessionSkillComponent_o *skill,
        const MethodInfo *method)
{
  if ( !skill || (this = (ServantStatusListViewItemDrawSkill___c_o *)skill->fields.baseObject) == 0 )
    sub_1C93D2C(this, skill);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}