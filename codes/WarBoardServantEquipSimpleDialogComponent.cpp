void __fastcall WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UILabel_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UILabel_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BDA429 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&SkillIconComponent___TypeInfo);
    sub_1C21E38(&UILabel___TypeInfo);
    byte_4BDA429 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v11;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillSpriteList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_1C21EE0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v18;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillNameLabelList,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_1C21EE0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v25;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillDetailLabelList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__EndClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BDA427 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BDA427 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C22094(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70869800(gameObject, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_4BDA423 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4BDA423 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
LABEL_8:
    sub_1C22094(gameObject, v4);
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OnClickClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BDA426 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    sub_1C21E38(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__);
    byte_4BDA426 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v3 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OpenFinish(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_4BDA425 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4BDA425 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C73D14(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C73D14(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_1C22094(0LL, method);
  WarBoardManager__SetTouchBlock(v6, 0, 0, 0LL);
  this->fields.state = 2;
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__SetUp(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        BattleServantData_o *bsvtData,
        const MethodInfo *method)
{
  WarBoardServantEquipSimpleDialogComponent_o *v4; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v6; // x22
  unsigned __int64 max_length; // x9
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
  __int64 v20; // x8
  SkillLvMaster_o *v21; // x20
  char v22; // w26
  unsigned __int64 v23; // x29
  Il2CppClass **v24; // x8
  Il2CppClass *v25; // x23
  System_Int32_array *BattleSkillIdList; // x22
  UnityEngine_Component_c *klass; // x8
  __int64 v28; // x9
  int namespaze; // w8
  WarBoardServantEquipSimpleDialogComponent_o *v30; // x23
  unsigned __int64 v31; // x28
  struct UIPanel_o **p_basePanel; // x27
  __int64 v33; // x21
  int32_t v34; // w25
  int32_t v35; // w24
  __int64 v36; // x8
  UILabel_o *v37; // x26
  Il2CppObject *Name; // x0
  _QWORD *monitor; // x8
  UnityEngine_Component_c *v40; // x8
  UnityEngine_Component_c *v41; // x8
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
  if ( (byte_4BDA424 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
    sub_1C21E38(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDA424 = 1;
  }
  v56 = 0LL;
  entity = 0LL;
  if ( !v4->fields.state )
  {
    skillBaseList = v4->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_106;
    v6 = 0LL;
    while ( 1 )
    {
      max_length = skillBaseList->max_length;
      if ( (__int64)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
        goto LABEL_107;
      v8 = (UnityEngine_Object_o *)skillBaseList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.skillBaseList;
        if ( !v9 )
          goto LABEL_106;
        if ( v6 >= v9->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v9->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_106;
      if ( v6 >= equipSkillSpriteList->max_length )
        goto LABEL_107;
      v11 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v4->fields.equipSkillSpriteList;
        if ( !v12 )
          goto LABEL_106;
        if ( v6 >= v12->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v12->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0LL);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_106;
      if ( v6 >= equipSkillNameLabelList->max_length )
        goto LABEL_107;
      v14 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = v4->fields.equipSkillNameLabelList;
        if ( !v15 )
          goto LABEL_106;
        if ( v6 >= v15->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v15->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_106;
      if ( v6 >= equipSkillDetailLabelList->max_length )
        goto LABEL_107;
      v17 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = v4->fields.equipSkillDetailLabelList;
        if ( !v18 )
          goto LABEL_106;
        if ( v6 >= v18->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v18->m_Items[v6];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v6;
      if ( !skillBaseList )
        goto LABEL_106;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_106;
      v20 = *(_QWORD *)&equipList->max_length;
      v55 = (UnityEngine_Component_o *)v4;
      if ( (int)v20 >= 1 )
      {
        v21 = (SkillLvMaster_o *)this;
        v22 = 0;
        v23 = 0LL;
        v53 = equipList;
        while ( v23 < (unsigned int)v20 )
        {
          v24 = &equipList->obj.klass + v23;
          v25 = v24[4];
          if ( v25 )
          {
            BattleSkillIdList = BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)v24[4], 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))v25->_1.image
                                                                   + 51))(
                                                                    v25,
                                                                    *((_QWORD *)v25->_1.image + 52));
            if ( !BattleSkillIdList )
              goto LABEL_106;
            klass = v55[4].klass;
            if ( !klass )
              goto LABEL_106;
            v28 = *(_QWORD *)&BattleSkillIdList->max_length;
            namespaze = (int)klass->_1.namespaze;
            if ( (int)v28 <= namespaze )
              namespaze = *(_QWORD *)&BattleSkillIdList->max_length;
            if ( namespaze >= 1 )
            {
              if ( !(_DWORD)v28 )
                break;
              v30 = this;
              v31 = 0LL;
              p_basePanel = &this->fields.basePanel;
              v33 = namespaze - 1LL;
              while ( 1 )
              {
                if ( !v30 )
                  goto LABEL_106;
                if ( v31 >= LODWORD(v30->fields.m_CancellationTokenSource) )
                  goto LABEL_107;
                v34 = BattleSkillIdList->m_Items[v31 + 1];
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
                                                                          0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_object;
                    if ( !MasterData_object )
                      goto LABEL_106;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                            &v56,
                                                                            v34,
                                                                            (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v36 = *(_QWORD *)&v55[4].fields.m_CachedPtr;
                      if ( !v36 )
                        goto LABEL_106;
                      if ( v31 >= *(unsigned int *)(v36 + 24) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v56;
                      if ( !v56 )
                        goto LABEL_106;
                      v37 = *(UILabel_o **)(v36 + 8 * v31 + 32);
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v56, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                              (System_String_o *)StringLiteral_25427/*"{0}"*/,
                                                                              Name,
                                                                              0LL);
                      if ( !v37 )
                        goto LABEL_106;
                      UILabel__set_text(v37, (System_String_o *)this, 0LL);
                      monitor = v55[4].monitor;
                      if ( !monitor )
                        goto LABEL_106;
                      if ( v31 >= *((unsigned int *)monitor + 6) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)monitor[v31 + 4];
                      if ( !this )
                        goto LABEL_106;
                      SkillIconComponent__Set((SkillIconComponent_o *)this, v34, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                      if ( !entity )
                        goto LABEL_106;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_41206052(
                                                                              entity,
                                                                              v35,
                                                                              0,
                                                                              0LL);
                      v40 = v55[5].klass;
                      if ( !v40 )
                        goto LABEL_106;
                      if ( v31 >= LODWORD(v40->_1.namespaze) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              *((UILabel_o **)&v40->_1.byval_arg.data
                                                                              + v31),
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0LL);
                      v41 = v55[4].klass;
                      if ( !v41 )
                        goto LABEL_106;
                      if ( v31 >= LODWORD(v41->_1.namespaze) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)*((_QWORD *)&v41->_1.byval_arg.data + v31);
                      if ( !this )
                        goto LABEL_106;
                      v22 = 1;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                    }
                  }
                }
                if ( v33 == v31 )
                  break;
                if ( ++v31 >= BattleSkillIdList->max_length )
                  goto LABEL_107;
              }
              equipList = v53;
            }
          }
          LODWORD(v20) = equipList->max_length;
          if ( (__int64)++v23 >= (int)v20 )
            goto LABEL_90;
        }
LABEL_107:
        sub_1C2209C(this, bsvtData);
      }
      v22 = 0;
LABEL_90:
      v46 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_1C21E50(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v47 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v46, v46[4]);
      if ( (v22 & 1) != 0 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0LL);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0LL);
          v49 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
            v49 = sub_1C73D14(v48);
          v50 = *(_QWORD *)(*(_QWORD *)(v49 + 192) + 16LL);
          if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
            v50 = sub_1C73D14(v48);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v50 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(v55, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v55[5].fields.m_CachedPtr = 1;
              v51 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
              System_Action___ctor(
                v51,
                (Il2CppObject *)v55,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)v55, v51, 0, 0LL);
              return;
            }
          }
        }
LABEL_106:
        sub_1C22094(this, bsvtData);
      }
      OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v55, 0LL);
      v45 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v42 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1C21E50(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v43 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      v45 = UnityEngine_Object_TypeInfo;
    }
    v52 = (UnityEngine_Object_o *)gameObject;
    if ( !v45->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v45);
    UnityEngine_Object__DestroyImmediate_70869800(v52, 0LL);
  }
}


System_String_o *__fastcall WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDA428 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15911/*"Window/CloseButton"*/);
    byte_4BDA428 = 1;
  }
  return (System_String_o *)StringLiteral_15911/*"Window/CloseButton"*/;
}