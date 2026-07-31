void ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_5935D31 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusNpComponent_TypeInfo);
    byte_5935D31 = 1;
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
  System_Collections_Generic_HashSet_int__c *v3; // x0
  System_Collections_Generic_HashSet_int__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5935D30 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5935D30 = 1;
  }
  v3 = System_Collections_Generic_HashSet_int__TypeInfo;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(v3);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.costumeIdHash, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_5935D2F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (ServantStatusNpComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5935D2F = 1;
  }
  if ( !item )
    goto LABEL_23;
  CommandCardLimitCountStage = ServantStatusListViewItem__GetCommandCardLimitCountStage(item, 1, 0);
  v6 = LimitCountUtility__ConvertStageToLimitCount_47970664(CommandCardLimitCountStage, 0);
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
            (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
           (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0),
        !MasterData_object) )
  {
LABEL_23:
    sub_21FFECC(this, item);
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
  const MethodInfo *v5; // x2
  struct BattleCommandData_o *commandCardData; // x20
  BattleCommandComponent_o *commandCardComponent; // x8
  BattleCommandComponent_o *v8; // x20
  _BOOL4 isCharaHide; // w19
  Il2CppObject *commandCardPrefab; // x20
  ServantStatusNpComponent_o *v11; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  ServantStatusNpComponent_o *v16; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t SvtId; // w24
  const MethodInfo *v25; // x2
  int32_t CommandLimitCount; // w26
  int32_t cardType; // w25
  BattleCommandData_o *v28; // x27
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct BattleCommandData_o *v35; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  bool v37; // w21
  bool IsDispUnavailable; // w0
  MissionNaviTransitionBoardItem_o *p_commandCardComponent; // x19
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x1
  __int64 v47; // x2
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v3 = item;
  v4 = this;
  if ( (byte_5935D2E & 1) == 0 )
  {
    sub_21FFC50(&BattleCommandData_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_15702/*"Unlit/Transparent Colored"*/);
    this = (ServantStatusNpComponent_o *)sub_21FFC50(&StringLiteral_4749/*"CommandCard"*/);
    byte_5935D2E = 1;
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
          this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                 v3,
                                                 1,
                                                 0);
          commandCardComponent = v4->fields.commandCardComponent;
          commandCardData->fields._loadsvtLimit = (int)this;
          if ( commandCardComponent )
          {
            BattleCommandComponent__setData(commandCardComponent, v4->fields.commandCardData, 0, 0, 1, 0, 1, 0);
            this = (ServantStatusNpComponent_o *)v4->fields.tdEntity;
            if ( this )
            {
              v8 = v4->fields.commandCardComponent;
              isCharaHide = v4->fields.isCharaHide;
              this = (ServantStatusNpComponent_o *)TreasureDvcEntity__IsDispUnavailable((TreasureDvcEntity_o *)this, 0);
              if ( v8 )
              {
                BattleCommandComponent__updateView(v8, 1, 0, 1, 0, isCharaHide, (unsigned __int8)this & 1, 0);
                return;
              }
            }
          }
        }
      }
