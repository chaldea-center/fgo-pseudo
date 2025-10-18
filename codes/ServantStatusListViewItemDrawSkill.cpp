void ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4C3FBA2 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_4C3FBA2 = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleStartPosY = 0xC23E000040A00000LL;
  *(_OWORD *)&static_fields->TransformNameAddHeight = xmmword_C0EBB0;
}


void ServantStatusListViewItemDrawSkill___ctor(ServantStatusListViewItemDrawSkill_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct ServantStatusPossessionSkillComponent_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3FBA1 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&ServantStatusPossessionSkillComponent___TypeInfo);
    byte_4C3FBA1 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct ServantStatusPossessionSkillComponent_array *)sub_1C37100(
                                                               ServantStatusPossessionSkillComponent___TypeInfo,
                                                               (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6);
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
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o **v16; // x8
  System_String_o *v17; // x22
  int32_t SvtId; // w25
  int32_t ConvertOverwriteDispImageLimitCount; // w23
  bool v20; // w2
  ServantStatusListViewItem_o *v21; // x0
  int v22; // w22
  __int64 i; // x21
  unsigned __int64 v24; // x23
  SkillInfo_o *v25; // x24
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  UnityEngine_GameObject_o *skillBaseObject; // x24
  ServantStatusListViewItemDrawSkill_c *v30; // x0
  float v31; // s8
  UnityEngine_GameObject_o *v32; // x24
  ServantStatusListViewItemDrawSkill_c *v33; // x0
  Il2CppObject *Master_object; // x24
  int v35; // w29
  bool v36; // w28
  __int64 j; // x23
  unsigned __int64 v38; // x21
  SkillInfo_o *v39; // x25
  int32_t id; // w26
  struct ServantStatusPossessionSkillComponent_array *v41; // x8
  ServantSkillAddEntity_o *v42; // x26
  struct ServantStatusPossessionSkillComponent_array *v43; // x8
  struct ServantStatusPossessionSkillComponent_array *v44; // x8
  _BOOL4 isUse; // w8
  int32_t lv; // w25
  struct ServantStatusPossessionSkillComponent_array *v47; // x9
  __int64 v48; // x8
  int v49; // w25
  struct ServantStatusPossessionSkillComponent_array *v50; // x8
  __int64 v51; // x8
  float v52; // s8
  int v53; // w8
  float v54; // s8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItemDrawSkill_c *v56; // x0
  struct ServantStatusListViewItemDrawSkill_StaticFields *v57; // x8
  ServantStatusListViewItemDrawSkill_c *v58; // x0
  UnityEngine_GameObject_o *reinforceObject; // x20
  ServantStatusListViewItemDrawSkill_c *v60; // x0
  UIWidget_o *baseSprite; // x20
  float TitleStartPosY; // s9
  float v63; // s0
  int32_t v64; // w1
  UnityEngine_BoxCollider_o *baseCollider; // x20
  int v66; // s0 OVERLAPPED
  int v68; // s2
  bool v69; // [xsp+0h] [xbp-90h]
  int32_t v70; // [xsp+4h] [xbp-8Ch]
  int32_t limitCount; // [xsp+8h] [xbp-88h]
  int32_t maxLimitCount; // [xsp+Ch] [xbp-84h]
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C3FBA0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_1C37058(&Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__);
    sub_1C37058(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    sub_1C37058(&StringLiteral_11934/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C37058(&StringLiteral_11932/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    byte_4C3FBA0 = 1;
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
    _9__18_0 = (System_Action_object__o *)sub_1C372A4(System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    System_Action_object____ctor(_9__18_0, v10, Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, 0);
    static_fields = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Action_ServantStatusPossessionSkillComponent__o *)_9__18_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    skillList,
    (System_Action_T__o *)_9__18_0,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_122;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0) )
    v16 = (System_String_o **)&StringLiteral_11934/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v16 = (System_String_o **)&StringLiteral_11932/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v17 = *v16;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEntity = (__int64)LocalizationManager__Get(v17, 0);
  if ( !explanationLabel )
    goto LABEL_122;
  UILabel__set_text(explanationLabel, (System_String_o *)svtEntity, 0);
  SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0);
  maxLimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    v20 = 1;
    v21 = item;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !svtEntity )
      goto LABEL_122;
    ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                            (ServantLimitImageMaster_o *)svtEntity,
                                            SvtId,
                                            ConvertOverwriteDispImageLimitCount,
                                            0);
    if ( ServantStatusListViewItem__get_IsMine(item, 0) )
    {
      ServantStatusListViewItem__GetSkillInfo_35393004(item, &skillInfoList, ConvertOverwriteDispImageLimitCount, 0);
      goto LABEL_27;
    }
    v21 = item;
    v20 = 0;
  }
  ServantStatusListViewItem__GetSkillInfo(v21, &skillInfoList, v20, 0);
