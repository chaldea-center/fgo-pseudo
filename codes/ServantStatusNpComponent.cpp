void ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4D2E5A6 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusNpComponent_TypeInfo);
    byte_4D2E5A6 = 1;
  }
  static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x3900000012LL;
  static_fields->DETAIL_LINE_HEIGHT = 19;
  static_fields->MaskAdjustPosY = 49.0;
  *(_QWORD *)&static_fields->MULTI_NP_POS_Y = 0xC1300000C2480000LL;
  *(_QWORD *)&static_fields->MASK_DEFAULT_HEIGHT = 0xFFFFFFFA000000FCLL;
  static_fields->COND_TITLE_MAX_WIDTH = 540;
}


void ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E5A5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D2E5A5 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.fixedCardLimitCountFlag = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusNpComponent_o *v4; // x20
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v8; // w21
  int32_t commandLimitCountAdjust; // w21
  Il2CppObject *MasterData_object; // x20

  v4 = this;
  if ( (byte_4D2E5A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2E5A4 = 1;
  }
  if ( !item )
    goto LABEL_25;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(item, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0);
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v8 = LimitCountByImageLimitCostumeIn;
  if ( commandLimitCountFix < 0
    || LimitCountByImageLimitCostumeIn == commandLimitCountFix
    || !v4->fields.fixedCardLimitCountFlag )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_25;
    commandLimitCountFix = v8;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v8,
            (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = v4->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
  if ( commandLimitCountAdjust < 0
    || commandLimitCountFix <= commandLimitCountAdjust
    || !v4->fields.fixedCardLimitCountFlag )
  {
    commandLimitCountAdjust = commandLimitCountFix;
  }
  else if ( commandLimitCountFix >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_25;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           commandLimitCountFix,
           (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0),
        !MasterData_object) )
  {
LABEL_25:
    sub_1C93D2C(this, item);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           (int32_t)this,
           commandLimitCountAdjust,
           0);
}


