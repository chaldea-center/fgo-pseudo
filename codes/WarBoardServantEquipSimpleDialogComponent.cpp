void __fastcall WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BalanceConfig_c *v12; // x0
  struct UnityEngine_GameObject_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct SkillIconComponent_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UILabel_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UILabel_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1

  if ( (byte_4B14137 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&BaseDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v6, v7);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v8, v9);
    sub_1BCA7E0(&UILabel___TypeInfo, v10, v11);
    byte_4B14137 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v12->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v20;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillSpriteList,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillNameLabelList,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillDetailLabelList,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v41);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__EndClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B14135 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    byte_4B14135 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_4B14131 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v4, v5);
    byte_4B14131 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
LABEL_8:
    sub_1BCAA3C(gameObject, v7);
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OnClickClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B14134 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__, v6, v7);
    byte_4B14134 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v8 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OpenFinish(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  WarBoardManager_o *v7; // x0

  if ( (byte_4B14133 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method, v2);
    byte_4B14133 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1C6BC(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC(v3);
  v7 = **(WarBoardManager_o ***)(v6 + 184);
  if ( !v7 )
    sub_1BCAA3C(0LL, method);
  WarBoardManager__SetTouchBlock(v7, 0, 0, 0LL);
  this->fields.state = 2;
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__SetUp(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        BattleServantData_o *bsvtData,
        const MethodInfo *method)
{
  WarBoardServantEquipSimpleDialogComponent_o *v4; // x24
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v28; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v30; // x21
  struct UnityEngine_GameObject_array *v31; // x8
  struct SkillIconComponent_array *equipSkillSpriteList; // x8
  UnityEngine_Object_o *v33; // x21
  struct SkillIconComponent_array *v34; // x8
  struct UILabel_array *equipSkillNameLabelList; // x8
  UnityEngine_Object_o *v36; // x21
  struct UILabel_array *v37; // x8
  struct UILabel_array *equipSkillDetailLabelList; // x8
  UnityEngine_Object_o *v39; // x21
  struct UILabel_array *v40; // x8
  struct BattleUserServantData_array *equipList; // x19
  __int64 v42; // x8
  SkillLvMaster_o *v43; // x20
  char v44; // w26
  unsigned __int64 v45; // x29
  Il2CppClass **v46; // x8
  Il2CppClass *v47; // x23
  System_Int32_array *BattleSkillIdList; // x22
  UnityEngine_Component_c *klass; // x8
  __int64 v50; // x9
  int namespaze; // w8
  WarBoardServantEquipSimpleDialogComponent_o *v52; // x23
  unsigned __int64 v53; // x28
  struct UIPanel_o **p_basePanel; // x27
  __int64 v55; // x21
  int32_t v56; // w25
  int32_t v57; // w24
  __int64 v58; // x8
  UILabel_o *v59; // x26
  Il2CppObject *Name; // x0
  _QWORD *monitor; // x8
  UnityEngine_Component_c *v62; // x8
  UnityEngine_Component_c *v63; // x8
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v67; // x1
  UnityEngine_Object_c *v68; // x8
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  long double v71; // q0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x20
  UnityEngine_Object_o *v78; // x19
  struct BattleUserServantData_array *v79; // [xsp+8h] [xbp-88h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Component_o *v81; // [xsp+18h] [xbp-78h]
  Il2CppObject *v82; // [xsp+20h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B14132 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, bsvtData, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardServantEquipSimpleDialogComponent_SetUp__, v19, v20);
    sub_1BCA7E0(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v23, v24);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B14132 = 1;
  }
  v82 = 0LL;
  entity = 0LL;
  if ( !v4->fields.state )
  {
    skillBaseList = v4->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_106;
    v28 = 0LL;
    while ( 1 )
    {
      max_length = skillBaseList->max_length;
      if ( (__int64)v28 >= (int)max_length )
        break;
      if ( v28 >= max_length )
        goto LABEL_107;
      v30 = (UnityEngine_Object_o *)skillBaseList->m_Items[v28];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v31 = v4->fields.skillBaseList;
        if ( !v31 )
          goto LABEL_106;
        if ( v28 >= v31->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v31->m_Items[v28];
        if ( !this )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_106;
      if ( v28 >= equipSkillSpriteList->max_length )
        goto LABEL_107;
      v33 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v28];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.equipSkillSpriteList;
        if ( !v34 )
          goto LABEL_106;
        if ( v28 >= v34->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v34->m_Items[v28];
        if ( !this )
          goto LABEL_106;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0LL);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_106;
      if ( v28 >= equipSkillNameLabelList->max_length )
        goto LABEL_107;
      v36 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v28];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v37 = v4->fields.equipSkillNameLabelList;
        if ( !v37 )
          goto LABEL_106;
        if ( v28 >= v37->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v37->m_Items[v28];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_106;
      if ( v28 >= equipSkillDetailLabelList->max_length )
        goto LABEL_107;
      v39 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v28];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bsvtData);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v40 = v4->fields.equipSkillDetailLabelList;
        if ( !v40 )
          goto LABEL_106;
        if ( v28 >= v40->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v40->m_Items[v28];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v28;
      if ( !skillBaseList )
        goto LABEL_106;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_106;
      v42 = *(_QWORD *)&equipList->max_length;
      v81 = (UnityEngine_Component_o *)v4;
      if ( (int)v42 >= 1 )
      {
        v43 = (SkillLvMaster_o *)this;
        v44 = 0;
        v45 = 0LL;
        v79 = equipList;
        while ( v45 < (unsigned int)v42 )
        {
          v46 = &equipList->obj.klass + v45;
          v47 = v46[4];
          if ( v47 )
          {
            BattleSkillIdList = BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)v46[4], 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))v47->_1.image
                                                                   + 51))(
                                                                    v47,
                                                                    *((_QWORD *)v47->_1.image + 52));
            if ( !BattleSkillIdList )
              goto LABEL_106;
            klass = v81[4].klass;
            if ( !klass )
              goto LABEL_106;
            v50 = *(_QWORD *)&BattleSkillIdList->max_length;
            namespaze = (int)klass->_1.namespaze;
            if ( (int)v50 <= namespaze )
              namespaze = *(_QWORD *)&BattleSkillIdList->max_length;
            if ( namespaze >= 1 )
            {
              if ( !(_DWORD)v50 )
                break;
              v52 = this;
              v53 = 0LL;
              p_basePanel = &this->fields.basePanel;
              v55 = namespaze - 1LL;
              while ( 1 )
              {
                if ( !v52 )
                  goto LABEL_106;
                if ( v53 >= LODWORD(v52->fields.m_CancellationTokenSource) )
                  goto LABEL_107;
                v56 = BattleSkillIdList->m_Items[v53 + 1];
                if ( v56 >= 1 )
                {
                  if ( !v43 )
                    goto LABEL_106;
                  v57 = *((_DWORD *)p_basePanel + v53);
                  this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(
                                                                          v43,
                                                                          &entity,
                                                                          v56,
                                                                          v57,
                                                                          0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_object;
                    if ( !MasterData_object )
                      goto LABEL_106;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                            &v82,
                                                                            v56,
                                                                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v58 = *(_QWORD *)&v81[4].fields.m_CachedPtr;
                      if ( !v58 )
                        goto LABEL_106;
                      if ( v53 >= *(unsigned int *)(v58 + 24) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v82;
                      if ( !v82 )
                        goto LABEL_106;
                      v59 = *(UILabel_o **)(v58 + 8 * v53 + 32);
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v82, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                              (System_String_o *)StringLiteral_25238/*"{0}"*/,
                                                                              Name,
                                                                              0LL);
                      if ( !v59 )
                        goto LABEL_106;
                      UILabel__set_text(v59, (System_String_o *)this, 0LL);
                      monitor = v81[4].monitor;
                      if ( !monitor )
                        goto LABEL_106;
                      if ( v53 >= *((unsigned int *)monitor + 6) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)monitor[v53 + 4];
                      if ( !this )
                        goto LABEL_106;
                      SkillIconComponent__Set((SkillIconComponent_o *)this, v56, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                      if ( !entity )
                        goto LABEL_106;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_40665920(
                                                                              entity,
                                                                              v57,
                                                                              0,
                                                                              0LL);
                      v62 = v81[5].klass;
                      if ( !v62 )
                        goto LABEL_106;
                      if ( v53 >= LODWORD(v62->_1.namespaze) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              *((UILabel_o **)&v62->_1.byval_arg.data
                                                                              + v53),
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0,
                                                                              0LL);
                      v63 = v81[4].klass;
                      if ( !v63 )
                        goto LABEL_106;
                      if ( v53 >= LODWORD(v63->_1.namespaze) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)*((_QWORD *)&v63->_1.byval_arg.data + v53);
                      if ( !this )
                        goto LABEL_106;
                      v44 = 1;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                    }
                  }
                }
                if ( v55 == v53 )
                  break;
                if ( ++v53 >= BattleSkillIdList->max_length )
                  goto LABEL_107;
              }
              equipList = v79;
            }
          }
          LODWORD(v42) = equipList->max_length;
          if ( (__int64)++v45 >= (int)v42 )
            goto LABEL_90;
        }