LABEL_27:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  limitCount = ImageLimitCount__GetLimitCountByDispLimit(ConvertOverwriteDispImageLimitCount, maxLimitCount, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0) )
  {
    v22 = 0;
    for ( i = 4; ; ++i )
    {
      svtEntity = (__int64)BalanceConfig_TypeInfo;
      v24 = i - 4;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v24 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
        break;
      if ( !skillInfoList )
        goto LABEL_122;
      if ( v24 >= LODWORD(skillInfoList->max_length) )
LABEL_123:
        sub_1C372BC(svtEntity);
      v25 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
      if ( v25 )
      {
        if ( v25->fields.id >= 1 )
        {
          UserId = ServantStatusListViewItem__get_UserId(item, 0);
          SkillInfo__OverwriteNextSkill(v25, UserId, SvtId, 0);
          v22 = i - 3;
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
          v30 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v30 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(
            skillBaseObject,
            v30->static_fields->SkillStartPosY - (float)v30->static_fields->TransformNameAddHeight,
            0);
          v31 = (float)((float)ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->TransformNameAddHeight
                      - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY)
              + 0.0;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
          v32 = this->fields.skillBaseObject;
          v33 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v33 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v32, v33->static_fields->SkillStartPosY, 0);
          v31 = 0.0 - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        if ( svtEntity )
        {
          v70 = SvtId;
          ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)svtEntity, &entity, SvtId, limitCount, 0);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
          v35 = 0;
          v69 = 0;
          v36 = 0;
          for ( j = 4; ; ++j )
          {
            v38 = j - 4;
            if ( !*(_DWORD *)(svtEntity + 224) )
            {
              j_il2cpp_runtime_class_init_0(svtEntity);
              svtEntity = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v38 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
              break;
            if ( (__int64)v38 < v22 )
            {
              if ( !skillInfoList )
                goto LABEL_122;
              if ( v38 >= LODWORD(skillInfoList->max_length) )
                goto LABEL_123;
              v39 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + j);
              if ( v39 )
              {
                id = v39->fields.id;
                svtEntity = ServantStatusListViewItem__get_IsMine(item, 0);
                if ( !Master_object )
                  goto LABEL_122;
                svtEntity = (__int64)ServantSkillAddMaster__GetEnableEntity(
                                       (ServantSkillAddMaster_o *)Master_object,
                                       v70,
                                       maxLimitCount,
                                       id,
                                       0,
                                       limitCount,
                                       svtEntity & 1,
                                       0);
                v41 = this->fields.skillList;
                if ( !v41 )
                  goto LABEL_122;
                if ( v38 >= LODWORD(v41->max_length) )
                  goto LABEL_123;
                v42 = (ServantSkillAddEntity_o *)svtEntity;
                svtEntity = *((_QWORD *)&v41->obj.klass + j);
                if ( !svtEntity )
                  goto LABEL_122;
                ServantStatusPossessionSkillComponent__SetActive(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  1,
                  0);
                v43 = this->fields.skillList;
                if ( !v43 )
                  goto LABEL_122;
                if ( v38 >= LODWORD(v43->max_length) )
                  goto LABEL_123;
                svtEntity = *((_QWORD *)&v43->obj.klass + j);
                if ( !svtEntity )
                  goto LABEL_122;
                ServantStatusPossessionSkillComponent__Set(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  v39,
                  v42,
                  entity,
                  0);
                v44 = this->fields.skillList;
                if ( !v44 )
                  goto LABEL_122;
                if ( v38 >= LODWORD(v44->max_length) )
                  goto LABEL_123;
                ComponentHelper__SetLocalPositionY(*((UnityEngine_Component_o **)&v44->obj.klass + j), (float)-v35, 0);
                isUse = v39->fields.isUse;
                if ( v39->fields.isUse )
                {
                  lv = v39->fields.lv;
                  svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                    svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  }
                  isUse = lv < *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 12LL);
                }
                v47 = this->fields.skillList;
                v36 = isUse || v36;
                if ( !v47 )
                  goto LABEL_122;
                if ( v38 >= LODWORD(v47->max_length) )
                  goto LABEL_123;
                v48 = *((_QWORD *)&v47->obj.klass + j);
                if ( !v48 )
                  goto LABEL_122;
                svtEntity = (__int64)BalanceConfig_TypeInfo;
                v49 = *(_DWORD *)(v48 + 64);
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  svtEntity = (__int64)BalanceConfig_TypeInfo;
                }
                v35 += v49;
                if ( v38 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 40LL) - 1 )
                {
                  v50 = this->fields.skillList;
                  if ( !v50 )
                    goto LABEL_122;
                  if ( v38 >= LODWORD(v50->max_length) )
                    goto LABEL_123;
                  v51 = *((_QWORD *)&v50->obj.klass + j);
                  if ( !v51 )
                    goto LABEL_122;
                  v69 = *(_BYTE *)(v51 + 68) != 0;
                }
              }
            }
          }
          if ( !byte_4C3CFE8 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3CFE8 = 1;
          }
          v52 = v31 + (float)v35;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v53 = vcvtps_s32_f32(v52);
          if ( ceilf(v52) == INFINITY )
            v54 = -2147500000.0;
          else
            v54 = (float)v53;
          if ( v36 && item->fields._IsDisplayCombineButton_k__BackingField )
          {
            userSvtEntity = item->fields.userSvtEntity;
            if ( userSvtEntity )
            {
              if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
              {
                v56 = ServantStatusListViewItemDrawSkill_TypeInfo;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v56 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                v57 = v56->static_fields;
                v54 = v54 + (float)v57->CombineAdjustHeight;
                if ( v69 )
                {
                  if ( !v56->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v56);
                    v57 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
                  }
                  v54 = v54 + (float)v57->CombineAddAdjustHeight;
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
                v58 = ServantStatusListViewItemDrawSkill_TypeInfo;
                reinforceObject = this->fields.reinforceObject;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v58 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  reinforceObject,
                  v58->static_fields->TitleStartPosY
                + (float)((float)((float)v58->static_fields->CombineAdjustHeight * 0.5) - v54),
                  0);
              }
            }
          }
          v60 = ServantStatusListViewItemDrawSkill_TypeInfo;
          baseSprite = (UIWidget_o *)this->fields.baseSprite;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v60 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          TitleStartPosY = v60->static_fields->TitleStartPosY;
          if ( !byte_4C3C920 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3C920 = 1;
          }
          svtEntity = (__int64)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( baseSprite )
          {
            v63 = floorf(v54 + (float)(TitleStartPosY * -0.5));
            v64 = v63 == INFINITY ? 0x80000000 : (int)v63;
            UIWidget__set_height(baseSprite, v64, 0);
            svtEntity = (__int64)this->fields.baseSprite;
            if ( svtEntity )
            {
              baseCollider = this->fields.baseCollider;
              svtEntity = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svtEntity + 664LL))(
                            svtEntity,
                            *(_QWORD *)(*(_QWORD *)svtEntity + 672LL));
              if ( baseCollider )
              {
                v68 = 0;
                UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v66, 0);
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
    sub_1C372B4(svtEntity);
  }
}


void ServantStatusListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4063A & 1) == 0 )
  {
    sub_1C37058(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    byte_4C4063A = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantStatusListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawSkill___c_o *)v1;
  sub_1C36FFC(
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
    sub_1C372B4(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}