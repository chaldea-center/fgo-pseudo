void ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4E75165 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusNpComponent_TypeInfo);
    byte_4E75165 = 1;
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

  if ( (byte_4E75164 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4E75164 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.fixedCardLimitCountFlag = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusNpComponent_o *v4; // x20
  int32_t CommandCardLimitCountStage; // w0
  int32_t v6; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v8; // w21
  int32_t commandLimitCountAdjust; // w21
  Il2CppObject *MasterData_object; // x20

  v4 = this;
  if ( (byte_4E75163 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (ServantStatusNpComponent_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E75163 = 1;
  }
  if ( !item )
    goto LABEL_23;
  CommandCardLimitCountStage = ServantStatusListViewItem__GetCommandCardLimitCountStage(item, 1, 0);
  v6 = LimitCountUtility__ConvertStageToLimitCount_42407000(CommandCardLimitCountStage, 0);
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v8 = v6;
  if ( commandLimitCountFix < 0 || v6 == commandLimitCountFix || !v4->fields.fixedCardLimitCountFlag )
  {
    commandLimitCountFix = v6;
  }
  else if ( v6 >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_23;
    commandLimitCountFix = v8;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v8,
            (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
      goto LABEL_23;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           commandLimitCountFix,
           (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0),
        !MasterData_object) )
  {
LABEL_23:
    sub_1D0F30C(this, item);
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
  ServantStatusListViewItem_o *v3; // x20
  ServantStatusNpComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  struct BattleCommandData_o *commandCardData; // x21
  Il2CppObject *commandCardPrefab; // x21
  ServantStatusNpComponent_o *v8; // x21
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  ServantStatusNpComponent_o *v13; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t SvtId; // w24
  const MethodInfo *v22; // x2
  int32_t CommandLimitCount; // w0
  int32_t cardType; // w25
  int32_t v25; // w26
  BattleCommandData_o *v26; // x27
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct BattleCommandData_o *v33; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  GrandQuestFolderBoardItem_o *p_commandCardComponent; // x19
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v3 = item;
  v4 = this;
  if ( (byte_4E75162 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCommandData_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1D0F0B4(&NGUITools_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_15334/*"Unlit/Transparent Colored"*/);
    this = (ServantStatusNpComponent_o *)sub_1D0F0B4(&StringLiteral_4624/*"CommandCard"*/);
    byte_4E75162 = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( v3 )
      {
        ServantStatusListViewItem__GetSvtId(v3, 1, 0);
        this = (ServantStatusNpComponent_o *)ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v5);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = (int)this;
          commandCardData->fields._loadsvtLimit = ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    v3,
                                                    1,
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
LABEL_30:
      sub_1D0F30C(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_30;
    v8 = this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8, 0);
    if ( !this )
      goto LABEL_30;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_4624/*"CommandCard"*/, 0);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_30;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !transform )
      goto LABEL_30;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
    if ( !byte_4E70C99 )
    {
      sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C99 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_4E70C9F )
    {
      sub_1D0F0B4(&UnityEngine_Quaternion_TypeInfo);
      byte_4E70C9F = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0);
    v44.fields.x = x;
    v44.fields.y = y;
    v44.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v44, 0);
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)v8,
      (const MethodInfo_32A835C *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v8,
                                           (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_30;
    v13 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    v13[1].fields.tdEntity = (struct TreasureDvcEntity_o *)gameObject;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v13[1].fields.tdEntity,
      (int32_t)gameObject,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( !v3 )
      goto LABEL_30;
    SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0);
    CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v22);
    cardType = v4->fields.cardType;
    v25 = CommandLimitCount;
    v26 = (BattleCommandData_o *)sub_1D0F300(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_48086632(v26, cardType, SvtId, v25, 0, -1, 0);
    v4->fields.commandCardData = v26;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v4->fields.commandCardData, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    v33 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                           v3,
                                           1,
                                           0);
    if ( !v33 )
      goto LABEL_30;
    v33->fields._loadsvtLimit = (int)this;
    tdEntity = v4->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_30;
    item = (ServantStatusListViewItem_o *)v4->fields.commandCardData;
    if ( !item )
      goto LABEL_30;
    LODWORD(item->fields.warBoardPartyItem) = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v13, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v13, (System_String_o *)StringLiteral_15334/*"Unlit/Transparent Colored"*/, 0);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v13, 1, 0, 1, 0, v4->fields.isCharaHide, 0);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v13;
    p_commandCardComponent = (GrandQuestFolderBoardItem_o *)&v4->fields.commandCardComponent;
    sub_1D0F058(p_commandCardComponent, (int32_t)v13, v36, v37, v38, v39, v40, v41);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.sortValue2;
    if ( !this )
      goto LABEL_30;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v8, layer, 0);
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
  int32_t v19; // w23
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v23; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  long double v26; // q0
  __int64 v27; // x8
  __int64 v28; // x0
  TreasureDvcMaster_o *v29; // x23
  __int64 v30; // x24
  __int64 v31; // x29
  struct TreasureDvcEntity_o *v32; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x29
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  long double v40; // q0
  __int64 v41; // x0
  __int64 v42; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v44; // x24
  __int64 v45; // x25
  ServantLimitAddMaster_o *v46; // x23
  int32_t v47; // w24
  bool v48; // w25
  Il2CppObject *Master_object; // x23
  UILabel_o *rubyLabel; // x24
  struct UILabel_o *v51; // x24
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v54; // x8
  struct UILabel_o *npRankLabel; // x24
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v57; // x8
  UILabel_o *npTypeLabel; // x23
  System_String_o *typeText; // x1
  int TempOverwriteTreasureDeviceLv_k__BackingField; // w23
  int32_t v61; // w8
  int32_t *p_guageCount; // x9
  int v63; // w28
  UILabel_o *npLevelLabel; // x23
  System_String_o *v65; // x24
  System_String_o *v66; // x0
  UILabel_o *maxGuageLabel; // x23
  System_String_o *v68; // x24
  Il2CppObject *v69; // x0
  UIWidget_o *explanationLabel; // x23
  __int64 v71; // x9
  long double v72; // q0
  __int64 v73; // x0
  __int64 v74; // x0
  TreasureDvcLvEntity_o *v75; // x0
  System_String_o *Detail; // x23
  ServantStatusNpComponent_c *v77; // x0
  UILabel_o *v78; // x24
  int32_t v79; // w0
  __int64 v80; // x23
  __int64 v81; // x24
  int32_t v82; // w29
  int32_t v83; // w0
  int32_t *p_cardId; // x8
  int32_t v85; // w9
  struct UILabel_o *v86; // x8
  int32_t mHeight; // w23
  int32_t monitor; // w8
  struct UILabel_o *v89; // x9
  int32_t v90; // w23
  int32_t v91; // w29
  UILabel_o *condLabel; // x23
  long double inited; // q0
  int v94; // w23
  int32_t v95; // w21
  int v96; // w29
  int32_t v97; // w24
  __int64 v98; // x0
  __int64 v99; // x0
  Il2CppObject *v100; // x0
  __int64 v101; // x24
  __int64 v102; // x25
  ServantTreasureDeviceReleaseMaster_o *v103; // x23
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  struct UnityEngine_GameObject_o **p_maskBase; // x23
  ServantStatusNpComponent_c *v112; // x0
  uint32_t cctor_finished; // w8
  struct ServantStatusNpComponent_StaticFields *static_fields; // x9
  UnityEngine_GameObject_o *v115; // x21
  int32_t DETAIL_LINE_HEIGHT; // w22
  float MASK_BASE_POS_Y; // s0
  int v118; // w22
  int v119; // w8
  int32_t v120; // w1
  int v121; // w8
  struct UISprite_array *v122; // x8
  __int64 v123; // x21
  int32_t v124; // w22
  int v125; // w9
  UISprite_o *v126; // x20
  System_String_o *v127; // x0
  int32_t v128; // [xsp+Ch] [xbp-A4h]
  bool v129; // [xsp+10h] [xbp-A0h]
  int32_t v130; // [xsp+14h] [xbp-9Ch]
  int v131; // [xsp+24h] [xbp-8Ch]
  System_String_o *value; // [xsp+28h] [xbp-88h]
  int32_t valuea; // [xsp+28h] [xbp-88h]
  int32_t lv[2]; // [xsp+40h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  v19 = idx;
  if ( (byte_4E75161 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&ServantStatusNpComponent_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&StringLiteral_20855/*"img_npgage_"*/);
    sub_1D0F0B4(&StringLiteral_12115/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_1D0F0B4(&StringLiteral_1043/*"/"*/);
    sub_1D0F0B4(&StringLiteral_20856/*"img_npgage_bg"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E75161 = 1;
  }
  *(_QWORD *)lv = 0;
  entity = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_191;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_191;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_191;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_191;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_191;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_191;
  value = title;
  v131 = v19;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_191;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_191;
  v23 = 0;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v23 >= max_length )
      break;
    if ( (unsigned int)v23 >= max_length )
LABEL_192:
      sub_1D0F314(nameLabel);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v23];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20856/*"img_npgage_bg"*/, 0);
      guageSpriteList = this->fields.guageSpriteList;
      ++v23;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_191;
  }
  v130 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_191;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0);
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1CE513C(v26);
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1CE513C(v26);
  nameLabel = **(UILabel_o ***)(v28 + 184);
  if ( !nameLabel )
    goto LABEL_191;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_191;
  v29 = (TreasureDvcMaster_o *)nameLabel;
  v31 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v30 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v136.fields.currentCryptoKey = v31;
  *(_QWORD *)&v136.fields.fakeValue = v30;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v136, 0);
  if ( !v29 )
    goto LABEL_191;
  v32 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v29, (int32_t)nameLabel, tdId, 0);
  this->fields.tdEntity = v32;
  p_tdEntity = &this->fields.tdEntity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.tdEntity, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  if ( !this->fields.tdEntity )
    return;
  v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1CE513C(v40);
  v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
  if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
    v42 = sub_1CE513C(v40);
  v129 = multiFlg;
  nameLabel = **(UILabel_o ***)(v42 + 184);
  if ( !nameLabel )
    goto LABEL_191;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v45 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v44 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v46 = (ServantLimitAddMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v137.fields.currentCryptoKey = v45;
  *(_QWORD *)&v137.fields.fakeValue = v44;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v137, 0);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(item, 1, 0);
  if ( !v46 )
    goto LABEL_191;
  ServantLimitAddMaster__TryGetEntity(v46, &entity, v47, (int32_t)nameLabel, 0);
  v48 = v129;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_191;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0);
    if ( !rubyLabel )
      goto LABEL_191;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_191;
    v51 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0);
    if ( !v51 )
      goto LABEL_191;
    name = (System_String_o *)nameLabel;
    nameLabel = v51;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_191;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_191;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0);
    v54 = this->fields.tdEntity;
    if ( !v54 )
      goto LABEL_191;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_191;
    name = v54->fields.name;
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
      goto LABEL_191;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0);
    if ( !npRankLabel )
      goto LABEL_191;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v57 = this->fields.tdEntity;
    if ( !v57 )
      goto LABEL_191;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_191;
    rank = v57->fields.rank;
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
      goto LABEL_191;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeTextCommonReleaseId(entity, 0);
    if ( !(_DWORD)nameLabel )
    {
      npTypeLabel = this->fields.npTypeLabel;
LABEL_188:
      nameLabel = (UILabel_o *)entity;
      if ( !entity )
        goto LABEL_191;
      nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0);
      if ( !npTypeLabel )
        goto LABEL_191;
      typeText = (System_String_o *)nameLabel;
      goto LABEL_73;
    }
    if ( !Master_object )
      goto LABEL_191;
    nameLabel = (UILabel_o *)CommonReleaseMaster__IsOpen(
                               (CommonReleaseMaster_o *)Master_object,
                               (int32_t)nameLabel,
                               0,
                               0,
                               0);
    npTypeLabel = this->fields.npTypeLabel;
    if ( ((unsigned __int8)nameLabel & 1) != 0 )
      goto LABEL_188;
  }
  else
  {
    npTypeLabel = this->fields.npTypeLabel;
  }
  if ( !*p_tdEntity || !npTypeLabel )
    goto LABEL_191;
  typeText = (*p_tdEntity)->fields.typeText;
