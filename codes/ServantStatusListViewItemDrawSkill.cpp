void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4B19410 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawSkill_TypeInfo, v1);
    byte_4B19410 = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleStartPosY = 0xC23E000040A00000LL;
  *(_OWORD *)&static_fields->TransformNameAddHeight = xmmword_BE21F0;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct ServantStatusPossessionSkillComponent_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1940F & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&ServantStatusPossessionSkillComponent___TypeInfo, v3);
    byte_4B1940F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct ServantStatusPossessionSkillComponent_array *)sub_1BCB0A0(
                                                               ServantStatusPossessionSkillComponent___TypeInfo,
                                                               (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.skillList = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawSkill__Awake(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusListViewItemDrawSkill__GetKind(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  return 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawSkill__SetItem(
        ServantStatusListViewItemDrawSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  ServantStatusListViewItemDrawSkill___c_c *v19; // x0
  System_Collections_Generic_IEnumerable_T__o *skillList; // x22
  System_Action_object__o *_9__18_0; // x23
  Il2CppObject *v22; // x24
  struct ServantStatusListViewItemDrawSkill___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o **v29; // x8
  System_String_o *v30; // x22
  int32_t SvtId; // w25
  int32_t ConvertOverwriteDispImageLimitCount; // w23
  bool v33; // w2
  ServantStatusListViewItem_o *v34; // x0
  __int64 v35; // x2
  int v36; // w22
  __int64 i; // x21
  unsigned __int64 v38; // x23
  SkillInfo_o *v39; // x24
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  UnityEngine_GameObject_o *skillBaseObject; // x24
  ServantStatusListViewItemDrawSkill_c *v44; // x0
  float v45; // s8
  UnityEngine_GameObject_o *v46; // x24
  ServantStatusListViewItemDrawSkill_c *v47; // x0
  Il2CppObject *Master_object; // x24
  int v49; // w29
  bool v50; // w28
  __int64 j; // x23
  unsigned __int64 v52; // x21
  SkillInfo_o *v53; // x25
  int32_t id; // w26
  struct ServantStatusPossessionSkillComponent_array *v55; // x8
  ServantSkillAddEntity_o *v56; // x26
  struct ServantStatusPossessionSkillComponent_array *v57; // x8
  struct ServantStatusPossessionSkillComponent_array *v58; // x8
  _BOOL4 isUse; // w8
  int32_t lv; // w25
  struct ServantStatusPossessionSkillComponent_array *v61; // x9
  __int64 v62; // x8
  int v63; // w25
  struct ServantStatusPossessionSkillComponent_array *v64; // x8
  __int64 v65; // x8
  float v66; // s8
  int v67; // w8
  float v68; // s8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItemDrawSkill_c *v70; // x0
  struct ServantStatusListViewItemDrawSkill_StaticFields *v71; // x8
  ServantStatusListViewItemDrawSkill_c *v72; // x0
  UnityEngine_GameObject_o *reinforceObject; // x20
  ServantStatusListViewItemDrawSkill_c *v74; // x0
  UIWidget_o *baseSprite; // x20
  float TitleStartPosY; // s9
  float v77; // s0
  int32_t v78; // w1
  UnityEngine_BoxCollider_o *baseCollider; // x20
  int v80; // s0
  int v82; // s2
  bool v83; // [xsp+8h] [xbp-88h]
  int32_t v84; // [xsp+Ch] [xbp-84h]
  int32_t LimitCountByDispLimit; // [xsp+10h] [xbp-80h]
  int32_t maxLimitCount; // [xsp+14h] [xbp-7Ch]
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4B1940E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ServantStatusPossessionSkillComponent__TypeInfo, item);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v7);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantSkillAddMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&ServantStatusListViewItemDrawSkill_TypeInfo, v14);
    sub_1BCAFF8(&Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, v15);
    sub_1BCAFF8(&ServantStatusListViewItemDrawSkill___c_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_11829/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v17);
    sub_1BCAFF8(&StringLiteral_11827/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v18);
    byte_4B1940E = 1;
  }
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  v19 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
  skillList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillList;
  if ( !ServantStatusListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill___c_TypeInfo);
    v19 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
  }
  _9__18_0 = (System_Action_object__o *)v19->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__18_0 = (System_Action_object__o *)sub_1BCB244(System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    System_Action_object____ctor(_9__18_0, v22, Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, 0LL);
    static_fields = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Action_ServantStatusPossessionSkillComponent__o *)_9__18_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v24, v25);
  }
  BasicHelper__ForEach_object_(
    skillList,
    (System_Action_T__o *)_9__18_0,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_121;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v29 = (System_String_o **)&StringLiteral_11829/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v29 = (System_String_o **)&StringLiteral_11827/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v30 = *v29;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEntity = (__int64)LocalizationManager__Get(v30, 0LL);
  if ( !explanationLabel )
    goto LABEL_121;
  UILabel__set_text(explanationLabel, (System_String_o *)svtEntity, 0LL);
  SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0LL);
  maxLimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0LL);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    v33 = 1;
    v34 = item;
