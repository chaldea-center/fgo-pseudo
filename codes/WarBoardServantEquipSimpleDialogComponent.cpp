void __fastcall WarBoardServantEquipSimpleDialogComponent___ctor(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UILabel_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UILabel_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42B21F3 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&SkillIconComponent___TypeInfo);
    sub_B52984(&UILabel___TypeInfo);
    byte_42B21F3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_B5299C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct SkillIconComponent_array *)sub_B5299C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.equipSkillSpriteList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B5299C(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.equipSkillNameLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_B5299C(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v25;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.equipSkillDetailLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42B21F1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42B21F1 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_42B21ED & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    byte_42B21ED = 1;
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
LABEL_9:
    sub_B52A5C(gameObject, v4);
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

  if ( (byte_42B21F0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    sub_B52984(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__);
    byte_42B21F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v3 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  __int64 v3; // x20
  __int64 v4; // x20
  WarBoardManager_o *v5; // x0

  if ( (byte_42B21EF & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_42B21EF = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_B52A5C(0LL, method);
  WarBoardManager__SetTouchBlock(v5, 0, 0, 0LL);
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
  unsigned __int64 v23; // x21
  Il2CppClass **v24; // x8
  Il2CppClass *v25; // x23
  System_Int32_array *BattleSkillIdList; // x22
  __int64 v27; // x9
  __int64 v28; // x8
  __int64 v29; // x9
  WarBoardServantEquipSimpleDialogComponent_o *v30; // x23
  unsigned __int64 v31; // x27
  signed __int64 v32; // x21
  struct UIPanel_array **p_basePanelList; // x19
  int32_t v34; // w25
  int32_t v35; // w24
  _QWORD *monitor; // x8
  UILabel_o *v37; // x26
  Il2CppObject *Name; // x0
  UnityEngine_Component_c *klass; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_c *v43; // x8
  __int64 v44; // x20
  __int64 v45; // x20
  System_Action_o *v46; // x20
  UnityEngine_Object_o *v47; // x19
  __int64 v48; // x0
  struct BattleUserServantData_array *v49; // [xsp+0h] [xbp-80h]
  unsigned __int64 v50; // [xsp+8h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UnityEngine_Component_o *v52; // [xsp+18h] [xbp-68h]
  WarEntity_o *v53; // [xsp+20h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_42B21EE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B21EE = 1;
  }
  v53 = 0LL;
  entity = 0LL;
  if ( !v4->fields.state )
  {
    skillBaseList = v4->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_116;
    v6 = 0LL;
    while ( 1 )
    {
      max_length = skillBaseList->max_length;
      if ( (__int64)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
        goto LABEL_117;
      v8 = (UnityEngine_Object_o *)skillBaseList->m_Items[v6];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.skillBaseList;
        if ( !v9 )
          goto LABEL_116;
        if ( v6 >= v9->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v9->m_Items[v6];
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_116;
      if ( v6 >= equipSkillSpriteList->max_length )
        goto LABEL_117;
      v11 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v6];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v4->fields.equipSkillSpriteList;
        if ( !v12 )
          goto LABEL_116;
        if ( v6 >= v12->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v12->m_Items[v6];
        if ( !this )
          goto LABEL_116;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0LL);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_116;
      if ( v6 >= equipSkillNameLabelList->max_length )
        goto LABEL_117;
      v14 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v6];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = v4->fields.equipSkillNameLabelList;
        if ( !v15 )
          goto LABEL_116;
        if ( v6 >= v15->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v15->m_Items[v6];
        if ( !this )
          goto LABEL_116;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_116;
      if ( v6 >= equipSkillDetailLabelList->max_length )
        goto LABEL_117;
      v17 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v6];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = v4->fields.equipSkillDetailLabelList;
        if ( !v18 )
          goto LABEL_116;
        if ( v6 >= v18->max_length )
          goto LABEL_117;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v18->m_Items[v6];
        if ( !this )
          goto LABEL_116;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v6;
      if ( !skillBaseList )
        goto LABEL_116;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_116;
      v20 = *(_QWORD *)&equipList->max_length;
      v52 = (UnityEngine_Component_o *)v4;
      if ( (int)v20 >= 1 )
      {
        v21 = (SkillLvMaster_o *)this;
        v22 = 0;
        v23 = 0LL;
        v49 = equipList;
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
              goto LABEL_116;
            v27 = *(_QWORD *)&v52[3].fields.m_CachedPtr;
            if ( !v27 )
              goto LABEL_116;
            v28 = *(_QWORD *)&BattleSkillIdList->max_length;
            v29 = *(_QWORD *)(v27 + 24);
            if ( (int)v28 <= (int)v29 )
              v29 = *(_QWORD *)&BattleSkillIdList->max_length;
            if ( (int)v29 >= 1 )
            {
              v50 = v23;
              if ( !(_DWORD)v28 )
                break;
              v30 = this;
              v31 = 0LL;
              v32 = (int)v29;
              p_basePanelList = &this->fields.basePanelList;
              while ( 1 )
              {
                if ( !v30 )
                  goto LABEL_116;
                if ( v31 >= LODWORD(v30->fields.basePanel) )
                  goto LABEL_117;
                v34 = BattleSkillIdList->m_Items[v31 + 1];
                if ( v34 >= 1 )
                {
                  if ( !v21 )
                    goto LABEL_116;
                  v35 = *((_DWORD *)p_basePanelList + v31);
                  this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(
                                                                          v21,
                                                                          &entity,
                                                                          v34,
                                                                          v35,
                                                                          0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_WarQuestSelectionMaster;
                    if ( !MasterData_WarQuestSelectionMaster )
                      goto LABEL_116;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            &v53,
                                                                            v34,
                                                                            (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      monitor = v52[4].monitor;
                      if ( !monitor )
                        goto LABEL_116;
                      if ( v31 >= *((unsigned int *)monitor + 6) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v53;
                      if ( !v53 )
                        goto LABEL_116;
                      v37 = (UILabel_o *)monitor[v31 + 4];
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v53, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                              (System_String_o *)StringLiteral_23732/*"{0}"*/,
                                                                              Name,
                                                                              0LL);
                      if ( !v37 )
                        goto LABEL_116;
                      UILabel__set_text(v37, (System_String_o *)this, 0LL);
                      klass = v52[4].klass;
                      if ( !klass )
                        goto LABEL_116;
                      if ( v31 >= LODWORD(klass->_1.namespaze) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v31);
                      if ( !this )
                        goto LABEL_116;
                      SkillIconComponent__Set((SkillIconComponent_o *)this, v34, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                      if ( !entity )
                        goto LABEL_116;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_26526320(
                                                                              entity,
                                                                              v35,
                                                                              0,
                                                                              0LL);
                      v40 = *(_QWORD *)&v52[4].fields.m_CachedPtr;
                      if ( !v40 )
                        goto LABEL_116;
                      if ( v31 >= *(unsigned int *)(v40 + 24) )
                        goto LABEL_117;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              *(UILabel_o **)(v40 + 8 * v31 + 32),
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0,
                                                                              0LL);
                      v41 = *(_QWORD *)&v52[3].fields.m_CachedPtr;
                      if ( !v41 )
                        goto LABEL_116;
                      if ( v31 >= *(unsigned int *)(v41 + 24) )
                        goto LABEL_117;
                      this = *(WarBoardServantEquipSimpleDialogComponent_o **)(v41 + 8 * v31 + 32);
                      if ( !this )
                        goto LABEL_116;
                      v22 = 1;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                    }
                  }
                }
                if ( (__int64)++v31 >= v32 )
                  break;
                if ( v31 >= BattleSkillIdList->max_length )
                  goto LABEL_117;
              }
              equipList = v49;
              v23 = v50;
            }
          }
          LODWORD(v20) = equipList->max_length;
          if ( (__int64)++v23 >= (int)v20 )
            goto LABEL_95;
        }
LABEL_117:
        v48 = sub_B52A88(this);
        sub_B52A28(v48, 0LL);
      }
      v22 = 0;
LABEL_95:
      if ( (v22 & 1) != 0 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0LL);
          v44 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
          if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
            sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
          v45 = **(_QWORD **)(v44 + 192);
          if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
            sub_AEB684(v45);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v45 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(v52, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              LODWORD(v52[5].monitor) = 1;
              v46 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
              System_Action___ctor(
                v46,
                (Il2CppObject *)v52,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)v52, v46, 0, 0LL);
              return;
            }
          }
        }
LABEL_116:
        sub_B52A5C(this, bsvtData);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v52, 0LL);
      v43 = UnityEngine_Object_TypeInfo;
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
      v43 = UnityEngine_Object_TypeInfo;
    }
    v47 = (UnityEngine_Object_o *)gameObject;
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v43);
    UnityEngine_Object__DestroyImmediate_35617168(v47, 0LL);
  }
}


System_String_o *__fastcall WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B21F2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15584/*"Window/CloseButton"*/);
    byte_42B21F2 = 1;
  }
  return (System_String_o *)StringLiteral_15584/*"Window/CloseButton"*/;
}