void ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4C23FF4 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_4C23FF4 = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleStartPosY = 0xC23E000040A00000LL;
  *(_OWORD *)&static_fields->TransformNameAddHeight = xmmword_C09850;
}


void ServantStatusListViewItemDrawSkill___ctor(ServantStatusListViewItemDrawSkill_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct ServantStatusPossessionSkillComponent_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C23FF3 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&ServantStatusPossessionSkillComponent___TypeInfo);
    byte_4C23FF3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct ServantStatusPossessionSkillComponent_array *)sub_1C2D538(
                                                               ServantStatusPossessionSkillComponent___TypeInfo,
                                                               (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
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


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o **v17; // x8
  System_String_o *v18; // x22
  int32_t SvtId; // w25
  int32_t ConvertOverwriteDispImageLimitCount; // w23
  bool v21; // w2
  ServantStatusListViewItem_o *v22; // x0
  __int64 v23; // x2
  int v24; // w22
  __int64 i; // x21
  unsigned __int64 v26; // x23
  SkillInfo_o *v27; // x24
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  UnityEngine_GameObject_o *skillBaseObject; // x24
  ServantStatusListViewItemDrawSkill_c *v32; // x0
  float v33; // s8
  UnityEngine_GameObject_o *v34; // x24
  ServantStatusListViewItemDrawSkill_c *v35; // x0
  Il2CppObject *Master_object; // x24
  int v37; // w29
  bool v38; // w28
  __int64 j; // x23
  unsigned __int64 v40; // x21
  SkillInfo_o *v41; // x25
  int32_t id; // w26
  struct ServantStatusPossessionSkillComponent_array *v43; // x8
  ServantSkillAddEntity_o *v44; // x26
  struct ServantStatusPossessionSkillComponent_array *v45; // x8
  struct ServantStatusPossessionSkillComponent_array *v46; // x8
  _BOOL4 isUse; // w8
  int32_t lv; // w25
  struct ServantStatusPossessionSkillComponent_array *v49; // x9
  __int64 v50; // x8
  int v51; // w25
  struct ServantStatusPossessionSkillComponent_array *v52; // x8
  __int64 v53; // x8
  float v54; // s8
  int v55; // w8
  float v56; // s8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItemDrawSkill_c *v58; // x0
  struct ServantStatusListViewItemDrawSkill_StaticFields *v59; // x8
  ServantStatusListViewItemDrawSkill_c *v60; // x0
  UnityEngine_GameObject_o *reinforceObject; // x20
  ServantStatusListViewItemDrawSkill_c *v62; // x0
  UIWidget_o *baseSprite; // x20
  float TitleStartPosY; // s9
  float v65; // s0
  int32_t v66; // w1
  UnityEngine_BoxCollider_o *baseCollider; // x20
  int v68; // s0 OVERLAPPED
  int v70; // s2
  bool v71; // [xsp+0h] [xbp-90h]
  int32_t v72; // [xsp+4h] [xbp-8Ch]
  int32_t limitCount; // [xsp+8h] [xbp-88h]
  int32_t maxLimitCount; // [xsp+Ch] [xbp-84h]
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C23FF2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_1C2D490(&Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__);
    sub_1C2D490(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    sub_1C2D490(&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C2D490(&StringLiteral_11925/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    byte_4C23FF2 = 1;
  }
  entity = 0;
  skillInfoList = 0;
  this->fields.dispMode = mode;
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
    _9__18_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    System_Action_object____ctor(_9__18_0, v10, Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, 0);
    static_fields = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Action_ServantStatusPossessionSkillComponent__o *)_9__18_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    skillList,
    (System_Action_T__o *)_9__18_0,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_122;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0) )
    v17 = (System_String_o **)&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v17 = (System_String_o **)&StringLiteral_11925/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEntity = (__int64)LocalizationManager__Get(v18, 0);
  if ( !explanationLabel )
    goto LABEL_122;
  UILabel__set_text(explanationLabel, (System_String_o *)svtEntity, 0);
  SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0);
  maxLimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    v21 = 1;
    v22 = item;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !svtEntity )
      goto LABEL_122;
    ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                            (ServantLimitImageMaster_o *)svtEntity,
                                            SvtId,
                                            ConvertOverwriteDispImageLimitCount,
                                            0);
    if ( ServantStatusListViewItem__get_IsMine(item, 0) )
    {
      ServantStatusListViewItem__GetSkillInfo_35367092(item, &skillInfoList, ConvertOverwriteDispImageLimitCount, 0);
      goto LABEL_27;
    }
    v22 = item;
    v21 = 0;
  }
  ServantStatusListViewItem__GetSkillInfo(v22, &skillInfoList, v21, 0);