void ServantStatusNpComponent__ModifyCommandCard(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x21
  ServantStatusNpComponent_o *v4; // x19
  int32_t SvtId; // w20
  const MethodInfo *v6; // x2
  int32_t CommandLimitCount; // w22
  struct BattleCommandData_o *commandCardData; // x23
  int32_t v9; // w21
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *commandCardPrefab; // x20
  ServantStatusNpComponent_o *v12; // x20
  UnityEngine_Transform_o *transform; // x23
  ServantStatusNpComponent_o *v14; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w24
  const MethodInfo *v23; // x2
  int32_t v24; // w25
  int32_t ConvertOverwriteDispImageLimitCount; // w0
  int32_t cardType; // w26
  int32_t v27; // w21
  BattleCommandData_o *v28; // x27
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct BattleCommandData_o *v35; // x25
  Il2CppObject *v36; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  GrandQuestFolderBoardItem_o *p_commandCardComponent; // x19
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  v3 = item;
  v4 = this;
  if ( (byte_4D2E5A3 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_15233/*"Unlit/Transparent Colored"*/);
    this = (ServantStatusNpComponent_o *)sub_1C93AD4(&StringLiteral_4602/*"CommandCard"*/);
    byte_4D2E5A3 = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( v3 )
      {
        SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0);
        CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v6);
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v3, 0);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = CommandLimitCount;
          v9 = (int)this;
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0);
            if ( MasterData_object )
            {
              commandCardData->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                        (ServantLimitImageMaster_o *)MasterData_object,
                                                        SvtId,
                                                        (int32_t)this,
                                                        0);
              this = (ServantStatusNpComponent_o *)v4->fields.commandCardComponent;
              if ( this )
              {
                BattleCommandComponent__setData(
                  (BattleCommandComponent_o *)this,
                  v4->fields.commandCardData,
                  0,
                  0,
                  1,
                  0,
                  1,
                  0);
                this = (ServantStatusNpComponent_o *)v4->fields.commandCardComponent;
                if ( this )
                {
                  BattleCommandComponent__updateView(
                    (BattleCommandComponent_o *)this,
                    1,
                    0,
                    1,
                    0,
                    v4->fields.isCharaHide,
                    0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_38:
      sub_1C93D2C(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_38;
    v12 = this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
    if ( !this )
      goto LABEL_38;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)StringLiteral_4602/*"CommandCard"*/, 0);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !transform )
      goto LABEL_38;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_4D2A13F )
    {
      sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
      byte_4D2A13F = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0);
    UnityEngine_Transform__set_localScale(transform, localScale, 0);
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)v12,
      (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v12,
                                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_38;
    v14 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    v14[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v14[1].fields.explanationLabel,
      (int32_t)gameObject,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !v3 )
      goto LABEL_38;
    v22 = ServantStatusListViewItem__GetSvtId(v3, 1, 0);
    v24 = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v23);
    ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v3, 0);
    cardType = v4->fields.cardType;
    v27 = ConvertOverwriteDispImageLimitCount;
    v28 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_47371016(v28, cardType, v22, v24, 0, -1, 0);
    v4->fields.commandCardData = v28;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.commandCardData, (int32_t)v28, v29, v30, v31, v32, v33, v34);
    v35 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_38;
    v36 = DataManager__GetMasterData_object_(
            (DataManager_o *)this,
            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v27, 0);
    if ( !v36 )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           (ServantLimitImageMaster_o *)v36,
                                           v22,
                                           (int32_t)this,
                                           0);
    if ( !v35 )
      goto LABEL_38;
    v35->fields._loadsvtLimit = (int)this;
    tdEntity = v4->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_38;
    item = (ServantStatusListViewItem_o *)v4->fields.commandCardData;
    if ( !item )
      goto LABEL_38;
    LODWORD(item->fields.warBoardPartyItem) = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v14, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v14, (System_String_o *)StringLiteral_15233/*"Unlit/Transparent Colored"*/, 0);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v14, 1, 0, 1, 0, v4->fields.isCharaHide, 0);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v14;
    p_commandCardComponent = (GrandQuestFolderBoardItem_o *)&v4->fields.commandCardComponent;
    sub_1C93A78(p_commandCardComponent, (int32_t)v14, v39, v40, v41, v42, v43, v44);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.sortValue2;
    if ( !this )
      goto LABEL_38;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v12, layer, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusNpComponent__Set(
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
        int32_t dispMaskTreasureDevice,
        int32_t fixedCardLimitCount,
        const MethodInfo *method)
{
  int32_t v18; // w23
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v22; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  long double v25; // q0
  __int64 v26; // x8
  __int64 v27; // x0
  TreasureDvcMaster_o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  struct TreasureDvcEntity_o *v31; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x29
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  long double v39; // q0
  __int64 v40; // x0
  __int64 v41; // x0
  Il2CppObject *MasterData_object; // x23
  int32_t ConvertOverwriteDispImageLimitCount; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w24
  Il2CppObject *Master_object; // x0
  __int64 v46; // x20
  __int64 v47; // x26
  ServantLimitImageMaster_o *v48; // x25
  int32_t ServantImageLimitSealAfter; // w24
  Il2CppObject *v50; // x23
  UILabel_o *rubyLabel; // x24
  struct UILabel_o *v52; // x24
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v55; // x8
  struct UILabel_o *npRankLabel; // x24
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v58; // x8
  UILabel_o *npTypeLabel; // x23
  System_String_o *typeText; // x1
  int TempOverwriteTreasureDeviceLv_k__BackingField; // w23
  int32_t v62; // w8
  bool v63; // w28
  int32_t *p_guageCount; // x9
  int v65; // w25
  UILabel_o *npLevelLabel; // x23
  System_String_o *v67; // x20
  System_String_o *v68; // x0
  UILabel_o *maxGuageLabel; // x23
  System_String_o *v70; // x20
  Il2CppObject *v71; // x0
  UIWidget_o *explanationLabel; // x23
  __int64 v73; // x9
  long double v74; // q0
  __int64 v75; // x0
  __int64 v76; // x0
  TreasureDvcLvEntity_o *v77; // x0
  System_String_o *Detail; // x23
  ServantStatusNpComponent_c *v79; // x0
  UILabel_o *v80; // x24
  int32_t v81; // w0
  __int64 v82; // x20
  __int64 v83; // x23
  int32_t v84; // w29
  int32_t v85; // w0
  int32_t *p_cardId; // x8
  int32_t v87; // w9
  struct UILabel_o *v88; // x8
  int32_t mHeight; // w20
  int32_t monitor; // w8
  struct UILabel_o *v91; // x9
  int32_t v92; // w20
  int32_t v93; // w22
  UILabel_o *condLabel; // x23
  long double inited; // q0
  int v96; // w20
  int v97; // w28
  int32_t v98; // w27
  __int64 v99; // x0
  __int64 v100; // x0
  Il2CppObject *v101; // x0
  __int64 v102; // x20
  __int64 v103; // x24
  ServantTreasureDeviceReleaseMaster_o *v104; // x23
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  struct UnityEngine_GameObject_o **p_maskBase; // x20
  ServantStatusNpComponent_c *v113; // x0
  uint32_t cctor_finished; // w8
  struct ServantStatusNpComponent_StaticFields *static_fields; // x9
  UnityEngine_GameObject_o *v116; // x21
  int32_t DETAIL_LINE_HEIGHT; // w22
  float MASK_BASE_POS_Y; // s0
  int v119; // w20
  int v120; // w8
  int32_t v121; // w1
  int v122; // w8
  struct UISprite_array *v123; // x8
  __int64 v124; // x21
  int32_t v125; // w22
  int v126; // w9
  UISprite_o *v127; // x20
  System_String_o *v128; // x0
  TreasureDvcInfo_o *v129; // [xsp+8h] [xbp-A8h]
  int32_t dvcId; // [xsp+10h] [xbp-A0h]
  int32_t v131; // [xsp+14h] [xbp-9Ch]
  int v132; // [xsp+24h] [xbp-8Ch]
  System_String_o *value; // [xsp+28h] [xbp-88h]
  int32_t lv[2]; // [xsp+40h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  v18 = idx;
  if ( (byte_4D2E5A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantStatusNpComponent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&StringLiteral_20696/*"img_npgage_"*/);
    sub_1C93AD4(&StringLiteral_12031/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    sub_1C93AD4(&StringLiteral_20697/*"img_npgage_bg"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E5A2 = 1;
  }
  *(_QWORD *)lv = 0;
  entity = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_194;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_194;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_194;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_194;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_194;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_194;
  value = title;
  v132 = v18;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_194;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_194;
  v22 = 0;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v22 >= max_length )
      break;
    if ( (unsigned int)v22 >= max_length )
LABEL_195:
      sub_1C93D34(nameLabel);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v22];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20697/*"img_npgage_bg"*/, 0);
      guageSpriteList = this->fields.guageSpriteList;
      ++v22;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_194;
  }
  v131 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_194;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C69B68(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C69B68(v25);
  nameLabel = **(UILabel_o ***)(v27 + 184);
  if ( !nameLabel )
    goto LABEL_194;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_194;
  v28 = (TreasureDvcMaster_o *)nameLabel;
  v30 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v29 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v137.fields.currentCryptoKey = v30;
  *(_QWORD *)&v137.fields.fakeValue = v29;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v137, 0);
  if ( !v28 )
    goto LABEL_194;
  v31 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v28, (int32_t)nameLabel, tdId, 0);
  this->fields.tdEntity = v31;
  p_tdEntity = &this->fields.tdEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tdEntity, (int32_t)v31, v33, v34, v35, v36, v37, v38);
  if ( !this->fields.tdEntity )
    return;
  v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C69B68(v39);
  v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C69B68(v39);
  nameLabel = **(UILabel_o ***)(v41 + 184);
  if ( !nameLabel )
    goto LABEL_194;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  dvcId = tdId;
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v46 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v47 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v48 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v138.fields.currentCryptoKey = v46;
  *(_QWORD *)&v138.fields.fakeValue = v47;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v138, 0);
  if ( !v48 )
    goto LABEL_194;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v48,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                             ServantEntity->fields.id,
                             0);
  if ( !MasterData_object )
    goto LABEL_194;
  ServantLimitAddMaster__TryGetEntity(
    (ServantLimitAddMaster_o *)MasterData_object,
    &entity,
    (int32_t)nameLabel,
    ServantImageLimitSealAfter,
    0);
  v50 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_194;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0);
    if ( !rubyLabel )
      goto LABEL_194;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_194;
    v52 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0);
    if ( !v52 )
      goto LABEL_194;
    name = (System_String_o *)nameLabel;
    nameLabel = v52;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_194;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_194;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0);
    v55 = this->fields.tdEntity;
    if ( !v55 )
      goto LABEL_194;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_194;
    name = v55->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDRank(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_194;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0);
    if ( !npRankLabel )
      goto LABEL_194;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v58 = this->fields.tdEntity;
    if ( !v58 )
      goto LABEL_194;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_194;
    rank = v58->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDTypeText(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_194;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeTextCommonReleaseId(entity, 0);
    if ( !(_DWORD)nameLabel )
    {
      npTypeLabel = this->fields.npTypeLabel;
LABEL_191:
      nameLabel = (UILabel_o *)entity;
      if ( !entity )
        goto LABEL_194;
      nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0);
      if ( !npTypeLabel )
        goto LABEL_194;
      typeText = (System_String_o *)nameLabel;
      goto LABEL_76;
    }
    if ( !v50 )
      goto LABEL_194;
    nameLabel = (UILabel_o *)CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)v50, (int32_t)nameLabel, 0, 0, 0);
    npTypeLabel = this->fields.npTypeLabel;
    if ( ((unsigned __int8)nameLabel & 1) != 0 )
      goto LABEL_191;
  }
  else
  {
    npTypeLabel = this->fields.npTypeLabel;
  }
  if ( !*p_tdEntity || !npTypeLabel )
    goto LABEL_194;
  typeText = (*p_tdEntity)->fields.typeText;