LABEL_26:
    ServantStatusListViewItem__GetSkillInfo(v34, &skillInfoList, v33, 0LL);
    goto LABEL_27;
  }
  if ( !ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    v34 = item;
    v33 = 0;
    goto LABEL_26;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !svtEntity )
    goto LABEL_121;
  ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                          (ServantLimitImageMaster_o *)svtEntity,
                                          SvtId,
                                          ConvertOverwriteDispImageLimitCount,
                                          0LL);
  ServantStatusListViewItem__GetSkillInfo_34972432(item, &skillInfoList, ConvertOverwriteDispImageLimitCount, 0LL);
LABEL_27:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                            ConvertOverwriteDispImageLimitCount,
                            maxLimitCount,
                            0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0LL) )
  {
    v36 = 0;
    for ( i = 4LL; ; ++i )
    {
      svtEntity = (__int64)BalanceConfig_TypeInfo;
      v38 = i - 4;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v38 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
        break;
      if ( !skillInfoList )
        goto LABEL_121;
      if ( v38 >= skillInfoList->max_length )
LABEL_122:
        sub_1BCB25C(svtEntity, v26, v35);
      v39 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
      if ( v39 )
      {
        if ( v39->fields.id >= 1 )
        {
          UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
          SkillInfo__OverwriteNextSkill(v39, UserId, SvtId, 0LL);
          v36 = i - 3;
        }
      }
    }
    svtEntity = (__int64)this->fields.transformNameSprite;
    if ( svtEntity )
    {
      IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
      svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
      if ( svtEntity )
      {
        if ( IsTransformServant_k__BackingField )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          transformNameLabel = this->fields.transformNameLabel;
          svtEntity = (__int64)ServantStatusListViewItem__GetTransformName(item, 0LL);
          if ( !transformNameLabel )
            goto LABEL_121;
          UILabel__set_text(transformNameLabel, (System_String_o *)svtEntity, 0LL);
          skillBaseObject = this->fields.skillBaseObject;
          v44 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v44 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(
            skillBaseObject,
            v44->static_fields->SkillStartPosY - (float)v44->static_fields->TransformNameAddHeight,
            0LL);
          v45 = (float)((float)ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->TransformNameAddHeight
                      - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY)
              + 0.0;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
          v46 = this->fields.skillBaseObject;
          v47 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v47 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v46, v47->static_fields->SkillStartPosY, 0LL);
          v45 = 0.0 - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY;
        }
        v84 = SvtId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        v49 = 0;
        v83 = 0;
        v50 = 0;
        for ( j = 4LL; ; ++j )
        {
          v52 = j - 4;
          if ( !*(_DWORD *)(svtEntity + 224) )
          {
            j_il2cpp_runtime_class_init_0(svtEntity);
            svtEntity = (__int64)BalanceConfig_TypeInfo;
          }
          if ( (__int64)v52 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
            break;
          if ( (__int64)v52 < v36 )
          {
            if ( !skillInfoList )
              goto LABEL_121;
            if ( v52 >= skillInfoList->max_length )
              goto LABEL_122;
            v53 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + j);
            if ( v53 )
            {
              id = v53->fields.id;
              svtEntity = ServantStatusListViewItem__get_IsMine(item, 0LL);
              if ( !Master_object )
                goto LABEL_121;
              svtEntity = (__int64)ServantSkillAddMaster__GetEnableEntity(
                                     (ServantSkillAddMaster_o *)Master_object,
                                     v84,
                                     maxLimitCount,
                                     id,
                                     0,
                                     LimitCountByDispLimit,
                                     svtEntity & 1,
                                     0LL);
              v55 = this->fields.skillList;
              if ( !v55 )
                goto LABEL_121;
              if ( v52 >= v55->max_length )
                goto LABEL_122;
              v56 = (ServantSkillAddEntity_o *)svtEntity;
              svtEntity = *((_QWORD *)&v55->obj.klass + j);
              if ( !svtEntity )
                goto LABEL_121;
              ServantStatusPossessionSkillComponent__SetActive(
                (ServantStatusPossessionSkillComponent_o *)svtEntity,
                1,
                0LL);
              v57 = this->fields.skillList;
              if ( !v57 )
                goto LABEL_121;
              if ( v52 >= v57->max_length )
                goto LABEL_122;
              svtEntity = *((_QWORD *)&v57->obj.klass + j);
              if ( !svtEntity )
                goto LABEL_121;
              ServantStatusPossessionSkillComponent__Set(
                (ServantStatusPossessionSkillComponent_o *)svtEntity,
                v53,
                v56,
                0LL);
              v58 = this->fields.skillList;
              if ( !v58 )
                goto LABEL_121;
              if ( v52 >= v58->max_length )
                goto LABEL_122;
              ComponentHelper__SetLocalPositionY(*((UnityEngine_Component_o **)&v58->obj.klass + j), (float)-v49, 0LL);
              isUse = v53->fields.isUse;
              if ( v53->fields.isUse )
              {
                lv = v53->fields.lv;
                svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                isUse = lv < *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 12LL);
              }
              v61 = this->fields.skillList;
              v50 = isUse || v50;
              if ( !v61 )
                goto LABEL_121;
              if ( v52 >= v61->max_length )
                goto LABEL_122;
              v62 = *((_QWORD *)&v61->obj.klass + j);
              if ( !v62 )
                goto LABEL_121;
              svtEntity = (__int64)BalanceConfig_TypeInfo;
              v63 = *(_DWORD *)(v62 + 64);
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                svtEntity = (__int64)BalanceConfig_TypeInfo;
              }
              v49 += v63;
              if ( v52 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 40LL) - 1 )
              {
                v64 = this->fields.skillList;
                if ( !v64 )
                  goto LABEL_121;
                if ( v52 >= v64->max_length )
                  goto LABEL_122;
                v65 = *((_QWORD *)&v64->obj.klass + j);
                if ( !v65 )
                  goto LABEL_121;
                v83 = *(_BYTE *)(v65 + 68) != 0;
              }
            }
          }
        }
        if ( !byte_4B1684F )
        {
          sub_1BCAFF8(&System_Math_TypeInfo, v26);
          byte_4B1684F = 1;
        }
        v66 = v45 + (float)v49;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v67 = vcvtps_s32_f32(v66);
        if ( ceilf(v66) == INFINITY )
          v68 = -2147500000.0;
        else
          v68 = (float)v67;
        if ( v50 && item->fields._IsDisplayCombineButton_k__BackingField )
        {
          userSvtEntity = item->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
            {
              v70 = ServantStatusListViewItemDrawSkill_TypeInfo;
              if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                v70 = ServantStatusListViewItemDrawSkill_TypeInfo;
              }
              v71 = v70->static_fields;
              v68 = v68 + (float)v71->CombineAdjustHeight;
              if ( v83 )
              {
                if ( !v70->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v70);
                  v71 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
                }
                v68 = v68 + (float)v71->CombineAddAdjustHeight;
              }
              svtEntity = (__int64)this->fields.reinforceObject;
              if ( !svtEntity )
                goto LABEL_121;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
              svtEntity = (__int64)this->fields.reinforceButton;
              if ( !svtEntity )
                goto LABEL_121;
              *(_BYTE *)(svtEntity + 97) = 1;
              UICommonButton__SetEnable(
                (UICommonButton_o *)svtEntity,
                item->fields._CanMoveCombine_k__BackingField,
                0LL);
              v72 = ServantStatusListViewItemDrawSkill_TypeInfo;
              reinforceObject = this->fields.reinforceObject;
              if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                v72 = ServantStatusListViewItemDrawSkill_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionY(
                reinforceObject,
                v72->static_fields->TitleStartPosY
              + (float)((float)((float)v72->static_fields->CombineAdjustHeight * 0.5) - v68),
                0LL);
            }
          }
        }
        v74 = ServantStatusListViewItemDrawSkill_TypeInfo;
        baseSprite = (UIWidget_o *)this->fields.baseSprite;
        if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
          v74 = ServantStatusListViewItemDrawSkill_TypeInfo;
        }
        TitleStartPosY = v74->static_fields->TitleStartPosY;
        if ( !byte_4B16190 )
        {
          sub_1BCAFF8(&System_Math_TypeInfo, v26);
          byte_4B16190 = 1;
        }
        svtEntity = (__int64)System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( baseSprite )
        {
          v77 = floorf(v68 + (float)(TitleStartPosY * -0.5));
          v78 = v77 == INFINITY ? 0x80000000 : (int)v77;
          UIWidget__set_height(baseSprite, v78, 0LL);
          svtEntity = (__int64)this->fields.baseSprite;
          if ( svtEntity )
          {
            baseCollider = this->fields.baseCollider;
            svtEntity = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svtEntity + 664LL))(
                          svtEntity,
                          *(_QWORD *)(*(_QWORD *)svtEntity + 672LL));
            if ( baseCollider )
            {
              v82 = 0;
              UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v80, 0LL);
              svtEntity = (__int64)this->fields.baseSprite;
              if ( svtEntity )
              {
                ComponentHelper__SetLocalPositionY(
                  (UnityEngine_Component_o *)svtEntity,
                  (float)*(int *)(svtEntity + 172) * 0.5,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_121:
    sub_1BCB254(svtEntity, v26);
  }
}


void __fastcall ServantStatusListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B19F39 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawSkill___c_TypeInfo, v1);
    byte_4B19F39 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantStatusListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawSkill___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantStatusListViewItemDrawSkill___c___ctor(
        ServantStatusListViewItemDrawSkill___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawSkill___c___SetItem_b__18_0(
        ServantStatusListViewItemDrawSkill___c_o *this,
        ServantStatusPossessionSkillComponent_o *skill,
        const MethodInfo *method)
{
  if ( !skill || (this = (ServantStatusListViewItemDrawSkill___c_o *)skill->fields.baseObject) == 0LL )
    sub_1BCB254(this, skill);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}