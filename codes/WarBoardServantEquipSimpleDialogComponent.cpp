void __fastcall WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  struct UnityEngine_GameObject_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x2
  struct SkillIconComponent_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  struct UILabel_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x2
  struct UILabel_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FBA85 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BaseDialog_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v6);
    sub_B16FFC(&UILabel___TypeInfo, v7);
    byte_40FBA85 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v8->static_fields->SvtEquipSkillListMax,
                                                v2);
  this->fields.skillBaseList = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax,
                                             v16);
  this->fields.equipSkillSpriteList = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSkillSpriteList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = (struct UILabel_array *)sub_B17014(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax,
                                  v24);
  this->fields.equipSkillNameLabelList = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSkillNameLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = (struct UILabel_array *)sub_B17014(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax,
                                  v32);
  this->fields.equipSkillDetailLabelList = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSkillDetailLabelList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__EndClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_40FBA83 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    byte_40FBA83 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34809676(v6, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeButtonLabel; // x20
  System_String_o *v6; // x0

  if ( (byte_40FBA7F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v3);
    byte_40FBA7F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(closeButtonLabel, v6, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OnClickClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FBA82 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__, v3);
    sub_B16FFC(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__, v4);
    byte_40FBA82 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v5 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OpenFinish(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  WarBoardManager_o *v5; // x0

  if ( (byte_40FBA81 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_40FBA81 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_B170D4();
  WarBoardManager__SetTouchBlock(v5, 0, 0, 0LL);
  this->fields.state = 2;
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__SetUp(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        BattleServantData_o *bsvtData,
        const MethodInfo *method)
{
  WarBoardServantEquipSimpleDialogComponent_o *v4; // x24
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v17; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v19; // x21
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_GameObject_o *v21; // x0
  struct SkillIconComponent_array *equipSkillSpriteList; // x8
  UnityEngine_Object_o *v23; // x21
  struct SkillIconComponent_array *v24; // x8
  SkillIconComponent_o *v25; // x0
  struct UILabel_array *equipSkillNameLabelList; // x8
  UnityEngine_Object_o *v27; // x21
  struct UILabel_array *v28; // x8
  UILabel_o *v29; // x0
  struct UILabel_array *equipSkillDetailLabelList; // x8
  UnityEngine_Object_o *v31; // x21
  struct UILabel_array *v32; // x8
  UILabel_o *v33; // x0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v35; // x0
  struct BattleUserServantData_array *equipList; // x19
  __int64 v37; // x8
  SkillLvMaster_o *v38; // x20
  char v39; // w26
  unsigned __int64 v40; // x21
  Il2CppClass **v41; // x8
  Il2CppClass *v42; // x23
  System_Int32_array *BattleSkillIdList; // x22
  __int64 v44; // x9
  __int64 v45; // x8
  __int64 v46; // x9
  WarBoardServantEquipSimpleDialogComponent_o *v47; // x23
  unsigned __int64 v48; // x27
  signed __int64 v49; // x21
  struct UIPanel_array **p_basePanelList; // x19
  int32_t v51; // w25
  int32_t v52; // w24
  _QWORD *monitor; // x8
  UILabel_o *v54; // x26
  Il2CppObject *Name; // x0
  System_String_o *v56; // x0
  UnityEngine_Component_c *klass; // x8
  SkillIconComponent_o *v58; // x0
  __int64 v59; // x8
  __int64 v60; // x8
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Object_c *v63; // x8
  WebViewManager_o *v64; // x0
  __int64 v65; // x20
  __int64 v66; // x20
  WarBoardManager_o *v67; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Action_o *v73; // x20
  UnityEngine_Object_o *v74; // x19
  struct BattleUserServantData_array *v75; // [xsp+0h] [xbp-80h]
  unsigned __int64 v76; // [xsp+8h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UnityEngine_Component_o *v78; // [xsp+18h] [xbp-68h]
  WarEntity_o *v79; // [xsp+20h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_40FBA80 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, bsvtData);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__, v13);
    sub_B16FFC(&StringLiteral_23445/*"{0}"*/, v14);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FBA80 = 1;
  }
  v79 = 0LL;
  entity = 0LL;
  if ( !v4->fields.state )
  {
    skillBaseList = v4->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_116;
    v17 = 0LL;
    while ( 1 )
    {
      max_length = skillBaseList->max_length;
      if ( (__int64)v17 >= (int)max_length )
        break;
      if ( v17 >= max_length )
        goto LABEL_117;
      v19 = (UnityEngine_Object_o *)skillBaseList->m_Items[v17];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v20 = v4->fields.skillBaseList;
        if ( !v20 )
          goto LABEL_116;
        if ( v17 >= v20->max_length )
          goto LABEL_117;
        v21 = v20->m_Items[v17];
        if ( !v21 )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive(v21, 0, 0LL);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_116;
      if ( v17 >= equipSkillSpriteList->max_length )
        goto LABEL_117;
      v23 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v17];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v4->fields.equipSkillSpriteList;
        if ( !v24 )
          goto LABEL_116;
        if ( v17 >= v24->max_length )
          goto LABEL_117;
        v25 = v24->m_Items[v17];
        if ( !v25 )
          goto LABEL_116;
        SkillIconComponent__Clear(v25, 0LL);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_116;
      if ( v17 >= equipSkillNameLabelList->max_length )
        goto LABEL_117;
      v27 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v17];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = v4->fields.equipSkillNameLabelList;
        if ( !v28 )
          goto LABEL_116;
        if ( v17 >= v28->max_length )
          goto LABEL_117;
        v29 = v28->m_Items[v17];
        if ( !v29 )
          goto LABEL_116;
        UILabel__set_text(v29, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_116;
      if ( v17 >= equipSkillDetailLabelList->max_length )
        goto LABEL_117;
      v31 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v17];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = v4->fields.equipSkillDetailLabelList;
        if ( !v32 )
          goto LABEL_116;
        if ( v17 >= v32->max_length )
          goto LABEL_117;
        v33 = v32->m_Items[v17];
        if ( !v33 )
          goto LABEL_116;
        UILabel__set_text(v33, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v17;
      if ( !skillBaseList )
        goto LABEL_116;
    }
    if ( bsvtData )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_116;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v35 )
        goto LABEL_116;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v35,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_116;
      v37 = *(_QWORD *)&equipList->max_length;
      v78 = (UnityEngine_Component_o *)v4;
      if ( (int)v37 >= 1 )
      {
        v38 = (SkillLvMaster_o *)this;
        v39 = 0;
        v40 = 0LL;
        v75 = equipList;
        while ( v40 < (unsigned int)v37 )
        {
          v41 = &equipList->obj.klass + v40;
          v42 = v41[4];
          if ( v42 )
          {
            BattleSkillIdList = BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)v41[4], 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))v42->_1.image
                                                                   + 51))(
                                                                    v42,
                                                                    *((_QWORD *)v42->_1.image + 52));
            if ( !BattleSkillIdList )
              goto LABEL_116;
            v44 = *(_QWORD *)&v78[3].fields.m_CachedPtr;
            if ( !v44 )
              goto LABEL_116;
            v45 = *(_QWORD *)&BattleSkillIdList->max_length;
            v46 = *(_QWORD *)(v44 + 24);
            if ( (int)v45 <= (int)v46 )
              v46 = *(_QWORD *)&BattleSkillIdList->max_length;
            if ( (int)v46 >= 1 )
            {
              v76 = v40;
              if ( !(_DWORD)v45 )
                break;
              v47 = this;
              v48 = 0LL;
              v49 = (int)v46;
              p_basePanelList = &this->fields.basePanelList;
              while ( 1 )
              {
                if ( !v47 )
                  goto LABEL_116;
                if ( v48 >= LODWORD(v47->fields.basePanel) )
                  goto LABEL_117;
                v51 = BattleSkillIdList->m_Items[v48 + 1];
                if ( v51 >= 1 )
                {
                  if ( !v38 )
                    goto LABEL_116;
                  v52 = *((_DWORD *)p_basePanelList + v48);
                  this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(
                                                                          v38,
                                                                          &entity,
                                                                          v51,
                                                                          v52,
                                                                          0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( !MasterData_WarQuestSelectionMaster )
                      goto LABEL_116;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            &v79,
                                                                            v51,
                                                                            (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      monitor = v78[4].monitor;
                      if ( !monitor )
                        goto LABEL_116;
                      if ( v48 >= *((unsigned int *)monitor + 6) )
                        goto LABEL_117;
                      if ( !v79 )
                        goto LABEL_116;
                      v54 = (UILabel_o *)monitor[v48 + 4];
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v79, 0LL);
                      v56 = System_String__Format((System_String_o *)StringLiteral_23445/*"{0}"*/, Name, 0LL);
                      if ( !v54 )
                        goto LABEL_116;
                      UILabel__set_text(v54, v56, 0LL);
                      klass = v78[4].klass;
                      if ( !klass )
                        goto LABEL_116;
                      if ( v48 >= LODWORD(klass->_1.namespaze) )
                        goto LABEL_117;
                      v58 = (SkillIconComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v48);
                      if ( !v58 )
                        goto LABEL_116;
                      SkillIconComponent__Set(v58, v51, 0LL);
                      if ( !entity )
                        goto LABEL_116;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_23602036(
                                                                              entity,
                                                                              v52,
                                                                              0,
                                                                              0LL);
                      v59 = *(_QWORD *)&v78[4].fields.m_CachedPtr;
                      if ( !v59 )
                        goto LABEL_116;
                      if ( v48 >= *(unsigned int *)(v59 + 24) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              *(UILabel_o **)(v59 + 8 * v48 + 32),
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0,
                                                                              0LL);
                      v60 = *(_QWORD *)&v78[3].fields.m_CachedPtr;
                      if ( !v60 )
                        goto LABEL_116;
                      if ( v48 >= *(unsigned int *)(v60 + 24) )
                        goto LABEL_117;
                      v61 = *(UnityEngine_GameObject_o **)(v60 + 8 * v48 + 32);
                      if ( !v61 )
                        goto LABEL_116;
                      v39 = 1;
                      UnityEngine_GameObject__SetActive(v61, 1, 0LL);
                    }
                  }
                }
                if ( (__int64)++v48 >= v49 )
                  break;
                if ( v48 >= BattleSkillIdList->max_length )
                  goto LABEL_117;
              }
              equipList = v75;
              v40 = v76;
            }
          }
          LODWORD(v37) = equipList->max_length;
          if ( (__int64)++v40 >= (int)v37 )
            goto LABEL_95;
        }