LABEL_32:
      sub_21FFECC(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_32;
    v11 = this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
    if ( !this )
      goto LABEL_32;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_4749/*"CommandCard"*/, 0);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_32;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !transform )
      goto LABEL_32;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_5931946 )
    {
      sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
      byte_5931946 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0);
    v50.fields.x = x;
    v50.fields.y = y;
    v50.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v50, 0);
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)v11,
      (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v11,
                                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_32;
    v16 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    v16[1].fields.tdEntity = (struct TreasureDvcEntity_o *)gameObject;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v16[1].fields.tdEntity,
      (int32_t)gameObject,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    if ( !v3 )
      goto LABEL_32;
    SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0);
    CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v25);
    cardType = v4->fields.cardType;
    v28 = (BattleCommandData_o *)sub_21FFEBC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_53546516(v28, cardType, SvtId, CommandLimitCount, 0, -1, 0);
    v4->fields.commandCardData = v28;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.commandCardData,
      (int32_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v35 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                           v3,
                                           1,
                                           0);
    if ( !v35 )
      goto LABEL_32;
    tdEntity = v4->fields.tdEntity;
    v35->fields._loadsvtLimit = (int)this;
    if ( !tdEntity )
      goto LABEL_32;
    item = (ServantStatusListViewItem_o *)v4->fields.commandCardData;
    if ( !item )
      goto LABEL_32;
    LODWORD(item->fields.warBoardPartyItem) = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v16, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v16, (System_String_o *)StringLiteral_15702/*"Unlit/Transparent Colored"*/, 0);
    this = (ServantStatusNpComponent_o *)v4->fields.tdEntity;
    if ( !this )
      goto LABEL_32;
    v37 = v4->fields.isCharaHide;
    IsDispUnavailable = TreasureDvcEntity__IsDispUnavailable((TreasureDvcEntity_o *)this, 0);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v16, 1, 0, 1, 0, v37, IsDispUnavailable, 0);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v16;
    p_commandCardComponent = (MissionNaviTransitionBoardItem_o *)&v4->fields.commandCardComponent;
    sub_21FFBF4(p_commandCardComponent, (int32_t)v16, v40, v41, v42, v43, v44, v45);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.sortValue2B;
    if ( !this )
      goto LABEL_32;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v46, v47);
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v11, layer, 0);
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
  int32_t v18; // w22
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v22; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  long double v25; // q0
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x2
  TreasureDvcMaster_o *v29; // x23
  __int64 v30; // x24
  __int64 v31; // x25
  struct TreasureDvcEntity_o *v32; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x29
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  long double v40; // q0
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v46; // x24
  __int64 v47; // x25
  int32_t v48; // w24
  __int64 v49; // x1
  __int64 v50; // x2
  Il2CppObject *Master_object; // x23
  UILabel_o *rubyLabel; // x24
  struct UILabel_o *v53; // x24
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v56; // x8
  struct UILabel_o *npRankLabel; // x24
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v59; // x8
  struct UILabel_o *npTypeLabel; // x23
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v62; // x8
  __int64 v63; // x2
  int TempOverwriteTreasureDeviceLv_k__BackingField; // w23
  int32_t v65; // w8
  int32_t *p_guageCount; // x9
  int v67; // w22
  UILabel_o *npLevelLabel; // x23
  System_String_o *v69; // x24
  System_String_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  UILabel_o *maxGuageLabel; // x23
  System_String_o *v74; // x24
  Il2CppObject *v75; // x0
  __int64 v76; // x2
  UIWidget_o *explanationLabel; // x23
  int v78; // w8
  int32_t *p_monitor; // x8
  long double v80; // q0
  __int64 v81; // x0
  __int64 v82; // x0
  TreasureDvcLvEntity_o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  System_String_o *Detail; // x23
  ServantStatusNpComponent_c *v87; // x0
  UILabel_o *v88; // x28
  __int64 v89; // x1
  __int64 v90; // x2
  int32_t v91; // w29
  __int64 v92; // x23
  __int64 v93; // x24
  int32_t v94; // w0
  int32_t v95; // w24
  __int64 v96; // x2
  int32_t *p_cardId; // x8
  int32_t v98; // w9
  struct UILabel_o *v99; // x8
  int32_t mHeight; // w23
  int32_t monitor; // w8
  struct UILabel_o *v102; // x9
  int32_t v103; // w23
  int32_t v104; // w28
  __int64 v105; // x2
  UILabel_o *condLabel; // x23
  __int64 v107; // x2
  long double v108; // q0
  int v109; // w23
  int32_t v110; // w21
  int v111; // w28
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  Il2CppObject *v116; // x23
  __int64 v117; // x24
  __int64 v118; // x25
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  __int64 v126; // x1
  __int64 v127; // x2
  ServantStatusNpComponent_c *v128; // x0
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *maskBase; // x21
  int v131; // w23
  int v132; // w9
  int v133; // w9
  int32_t MASK_DEFAULT_HEIGHT; // w8
  int v135; // w9
  struct UISprite_array *v136; // x8
  __int64 v137; // x21
  int32_t v138; // w24
  int v139; // w9
  UISprite_o *v140; // x20
  System_String_o *v141; // x0
  int32_t v142; // [xsp+Ch] [xbp-A4h]
  int v143; // [xsp+1Ch] [xbp-94h]
  System_String_o *value; // [xsp+20h] [xbp-90h]
  TreasureDvcInfo_o *valuea; // [xsp+20h] [xbp-90h]
  int32_t treasureDeviceId; // [xsp+38h] [xbp-78h]
  int32_t lv[2]; // [xsp+40h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16

  v18 = idx;
  if ( (byte_5935D2D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantStatusNpComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&StringLiteral_21412/*"img_npgage_"*/);
    sub_21FFC50(&StringLiteral_12433/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_21413/*"img_npgage_bg"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935D2D = 1;
  }
  nameLabel = this->fields.nameLabel;
  *(_QWORD *)lv = 0;
  entity = 0;
  if ( !nameLabel )
    goto LABEL_189;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_189;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_189;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_189;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_189;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_189;
  value = title;
  v143 = v18;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_189;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_189;
  v22 = 0;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v22 >= max_length )
      break;
    if ( (unsigned int)v22 >= max_length )
LABEL_192:
      sub_21FFED4(nameLabel);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v22];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_21413/*"img_npgage_bg"*/, 0);
      guageSpriteList = this->fields.guageSpriteList;
      ++v22;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_189;
  }
  v142 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_189;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    v26 = sub_2237AF8(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_2237AF8(v25);
  nameLabel = **(UILabel_o ***)(v27 + 184);
  if ( !nameLabel )
    goto LABEL_189;
  treasureDeviceId = tdId;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_189;
  v29 = (TreasureDvcMaster_o *)nameLabel;
  v30 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v31 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx, v28);
  *(_QWORD *)&v150.fields.currentCryptoKey = v30;
  *(_QWORD *)&v150.fields.fakeValue = v31;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v150, 0);
  if ( !v29 )
    goto LABEL_189;
  v32 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v29, (int32_t)nameLabel, treasureDeviceId, 0);
  this->fields.tdEntity = v32;
  p_tdEntity = &this->fields.tdEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tdEntity, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  if ( !this->fields.tdEntity )
    return;
  v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v41 + 309) & 1) == 0 )
    v41 = sub_2237AF8(v40);
  v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
  if ( (*(_WORD *)(v42 + 309) & 1) == 0 )
    v42 = sub_2237AF8(v40);
  nameLabel = **(UILabel_o ***)(v42 + 184);
  if ( !nameLabel )
    goto LABEL_189;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v46 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v47 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44);
  *(_QWORD *)&v151.fields.currentCryptoKey = v46;
  *(_QWORD *)&v151.fields.fakeValue = v47;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v151, 0);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(item, 1, 0);
  if ( !MasterData_object )
    goto LABEL_189;
  ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)MasterData_object, &entity, v48, (int32_t)nameLabel, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49, v50);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)entity) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_189;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0);
    if ( !rubyLabel )
      goto LABEL_189;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_189;
    v53 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0);
    if ( !v53 )
      goto LABEL_189;
    name = (System_String_o *)nameLabel;
    nameLabel = v53;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_189;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_189;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0);
    v56 = this->fields.tdEntity;
    if ( !v56 )
      goto LABEL_189;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_189;
    name = v56->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)entity) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDRank(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_189;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0);
    if ( !npRankLabel )
      goto LABEL_189;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v59 = this->fields.tdEntity;
    if ( !v59 )
      goto LABEL_189;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_189;
    rank = v59->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( ((unsigned __int8)nameLabel & 1) == 0 )
    goto LABEL_71;
  nameLabel = (UILabel_o *)entity;
  if ( !entity )
    goto LABEL_71;
  nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDTypeText(entity, 0);
  if ( ((unsigned __int8)nameLabel & 1) == 0 )
    goto LABEL_71;
  nameLabel = (UILabel_o *)entity;
  if ( !entity )
    goto LABEL_189;
  nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeTextCommonReleaseId(entity, 0);
  if ( !(_DWORD)nameLabel )
    goto LABEL_68;
  if ( !Master_object )
    goto LABEL_189;
  nameLabel = (UILabel_o *)CommonReleaseMaster__IsOpen(
                             (CommonReleaseMaster_o *)Master_object,
                             (int32_t)nameLabel,
                             0,
                             0,
                             0);
  if ( ((unsigned __int8)nameLabel & 1) != 0 )
  {
LABEL_68:
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_189;
    npTypeLabel = this->fields.npTypeLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0);
    if ( !npTypeLabel )
      goto LABEL_189;
    typeText = (System_String_o *)nameLabel;
    nameLabel = npTypeLabel;
  }
  else
  {
LABEL_71:
    v62 = this->fields.tdEntity;
    if ( !v62 )
      goto LABEL_189;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_189;
    typeText = v62->fields.typeText;
  }
  UILabel__set_text(nameLabel, typeText, 0);
  if ( !tdInfo )
    goto LABEL_189;
  TempOverwriteTreasureDeviceLv_k__BackingField = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  v65 = tdInfo->fields.lv;
  lv[1] = v65;
  if ( TempOverwriteTreasureDeviceLv_k__BackingField < 1 )
  {
    p_guageCount = &tdInfo->fields.guageCount;
  }
  else
  {
    lv[1] = TempOverwriteTreasureDeviceLv_k__BackingField;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx, v63);
    nameLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !nameLabel )
      goto LABEL_189;
    nameLabel = (UILabel_o *)TreasureDvcLvMaster__GetEntity(
                               (TreasureDvcLvMaster_o *)nameLabel,
                               tdInfo->fields.id,
                               TempOverwriteTreasureDeviceLv_k__BackingField,
                               0);
    if ( !nameLabel )
      goto LABEL_189;
    v65 = tdInfo->fields.lv;
    p_guageCount = (int32_t *)&nameLabel->fields.m_CancellationTokenSource;
  }
  v67 = *p_guageCount;
  npLevelLabel = this->fields.npLevelLabel;
  if ( v65 <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_189;
  }
  else
  {
    v69 = System_Int32__ToString((int32_t)&lv[1], 0);
    v70 = System_Int32__ToString((int)tdInfo + 24, 0);
    nameLabel = (UILabel_o *)System_String__Concat_75481624(v69, (System_String_o *)StringLiteral_1123/*"/"*/, v70, 0);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_189;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71, v72);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0);
  lv[0] = 100 * v67;
  v75 = (Il2CppObject *)System_Int32__ToString((int32_t)lv, 0);
  nameLabel = (UILabel_o *)System_String__Format(v74, v75, 0);
  if ( !maxGuageLabel )
    goto LABEL_189;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  v78 = *(&ServantStatusNpComponent_TypeInfo->_2.cctor_finished + 1);
  if ( multiFlg )
  {
    if ( !v78 )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx, v76);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onChange->monitor;
  }
  else
  {
    if ( !v78 )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx, v76);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onChange->klass + 1;
  }
  if ( !explanationLabel )
    goto LABEL_189;
  UIWidget__set_height(explanationLabel, *p_monitor, 0);
  v81 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v81 + 309) & 1) == 0 )
    v81 = sub_2237AF8(v80);
  v82 = *(_QWORD *)(*(_QWORD *)(v81 + 192) + 16LL);
  if ( (*(_WORD *)(v82 + 309) & 1) == 0 )
    v82 = sub_2237AF8(v80);
  nameLabel = **(UILabel_o ***)(v82 + 184);
  if ( !nameLabel )
    goto LABEL_189;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_189;
  v83 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)nameLabel, (*p_tdEntity)->fields.id, lv[1], 0);
  if ( v83 )
    Detail = TreasureDvcLvEntity__getDetail(v83, 0);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v87 = ServantStatusNpComponent_TypeInfo;
  v88 = this->fields.explanationLabel;
  if ( !*(&ServantStatusNpComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, v84, v85);
    v87 = ServantStatusNpComponent_TypeInfo;
  }
  v91 = WrapControlText__textBBCodeAdjust(
          v88,
          Detail,
          v87->static_fields->DETAIL_FONT_SIZE,
          v87->static_fields->DETAIL_FONT_SIZE,
          0);
  v92 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v93 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v89, v90);
  *(_QWORD *)&v152.fields.currentCryptoKey = v92;
  *(_QWORD *)&v152.fields.fakeValue = v93;
  v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v152, 0);
  v95 = treasureDeviceId;
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v94, treasureDeviceId, 0);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v98 = *p_cardId;
  v99 = this->fields.explanationLabel;
  this->fields.cardType = v98;
  if ( !v99 )
