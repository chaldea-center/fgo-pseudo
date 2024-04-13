void __fastcall WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BalanceConfig_c *v17; // x0
  struct UnityEngine_GameObject_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct SkillIconComponent_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UILabel_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UILabel_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42EAB52 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BaseDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UILabel___TypeInfo, v14, v15, v16);
    byte_42EAB52 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v17->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSkillSpriteList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct UILabel_array *)sub_B5D5DC(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSkillNameLabelList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UILabel_array *)sub_B5D5DC(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSkillDetailLabelList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__EndClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EAB50 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    byte_42EAB50 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_42EAB4C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v5, v6, v7);
    byte_42EAB4C = 1;
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
LABEL_9:
    sub_B5D69C(gameObject, v9);
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OnClickClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42EAB4F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__, v8, v9, v10);
    byte_42EAB4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v11 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x20
  WarBoardManager_o *v7; // x0

  if ( (byte_42EAB4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, (_DWORD)method, v2, v3);
    byte_42EAB4E = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AF52C4(v6);
  v7 = **(WarBoardManager_o ***)(v6 + 184);
  if ( !v7 )
    sub_B5D69C(0LL, method);
  WarBoardManager__SetTouchBlock(v7, 0, 0, 0LL);
  this->fields.state = 2;
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__SetUp(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        BattleServantData_o *bsvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardServantEquipSimpleDialogComponent_o *v5; // x24
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v40; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v42; // x21
  struct UnityEngine_GameObject_array *v43; // x8
  struct SkillIconComponent_array *equipSkillSpriteList; // x8
  UnityEngine_Object_o *v45; // x21
  struct SkillIconComponent_array *v46; // x8
  struct UILabel_array *equipSkillNameLabelList; // x8
  UnityEngine_Object_o *v48; // x21
  struct UILabel_array *v49; // x8
  struct UILabel_array *equipSkillDetailLabelList; // x8
  UnityEngine_Object_o *v51; // x21
  struct UILabel_array *v52; // x8
  struct BattleUserServantData_array *equipList; // x19
  __int64 v54; // x8
  SkillLvMaster_o *v55; // x20
  char v56; // w26
  unsigned __int64 v57; // x21
  Il2CppClass **v58; // x8
  Il2CppClass *v59; // x23
  System_Int32_array *BattleSkillIdList; // x22
  __int64 v61; // x9
  __int64 v62; // x8
  __int64 v63; // x9
  WarBoardServantEquipSimpleDialogComponent_o *v64; // x23
  unsigned __int64 v65; // x27
  signed __int64 v66; // x21
  struct UIPanel_array **p_basePanelList; // x19
  int32_t v68; // w25
  int32_t v69; // w24
  _QWORD *monitor; // x8
  UILabel_o *v71; // x26
  Il2CppObject *Name; // x0
  UnityEngine_Component_c *klass; // x8
  __int64 v74; // x8
  __int64 v75; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_c *v77; // x8
  __int64 v78; // x20
  __int64 v79; // x20
  System_Action_o *v80; // x20
  UnityEngine_Object_o *v81; // x19
  __int64 v82; // x0
  struct BattleUserServantData_array *v83; // [xsp+0h] [xbp-80h]
  unsigned __int64 v84; // [xsp+8h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UnityEngine_Component_o *v86; // [xsp+18h] [xbp-68h]
  WarEntity_o *v87; // [xsp+20h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_42EAB4D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)bsvtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SoundManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v33, v34, v35);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v36, v37, v38);
    byte_42EAB4D = 1;
  }
  v87 = 0LL;
  entity = 0LL;
  if ( !v5->fields.state )
  {
    skillBaseList = v5->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_116;
    v40 = 0LL;
    while ( 1 )
    {
      max_length = skillBaseList->max_length;
      if ( (__int64)v40 >= (int)max_length )
        break;
      if ( v40 >= max_length )
        goto LABEL_117;
      v42 = (UnityEngine_Object_o *)skillBaseList->m_Items[v40];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v43 = v5->fields.skillBaseList;
        if ( !v43 )
          goto LABEL_116;
        if ( v40 >= v43->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v43->m_Items[v40];
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      equipSkillSpriteList = v5->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_116;
      if ( v40 >= equipSkillSpriteList->max_length )
        goto LABEL_117;
      v45 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v40];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v46 = v5->fields.equipSkillSpriteList;
        if ( !v46 )
          goto LABEL_116;
        if ( v40 >= v46->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v46->m_Items[v40];
        if ( !this )
          goto LABEL_116;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0LL);
      }
      equipSkillNameLabelList = v5->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_116;
      if ( v40 >= equipSkillNameLabelList->max_length )
        goto LABEL_117;
      v48 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v40];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v49 = v5->fields.equipSkillNameLabelList;
        if ( !v49 )
          goto LABEL_116;
        if ( v40 >= v49->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v49->m_Items[v40];
        if ( !this )
          goto LABEL_116;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      equipSkillDetailLabelList = v5->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_116;
      if ( v40 >= equipSkillDetailLabelList->max_length )
        goto LABEL_117;
      v51 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v40];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v52 = v5->fields.equipSkillDetailLabelList;
        if ( !v52 )
          goto LABEL_116;
        if ( v40 >= v52->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v52->m_Items[v40];
        if ( !this )
          goto LABEL_116;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      skillBaseList = v5->fields.skillBaseList;
      ++v40;
      if ( !skillBaseList )
        goto LABEL_116;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_116;
      v54 = *(_QWORD *)&equipList->max_length;
      v86 = (UnityEngine_Component_o *)v5;
      if ( (int)v54 >= 1 )
      {
        v55 = (SkillLvMaster_o *)this;
        v56 = 0;
        v57 = 0LL;
        v83 = equipList;
        while ( v57 < (unsigned int)v54 )
        {
          v58 = &equipList->obj.klass + v57;
          v59 = v58[4];
          if ( v59 )
          {
            BattleSkillIdList = BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)v58[4], 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))v59->_1.image
                                                                   + 51))(
                                                                    v59,
                                                                    *((_QWORD *)v59->_1.image + 52));
            if ( !BattleSkillIdList )
              goto LABEL_116;
            v61 = *(_QWORD *)&v86[3].fields.m_CachedPtr;
            if ( !v61 )
              goto LABEL_116;
            v62 = *(_QWORD *)&BattleSkillIdList->max_length;
            v63 = *(_QWORD *)(v61 + 24);
            if ( (int)v62 <= (int)v63 )
              v63 = *(_QWORD *)&BattleSkillIdList->max_length;
            if ( (int)v63 >= 1 )
            {
              v84 = v57;
              if ( !(_DWORD)v62 )
                break;
              v64 = this;
              v65 = 0LL;
              v66 = (int)v63;
              p_basePanelList = &this->fields.basePanelList;
              while ( 1 )
              {
                if ( !v64 )
                  goto LABEL_116;
                if ( v65 >= LODWORD(v64->fields.basePanel) )
                  goto LABEL_117;
                v68 = BattleSkillIdList->m_Items[v65 + 1];
                if ( v68 >= 1 )
                {
                  if ( !v55 )
                    goto LABEL_116;
                  v69 = *((_DWORD *)p_basePanelList + v65);
                  this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(
                                                                          v55,
                                                                          &entity,
                                                                          v68,
                                                                          v69,
                                                                          0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_WarQuestSelectionMaster;
                    if ( !MasterData_WarQuestSelectionMaster )
                      goto LABEL_116;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            &v87,
                                                                            v68,
                                                                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      monitor = v86[4].monitor;
                      if ( !monitor )
                        goto LABEL_116;
                      if ( v65 >= *((unsigned int *)monitor + 6) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v87;
                      if ( !v87 )
                        goto LABEL_116;
                      v71 = (UILabel_o *)monitor[v65 + 4];
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v87, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                              (System_String_o *)StringLiteral_23850/*"{0}"*/,
                                                                              Name,
                                                                              0LL);
                      if ( !v71 )
                        goto LABEL_116;
                      UILabel__set_text(v71, (System_String_o *)this, 0LL);
                      klass = v86[4].klass;
                      if ( !klass )
                        goto LABEL_116;
                      if ( v65 >= LODWORD(klass->_1.namespaze) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v65);
                      if ( !this )
                        goto LABEL_116;
                      SkillIconComponent__Set((SkillIconComponent_o *)this, v68, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                      if ( !entity )
                        goto LABEL_116;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_26810736(
                                                                              entity,
                                                                              v69,
                                                                              0,
                                                                              0LL);
                      v74 = *(_QWORD *)&v86[4].fields.m_CachedPtr;
                      if ( !v74 )
                        goto LABEL_116;
                      if ( v65 >= *(unsigned int *)(v74 + 24) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              *(UILabel_o **)(v74 + 8 * v65 + 32),
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0,
                                                                              0LL);
                      v75 = *(_QWORD *)&v86[3].fields.m_CachedPtr;
                      if ( !v75 )
                        goto LABEL_116;
                      if ( v65 >= *(unsigned int *)(v75 + 24) )
                        goto LABEL_117;
                      this = *(WarBoardServantEquipSimpleDialogComponent_o **)(v75 + 8 * v65 + 32);
                      if ( !this )
                        goto LABEL_116;
                      v56 = 1;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                    }
                  }
                }
                if ( (__int64)++v65 >= v66 )
                  break;
                if ( v65 >= BattleSkillIdList->max_length )
                  goto LABEL_117;
              }
              equipList = v83;
              v57 = v84;
            }
          }
          LODWORD(v54) = equipList->max_length;
          if ( (__int64)++v57 >= (int)v54 )
            goto LABEL_95;
        }
LABEL_117:
        v82 = sub_B5D6C8(this);
        sub_B5D668(v82, 0LL);
      }
      v56 = 0;
LABEL_95:
      if ( (v56 & 1) != 0 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0LL);
          v78 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
          if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
            sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
          v79 = **(_QWORD **)(v78 + 192);
          if ( (*(_BYTE *)(v79 + 306) & 1) == 0 )
            sub_AF52C4(v79);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v79 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(v86, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              LODWORD(v86[5].monitor) = 1;
              v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v80,
                (Il2CppObject *)v86,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)v86, v80, 0, 0LL);
              return;
            }
          }
        }
LABEL_116:
        sub_B5D69C(this, bsvtData);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v86, 0LL);
      v77 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v77 = UnityEngine_Object_TypeInfo;
    }
    v81 = (UnityEngine_Object_o *)gameObject;
    if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v77);
    UnityEngine_Object__DestroyImmediate_35620448(v81, 0LL);
  }
}


System_String_o *__fastcall WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAB51 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42EAB51 = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}