LABEL_73:
  UILabel__set_text(npTypeLabel, typeText, 0);
  if ( !tdInfo )
    goto LABEL_191;
  TempOverwriteTreasureDeviceLv_k__BackingField = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  v61 = tdInfo->fields.lv;
  lv[1] = v61;
  if ( TempOverwriteTreasureDeviceLv_k__BackingField < 1 )
  {
    p_guageCount = &tdInfo->fields.guageCount;
  }
  else
  {
    lv[1] = TempOverwriteTreasureDeviceLv_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    nameLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !nameLabel )
      goto LABEL_191;
    nameLabel = (UILabel_o *)TreasureDvcLvMaster__GetEntity(
                               (TreasureDvcLvMaster_o *)nameLabel,
                               tdInfo->fields.id,
                               TempOverwriteTreasureDeviceLv_k__BackingField,
                               0);
    if ( !nameLabel )
      goto LABEL_191;
    v61 = tdInfo->fields.lv;
    p_guageCount = (int32_t *)&nameLabel->fields.m_CancellationTokenSource;
  }
  v63 = *p_guageCount;
  npLevelLabel = this->fields.npLevelLabel;
  if ( v61 <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_191;
  }
  else
  {
    v65 = System_Int32__ToString((int32_t)&lv[1], 0);
    v66 = System_Int32__ToString((int)tdInfo + 24, 0);
    nameLabel = (UILabel_o *)System_String__Concat_65601036(v65, (System_String_o *)StringLiteral_1043/*"/"*/, v66, 0);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_191;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12115/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0);
  lv[0] = 100 * v63;
  v69 = (Il2CppObject *)System_Int32__ToString((int32_t)lv, 0);
  nameLabel = (UILabel_o *)System_String__Format(v68, v69, 0);
  if ( !maxGuageLabel )
    goto LABEL_191;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
  if ( !explanationLabel )
    goto LABEL_191;
  v71 = 4;
  if ( v129 )
    v71 = 8;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v71),
    0);
  v73 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
    v73 = sub_1CE513C(v72);
  v74 = *(_QWORD *)(*(_QWORD *)(v73 + 192) + 16LL);
  if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
    v74 = sub_1CE513C(v72);
  nameLabel = **(UILabel_o ***)(v74 + 184);
  if ( !nameLabel )
    goto LABEL_191;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_191;
  v75 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)nameLabel, (*p_tdEntity)->fields.id, lv[1], 0);
  if ( v75 )
    Detail = TreasureDvcLvEntity__getDetail(v75, 0);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v77 = ServantStatusNpComponent_TypeInfo;
  v78 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v77 = ServantStatusNpComponent_TypeInfo;
  }
  v79 = WrapControlText__textBBCodeAdjust(
          v78,
          Detail,
          v77->static_fields->DETAIL_FONT_SIZE,
          v77->static_fields->DETAIL_FONT_SIZE,
          0);
  v81 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v80 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v82 = v79;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v138.fields.currentCryptoKey = v81;
  *(_QWORD *)&v138.fields.fakeValue = v80;
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v138, 0);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v83, tdId, 0);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v85 = *p_cardId;
  v86 = this->fields.explanationLabel;
  this->fields.cardType = v85;
  if ( !v86 )
    goto LABEL_191;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v86->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  v128 = v82;
  monitor = (int32_t)nameLabel->fields.onChange->monitor;
  if ( mHeight <= monitor )
  {
    v91 = 0;
  }
  else
  {
    v89 = this->fields.explanationLabel;
    if ( !v89 )
      goto LABEL_191;
    v90 = v89->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v91 = v90 - monitor;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0)) == 0 )
  {
LABEL_191:
    sub_1D0F30C(nameLabel, *(_QWORD *)&idx);
  }
  if ( v129 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_191;
    UILabel__set_text(nameLabel, value, 0);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    if ( !condLabel )
      goto LABEL_191;
    valuea = tdId;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0, 0);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0);
    *(float *)&inited = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( *(float *)&inited == INFINITY )
      v94 = 0x80000000;
    else
      v94 = (int)*(float *)&inited;
    if ( !byte_4E72499 )
    {
      sub_1D0F0B4(&System_Math_TypeInfo);
      byte_4E72499 = 1;
    }
    v95 = v91;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v94 >= 0 )
      v96 = v94;
    else
      v96 = -v94;
    if ( v131 < 1 )
      this->fields.commandLimitCountAdjust = v130 - 1;
    else
      this->fields.commandLimitCountFix = v130;
    v98 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v98 + 309) & 1) == 0 )
      v98 = sub_1CE513C(inited);
    v99 = *(_QWORD *)(*(_QWORD *)(v98 + 192) + 16LL);
    if ( (*(_BYTE *)(v99 + 309) & 1) == 0 )
      v99 = sub_1CE513C(inited);
    nameLabel = **(UILabel_o ***)(v99 + 184);
    if ( !nameLabel )
      goto LABEL_191;
    v100 = DataManager__GetMasterData_object_(
             (DataManager_o *)nameLabel,
             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v102 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v101 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v103 = (ServantTreasureDeviceReleaseMaster_o *)v100;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v139.fields.currentCryptoKey = v102;
    *(_QWORD *)&v139.fields.fakeValue = v101;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v139, 0);
    v97 = isCharaHide;
    if ( !v103 )
      goto LABEL_191;
    v91 = v96 + v95;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v103, (int32_t)nameLabel, 0);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash,
      (int32_t)CorrespondsCostume,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    v48 = v129;
    tdId = valuea;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_191;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    v97 = isCharaHide;
    if ( !nameLabel )
      goto LABEL_191;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_3800E04 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( !dispMaskTreasureDevice )
  {
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_191;
    goto LABEL_158;
  }
  if ( dispMaskTreasureDevice != 1 )
  {
    p_maskBase = &this->fields.maskBase;
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_191;
    if ( tdInfo->fields.id != tdId )
      goto LABEL_160;
LABEL_158:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_191;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_177;
  }
  p_maskBase = &this->fields.maskBase;
  nameLabel = (UILabel_o *)this->fields.maskBase;
  if ( !nameLabel )
    goto LABEL_191;