LABEL_76:
  UILabel__set_text(npTypeLabel, typeText, 0);
  if ( !tdInfo )
    goto LABEL_194;
  TempOverwriteTreasureDeviceLv_k__BackingField = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  v62 = tdInfo->fields.lv;
  lv[1] = v62;
  if ( TempOverwriteTreasureDeviceLv_k__BackingField < 1 )
  {
    v63 = multiFlg;
    p_guageCount = &tdInfo->fields.guageCount;
  }
  else
  {
    lv[1] = TempOverwriteTreasureDeviceLv_k__BackingField;
    v63 = multiFlg;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    nameLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !nameLabel )
      goto LABEL_194;
    nameLabel = (UILabel_o *)TreasureDvcLvMaster__GetEntity(
                               (TreasureDvcLvMaster_o *)nameLabel,
                               tdInfo->fields.id,
                               TempOverwriteTreasureDeviceLv_k__BackingField,
                               0);
    if ( !nameLabel )
      goto LABEL_194;
    v62 = tdInfo->fields.lv;
    p_guageCount = (int32_t *)&nameLabel->fields.m_CancellationTokenSource;
  }
  v65 = *p_guageCount;
  npLevelLabel = this->fields.npLevelLabel;
  if ( v62 <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_194;
  }
  else
  {
    v67 = System_Int32__ToString((int32_t)&lv[1], 0);
    v68 = System_Int32__ToString((int)tdInfo + 24, 0);
    nameLabel = (UILabel_o *)System_String__Concat_64463988(v67, (System_String_o *)StringLiteral_1042/*"/"*/, v68, 0);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_194;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0);
  lv[0] = 100 * v65;
  v71 = (Il2CppObject *)System_Int32__ToString((int32_t)lv, 0);
  nameLabel = (UILabel_o *)System_String__Format(v70, v71, 0);
  if ( !maxGuageLabel )
    goto LABEL_194;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
  if ( !explanationLabel )
    goto LABEL_194;
  v73 = 4;
  if ( v63 )
    v73 = 8;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v73),
    0);
  v75 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
    v75 = sub_1C69B68(v74);
  v76 = *(_QWORD *)(*(_QWORD *)(v75 + 192) + 16LL);
  if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
    v76 = sub_1C69B68(v74);
  nameLabel = **(UILabel_o ***)(v76 + 184);
  if ( !nameLabel )
    goto LABEL_194;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_194;
  v77 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)nameLabel, (*p_tdEntity)->fields.id, lv[1], 0);
  if ( v77 )
    Detail = TreasureDvcLvEntity__getDetail(v77, 0);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v79 = ServantStatusNpComponent_TypeInfo;
  v80 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v79 = ServantStatusNpComponent_TypeInfo;
  }
  v81 = WrapControlText__textBBCodeAdjust(
          v80,
          Detail,
          v79->static_fields->DETAIL_FONT_SIZE,
          v79->static_fields->DETAIL_FONT_SIZE,
          0);
  v82 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v83 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v84 = v81;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v139.fields.currentCryptoKey = v82;
  *(_QWORD *)&v139.fields.fakeValue = v83;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v139, 0);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v85, dvcId, 0);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v87 = *p_cardId;
  v88 = this->fields.explanationLabel;
  this->fields.cardType = v87;
  if ( !v88 )
    goto LABEL_194;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v88->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  v129 = tdInfo;
  monitor = (int32_t)nameLabel->fields.onChange->monitor;
  if ( mHeight <= monitor )
  {
    v93 = 0;
  }
  else
  {
    v91 = this->fields.explanationLabel;
    if ( !v91 )
      goto LABEL_194;
    v92 = v91->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v93 = v92 - monitor;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0)) == 0 )
  {
LABEL_194:
    sub_1C93D2C(nameLabel, *(_QWORD *)&idx);
  }
  if ( v63 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_194;
    UILabel__set_text(nameLabel, value, 0);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    if ( !condLabel )
      goto LABEL_194;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0, 0);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0);
    *(float *)&inited = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( *(float *)&inited == INFINITY )
      v96 = 0x80000000;
    else
      v96 = (int)*(float *)&inited;
    if ( !byte_4D2B979 )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2B979 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v96 >= 0 )
      v97 = v96;
    else
      v97 = -v96;
    if ( v132 < 1 )
      this->fields.commandLimitCountAdjust = v131 - 1;
    else
      this->fields.commandLimitCountFix = v131;
    v99 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v99 + 309) & 1) == 0 )
      v99 = sub_1C69B68(inited);
    v100 = *(_QWORD *)(*(_QWORD *)(v99 + 192) + 16LL);
    if ( (*(_BYTE *)(v100 + 309) & 1) == 0 )
      v100 = sub_1C69B68(inited);
    nameLabel = **(UILabel_o ***)(v100 + 184);
    if ( !nameLabel )
      goto LABEL_194;
    v101 = DataManager__GetMasterData_object_(
             (DataManager_o *)nameLabel,
             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v102 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v103 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v104 = (ServantTreasureDeviceReleaseMaster_o *)v101;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v140.fields.currentCryptoKey = v102;
    *(_QWORD *)&v140.fields.fakeValue = v103;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v140, 0);
    if ( !v104 )
      goto LABEL_194;
    v98 = v97 + v93;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v104, (int32_t)nameLabel, 0);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash,
      (int32_t)CorrespondsCostume,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    v63 = multiFlg;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_194;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    if ( !nameLabel )
      goto LABEL_194;
    v98 = v93;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_3725A3C *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( !dispMaskTreasureDevice )
  {
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_194;
    goto LABEL_161;
  }
  if ( dispMaskTreasureDevice != 1 )
  {
    p_maskBase = &this->fields.maskBase;
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_194;
    if ( v129->fields.id != dvcId )
      goto LABEL_163;
LABEL_161:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_194;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_180;
  }
  p_maskBase = &this->fields.maskBase;
  nameLabel = (UILabel_o *)this->fields.maskBase;
  if ( !nameLabel )
    goto LABEL_194;
