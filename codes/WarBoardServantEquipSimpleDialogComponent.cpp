void WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SkillIconComponent_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UILabel_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UILabel_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int64 v34; // x2

  if ( (byte_596E463 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&SkillIconComponent___TypeInfo);
    sub_2213A60(&UILabel___TypeInfo);
    byte_596E463 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillBaseList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillSpriteList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UILabel_array *)sub_2213B20(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillNameLabelList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct UILabel_array *)sub_2213B20(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillDetailLabelList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v33, v34);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarBoardServantEquipSimpleDialogComponent__EndClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596E461 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E461 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
}


void WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  LocalizationManager_c *v7; // x0
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_596E45D & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_596E45D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  v7 = LocalizationManager_TypeInfo;
  closeButtonLabel = this->fields.closeButtonLabel;
  this->fields.state = 0;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
LABEL_8:
    sub_2213CDC(gameObject, v4);
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarBoardServantEquipSimpleDialogComponent__OnClickClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596E460 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    sub_2213A60(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__);
    byte_596E460 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v3 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void WarBoardServantEquipSimpleDialogComponent__OpenFinish(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_596E45F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_596E45F = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_2213CDC(0, method);
  WarBoardManager__SetTouchBlock(v6, 0, 0, 0);
  this->fields.state = 2;
}


void WarBoardServantEquipSimpleDialogComponent__SetUp(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        BattleServantData_o *bsvtData,
        const MethodInfo *method)
{
  WarBoardServantEquipSimpleDialogComponent_o *v4; // x24
  int32_t state; // w8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v7; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x2
  struct UnityEngine_GameObject_array *v11; // x8
  struct SkillIconComponent_array *equipSkillSpriteList; // x8
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x2
  struct SkillIconComponent_array *v15; // x8
  struct UILabel_array *equipSkillNameLabelList; // x8
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x2
  struct UILabel_array *v19; // x8
  struct UILabel_array *equipSkillDetailLabelList; // x8
  UnityEngine_Object_o *v21; // x21
  struct UILabel_array *v22; // x8
  struct BattleUserServantData_array *equipList; // x9
  il2cpp_array_size_t max_length; // x8
  SkillLvMaster_o *v25; // x20
  char v26; // w26
  unsigned __int64 v27; // x29
  Il2CppClass **v28; // x8
  Il2CppClass *v29; // x23
  System_Int32_array *BattleSkillIdList; // x22
  struct UnityEngine_GameObject_array *v31; // x8
  il2cpp_array_size_t v32; // x8
  WarBoardServantEquipSimpleDialogComponent_o *v33; // x23
  unsigned __int64 v34; // x28
  __int64 v35; // x27
  struct UIPanel_o **p_basePanel; // x19
  int32_t v37; // w25
  int32_t v38; // w24
  struct UILabel_array *v39; // x8
  UILabel_o *v40; // x26
  Il2CppObject *Name; // x0
  struct SkillIconComponent_array *v42; // x8
  struct UILabel_array *v43; // x8
  struct UnityEngine_GameObject_array *v44; // x8
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Object_o *v49; // x19
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  long double v52; // q0
  __int64 v53; // x0
  __int64 v54; // x0
  System_Action_o *v55; // x20
  System_Reflection_MethodBase_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_Object_o *gameObject; // x19
  struct BattleUserServantData_array *v60; // [xsp+8h] [xbp-88h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-80h]
  WarBoardServantEquipSimpleDialogComponent_o *v62; // [xsp+18h] [xbp-78h]
  Il2CppObject *v63; // [xsp+20h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_596E45E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
    sub_2213A60(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E45E = 1;
  }
  state = v4->fields.state;
  v63 = 0;
  entity = 0;
  if ( !state )
  {
    skillBaseList = v4->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_43;
    v7 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(skillBaseList->max_length);
      if ( (__int64)v7 >= (int)max_length_low )
        break;
      if ( v7 >= max_length_low )
        goto LABEL_105;
      v9 = (UnityEngine_Object_o *)skillBaseList->m_Items[v7];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData, method);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v4->fields.skillBaseList;
        if ( !v11 )
          goto LABEL_43;
        if ( v7 >= LODWORD(v11->max_length) )
          goto LABEL_105;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v11->m_Items[v7];
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_43;
      if ( v7 >= LODWORD(equipSkillSpriteList->max_length) )
        goto LABEL_105;
      v13 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v7];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData, v10);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = v4->fields.equipSkillSpriteList;
        if ( !v15 )
          goto LABEL_43;
        if ( v7 >= LODWORD(v15->max_length) )
          goto LABEL_105;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v15->m_Items[v7];
        if ( !this )
          goto LABEL_43;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_43;
      if ( v7 >= LODWORD(equipSkillNameLabelList->max_length) )
        goto LABEL_105;
      v17 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v7];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData, v14);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v19 = v4->fields.equipSkillNameLabelList;
        if ( !v19 )
          goto LABEL_43;
        if ( v7 >= LODWORD(v19->max_length) )
          goto LABEL_105;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v19->m_Items[v7];
        if ( !this )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_43;
      if ( v7 >= LODWORD(equipSkillDetailLabelList->max_length) )
        goto LABEL_105;
      v21 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v7];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData, v18);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v21, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v22 = v4->fields.equipSkillDetailLabelList;
        if ( !v22 )
          goto LABEL_43;
        if ( v7 >= LODWORD(v22->max_length) )
          goto LABEL_105;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v22->m_Items[v7];
        if ( !this )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v7;
      if ( !skillBaseList )
        goto LABEL_43;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_43;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_43;
      max_length = equipList->max_length;
      v62 = v4;
      if ( (int)max_length >= 1 )
      {
        v25 = (SkillLvMaster_o *)this;
        v26 = 0;
        v27 = 0;
        v60 = equipList;
        while ( 1 )
        {
          if ( v27 >= (unsigned int)max_length )
            goto LABEL_105;
          v28 = &equipList->obj.klass + v27;
          v29 = v28[4];
          if ( v29 )
          {
            BattleSkillIdList = BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)v28[4], 0);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))v29->_1.image
                                                                   + 51))(
                                                                    v29,
                                                                    *((_QWORD *)v29->_1.image + 52));
            if ( !BattleSkillIdList )
              goto LABEL_43;
            v31 = v62->fields.skillBaseList;
            if ( !v31 )
              goto LABEL_43;
            v32 = v31->max_length;
            if ( (int)BattleSkillIdList->max_length <= (int)v32 )
              v32 = BattleSkillIdList->max_length;
            if ( (int)v32 >= 1 )
              break;
          }
