void __fastcall WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct SkillIconComponent_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UILabel_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UILabel_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4189272 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&BaseDialog_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v5);
    sub_B2C35C(&UILabel___TypeInfo, v6);
    byte_4189272 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSkillSpriteList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct UILabel_array *)sub_B2C374(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSkillNameLabelList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UILabel_array *)sub_B2C374(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSkillDetailLabelList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__EndClose(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4189270 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    byte_4189270 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_418926C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v3);
    byte_418926C = 1;
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
LABEL_9:
    sub_B2C434(gameObject, v5);
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
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
  System_Action_o *v7; // x20

  if ( (byte_418926F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__, v3);
    sub_B2C35C(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__, v4);
    byte_418926F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v5 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__OpenFinish(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  WarBoardManager_o *v5; // x0

  if ( (byte_418926E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_418926E = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_B2C434(0LL, method);
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
  struct SkillIconComponent_array *equipSkillSpriteList; // x8
  UnityEngine_Object_o *v22; // x21
  struct SkillIconComponent_array *v23; // x8
  struct UILabel_array *equipSkillNameLabelList; // x8
  UnityEngine_Object_o *v25; // x21
  struct UILabel_array *v26; // x8
  struct UILabel_array *equipSkillDetailLabelList; // x8
  UnityEngine_Object_o *v28; // x21
  struct UILabel_array *v29; // x8
  struct BattleUserServantData_array *equipList; // x19
  __int64 v31; // x8
  SkillLvMaster_o *v32; // x20
  char v33; // w26
  unsigned __int64 v34; // x21
  Il2CppClass **v35; // x8
  Il2CppClass *v36; // x23
  System_Int32_array *BattleSkillIdList; // x22
  __int64 v38; // x9
  __int64 v39; // x8
  __int64 v40; // x9
  WarBoardServantEquipSimpleDialogComponent_o *v41; // x23
  unsigned __int64 v42; // x27
  signed __int64 v43; // x21
  struct UIPanel_array **p_basePanelList; // x19
  int32_t v45; // w25
  int32_t v46; // w24
  _QWORD *monitor; // x8
  UILabel_o *v48; // x26
  Il2CppObject *Name; // x0
  UnityEngine_Component_c *klass; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_c *v54; // x8
  __int64 v55; // x20
  __int64 v56; // x20
  System_Action_o *v57; // x20
  UnityEngine_Object_o *v58; // x19
  __int64 v59; // x0
  struct BattleUserServantData_array *v60; // [xsp+0h] [xbp-80h]
  unsigned __int64 v61; // [xsp+8h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UnityEngine_Component_o *v63; // [xsp+18h] [xbp-68h]
  WarEntity_o *v64; // [xsp+20h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_418926D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, bsvtData);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__, v13);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v14);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_418926D = 1;
  }
  v64 = 0LL;
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
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v20->m_Items[v17];
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_116;
      if ( v17 >= equipSkillSpriteList->max_length )
        goto LABEL_117;
      v22 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v17];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v23 = v4->fields.equipSkillSpriteList;
        if ( !v23 )
          goto LABEL_116;
        if ( v17 >= v23->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v23->m_Items[v17];
        if ( !this )
          goto LABEL_116;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0LL);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_116;
      if ( v17 >= equipSkillNameLabelList->max_length )
        goto LABEL_117;
      v25 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v17];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v26 = v4->fields.equipSkillNameLabelList;
        if ( !v26 )
          goto LABEL_116;
        if ( v17 >= v26->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v26->m_Items[v17];
        if ( !this )
          goto LABEL_116;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_116;
      if ( v17 >= equipSkillDetailLabelList->max_length )
        goto LABEL_117;
      v28 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v17];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = v4->fields.equipSkillDetailLabelList;
        if ( !v29 )
          goto LABEL_116;
        if ( v17 >= v29->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v29->m_Items[v17];
        if ( !this )
          goto LABEL_116;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v17;
      if ( !skillBaseList )
        goto LABEL_116;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_116;
      v31 = *(_QWORD *)&equipList->max_length;
      v63 = (UnityEngine_Component_o *)v4;
      if ( (int)v31 >= 1 )
      {
        v32 = (SkillLvMaster_o *)this;
        v33 = 0;
        v34 = 0LL;
        v60 = equipList;
        while ( v34 < (unsigned int)v31 )
        {
          v35 = &equipList->obj.klass + v34;
          v36 = v35[4];
          if ( v36 )
          {
            BattleSkillIdList = BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)v35[4], 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))v36->_1.image
                                                                   + 51))(
                                                                    v36,
                                                                    *((_QWORD *)v36->_1.image + 52));
            if ( !BattleSkillIdList )
              goto LABEL_116;
            v38 = *(_QWORD *)&v63[3].fields.m_CachedPtr;
            if ( !v38 )
              goto LABEL_116;
            v39 = *(_QWORD *)&BattleSkillIdList->max_length;
            v40 = *(_QWORD *)(v38 + 24);
            if ( (int)v39 <= (int)v40 )
              v40 = *(_QWORD *)&BattleSkillIdList->max_length;
            if ( (int)v40 >= 1 )
            {
              v61 = v34;
              if ( !(_DWORD)v39 )
                break;
              v41 = this;
              v42 = 0LL;
              v43 = (int)v40;
              p_basePanelList = &this->fields.basePanelList;
              while ( 1 )
              {
                if ( !v41 )
                  goto LABEL_116;
                if ( v42 >= LODWORD(v41->fields.basePanel) )
                  goto LABEL_117;
                v45 = BattleSkillIdList->m_Items[v42 + 1];
                if ( v45 >= 1 )
                {
                  if ( !v32 )
                    goto LABEL_116;
                  v46 = *((_DWORD *)p_basePanelList + v42);
                  this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(
                                                                          v32,
                                                                          &entity,
                                                                          v45,
                                                                          v46,
                                                                          0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_WarQuestSelectionMaster;
                    if ( !MasterData_WarQuestSelectionMaster )
                      goto LABEL_116;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            &v64,
                                                                            v45,
                                                                            (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      monitor = v63[4].monitor;
                      if ( !monitor )
                        goto LABEL_116;
                      if ( v42 >= *((unsigned int *)monitor + 6) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v64;
                      if ( !v64 )
                        goto LABEL_116;
                      v48 = (UILabel_o *)monitor[v42 + 4];
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v64, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                              (System_String_o *)StringLiteral_23539/*"{0}"*/,
                                                                              Name,
                                                                              0LL);
                      if ( !v48 )
                        goto LABEL_116;
                      UILabel__set_text(v48, (System_String_o *)this, 0LL);
                      klass = v63[4].klass;
                      if ( !klass )
                        goto LABEL_116;
                      if ( v42 >= LODWORD(klass->_1.namespaze) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v42);
                      if ( !this )
                        goto LABEL_116;
                      SkillIconComponent__Set((SkillIconComponent_o *)this, v45, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                      if ( !entity )
                        goto LABEL_116;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_23775852(
                                                                              entity,
                                                                              v46,
                                                                              0,
                                                                              0LL);
                      v51 = *(_QWORD *)&v63[4].fields.m_CachedPtr;
                      if ( !v51 )
                        goto LABEL_116;
                      if ( v42 >= *(unsigned int *)(v51 + 24) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              *(UILabel_o **)(v51 + 8 * v42 + 32),
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0,
                                                                              0LL);
                      v52 = *(_QWORD *)&v63[3].fields.m_CachedPtr;
                      if ( !v52 )
                        goto LABEL_116;
                      if ( v42 >= *(unsigned int *)(v52 + 24) )
                        goto LABEL_117;
                      this = *(WarBoardServantEquipSimpleDialogComponent_o **)(v52 + 8 * v42 + 32);
                      if ( !this )
                        goto LABEL_116;
                      v33 = 1;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                    }
                  }
                }
                if ( (__int64)++v42 >= v43 )
                  break;
                if ( v42 >= BattleSkillIdList->max_length )
                  goto LABEL_117;
              }
              equipList = v60;
              v34 = v61;
            }
          }
          LODWORD(v31) = equipList->max_length;
          if ( (__int64)++v34 >= (int)v31 )
            goto LABEL_95;
        }
LABEL_117:
        v59 = sub_B2C460(this);
        sub_B2C400(v59, 0LL);
      }
      v33 = 0;
LABEL_95:
      if ( (v33 & 1) != 0 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0LL);
          v55 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
          if ( (*(_BYTE *)(v55 + 306) & 1) == 0 )
            sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
          v56 = **(_QWORD **)(v55 + 192);
          if ( (*(_BYTE *)(v56 + 306) & 1) == 0 )
            sub_AC505C(v56);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v56 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(v63, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              LODWORD(v63[5].monitor) = 1;
              v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v57,
                (Il2CppObject *)v63,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)v63, v57, 0, 0LL);
              return;
            }
          }
        }
LABEL_116:
        sub_B2C434(this, bsvtData);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v63, 0LL);
      v54 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      v54 = UnityEngine_Object_TypeInfo;
    }
    v58 = (UnityEngine_Object_o *)gameObject;
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v54);
    UnityEngine_Object__DestroyImmediate_35315108(v58, 0LL);
  }
}


System_String_o *__fastcall WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189271 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15479/*"Window/CloseButton"*/, method);
    byte_4189271 = 1;
  }
  return (System_String_o *)StringLiteral_15479/*"Window/CloseButton"*/;
}