LABEL_163:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
  nameLabel = this->fields.maskInfoLabel;
  if ( !nameLabel )
    goto LABEL_194;
  UILabel__set_text(nameLabel, closedMessage, 0);
  v113 = ServantStatusNpComponent_TypeInfo;
  cctor_finished = ServantStatusNpComponent_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v113 = ServantStatusNpComponent_TypeInfo;
    cctor_finished = ServantStatusNpComponent_TypeInfo->_2.cctor_finished;
  }
  static_fields = v113->static_fields;
  v116 = *p_maskBase;
  DETAIL_LINE_HEIGHT = static_fields->DETAIL_LINE_HEIGHT;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v113);
    static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  }
  MASK_BASE_POS_Y = static_fields->MASK_BASE_POS_Y;
  v119 = DETAIL_LINE_HEIGHT * v84;
  if ( !v63 )
  {
    if ( v119 >= 0 )
      v122 = DETAIL_LINE_HEIGHT * v84;
    else
      v122 = v119 + 1;
    GameObjectExtensions__SetLocalPositionY(
      v116,
      (float)(MASK_BASE_POS_Y + static_fields->MaskAdjustPosY) - (float)(v122 >> 1),
      0);
    nameLabel = (UILabel_o *)this->fields.maskSprite;
    if ( nameLabel )
    {
      v121 = ServantStatusNpComponent_TypeInfo->static_fields->MaskAdjustHeight
           + v119
           + ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT;
      goto LABEL_179;
    }
    goto LABEL_194;
  }
  if ( v119 >= 0 )
    v120 = DETAIL_LINE_HEIGHT * v84;
  else
    v120 = v119 + 1;
  GameObjectExtensions__SetLocalPositionY(v116, MASK_BASE_POS_Y - (float)(v120 >> 1), 0);
  nameLabel = (UILabel_o *)this->fields.maskSprite;
  if ( !nameLabel )
    goto LABEL_194;
  v121 = ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v119;
