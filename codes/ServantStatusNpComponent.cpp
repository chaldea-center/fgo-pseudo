void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantStatusNpComponent_c *v2; // x8

  if ( (byte_418A80B & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusNpComponent_TypeInfo, v1);
    byte_418A80B = 1;
  }
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_MAX_HEIGHT = 500;
  v2 = ServantStatusNpComponent_TypeInfo;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_DEFAULT_HEIGHT = 57;
  v2->static_fields->DETAIL_LINE_HEIGHT = 19;
  v2->static_fields->MULTI_NP_POS_Y = -50.0;
  v2->static_fields->MASK_BASE_POS_Y = -11.0;
  v2->static_fields->MASK_DEFAULT_HEIGHT = 252;
  v2->static_fields->COND_TITLE_MAX_WIDTH = 540;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A80A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, method);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_418A80A = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  this->fields.costumeIdHash = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusNpComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v11; // w21
  int32_t commandLimitCountAdjust; // w21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x20

  v4 = this;
  if ( (byte_418A809 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    this = (ServantStatusNpComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418A809 = 1;
  }
  if ( !item )
    goto LABEL_24;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0LL);
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v11 = LimitCountByImageLimitCostumeIn;
  if ( (commandLimitCountFix & 0x80000000) != 0 || LimitCountByImageLimitCostumeIn == commandLimitCountFix )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_24;
    commandLimitCountFix = v11;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v11,
            (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = v4->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
  if ( (commandLimitCountAdjust & 0x80000000) != 0 || commandLimitCountFix <= commandLimitCountAdjust )
  {
    commandLimitCountAdjust = commandLimitCountFix;
  }
  else if ( commandLimitCountFix >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_24;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           commandLimitCountFix,
           (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)this,
                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_24:
    sub_B2C434(this, item);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           MasterData_WarQuestSelectionMaster,
           (int32_t)this,
           commandLimitCountAdjust,
           0LL);
}


void __fastcall ServantStatusNpComponent__ModifyCommandCard(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
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
  DataManager_o *CommandLimitCount; // x0
  __int64 v16; // x1
  struct BattleCommandData_o *commandCardData; // x8
  struct BattleCommandData_o *v18; // x23
  ServantLimitImageMaster_o *v19; // x21
  int32_t SvtId; // w0
  int32_t dispLimitCount; // w22
  int32_t v22; // w20
  struct UnityEngine_GameObject_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v24; // x21
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  DataManager_o *v29; // x23
  System_Int32_array **gameObject; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  int32_t cardType; // w25
  int32_t v39; // w24
  int32_t v40; // w26
  BattleCommandData_o *v41; // x27
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct BattleCommandData_o *v48; // x25
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v50; // w0
  int32_t v51; // w24
  int32_t v52; // w20
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct BattleCommandData_o *v54; // x9
  struct BattleCommandComponent_o **p_commandCardComponent; // x19
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A808 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v8);
    sub_B2C35C(&NGUITools_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_15014/*"Unlit/Transparent Colored"*/, v13);
    sub_B2C35C(&StringLiteral_4162/*"CommandCard"*/, v14);
    byte_418A808 = 1;
  }
  if ( this->fields.tdEntity )
  {
    if ( this->fields.commandCardData )
    {
      CommandLimitCount = (DataManager_o *)ServantStatusNpComponent__GetCommandLimitCount(this, item, method);
      commandCardData = this->fields.commandCardData;
      if ( commandCardData )
      {
        commandCardData->fields.svtlimit = (int)CommandLimitCount;
        v18 = this->fields.commandCardData;
        CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( CommandLimitCount )
        {
          CommandLimitCount = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 CommandLimitCount,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( item )
          {
            v19 = (ServantLimitImageMaster_o *)CommandLimitCount;
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            dispLimitCount = item->fields.dispLimitCount;
            v22 = SvtId;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                   dispLimitCount,
                                                   0LL);
            if ( v19 )
            {
              CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v19,
                                                     v22,
                                                     (int32_t)CommandLimitCount,
                                                     0LL);
              if ( v18 )
              {
                v18->fields._loadsvtLimit = (int)CommandLimitCount;
                CommandLimitCount = (DataManager_o *)this->fields.commandCardComponent;
                if ( CommandLimitCount )
                {
                  BattleCommandComponent__setData(
                    (BattleCommandComponent_o *)CommandLimitCount,
                    this->fields.commandCardData,
                    0LL,
                    0,
                    1,
                    0,
                    0LL);
                  CommandLimitCount = (DataManager_o *)this->fields.commandCardComponent;
                  if ( CommandLimitCount )
                  {
                    BattleCommandComponent__updateView(
                      (BattleCommandComponent_o *)CommandLimitCount,
                      1,
                      0,
                      1,
                      0,
                      this->fields.isCharaHide,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_39:
      sub_B2C434(CommandLimitCount, v16);
    }
    commandCardPrefab = this->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardPrefab,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v24 = (UnityEngine_GameObject_o *)CommandLimitCount;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
    if ( !CommandLimitCount )
      goto LABEL_39;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)CommandLimitCount, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v24, (System_String_o *)StringLiteral_4162/*"CommandCard"*/, 0LL);
    CommandLimitCount = (DataManager_o *)this->fields.commandCardBase;
    if ( !CommandLimitCount )
      goto LABEL_39;
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)CommandLimitCount,
                                           0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)CommandLimitCount, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v65.fields.x = x;
    v65.fields.y = y;
    v65.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v65, 0LL);
    UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
      v24,
      (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v24,
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v29 = CommandLimitCount;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)CommandLimitCount, 110, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v29[2].fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)gameObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29[2].fields.masterLoadThreads,
      gameObject,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    CommandLimitCount = (DataManager_o *)ServantStatusNpComponent__GetCommandLimitCount(this, item, v37);
    if ( !item )
      goto LABEL_39;
    cardType = this->fields.cardType;
    v39 = (int)CommandLimitCount;
    v40 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v41 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_18363144(v41, cardType, v40, v39, 0, 0LL);
    this->fields.commandCardData = v41;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandCardData,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v48 = this->fields.commandCardData;
    CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CommandLimitCount )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        CommandLimitCount,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v50 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v51 = item->fields.dispLimitCount;
    v52 = v50;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v51, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           MasterData_WarQuestSelectionMaster,
                                           v52,
                                           (int32_t)CommandLimitCount,
                                           0LL);
    if ( !v48 )
      goto LABEL_39;
    v48->fields._loadsvtLimit = (int)CommandLimitCount;
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_39;
    v54 = this->fields.commandCardData;
    if ( !v54 )
      goto LABEL_39;
    v54->fields.treasureDvc = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v29, this->fields.commandCardData, 0LL, 0, 1, 0, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v29, (System_String_o *)StringLiteral_15014/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v29, 1, 0, 1, 0, this->fields.isCharaHide, 0LL);
    this->fields.commandCardComponent = (struct BattleCommandComponent_o *)v29;
    p_commandCardComponent = &this->fields.commandCardComponent;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_commandCardComponent,
      (System_Int32_array **)v29,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    CommandLimitCount = (DataManager_o *)*(p_commandCardComponent - 11);
    if ( !CommandLimitCount )
      goto LABEL_39;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(v24, layer, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusNpComponent__Set(
        ServantStatusNpComponent_o *this,
        int32_t idx,
        TreasureDvcInfo_o *tdInfo,
        ServantStatusListViewItem_o *item,
        int32_t tdId,
        bool multiFlg,
        int32_t condLimitCount,
        System_String_o *title,
        System_String_o *closedMessage,
        int32_t isCharaHide,
        const MethodInfo *method)
{
  int32_t v16; // w24
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v35; // x19
  int max_length; // w9
  __int64 v37; // x19
  __int64 v38; // x19
  TreasureDvcMaster_o *v39; // x19
  struct TreasureDvcEntity_o *v40; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x19
  __int64 v49; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t dispLimitCount; // w24
  ServantLimitAddMaster_o *v52; // x19
  int32_t LimitCountByImageLimitCostumeIn; // w24
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x25
  int32_t ServantImageLimitSealAfter; // w24
  UILabel_o *rubyLabel; // x19
  struct UILabel_o *v57; // x19
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v60; // x8
  struct UILabel_o *npRankLabel; // x19
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v63; // x8
  struct UILabel_o *npTypeLabel; // x19
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v66; // x8
  UILabel_o *npLevelLabel; // x24
  System_String_o *v68; // x25
  System_String_o *v69; // x0
  UILabel_o *maxGuageLabel; // x24
  System_String_o *v71; // x25
  Il2CppObject *v72; // x0
  UIWidget_o *explanationLabel; // x24
  int32_t *p_monitor; // x8
  __int64 v75; // x24
  __int64 v76; // x24
  TreasureDvcLvEntity_o *v77; // x0
  System_String_o *Detail; // x19
  ServantStatusNpComponent_c *v79; // x0
  UILabel_o *v80; // x24
  int32_t v81; // w28
  int32_t SvtId; // w0
  int32_t *p_cardId; // x8
  int32_t v84; // w9
  struct UILabel_o *v85; // x8
  int32_t mHeight; // w19
  int32_t monitor_high; // w8
  struct UILabel_o *v88; // x9
  int32_t v89; // w19
  int32_t v90; // w28
  int32_t v91; // w27
  UILabel_o *condLabel; // x19
  float MULTI_NP_POS_Y; // s0
  double v94; // d0
  int32_t v95; // w19
  __int64 v96; // x24
  __int64 v97; // x24
  ServantTreasureDeviceReleaseMaster_o *v98; // x24
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_o *v106; // x1
  int v107; // w19
  int v108; // w8
  struct UISprite_array *v109; // x8
  __int64 v110; // x21
  int v111; // w22
  int v112; // w9
  UISprite_o *v113; // x19
  System_String_o *v114; // x0
  __int64 v115; // x0
  int32_t v116; // [xsp+0h] [xbp-80h]
  int32_t v117; // [xsp+4h] [xbp-7Ch]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  int v119; // [xsp+1Ch] [xbp-64h]
  int v121; // [xsp+24h] [xbp-5Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v16 = idx;
  if ( (byte_418A807 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&idx);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v21);
    sub_B2C35C(&DataManager_TypeInfo, v22);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v24);
    sub_B2C35C(&LocalizationManager_TypeInfo, v25);
    sub_B2C35C(&ServantStatusNpComponent_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_B2C35C(&StringLiteral_19538/*"img_npgage_"*/, v28);
    sub_B2C35C(&StringLiteral_11990/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, v29);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v30);
    sub_B2C35C(&StringLiteral_19539/*"img_npgage_bg"*/, v31);
    sub_B2C35C(&StringLiteral_1/*""*/, v32);
    byte_418A807 = 1;
  }
  entity = 0LL;
  v121 = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_16;
  value = title;
  v119 = v16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v35 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v35 >= max_length )
      break;
    if ( (unsigned int)v35 >= max_length )
    {
LABEL_166:
      v115 = sub_B2C460(nameLabel);
      sub_B2C400(v115, 0LL);
    }
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v35];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_19539/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v35;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  if ( tdId < 1 )
    return;
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v38 = **(_QWORD **)(v37 + 192);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AC505C(v38);
  nameLabel = **(UILabel_o ***)(v38 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !item )
    goto LABEL_16;
  v39 = (TreasureDvcMaster_o *)nameLabel;
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v39 )
    goto LABEL_16;
  v40 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v39, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v40;
  p_tdEntity = &this->fields.tdEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdEntity,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !this->fields.tdEntity )
    return;
  v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v49 = **(_QWORD **)(v48 + 192);
  if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
    sub_AC505C(v49);
  nameLabel = **(UILabel_o ***)(v49 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)nameLabel,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  dispLimitCount = item->fields.dispLimitCount;
  v52 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  v117 = condLimitCount;
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(dispLimitCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v52 )
    goto LABEL_16;
  ServantLimitAddMaster__TryGetEntity(v52, &entity, (int32_t)nameLabel, ServantImageLimitSealAfter, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0LL);
    if ( !rubyLabel )
      goto LABEL_16;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0LL);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    v57 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v57 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v57;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_16;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0LL);
    v60 = this->fields.tdEntity;
    if ( !v60 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v60->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDRank(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0LL);
    if ( !npRankLabel )
      goto LABEL_16;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v63 = this->fields.tdEntity;
    if ( !v63 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v63->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDTypeText(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    npTypeLabel = this->fields.npTypeLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0LL);
    if ( !npTypeLabel )
      goto LABEL_16;
    typeText = (System_String_o *)nameLabel;
    nameLabel = npTypeLabel;
  }
  else
  {
    v66 = this->fields.tdEntity;
    if ( !v66 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v66->fields.typeText;
  }
  UILabel__set_text(nameLabel, typeText, 0LL);
  if ( !tdInfo )
    goto LABEL_16;
  npLevelLabel = this->fields.npLevelLabel;
  if ( tdInfo->fields.lv <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  else
  {
    v68 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v69 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44307816(v68, (System_String_o *)StringLiteral_872/*"/"*/, v69, 0LL);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11990/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v121 = 100 * tdInfo->fields.guageCount;
  v72 = (Il2CppObject *)System_Int32__ToString((int32_t)&v121, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v71, v72, 0LL);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0LL);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( multiFlg )
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onPostFill->monitor + 1;
    if ( !explanationLabel )
      goto LABEL_16;
  }
  else
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onPostFill->monitor;
    if ( !explanationLabel )
      goto LABEL_16;
  }
  UIWidget__set_height(explanationLabel, *p_monitor, 0LL);
  v75 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v75 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v76 = **(_QWORD **)(v75 + 192);
  if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
    sub_AC505C(v76);
  nameLabel = **(UILabel_o ***)(v76 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v77 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)nameLabel,
          (*p_tdEntity)->fields.id,
          tdInfo->fields.lv,
          0LL);
  if ( v77 )
    Detail = TreasureDvcLvEntity__getDetail(v77, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v79 = ServantStatusNpComponent_TypeInfo;
  v80 = this->fields.explanationLabel;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v79 = ServantStatusNpComponent_TypeInfo;
  }
  v81 = WrapControlText__textBBCodeAdjust(
          v80,
          Detail,
          v79->static_fields->DETAIL_FONT_SIZE,
          v79->static_fields->DETAIL_FONT_SIZE,
          v79->static_fields->DETAIL_MAX_HEIGHT,
          0LL);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(SvtId, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = (int32_t *)&nameLabel->fields.mGo;
  v84 = *p_cardId;
  v85 = this->fields.explanationLabel;
  this->fields.cardType = v84;
  if ( !v85 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v85->fields.mHeight;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  v116 = v81;
  monitor_high = HIDWORD(nameLabel->fields.onPostFill->monitor);
  if ( mHeight <= monitor_high )
  {
    v90 = isCharaHide;
    v91 = 0;
  }
  else
  {
    v88 = this->fields.explanationLabel;
    if ( !v88 )
      goto LABEL_16;
    v89 = v88->fields.mHeight;
    v90 = isCharaHide;
    if ( (HIBYTE(nameLabel->fields.mLocalToPanel.fields.m32) & 4) != 0 && !LODWORD(nameLabel->fields.panel) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v91 = v89 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B2C434(nameLabel, *(_QWORD *)&idx);
  }
  if ( multiFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, value, 0LL);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    }
    if ( !condLabel )
      goto LABEL_16;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0LL);
    MULTI_NP_POS_Y = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( MULTI_NP_POS_Y == INFINITY )
      v94 = -MULTI_NP_POS_Y;
    else
      v94 = MULTI_NP_POS_Y;
    v95 = UnityEngine_Mathf__Abs_40694508((int)v94, 0LL);
    if ( v119 < 1 )
      this->fields.commandLimitCountAdjust = v117 - 1;
    else
      this->fields.commandLimitCountFix = v117;
    v96 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v96 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v97 = **(_QWORD **)(v96 + 192);
    if ( (*(_BYTE *)(v97 + 306) & 1) == 0 )
      sub_AC505C(v97);
    nameLabel = **(UILabel_o ***)(v97 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v98 = (ServantTreasureDeviceReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)nameLabel,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v98 )
      goto LABEL_16;
    v91 += v95;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v98, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
      (System_Int32_array **)CorrespondsCostume,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    if ( !nameLabel )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_2D85698 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( tdInfo->fields.id == tdId )
  {
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v106 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    if ( !this->fields.maskBase )
      goto LABEL_16;
    v107 = HIDWORD(nameLabel->fields.onPostFill->monitor) * v116;
    UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
    v108 = v107 >= 0 ? v107 : v107 + 1;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.maskBase,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v108 >> 1),
      0LL);
    nameLabel = (UILabel_o *)this->fields.maskSprite;
    if ( !nameLabel )
      goto LABEL_16;
    UIWidget__set_height(
      (UIWidget_o *)nameLabel,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v107,
      0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v106 = closedMessage;
  }
  UILabel__set_text(nameLabel, v106, 0LL);
  v109 = this->fields.guageSpriteList;
  this->fields.isCharaHide = v90 == 1;
  if ( !v109 )
    goto LABEL_16;
  v110 = 0LL;
  v111 = 100;
  while ( 1 )
  {
    v112 = v109->max_length;
    if ( (int)v110 >= v112 || (int)v110 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v110 >= v112 )
      goto LABEL_166;
    v113 = v109->m_Items[v110];
    v121 = v111;
    v114 = System_Int32__ToString((int32_t)&v121, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_19538/*"img_npgage_"*/, v114, 0LL);
    if ( v113 )
    {
      UISprite__set_spriteName(v113, (System_String_o *)nameLabel, 0LL);
      v109 = this->fields.guageSpriteList;
      ++v110;
      v111 += 100;
      if ( v109 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v91;
}


int32_t __fastcall ServantStatusNpComponent__get_Adjust(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  return this->fields._Adjust_k__BackingField;
}


void __fastcall ServantStatusNpComponent__set_Adjust(
        ServantStatusNpComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Adjust_k__BackingField = value;
}