LABEL_160:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
  nameLabel = this->fields.maskInfoLabel;
  if ( !nameLabel )
    goto LABEL_191;
  UILabel__set_text(nameLabel, closedMessage, 0);
  v112 = ServantStatusNpComponent_TypeInfo;
  cctor_finished = ServantStatusNpComponent_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v112 = ServantStatusNpComponent_TypeInfo;
    cctor_finished = ServantStatusNpComponent_TypeInfo->_2.cctor_finished;
  }
  static_fields = v112->static_fields;
  v115 = *p_maskBase;
  DETAIL_LINE_HEIGHT = static_fields->DETAIL_LINE_HEIGHT;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v112);
    static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  }
  MASK_BASE_POS_Y = static_fields->MASK_BASE_POS_Y;
  v118 = DETAIL_LINE_HEIGHT * v128;
  if ( !v48 )
  {
    if ( v118 >= 0 )
      v121 = v118;
    else
      v121 = v118 + 1;
    GameObjectExtensions__SetLocalPositionY(
      v115,
      (float)(MASK_BASE_POS_Y + static_fields->MaskAdjustPosY) - (float)(v121 >> 1),
      0);
    nameLabel = (UILabel_o *)this->fields.maskSprite;
    if ( nameLabel )
    {
      v120 = ServantStatusNpComponent_TypeInfo->static_fields->MaskAdjustHeight
           + v118
           + ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT;
      goto LABEL_176;
    }
    goto LABEL_191;
  }
  if ( v118 >= 0 )
    v119 = v118;
  else
    v119 = v118 + 1;
  GameObjectExtensions__SetLocalPositionY(v115, MASK_BASE_POS_Y - (float)(v119 >> 1), 0);
  nameLabel = (UILabel_o *)this->fields.maskSprite;
  if ( !nameLabel )
    goto LABEL_191;
  v120 = ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v118;