LABEL_179:
  UIWidget__set_height((UIWidget_o *)nameLabel, v121, 0);
LABEL_180:
  this->fields.fixedCardLimitCountFlag = fixedCardLimitCount != 0;
  v123 = this->fields.guageSpriteList;
  this->fields.isCharaHide = isCharaHide == 1;
  if ( !v123 )
    goto LABEL_194;
  v124 = 0;
  v125 = 100;
  while ( (int)v124 < v65 )
  {
    v126 = v123->max_length;
    if ( (int)v124 >= v126 )
      break;
    if ( (unsigned int)v124 >= v126 )
      goto LABEL_195;
    v127 = v123->m_Items[v124];
    lv[0] = v125;
    v128 = System_Int32__ToString((int32_t)lv, 0);
    nameLabel = (UILabel_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_20696/*"img_npgage_"*/, v128, 0);
    if ( v127 )
    {
      UISprite__set_spriteName(v127, (System_String_o *)nameLabel, 0);
      v123 = this->fields.guageSpriteList;
      ++v124;
      v125 += 100;
      if ( v123 )
        continue;
    }
    goto LABEL_194;
  }
  this->fields._Adjust_k__BackingField = v98;
}


void ServantStatusNpComponent__SetCondColor(
        ServantStatusNpComponent_o *this,
        UnityEngine_Color_o labelColor,
        UnityEngine_Color_o spriteColor,
        const MethodInfo *method)
{
  UIWidget_o *condSprite; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  condSprite = (UIWidget_o *)this->fields.condSprite;
  if ( !condSprite
    || (a = labelColor.fields.a,
        b = labelColor.fields.b,
        g = labelColor.fields.g,
        r = labelColor.fields.r,
        UIWidget__set_color(condSprite, spriteColor, 0),
        (condSprite = (UIWidget_o *)this->fields.condLabel) == 0) )
  {
    sub_1C93D2C(condSprite, method);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(condSprite, v10, 0);
}


int32_t ServantStatusNpComponent__get_Adjust(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  return this->fields._Adjust_k__BackingField;
}


void ServantStatusNpComponent__set_Adjust(ServantStatusNpComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Adjust_k__BackingField = value;
}