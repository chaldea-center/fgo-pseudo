void WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct UILabel_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct UILabel_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2E6EE & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    sub_1C93AD4(&SkillIconComponent___TypeInfo);
    sub_1C93AD4(&UILabel___TypeInfo);
    byte_4D2E6EE = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C93B7C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C93B7C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v11;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipSkillSpriteList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_1C93B7C(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v18;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipSkillNameLabelList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_1C93B7C(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v25;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipSkillDetailLabelList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarBoardServantEquipSimpleDialogComponent__EndClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2E6EC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E6EC = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
}


void WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_4D2E6E8 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4D2E6E8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
LABEL_8:
    sub_1C93D2C(gameObject, v4);
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

  if ( (byte_4D2E6EB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    sub_1C93AD4(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__);
    byte_4D2E6EB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v3 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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

  if ( (byte_4D2E6EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2E6EA = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_1C93D2C(0, method);
  WarBoardManager__SetTouchBlock(v6, 0, 0, 0);
  this->fields.state = 2;
}


void WarBoardServantEquipSimpleDialogComponent__SetUp(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        BattleServantData_o *bsvtData,
        const MethodInfo *method)
{
  WarBoardServantEquipSimpleDialogComponent_o *v4; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v6; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v8; // x21
  struct UnityEngine_GameObject_array *v9; // x8
  struct SkillIconComponent_array *equipSkillSpriteList; // x8
  UnityEngine_Object_o *v11; // x21
  struct SkillIconComponent_array *v12; // x8
  struct UILabel_array *equipSkillNameLabelList; // x8
  UnityEngine_Object_o *v14; // x21
  struct UILabel_array *v15; // x8
  struct UILabel_array *equipSkillDetailLabelList; // x8
  UnityEngine_Object_o *v17; // x21
  struct UILabel_array *v18; // x8
  struct BattleUserServantData_array *equipList; // x19
  il2cpp_array_size_t max_length; // x8
  SkillLvMaster_o *v21; // x20
  char v22; // w26
  unsigned __int64 v23; // x29
  Il2CppClass **v24; // x8
  Il2CppClass *v25; // x23
  System_Int32_array *BattleSkillIdList; // x22
  _DWORD *monitor; // x8
  il2cpp_array_size_t v28; // x9
  int v29; // w8
  WarBoardServantEquipSimpleDialogComponent_o *v30; // x23
  unsigned __int64 v31; // x28
  struct UIPanel_o **p_basePanel; // x27
  __int64 v33; // x21
  int32_t v34; // w25
  int32_t v35; // w24
  UnityEngine_Component_c *klass; // x8
  UILabel_o *v37; // x26
  Il2CppObject *Name; // x0
  intptr_t m_CachedPtr; // x8
  UILabel_o **v40; // x8
  _QWORD *v41; // x8
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_c *v45; // x8
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  long double v48; // q0
  __int64 v49; // x0
  __int64 v50; // x0
  System_Action_o *v51; // x20
  UnityEngine_Object_o *v52; // x19
  struct BattleUserServantData_array *v53; // [xsp+8h] [xbp-88h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Component_o *v55; // [xsp+18h] [xbp-78h]
  Il2CppObject *v56; // [xsp+20h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4D2E6E9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
    sub_1C93AD4(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E6E9 = 1;
  }
  v56 = 0;
  entity = 0;
  if ( !v4->fields.state )
  {
    skillBaseList = v4->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_106;
    v6 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(skillBaseList->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        goto LABEL_107;
      v8 = (UnityEngine_Object_o *)skillBaseList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.skillBaseList;
        if ( !v9 )
          goto LABEL_106;
        if ( v6 >= LODWORD(v9->max_length) )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v9->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_106;
      if ( v6 >= LODWORD(equipSkillSpriteList->max_length) )
        goto LABEL_107;
      v11 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v4->fields.equipSkillSpriteList;
        if ( !v12 )
          goto LABEL_106;
        if ( v6 >= LODWORD(v12->max_length) )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v12->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_106;
      if ( v6 >= LODWORD(equipSkillNameLabelList->max_length) )
        goto LABEL_107;
      v14 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = v4->fields.equipSkillNameLabelList;
        if ( !v15 )
          goto LABEL_106;
        if ( v6 >= LODWORD(v15->max_length) )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v15->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_106;
      if ( v6 >= LODWORD(equipSkillDetailLabelList->max_length) )
        goto LABEL_107;
      v17 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = v4->fields.equipSkillDetailLabelList;
        if ( !v18 )
          goto LABEL_106;
        if ( v6 >= LODWORD(v18->max_length) )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v18->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v6;
      if ( !skillBaseList )
        goto LABEL_106;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_106;
      max_length = equipList->max_length;
      v55 = (UnityEngine_Component_o *)v4;
      if ( (int)max_length >= 1 )
      {
        v21 = (SkillLvMaster_o *)this;
        v22 = 0;
        v23 = 0;
        v53 = equipList;
        while ( v23 < (unsigned int)max_length )
        {
          v24 = &equipList->obj.klass + v23;
          v25 = v24[4];
          if ( v25 )
          {
            BattleSkillIdList = BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)v24[4], 0);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))v25->_1.image
                                                                   + 51))(
                                                                    v25,
                                                                    *((_QWORD *)v25->_1.image + 52));
            if ( !BattleSkillIdList )
              goto LABEL_106;
            monitor = v55[4].monitor;
            if ( !monitor )
              goto LABEL_106;
            v28 = BattleSkillIdList->max_length;
            v29 = monitor[6];
            if ( (int)v28 <= v29 )
              v29 = BattleSkillIdList->max_length;
            if ( v29 >= 1 )
            {
              if ( !(_DWORD)v28 )
                break;
              v30 = this;
              v31 = 0;
              p_basePanel = &this->fields.basePanel;
              v33 = v29 - 1LL;
              while ( 1 )
              {
                if ( !v30 )
                  goto LABEL_106;
                if ( v31 >= LODWORD(v30->fields.m_CancellationTokenSource) )
                  goto LABEL_107;
                v34 = BattleSkillIdList->m_Items[v31];
                if ( v34 >= 1 )
                {
                  if ( !v21 )
                    goto LABEL_106;
                  v35 = *((_DWORD *)p_basePanel + v31);
                  this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(
                                                                          v21,
                                                                          &entity,
                                                                          v34,
                                                                          v35,
                                                                          0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_object;
                    if ( !MasterData_object )
                      goto LABEL_106;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                            &v56,
                                                                            v34,
                                                                            (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      klass = v55[5].klass;
                      if ( !klass )
                        goto LABEL_106;
                      if ( v31 >= LODWORD(klass->_1.namespaze) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v56;
                      if ( !v56 )
                        goto LABEL_106;
                      v37 = (UILabel_o *)*((_QWORD *)&klass->_1.byval_arg.data + v31);
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v56, 0);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                              (System_String_o *)StringLiteral_25426/*"{0}"*/,
                                                                              Name,
                                                                              0);
                      if ( !v37 )
                        goto LABEL_106;
                      UILabel__set_text(v37, (System_String_o *)this, 0);
                      m_CachedPtr = v55[4].fields.m_CachedPtr;
                      if ( !m_CachedPtr )
                        goto LABEL_106;
                      if ( v31 >= *(unsigned int *)(m_CachedPtr + 24) )
                        goto LABEL_107;
                      this = *(WarBoardServantEquipSimpleDialogComponent_o **)(m_CachedPtr + 8 * v31 + 32);
                      if ( !this )
                        goto LABEL_106;
                      SkillIconComponent__Set((SkillIconComponent_o *)this, v34, 0);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                      if ( !entity )
                        goto LABEL_106;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_43584536(
                                                                              entity,
                                                                              v35,
                                                                              0,
                                                                              0);
                      v40 = (UILabel_o **)v55[5].monitor;
                      if ( !v40 )
                        goto LABEL_106;
                      if ( v31 >= *((unsigned int *)v40 + 6) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              v40[v31 + 4],
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0);
                      v41 = v55[4].monitor;
                      if ( !v41 )
                        goto LABEL_106;
                      if ( v31 >= *((unsigned int *)v41 + 6) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v41[v31 + 4];
                      if ( !this )
                        goto LABEL_106;
                      v22 = 1;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                    }
                  }
                }
                if ( v33 == v31 )
                  break;
                if ( ++v31 >= LODWORD(BattleSkillIdList->max_length) )
                  goto LABEL_107;
              }
              equipList = v53;
            }
          }
          LODWORD(max_length) = equipList->max_length;
          if ( (__int64)++v23 >= (int)max_length )
            goto LABEL_90;
        }
LABEL_107:
        sub_1C93D34(this);
      }
      v22 = 0;
LABEL_90:
      v46 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_1C93AEC(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v47 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v46, v46[4]);
      if ( (v22 & 1) != 0 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0);
          v49 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
            v49 = sub_1C69B68(v48);
          v50 = *(_QWORD *)(*(_QWORD *)(v49 + 192) + 16LL);
          if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
            v50 = sub_1C69B68(v48);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v50 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(v55, 0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              LODWORD(v55[6].klass) = 1;
              v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
              System_Action___ctor(
                v51,
                (Il2CppObject *)v55,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0);
              BaseDialog__Open((BaseDialog_o *)v55, v51, 0, 0, 0);
              return;
            }
          }
        }
LABEL_106:
        sub_1C93D2C(this, bsvtData);
      }
      OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0);
      gameObject = UnityEngine_Component__get_gameObject(v55, 0);
      v45 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v42 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1C93AEC(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v43 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
      v45 = UnityEngine_Object_TypeInfo;
    }
    v52 = (UnityEngine_Object_o *)gameObject;
    if ( !v45->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v45);
    UnityEngine_Object__DestroyImmediate_72120096(v52, 0);
  }
}


System_String_o *WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E6ED & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15743/*"Window/CloseButton"*/);
    byte_4D2E6ED = 1;
  }
  return (System_String_o *)StringLiteral_15743/*"Window/CloseButton"*/;
}