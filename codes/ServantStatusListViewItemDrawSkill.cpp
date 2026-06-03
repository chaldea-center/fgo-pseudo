void ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4E75138 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_4E75138 = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleStartPosY = 0xC23E000040A00000LL;
  *(_OWORD *)&static_fields->TransformNameAddHeight = xmmword_D356F0;
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

  if ( (byte_4E75137 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&ServantStatusPossessionSkillComponent___TypeInfo);
    byte_4E75137 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct ServantStatusPossessionSkillComponent_array *)sub_1D0F15C(
                                                               ServantStatusPossessionSkillComponent___TypeInfo,
                                                               (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillList = v4;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  _BOOL4 v23; // w0
  int v24; // w21
  bool v25; // w25
  int32_t SvtId; // w28
  int32_t DispLimitCountStageSealAfter; // w24
  int v28; // w26
  __int64 i; // x22
  unsigned __int64 v30; // x23
  SkillInfo_o *v31; // x25
  int64_t UserId; // x0
  UIWidget_o *transformNameLabel; // x25
  UIWidget_o *transformNameSprite; // x25
  UILabel_o *v35; // x25
  UnityEngine_GameObject_o *skillBaseObject; // x25
  ServantStatusListViewItemDrawSkill_c *v37; // x0
  float v38; // s8
  UnityEngine_GameObject_o *v39; // x25
  ServantStatusListViewItemDrawSkill_c *v40; // x0
  Il2CppObject *Master_object; // x25
  Il2CppObject *v42; // x24
  int v43; // w29
  bool v44; // w28
  signed __int64 v45; // x23
  __int64 j; // x22
  unsigned __int64 v47; // x21
  SkillInfo_o *v48; // x25
  int32_t id; // w26
  struct ServantStatusPossessionSkillComponent_array *v50; // x8
  __int64 v51; // x8
  ServantSkillAddEntity_o *v52; // x26
  const MethodInfo *v53; // x4
  struct ServantStatusPossessionSkillComponent_array *v54; // x8
  struct ServantStatusPossessionSkillComponent_array *v55; // x8
  _BOOL4 isUse; // w8
  int32_t lv; // w25
  struct ServantStatusPossessionSkillComponent_array *v58; // x9
  __int64 v59; // x8
  int v60; // w25
  struct ServantStatusPossessionSkillComponent_array *v61; // x8
  __int64 v62; // x8
  float v63; // s8
  int v64; // w8
  float v65; // s8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItemDrawSkill_c *v67; // x0
  struct ServantStatusListViewItemDrawSkill_StaticFields *v68; // x8
  ServantStatusListViewItemDrawSkill_c *v69; // x0
  UnityEngine_GameObject_o *reinforceObject; // x20
  ServantStatusListViewItemDrawSkill_c *v71; // x0
  UIWidget_o *baseSprite; // x20
  float TitleStartPosY; // s9
  float v74; // s0
  int32_t v75; // w1
  UnityEngine_BoxCollider_o *baseCollider; // x20
  int v77; // s0 OVERLAPPED
  int v79; // s2
  bool v80; // [xsp+0h] [xbp-90h]
  int32_t v81; // [xsp+4h] [xbp-8Ch]
  int32_t v82; // [xsp+8h] [xbp-88h]
  int32_t limitCount; // [xsp+Ch] [xbp-84h]
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E75136 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_1D0F0B4(&Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__);
    sub_1D0F0B4(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12105/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1D0F0B4(&StringLiteral_12103/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    byte_4E75136 = 1;
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
    _9__18_0 = (System_Action_object__o *)sub_1D0F300(System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    System_Action_object____ctor(_9__18_0, v10, Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, 0);
    static_fields = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Action_ServantStatusPossessionSkillComponent__o *)_9__18_0;
    sub_1D0F058(
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
    (const MethodInfo_323AF0C *)Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
  if ( item && mode )
  {
    svtEntity = (__int64)item->fields.svtEntity;
    if ( svtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0) )
        v21 = (System_String_o **)&StringLiteral_12105/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
      else
        v21 = (System_String_o **)&StringLiteral_12103/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
      v22 = *v21;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      svtEntity = (__int64)LocalizationManager__Get(v22, 0);
      if ( explanationLabel )
      {
        UILabel__set_text(explanationLabel, (System_String_o *)svtEntity, 0);
        v23 = ServantStatusListViewItem__get_TransformIsNotSkillChange(item, 0);
        v24 = !v23;
        v25 = !v23;
        SvtId = ServantStatusListViewItem__GetSvtId(item, v25, 0);
        limitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
        DispLimitCountStageSealAfter = ServantStatusListViewItem__GetDispLimitCountStageSealAfter(item, v25, 0);
        v82 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
        ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, v25, 0);
        if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0) )
          return;
        v28 = 0;
        for ( i = 4; ; ++i )
        {
          svtEntity = (__int64)BalanceConfig_TypeInfo;
          v30 = i - 4;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            svtEntity = (__int64)BalanceConfig_TypeInfo;
          }
          if ( (__int64)v30 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
            break;
          if ( !skillInfoList )
            goto LABEL_116;
          if ( v30 >= LODWORD(skillInfoList->max_length) )
LABEL_117:
            sub_1D0F314(svtEntity);
          v31 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
          if ( v31 )
          {
            if ( v31->fields.id >= 1 )
            {
              UserId = ServantStatusListViewItem__get_UserId(item, 0);
              SkillInfo__OverwriteNextSkill(v31, UserId, SvtId, item->fields._BeforeClearQuestId_k__BackingField, 0);
              v28 = i - 3;
            }
          }
        }
        if ( (ServantStatusListViewItem__get_AnyTransformServant(item, 0) & v24 & 1) != 0 )
        {
          transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
          TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
          if ( !transformNameLabel )
            goto LABEL_116;
          UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
          transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
          TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
          if ( !transformNameSprite )
            goto LABEL_116;
          UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
          svtEntity = (__int64)this->fields.transformNameSprite;
          if ( !svtEntity )
            goto LABEL_116;
          svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
          if ( !svtEntity )
            goto LABEL_116;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
          v35 = this->fields.transformNameLabel;
          svtEntity = (__int64)ServantStatusListViewItem__GetTransformName(item, 0);
          if ( !v35 )
            goto LABEL_116;
          UILabel__set_text(v35, (System_String_o *)svtEntity, 0);
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
          v38 = (float)((float)ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->TransformNameAddHeight
                      - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY)
              + 0.0;
        }
        else
        {
          svtEntity = (__int64)this->fields.transformNameSprite;
          if ( !svtEntity )
            goto LABEL_116;
          svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
          if ( !svtEntity )
            goto LABEL_116;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
          v39 = this->fields.skillBaseObject;
          v40 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v40 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v39, v40->static_fields->SkillStartPosY, 0);
          v38 = 0.0 - ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->SkillStartPosY;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        svtEntity = LimitCountUtility__ConvertStageToLimitCount(limitCount, DispLimitCountStageSealAfter, 0, 0);
        if ( Master_object )
        {
          v81 = SvtId;
          ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Master_object, &entity, SvtId, svtEntity, 0);
          v42 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
          v43 = 0;
          v80 = 0;
          v44 = 0;
          v45 = v28;
          for ( j = 4; ; ++j )
          {
            v47 = j - 4;
            if ( !*(_DWORD *)(svtEntity + 224) )
            {
              j_il2cpp_runtime_class_init_0(svtEntity);
              svtEntity = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v47 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
              break;
            if ( (__int64)v47 < v45 )
            {
              if ( !skillInfoList )
                goto LABEL_116;
              if ( v47 >= LODWORD(skillInfoList->max_length) )
                goto LABEL_117;
              v48 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + j);
              if ( v48 )
              {
                id = v48->fields.id;
                svtEntity = ServantStatusListViewItem__get_IsMine(item, 0);
                if ( !v42 )
                  goto LABEL_116;
                svtEntity = (__int64)ServantSkillAddMaster__GetEnableEntity(
                                       (ServantSkillAddMaster_o *)v42,
                                       v81,
                                       limitCount,
                                       id,
                                       0,
                                       v82,
                                       svtEntity & 1,
                                       0);
                v50 = this->fields.skillList;
                if ( !v50 )
                  goto LABEL_116;
                if ( v47 >= LODWORD(v50->max_length) )
                  goto LABEL_117;
                v51 = *((_QWORD *)&v50->obj.klass + j);
                if ( !v51 )
                  goto LABEL_116;
                v52 = (ServantSkillAddEntity_o *)svtEntity;
                svtEntity = *(_QWORD *)(v51 + 32);
                if ( !svtEntity )
                  goto LABEL_116;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                v54 = this->fields.skillList;
                if ( !v54 )
                  goto LABEL_116;
                if ( v47 >= LODWORD(v54->max_length) )
                  goto LABEL_117;
                svtEntity = *((_QWORD *)&v54->obj.klass + j);
                if ( !svtEntity )
                  goto LABEL_116;
                ServantStatusPossessionSkillComponent__Set(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  v48,
                  v52,
                  entity,
                  v53);
                v55 = this->fields.skillList;
                if ( !v55 )
                  goto LABEL_116;
                if ( v47 >= LODWORD(v55->max_length) )
                  goto LABEL_117;
                ComponentHelper__SetLocalPositionY(*((UnityEngine_Component_o **)&v55->obj.klass + j), (float)-v43, 0);
                isUse = v48->fields.isUse;
                if ( v48->fields.isUse )
                {
                  lv = v48->fields.lv;
                  svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                    svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  }
                  isUse = lv < *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 12LL);
                }
                v58 = this->fields.skillList;
                v44 = isUse || v44;
                if ( !v58 )
                  goto LABEL_116;
                if ( v47 >= LODWORD(v58->max_length) )
                  goto LABEL_117;
                v59 = *((_QWORD *)&v58->obj.klass + j);
                if ( !v59 )
                  goto LABEL_116;
                svtEntity = (__int64)BalanceConfig_TypeInfo;
                v60 = *(_DWORD *)(v59 + 64);
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  svtEntity = (__int64)BalanceConfig_TypeInfo;
                }
                v43 += v60;
                if ( v47 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 40LL) - 1 )
                {
                  v61 = this->fields.skillList;
                  if ( !v61 )
                    goto LABEL_116;
                  if ( v47 >= LODWORD(v61->max_length) )
                    goto LABEL_117;
                  v62 = *((_QWORD *)&v61->obj.klass + j);
                  if ( !v62 )
                    goto LABEL_116;
                  v80 = *(_BYTE *)(v62 + 68) != 0;
                }
              }
            }
          }
          if ( !byte_4E71327 )
          {
            sub_1D0F0B4(&System_Math_TypeInfo);
            byte_4E71327 = 1;
          }
          v63 = v38 + (float)v43;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v64 = vcvtps_s32_f32(v63);
          if ( ceilf(v63) == INFINITY )
            v65 = -2147500000.0;
          else
            v65 = (float)v64;
          if ( v44 && item->fields._IsDisplayCombineButton_k__BackingField )
          {
            userSvtEntity = item->fields.userSvtEntity;
            if ( userSvtEntity )
            {
              if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
              {
                v67 = ServantStatusListViewItemDrawSkill_TypeInfo;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v67 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                v68 = v67->static_fields;
                v65 = v65 + (float)v68->CombineAdjustHeight;
                if ( v80 )
                {
                  if ( !v67->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v67);
                    v68 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
                  }
                  v65 = v65 + (float)v68->CombineAddAdjustHeight;
                }
                svtEntity = (__int64)this->fields.reinforceObject;
                if ( !svtEntity )
                  goto LABEL_116;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                svtEntity = (__int64)this->fields.reinforceButton;
                if ( !svtEntity )
                  goto LABEL_116;
                *(_BYTE *)(svtEntity + 97) = 1;
                UICommonButton__SetEnable(
                  (UICommonButton_o *)svtEntity,
                  item->fields._CanMoveCombine_k__BackingField,
                  0);
                v69 = ServantStatusListViewItemDrawSkill_TypeInfo;
                reinforceObject = this->fields.reinforceObject;
                if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
                  v69 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  reinforceObject,
                  v69->static_fields->TitleStartPosY
                + (float)((float)((float)v69->static_fields->CombineAdjustHeight * 0.5) - v65),
                  0);
              }
            }
          }
          v71 = ServantStatusListViewItemDrawSkill_TypeInfo;
          baseSprite = (UIWidget_o *)this->fields.baseSprite;
          if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
            v71 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          TitleStartPosY = v71->static_fields->TitleStartPosY;
          if ( !byte_4E70C98 )
          {
            sub_1D0F0B4(&System_Math_TypeInfo);
            byte_4E70C98 = 1;
          }
          svtEntity = (__int64)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( baseSprite )
          {
            v74 = floorf(v65 + (float)(TitleStartPosY * -0.5));
            v75 = v74 == INFINITY ? 0x80000000 : (int)v74;
            UIWidget__set_height(baseSprite, v75, 0);
            svtEntity = (__int64)this->fields.baseSprite;
            if ( svtEntity )
            {
              baseCollider = this->fields.baseCollider;
              svtEntity = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svtEntity + 664LL))(
                            svtEntity,
                            *(_QWORD *)(*(_QWORD *)svtEntity + 672LL));
              if ( baseCollider )
              {
                v79 = 0;
                UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v77, 0);
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
LABEL_116:
    sub_1D0F30C(svtEntity, v18);
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

  if ( (byte_4E75139 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    byte_4E75139 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(ServantStatusListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawSkill___c_o *)v1;
  sub_1D0F058(
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
    sub_1D0F30C(this, skill);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}