LABEL_27:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  limitCount = ImageLimitCount__GetLimitCountByDispLimit(ConvertOverwriteDispImageLimitCount, maxLimitCount, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0) )
  {
    v24 = 0;
    for ( i = 4; ; ++i )
    {
      svtEntity = (__int64)BalanceConfig_TypeInfo;
      v26 = i - 4;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v26 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
        break;
      if ( !skillInfoList )
        goto LABEL_122;
      if ( v26 >= LODWORD(skillInfoList->max_length) )
LABEL_123:
        sub_1C2D6F4(svtEntity, v14, v23);
      v27 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
      if ( v27 )
      {
        if ( v27->fields.id >= 1 )
        {
          UserId = ServantStatusListViewItem__get_UserId(item, 0);
          SkillInfo__OverwriteNextSkill(v27, UserId, SvtId, 0);
          v24 = i - 3;
        }
      }
    }
    svtEntity = (__int64)this->fields.transformNameSprite;
    if ( svtEntity )
    {
      IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
      svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
      if ( svtEntity )
      {
        if ( IsTransformServant_k__BackingField )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
          transformNameLabel = this->fields.transformNameLabel;
          svtEntity = (__int64)ServantStatusListViewItem__GetTransformName(item, 0);
          if ( !transformNameLabel )
            goto LABEL_122;
          UILabel__set_text(transformNameLabel, (System_String_o *)svtEntity, 0);
          skillBaseObject = this->fields.skillBaseObject;
          v32 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v32 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(
            skillBaseObject,
            v32->static_fields->SkillStartPosY - (float)v32->static_fields->TransformNameAddHeight,
            0);
          v33 = (float)((float)ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->TransformNameAddHeight
                      - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY)
              + 0.0;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
          v34 = this->fields.skillBaseObject;
          v35 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v35 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v34, v35->static_fields->SkillStartPosY, 0);
          v33 = 0.0 - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        if ( svtEntity )
        {
          v72 = SvtId;
          ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)svtEntity, &entity, SvtId, limitCount, 0);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
          v37 = 0;
          v71 = 0;
          v38 = 0;
          for ( j = 4; ; ++j )
          {
            v40 = j - 4;
            if ( !*(_DWORD *)(svtEntity + 224) )
            {
              j_il2cpp_runtime_class_init_0(svtEntity);
              svtEntity = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v40 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
              break;
            if ( (__int64)v40 < v24 )
            {
              if ( !skillInfoList )
                goto LABEL_122;
              if ( v40 >= LODWORD(skillInfoList->max_length) )
                goto LABEL_123;
              v41 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + j);
              if ( v41 )
              {
                id = v41->fields.id;
                svtEntity = ServantStatusListViewItem__get_IsMine(item, 0);
                if ( !Master_object )
                  goto LABEL_122;
                svtEntity = (__int64)ServantSkillAddMaster__GetEnableEntity(
                                       (ServantSkillAddMaster_o *)Master_object,
                                       v72,
                                       maxLimitCount,
                                       id,
                                       0,
                                       limitCount,
                                       svtEntity & 1,
                                       0);
                v43 = this->fields.skillList;
                if ( !v43 )
                  goto LABEL_122;
                if ( v40 >= LODWORD(v43->max_length) )
                  goto LABEL_123;
                v44 = (ServantSkillAddEntity_o *)svtEntity;
                svtEntity = *((_QWORD *)&v43->obj.klass + j);
                if ( !svtEntity )
                  goto LABEL_122;
                ServantStatusPossessionSkillComponent__SetActive(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  1,
                  0);
                v45 = this->fields.skillList;
                if ( !v45 )
                  goto LABEL_122;
                if ( v40 >= LODWORD(v45->max_length) )
                  goto LABEL_123;
                svtEntity = *((_QWORD *)&v45->obj.klass + j);
                if ( !svtEntity )
                  goto LABEL_122;
                ServantStatusPossessionSkillComponent__Set(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  v41,
                  v44,
                  entity,
                  0);
                v46 = this->fields.skillList;
                if ( !v46 )
                  goto LABEL_122;
                if ( v40 >= LODWORD(v46->max_length) )
                  goto LABEL_123;
                ComponentHelper__SetLocalPositionY(*((UnityEngine_Component_o **)&v46->obj.klass + j), (float)-v37, 0);
                isUse = v41->fields.isUse;
                if ( v41->fields.isUse )
                {
                  lv = v41->fields.lv;
                  svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                    svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  }
                  isUse = lv < *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 12LL);
                }
                v49 = this->fields.skillList;
                v38 = isUse || v38;
                if ( !v49 )
                  goto LABEL_122;
                if ( v40 >= LODWORD(v49->max_length) )
                  goto LABEL_123;
                v50 = *((_QWORD *)&v49->obj.klass + j);
                if ( !v50 )
                  goto LABEL_122;
                svtEntity = (__int64)BalanceConfig_TypeInfo;
                v51 = *(_DWORD *)(v50 + 64);
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  svtEntity = (__int64)BalanceConfig_TypeInfo;
                }
                v37 += v51;
                if ( v40 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 40LL) - 1 )
                {
                  v52 = this->fields.skillList;
                  if ( !v52 )
                    goto LABEL_122;
                  if ( v40 >= LODWORD(v52->max_length) )
                    goto LABEL_123;
                  v53 = *((_QWORD *)&v52->obj.klass + j);
                  if ( !v53 )
                    goto LABEL_122;
                  v71 = *(_BYTE *)(v53 + 68) != 0;
                }
              }
            }
          }
          if ( !byte_4C21465 )
          {
            sub_1C2D490(&System_Math_TypeInfo);
            byte_4C21465 = 1;
          }
          v54 = v33 + (float)v37;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v55 = vcvtps_s32_f32(v54);
          if ( ceilf(v54) == INFINITY )
            v56 = -2147500000.0;
          else
            v56 = (float)v55;
          if ( v38 && item->fields._IsDisplayCombineButton_k__BackingField )
          {
            userSvtEntity = item->fields.userSvtEntity;
            if ( userSvtEntity )
            {
              if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
              {
                v58 = ServantStatusListViewItemDrawSkill_TypeInfo;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v58 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                v59 = v58->static_fields;
                v56 = v56 + (float)v59->CombineAdjustHeight;
                if ( v71 )
                {
                  if ( !v58->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v58);
                    v59 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
                  }
                  v56 = v56 + (float)v59->CombineAddAdjustHeight;
                }
                svtEntity = (__int64)this->fields.reinforceObject;
                if ( !svtEntity )
                  goto LABEL_122;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                svtEntity = (__int64)this->fields.reinforceButton;
                if ( !svtEntity )
                  goto LABEL_122;
                *(_BYTE *)(svtEntity + 97) = 1;
                UICommonButton__SetEnable(
                  (UICommonButton_o *)svtEntity,
                  item->fields._CanMoveCombine_k__BackingField,
                  0);
                v60 = ServantStatusListViewItemDrawSkill_TypeInfo;
                reinforceObject = this->fields.reinforceObject;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v60 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  reinforceObject,
                  v60->static_fields->TitleStartPosY
                + (float)((float)((float)v60->static_fields->CombineAdjustHeight * 0.5) - v56),
                  0);
              }
            }
          }
          v62 = ServantStatusListViewItemDrawSkill_TypeInfo;
          baseSprite = (UIWidget_o *)this->fields.baseSprite;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v62 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          TitleStartPosY = v62->static_fields->TitleStartPosY;
          if ( !byte_4C20DA0 )
          {
            sub_1C2D490(&System_Math_TypeInfo);
            byte_4C20DA0 = 1;
          }
          svtEntity = (__int64)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( baseSprite )
          {
            v65 = floorf(v56 + (float)(TitleStartPosY * -0.5));
            v66 = v65 == INFINITY ? 0x80000000 : (int)v65;
            UIWidget__set_height(baseSprite, v66, 0);
            svtEntity = (__int64)this->fields.baseSprite;
            if ( svtEntity )
            {
              baseCollider = this->fields.baseCollider;
              svtEntity = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svtEntity + 664LL))(
                            svtEntity,
                            *(_QWORD *)(*(_QWORD *)svtEntity + 672LL));
              if ( baseCollider )
              {
                v70 = 0;
                UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v68, 0);
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
      }
    }
LABEL_122:
    sub_1C2D6EC(svtEntity, v14);
  }
}


void ServantStatusListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24B24 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    byte_4C24B24 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantStatusListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawSkill___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C2D6EC(this, skill);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}