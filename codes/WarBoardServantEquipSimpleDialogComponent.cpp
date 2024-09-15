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
  int32_t v9; // w2
  int32_t v10; // w3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct UILabel_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A2BEF8 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&BaseDialog_TypeInfo, v3);
    sub_1B761C0(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1B761C0(&SkillIconComponent___TypeInfo, v5);
    sub_1B761C0(&UILabel___TypeInfo, v6);
    byte_4A2BEF8 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1B76268(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.skillBaseList = v8;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1B76268(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillSpriteList = v11;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillSpriteList, (int32_t)v11, v12, v13);
  v14 = (struct UILabel_array *)sub_1B76268(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillNameLabelList = v14;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillNameLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1B76268(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillDetailLabelList = v17;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillDetailLabelList, (int32_t)v17, v18, v19);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A2BEF6 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    byte_4A2BEF6 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B7641C(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69287596(gameObject, 0LL);
}


void __fastcall WarBoardServantEquipSimpleDialogComponent__Init(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UILabel_o *closeButtonLabel; // x20

  if ( (byte_4A2BEF2 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_3755/*"COMMON_CONFIRM_CLOSE"*/, v3);
    byte_4A2BEF2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
LABEL_8:
    sub_1B7641C(gameObject, v5);
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

  if ( (byte_4A2BEF5 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__, v3);
    sub_1B761C0(&Method_WarBoardServantEquipSimpleDialogComponent__OnClickClose_b__11_0__, v4);
    byte_4A2BEF5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 0;
    v5 = Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B761D8(Method_WarBoardServantEquipSimpleDialogComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4A2BEF4 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4A2BEF4 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BC809C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BC809C(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1B7641C(0LL, method);
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
  unsigned __int64 v34; // x29
  Il2CppClass **v35; // x8
  Il2CppClass *v36; // x23
  System_Int32_array *BattleSkillIdList; // x22
  UnityEngine_Component_c *klass; // x8
  __int64 v39; // x9
  int namespaze; // w8
  WarBoardServantEquipSimpleDialogComponent_o *v41; // x23
  unsigned __int64 v42; // x28
  struct UIPanel_o **p_basePanel; // x27
  __int64 v44; // x21
  int32_t v45; // w25
  int32_t v46; // w24
  __int64 v47; // x8
  UILabel_o *v48; // x26
  Il2CppObject *Name; // x0
  _QWORD *monitor; // x8
  UnityEngine_Component_c *v51; // x8
  UnityEngine_Component_c *v52; // x8
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_c *v56; // x8
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  System_Action_o *v61; // x20
  UnityEngine_Object_o *v62; // x19
  struct BattleUserServantData_array *v63; // [xsp+8h] [xbp-88h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Component_o *v65; // [xsp+18h] [xbp-78h]
  Il2CppObject *v66; // [xsp+20h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4A2BEF3 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, bsvtData);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B761C0(&Method_WarBoardServantEquipSimpleDialogComponent_SetUp__, v12);
    sub_1B761C0(&Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__, v13);
    sub_1B761C0(&StringLiteral_24970/*"{0}"*/, v14);
    this = (WarBoardServantEquipSimpleDialogComponent_o *)sub_1B761C0(&StringLiteral_1/*""*/, v15);
    byte_4A2BEF3 = 1;
  }
  v66 = 0LL;
  entity = 0LL;
  if ( !v4->fields.state )
  {
    skillBaseList = v4->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_106;
    v17 = 0LL;
    while ( 1 )
    {
      max_length = skillBaseList->max_length;
      if ( (__int64)v17 >= (int)max_length )
        break;
      if ( v17 >= max_length )
        goto LABEL_107;
      v19 = (UnityEngine_Object_o *)skillBaseList->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v20 = v4->fields.skillBaseList;
        if ( !v20 )
          goto LABEL_106;
        if ( v17 >= v20->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v20->m_Items[v17];
        if ( !this )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      equipSkillSpriteList = v4->fields.equipSkillSpriteList;
      if ( !equipSkillSpriteList )
        goto LABEL_106;
      if ( v17 >= equipSkillSpriteList->max_length )
        goto LABEL_107;
      v22 = (UnityEngine_Object_o *)equipSkillSpriteList->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v23 = v4->fields.equipSkillSpriteList;
        if ( !v23 )
          goto LABEL_106;
        if ( v17 >= v23->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v23->m_Items[v17];
        if ( !this )
          goto LABEL_106;
        SkillIconComponent__Clear((SkillIconComponent_o *)this, 0LL);
      }
      equipSkillNameLabelList = v4->fields.equipSkillNameLabelList;
      if ( !equipSkillNameLabelList )
        goto LABEL_106;
      if ( v17 >= equipSkillNameLabelList->max_length )
        goto LABEL_107;
      v25 = (UnityEngine_Object_o *)equipSkillNameLabelList->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v26 = v4->fields.equipSkillNameLabelList;
        if ( !v26 )
          goto LABEL_106;
        if ( v17 >= v26->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v26->m_Items[v17];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      equipSkillDetailLabelList = v4->fields.equipSkillDetailLabelList;
      if ( !equipSkillDetailLabelList )
        goto LABEL_106;
      if ( v17 >= equipSkillDetailLabelList->max_length )
        goto LABEL_107;
      v28 = (UnityEngine_Object_o *)equipSkillDetailLabelList->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = v4->fields.equipSkillDetailLabelList;
        if ( !v29 )
          goto LABEL_106;
        if ( v17 >= v29->max_length )
          goto LABEL_107;
        this = (WarBoardServantEquipSimpleDialogComponent_o *)v29->m_Items[v17];
        if ( !this )
          goto LABEL_106;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      skillBaseList = v4->fields.skillBaseList;
      ++v17;
      if ( !skillBaseList )
        goto LABEL_106;
    }
    if ( bsvtData )
    {
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
      this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      this = (WarBoardServantEquipSimpleDialogComponent_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      equipList = bsvtData->fields.equipList;
      if ( !equipList )
        goto LABEL_106;
      v31 = *(_QWORD *)&equipList->max_length;
      v65 = (UnityEngine_Component_o *)v4;
      if ( (int)v31 >= 1 )
      {
        v32 = (SkillLvMaster_o *)this;
        v33 = 0;
        v34 = 0LL;
        v63 = equipList;
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
              goto LABEL_106;
            klass = v65[4].klass;
            if ( !klass )
              goto LABEL_106;
            v39 = *(_QWORD *)&BattleSkillIdList->max_length;
            namespaze = (int)klass->_1.namespaze;
            if ( (int)v39 <= namespaze )
              namespaze = *(_QWORD *)&BattleSkillIdList->max_length;
            if ( namespaze >= 1 )
            {
              if ( !(_DWORD)v39 )
                break;
              v41 = this;
              v42 = 0LL;
              p_basePanel = &this->fields.basePanel;
              v44 = namespaze - 1LL;
              while ( 1 )
              {
                if ( !v41 )
                  goto LABEL_106;
                if ( v42 >= LODWORD(v41->fields.m_CancellationTokenSource) )
                  goto LABEL_107;
                v45 = BattleSkillIdList->m_Items[v42 + 1];
                if ( v45 >= 1 )
                {
                  if ( !v32 )
                    goto LABEL_106;
                  v46 = *((_DWORD *)p_basePanel + v42);
                  this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvMaster__TryGetEntity(
                                                                          v32,
                                                                          &entity,
                                                                          v45,
                                                                          v46,
                                                                          0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)MasterData_object;
                    if ( !MasterData_object )
                      goto LABEL_106;
                    this = (WarBoardServantEquipSimpleDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                            &v66,
                                                                            v45,
                                                                            (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v47 = *(_QWORD *)&v65[4].fields.m_CachedPtr;
                      if ( !v47 )
                        goto LABEL_106;
                      if ( v42 >= *(unsigned int *)(v47 + 24) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)v66;
                      if ( !v66 )
                        goto LABEL_106;
                      v48 = *(UILabel_o **)(v47 + 8 * v42 + 32);
                      Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v66, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)System_String__Format(
                                                                              (System_String_o *)StringLiteral_24970/*"{0}"*/,
                                                                              Name,
                                                                              0LL);
                      if ( !v48 )
                        goto LABEL_106;
                      UILabel__set_text(v48, (System_String_o *)this, 0LL);
                      monitor = v65[4].monitor;
                      if ( !monitor )
                        goto LABEL_106;
                      if ( v42 >= *((unsigned int *)monitor + 6) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)monitor[v42 + 4];
                      if ( !this )
                        goto LABEL_106;
                      SkillIconComponent__Set((SkillIconComponent_o *)this, v45, 0LL);
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)entity;
                      if ( !entity )
                        goto LABEL_106;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)SkillLvEntity__getDetail_39665812(
                                                                              entity,
                                                                              v46,
                                                                              0,
                                                                              0LL);
                      v51 = v65[5].klass;
                      if ( !v51 )
                        goto LABEL_106;
                      if ( v42 >= LODWORD(v51->_1.namespaze) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)WrapControlText__textAdjust(
                                                                              *((UILabel_o **)&v51->_1.byval_arg.data
                                                                              + v42),
                                                                              (System_String_o *)this,
                                                                              22,
                                                                              0,
                                                                              0,
                                                                              0LL);
                      v52 = v65[4].klass;
                      if ( !v52 )
                        goto LABEL_106;
                      if ( v42 >= LODWORD(v52->_1.namespaze) )
                        goto LABEL_107;
                      this = (WarBoardServantEquipSimpleDialogComponent_o *)*((_QWORD *)&v52->_1.byval_arg.data + v42);
                      if ( !this )
                        goto LABEL_106;
                      v33 = 1;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                    }
                  }
                }
                if ( v44 == v42 )
                  break;
                if ( ++v42 >= BattleSkillIdList->max_length )
                  goto LABEL_107;
              }
              equipList = v63;
            }
          }
          LODWORD(v31) = equipList->max_length;
          if ( (__int64)++v34 >= (int)v31 )
            goto LABEL_90;
        }
LABEL_107:
        sub_1B76424(this, bsvtData);
      }
      v33 = 0;
LABEL_90:
      v57 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1B761D8(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v58 = (System_Reflection_MethodBase_o *)sub_1B761A4(v57, v57[4]);
      if ( (v33 & 1) != 0 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v58, 0, 0LL);
        this = (WarBoardServantEquipSimpleDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)this, 0, 0, 0LL);
          v59 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
            v59 = sub_1BC809C(v59);
          v60 = *(_QWORD *)(*(_QWORD *)(v59 + 192) + 16LL);
          if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
            v60 = sub_1BC809C(v60);
          this = **(WarBoardServantEquipSimpleDialogComponent_o ***)(v60 + 184);
          if ( this )
          {
            WarBoardManager__SetTouchBlock((WarBoardManager_o *)this, 1, 0, 0LL);
            this = (WarBoardServantEquipSimpleDialogComponent_o *)UnityEngine_Component__get_gameObject(v65, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v65[5].fields.m_CachedPtr = 1;
              v61 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
              System_Action___ctor(
                v61,
                (Il2CppObject *)v65,
                Method_WarBoardServantEquipSimpleDialogComponent__SetUp_b__9_0__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)v65, v61, 0, 0LL);
              return;
            }
          }
        }
LABEL_106:
        sub_1B7641C(this, bsvtData);
      }
      OverwriteAssetSoundName__PlaySystemSe(v58, 2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v65, 0LL);
      v56 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v53 = Method_WarBoardServantEquipSimpleDialogComponent_SetUp__;
      if ( (*((_BYTE *)Method_WarBoardServantEquipSimpleDialogComponent_SetUp__ + 83) & 2) != 0 )
        v53 = (_QWORD *)sub_1B761D8(Method_WarBoardServantEquipSimpleDialogComponent_SetUp__);
      v54 = (System_Reflection_MethodBase_o *)sub_1B761A4(v53, v53[4]);
      OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      v56 = UnityEngine_Object_TypeInfo;
    }
    v62 = (UnityEngine_Object_o *)gameObject;
    if ( !v56->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v56);
    UnityEngine_Object__DestroyImmediate_69287596(v62, 0LL);
  }
}


System_String_o *__fastcall WarBoardServantEquipSimpleDialogComponent__get_closeBtnPath(
        WarBoardServantEquipSimpleDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2BEF7 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_15637/*"Window/CloseButton"*/, method);
    byte_4A2BEF7 = 1;
  }
  return (System_String_o *)StringLiteral_15637/*"Window/CloseButton"*/;
}