LABEL_81:
          equipList = v60;
          ++v27;
          LODWORD(max_length) = v60->max_length;
          if ( (__int64)v27 >= (int)max_length )
            goto LABEL_89;
        }
        v33 = this;
        v34 = 0;
        v35 = (unsigned int)v32;
        p_basePanel = &this->fields.basePanel;
        while ( v34 < LODWORD(BattleSkillIdList->max_length) )
        {
          if ( !v33 )
            goto LABEL_43;
          if ( v34 >= LODWORD(v33->fields.m_CancellationTokenSource) )
            break;
          v37 = BattleSkillIdList->m_Items[v34];
          if ( v37 >= 1 )
          {
            if ( !v25 )
              goto LABEL_43;
            v38 = *((_DWORD *)p_basePanel + v34);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(v25, &entity, v37, v38, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_43;
              this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                      &v63,
                                                                      v37,
                                                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v39 = v62->fields.equipSkillNameLabelList;
                if ( !v39 )
                  goto LABEL_43;
                if ( v34 >= LODWORD(v39->max_length) )
                  break;
                this = (WarBoardServantEquipSimpleDialogComponent_o *)v63;
                if ( !v63 )
                  goto LABEL_43;
                v40 = v39->m_Items[v34];
                Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v63, 0);
                this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_26484/*"{0}"*/,
                                                                        Name,
                                                                        0);
                if ( !v40 )
                  goto LABEL_43;
                UILabel__set_text(v40, (System_String_o *)this, 0);
                v42 = v62->fields.equipSkillSpriteList;
                if ( !v42 )
                  goto LABEL_43;
                if ( v34 >= LODWORD(v42->max_length) )
                  break;
                this = (WarBoardServantEquipSimpleDialogComponent_o *)v42->m_Items[v34];
                if ( !this )
                  goto LABEL_43;
                SkillIconComponent__Set((SkillIconComponent_o *)this, v37, 0);
                this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                if ( !entity )
                  goto LABEL_43;
                this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_49901180(
                                                                        entity,
                                                                        v38,
                                                                        0,
                                                                        0);
                v43 = v62->fields.equipSkillDetailLabelList;
                if ( !v43 )
                  goto LABEL_43;
                if ( v34 >= LODWORD(v43->max_length) )
                  break;
                this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                        v43->m_Items[v34],
                                                                        (System_String_o *)this,
                                                                        22,
                                                                        0,
                                                                        0);
                v44 = v62->fields.skillBaseList;
                if ( !v44 )
                  goto LABEL_43;
                if ( v34 >= LODWORD(v44->max_length) )
                  break;
                this = (WarBoardServantEquipSimpleDialogComponent_o *)v44->m_Items[v34];
                if ( !this )
                  goto LABEL_43;
                v26 = 1;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              }
            }
          }
          if ( v35 == ++v34 )
            goto LABEL_81;
        }
LABEL_105:
        sub_2213CE4(this);
      }
      v26 = 0;
LABEL_89:
      v50 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (v26 & 1) != 0 )
      {
        if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
          v50 = (_QWORD *)sub_2213A78(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
        v51 = (System_Reflection_MethodBase_o *)sub_2213A44(v50, v50[4]);
        OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0, 0);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0);
          v53 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
          if ( (*(_WORD *)(v53 + 309) & 1) == 0 )
            v53 = sub_224B908(v52);
          v54 = *(_QWORD *)(*(_QWORD *)(v53 + 192) + 16LL);
          if ( (*(_WORD *)(v54 + 309) & 1) == 0 )
            v54 = sub_224B908(v52);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v54 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v62,
                                                                    0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              v62->fields.state = 1;
              v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v55,
                (Il2CppObject *)v62,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0);
              BaseDialog__Open((BaseDialog_o *)v62, v55, 0, 0, 0);
              return;
            }
          }
        }
LABEL_43:
        sub_2213CDC(this, bsvtData);
      }
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_2213A78(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v56 = (System_Reflection_MethodBase_o *)sub_2213A44(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v56, 2, 0, 0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v62, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
    }
    else
    {
      v45 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_2213A78(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v46 = (System_Reflection_MethodBase_o *)sub_2213A44(v45, v45[4]);
      OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0, 0);
      v49 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
      UnityEngine_Object__DestroyImmediate_83460132(v49, 0);
    }
  }
}


System_String_o *WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_596E462 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16261/*"Window/CloseButton"*/);
    byte_596E462 = 1;
  }
  return (System_String_o *)StringLiteral_16261/*"Window/CloseButton"*/;
}