LABEL_107:
        sub_1BCAA44(this, bsvtData);
      }
      v44 = 0;
LABEL_90:
      v69 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v69 = (_QWORD *)sub_1BCA7F8(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v69, v69[4]);
      if ( (v44 & 1) != 0 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0LL);
          v72 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
            v72 = sub_1C1C6BC(v71);
          v73 = *(_QWORD *)(*(_QWORD *)(v72 + 192) + 16LL);
          if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
            v73 = sub_1C1C6BC(v71);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v73 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(v81, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v81[5].fields.m_CachedPtr = 1;
              v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
              System_Action___ctor(
                v77,
                (Il2CppObject *)v81,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)v81, v77, 0, 0LL);
              return;
            }
          }
        }
LABEL_106:
        sub_1BCAA3C(this, bsvtData);
      }
      OverwriteAssetSoundName__PlaySystemSe(v70, 2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v81, 0LL);
      v68 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v64 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v64 = (_QWORD *)sub_1BCA7F8(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v65 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v64, v64[4]);
      OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      v68 = UnityEngine_Object_TypeInfo;
    }
    v78 = (UnityEngine_Object_o *)gameObject;
    if ( !v68->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v68, v67);
    UnityEngine_Object__DestroyImmediate_70154432(v78, 0LL);
  }
}


System_String_o *__fastcall WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14136 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, method, v2);
    byte_4B14136 = 1;
  }
  return (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/;
}