LABEL_189:
    sub_21FFECC(nameLabel, *(_QWORD *)&idx);
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v99->fields.mHeight;
  if ( !*(&ServantStatusNpComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx, v96);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor = (int32_t)nameLabel->fields.onChange->monitor;
  if ( mHeight <= monitor )
  {
    v104 = 0;
  }
  else
  {
    v102 = this->fields.explanationLabel;
    if ( !v102 )
      goto LABEL_189;
    v103 = v102->fields.mHeight;
    if ( !HIDWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel, *(_QWORD *)&idx, v96);
      monitor = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v104 = v103 - monitor;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  if ( multiFlg )
  {
    if ( !nameLabel )
      goto LABEL_189;
    nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
    if ( !nameLabel )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_189;
    UILabel__set_text(nameLabel, value, 0);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( !*(&ServantStatusNpComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx, v105);
    if ( !condLabel )
      goto LABEL_189;
    valuea = tdInfo;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0, 0);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0);
    *(float *)&v108 = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( *(float *)&v108 == INFINITY )
      v109 = 0x80000000;
    else
      v109 = (int)*(float *)&v108;
    if ( !byte_5932DF6 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5932DF6 = 1;
    }
    v110 = v104;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v108 = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&idx, v107);
    if ( v109 >= 0 )
      v111 = v109;
    else
      v111 = -v109;
    if ( v143 < 1 )
      this->fields.commandLimitCountAdjust = v142 - 1;
    else
      this->fields.commandLimitCountFix = v142;
    v112 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v112 + 309) & 1) == 0 )
      v112 = sub_2237AF8(v108);
    v113 = *(_QWORD *)(*(_QWORD *)(v112 + 192) + 16LL);
    if ( (*(_WORD *)(v113 + 309) & 1) == 0 )
      v113 = sub_2237AF8(v108);
    nameLabel = **(UILabel_o ***)(v113 + 184);
    if ( !nameLabel )
      goto LABEL_189;
    v116 = DataManager__GetMasterData_object_(
             (DataManager_o *)nameLabel,
             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v117 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v118 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v114, v115);
    *(_QWORD *)&v153.fields.currentCryptoKey = v117;
    *(_QWORD *)&v153.fields.fakeValue = v118;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v153, 0);
    if ( !v116 )
      goto LABEL_189;
    v104 = v111 + v110;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                           (ServantTreasureDeviceReleaseMaster_o *)v116,
                           (int32_t)nameLabel,
                           0);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.costumeIdHash,
      (int32_t)CorrespondsCostume,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    v95 = treasureDeviceId;
    tdInfo = valuea;
  }
  else
  {
    if ( !nameLabel )
      goto LABEL_189;
    nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
    if ( !nameLabel )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_189;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    if ( !nameLabel )
      goto LABEL_189;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( dispMaskTreasureDevice && (dispMaskTreasureDevice == 1 || tdInfo->fields.id != v95) )
  {
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( nameLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
      nameLabel = this->fields.maskInfoLabel;
      if ( nameLabel )
      {
        UILabel__set_text(nameLabel, closedMessage, 0);
        v128 = ServantStatusNpComponent_TypeInfo;
        if ( !*(&ServantStatusNpComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, v126, v127);
          v128 = ServantStatusNpComponent_TypeInfo;
        }
        static_fields = v128->static_fields;
        maskBase = this->fields.maskBase;
        v131 = static_fields->DETAIL_LINE_HEIGHT * v91;
        v132 = *(&v128->_2.cctor_finished + 1);
        if ( multiFlg )
        {
          if ( !v132 )
          {
            j_il2cpp_runtime_class_init_0(v128, v126, v127);
            static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
          }
          if ( v131 >= 0 )
            v133 = v131;
          else
            v133 = v131 + 1;
          GameObjectExtensions__SetLocalPositionY(maskBase, static_fields->MASK_BASE_POS_Y - (float)(v133 >> 1), 0);
          nameLabel = (UILabel_o *)this->fields.maskSprite;
          if ( nameLabel )
          {
            MASK_DEFAULT_HEIGHT = ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT;
LABEL_181:
            UIWidget__set_height((UIWidget_o *)nameLabel, MASK_DEFAULT_HEIGHT + v131, 0);
            goto LABEL_182;
          }
        }
        else
        {
          if ( !v132 )
          {
            j_il2cpp_runtime_class_init_0(v128, v126, v127);
            static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
          }
          if ( v131 >= 0 )
            v135 = v131;
          else
            v135 = v131 + 1;
          GameObjectExtensions__SetLocalPositionY(
            maskBase,
            (float)(static_fields->MASK_BASE_POS_Y + static_fields->MaskAdjustPosY) - (float)(v135 >> 1),
            0);
          nameLabel = (UILabel_o *)this->fields.maskSprite;
          if ( nameLabel )
          {
            MASK_DEFAULT_HEIGHT = ServantStatusNpComponent_TypeInfo->static_fields->MaskAdjustHeight
                                + ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT;
            goto LABEL_181;
          }
        }
      }
    }
    goto LABEL_189;
  }
  nameLabel = (UILabel_o *)this->fields.maskBase;
  if ( !nameLabel )
    goto LABEL_189;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  nameLabel = this->fields.maskInfoLabel;
  if ( !nameLabel )
    goto LABEL_189;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_182:
  v136 = this->fields.guageSpriteList;
  this->fields.fixedCardLimitCountFlag = fixedCardLimitCount != 0;
  this->fields.isCharaHide = isCharaHide == 1;
  if ( !v136 )
    goto LABEL_189;
  v137 = 0;
  v138 = 100;
  while ( 1 )
  {
    v139 = v136->max_length;
    if ( (int)v137 >= v139 || (int)v137 >= v67 )
      break;
    if ( (unsigned int)v137 >= v139 )
      goto LABEL_192;
    lv[0] = v138;
    v140 = v136->m_Items[v137];
    v141 = System_Int32__ToString((int32_t)lv, 0);
    nameLabel = (UILabel_o *)System_String__Concat_75438412((System_String_o *)StringLiteral_21412/*"img_npgage_"*/, v141, 0);
    if ( v140 )
    {
      UISprite__set_spriteName(v140, (System_String_o *)nameLabel, 0);
      v136 = this->fields.guageSpriteList;
      ++v137;
      v138 += 100;
      if ( v136 )
        continue;
    }
    goto LABEL_189;
  }
  this->fields._Adjust_k__BackingField = v104;
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
    sub_21FFECC(condSprite, method);
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