LABEL_117:
        sub_B17100(this, bsvtData, method);
        sub_B170A0();
      }
      v39 = 0;
LABEL_95:
      if ( (v39 & 1) != 0 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( v64 )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v64, 0, 0, 0LL);
          v65 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
          if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
            sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
          v66 = **(_QWORD **)(v65 + 192);
          if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
            sub_AAFCFC(v66);
          v67 = **(WarBoardManager_o ***)(v66 + 184);
          if ( v67 )
          {
            WarBoardManager__SetTouchBlock(v67, 1, 0, 0LL);
            gameObject = UnityEngine_Component__get_gameObject(v78, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
              LODWORD(v78[5].monitor) = 1;
              v73 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v69, v70, v71, v72);
              System_Action___ctor(
                v73,
                (Il2CppObject *)v78,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)v78, v73, 0, 0LL);
              return;
            }
          }
        }
LABEL_116:
        sub_B170D4();
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v62 = UnityEngine_Component__get_gameObject(v78, 0LL);
      v63 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      v63 = UnityEngine_Object_TypeInfo;
    }
    v74 = (UnityEngine_Object_o *)v62;
    if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v63);
    UnityEngine_Object__DestroyImmediate_34809676(v74, 0LL);
  }
}


System_String_o *__fastcall WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FBA84 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15416/*"Window/CloseButton"*/, method);
    byte_40FBA84 = 1;
  }
  return (System_String_o *)StringLiteral_15416/*"Window/CloseButton"*/;
}