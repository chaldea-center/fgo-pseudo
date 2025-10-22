void ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4C5393F & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_4C5393F = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleStartPosY = 0xC23E000040A00000LL;
  *(_OWORD *)&static_fields->TransformNameAddHeight = xmmword_C12220;
}


void ServantStatusListViewItemDrawSkill___ctor(ServantStatusListViewItemDrawSkill_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct ServantStatusPossessionSkillComponent_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C5393E & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&ServantStatusPossessionSkillComponent___TypeInfo);
    byte_4C5393E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct ServantStatusPossessionSkillComponent_array *)sub_1C3E60C(
                                                               ServantStatusPossessionSkillComponent___TypeInfo,
                                                               (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillList = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6);
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
  int v23; // w22
  __int64 i; // x21
  unsigned __int64 v25; // x23
  SkillInfo_o *v26; // x24
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  UnityEngine_GameObject_o *skillBaseObject; // x24
  ServantStatusListViewItemDrawSkill_c *v31; // x0
  float v32; // s8
  UnityEngine_GameObject_o *v33; // x24
  ServantStatusListViewItemDrawSkill_c *v34; // x0
  Il2CppObject *Master_object; // x24
  int v36; // w29
  bool v37; // w28
  __int64 j; // x23
  unsigned __int64 v39; // x21
  SkillInfo_o *v40; // x25
  int32_t id; // w26
  struct ServantStatusPossessionSkillComponent_array *v42; // x8
  ServantSkillAddEntity_o *v43; // x26
  struct ServantStatusPossessionSkillComponent_array *v44; // x8
  struct ServantStatusPossessionSkillComponent_array *v45; // x8
  _BOOL4 isUse; // w8
  int32_t lv; // w25
  struct ServantStatusPossessionSkillComponent_array *v48; // x9
  __int64 v49; // x8
  int v50; // w25
  struct ServantStatusPossessionSkillComponent_array *v51; // x8
  __int64 v52; // x8
  float v53; // s8
  int v54; // w8
  float v55; // s8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItemDrawSkill_c *v57; // x0
  struct ServantStatusListViewItemDrawSkill_StaticFields *v58; // x8
  ServantStatusListViewItemDrawSkill_c *v59; // x0
  UnityEngine_GameObject_o *reinforceObject; // x20
  ServantStatusListViewItemDrawSkill_c *v61; // x0
  UIWidget_o *baseSprite; // x20
  float TitleStartPosY; // s9
  float v64; // s0
  int32_t v65; // w1
  UnityEngine_BoxCollider_o *baseCollider; // x20
  int v67; // s0 OVERLAPPED
  int v69; // s2
  bool v70; // [xsp+0h] [xbp-90h]
  int32_t v71; // [xsp+4h] [xbp-8Ch]
  int32_t limitCount; // [xsp+8h] [xbp-88h]
  int32_t maxLimitCount; // [xsp+Ch] [xbp-84h]
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C5393D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_1C3E564(&Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__);
    sub_1C3E564(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    sub_1C3E564(&StringLiteral_11936/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C3E564(&StringLiteral_11934/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    byte_4C5393D = 1;
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
    _9__18_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    System_Action_object____ctor(_9__18_0, v10, Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, 0);
    static_fields = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Action_ServantStatusPossessionSkillComponent__o *)_9__18_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    skillList,
    (System_Action_T__o *)_9__18_0,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_122;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0) )
    v17 = (System_String_o **)&StringLiteral_11936/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v17 = (System_String_o **)&StringLiteral_11934/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
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
    svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !svtEntity )
      goto LABEL_122;
    ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                            (ServantLimitImageMaster_o *)svtEntity,
                                            SvtId,
                                            ConvertOverwriteDispImageLimitCount,
                                            0);
    if ( ServantStatusListViewItem__get_IsMine(item, 0) )
    {
      ServantStatusListViewItem__GetSkillInfo_35432132(item, &skillInfoList, ConvertOverwriteDispImageLimitCount, 0);
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
    v23 = 0;
    for ( i = 4; ; ++i )
    {
      svtEntity = (__int64)BalanceConfig_TypeInfo;
      v25 = i - 4;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v25 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
        break;
      if ( !skillInfoList )
        goto LABEL_122;
      if ( v25 >= LODWORD(skillInfoList->max_length) )
LABEL_123:
        sub_1C3E7C8(svtEntity, v14);
      v26 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
      if ( v26 )
      {
        if ( v26->fields.id >= 1 )
        {
          UserId = ServantStatusListViewItem__get_UserId(item, 0);
          SkillInfo__OverwriteNextSkill(v26, UserId, SvtId, 0);
          v23 = i - 3;
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
          v31 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v31 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(
            skillBaseObject,
            v31->static_fields->SkillStartPosY - (float)v31->static_fields->TransformNameAddHeight,
            0);
          v32 = (float)((float)ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->TransformNameAddHeight
                      - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY)
              + 0.0;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
          v33 = this->fields.skillBaseObject;
          v34 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v34 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v33, v34->static_fields->SkillStartPosY, 0);
          v32 = 0.0 - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        if ( svtEntity )
        {
          v71 = SvtId;
          ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)svtEntity, &entity, SvtId, limitCount, 0);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
          v36 = 0;
          v70 = 0;
          v37 = 0;
          for ( j = 4; ; ++j )
          {
            v39 = j - 4;
            if ( !*(_DWORD *)(svtEntity + 224) )
            {
              j_il2cpp_runtime_class_init_0(svtEntity);
              svtEntity = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v39 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
              break;
            if ( (__int64)v39 < v23 )
            {
              if ( !skillInfoList )
                goto LABEL_122;
              if ( v39 >= LODWORD(skillInfoList->max_length) )
                goto LABEL_123;
              v40 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + j);
              if ( v40 )
              {
                id = v40->fields.id;
                svtEntity = ServantStatusListViewItem__get_IsMine(item, 0);
                if ( !Master_object )
                  goto LABEL_122;
                svtEntity = (__int64)ServantSkillAddMaster__GetEnableEntity(
                                       (ServantSkillAddMaster_o *)Master_object,
                                       v71,
                                       maxLimitCount,
                                       id,
                                       0,
                                       limitCount,
                                       svtEntity & 1,
                                       0);
                v42 = this->fields.skillList;
                if ( !v42 )
                  goto LABEL_122;
                if ( v39 >= LODWORD(v42->max_length) )
                  goto LABEL_123;
                v43 = (ServantSkillAddEntity_o *)svtEntity;
                svtEntity = *((_QWORD *)&v42->obj.klass + j);
                if ( !svtEntity )
                  goto LABEL_122;
                ServantStatusPossessionSkillComponent__SetActive(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  1,
                  0);
                v44 = this->fields.skillList;
                if ( !v44 )
                  goto LABEL_122;
                if ( v39 >= LODWORD(v44->max_length) )
                  goto LABEL_123;
                svtEntity = *((_QWORD *)&v44->obj.klass + j);
                if ( !svtEntity )
                  goto LABEL_122;
                ServantStatusPossessionSkillComponent__Set(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  v40,
                  v43,
                  entity,
                  0);
                v45 = this->fields.skillList;
                if ( !v45 )
                  goto LABEL_122;
                if ( v39 >= LODWORD(v45->max_length) )
                  goto LABEL_123;
                ComponentHelper__SetLocalPositionY(*((UnityEngine_Component_o **)&v45->obj.klass + j), (float)-v36, 0);
                isUse = v40->fields.isUse;
                if ( v40->fields.isUse )
                {
                  lv = v40->fields.lv;
                  svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                    svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  }
                  isUse = lv < *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 12LL);
                }
                v48 = this->fields.skillList;
                v37 = isUse || v37;
                if ( !v48 )
                  goto LABEL_122;
                if ( v39 >= LODWORD(v48->max_length) )
                  goto LABEL_123;
                v49 = *((_QWORD *)&v48->obj.klass + j);
                if ( !v49 )
                  goto LABEL_122;
                svtEntity = (__int64)BalanceConfig_TypeInfo;
                v50 = *(_DWORD *)(v49 + 64);
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  svtEntity = (__int64)BalanceConfig_TypeInfo;
                }
                v36 += v50;
                if ( v39 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 40LL) - 1 )
                {
                  v51 = this->fields.skillList;
                  if ( !v51 )
                    goto LABEL_122;
                  if ( v39 >= LODWORD(v51->max_length) )
                    goto LABEL_123;
                  v52 = *((_QWORD *)&v51->obj.klass + j);
                  if ( !v52 )
                    goto LABEL_122;
                  v70 = *(_BYTE *)(v52 + 68) != 0;
                }
              }
            }
          }
          if ( !byte_4C50D68 )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C50D68 = 1;
          }
          v53 = v32 + (float)v36;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v54 = vcvtps_s32_f32(v53);
          if ( ceilf(v53) == INFINITY )
            v55 = -2147500000.0;
          else
            v55 = (float)v54;
          if ( v37 && item->fields._IsDisplayCombineButton_k__BackingField )
          {
            userSvtEntity = item->fields.userSvtEntity;
            if ( userSvtEntity )
            {
              if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
              {
                v57 = ServantStatusListViewItemDrawSkill_TypeInfo;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v57 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                v58 = v57->static_fields;
                v55 = v55 + (float)v58->CombineAdjustHeight;
                if ( v70 )
                {
                  if ( !v57->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v57);
                    v58 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
                  }
                  v55 = v55 + (float)v58->CombineAddAdjustHeight;
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
                v59 = ServantStatusListViewItemDrawSkill_TypeInfo;
                reinforceObject = this->fields.reinforceObject;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v59 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  reinforceObject,
                  v59->static_fields->TitleStartPosY
                + (float)((float)((float)v59->static_fields->CombineAdjustHeight * 0.5) - v55),
                  0);
              }
            }
          }
          v61 = ServantStatusListViewItemDrawSkill_TypeInfo;
          baseSprite = (UIWidget_o *)this->fields.baseSprite;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v61 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          TitleStartPosY = v61->static_fields->TitleStartPosY;
          if ( !byte_4C506A0 )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C506A0 = 1;
          }
          svtEntity = (__int64)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( baseSprite )
          {
            v64 = floorf(v55 + (float)(TitleStartPosY * -0.5));
            v65 = v64 == INFINITY ? 0x80000000 : (int)v64;
            UIWidget__set_height(baseSprite, v65, 0);
            svtEntity = (__int64)this->fields.baseSprite;
            if ( svtEntity )
            {
              baseCollider = this->fields.baseCollider;
              svtEntity = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svtEntity + 664LL))(
                            svtEntity,
                            *(_QWORD *)(*(_QWORD *)svtEntity + 672LL));
              if ( baseCollider )
              {
                v69 = 0;
                UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v67, 0);
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
    sub_1C3E7C0(svtEntity, v14);
  }
}


void ServantStatusListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C543D7 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    byte_4C543D7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ServantStatusListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawSkill___c_o *)v1;
  sub_1C3E508(
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
    sub_1C3E7C0(this, skill);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}