LABEL_176:
  UIWidget__set_height((UIWidget_o *)nameLabel, v120, 0);
LABEL_177:
  v122 = this->fields.guageSpriteList;
  this->fields.fixedCardLimitCountFlag = fixedCardLimitCount != 0;
  this->fields.isCharaHide = v97 == 1;
  if ( !v122 )
    goto LABEL_191;
  v123 = 0;
  v124 = 100;
  while ( (int)v123 < v63 )
  {
    v125 = v122->max_length;
    if ( (int)v123 >= v125 )
      break;
    if ( (unsigned int)v123 >= v125 )
      goto LABEL_192;
    v126 = v122->m_Items[v123];
    lv[0] = v124;
    v127 = System_Int32__ToString((int32_t)lv, 0);
    nameLabel = (UILabel_o *)System_String__Concat_65562772((System_String_o *)StringLiteral_20855/*"img_npgage_"*/, v127, 0);
    if ( v126 )
    {
      UISprite__set_spriteName(v126, (System_String_o *)nameLabel, 0);
      v122 = this->fields.guageSpriteList;
      ++v123;
      v124 += 100;
      if ( v122 )
        continue;
    }
    goto LABEL_191;
  }
  this->fields._Adjust_k__BackingField = v91;
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
    sub_1D0F30C(condSprite, method);
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