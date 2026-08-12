void ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_596DF59 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_596DF59 = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleStartPosY = 0xC23E000040A00000LL;
  *(_OWORD *)&static_fields->TransformNameAddHeight = xmmword_E9CCA0;
}


void ServantStatusListViewItemDrawSkill___ctor(ServantStatusListViewItemDrawSkill_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct ServantStatusPossessionSkillComponent_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596DF58 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ServantStatusPossessionSkillComponent___TypeInfo);
    byte_596DF58 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct ServantStatusPossessionSkillComponent_array *)sub_2213B20(
                                                               ServantStatusPossessionSkillComponent___TypeInfo,
                                                               (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.skillList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
  __int64 v7; // x1
  __int64 v8; // x2
  ServantStatusListViewItemDrawSkill___c_c *v9; // x0
  System_Collections_Generic_IEnumerable_T__o *skillList; // x22
  struct ServantStatusListViewItemDrawSkill___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__18_0; // x23
  Il2CppObject *v13; // x24
  struct ServantStatusListViewItemDrawSkill___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o **v26; // x8
  System_String_o *v27; // x22
  _BOOL4 v28; // w0
  int v29; // w21
  int32_t SvtId; // w23
  int32_t DispLimitCountStageSealAfter; // w24
  __int64 v32; // x2
  int v33; // w26
  __int64 v34; // x22
  SkillInfo_o *v35; // x25
  int64_t UserId; // x0
  UIWidget_o *transformNameLabel; // x25
  UIWidget_o *transformNameSprite; // x25
  UILabel_o *v39; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_GameObject_o *skillBaseObject; // x25
  ServantStatusListViewItemDrawSkill_c *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  struct ServantStatusListViewItemDrawSkill_StaticFields *v46; // x8
  float TransformNameAddHeight; // s0
  __int64 v48; // x1
  __int64 v49; // x2
  UnityEngine_GameObject_o *v50; // x25
  ServantStatusListViewItemDrawSkill_c *v51; // x0
  float v52; // s8
  Il2CppObject *Master_object; // x25
  __int64 v54; // x2
  Il2CppObject *v55; // x24
  int v56; // w29
  bool v57; // w28
  signed __int64 v58; // x23
  __int64 i; // x22
  unsigned __int64 v60; // x21
  SkillInfo_o *v61; // x25
  int32_t id; // w26
  struct ServantStatusPossessionSkillComponent_array *v63; // x8
  __int64 v64; // x8
  ServantSkillAddEntity_o *v65; // x26
  const MethodInfo *v66; // x4
  struct ServantStatusPossessionSkillComponent_array *v67; // x8
  struct ServantStatusPossessionSkillComponent_array *v68; // x8
  _BOOL4 isUse; // w8
  int32_t lv; // w25
  int v71; // w9
  struct ServantStatusPossessionSkillComponent_array *v72; // x8
  __int64 v73; // x8
  int v74; // w25
  struct ServantStatusPossessionSkillComponent_array *v75; // x8
  __int64 v76; // x8
  float v77; // s8
  float v78; // s0
  float v79; // s8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItemDrawSkill_c *v81; // x0
  struct ServantStatusListViewItemDrawSkill_StaticFields *v82; // x8
  bool CanMoveCombine_k__BackingField; // w1
  __int64 v84; // x1
  __int64 v85; // x2
  ServantStatusListViewItemDrawSkill_c *v86; // x0
  UnityEngine_GameObject_o *reinforceObject; // x20
  ServantStatusListViewItemDrawSkill_c *v88; // x0
  UIWidget_o *baseSprite; // x20
  float TitleStartPosY; // s9
  float v91; // s0
  unsigned int v92; // w9
  int32_t v93; // w1
  UnityEngine_BoxCollider_o *baseCollider; // x20
  bool v96; // [xsp+0h] [xbp-90h]
  int32_t v97; // [xsp+4h] [xbp-8Ch]
  int32_t v98; // [xsp+8h] [xbp-88h]
  int32_t limitCount; // [xsp+Ch] [xbp-84h]
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596DF57 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__);
    sub_2213A60(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    sub_2213A60(&StringLiteral_12446/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_2213A60(&StringLiteral_12444/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    byte_596DF57 = 1;
  }
  entity = 0;
  skillInfoList = 0;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
  v9 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
  skillList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillList;
  if ( !*(&ServantStatusListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill___c_TypeInfo, v7, v8);
    v9 = ServantStatusListViewItemDrawSkill___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__18_0 = (System_Action_object__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ServantStatusPossessionSkillComponent__TypeInfo);
    System_Action_object____ctor(_9__18_0, v13, Method_ServantStatusListViewItemDrawSkill___c__SetItem_b__18_0__, 0);
    v14 = ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields;
    v14->__9__18_0 = (struct System_Action_ServantStatusPossessionSkillComponent__o *)_9__18_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__18_0, (int32_t)_9__18_0, v15, v16, v17, v18, v19, v20);
  }
  BasicHelper__ForEach_object_(
    skillList,
    (System_Action_T__o *)_9__18_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ServantStatusPossessionSkillComponent___);
  if ( item && mode )
  {
    svtEntity = (__int64)item->fields.svtEntity;
    if ( svtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0) )
        v26 = (System_String_o **)&StringLiteral_12446/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
      else
        v26 = (System_String_o **)&StringLiteral_12444/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
      v27 = *v26;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
      svtEntity = (__int64)LocalizationManager__Get(v27, 0);
      if ( explanationLabel )
      {
        UILabel__set_text(explanationLabel, (System_String_o *)svtEntity, 0);
        v28 = ServantStatusListViewItem__get_TransformIsNotSkillChange(item, 0);
        v29 = !v28;
        SvtId = ServantStatusListViewItem__GetSvtId(item, !v28, 0);
        limitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
        DispLimitCountStageSealAfter = ServantStatusListViewItem__GetDispLimitCountStageSealAfter(item, v29 & 1, 0);
        v98 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
        ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, v29 & 1, 0);
        if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0) )
          return;
        v33 = 0;
        v34 = 4;
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        while ( 1 )
        {
          if ( !*(_DWORD *)(svtEntity + 228) )
          {
            j_il2cpp_runtime_class_init_0(svtEntity, v21, v32);
            svtEntity = (__int64)BalanceConfig_TypeInfo;
          }
          if ( v34 - 4 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
            break;
          if ( !skillInfoList )
            goto LABEL_116;
          if ( v34 - 4 >= (unsigned __int64)LODWORD(skillInfoList->max_length) )
LABEL_117:
            sub_2213CE4(svtEntity);
          v35 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v34);
          if ( v35 )
          {
            if ( v35->fields.id >= 1 )
            {
              UserId = ServantStatusListViewItem__get_UserId(item, 0);
              SkillInfo__OverwriteNextSkill(v35, UserId, SvtId, item->fields._BeforeClearQuestId_k__BackingField, 0);
              svtEntity = (__int64)BalanceConfig_TypeInfo;
              v33 = v34 - 3;
            }
          }
          ++v34;
        }
        if ( (ServantStatusListViewItem__get_AnyTransformServant(item, 0) & v29 & 1) != 0 )
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
          v39 = this->fields.transformNameLabel;
          svtEntity = (__int64)ServantStatusListViewItem__GetTransformName(item, 0);
          if ( !v39 )
            goto LABEL_116;
          UILabel__set_text(v39, (System_String_o *)svtEntity, 0);
          skillBaseObject = this->fields.skillBaseObject;
          v43 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !*(&ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, v40, v41);
            v43 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(
            skillBaseObject,
            v43->static_fields->SkillStartPosY - (float)v43->static_fields->TransformNameAddHeight,
            0);
          v46 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
          TransformNameAddHeight = (float)v46->TransformNameAddHeight;
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
          v50 = this->fields.skillBaseObject;
          v51 = ServantStatusListViewItemDrawSkill_TypeInfo;
          if ( !*(&ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, v48, v49);
            v51 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v50, v51->static_fields->SkillStartPosY, 0);
          TransformNameAddHeight = 0.0;
          v46 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
        }
        v52 = TransformNameAddHeight - v46->SkillStartPosY;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44, v45);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        svtEntity = LimitCountUtility__ConvertStageToLimitCount(limitCount, DispLimitCountStageSealAfter, 0, 0);
        if ( Master_object )
        {
          v97 = SvtId;
          ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Master_object, &entity, SvtId, svtEntity, 0);
          v55 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
          v56 = 0;
          v96 = 0;
          v57 = 0;
          v58 = v33;
          for ( i = 4; ; ++i )
          {
            if ( !*(_DWORD *)(svtEntity + 228) )
            {
              j_il2cpp_runtime_class_init_0(svtEntity, v21, v54);
              svtEntity = (__int64)BalanceConfig_TypeInfo;
            }
            v60 = i - 4;
            if ( i - 4 >= *(int *)(*(_QWORD *)(svtEntity + 184) + 40LL) )
              break;
            if ( (__int64)v60 < v58 )
            {
              if ( !skillInfoList )
                goto LABEL_116;
              if ( v60 >= LODWORD(skillInfoList->max_length) )
                goto LABEL_117;
              v61 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
              if ( v61 )
              {
                id = v61->fields.id;
                svtEntity = ServantStatusListViewItem__get_IsMine(item, 0);
                if ( !v55 )
                  goto LABEL_116;
                svtEntity = (__int64)ServantSkillAddMaster__GetEnableEntity(
                                       (ServantSkillAddMaster_o *)v55,
                                       v97,
                                       limitCount,
                                       id,
                                       0,
                                       v98,
                                       svtEntity & 1,
                                       0);
                v63 = this->fields.skillList;
                if ( !v63 )
                  goto LABEL_116;
                if ( v60 >= LODWORD(v63->max_length) )
                  goto LABEL_117;
                v64 = *((_QWORD *)&v63->obj.klass + i);
                if ( !v64 )
                  goto LABEL_116;
                v65 = (ServantSkillAddEntity_o *)svtEntity;
                svtEntity = *(_QWORD *)(v64 + 32);
                if ( !svtEntity )
                  goto LABEL_116;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                v67 = this->fields.skillList;
                if ( !v67 )
                  goto LABEL_116;
                if ( v60 >= LODWORD(v67->max_length) )
                  goto LABEL_117;
                svtEntity = *((_QWORD *)&v67->obj.klass + i);
                if ( !svtEntity )
                  goto LABEL_116;
                ServantStatusPossessionSkillComponent__Set(
                  (ServantStatusPossessionSkillComponent_o *)svtEntity,
                  v61,
                  v65,
                  entity,
                  v66);
                v68 = this->fields.skillList;
                if ( !v68 )
                  goto LABEL_116;
                if ( v60 >= LODWORD(v68->max_length) )
                  goto LABEL_117;
                ComponentHelper__SetLocalPositionY(*((UnityEngine_Component_o **)&v68->obj.klass + i), (float)-v56, 0);
                isUse = v61->fields.isUse;
                if ( v61->fields.isUse )
                {
                  lv = v61->fields.lv;
                  svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  if ( !*(&ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, v21, v54);
                    svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
                  }
                  isUse = lv < *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 12LL);
                }
                v71 = isUse || v57;
                v72 = this->fields.skillList;
                v57 = v71 != 0;
                if ( !v72 )
                  goto LABEL_116;
                if ( v60 >= LODWORD(v72->max_length) )
                  goto LABEL_117;
                v73 = *((_QWORD *)&v72->obj.klass + i);
                if ( !v73 )
                  goto LABEL_116;
                svtEntity = (__int64)BalanceConfig_TypeInfo;
                v74 = *(_DWORD *)(v73 + 64);
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21, v54);
                  svtEntity = (__int64)BalanceConfig_TypeInfo;
                }
                v56 += v74;
                if ( v60 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 40LL) - 1 )
                {
                  v75 = this->fields.skillList;
                  if ( !v75 )
                    goto LABEL_116;
                  if ( v60 >= LODWORD(v75->max_length) )
                    goto LABEL_117;
                  v76 = *((_QWORD *)&v75->obj.klass + i);
                  if ( !v76 )
                    goto LABEL_116;
                  v96 = *(_BYTE *)(v76 + 68) != 0;
                }
              }
            }
          }
          if ( !byte_596A15B )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A15B = 1;
          }
          v77 = v52 + (float)v56;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21, v54);
          v78 = ceilf(v77);
          if ( v78 == INFINITY )
            v79 = -2147500000.0;
          else
            v79 = (float)(int)v78;
          if ( v57 && item->fields._IsDisplayCombineButton_k__BackingField )
          {
            userSvtEntity = item->fields.userSvtEntity;
            if ( userSvtEntity )
            {
              if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
              {
                v81 = ServantStatusListViewItemDrawSkill_TypeInfo;
                if ( !*(&ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, v21, v54);
                  v81 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                v82 = v81->static_fields;
                v79 = v79 + (float)v82->CombineAdjustHeight;
                if ( v96 )
                {
                  if ( !*(&v81->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(v81, v21, v54);
                    v82 = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
                  }
                  v79 = v79 + (float)v82->CombineAddAdjustHeight;
                }
                svtEntity = (__int64)this->fields.reinforceObject;
                if ( !svtEntity )
                  goto LABEL_116;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                svtEntity = (__int64)this->fields.reinforceButton;
                if ( !svtEntity )
                  goto LABEL_116;
                CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
                *(_BYTE *)(svtEntity + 97) = 1;
                UICommonButton__SetEnable((UICommonButton_o *)svtEntity, CanMoveCombine_k__BackingField, 0);
                v86 = ServantStatusListViewItemDrawSkill_TypeInfo;
                reinforceObject = this->fields.reinforceObject;
                if ( !*(&ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, v84, v85);
                  v86 = ServantStatusListViewItemDrawSkill_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  reinforceObject,
                  v86->static_fields->TitleStartPosY
                + (float)((float)((float)v86->static_fields->CombineAdjustHeight * 0.5) - v79),
                  0);
              }
            }
          }
          v88 = ServantStatusListViewItemDrawSkill_TypeInfo;
          baseSprite = (UIWidget_o *)this->fields.baseSprite;
          if ( !*(&ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, v21, v54);
            v88 = ServantStatusListViewItemDrawSkill_TypeInfo;
          }
          TitleStartPosY = v88->static_fields->TitleStartPosY;
          if ( !byte_5969ADF )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_5969ADF = 1;
          }
          svtEntity = (__int64)System_Math_TypeInfo;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21, v54);
          if ( baseSprite )
          {
            v91 = v79 + (float)(TitleStartPosY * -0.5);
            v92 = vcvtms_s32_f32(v91);
            v93 = floorf(v91) == INFINITY ? 0x80000000 : v92;
            UIWidget__set_height(baseSprite, v93, 0);
            svtEntity = (__int64)this->fields.baseSprite;
            if ( svtEntity )
            {
              baseCollider = this->fields.baseCollider;
              svtEntity = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svtEntity + 664LL))(
                            svtEntity,
                            *(_QWORD *)(*(_QWORD *)svtEntity + 672LL));
              if ( baseCollider )
              {
                v102.fields.z = 0.0;
                UnityEngine_BoxCollider__set_size(baseCollider, v102, 0);
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
    sub_2213CDC(svtEntity, v21);
  }
}


void ServantStatusListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DF5A & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawSkill___c_TypeInfo);
    byte_596DF5A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantStatusListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawSkill___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantStatusListViewItemDrawSkill___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, skill);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}